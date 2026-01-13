# Fix-IdlSyntax.ps1
# This script fixes IDL syntax issues from oleviewdotnet dumps to make them MIDL-compilable

param(
    [string]$SourceFolder = "diffed_idls",
    [string]$DestFolder = "cleaned_diffed_idls"
)

$scriptPath = Split-Path -Parent $MyInvocation.MyCommand.Path
$sourcePath = Join-Path $scriptPath $SourceFolder
$destPath = Join-Path $scriptPath $DestFolder

# Create destination folder if it doesn't exist
if (-not (Test-Path $destPath)) {
    New-Item -ItemType Directory -Path $destPath | Out-Null
    Write-Host "Created output directory: $destPath" -ForegroundColor Green
}

# Get all IDL files from source folder
$idlFiles = Get-ChildItem -Path $sourcePath -Filter "*.idl"

Write-Host "`nProcessing $($idlFiles.Count) IDL files..." -ForegroundColor Cyan

foreach ($file in $idlFiles) {
    Write-Host "`nProcessing: $($file.Name)" -ForegroundColor Yellow
    
    $content = Get-Content -Path $file.FullName -Raw
    
    # Step 1: Add required imports at the beginning (after comments)
    $imports = @"
import "wtypes.idl";
import "unknwn.idl";

"@
    
    # Find where to insert imports (after initial comments, before Type Definitions)
    if ($content -match '(?s)(// Auto-generated.*?Generated:.*?\r?\n\r?\n)') {
        $header = $matches[1]
        $restOfContent = $content.Substring($header.Length)
        $content = $header + $imports + $restOfContent
    }
    
    # Step 2: Convert struct definitions to typedef struct
    # Pattern: /* Memory Size: X */ followed by struct Name {
    $content = $content -replace '(?m)^/\* Memory Size: \d+ \*/\r?\n', ''
    $content = $content -replace '(?s)struct (\w+) \{([^}]+)\};', 'typedef struct $1 {$2} $1;'
    
    # Step 3: Fix array declarations in structs
    # Pattern: wchar_t[257] Member -> wchar_t Member[257]
    $content = $content -replace '(\w+)\[(\d+)\]\s+(\w+);', '$1 $3[$2];'
    
    # Step 4: Remove inline comments within parameter lists that cause issues
    # Remove /* Stack Offset: X */ comments
    $content = $content -replace '/\* Stack Offset: \d+ \*/ ', ''
    
    # Remove /* unique */ comments
    $content = $content -replace '/\* unique \*/', ''
    
    # Remove /* FC_SYSTEM_HANDLE Type */ comments
    $content = $content -replace '/\* FC_SYSTEM_HANDLE \w+ \*/ ', ''
    
    # Remove /* ENUM16 */ comments
    $content = $content -replace '/\* ENUM16 \*/ ', ''
    
    # Remove complex conformance comments like /* C:(FC_TOP_LEVEL_CONFORMANCE)...*/
    $content = $content -replace '/\* C:\(FC_TOP_LEVEL_CONFORMANCE\)[^*]*\*/ ', ''
    
    # Step 5: Fix attribute names - MIDL expects lowercase
    $content = $content -replace '\[In\]', '[in]'
    $content = $content -replace '\[Out\]', '[out]'
    $content = $content -replace '\[in, out\]', '[in, out]'
    
    # Step 6: Fix problematic array syntax in parameters
    # char*[]* becomes char** (pointer to array of pointers)
    # This is a simplification - may need manual adjustment for specific cases
    $content = $content -replace '(\w+)\*\[\]\*', '$1***'
    # char*[] becomes char**
    $content = $content -replace '(\w+)\*\[\](?!\*)', '$1**'
    # wchar_t[] becomes wchar_t*
    $content = $content -replace '(\w+)\[\](?!\*)', '$1*'
    # struct Type[]* becomes struct Type**
    $content = $content -replace '(struct \w+)\[\]\*', '$1**'
    
    # Step 7: Fix type names that aren't valid in IDL
    # sbyte -> signed char or byte
    $content = $content -replace '\bsbyte\b', 'byte'
    # int -> long in most COM contexts, but keeping int should work
    
    # Step 8: Add proper type definitions based on official WSL IDL
    # Check if Struct_4 is referenced but not defined
    if ($content -match 'struct Struct_4' -and $content -notmatch 'typedef struct Struct_4') {
        # Add proper definitions from official wslservice.idl
        $typeDefs = @"
// Enums from official wslservice.idl
typedef enum _LxssHandleType {
    LxssHandleConsole = 0,
    LxssHandleInput,
    LxssHandleOutput,
} LxssHandleType;

typedef enum _LxssDistributionState {
    LxssDistributionStateInvalid = 0,
    LxssDistributionStateInstalled,
    LxssDistributionStateRunning,
    LxssDistributionStateInstalling,
    LxssDistributionStateUninstalling,
    LxssDistributionStateConverting,
    LxssDistributionStateExporting
} LxssDistributionState;

// Struct_4 = LXSS_HANDLE (using generic member names from oleviewdotnet dump)
typedef struct _LXSS_HANDLE {
    ULONG Member0;        // Handle (ULONG in original, HANDLE in real IDL)
    LxssHandleType Member4; // HandleType
} LXSS_HANDLE;

// Alias for compatibility
typedef LXSS_HANDLE Struct_4;


"@
        # Insert after imports
        $content = $content -replace '(import "unknwn\.idl";\r?\n)', "`$1$typeDefs"
    }
    
    # Step 8b: Rename generic struct names to proper names
    # Struct_1 = LXSS_ERROR_INFO
    $content = $content -replace 'typedef struct Struct_1 \{', 'typedef struct _LXSS_ERROR_INFO {'
    $content = $content -replace '\} Struct_1;', '} LXSS_ERROR_INFO;'
    $content = $content -replace 'struct Struct_1\*', 'LXSS_ERROR_INFO*'
    
    # Struct_2 = LXSS_ENUMERATE_INFO (but keep Member names for now since DistroName needs the enum)
    # Update: Use LxssDistributionState for Member10
    $content = $content -replace 'typedef struct Struct_2 \{([^}]+)/\* Offset: 16 \*/ int Member10;', 'typedef struct _LXSS_ENUMERATE_INFO {$1/* Offset: 16 */ LxssDistributionState Member10;'
    $content = $content -replace '\} Struct_2;', '} LXSS_ENUMERATE_INFO;'
    $content = $content -replace 'struct Struct_2', 'LXSS_ENUMERATE_INFO'
    
    # Struct_3 = LXSS_STD_HANDLES (keep struct references to Struct_4/LXSS_HANDLE)
    $content = $content -replace 'typedef struct Struct_3 \{', 'typedef struct _LXSS_STD_HANDLES {'
    $content = $content -replace '\} Struct_3;', '} LXSS_STD_HANDLES;'
    $content = $content -replace 'struct Struct_3\*', 'LXSS_STD_HANDLES*'
    
    # Update Struct_4 references to LXSS_HANDLE
    $content = $content -replace 'struct Struct_4', 'LXSS_HANDLE'
    
    # Step 9: Fix HANDLE parameters - HANDLE causes MIDL2139 errors
    # HANDLE is defined as void* which MIDL doesn't like in parameters
    # Replace HANDLE with UINT_PTR for marshaling compatibility
    # But be careful not to replace "Handle" as a member name or "HandleType"
    $content = $content -replace '\bHANDLE\b(?!\w)', 'UINT_PTR'
    
    # Step 10: Add library block wrapper if not present
    # IDL files should have a library block for coclass definitions
    # But for interface-only IDLs, we just need proper structure
    
    # Step 11: Rename specific functions to match official WSL IDL
    
    # GetDistributionId signature pattern:
    # [in] wchar_t* (DistributionName), [in] int/ULONG (Flags), [in,out] LXSS_ERROR_INFO*, [out] GUID*
    # Match: Proc# with 4 params ending with ERROR_INFO* and GUID*
    $content = $content -replace '(?m)HRESULT (Proc\d+)\(\[in\] wchar_t\* (\w+), \[in\] int (\w+), \[in, out\] LXSS_ERROR_INFO\* (\w+), \[out\] GUID\* (\w+)\);', 'HRESULT GetDistributionId([in] LPCWSTR DistributionName, [in] ULONG Flags, [in, out] LXSS_ERROR_INFO* Error, [out, retval] GUID* pDistroGuid);'
    
    # CreateLxProcess signature pattern:
    # Very distinctive: starts with GUID*, char*, int (count), char** (array), then many wchar_t* params,
    # has short, short for Columns/Rows, has LXSS_STD_HANDLES*, then 7-9 UINT_PTR* outputs, ends with ERROR_INFO*
    # Match the long function with LXSS_STD_HANDLES and multiple UINT_PTR outputs
    
    # Pattern with Flags (newer versions) - 24 parameters total
    $content = $content -replace '(?s)HRESULT (Proc\d+)\(\[in\] GUID\* \w+, \[in\] char\* \w+, \[in\] int \w+, \[in\] char\*\* \w+, \[in\] wchar_t\* \w+, \[in\] wchar_t\* \w+, \[in\] wchar_t\* \w+, \[in\] int \w+, \[in\] wchar_t\* \w+, \[in\] short \w+, \[in\] short \w+, \[in\] int \w+, \[in\] LXSS_STD_HANDLES\* \w+, \[in\] int \w+, \[out\] GUID\* \w+, \[out\] GUID\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[in, out\] LXSS_ERROR_INFO\* \w+\);', @'
HRESULT CreateLxProcess(
        [in] LPCGUID DistroGuid,
        [in] LPCSTR Filename,
        [in] ULONG CommandLineCount,
        [in, size_is(CommandLineCount)] LPCSTR* CommandLine,
        [in] LPCWSTR CurrentWorkingDirectory,
        [in] LPCWSTR NtPath,
        [in, size_is(NtEnvironmentLength)] WCHAR* NtEnvironment,
        [in] ULONG NtEnvironmentLength,
        [in] LPCWSTR Username,
        [in] SHORT Columns,
        [in] SHORT Rows,
        [in] ULONG ConsoleHandle,
        [in] LXSS_STD_HANDLES* StdHandles,
        [in] ULONG Flags,
        [out] GUID* DistributionId,
        [out] GUID* InstanceId,
        [out, system_handle(sh_file)] HANDLE* ProcessHandle,
        [out, system_handle(sh_file)] HANDLE* ServerHandle,
        [out, system_handle(sh_socket)] HANDLE* StandardIn,
        [out, system_handle(sh_socket)] HANDLE* StandardOut,
        [out, system_handle(sh_socket)] HANDLE* StandardErr,
        [out, system_handle(sh_socket)] HANDLE* CommunicationChannel,
        [out, system_handle(sh_socket)] HANDLE* InteropSocket,
        [in, out] LXSS_ERROR_INFO* Error);
'@
    
    # Pattern without Flags (older versions) - 23 parameters total
    $content = $content -replace '(?s)HRESULT (Proc\d+)\(\[in\] GUID\* \w+, \[in\] char\* \w+, \[in\] int \w+, \[in\] char\*\* \w+, \[in\] wchar_t\* \w+, \[in\] wchar_t\* \w+, \[in\] wchar_t\* \w+, \[in\] int \w+, \[in\] wchar_t\* \w+, \[in\] short \w+, \[in\] short \w+, \[in\] int \w+, \[in\] LXSS_STD_HANDLES\* \w+, \[out\] GUID\* \w+, \[out\] GUID\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[in, out\] LXSS_ERROR_INFO\* \w+\);', @'
HRESULT CreateLxProcess(
        [in] LPCGUID DistroGuid,
        [in] LPCSTR Filename,
        [in] ULONG CommandLineCount,
        [in, size_is(CommandLineCount)] LPCSTR* CommandLine,
        [in] LPCWSTR CurrentWorkingDirectory,
        [in] LPCWSTR NtPath,
        [in, size_is(NtEnvironmentLength)] WCHAR* NtEnvironment,
        [in] ULONG NtEnvironmentLength,
        [in] LPCWSTR Username,
        [in] SHORT Columns,
        [in] SHORT Rows,
        [in] ULONG ConsoleHandle,
        [in] LXSS_STD_HANDLES* StdHandles,
        [out] GUID* DistributionId,
        [out] GUID* InstanceId,
        [out, system_handle(sh_file)] HANDLE* ProcessHandle,
        [out, system_handle(sh_file)] HANDLE* ServerHandle,
        [out, system_handle(sh_socket)] HANDLE* StandardIn,
        [out, system_handle(sh_socket)] HANDLE* StandardOut,
        [out, system_handle(sh_socket)] HANDLE* StandardErr,
        [out, system_handle(sh_socket)] HANDLE* CommunicationChannel,
        [out, system_handle(sh_socket)] HANDLE* InteropSocket,
        [in, out] LXSS_ERROR_INFO* Error);
'@
    
    # Pattern for v2.0.0.0_2.2.4.0 - 23 parameters, missing InteropSocket (but has Flags)
    # This pattern matches: has [in] int after LXSS_STD_HANDLES*, then 6 UINT_PTR* outputs (not 7)
    $content = $content -replace '(?s)HRESULT (Proc\d+)\(\[in\] GUID\* \w+, \[in\] char\* \w+, \[in\] int \w+, \[in\] char\*\* \w+, \[in\] wchar_t\* \w+, \[in\] wchar_t\* \w+, \[in\] wchar_t\* \w+, \[in\] int \w+, \[in\] wchar_t\* \w+, \[in\] short \w+, \[in\] short \w+, \[in\] int \w+, \[in\] LXSS_STD_HANDLES\* \w+, \[in\] int \w+, \[out\] GUID\* \w+, \[out\] GUID\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[out\] UINT_PTR\* \w+, \[in, out\] LXSS_ERROR_INFO\* \w+\);', @'
HRESULT CreateLxProcess(
        [in] LPCGUID DistroGuid,
        [in] LPCSTR Filename,
        [in] ULONG CommandLineCount,
        [in, size_is(CommandLineCount)] LPCSTR* CommandLine,
        [in] LPCWSTR CurrentWorkingDirectory,
        [in] LPCWSTR NtPath,
        [in, size_is(NtEnvironmentLength)] WCHAR* NtEnvironment,
        [in] ULONG NtEnvironmentLength,
        [in] LPCWSTR Username,
        [in] SHORT Columns,
        [in] SHORT Rows,
        [in] ULONG ConsoleHandle,
        [in] LXSS_STD_HANDLES* StdHandles,
        [in] ULONG Flags,
        [out] GUID* DistributionId,
        [out] GUID* InstanceId,
        [out, system_handle(sh_file)] HANDLE* ProcessHandle,
        [out, system_handle(sh_file)] HANDLE* ServerHandle,
        [out, system_handle(sh_socket)] HANDLE* StandardIn,
        [out, system_handle(sh_socket)] HANDLE* StandardOut,
        [out, system_handle(sh_socket)] HANDLE* StandardErr,
        [out, system_handle(sh_socket)] HANDLE* CommunicationChannel,
        [in, out] LXSS_ERROR_INFO* Error);
'@
    
    # Step 12: Ensure proper line endings
    $content = $content -replace '\r\n', "`n"
    $content = $content -replace '\n', "`r`n"
    
    # Write fixed content to destination
    $destFile = Join-Path $destPath $file.Name
    Set-Content -Path $destFile -Value $content -NoNewline
    
    Write-Host "  Fixed and saved to: $($file.Name)" -ForegroundColor Green
}

Write-Host "`n========================================" -ForegroundColor Cyan
Write-Host "Syntax fix complete!" -ForegroundColor Green
Write-Host "Processed: $($idlFiles.Count) files" -ForegroundColor Green
Write-Host "Output folder: $destPath" -ForegroundColor Cyan
Write-Host "========================================`n" -ForegroundColor Cyan

# Now let's try to compile one to verify
Write-Host "Testing compilation of first file..." -ForegroundColor Yellow
$testFile = Get-ChildItem -Path $destPath -Filter "*.idl" | Select-Object -First 1

if ($testFile) {
    $vsDevCmd = Get-ChildItem "C:\Program Files\Microsoft Visual Studio" -Recurse -Filter "VsDevCmd.bat" -ErrorAction SilentlyContinue | Select-Object -First 1
    
    if ($vsDevCmd) {
        Write-Host "Using VS Dev Command: $($vsDevCmd.FullName)" -ForegroundColor Cyan
        Write-Host "Compiling: $($testFile.Name)..." -ForegroundColor Yellow
        
        Push-Location $destPath
        $output = cmd /c "`"$($vsDevCmd.FullName)`" && midl `"$($testFile.Name)`"" 2>&1
        Pop-Location
        
        if ($LASTEXITCODE -eq 0) {
            Write-Host "`nCompilation successful! ✓" -ForegroundColor Green
        } else {
            Write-Host "`nCompilation errors detected:" -ForegroundColor Red
            Write-Host $output -ForegroundColor Yellow
            Write-Host "`nYou may need to manually review and fix remaining issues." -ForegroundColor Yellow
        }
    } else {
        Write-Host "Visual Studio Developer Command Prompt not found. Skipping compilation test." -ForegroundColor Yellow
    }
}

# ============================================================================
# PREPROCESSING: Extract common types and rename interfaces
# ============================================================================

Write-Host "`n========================================" -ForegroundColor Cyan
Write-Host "PREPROCESSING FOR MULTI-PROJECT IMPORT" -ForegroundColor Cyan
Write-Host "========================================" -ForegroundColor Cyan

$preprocessPath = Join-Path $scriptPath "preprocessed_idls"

# Create preprocessed folder
if (-not (Test-Path $preprocessPath)) {
    New-Item -ItemType Directory -Path $preprocessPath | Out-Null
    Write-Host "`nCreated preprocessed directory: $preprocessPath" -ForegroundColor Green
} else {
    # Clean existing files
    Remove-Item -Path (Join-Path $preprocessPath "*") -Force -ErrorAction SilentlyContinue
    Write-Host "`nCleaned preprocessed directory" -ForegroundColor Green
}

# Create common types file
$commonTypesContent = @"
// wsl_common_types.idl
// Common type definitions for WSL service interfaces
// Extract common types to avoid redefinition conflicts when importing multiple versions

import "wtypes.idl";
import "unknwn.idl";

// ============================================================================
// Enums from official wslservice.idl
// ============================================================================

typedef enum _LxssHandleType {
    LxssHandleConsole = 0,
    LxssHandleInput,
    LxssHandleOutput,
} LxssHandleType;

typedef enum _LxssDistributionState {
    LxssDistributionStateInvalid = 0,
    LxssDistributionStateInstalled,
    LxssDistributionStateRunning,
    LxssDistributionStateInstalling,
    LxssDistributionStateUninstalling,
    LxssDistributionStateConverting,
    LxssDistributionStateExporting
} LxssDistributionState;

// ============================================================================
// Common Structures
// ============================================================================

// LXSS_HANDLE (using generic member names from oleviewdotnet dump)
typedef struct _LXSS_HANDLE {
    ULONG Member0;        // UINT_PTR (ULONG in original, UINT_PTR in real IDL)
    LxssHandleType Member4; // HandleType
} LXSS_HANDLE;

// Alias for compatibility
typedef LXSS_HANDLE Struct_4;

// Error information structure
typedef struct _LXSS_ERROR_INFO {
    /* Offset: 0 */ int Member0;
    /* Offset: 8 */ long Member8;
    /* Offset: 16 */ wchar_t* Member10;
    /* Offset: 24 */ wchar_t* Member18;
} LXSS_ERROR_INFO;

// Enumeration information structure
typedef struct _LXSS_ENUMERATE_INFO {
    /* Offset: 0 */ GUID Member0;
    /* Offset: 16 */ LxssDistributionState Member10;
    /* Offset: 20 */ int Member14;
    /* Offset: 24 */ int Member18;
    /* Offset: 28 */ wchar_t Member1C[257];
} LXSS_ENUMERATE_INFO;

// Standard handles structure
typedef struct _LXSS_STD_HANDLES {
    /* Offset: 0 */ LXSS_HANDLE Member0;
    /* Offset: 8 */ LXSS_HANDLE Member8;
    /* Offset: 16 */ LXSS_HANDLE Member10;
} LXSS_STD_HANDLES;
"@

$commonTypesPath = Join-Path $preprocessPath "wsl_common_types.idl"
Set-Content -Path $commonTypesPath -Value $commonTypesContent
Write-Host "Created common types file: wsl_common_types.idl" -ForegroundColor Green

# Process each cleaned IDL file
$cleanedFiles = Get-ChildItem -Path $destPath -Filter "*.idl"
Write-Host "`nProcessing $($cleanedFiles.Count) cleaned IDL files for preprocessing..." -ForegroundColor Cyan

foreach ($file in $cleanedFiles) {
    Write-Host "`nPreprocessing: $($file.Name)" -ForegroundColor Yellow
    
    $content = Get-Content -Path $file.FullName -Raw
    
    # Extract version from filename (e.g., wslserviceproxystub_2.0.0.0_2.2.4.0.idl -> 2_0_0_0_2_2_4_0)
    if ($file.Name -match 'wslserviceproxystub_(\d+\.\d+\.\d+\.\d+)(?:_(\d+\.\d+\.\d+\.\d+))?\.idl') {
        $version1 = $matches[1] -replace '\.', '_'
        if ($matches[2]) {
            $version2 = $matches[2] -replace '\.', '_'
            $versionSuffix = "${version1}_${version2}"
        } else {
            $versionSuffix = $version1
        }
    } else {
        $versionSuffix = "Unknown"
    }
    
    # Remove all the common type definitions that are now in wsl_common_types.idl
    # Remove import statements
    $content = $content -replace 'import "wtypes\.idl";\s*', ''
    $content = $content -replace 'import "unknwn\.idl";\s*', ''
    
    # Remove enum definitions
    $content = $content -replace '(?s)// Enums from official wslservice\.idl.*?(?=// )', ''
    
    # Remove typedef enum blocks
    $content = $content -replace '(?s)typedef enum _LxssHandleType \{.*?\} LxssHandleType;\s*', ''
    $content = $content -replace '(?s)typedef enum _LxssDistributionState \{.*?\} LxssDistributionState;\s*', ''
    
    # Remove struct definitions (but keep the Type Definitions comment)
    $content = $content -replace '(?s)// Struct_4 = LXSS_HANDLE.*?typedef LXSS_HANDLE Struct_4;\s*', ''
    $content = $content -replace '(?s)typedef struct _LXSS_HANDLE \{.*?\} LXSS_HANDLE;\s*', ''
    $content = $content -replace '(?s)typedef struct _LXSS_ERROR_INFO \{.*?\} LXSS_ERROR_INFO;\s*', ''
    $content = $content -replace '(?s)typedef struct _LXSS_ENUMERATE_INFO \{.*?\} LXSS_ENUMERATE_INFO;\s*', ''
    $content = $content -replace '(?s)typedef struct _LXSS_STD_HANDLES \{.*?\} LXSS_STD_HANDLES;\s*', ''
    
    # Add import for common types at the beginning (after header comments)
    if ($content -match '(?s)(// Auto-generated.*?Generated:.*?\r?\n)') {
        $header = $matches[1]
        $restOfContent = $content.Substring($header.Length)
        $content = $header + "`nimport `"wsl_common_types.idl`";`n" + $restOfContent
    }
    
    # Rename the interface to include version
    $content = $content -replace 'interface ILxssUserSession(\s*:\s*IUnknown)', "interface ILxssUserSession_$versionSuffix`$1"
    
    # Clean up excessive blank lines
    $content = $content -replace '(\r?\n){4,}', "`r`n`r`n`r`n"
    
    # Save preprocessed file
    $outputPath = Join-Path $preprocessPath $file.Name
    Set-Content -Path $outputPath -Value $content
    Write-Host "  → Created: $($file.Name) with interface ILxssUserSession_$versionSuffix" -ForegroundColor Green
}

Write-Host "`n✓ Preprocessing complete!" -ForegroundColor Green
Write-Host "  - Common types: wsl_common_types.idl" -ForegroundColor Cyan
Write-Host "  - Preprocessed IDLs: $($cleanedFiles.Count) files" -ForegroundColor Cyan
Write-Host "  - Output folder: preprocessed_idls\" -ForegroundColor Cyan
