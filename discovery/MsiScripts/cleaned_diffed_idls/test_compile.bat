@echo off
setlocal enabledelayedexpansion

echo ========================================
echo Testing MIDL Compilation of All IDL Files
echo ========================================
echo.

call "C:\Program Files\Microsoft Visual Studio\18\Community\Common7\Tools\VsDevCmd.bat" >nul 2>&1

set SUCCESS=0
set FAILED=0

for %%f in (*.idl) do (
    echo.
    echo Compiling: %%f
    midl "%%f" >nul 2>&1
    if !ERRORLEVEL! EQU 0 (
        echo   [SUCCESS]
        set /a SUCCESS+=1
    ) else (
        echo   [FAILED]
        set /a FAILED+=1
    )
)

echo.
echo ========================================
echo Compilation Results:
echo   Successful: %SUCCESS%
echo   Failed: %FAILED%
echo ========================================
