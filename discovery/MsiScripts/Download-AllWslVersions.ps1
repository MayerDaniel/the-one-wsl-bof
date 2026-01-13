# Download and extract WSL proxy stubs from all available MSI releases
# Enumerates versions 2.0.0 through 2.7.0 and extracts wslserviceproxystub.dll

param(
    [string]$OutputDir = ".\wsl_dlls",
    [string]$TempDir = ".\temp_msi"
)

$ErrorActionPreference = 'Continue'

# Ensure output directory exists
if (-not (Test-Path $OutputDir)) {
    New-Item -ItemType Directory -Path $OutputDir -Force | Out-Null
}

# Ensure temp directory exists
if (-not (Test-Path $TempDir)) {
    New-Item -ItemType Directory -Path $TempDir -Force | Out-Null
}

Write-Host "Starting WSL MSI enumeration and extraction..." -ForegroundColor Green
Write-Host "Output directory: $(Resolve-Path $OutputDir)" -ForegroundColor Cyan
Write-Host ""

$successCount = 0
$failCount = 0
$results = @()

# Enumerate all 2.x.y versions (major=2, minor=0-9, patch=0-99)
for ($minor = 0; $minor -le 9; $minor++) {
    for ($patch = 0; $patch -le 99; $patch++) {
        $version = "2.$minor.$patch"
        $msiFileName = "wsl.$version.0.x64.msi"
        $msiPath = Join-Path $TempDir $msiFileName
        $url = "https://github.com/microsoft/WSL/releases/download/$version/$msiFileName"
        
        Write-Host "[INFO] Checking version $version..." -ForegroundColor Yellow
        Write-Host "[DEBUG] URL: $url" -ForegroundColor DarkGray
        
        try {
            # Try to download the MSI (with proper redirect handling)
            Invoke-WebRequest -Uri $url -OutFile $msiPath -UseBasicParsing -MaximumRedirection 5 -ErrorAction Stop | Out-Null
            
            # Wait for file to be fully written and verify it exists
            Start-Sleep -Milliseconds 500
            
            if (-not (Test-Path $msiPath)) {
                Write-Host "[ERROR] Downloaded file does not exist at $msiPath" -ForegroundColor Red
                $failCount++
                continue
            }
            
            $fileSize = (Get-Item $msiPath).Length
            if ($fileSize -eq 0) {
                Write-Host "[ERROR] Downloaded file is empty (0 bytes)" -ForegroundColor Red
                Remove-Item $msiPath -Force -ErrorAction SilentlyContinue
                $failCount++
                continue
            }
            
            Write-Host "[SUCCESS] Downloaded $msiFileName ($([math]::Round($fileSize/1MB, 2)) MB)" -ForegroundColor Green
            
            # Extract the proxy stub DLL
            Write-Host "[INFO] Extracting proxy stub from $msiFileName..." -ForegroundColor Cyan
            
            try {
                # Call the Extract-WslDll.ps1 script
                & "$PSScriptRoot\Extract-WslDll.ps1" -MsiPath $msiPath -OutputDir $OutputDir
                
                if ($LASTEXITCODE -eq 0 -or $?) {
                    Write-Host "[SUCCESS] Extracted proxy stub for version $version" -ForegroundColor Green
                    $successCount++
                    $results += [PSCustomObject]@{
                        Version = $version
                        Status = "Success"
                        URL = $url
                    }
                } else {
                    Write-Host "[WARNING] Extraction may have failed for version $version" -ForegroundColor Yellow
                    $failCount++
                    $results += [PSCustomObject]@{
                        Version = $version
                        Status = "Extraction Failed"
                        URL = $url
                    }
                }
            } catch {
                Write-Host "[ERROR] Failed to extract from $msiFileName : $_" -ForegroundColor Red
                $failCount++
                $results += [PSCustomObject]@{
                    Version = $version
                    Status = "Extraction Error: $_"
                    URL = $url
                }
            }
            
            # Delete the MSI to save disk space
            if (Test-Path $msiPath) {
                Remove-Item $msiPath -Force -ErrorAction SilentlyContinue
                Write-Host "[INFO] Deleted $msiFileName to save disk space" -ForegroundColor Gray
            }
            
            Write-Host ""
            
        } catch {
            $statusCode = $_.Exception.Response.StatusCode.value__
            
            if ($statusCode -eq 404) {
                Write-Host "[SKIP] Version $version not found (404)" -ForegroundColor DarkGray
            } else {
                Write-Host "[ERROR] Failed to download version $version : $statusCode - $_" -ForegroundColor Red
                $failCount++
                $results += [PSCustomObject]@{
                    Version = $version
                    Status = "Download Failed: $statusCode"
                    URL = $url
                }
            }
        }
        
        # Small delay to avoid rate limiting
        Start-Sleep -Milliseconds 500
    }
}

# Clean up temp directory
if (Test-Path $TempDir) {
    Remove-Item $TempDir -Recurse -Force -ErrorAction SilentlyContinue
    Write-Host "[INFO] Cleaned up temporary directory" -ForegroundColor Gray
}

Write-Host ""
Write-Host "===============================================" -ForegroundColor Green
Write-Host "WSL MSI Enumeration Complete!" -ForegroundColor Green
Write-Host "===============================================" -ForegroundColor Green
Write-Host "Successful extractions: $successCount" -ForegroundColor Green
Write-Host "Failed attempts: $failCount" -ForegroundColor $(if ($failCount -gt 0) { "Yellow" } else { "Green" })
Write-Host ""

if ($results.Count -gt 0) {
    Write-Host "Downloaded versions:" -ForegroundColor Cyan
    $results | Where-Object { $_.Status -eq "Success" } | ForEach-Object {
        Write-Host "  - $($_.Version)" -ForegroundColor Green
    }
    
    if ($results | Where-Object { $_.Status -ne "Success" }) {
        Write-Host ""
        Write-Host "Failed versions:" -ForegroundColor Yellow
        $results | Where-Object { $_.Status -ne "Success" } | Format-Table -AutoSize
    }
}

Write-Host ""
Write-Host "Output files are in: $(Resolve-Path $OutputDir)" -ForegroundColor Cyan

# Generate IDL files from all extracted DLLs
Write-Host ""
Write-Host "===============================================" -ForegroundColor Green
Write-Host "Generating IDL files from proxy stubs..." -ForegroundColor Green
Write-Host "===============================================" -ForegroundColor Green
Write-Host ""

$comProxyDumpPath = Join-Path $PSScriptRoot "..\ComProxyDump\bin\release\net48\ComProxyDump.exe"

if (-not (Test-Path $comProxyDumpPath)) {
    Write-Host "[ERROR] ComProxyDump.exe not found at: $comProxyDumpPath" -ForegroundColor Red
    Write-Host "[ERROR] Please build the ComProxyDump project first" -ForegroundColor Red
    exit 1
}

$dllFiles = Get-ChildItem "$OutputDir\*.dll"

if ($dllFiles.Count -eq 0) {
    Write-Host "[WARNING] No DLL files found in $OutputDir" -ForegroundColor Yellow
} else {
    $idlCount = 0
    
    foreach ($dll in $dllFiles) {
        $idlPath = $dll.FullName -replace '\.dll$', '.idl'
        Write-Host "Processing: $($dll.Name)" -ForegroundColor Cyan
        
        try {
            & $comProxyDumpPath $dll.FullName "4EA0C6DD-E9FF-48E7-994E-13A31D10DC60" $idlPath
            
            if (Test-Path $idlPath) {
                Write-Host "[SUCCESS] Generated $($dll.Name -replace '\.dll$', '.idl')" -ForegroundColor Green
                $idlCount++
            } else {
                Write-Host "[WARNING] IDL file was not created for $($dll.Name)" -ForegroundColor Yellow
            }
        } catch {
            Write-Host "[ERROR] Failed to process $($dll.Name): $_" -ForegroundColor Red
        }
        
        Write-Host ""
    }
    
    Write-Host "Generated $idlCount IDL file(s)" -ForegroundColor Green
}

Write-Host ""
Write-Host "All operations complete!" -ForegroundColor Green
