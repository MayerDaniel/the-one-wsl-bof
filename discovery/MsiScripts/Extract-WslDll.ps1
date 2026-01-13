# Extract wslserviceproxystub.dll from WSL MSI
param(
    [string]$MsiPath = "C:\Users\dmayer\Downloads\wsl.2.0.14.0.x64.msi",
    [string]$OutputDir = ".\extracted"
)

# Create output directory
New-Item -ItemType Directory -Force -Path $OutputDir | Out-Null

# Create temp directory for extraction
$tempDir = Join-Path $env:TEMP "wsl_msi_extract_$(Get-Random)"
New-Item -ItemType Directory -Force -Path $tempDir | Out-Null

try {
    Write-Host "Extracting MSI: $MsiPath" -ForegroundColor Cyan
    
    # Use 7zip to extract the MSI contents
    $sevenZipPath = "C:\Program Files\7-Zip\7z.exe"
    if (-not (Test-Path $sevenZipPath)) {
        Write-Host "7zip not found at $sevenZipPath, trying alternative locations..." -ForegroundColor Yellow
        $sevenZipPath = "C:\Program Files (x86)\7-Zip\7z.exe"
        if (-not (Test-Path $sevenZipPath)) {
            Write-Host "ERROR: 7zip not found. Please install 7zip." -ForegroundColor Red
            exit 1
        }
    }
    
    # Extract MSI using 7zip
    & $sevenZipPath x "$MsiPath" -o"$tempDir" -y | Out-Null
    
    # Extract all CAB files found in the MSI
    Write-Host "Extracting CAB files..." -ForegroundColor Cyan
    $cabFiles = Get-ChildItem -Path $tempDir -Filter "*.cab" -ErrorAction SilentlyContinue
    foreach ($cab in $cabFiles) {
        Write-Host "  Extracting $($cab.Name)..." -ForegroundColor Gray
        & $sevenZipPath x "$($cab.FullName)" -o"$tempDir\cab_extracted" -y | Out-Null
    }
    
    # Find the proxy stub DLL
    Write-Host "Searching for wslserviceproxystub.dll..." -ForegroundColor Cyan
    $dll = Get-ChildItem -Path $tempDir -Recurse -Filter "wslserviceproxystub.dll" -ErrorAction SilentlyContinue | Select-Object -First 1
    
    if ($dll) {
        # Get version info from the MSI filename
        $version = [System.IO.Path]::GetFileNameWithoutExtension($MsiPath) -replace "wsl\.", ""
        $outputName = "wslserviceproxystub_$version.dll"
        $outputPath = Join-Path $OutputDir $outputName
        
        Copy-Item -Path $dll.FullName -Destination $outputPath -Force
        Write-Host "Extracted: $outputPath" -ForegroundColor Green
        
        # Also get file version from the DLL itself
        $fileVersion = (Get-Item $outputPath).VersionInfo.FileVersion
        Write-Host "DLL File Version: $fileVersion" -ForegroundColor Yellow
    }
    else {
        Write-Host "wslserviceproxystub.dll not found in MSI" -ForegroundColor Red
        
        # List what was extracted for debugging
        Write-Host "`nExtracted files:" -ForegroundColor Yellow
        Get-ChildItem -Path $tempDir -Recurse -File | ForEach-Object {
            Write-Host "  $($_.FullName.Replace($tempDir, ''))"
        }
    }
}
finally {
    # Cleanup temp directory
    Remove-Item -Path $tempDir -Recurse -Force -ErrorAction SilentlyContinue
}