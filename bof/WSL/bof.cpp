#define CINTERFACE
#define WIN32_LEAN_AND_MEAN  // Exclude rarely-used stuff from Windows headers

#ifdef _DEBUG
// Debug build: use standard includes
#include <WinSock2.h>
#include <Windows.h>
#include "base\helpers.h"
#undef DECLSPEC_IMPORT
#define DECLSPEC_IMPORT
#include "base\mock.h"
#include <stdio.h>
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "advapi32.lib")
#else
// BOF build: manual type definitions to avoid including WinSock2.h
#include <Windows.h>
#include "base\helpers.h"

typedef UINT_PTR SOCKET;
#define INVALID_SOCKET ((SOCKET)(~0))
#define SOCKET_ERROR (-1)

typedef struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    unsigned short iMaxSockets;
    unsigned short iMaxUdpDg;
    char* lpVendorInfo;
    char szDescription[257];
    char szSystemStatus[129];
} WSADATA, *LPWSADATA;

typedef unsigned long u_long;

// WinSock function prototypes for DFR macro
int WINAPI WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
int WINAPI WSACleanup(void);
int WINAPI ioctlsocket(SOCKET s, long cmd, u_long* argp);
int WINAPI recv(SOCKET s, char* buf, int len, int flags);
int WINAPI closesocket(SOCKET s);

// MSVCRT function prototype
int __cdecl swscanf(const wchar_t* buffer, const wchar_t* format, ...);
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include "beacon.h"
#include "sleepmask.h"
#include "base/helpers.h"
#include "headers/wsl_common_types.h"
#include "headers/wslserviceproxystub_2.0.0.0_2.2.4.0.h"
#include "headers/wslserviceproxystub_2.3.11.0_2.3.17.0.h"
#include "headers/wslserviceproxystub_2.3.21.0_2.3.26.0.h"
#include "headers/wslserviceproxystub_2.4.4.0_2.4.13.0.h"
#include "headers/wslserviceproxystub_2.5.1.0.h"
#include "headers/wslserviceproxystub_2.5.4.0.h"
#include "headers/wslserviceproxystub_2.5.6.0_2.5.10.0.h"
#include "headers/wslserviceproxystub_2.6.0.0_2.7.0.0.h"
#include <process.h>
    unsigned __stdcall BeginStub(void* p);

    LONG PvectoredExceptionHandler(EXCEPTION_POINTERS* ExceptionInfo);
    // Global variables to store the command, distribution name, and action
    // Using volatile to prevent compiler optimizations that generate unsupported relocations
    volatile char* g_command = NULL;
    volatile wchar_t* g_distributionName = NULL;
    volatile char* g_action = NULL;

    // WSL Version information
    typedef struct _WSL_VERSION {
        DWORD major;
        DWORD minor;
        DWORD build;
        DWORD revision;
    } WSL_VERSION;

    // Version ranges and their corresponding interface IDs
    static const GUID CLSID_LxssUserSession = {
        0xA9B7A1B9,
        0x0671,
        0x405C,
        { 0x95, 0xF1, 0xE0, 0x61, 0x2C, 0xB4, 0xCE, 0x7E } };
    
    static const GUID IID_ILxssUserSession_2_0_0_0 = {
        0x38541BDC,
        0xF54F,
        0x4CEB,
        { 0x85, 0xD0, 0x37, 0xF0, 0xF3, 0xD2, 0x61, 0x7E } };

#ifdef __cplusplus
    // C++ mode: use DFR macro with decltype
    DFR(WS2_32, WSAStartup);
    DFR(WS2_32, WSACleanup);
    DFR(WS2_32, ioctlsocket);
    DFR(WS2_32, recv);
    DFR(WS2_32, closesocket);
    DFR(OLE32, CoInitializeEx);
    DFR(OLE32, CoInitializeSecurity);
    DFR(OLE32, CoCreateInstance);
    DFR(OLE32, CoUninitialize);
    DFR(OLE32, CoTaskMemFree);
    DFR(KERNEL32, Sleep);
    DFR(KERNEL32, WaitForSingleObject);
    DFR(KERNEL32, GetExitCodeProcess);
    DFR(KERNEL32, CloseHandle);
    DFR(KERNEL32, GetLastError);
    DFR(KERNEL32, GetSystemDirectoryA);
    DFR(KERNEL32, HeapAlloc);
    DFR(KERNEL32, HeapFree);
    DFR(KERNEL32, GetProcessHeap);
    DFR(KERNEL32, AddVectoredExceptionHandler);
    DFR(KERNEL32, GetExitCodeThread);
    DFR(KERNEL32, RemoveVectoredExceptionHandler);
    DFR(ADVAPI32, RegOpenKeyExW);
    DFR(ADVAPI32, RegQueryValueExW);
    DFR(ADVAPI32, RegCloseKey);
    DFR(ADVAPI32, RegEnumKeyExW);
    DFR(KERNEL32, lstrcmpW);
    DFR(KERNEL32, lstrcmpiA);
    DFR(MSVCRT, _endthreadex);
    DFR(MSVCRT, _beginthreadex);
    DFR(MSVCRT, swscanf);
#else
    // C mode: explicit function declarations for BOF
    DECLSPEC_IMPORT int WINAPI WS2_32$WSAStartup(WORD, LPWSADATA);
    DECLSPEC_IMPORT int WINAPI WS2_32$WSACleanup(void);
    DECLSPEC_IMPORT int WINAPI WS2_32$ioctlsocket(SOCKET, long, u_long*);
    DECLSPEC_IMPORT int WINAPI WS2_32$recv(SOCKET, char*, int, int);
    DECLSPEC_IMPORT int WINAPI WS2_32$closesocket(SOCKET);
    DECLSPEC_IMPORT HRESULT WINAPI OLE32$CoInitializeEx(LPVOID, DWORD);
    DECLSPEC_IMPORT HRESULT WINAPI OLE32$CoInitializeSecurity(PSECURITY_DESCRIPTOR, LONG, void*, void*, DWORD, DWORD, void*, DWORD, void*);
    DECLSPEC_IMPORT HRESULT WINAPI OLE32$CoCreateInstance(REFCLSID, LPUNKNOWN, DWORD, REFIID, LPVOID*);
    DECLSPEC_IMPORT void WINAPI OLE32$CoUninitialize(void);
    DECLSPEC_IMPORT void WINAPI OLE32$CoTaskMemFree(LPVOID);
    DECLSPEC_IMPORT void WINAPI KERNEL32$Sleep(DWORD);
    DECLSPEC_IMPORT DWORD WINAPI KERNEL32$WaitForSingleObject(HANDLE, DWORD);
    DECLSPEC_IMPORT BOOL WINAPI KERNEL32$GetExitCodeProcess(HANDLE, LPDWORD);
    DECLSPEC_IMPORT BOOL WINAPI KERNEL32$CloseHandle(HANDLE);
    DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetLastError(void);
    DECLSPEC_IMPORT UINT WINAPI KERNEL32$GetSystemDirectoryA(LPSTR, UINT);
    DECLSPEC_IMPORT LPVOID WINAPI KERNEL32$HeapAlloc(HANDLE, DWORD, SIZE_T);
    DECLSPEC_IMPORT BOOL WINAPI KERNEL32$HeapFree(HANDLE, DWORD, LPVOID);
    DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$GetProcessHeap(void);
    DECLSPEC_IMPORT PVOID WINAPI KERNEL32$AddVectoredExceptionHandler(ULONG, PVECTORED_EXCEPTION_HANDLER);
    DECLSPEC_IMPORT BOOL WINAPI KERNEL32$GetExitCodeThread(HANDLE, LPDWORD);
    DECLSPEC_IMPORT ULONG WINAPI KERNEL32$RemoveVectoredExceptionHandler(PVOID);
    DECLSPEC_IMPORT LSTATUS WINAPI ADVAPI32$RegOpenKeyExW(HKEY, LPCWSTR, DWORD, REGSAM, PHKEY);
    DECLSPEC_IMPORT LSTATUS WINAPI ADVAPI32$RegQueryValueExW(HKEY, LPCWSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD);
    DECLSPEC_IMPORT LSTATUS WINAPI ADVAPI32$RegCloseKey(HKEY);
    DECLSPEC_IMPORT LSTATUS WINAPI ADVAPI32$RegEnumKeyExW(HKEY, DWORD, LPWSTR, LPDWORD, LPDWORD, LPWSTR, LPDWORD, PFILETIME);
    DECLSPEC_IMPORT int WINAPI KERNEL32$lstrcmpW(LPCWSTR, LPCWSTR);
    DECLSPEC_IMPORT int WINAPI KERNEL32$lstrcmpiA(LPCSTR, LPCSTR);
    DECLSPEC_IMPORT void __cdecl MSVCRT$_endthreadex(unsigned);
    DECLSPEC_IMPORT uintptr_t __cdecl MSVCRT$_beginthreadex(void*, unsigned, unsigned(__stdcall*)(void*), void*, unsigned, unsigned*);
    DECLSPEC_IMPORT int __cdecl MSVCRT$swscanf(const wchar_t*, const wchar_t*, ...);
#endif
    
    // Define statements for WS2_32 functions
#define WSAStartup WS2_32$WSAStartup
#define WSACleanup WS2_32$WSACleanup
#define ioctlsocket WS2_32$ioctlsocket
#define recv WS2_32$recv
#define closesocket WS2_32$closesocket
#define AddVectoredExceptionHandler KERNEL32$AddVectoredExceptionHandler
#define _endthreadex MSVCRT$_endthreadex
#define _beginthreadex MSVCRT$_beginthreadex
#define WaitForSingleObject KERNEL32$WaitForSingleObject
#define GetExitCodeThread KERNEL32$GetExitCodeThread
#define RemoveVectoredExceptionHandler KERNEL32$RemoveVectoredExceptionHandler
#define swscanf MSVCRT$swscanf

// Define statements for OLE32 functions
#define CoInitializeEx OLE32$CoInitializeEx
#define CoInitializeSecurity OLE32$CoInitializeSecurity
#define CoCreateInstance OLE32$CoCreateInstance
#define CoUninitialize OLE32$CoUninitialize
#define CoTaskMemFree OLE32$CoTaskMemFree

// Define statements for KERNEL32 functions
#define Sleep KERNEL32$Sleep
#define GetExitCodeProcess KERNEL32$GetExitCodeProcess
#define CloseHandle KERNEL32$CloseHandle
#define GetLastError KERNEL32$GetLastError
#define GetSystemDirectoryA KERNEL32$GetSystemDirectoryA
#define HeapAlloc KERNEL32$HeapAlloc
#define HeapFree KERNEL32$HeapFree
#define GetProcessHeap KERNEL32$GetProcessHeap

// Define statements for ADVAPI32 functions
#define RegOpenKeyExW ADVAPI32$RegOpenKeyExW
#define RegQueryValueExW ADVAPI32$RegQueryValueExW
#define RegCloseKey ADVAPI32$RegCloseKey
#define RegEnumKeyExW ADVAPI32$RegEnumKeyExW
#define wcscmp KERNEL32$lstrcmpW
#define _stricmp KERNEL32$lstrcmpiA

// Memory allocation macros
#define intFree(addr) HeapFree(GetProcessHeap(), 0, addr)
#define intAlloc(size) HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, size)

#ifndef MAKEWORD
#define MAKEWORD(a, b) ((WORD)(((BYTE)(((DWORD_PTR)(a)) & 0xff)) | ((WORD)((BYTE)(((DWORD_PTR)(b)) & 0xff))) << 8))
#endif
#ifndef FIONBIO
#define FIONBIO 0x8004667e
#endif
#define BUFFER_SIZE 4096

    // Version checking function
    BOOL GetWSLVersion(WSL_VERSION* version) {
        HKEY hKey;
        WCHAR versionString[64] = { 0 };
        DWORD bufferSize = sizeof(versionString);
        DWORD dataType;
        LONG result;

        // Open the registry key
        result = RegOpenKeyExW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Lxss\\MSI",
            0,
            KEY_READ,
            &hKey
        );

        if (result != ERROR_SUCCESS) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to open WSL registry key: %d\n", result);
            return FALSE;
        }

        // Query the Version value
        result = RegQueryValueExW(
            hKey,
            L"Version",
            NULL,
            &dataType,
            (LPBYTE)versionString,
            &bufferSize
        );

        RegCloseKey(hKey);

        if (result != ERROR_SUCCESS || dataType != REG_SZ) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to read WSL version: %d\n", result);
            return FALSE;
        }

        // Parse version string (e.g., "2.5.1.0")
        if (swscanf(versionString, L"%u.%u.%u.%u",
            &version->major, &version->minor, &version->build, &version->revision) != 4) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to parse version string: %S\n", versionString);
            return FALSE;
        }

        BeaconPrintf(CALLBACK_OUTPUT, "Detected WSL version: %u.%u.%u.%u\n",
            version->major, version->minor, version->build, version->revision);

        return TRUE;
    }

    // Helper to compare versions
    int CompareVersion(WSL_VERSION* v1, DWORD maj, DWORD min, DWORD bld, DWORD rev) {
        if (v1->major != maj) return v1->major - maj;
        if (v1->minor != min) return v1->minor - min;
        if (v1->build != bld) return v1->build - bld;
        return v1->revision - rev;
    }

    // Determine which interface to use based on version
    typedef enum _WSL_INTERFACE_VERSION {
        WSL_IF_2_0_0_0,    // v2.0.0.0 - v2.2.4.0
        WSL_IF_2_3_11_0,   // v2.3.11.0 - v2.3.17.0
        WSL_IF_2_3_21_0,   // v2.3.21.0 - v2.3.26.0
        WSL_IF_2_4_4_0,    // v2.4.4.0 - v2.4.13.0
        WSL_IF_2_5_1_0,    // v2.5.1.0
        WSL_IF_2_5_4_0,    // v2.5.4.0
        WSL_IF_2_5_6_0,    // v2.5.6.0 - v2.5.10.0
        WSL_IF_2_6_0_0,    // v2.6.0.0 - v2.7.0.0+
        WSL_IF_UNKNOWN
    } WSL_INTERFACE_VERSION;

    WSL_INTERFACE_VERSION DetermineInterfaceVersion(WSL_VERSION* version) {
        // v2.0.0.0 - v2.2.4.0
        if (CompareVersion(version, 2, 0, 0, 0) >= 0 &&
            CompareVersion(version, 2, 2, 4, 0) <= 0) {
            return WSL_IF_2_0_0_0;
        }
        // v2.3.11.0 - v2.3.17.0
        else if (CompareVersion(version, 2, 3, 11, 0) >= 0 &&
            CompareVersion(version, 2, 3, 17, 0) <= 0) {
            return WSL_IF_2_3_11_0;
        }
        // v2.3.21.0 - v2.3.26.0
        else if (CompareVersion(version, 2, 3, 21, 0) >= 0 &&
            CompareVersion(version, 2, 3, 26, 0) <= 0) {
            return WSL_IF_2_3_21_0;
        }
        // v2.4.4.0 - v2.4.13.0
        else if (CompareVersion(version, 2, 4, 4, 0) >= 0 &&
            CompareVersion(version, 2, 4, 13, 0) <= 0) {
            return WSL_IF_2_4_4_0;
        }
        // v2.5.1.0
        else if (version->major == 2 && version->minor == 5 && version->build == 1) {
            return WSL_IF_2_5_1_0;
        }
        // v2.5.4.0
        else if (version->major == 2 && version->minor == 5 && version->build == 4) {
            return WSL_IF_2_5_4_0;
        }
        // v2.5.6.0 - v2.5.10.0
        else if (CompareVersion(version, 2, 5, 6, 0) >= 0 &&
            CompareVersion(version, 2, 5, 10, 0) <= 0) {
            return WSL_IF_2_5_6_0;
        }
        // v2.6.0.0 and above
        else if (CompareVersion(version, 2, 6, 0, 0) >= 0) {
            return WSL_IF_2_6_0_0;
        }

        return WSL_IF_UNKNOWN;
    }

    // Function to list all WSL distributions from registry
    void listDistributions() {
        HKEY hKey;
        LONG result = RegOpenKeyExW(HKEY_CURRENT_USER, 
                                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Lxss",
                                     0, KEY_READ, &hKey);
        
        if (result != ERROR_SUCCESS) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to open WSL registry key. Error: %ld\n", result);
            BeaconPrintf(CALLBACK_OUTPUT, "Is WSL installed? Run 'wsl --install' to set up WSL.\n");
            return;
        }
        
        DWORD index = 0;
        WCHAR subKeyName[256];
        DWORD subKeyNameLen;
        int foundDistros = 0;
        WCHAR defaultGuid[256];
        DWORD defaultGuidLen = sizeof(defaultGuid);
        DWORD i;
        
        // Zero out arrays
        for (i = 0; i < 256; i++) {
            subKeyName[i] = 0;
            defaultGuid[i] = 0;
        }
        
        // Get the default distribution GUID
        RegQueryValueExW(hKey, L"DefaultDistribution", NULL, NULL, 
                        (LPBYTE)defaultGuid, &defaultGuidLen);
        
        BeaconPrintf(CALLBACK_OUTPUT, "Windows Subsystem for Linux Distributions:\n");
        
        while (1) {
            subKeyNameLen = sizeof(subKeyName) / sizeof(WCHAR);
            result = RegEnumKeyExW(hKey, index++, subKeyName, &subKeyNameLen, 
                                  NULL, NULL, NULL, NULL);
            
            if (result != ERROR_SUCCESS) {
                break;
            }
            
            // Open the distribution subkey
            HKEY hDistroKey;
            result = RegOpenKeyExW(hKey, subKeyName, 0, KEY_READ, &hDistroKey);
            if (result != ERROR_SUCCESS) {
                continue;
            }
            
            // Read distribution name
            WCHAR distroName[256];
            DWORD distroNameLen = sizeof(distroName);
            DWORD j;
            for (j = 0; j < 256; j++) {
                distroName[j] = 0;
            }
            result = RegQueryValueExW(hDistroKey, L"DistributionName", NULL, NULL,
                                     (LPBYTE)distroName, &distroNameLen);
            
            // Read WSL version
            DWORD version = 0;
            DWORD versionLen = sizeof(version);
            RegQueryValueExW(hDistroKey, L"Version", NULL, NULL,
                           (LPBYTE)&version, &versionLen);
            
            if (result == ERROR_SUCCESS && distroName[0] != 0) {
                int isDefault = (wcscmp(subKeyName, defaultGuid) == 0);
                if (isDefault) {
                    BeaconPrintf(CALLBACK_OUTPUT, "  %S (Default) (WSL%d)\n", 
                           distroName, version);
                } else {
                    BeaconPrintf(CALLBACK_OUTPUT, "  %S (WSL%d)\n", 
                           distroName, version);
                }
                foundDistros = 1;
            }
            
            RegCloseKey(hDistroKey);
        }
        
        RegCloseKey(hKey);
        
        if (!foundDistros) {
            BeaconPrintf(CALLBACK_OUTPUT, "No distributions found.\n");
            BeaconPrintf(CALLBACK_OUTPUT, "Use 'wsl.exe --install' or install from the Microsoft Store.\n");
        }
    }

    void initializeCom() {
        HRESULT hr;
        void* session = NULL;
        WSADATA wsaData;
        char* buffer = NULL;
        WSL_VERSION wslVersion = { 0 };
        WSL_INTERFACE_VERSION ifVersion;
        
        // Get local copies of volatile globals to avoid issues with volatile qualifier
        wchar_t* distroName = (wchar_t*)g_distributionName;
        char* command = (char*)g_command;

        // Get WSL version first
        if (!GetWSLVersion(&wslVersion)) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to get WSL version, cannot continue\n");
            return;
        }

        // Determine which interface to use
        ifVersion = DetermineInterfaceVersion(&wslVersion);
        if (ifVersion == WSL_IF_UNKNOWN) {
            BeaconPrintf(CALLBACK_ERROR, "Unknown WSL version: %u.%u.%u.%u\n",
                wslVersion.major, wslVersion.minor, wslVersion.build, wslVersion.revision);
            return;
        }

        BeaconPrintf(CALLBACK_OUTPUT, "Using interface version: %d\n", ifVersion);

        // Initialize Winsock
        int wsaResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
        if (wsaResult != 0) {
            BeaconPrintf(CALLBACK_ERROR, "WSAStartup failed: %d\n", wsaResult);
            return;
        }
        BeaconPrintf(CALLBACK_OUTPUT, "WSAStartup successful\n");

        // Initialize COM
        hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
        if (FAILED(hr)) {
            BeaconPrintf(CALLBACK_ERROR, "CoInitializeEx failed: 0x%08X\n", hr);
            WSACleanup();
            return;
        }

        // Initialize COM security
        hr = CoInitializeSecurity(
            NULL,
            -1,
            NULL,
            NULL,
            RPC_C_AUTHN_LEVEL_DEFAULT,
            RPC_C_IMP_LEVEL_IMPERSONATE,
            NULL,
            EOAC_STATIC_CLOAKING,
            NULL
        );

        if (FAILED(hr) && hr != RPC_E_TOO_LATE) {
            BeaconPrintf(CALLBACK_ERROR, "CoInitializeSecurity failed: 0x%08X\n", hr);
        }

        // Create WSL session instance based on version - all interfaces share the same CLSID and IID
        // In C mode, REFCLSID/REFIID are pointers, not references
        hr = CoCreateInstance(&CLSID_LxssUserSession, NULL, CLSCTX_LOCAL_SERVER, &IID_ILxssUserSession_2_0_0_0, (LPVOID*)&session);
        if (FAILED(hr)) {
            BeaconPrintf(CALLBACK_ERROR, "CoCreateInstance failed: 0x%08X\n", hr);
            BeaconPrintf(CALLBACK_ERROR, "Make sure WSL is installed and running\n");
            CoUninitialize();
            WSACleanup();
            return;
        }

        BeaconPrintf(CALLBACK_OUTPUT, "WSL COM session created successfully\n");
        BeaconPrintf(CALLBACK_OUTPUT, "Session pointer: 0x%p\n", session);

        if (session) {
            LXSS_ERROR_INFO errorInfo = { 0 };
            GUID distroGuid = { 0 };
            
            // Debug: Print vtable pointer
            ILxssUserSession_2_0_0_0_2_2_4_0* dbgSession = (ILxssUserSession_2_0_0_0_2_2_4_0*)session;
            BeaconPrintf(CALLBACK_OUTPUT, "lpVtbl: 0x%p\n", dbgSession->lpVtbl);
            if (distroName) {
                BeaconPrintf(CALLBACK_OUTPUT, "distroName ptr: 0x%p\n", distroName);
            } else {
                BeaconPrintf(CALLBACK_ERROR, "distroName is NULL!\n");
            }

            // Get distribution ID - use the correct interface based on version
            // Using if-else instead of switch to avoid jump tables that cause ADDR32NB relocations
            if (ifVersion == WSL_IF_2_0_0_0) {
                ILxssUserSession_2_0_0_0_2_2_4_0* s = (ILxssUserSession_2_0_0_0_2_2_4_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else if (ifVersion == WSL_IF_2_3_11_0) {
                ILxssUserSession_2_3_11_0_2_3_17_0* s = (ILxssUserSession_2_3_11_0_2_3_17_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else if (ifVersion == WSL_IF_2_3_21_0) {
                ILxssUserSession_2_3_21_0_2_3_26_0* s = (ILxssUserSession_2_3_21_0_2_3_26_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else if (ifVersion == WSL_IF_2_4_4_0) {
                ILxssUserSession_2_4_4_0_2_4_13_0* s = (ILxssUserSession_2_4_4_0_2_4_13_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else if (ifVersion == WSL_IF_2_5_1_0) {
                ILxssUserSession_2_5_1_0* s = (ILxssUserSession_2_5_1_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else if (ifVersion == WSL_IF_2_5_4_0) {
                ILxssUserSession_2_5_4_0* s = (ILxssUserSession_2_5_4_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else if (ifVersion == WSL_IF_2_5_6_0) {
                ILxssUserSession_2_5_6_0_2_5_10_0* s = (ILxssUserSession_2_5_6_0_2_5_10_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else if (ifVersion == WSL_IF_2_6_0_0) {
                ILxssUserSession_2_6_0_0_2_7_0_0* s = (ILxssUserSession_2_6_0_0_2_7_0_0*)session;
                hr = s->lpVtbl->GetDistributionId(s, distroName, 0, &errorInfo, &distroGuid);
            } else {
                hr = E_FAIL;
            }

            if (FAILED(hr)) {
                BeaconPrintf(CALLBACK_ERROR, "GetDistributionId failed: 0x%08X\n", hr);
                if (errorInfo.Member10) {
                    BeaconPrintf(CALLBACK_ERROR, "Error: %S\n", errorInfo.Member10);
                    CoTaskMemFree(errorInfo.Member10);
                }
                if (errorInfo.Member18) {
                    CoTaskMemFree(errorInfo.Member18);
                }
                // Release using appropriate interface type
                if (ifVersion == WSL_IF_2_0_0_0)
                    ((ILxssUserSession_2_0_0_0_2_2_4_0*)session)->lpVtbl->Release((ILxssUserSession_2_0_0_0_2_2_4_0*)session);
                else if (ifVersion == WSL_IF_2_3_11_0)
                    ((ILxssUserSession_2_3_11_0_2_3_17_0*)session)->lpVtbl->Release((ILxssUserSession_2_3_11_0_2_3_17_0*)session);
                else if (ifVersion == WSL_IF_2_3_21_0)
                    ((ILxssUserSession_2_3_21_0_2_3_26_0*)session)->lpVtbl->Release((ILxssUserSession_2_3_21_0_2_3_26_0*)session);
                else if (ifVersion == WSL_IF_2_4_4_0)
                    ((ILxssUserSession_2_4_4_0_2_4_13_0*)session)->lpVtbl->Release((ILxssUserSession_2_4_4_0_2_4_13_0*)session);
                else if (ifVersion == WSL_IF_2_5_1_0)
                    ((ILxssUserSession_2_5_1_0*)session)->lpVtbl->Release((ILxssUserSession_2_5_1_0*)session);
                else if (ifVersion == WSL_IF_2_5_4_0)
                    ((ILxssUserSession_2_5_4_0*)session)->lpVtbl->Release((ILxssUserSession_2_5_4_0*)session);
                else if (ifVersion == WSL_IF_2_5_6_0)
                    ((ILxssUserSession_2_5_6_0_2_5_10_0*)session)->lpVtbl->Release((ILxssUserSession_2_5_6_0_2_5_10_0*)session);
                else if (ifVersion == WSL_IF_2_6_0_0)
                    ((ILxssUserSession_2_6_0_0_2_7_0_0*)session)->lpVtbl->Release((ILxssUserSession_2_6_0_0_2_7_0_0*)session);
                CoUninitialize();
                WSACleanup();
                return;
            }

            BeaconPrintf(CALLBACK_OUTPUT, "Found distro: {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}\n",
                distroGuid.Data1, distroGuid.Data2, distroGuid.Data3,
                distroGuid.Data4[0], distroGuid.Data4[1], distroGuid.Data4[2],
                distroGuid.Data4[3], distroGuid.Data4[4], distroGuid.Data4[5],
                distroGuid.Data4[6], distroGuid.Data4[7]);

            const char* commandLine[4];
            commandLine[0] = "/bin/bash";
            commandLine[1] = "-c";
            commandLine[2] = command;  // Use local copy
            commandLine[3] = NULL;

            // Initialize standard handles
            LXSS_STD_HANDLES stdHandles = { 0 };
            stdHandles.Member0.Member0 = 0;
            stdHandles.Member0.Member4 = LxssHandleConsole;
            stdHandles.Member8.Member0 = 0;
            stdHandles.Member8.Member4 = LxssHandleConsole;
            stdHandles.Member10.Member0 = 0;
            stdHandles.Member10.Member4 = LxssHandleConsole;

            // Output handles
            GUID distributionId = { 0 };
            GUID instanceId = { 0 };
            HANDLE processHandle = NULL;
            HANDLE serverHandle = NULL;
            SOCKET stdinHandle = NULL;
            SOCKET stdoutHandle = NULL;
            SOCKET stderrHandle = NULL;
            SOCKET commChannel = NULL;
            SOCKET interopSocket = NULL;
            LXSS_ERROR_INFO createError = { 0 };

            // Create the Linux process - use the correct interface based on version
            // Note: versions 2.0.0.0-2.2.4.0 have 23 params (has Flags, no InteropSocket)
            //       versions 2.3.11.0+ have 24 params (has both Flags and InteropSocket)
            // Using if-else instead of switch to avoid jump tables
            if (ifVersion == WSL_IF_2_0_0_0) {
                // v2.0.0.0-2.2.4.0: 23 params (has Flags, no InteropSocket)
                ILxssUserSession_2_0_0_0_2_2_4_0* s = (ILxssUserSession_2_0_0_0_2_2_4_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    // No InteropSocket in this version
                    &createError
                );
            } else if (ifVersion == WSL_IF_2_3_11_0) {
                // v2.3.11.0-2.3.17.0: 24 params (full signature)
                ILxssUserSession_2_3_11_0_2_3_17_0* s = (ILxssUserSession_2_3_11_0_2_3_17_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    (HANDLE*)&interopSocket,
                    &createError
                );
            } else if (ifVersion == WSL_IF_2_3_21_0) {
                // v2.3.21.0-2.3.26.0: 24 params (full signature)
                ILxssUserSession_2_3_21_0_2_3_26_0* s = (ILxssUserSession_2_3_21_0_2_3_26_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    (HANDLE*)&interopSocket,
                    &createError
                );
            } else if (ifVersion == WSL_IF_2_4_4_0) {
                // v2.4.4.0-2.4.13.0: 24 params (full signature)
                ILxssUserSession_2_4_4_0_2_4_13_0* s = (ILxssUserSession_2_4_4_0_2_4_13_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    (HANDLE*)&interopSocket,
                    &createError
                );
            } else if (ifVersion == WSL_IF_2_5_1_0) {
                // v2.5.1.0: 24 params (full signature)
                ILxssUserSession_2_5_1_0* s = (ILxssUserSession_2_5_1_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    (HANDLE*)&interopSocket,
                    &createError
                );
            } else if (ifVersion == WSL_IF_2_5_4_0) {
                // v2.5.4.0: 24 params (full signature)
                ILxssUserSession_2_5_4_0* s = (ILxssUserSession_2_5_4_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    (HANDLE*)&interopSocket,
                    &createError
                );
            } else if (ifVersion == WSL_IF_2_5_6_0) {
                // v2.5.6.0-2.5.10.0: 24 params (full signature)
                ILxssUserSession_2_5_6_0_2_5_10_0* s = (ILxssUserSession_2_5_6_0_2_5_10_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    (HANDLE*)&interopSocket,
                    &createError
                );
            } else if (ifVersion == WSL_IF_2_6_0_0) {
                // v2.6.0.0-2.7.0.0+: 24 params (full signature)
                ILxssUserSession_2_6_0_0_2_7_0_0* s = (ILxssUserSession_2_6_0_0_2_7_0_0*)session;
                hr = s->lpVtbl->CreateLxProcess(
                    s,
                    &distroGuid,
                    "/bin/bash",
                    3,
                    commandLine,
                    NULL, // CurrentWorkingDirectory
                    NULL, // NtPath
                    NULL, // NtEnvironment
                    0,    // NtEnvironmentLength
                    NULL, // Username
                    80,   // Columns
                    25,   // Rows
                    0,    // ConsoleHandle
                    &stdHandles,
                    0,    // Flags
                    &distributionId,
                    &instanceId,
                    &processHandle,
                    &serverHandle,
                    (HANDLE*)&stdinHandle,
                    (HANDLE*)&stdoutHandle,
                    (HANDLE*)&stderrHandle,
                    (HANDLE*)&commChannel,
                    (HANDLE*)&interopSocket,
                    &createError
                );
            } else {
                hr = E_FAIL;
            }

            if (FAILED(hr)) {
                BeaconPrintf(CALLBACK_ERROR, "CreateLxProcess failed: 0x%08X\n", hr);
                if (createError.Member10) {
                    BeaconPrintf(CALLBACK_ERROR, "Error: %S\n", createError.Member10);
                    CoTaskMemFree(createError.Member10);
                }
                if (createError.Member18) {
                    BeaconPrintf(CALLBACK_ERROR, "Warnings: %S\n", createError.Member18);
                    CoTaskMemFree(createError.Member18);
                }
            }
            else {
                BeaconPrintf(CALLBACK_OUTPUT, "WSL process created successfully!\n");

                // Allocate buffer on heap
                buffer = (char*)intAlloc(BUFFER_SIZE);
                if (!buffer) {
                    BeaconPrintf(CALLBACK_ERROR, "Failed to allocate buffer\n");
                    goto cleanup;
                }

                // Read from sockets
                if (stdoutHandle) {
                    // Set socket to non-blocking
                    u_long mode = 1;
                    ioctlsocket((SOCKET)(ULONG_PTR)stdoutHandle, FIONBIO, &mode);

                    // Give process time to produce output
                    Sleep(2000);

                    int bytesRead = 0;
                    int totalBytes = 0;

                    BeaconPrintf(CALLBACK_OUTPUT, "[STDOUT]:\n");

                    // Read all available data from socket
                    while ((bytesRead = recv((SOCKET)(ULONG_PTR)stdoutHandle,
                        buffer,
                        BUFFER_SIZE - 1,
                        0)) > 0) {
                        buffer[bytesRead] = '\0';
                        totalBytes += bytesRead;
                        BeaconPrintf(CALLBACK_OUTPUT, "%s", buffer);
                    }

                    if (totalBytes == 0) {
                        BeaconPrintf(CALLBACK_OUTPUT, "(no output)\n");
                    }
                    else {
                        BeaconPrintf(CALLBACK_OUTPUT, "\nTotal bytes read: %d", totalBytes);
                    }
                }

                // Wait for process completion
                if (processHandle) {
                    DWORD waitResult = WaitForSingleObject(processHandle, 10000);
                    if (waitResult == WAIT_OBJECT_0) {
                        DWORD exitCode = 0;
                        if (GetExitCodeProcess(processHandle, &exitCode)) {
                            BeaconPrintf(CALLBACK_OUTPUT, "Process exited with code: %d\n", exitCode);
                        }
                    }
                    else if (waitResult == WAIT_TIMEOUT) {
                        BeaconPrintf(CALLBACK_OUTPUT, "Process still running after timeout\n");
                    }
                }

            cleanup:
                // Free buffer
                if (buffer) {
                    intFree(buffer);
                    buffer = NULL;
                }

                // Clean up handles
                if (processHandle) CloseHandle(processHandle);
                if (serverHandle) CloseHandle(serverHandle);
                if (stdinHandle) closesocket(stdinHandle);
                if (stdoutHandle) closesocket(stdoutHandle);
                if (stderrHandle) closesocket(stderrHandle);
                if (commChannel) closesocket(commChannel);
                if (interopSocket) closesocket(interopSocket);
            }

            // Release the session using appropriate interface type
            if (ifVersion == WSL_IF_2_0_0_0)
                ((ILxssUserSession_2_0_0_0_2_2_4_0*)session)->lpVtbl->Release((ILxssUserSession_2_0_0_0_2_2_4_0*)session);
            else if (ifVersion == WSL_IF_2_3_11_0)
                ((ILxssUserSession_2_3_11_0_2_3_17_0*)session)->lpVtbl->Release((ILxssUserSession_2_3_11_0_2_3_17_0*)session);
            else if (ifVersion == WSL_IF_2_3_21_0)
                ((ILxssUserSession_2_3_21_0_2_3_26_0*)session)->lpVtbl->Release((ILxssUserSession_2_3_21_0_2_3_26_0*)session);
            else if (ifVersion == WSL_IF_2_4_4_0)
                ((ILxssUserSession_2_4_4_0_2_4_13_0*)session)->lpVtbl->Release((ILxssUserSession_2_4_4_0_2_4_13_0*)session);
            else if (ifVersion == WSL_IF_2_5_1_0)
                ((ILxssUserSession_2_5_1_0*)session)->lpVtbl->Release((ILxssUserSession_2_5_1_0*)session);
            else if (ifVersion == WSL_IF_2_5_4_0)
                ((ILxssUserSession_2_5_4_0*)session)->lpVtbl->Release((ILxssUserSession_2_5_4_0*)session);
            else if (ifVersion == WSL_IF_2_5_6_0)
                ((ILxssUserSession_2_5_6_0_2_5_10_0*)session)->lpVtbl->Release((ILxssUserSession_2_5_6_0_2_5_10_0*)session);
            else if (ifVersion == WSL_IF_2_6_0_0)
                ((ILxssUserSession_2_6_0_0_2_7_0_0*)session)->lpVtbl->Release((ILxssUserSession_2_6_0_0_2_7_0_0*)session);
        }

        // Uninitialize COM
        CoUninitialize();
        WSACleanup();
    }

void go(char* args, int len) {

    datap parser = { 0 };
    DWORD exitcode = 0;
    HANDLE thread = NULL;
    PVOID eHandler = NULL;
    char* action = NULL;
    char* cmd = NULL;
    wchar_t* distro = NULL;

    // Parse the arguments (order: action, then distro name, then command for exec)
    BeaconDataParse(&parser, args, len);
    action = (char*)BeaconDataExtract(&parser, NULL);
    
    if (action == NULL || action[0] == 0) {
        BeaconPrintf(CALLBACK_OUTPUT, "WSL BOF - Execute commands in Windows Subsystem for Linux\n");
        BeaconPrintf(CALLBACK_OUTPUT, "\n");
        BeaconPrintf(CALLBACK_OUTPUT, "Usage:\n");
        BeaconPrintf(CALLBACK_OUTPUT, "  wsl list                        - List all WSL distributions\n");
        BeaconPrintf(CALLBACK_OUTPUT, "  wsl exec <distro> <command>     - Execute command in distribution\n");
        BeaconPrintf(CALLBACK_OUTPUT, "\n");
        BeaconPrintf(CALLBACK_OUTPUT, "Examples:\n");
        BeaconPrintf(CALLBACK_OUTPUT, "  wsl list\n");
        BeaconPrintf(CALLBACK_OUTPUT, "  wsl exec Ubuntu whoami\n");
        BeaconPrintf(CALLBACK_OUTPUT, "  wsl exec Ubuntu \"cat /etc/passwd\"\n");
        return;
    }
    
    // Store action in global
    g_action = action;
    
    // Use local arrays for string comparisons to avoid ADDR64 relocations
    char listStr[5];
    char execStr[5];
    listStr[0] = 'l'; listStr[1] = 'i'; listStr[2] = 's'; listStr[3] = 't'; listStr[4] = 0;
    execStr[0] = 'e'; execStr[1] = 'x'; execStr[2] = 'e'; execStr[3] = 'c'; execStr[4] = 0;
    
    // Check if action is "list" - no additional args needed
    if (_stricmp(action, listStr) == 0) {
        // List doesn't need distro or command - use local zero to avoid REL32_4 reloc
        wchar_t* nullDistro = 0;
        char* nullCmd = 0;
        g_distributionName = nullDistro;
        g_command = nullCmd;
    }
    else if (_stricmp(action, execStr) == 0) {
        // Exec needs distro and command
        distro = (wchar_t*)BeaconDataExtract(&parser, NULL);
        cmd = (char*)BeaconDataExtract(&parser, NULL);
        
        if (distro == NULL) {
            BeaconPrintf(CALLBACK_ERROR, "Missing distribution name.\n");
            BeaconPrintf(CALLBACK_OUTPUT, "Usage: wsl exec <distro> <command>\n");
            BeaconPrintf(CALLBACK_OUTPUT, "Run 'wsl list' to see available distributions.\n");
            return;
        }
        
        if (cmd == NULL) {
            BeaconPrintf(CALLBACK_ERROR, "Missing command.\n");
            BeaconPrintf(CALLBACK_OUTPUT, "Usage: wsl exec <distro> <command>\n");
            BeaconPrintf(CALLBACK_OUTPUT, "Example: wsl exec Ubuntu whoami\n");
            return;
        }
        
        // Store in globals for use by BeginStub thread
        g_command = cmd;
        g_distributionName = distro;
    }
    else {
        BeaconPrintf(CALLBACK_ERROR, "Unknown action '%s'. Use 'list' or 'exec'.\n", action);
        return;
    }

    //Setup Exception handling
    //RPC uses exceptions to raise errors to the client program. Normally, this is handled using MSVC's extensions for
    //SEH(RpcTryExcept, RpcExcept & RpcEndExcept). An object file loaded with COFFLoader is not set up so that SEH works.
    //To prevent beacon from crashing, we can setup an exception handler to catch exceptions that are unhandled. We will use
    //A sacrificial thread to run our main code, handle any RPC exceptions, and return the error code back to us upon failure.
    //The main thread will be blocked while the sacrificial thread is running.
    eHandler = AddVectoredExceptionHandler(0, (PVECTORED_EXCEPTION_HANDLER)PvectoredExceptionHandler);
    thread = (HANDLE)_beginthreadex(NULL, 0, BeginStub, NULL, 0, NULL);
    WaitForSingleObject(thread, INFINITE);
    GetExitCodeThread(thread, &exitcode);
    if (exitcode != 0)
    {
        BeaconPrintf(CALLBACK_ERROR, "An exception occured while running: 0x%x\n", exitcode);
    }
    if (thread) { CloseHandle(thread); }
    //if (eHandler) { RemoveVectoredExceptionHandler(eHandler); }
}
    unsigned __stdcall BeginStub (void* p) {
        // Get local copy of action
        char* action = (char*)g_action;
        
        // Use local arrays for string comparisons to avoid ADDR64 relocations
        char listStr[5];
        char execStr[5];
        listStr[0] = 'l'; listStr[1] = 'i'; listStr[2] = 's'; listStr[3] = 't'; listStr[4] = 0;
        execStr[0] = 'e'; execStr[1] = 'x'; execStr[2] = 'e'; execStr[3] = 'c'; execStr[4] = 0;
        
        BeaconPrintf(CALLBACK_OUTPUT, "Starting WSL BOF...\n");
        
        // Check action and call appropriate function
        if (_stricmp(action, listStr) == 0) {
            listDistributions();
        }
        else if (_stricmp(action, execStr) == 0) {
            initializeCom();
        }
        
        return 0;
    }

    LONG PvectoredExceptionHandler(EXCEPTION_POINTERS* ExceptionInfo)
    {
        _endthreadex(ExceptionInfo->ExceptionRecord->ExceptionCode);
        return EXCEPTION_CONTINUE_EXECUTION;
    }

#ifdef __cplusplus
}
#endif

// Define a main function for the debug build
#if defined(_DEBUG) && !defined(_GTEST)
int main(int argc, char* argv[]) {
    // Run BOF's entrypoint
    bof::runMocked<>(go, "uname -a", L"Ubuntu");
    return 0;
}
// Define unit tests
#elif defined(_GTEST)
#include <gtest\gtest.h>
TEST(BofTest, Test1) {
    std::vector<bof::output::OutputEntry> got = bof::runMocked<>(go);
    std::vector<bof::output::OutputEntry> expected = {
        {CALLBACK_OUTPUT, "System Directory: C:\\Windows\\system32"}
    };
    ASSERT_EQ(expected.size(), got.size());
    ASSERT_STRCASEEQ(expected[0].output.c_str(), got[0].output.c_str());
}
#endif