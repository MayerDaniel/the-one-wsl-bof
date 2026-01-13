using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using NtApiDotNet.Ndr;

namespace ComProxyDump
{
    class Program
    {
        [DllImport("kernel32.dll", SetLastError = true, CharSet = CharSet.Unicode)]
        static extern IntPtr LoadLibraryEx(string lpFileName, IntPtr hFile, uint dwFlags);

        [DllImport("kernel32.dll", SetLastError = true)]
        static extern IntPtr GetProcAddress(IntPtr hModule, string lpProcName);

        [DllImport("kernel32.dll", SetLastError = true)]
        static extern bool FreeLibrary(IntPtr hModule);

        const uint LOAD_WITH_ALTERED_SEARCH_PATH = 0x00000008;

        // DllGetClassObject delegate
        [UnmanagedFunctionPointer(CallingConvention.StdCall)]
        delegate int DllGetClassObjectDelegate(
            [In] ref Guid rclsid,
            [In] ref Guid riid,
            [Out] out IntPtr ppv);

        // IPSFactoryBuffer interface
        static readonly Guid IID_IPSFactoryBuffer = new Guid("D5F569D0-593B-101A-B569-08002B2DBF7A");

        // GetProxyDllInfo delegate - some proxy DLLs export this
        [UnmanagedFunctionPointer(CallingConvention.StdCall)]
        delegate void GetProxyDllInfoDelegate(out IntPtr ppProxyFileList, out IntPtr pClsid);

        static void Main(string[] args)
        {
            if (args.Length < 1)
            {
                Console.WriteLine("Usage: ComProxyDump.exe <path-to-proxy-dll> [clsid] [output.idl]");
                Console.WriteLine();
                Console.WriteLine("Loads a COM proxy/stub DLL and dumps interface definitions as IDL.");
                Console.WriteLine();
                Console.WriteLine("If the DLL exports GetProxyDllInfo, the CLSID is optional.");
                Console.WriteLine("Otherwise, you must provide the proxy CLSID.");
                Console.WriteLine();
                Console.WriteLine("Examples:");
                Console.WriteLine("  ComProxyDump.exe proxy.dll");
                Console.WriteLine("  ComProxyDump.exe proxy.dll {A9B7A1B9-0671-405C-95F1-E0612CB4CE7E}");
                Console.WriteLine("  ComProxyDump.exe proxy.dll {A9B7A1B9-0671-405C-95F1-E0612CB4CE7E} output.idl");
                return;
            }

            string dllPath = Path.GetFullPath(args[0]);
            Guid? clsid = null;
            string outputPath = null;

            // Parse remaining arguments
            for (int i = 1; i < args.Length; i++)
            {
                if (args[i].StartsWith("{") || Guid.TryParse(args[i], out _))
                {
                    clsid = Guid.Parse(args[i].Trim('{', '}'));
                }
                else
                {
                    outputPath = args[i];
                }
            }

            if (!File.Exists(dllPath))
            {
                Console.Error.WriteLine($"File not found: {dllPath}");
                Environment.Exit(1);
                return;
            }

            Console.Error.WriteLine($"Loading: {dllPath}");

            IntPtr hModule = LoadLibraryEx(dllPath, IntPtr.Zero, LOAD_WITH_ALTERED_SEARCH_PATH);
            if (hModule == IntPtr.Zero)
            {
                Console.Error.WriteLine($"Failed to load DLL: error {Marshal.GetLastWin32Error()}");
                Environment.Exit(1);
                return;
            }

            try
            {
                // First, try GetProxyDllInfo if exported
                IntPtr pGetProxyDllInfo = GetProcAddress(hModule, "GetProxyDllInfo");
                if (pGetProxyDllInfo != IntPtr.Zero)
                {
                    Console.Error.WriteLine("Found GetProxyDllInfo export - using it to get proxy info");
                    DumpViaGetProxyDllInfo(pGetProxyDllInfo, dllPath, outputPath);
                    return;
                }

                // Otherwise, need CLSID to call DllGetClassObject
                if (!clsid.HasValue)
                {
                    Console.Error.WriteLine("DLL does not export GetProxyDllInfo.");
                    Console.Error.WriteLine("You must provide the proxy CLSID as an argument.");
                    Console.Error.WriteLine();
                    Console.Error.WriteLine("To find the CLSID, check the registry or the DLL's resources.");
                    Environment.Exit(1);
                    return;
                }

                IntPtr pDllGetClassObject = GetProcAddress(hModule, "DllGetClassObject");
                if (pDllGetClassObject == IntPtr.Zero)
                {
                    Console.Error.WriteLine("DLL does not export DllGetClassObject");
                    Environment.Exit(1);
                    return;
                }

                Console.Error.WriteLine($"Using CLSID: {clsid.Value}");
                DumpViaDllGetClassObject(pDllGetClassObject, clsid.Value, dllPath, outputPath);
            }
            catch (Exception ex)
            {
                Console.Error.WriteLine($"Error: {ex.Message}");
                Console.Error.WriteLine($"Full exception: {ex}");
                Environment.Exit(1);
            }
            finally
            {
                FreeLibrary(hModule);
            }
        }

        static void DumpViaGetProxyDllInfo(IntPtr pGetProxyDllInfo, string dllPath, string outputPath)
        {
            var getProxyDllInfo = Marshal.GetDelegateForFunctionPointer<GetProxyDllInfoDelegate>(pGetProxyDllInfo);
            
            getProxyDllInfo(out IntPtr pProxyFileList, out IntPtr pClsid);
            
            Console.Error.WriteLine($"ProxyFileList: 0x{pProxyFileList.ToInt64():X}");
            Console.Error.WriteLine($"CLSID ptr: 0x{pClsid.ToInt64():X}");

            if (pProxyFileList == IntPtr.Zero)
            {
                Console.Error.WriteLine("GetProxyDllInfo returned null ProxyFileList");
                Environment.Exit(1);
                return;
            }

            // Read the CLSID
            if (pClsid != IntPtr.Zero)
            {
                Guid clsid = Marshal.PtrToStructure<Guid>(pClsid);
                Console.Error.WriteLine($"Proxy CLSID: {clsid}");
            }

            // Use NdrParser to read from the ProxyFileInfo array
            var parser = new NdrParser();
            var proxies = parser.ReadFromProxyFileInfoArray(pProxyFileList);
            
            OutputProxies(proxies, dllPath, outputPath);
        }

        static void DumpViaDllGetClassObject(IntPtr pDllGetClassObject, Guid clsid, string dllPath, string outputPath)
        {
            var dllGetClassObject = Marshal.GetDelegateForFunctionPointer<DllGetClassObjectDelegate>(pDllGetClassObject);

            Guid iidPSFactory = IID_IPSFactoryBuffer;
            int hr = dllGetClassObject(ref clsid, ref iidPSFactory, out IntPtr pFactory);
            
            if (hr != 0)
            {
                Console.Error.WriteLine($"DllGetClassObject failed: HRESULT 0x{hr:X8}");
                
                // Try IClassFactory instead
                Guid iidClassFactory = new Guid("00000001-0000-0000-C000-000000000046");
                hr = dllGetClassObject(ref clsid, ref iidClassFactory, out pFactory);
                if (hr != 0)
                {
                    Console.Error.WriteLine($"DllGetClassObject with IClassFactory also failed: HRESULT 0x{hr:X8}");
                    Environment.Exit(1);
                    return;
                }
                Console.Error.WriteLine("Got IClassFactory, but need IPSFactoryBuffer for proxy info");
                Marshal.Release(pFactory);
                Environment.Exit(1);
                return;
            }

            Console.Error.WriteLine($"Got IPSFactoryBuffer at 0x{pFactory.ToInt64():X}");

            try
            {
                // The IPSFactoryBuffer vtable contains pointers we can use to find the proxy info
                // vtable[0] = QueryInterface
                // vtable[1] = AddRef  
                // vtable[2] = Release
                // vtable[3] = CreateProxy
                // vtable[4] = CreateStub
                
                // Read the vtable pointer
                IntPtr pVtable = Marshal.ReadIntPtr(pFactory);
                Console.Error.WriteLine($"VTable at 0x{pVtable.ToInt64():X}");

                // The CStdPSFactoryBuffer structure contains a pointer to ProxyFileList
                // We need to find it by examining the factory's data
                
                // For standard MIDL-generated proxies, the factory object layout is:
                // +0x00: vtable pointer
                // +0x08: ref count (on x64)
                // +0x10: ProxyFileList pointer (on x64)
                
                // Try to read ProxyFileList from the factory object
                IntPtr pProxyFileList = Marshal.ReadIntPtr(pFactory, IntPtr.Size * 2);
                Console.Error.WriteLine($"Potential ProxyFileList at 0x{pProxyFileList.ToInt64():X}");

                if (pProxyFileList != IntPtr.Zero)
                {
                    try
                    {
                        var parser = new NdrParser();
                        var proxies = parser.ReadFromProxyFileInfoArray(pProxyFileList);
                        OutputProxies(proxies, dllPath, outputPath);
                        return;
                    }
                    catch (Exception ex)
                    {
                        Console.Error.WriteLine($"Failed to parse from offset +0x10: {ex.Message}");
                    }
                }

                // Try offset +0x08 (32-bit or different layout)
                pProxyFileList = Marshal.ReadIntPtr(pFactory, IntPtr.Size);
                Console.Error.WriteLine($"Trying ProxyFileList at offset +{IntPtr.Size}: 0x{pProxyFileList.ToInt64():X}");
                
                if (pProxyFileList != IntPtr.Zero)
                {
                    try
                    {
                        var parser = new NdrParser();
                        var proxies = parser.ReadFromProxyFileInfoArray(pProxyFileList);
                        OutputProxies(proxies, dllPath, outputPath);
                        return;
                    }
                    catch (Exception ex)
                    {
                        Console.Error.WriteLine($"Failed to parse from offset +{IntPtr.Size}: {ex.Message}");
                    }
                }

                Console.Error.WriteLine("Could not locate ProxyFileList in factory object");
                Console.Error.WriteLine("The proxy may use a non-standard layout");
                Environment.Exit(1);
            }
            finally
            {
                Marshal.Release(pFactory);
            }
        }

        // Well-known interface IIDs to names
        static readonly Dictionary<Guid, string> KnownInterfaces = new Dictionary<Guid, string>
        {
            { new Guid("00000000-0000-0000-C000-000000000046"), "IUnknown" },
            { new Guid("00000001-0000-0000-C000-000000000046"), "IClassFactory" },
            { new Guid("00020400-0000-0000-C000-000000000046"), "IDispatch" },
            { new Guid("0000010c-0000-0000-C000-000000000046"), "IPersist" },
            { new Guid("0000010b-0000-0000-C000-000000000046"), "IPersistFile" },
            { new Guid("00000109-0000-0000-C000-000000000046"), "IPersistStream" },
            { new Guid("0000000c-0000-0000-C000-000000000046"), "IStream" },
            { new Guid("0000000d-0000-0000-C000-000000000046"), "IEnumSTATSTG" },
            { new Guid("0000000b-0000-0000-C000-000000000046"), "IStorage" },
            { new Guid("00000100-0000-0000-C000-000000000046"), "IEnumUnknown" },
            { new Guid("00000101-0000-0000-C000-000000000046"), "IEnumString" },
            { new Guid("0000010e-0000-0000-C000-000000000046"), "IDataObject" },
            { new Guid("00000118-0000-0000-C000-000000000046"), "IOleClientSite" },
            { new Guid("00000112-0000-0000-C000-000000000046"), "IOleObject" },
            { new Guid("B196B284-BAB4-101A-B69C-00AA00341D07"), "IConnectionPointContainer" },
            { new Guid("B196B286-BAB4-101A-B69C-00AA00341D07"), "IConnectionPoint" },
        };

        static string GetInterfaceName(Guid iid)
        {
            if (KnownInterfaces.TryGetValue(iid, out string name))
                return name;
            return iid.ToString();
        }

        static string FormatNdrType(NdrBaseTypeReference type)
        {
            if (type == null)
                return "void";
            
            // Use ToString to get a string representation of the type
            return type.ToString();
        }

        static void OutputProxies(IEnumerable<NdrComProxyDefinition> proxies, string dllPath, string outputPath)
        {
            var proxyList = proxies.ToList();
            Console.Error.WriteLine($"Found {proxyList.Count} interface(s)");

            var output = new StringWriter();
            var formatter = DefaultNdrFormatter.Create();

            output.WriteLine($"// Auto-generated from: {Path.GetFileName(dllPath)}");
            output.WriteLine($"// Generated: {DateTime.Now:yyyy-MM-dd HH:mm:ss}");
            output.WriteLine();

            // Output complex types first
            output.WriteLine("// ============================================================================");
            output.WriteLine("// Type Definitions");
            output.WriteLine("// ============================================================================");
            output.WriteLine();
            
            var complexTypes = new HashSet<NdrComplexTypeReference>();
            foreach (var proxy in proxyList)
            {
                // Collect complex types from all procedures
                foreach (var proc in proxy.Procedures)
                {
                    CollectComplexTypesFromProcedure(proc, complexTypes);
                }
            }

            if (complexTypes.Count > 0)
            {
                foreach (var ct in complexTypes)
                {
                    output.WriteLine(formatter.FormatComplexType(ct));
                    output.WriteLine();
                }
            }
            else
            {
                output.WriteLine("// No complex types found");
                output.WriteLine();
            }

            output.WriteLine("// ============================================================================");
            output.WriteLine("// Interface Definitions");
            output.WriteLine("// ============================================================================");
            output.WriteLine();

            foreach (var proxy in proxyList)
            {
                string baseName = GetInterfaceName(proxy.BaseIid);
                
                output.WriteLine("[");
                output.WriteLine($"  object,");
                output.WriteLine($"  uuid({proxy.Iid}),");
                output.WriteLine("]");
                output.WriteLine($"interface {proxy.Name} : {baseName} {{");
                
                foreach (var proc in proxy.Procedures)
                {
                    // Use the formatter's FormatProcedure for proper output
                    string procStr = formatter.FormatProcedure(proc);
                    output.WriteLine($"    {procStr}");
                }
                
                output.WriteLine("}");
                output.WriteLine();
            }

            string result = output.ToString();

            if (!string.IsNullOrEmpty(outputPath))
            {
                File.WriteAllText(outputPath, result);
                Console.Error.WriteLine($"Written to: {outputPath}");
            }
            else
            {
                Console.WriteLine(result);
            }
        }

        static void CollectComplexTypesFromProcedure(NdrProcedureDefinition proc, HashSet<NdrComplexTypeReference> complexTypes)
        {
            // Recursively collect complex types from procedure parameters and return type
            CollectComplexTypesFromType(proc.ReturnValue?.Type, complexTypes);
            foreach (var param in proc.Params)
            {
                CollectComplexTypesFromType(param.Type, complexTypes);
            }
        }

        static void CollectComplexTypesFromType(NdrBaseTypeReference type, HashSet<NdrComplexTypeReference> complexTypes)
        {
            if (type == null)
                return;
                
            if (type is NdrComplexTypeReference complexType)
            {
                complexTypes.Add(complexType);
            }
            
            // Check for pointer/array types that might contain complex types
            if (type is NdrPointerTypeReference ptrType)
            {
                CollectComplexTypesFromType(ptrType.Type, complexTypes);
            }
            else if (type is NdrBaseArrayTypeReference arrayType)
            {
                CollectComplexTypesFromType(arrayType.ElementType, complexTypes);
            }
        }
    }
}
