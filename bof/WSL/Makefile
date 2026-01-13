CFLAGS=/c /GS- /TC /D_HAS_EXCEPTIONS=0 /Od
DEBUGCFLAGS=/Zi /MTd /D_DEBUG /EHsc /std:c++20
PYTHON=python

# Determine output extension based on target platform
# Check Platform (MSBuild), VSCMD_ARG_TGT_ARCH (vcvarsall.bat), or PROCESSOR_ARCHITECTURE
!IF "$(Platform)" == "x64" || "$(VSCMD_ARG_TGT_ARCH)" == "x64"
OUTDIR=..\Release\ 
IMDIR=Release\ 
DOUTDIR=..\Debug\ 
DIMDIR=Debug\ 
OUTNAME=wsl.x64.o
!ELSE
OUTDIR=..\Release\ 
IMDIR=Release\ 
DIMDIR=Debug\ 
DOUTDIR=..\Debug\ 
OUTNAME=wsl.x86.o
!ENDIF


all: *.cpp
    @$(MAKE) /A $(patsubst %.c,%.obj, $(patsubst %.cpp, %.obj, $(patsubsti %, $(IMDIR)\%, $**)))

    @if not exist "$(OUTDIR)" mkdir "$(OUTDIR)"
    copy "$(IMDIR)\bof.obj" "$(OUTDIR)$(OUTNAME)"

all-debug: *.cpp
    @$(MAKE) /A $(patsubst %.c,%.exe, $(patsubst %.cpp, %.exe, $(patsubsti %, $(DOUTDIR)\%, $**)))

.cpp{$(IMDIR)}.obj:
    @if not exist "$(IMDIR)" mkdir "$(IMDIR)"
    $(CPP) $(CFLAGS) /Fo"$@" $<

    @(where $(PYTHON) >nul 2>nul \
        && $(PYTHON) --version >nul 2>nul \
        || (echo [*] Install Python to enable boflint && exit /b 0) \
    ) && $(PYTHON) utils\boflint.py --logformat vs --loader cs "$@"

.cpp{$(DOUTDIR)}.exe:
    @if not exist "$(DIMDIR)" mkdir "$(DIMDIR)"
    @if not exist "$(DOUTDIR)" mkdir "$(DOUTDIR)"
    $(CPP) $(DEBUGCFLAGS) /Fo$(DIMDIR) /Fd$(DIMDIR) /Fe"$@" $< base/mock.cpp

clean:
     @if exist "$(DIMDIR)" rmdir /Q /S "$(DIMDIR)"
     @if exist "$(IMDIR)" rmdir /Q /S "$(IMDIR)"
     @if exist "$(OUTDIR)" rmdir /Q /S "$(OUTDIR)"
     @if exist "$(DOUTDIR)" rmdir /Q /S "$(DOUTDIR)"