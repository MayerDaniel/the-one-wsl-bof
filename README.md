# WSL BOF - Windows Subsystem for Linux Beacon Object File

A Cobalt Strike Beacon Object File (BOF) that enables execution of commands within WSL distributions directly from a Beacon session, without spawning `wsl.exe`.

## Overview

This project provides a BOF that interacts with WSL via its internal COM interface (`ILxssUserSession`) and the registry, allowing operators to:

- **List** all installed WSL distributions
- **Execute** arbitrary commands inside any WSL distribution

### Why Use This?

Traditional approaches to running WSL commands involve spawning `wsl.exe`, which:
- Creates a new process (visible to EDR)
- Shows up in command line logging
- Can be blocked by application whitelisting

This BOF directly calls the WSL COM service, avoiding process creation for `wsl.exe` entirely.

## Project Structure

```
the-one-wsl-bof/
├── bof/                           # Main BOF project
│   ├── WSL/                       # BOF source code
│   │   ├── bof.cpp               # Main BOF implementation
│   │   ├── beacon.h              # Cobalt Strike Beacon API
│   │   ├── Makefile              # nmake build file
│   │   ├── headers/              # Generated COM interface headers
│   │   │   └── wslserviceproxystub_*.h  # Version-specific interfaces
│   │   └── base/                 # Helper utilities
│   ├── Release/                  # Compiled BOF output
│   │   └── bof.x64.o            # 64-bit BOF
│   ├── wsl-com.cna              # Aggressor script
│   └── WSL.sln                  # Visual Studio solution
│
└── discovery/                     # Research/discovery tools
    ├── ComProxyDump/             # Tool to extract IDL from proxy DLLs
    └── MsiScripts/               # Scripts for extracting WSL interface definitions
```

## Supported WSL Versions

The BOF automatically detects the installed WSL version and uses the appropriate COM interface:

| WSL Version Range | Interface Version |
|-------------------|-------------------|
| 2.0.0.0 - 2.2.4.0 | `ILxssUserSession_2_0_0_0` |
| 2.3.11.0 - 2.3.17.0 | `ILxssUserSession_2_3_11_0` |
| 2.3.21.0 - 2.3.26.0 | `ILxssUserSession_2_3_21_0` |
| 2.4.4.0 - 2.4.13.0 | `ILxssUserSession_2_4_4_0` |
| 2.5.1.0 | `ILxssUserSession_2_5_1_0` |
| 2.5.4.0 | `ILxssUserSession_2_5_4_0` |
| 2.5.6.0 - 2.5.10.0 | `ILxssUserSession_2_5_6_0` |
| 2.6.0.0 - 2.7.0.0+ | `ILxssUserSession_2_6_0_0` |

## Building

### Prerequisites

- **Visual Studio 2019+** with C++ Desktop Development workload
- **Windows SDK** (10.0.19041.0 or later)
- **Python 3** (optional, for boflint)

### Build with Visual Studio

1. Open `bof/WSL.sln` in Visual Studio
2. Select **Release** configuration and **x64** platform
3. Build the solution (Ctrl+Shift+B)

The compiled BOF will be at `bof/Release/bof.x64.o`

### Build with nmake (Command Line)

```cmd
:: Open a Developer Command Prompt for VS, or run vcvars64.bat
"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

:: Navigate to the project and build
cd bof\WSL
nmake

:: Output: ..\Release\bof.x64.o
```

## Usage in Cobalt Strike

### Load the Aggressor Script

1. In Cobalt Strike, go to **Cobalt Strike → Script Manager**
2. Click **Load** and select `bof/wsl-com.cna`

### Commands

#### List WSL Distributions

```
beacon> wsl list
```

Output:
```
Windows Subsystem for Linux Distributions:
  Ubuntu (Default) (WSL2)
  Debian (WSL2)
  kali-linux (WSL2)
```

#### Execute Commands

```
beacon> wsl exec <distribution> <command>
```

Examples:
```
beacon> wsl exec Ubuntu whoami
beacon> wsl exec Ubuntu "cat /etc/passwd"
beacon> wsl exec Ubuntu "uname -a"
beacon> wsl exec kali-linux "id && hostname"
```

### Help

```
beacon> wsl
```

## How It Works

1. **Version Detection**: Reads WSL version from registry (`HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Lxss\MSI\Version`)

2. **COM Initialization**: Initializes COM with `COINIT_MULTITHREADED` and impersonation-level security

3. **Session Creation**: Creates an instance of `ILxssUserSession` via `CoCreateInstance` with CLSID `{A9B7A1B9-0671-405C-95F1-E0612CB4CE7E}`

4. **Distribution Lookup**: Calls `GetDistributionId()` to resolve the distribution name to a GUID

5. **Process Creation**: Calls `CreateLxProcess()` to spawn `/bin/bash -c "<command>"` inside the distribution

6. **Output Capture**: Reads stdout/stderr from the returned socket handles and sends to Beacon

## Discovery Tools

The `discovery/` folder contains tools used to reverse-engineer the WSL COM interfaces:

### ComProxyDump

Extracts IDL interface definitions from COM proxy/stub DLLs. Used to generate the header files in `bof/WSL/headers/`.

```cmd
cd discovery\ComProxyDump
dotnet build -c Release

:: Dump WSL proxy interfaces
bin\Release\ComProxyDump.exe "C:\Program Files\WSL\wslserviceproxystub.dll" output.idl
```

### MsiScripts

PowerShell scripts to:
- Download multiple WSL versions from Microsoft
- Extract `wslserviceproxystub.dll` from each
- Generate and diff IDL definitions across versions

## Credits

- Contributions by [Adam Chester](https://github.com/xpn), [Antero Guy](https://github.com/antroguy), and [Lee Chagolla-Christensen](https://github.com/leechristensen)
- COM interface research based on work by the [wslbridge2 team](https://github.com/Biswa96/wslbridge2)
- BOF template based on Cobalt Strike's [VS Template](https://github.com/Cobalt-Strike/bof-vs)
- [OleViewDotNet](https://github.com/tyranid/oleviewdotnet) by James Forshaw for COM proxy analysis
