# EvoSQL - SQL Parser & Database Engine

A lightweight SQL parser and file-based database engine written in C, with an integrated Win32 GUI (PopPad). Uses Flex/Bison for SQL parsing and an APUE-based hash-indexed file storage backend.

## Project Structure

```
evalution/                      # SQL Engine (CLI)
├── main.c                      # CLI entry point (reads from test.txt)
├── build.bat                   # Windows build script
├── Makefile                    # Cross-platform build (MinGW / Linux GCC)
├── test.txt                    # Sample SQL queries
│
├── parser/                     # SQL Parser (Flex/Bison)
│   ├── evoparser.y             # Bison grammar
│   ├── evoparser.tab.c/h       # Generated parser
│   ├── evolexer.l              # Flex lexer
│   └── lex.yy.c                # Generated lexer
│
└── db/                         # Database Engine
    ├── db.c                    # APUE hash-file storage engine
    ├── apue.h                  # Cross-platform system abstraction
    ├── apue_db.h               # Database API (open/close/fetch/store/delete)
    ├── database.h              # Operation declarations & globals
    ├── database_globals.c      # Global variable definitions
    ├── error.c                 # Error handling (setjmp/longjmp for GUI)
    ├── Create.c                # CREATE TABLE (+ .meta file generation)
    ├── Select.c                # SELECT (* and WHERE)
    ├── Insert.c                # INSERT INTO
    ├── Update.c                # UPDATE (column-level update via .meta)
    └── Delete.c                # DELETE FROM

PopPad/                         # Win32 GUI Frontend
├── PopPad.c                    # Main window, Execute button, SQL execution
├── PopFile.c                   # File open/save dialogs
├── PopFind.c                   # Find/Replace
├── PopFont.c                   # Font selection
├── PopPrnt.c                   # Print support
├── poppad.h                    # Common declarations
├── poppad.rc                   # Resource file (menus, dialogs, icon)
├── RESOURCE.H                  # Resource IDs
├── build.bat                   # Windows build script (compiles both PopPad + EvoSQL)
└── Makefile                    # Makefile alternative
```

## Supported SQL

```sql
-- Create table with column definitions
CREATE TABLE Ogrenci (
    id      INT,
    ad      VARCHAR(50),
    soyad   VARCHAR(50),
    yas     INT
);

-- Insert records
INSERT INTO Ogrenci VALUES (1, 'Ali', 'Yilmaz', 25);
INSERT INTO Ogrenci VALUES (2, 'Ayse', 'Demir', 22);

-- Select all records
SELECT * FROM Ogrenci;

-- Select by primary key (first column)
SELECT * FROM Ogrenci WHERE id = 1;

-- Update specific column(s)
UPDATE Ogrenci SET ad = 'Veli' WHERE 1;

-- Delete by primary key
DELETE FROM Ogrenci WHERE 1;
```

## Build

### EvoSQL CLI (evosql.exe)

```bat
cd evalution
build.bat
build.bat run
```

SQL commands are read from `test.txt` in the `evalution/` directory.

### PopPad GUI (PopPad.exe)

```bat
cd PopPad
build.bat
build.bat run
```

PopPad provides a text editor with an Execute button. Write SQL in the editor, click Execute, and results appear in the output panel below.

### Requirements

- GCC (MinGW-w64 via MSYS2 on Windows)
- Windows SDK headers (included with MinGW-w64, needed for PopPad GUI)
- Bison and Flex (only needed to regenerate parser/lexer from source)

### Regenerate Parser/Lexer

```bash
cd evalution
make generate
```

## How It Works

1. **Lexer** (`evolexer.l`) tokenizes SQL input into keywords, identifiers, strings, and operators
2. **Parser** (`evoparser.y`) processes tokens according to SQL grammar rules and emits RPN (Reverse Polish Notation) output
3. **Database engine** (`db.c`) manages hash-indexed flat files (`.idx` + `.dat` pairs) for persistent storage
4. **Operations** (`Create.c`, `Insert.c`, etc.) bridge parser actions to database calls
5. **Meta files** (`.meta`) store column definitions per table, enabling column-aware SELECT and UPDATE
6. **GUI mode** (`g_gui_mode`) suppresses RPN debug output and uses `setjmp/longjmp` for safe error recovery in PopPad

## Storage Format

Each table creates three files:

| File | Description |
|------|-------------|
| `TableName.idx` | Hash-indexed key-pointer pairs |
| `TableName.dat` | Semicolon-separated data records |
| `TableName.meta` | Column name definitions |
