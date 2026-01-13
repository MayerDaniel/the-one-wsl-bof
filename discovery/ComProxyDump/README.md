# ComProxyDump

A simple command-line tool to extract IDL interface definitions from COM proxy/stub DLLs.

This wraps OleViewDotNet's `COMProxyInstance.GetFromFile()` functionality - the same approach used by the OleViewDotNet GUI when you do **File → Open Proxy DLL**.

## Why?

OleViewDotNet's PowerShell `Get-ComProxy -Path` uses static parsing which doesn't work for all proxy DLLs. The GUI's "Open Proxy DLL" feature uses dynamic loading which works better. This tool exposes that functionality from the command line, making it easy to batch process multiple DLLs.

## Prerequisites

1. Install the OleViewDotNet PowerShell module:
   ```powershell
   Install-Module OleViewDotNet
   ```

2. .NET Framework 4.8 SDK

## Building

```cmd
# From the project directory
dotnet build -c Release

# Or specify the module path if it's not in the default location
dotnet build -c Release -p:OleViewDotNetPath="C:\path\to\OleViewDotNet\1.16"
```

The default module path is:
`%USERPROFILE%\Documents\WindowsPowerShell\Modules\OleViewDotNet\1.16`

## Usage

```cmd
# Dump IDL to stdout
ComProxyDump.exe "C:\Program Files\WSL\wslserviceproxystub.dll"

# Save to file
ComProxyDump.exe "C:\Program Files\WSL\wslserviceproxystub.dll" wsl.idl

# Batch process multiple versions
for %f in (wsl_*.dll) do ComProxyDump.exe "%f" "%~nf.idl"
```

## How it works

1. Loads the proxy/stub DLL into the process using `LoadLibrary`
2. Locates the `ProxyFileInfo` structures that MIDL generates
3. Parses the NDR format strings to reconstruct interface definitions
4. Formats the output as IDL

## Troubleshooting

**"Can't find proxy information in server DLL"**
- The DLL might not be a standard MIDL-generated proxy
- Try the x86 build if the DLL is 32-bit (change `<PlatformTarget>` in csproj)
- The DLL might use custom marshaling

**Architecture mismatch**
- Build for x86: `<PlatformTarget>x86</PlatformTarget>`
- Build for x64: `<PlatformTarget>x64</PlatformTarget>`
- Match the architecture of the target DLL

**Missing dependencies**
- Ensure the DLL's dependencies are available (same folder or in PATH)
- Some proxy DLLs require their host service to be running

## Credits

This tool is a thin wrapper around [OleViewDotNet](https://github.com/tyranid/oleviewdotnet) by James Forshaw.
