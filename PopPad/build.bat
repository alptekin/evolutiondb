@echo off
REM PopPad + EvoSQL Build Script for Windows (MinGW)
REM Usage: build.bat [clean|run]

cd /d "%~dp0"

if "%1"=="clean" (
    echo Cleaning...
    del /Q *.o *.res PopPad.exe 2>nul
    del /Q ..\evolution\db\*.o ..\evolution\parser\*.o 2>nul
    echo Done.
    exit /b 0
)

if "%1"=="run" (
    if exist PopPad.exe (
        start PopPad.exe
    ) else (
        echo PopPad.exe not found. Run build.bat first.
    )
    exit /b 0
)

REM Check for gcc in PATH or MSYS2 installation
where gcc >nul 2>&1
if not errorlevel 1 (
    set "GCC=gcc"
    set "WINDRES=windres"
    goto :build
)

if exist "C:\msys64\mingw64\bin\gcc.exe" (
    set "GCC=C:\msys64\mingw64\bin\gcc.exe"
    set "WINDRES=C:\msys64\mingw64\bin\windres.exe"
    goto :build
)

echo ERROR: gcc not found.
echo.
echo Install MSYS2 and MinGW-w64:
echo   winget install MSYS2.MSYS2
echo   Then run in MSYS2 terminal:
echo   pacman -S mingw-w64-x86_64-gcc
echo.
exit /b 1

:build
echo Using compiler: %GCC%
echo.

set CFLAGS=-Wall -g -D_CRT_SECURE_NO_WARNINGS -DUNICODE -D_UNICODE
set FAIL=0

echo === EvoSQL DB Sources ===

echo [1/18] ../evolution/db/db.c
%GCC% %CFLAGS% -c ..\evolution\db\db.c -o ..\evolution\db\db.o
if errorlevel 1 set FAIL=1

echo [2/18] ../evolution/db/error.c
%GCC% %CFLAGS% -c ..\evolution\db\error.c -o ..\evolution\db\error.o
if errorlevel 1 set FAIL=1

echo [3/18] ../evolution/db/Create.c
%GCC% %CFLAGS% -c ..\evolution\db\Create.c -o ..\evolution\db\Create.o
if errorlevel 1 set FAIL=1

echo [4/18] ../evolution/db/Select.c
%GCC% %CFLAGS% -c ..\evolution\db\Select.c -o ..\evolution\db\Select.o
if errorlevel 1 set FAIL=1

echo [5/18] ../evolution/db/Insert.c
%GCC% %CFLAGS% -c ..\evolution\db\Insert.c -o ..\evolution\db\Insert.o
if errorlevel 1 set FAIL=1

echo [6/18] ../evolution/db/Update.c
%GCC% %CFLAGS% -c ..\evolution\db\Update.c -o ..\evolution\db\Update.o
if errorlevel 1 set FAIL=1

echo [7/18] ../evolution/db/Delete.c
%GCC% %CFLAGS% -c ..\evolution\db\Delete.c -o ..\evolution\db\Delete.o
if errorlevel 1 set FAIL=1

echo [8/18] ../evolution/db/Drop.c
%GCC% %CFLAGS% -c ..\evolution\db\Drop.c -o ..\evolution\db\Drop.o
if errorlevel 1 set FAIL=1

echo [9/18] ../evolution/db/database_globals.c
%GCC% %CFLAGS% -c ..\evolution\db\database_globals.c -o ..\evolution\db\database_globals.o
if errorlevel 1 set FAIL=1

echo === EvoSQL Parser Sources ===

echo [10/18] ../evolution/parser/evoparser.tab.c
%GCC% %CFLAGS% -w -c ..\evolution\parser\evoparser.tab.c -o ..\evolution\parser\evoparser.tab.o
if errorlevel 1 set FAIL=1

echo [11/18] ../evolution/parser/lex.yy.c
%GCC% %CFLAGS% -w -c ..\evolution\parser\lex.yy.c -o ..\evolution\parser\lex.yy.o
if errorlevel 1 set FAIL=1

echo === PopPad Sources ===

echo [12/18] PopPad.c
%GCC% %CFLAGS% -c PopPad.c -o PopPad.o
if errorlevel 1 set FAIL=1

echo [13/18] PopFile.c
%GCC% %CFLAGS% -c PopFile.c -o PopFile.o
if errorlevel 1 set FAIL=1

echo [14/18] PopFind.c
%GCC% %CFLAGS% -c PopFind.c -o PopFind.o
if errorlevel 1 set FAIL=1

echo [15/18] PopFont.c
%GCC% %CFLAGS% -c PopFont.c -o PopFont.o
if errorlevel 1 set FAIL=1

echo [16/18] PopPrnt.c
%GCC% %CFLAGS% -c PopPrnt.c -o PopPrnt.o
if errorlevel 1 set FAIL=1

echo [17/18] poppad.rc (resources)
%WINDRES% -i poppad.rc -o poppad.res -O coff --include-dir=.
if errorlevel 1 set FAIL=1

if %FAIL%==1 (
    echo.
    echo BUILD FAILED!
    exit /b 1
)

echo.
echo [18/18] Linking...
%GCC% -g -o PopPad.exe ^
    PopPad.o PopFile.o PopFind.o PopFont.o PopPrnt.o ^
    ..\evolution\db\db.o ..\evolution\db\error.o ^
    ..\evolution\db\Create.o ..\evolution\db\Select.o ^
    ..\evolution\db\Insert.o ..\evolution\db\Update.o ^
    ..\evolution\db\Delete.o ..\evolution\db\Drop.o ..\evolution\db\database_globals.o ^
    ..\evolution\parser\evoparser.tab.o ..\evolution\parser\lex.yy.o ^
    poppad.res ^
    -mwindows -lcomctl32 -lcomdlg32 -lgdi32
if errorlevel 1 (
    echo LINK FAILED!
    exit /b 1
)

echo.
echo BUILD SUCCESSFUL: PopPad.exe
echo Run with: build.bat run
