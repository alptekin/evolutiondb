@echo off
REM PopPad + EvoSQL Build Script for Windows (MinGW)
REM Usage: build.bat [clean|run]

cd /d "%~dp0"

if "%1"=="clean" (
    echo Cleaning...
    del /Q *.o *.res PopPad.exe 2>nul
    del /Q ..\evalution\db\*.o ..\evalution\parser\*.o 2>nul
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

echo [1/17] ../evalution/db/db.c
%GCC% %CFLAGS% -c ..\evalution\db\db.c -o ..\evalution\db\db.o
if errorlevel 1 set FAIL=1

echo [2/17] ../evalution/db/error.c
%GCC% %CFLAGS% -c ..\evalution\db\error.c -o ..\evalution\db\error.o
if errorlevel 1 set FAIL=1

echo [3/17] ../evalution/db/Create.c
%GCC% %CFLAGS% -c ..\evalution\db\Create.c -o ..\evalution\db\Create.o
if errorlevel 1 set FAIL=1

echo [4/17] ../evalution/db/Select.c
%GCC% %CFLAGS% -c ..\evalution\db\Select.c -o ..\evalution\db\Select.o
if errorlevel 1 set FAIL=1

echo [5/17] ../evalution/db/Insert.c
%GCC% %CFLAGS% -c ..\evalution\db\Insert.c -o ..\evalution\db\Insert.o
if errorlevel 1 set FAIL=1

echo [6/17] ../evalution/db/Update.c
%GCC% %CFLAGS% -c ..\evalution\db\Update.c -o ..\evalution\db\Update.o
if errorlevel 1 set FAIL=1

echo [7/17] ../evalution/db/Delete.c
%GCC% %CFLAGS% -c ..\evalution\db\Delete.c -o ..\evalution\db\Delete.o
if errorlevel 1 set FAIL=1

echo [8/17] ../evalution/db/database_globals.c
%GCC% %CFLAGS% -c ..\evalution\db\database_globals.c -o ..\evalution\db\database_globals.o
if errorlevel 1 set FAIL=1

echo === EvoSQL Parser Sources ===

echo [9/17] ../evalution/parser/evoparser.tab.c
%GCC% %CFLAGS% -w -c ..\evalution\parser\evoparser.tab.c -o ..\evalution\parser\evoparser.tab.o
if errorlevel 1 set FAIL=1

echo [10/17] ../evalution/parser/lex.yy.c
%GCC% %CFLAGS% -w -c ..\evalution\parser\lex.yy.c -o ..\evalution\parser\lex.yy.o
if errorlevel 1 set FAIL=1

echo === PopPad Sources ===

echo [11/17] PopPad.c
%GCC% %CFLAGS% -c PopPad.c -o PopPad.o
if errorlevel 1 set FAIL=1

echo [12/17] PopFile.c
%GCC% %CFLAGS% -c PopFile.c -o PopFile.o
if errorlevel 1 set FAIL=1

echo [13/17] PopFind.c
%GCC% %CFLAGS% -c PopFind.c -o PopFind.o
if errorlevel 1 set FAIL=1

echo [14/17] PopFont.c
%GCC% %CFLAGS% -c PopFont.c -o PopFont.o
if errorlevel 1 set FAIL=1

echo [15/17] PopPrnt.c
%GCC% %CFLAGS% -c PopPrnt.c -o PopPrnt.o
if errorlevel 1 set FAIL=1

echo [16/17] poppad.rc (resources)
%WINDRES% -i poppad.rc -o poppad.res -O coff --include-dir=.
if errorlevel 1 set FAIL=1

if %FAIL%==1 (
    echo.
    echo BUILD FAILED!
    exit /b 1
)

echo.
echo [17/17] Linking...
%GCC% -g -o PopPad.exe ^
    PopPad.o PopFile.o PopFind.o PopFont.o PopPrnt.o ^
    ..\evalution\db\db.o ..\evalution\db\error.o ^
    ..\evalution\db\Create.o ..\evalution\db\Select.o ^
    ..\evalution\db\Insert.o ..\evalution\db\Update.o ^
    ..\evalution\db\Delete.o ..\evalution\db\database_globals.o ^
    ..\evalution\parser\evoparser.tab.o ..\evalution\parser\lex.yy.o ^
    poppad.res ^
    -mwindows -lcomctl32 -lcomdlg32 -lgdi32
if errorlevel 1 (
    echo LINK FAILED!
    exit /b 1
)

echo.
echo BUILD SUCCESSFUL: PopPad.exe
echo Run with: build.bat run
