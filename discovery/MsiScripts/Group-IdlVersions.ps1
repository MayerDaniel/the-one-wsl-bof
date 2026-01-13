# Group IDL files by content hash and create version ranges
param(
    [string]$IdlDir = ".\wsl_idls",
    [string]$OutputDir = ".\diffed_idls"
)

$ErrorActionPreference = 'Stop'

# Ensure output directory exists
if (-not (Test-Path $OutputDir)) {
    New-Item -ItemType Directory -Path $OutputDir -Force | Out-Null
}

Write-Host "Analyzing IDL files for changes..." -ForegroundColor Green
Write-Host ""

# Get all IDL files and extract version information
$idlFiles = Get-ChildItem "$IdlDir\*.idl" | ForEach-Object {
    # Extract version from filename: wslserviceproxystub_2.0.0.0.x64.idl
    if ($_.Name -match 'wslserviceproxystub_(\d+)\.(\d+)\.(\d+)\.(\d+)') {
        $major = [int]$matches[1]
        $minor = [int]$matches[2]
        $patch = [int]$matches[3]
        $build = [int]$matches[4]
        
        # Read file content starting from line 4 (skip the first 3 lines which contain timestamps and filenames)
        $content = Get-Content $_.FullName | Select-Object -Skip 3 | Out-String
        $contentHash = (Get-FileHash -InputStream ([System.IO.MemoryStream]::new([System.Text.Encoding]::UTF8.GetBytes($content))) -Algorithm SHA256).Hash
        
        [PSCustomObject]@{
            File = $_
            FullPath = $_.FullName
            Version = "$major.$minor.$patch.$build"
            Major = $major
            Minor = $minor
            Patch = $patch
            Build = $build
            SortKey = ($major * 1000000) + ($minor * 10000) + ($patch * 100) + $build
            Hash = $contentHash
        }
    }
} | Where-Object { $_ -ne $null } | Sort-Object SortKey

if ($idlFiles.Count -eq 0) {
    Write-Host "[ERROR] No IDL files found in $IdlDir" -ForegroundColor Red
    exit 1
}

Write-Host "Found $($idlFiles.Count) IDL files" -ForegroundColor Cyan
Write-Host ""

# Group consecutive versions by hash
$groups = @()
$currentGroup = $null

foreach ($file in $idlFiles) {
    if ($currentGroup -eq $null -or $currentGroup.Hash -ne $file.Hash) {
        # Start a new group
        if ($currentGroup -ne $null) {
            $groups += $currentGroup
        }
        
        $currentGroup = [PSCustomObject]@{
            Hash = $file.Hash
            FirstVersion = $file.Version
            LastVersion = $file.Version
            FirstFile = $file
            LastFile = $file
            Count = 1
            Versions = @($file.Version)
        }
    } else {
        # Continue current group
        $currentGroup.LastVersion = $file.Version
        $currentGroup.LastFile = $file
        $currentGroup.Count++
        $currentGroup.Versions += $file.Version
    }
}

# Add the last group
if ($currentGroup -ne $null) {
    $groups += $currentGroup
}

Write-Host "Found $($groups.Count) unique IDL version(s)" -ForegroundColor Green
Write-Host ""

# Copy IDL files with version range names
$outputCount = 0
foreach ($group in $groups) {
    if ($group.FirstVersion -eq $group.LastVersion) {
        $outputName = "wslserviceproxystub_$($group.FirstVersion).idl"
    } else {
        $outputName = "wslserviceproxystub_$($group.FirstVersion)_$($group.LastVersion).idl"
    }
    
    $outputPath = Join-Path $OutputDir $outputName
    
    # Copy the IDL file
    Copy-Item -Path $group.FirstFile.FullPath -Destination $outputPath -Force
    
    Write-Host "[COPY] $outputName" -ForegroundColor Cyan
    Write-Host "       Versions: $($group.FirstVersion) - $($group.LastVersion) ($($group.Count) version(s))" -ForegroundColor Gray
    Write-Host "       Hash: $($group.Hash.Substring(0, 16))..." -ForegroundColor DarkGray
    Write-Host ""
    
    $outputCount++
}

Write-Host "===============================================" -ForegroundColor Green
Write-Host "IDL Grouping Complete!" -ForegroundColor Green
Write-Host "===============================================" -ForegroundColor Green
Write-Host "Analyzed: $($idlFiles.Count) IDL files" -ForegroundColor Cyan
Write-Host "Unique versions: $outputCount" -ForegroundColor Cyan
Write-Host "Output directory: $(Resolve-Path $OutputDir)" -ForegroundColor Cyan
Write-Host ""

# Print summary table
Write-Host "Version Range Summary:" -ForegroundColor Yellow
$groups | ForEach-Object {
    [PSCustomObject]@{
        FirstVersion = $_.FirstVersion
        LastVersion = $_.LastVersion
        Count = $_.Count
        HashPrefix = $_.Hash.Substring(0, 12)
    }
} | Format-Table -AutoSize
