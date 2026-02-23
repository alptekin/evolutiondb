@echo off
REM EvoSQL Build Script for Windows
REM Usage: build.bat [clean|run]

cd /d "%~dp0"

if "%1"=="clean" (
    echo Cleaning...
    del /Q *.o parser\*.o db\*.o evosql.exe 2>nul
    echo Done.
    exit /b 0
)

if "%1"=="run" (
    if exist evosql.exe (
        evosql.exe
    ) else (
        echo evosql.exe not found. Run build.bat first.
    )
    exit /b 0
)

REM Check for gcc in PATH or MSYS2 installation
where gcc >nul 2>&1
if not errorlevel 1 (
    set "GCC=gcc"
    goto :build
)

if exist "C:\msys64\mingw64\bin\gcc.exe" (
    set "GCC=C:\msys64\mingw64\bin\gcc.exe"
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

set CFLAGS=-Wall -g -D_CRT_SECURE_NO_WARNINGS
set FAIL=0

echo [1/11] main.c
%GCC% %CFLAGS% -c main.c -o main.o
if errorlevel 1 set FAIL=1

echo [2/11] parser/evoparser.tab.c
%GCC% %CFLAGS% -w -c parser\evoparser.tab.c -o parser\evoparser.tab.o
if errorlevel 1 set FAIL=1

echo [3/11] parser/lex.yy.c
%GCC% %CFLAGS% -w -c parser\lex.yy.c -o parser\lex.yy.o
if errorlevel 1 set FAIL=1

echo [4/11] db/db.c
%GCC% %CFLAGS% -c db\db.c -o db\db.o
if errorlevel 1 set FAIL=1

echo [5/11] db/error.c
%GCC% %CFLAGS% -c db\error.c -o db\error.o
if errorlevel 1 set FAIL=1

echo [6/11] db/Create.c
%GCC% %CFLAGS% -c db\Create.c -o db\Create.o
if errorlevel 1 set FAIL=1

echo [7/11] db/Select.c
%GCC% %CFLAGS% -c db\Select.c -o db\Select.o
if errorlevel 1 set FAIL=1

echo [8/11] db/Insert.c
%GCC% %CFLAGS% -c db\Insert.c -o db\Insert.o
if errorlevel 1 set FAIL=1

echo [9/11] db/Update.c
%GCC% %CFLAGS% -c db\Update.c -o db\Update.o
if errorlevel 1 set FAIL=1

echo [10/11] db/Delete.c
%GCC% %CFLAGS% -c db\Delete.c -o db\Delete.o
if errorlevel 1 set FAIL=1

echo [11/11] db/database_globals.c
%GCC% %CFLAGS% -c db\database_globals.c -o db\database_globals.o
if errorlevel 1 set FAIL=1

if %FAIL%==1 (
    echo.
    echo BUILD FAILED!
    exit /b 1
)

echo.
echo Linking...
%GCC% -g -o evosql.exe main.o parser\evoparser.tab.o parser\lex.yy.o db\db.o db\error.o db\Create.o db\Select.o db\Insert.o db\Update.o db\Delete.o db\database_globals.o
if errorlevel 1 (
    echo LINK FAILED!
    exit /b 1
)

echo.
echo BUILD SUCCESSFUL: evosql.exe
echo Run with: evosql.exe
