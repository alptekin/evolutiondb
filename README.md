# EvoSQL - SQL Database Engine

I started this project approximately 18 years ago, driven by a deep curiosity about how database engines work internally. At the time, I began building a relational SQL database engine from scratch in C — implementing core components such as the parser, storage engine, indexing structures, and execution layer myself.

Soon after the initial development phase, the project was set aside. It did not remain active in a public repository; instead, it was archived and stayed on a DVD for many years — preserved, but untouched.

About one month ago, I rediscovered the project and decided to revive it. This time, I resumed development as a solo engineer with the assistance of Claude OPS 4.6. In just a few days, I was able to implement and refine significantly more functionality than I had built over several years in the past. The combination of prior architectural vision and modern AI-assisted development dramatically accelerated progress.

EvolutionDB was born as a relational database engine, but its next evolution is clear: it will incorporate AI capabilities to translate natural language directly into optimized SQL, enabling intuitive human interaction while preserving the performance characteristics of a high-speed relational core. The goal is a database that remains structurally rigorous and extremely fast, yet accessible through natural language — bridging classical relational systems with modern AI-driven interfaces.

---

A file-based SQL database engine written in C. Features Flex/Bison SQL parsing, APUE hash-indexed file storage, a Win32 GUI, and a PostgreSQL wire protocol server that enables connectivity from DBeaver, pgAdmin, psql and other standard PostgreSQL clients.

## Architecture

```
                    +------------------+
                    |     DBeaver      |
                    |  pgAdmin / psql  |
                    +--------+---------+
                             |  PostgreSQL v3 Wire Protocol (TCP 5433)
                    +--------+---------+
                    |     Adaptor      |
                    | evosql-server.exe|
                    +--------+---------+
                             |
              +--------------+--------------+
              |                             |
     +--------+---------+         +---------+---------+
     |   SQL Parser     |         |  Database Engine  |
     |   Flex/Bison     |         |  APUE Hash Files  |
     |  (evoparser.y)   |         | (.idx .dat .meta) |
     +------------------+         +-------------------+
              |
     +--------+---------+
     |     PopPad       |
     |   PopPad.exe     |
     |  (Win32 GUI)     |
     +------------------+
```

The system consists of three main components:

| Component | Output | Description |
|-----------|--------|-------------|
| **Evolution** | `evosql.exe` | CLI SQL engine - parser + database operations |
| **Adaptor** | `evosql-server.exe` | PostgreSQL wire protocol server (port 5433) |
| **PopPad** | `PopPad.exe` | Win32 GUI - SQL editor and result viewer |

## Project Structure

```
EvoSQL/
├── Makefile                        # Top-level build (all components)
├── README.md
│
├── evolution/                      # SQL Engine (CLI)
│   ├── main.c                      # CLI entry point
│   ├── Makefile
│   ├── test.txt                    # Sample SQL queries
│   │
│   ├── parser/                     # SQL Parser (Flex/Bison)
│   │   ├── evoparser.y             # Bison grammar definitions
│   │   ├── evoparser.tab.c/h       # Generated parser
│   │   ├── evolexer.l              # Flex lexer
│   │   └── lex.yy.c               # Generated lexer
│   │
│   └── db/                         # Database Engine
│       ├── db.c                    # APUE hash-file storage engine
│       ├── apue.h                  # Platform abstraction layer
│       ├── apue_db.h               # Database API (open/close/fetch/store/delete)
│       ├── database.h              # Operation declarations and global variables
│       ├── database_globals.c      # Global variable definitions
│       ├── error.c                 # Error handling (setjmp/longjmp)
│       ├── Create.c                # CREATE TABLE + .meta file generation
│       ├── Select.c                # SELECT * and WHERE filtering
│       ├── Insert.c                # INSERT INTO
│       ├── Update.c                # UPDATE (column-level updates)
│       ├── Delete.c                # DELETE FROM
│       └── Drop.c                  # DROP TABLE / TRUNCATE TABLE
│
├── adaptor/                        # PostgreSQL Wire Protocol Server
│   ├── main.c                      # TCP server, multi-threaded client handling
│   ├── pg_protocol.c/h             # PG v3 wire protocol (message read/write)
│   ├── query_executor.c/h          # Query execution bridge (parser -> result)
│   ├── result.c/h                  # ResultSet data structure
│   ├── catalog.c/h                 # pg_catalog / information_schema emulation
│   └── Makefile
│
└── PopPad/                         # Win32 GUI
    ├── PopPad.c                    # Main window, Execute button, result grid
    ├── PopFile.c                   # File open/save dialogs
    ├── PopFind.c                   # Find/Replace
    ├── PopFont.c                   # Font selection
    ├── PopPrnt.c                   # Print support
    ├── poppad.h                    # Common declarations
    ├── poppad.rc / RESOURCE.H      # Resource files (menus, dialogs, icon)
    └── Makefile
```

## Supported SQL

### DDL (Data Definition)

```sql
CREATE TABLE Students (
    id      INT NOT NULL PRIMARY KEY,
    name    VARCHAR(50) NOT NULL,
    surname VARCHAR(50),
    age     INT,
    active  BOOLEAN NOT NULL
);

DROP TABLE Students;
TRUNCATE TABLE Students;
```

### DML (Data Manipulation)

```sql
INSERT INTO Students VALUES (1, 'Alptekin', 'Topal', 25, true);

SELECT * FROM Students;
SELECT * FROM Students WHERE id = 1;
SELECT * FROM Students WHERE age > 20 AND active = true;
SELECT * FROM Students ORDER BY name ASC;
SELECT * FROM Students ORDER BY age DESC;

UPDATE Students SET name = 'Ahmet', age = 30 WHERE 1;

DELETE FROM Students WHERE 1;
```

### Supported Data Types

| Type | Encoding | Description |
|------|----------|-------------|
| `BIT` / `TINYINT` | 1xxxx | Integer (1 byte) |
| `SMALLINT` | 2xxxx | Short integer (2 bytes) |
| `MEDIUMINT` | 3xxxx | Medium integer |
| `INT` | 4xxxx | Integer (4 bytes) |
| `INTEGER` | 5xxxx | Same as INT |
| `BIGINT` | 6xxxx | Large integer (8 bytes) |
| `REAL` | 7xxxx | Floating point |
| `DOUBLE` | 8xxxx | Double precision float |
| `FLOAT` | 9xxxx | Floating point |
| `DECIMAL` | 11xxxx | Fixed-point decimal |
| `DATE` / `TIME` / `TIMESTAMP` / `DATETIME` | 10xxxx | Date/time types |
| `CHAR(N)` | 12xxxx | Fixed-length string |
| `VARCHAR(N)` | 13xxxx | Variable-length string |
| `BOOLEAN` | 22xxxx | true/false |
| `TEXT` / `BLOB` / `ENUM` | other | Text/binary data |

### WHERE Clause

- Comparison: `=`, `<>`, `<`, `>`, `<=`, `>=`
- Logical: `AND`, `OR`, `NOT`
- Other: `IN`, `LIKE`, `BETWEEN`, `IS NULL`

### Constraints

- `NOT NULL` - Column cannot be empty (validated during INSERT and UPDATE)
- `PRIMARY KEY` - Primary key (visible in DBeaver)
- Constraint information is stored in the `.meta` file and reported to DBeaver via `pg_constraint`

## Storage Format

Each table creates three files:

| File | Contents |
|------|----------|
| `Table.idx` | Hash-indexed key-pointer pairs |
| `Table.dat` | Semicolon-separated data records |
| `Table.meta` | Metadata (5 lines) |

### .meta File Format

```
Line 1: id;name;surname;age;active       (column names)
Line 2: 256                               (pad size - for in-place UPDATE)
Line 3: 40000;130050;130050;40000;220001  (type encodings)
Line 4: 0                                 (PRIMARY KEY column index, 0-based; -1 = none)
Line 5: 1;1;0;0;1                         (NOT NULL flags; 1=NOT NULL, 0=nullable)
```

**Type encoding**: `typeVal / 10000` = type family, `typeVal % 10000` = size. For example, `130050` = VARCHAR(50).

**Pad size**: Records are stored at a fixed width so that UPDATE can overwrite in-place. If a record exceeds the current pad size, the entire table is resized (2x).

## PostgreSQL Wire Protocol (Adaptor)

The adaptor implements the PostgreSQL v3 wire protocol and listens on port 5433:

### Supported Features

- **Simple Query Protocol** (`Q` message) - Single or multiple SQL statements
- **Extended Query Protocol** (`P`/`B`/`D`/`E`/`S` messages) - DBeaver / JDBC compatibility
- **Multi-threaded**: Each client connection runs in its own thread (synchronized via `CRITICAL_SECTION`)
- **SSL/GSS rejection**: Encryption requests are declined
- **Catalog emulation**: All pg_catalog queries required by DBeaver are handled

### Emulated System Tables

| Table | Contents |
|-------|----------|
| `pg_database` | Database list (evosql) |
| `pg_namespace` | Schema list (pg_catalog, public, information_schema) |
| `pg_class` | Table list (scanned from .meta files) |
| `pg_attribute` | Column information (type, NOT NULL, length) |
| `pg_type` | PostgreSQL type definitions (13 base types) |
| `pg_constraint` | PRIMARY KEY constraints |
| `pg_proc`, `pg_settings`, `pg_depend` | Empty result (for compatibility) |
| `information_schema.tables` | Table list |
| `information_schema.columns` | Column information (type, nullable) |
| `information_schema.schemata` | Schema list |

### Supported Built-in Functions

`version()`, `current_database()`, `current_schema`, `current_user`, `session_user`, `current_setting(...)`, `current_schemas(...)`, `inet_server_port()`, `format_type(...)`, `pg_get_userbyid(...)`, `pg_encoding_to_char(...)`, `has_table_privilege(...)`, `has_schema_privilege(...)`, `obj_description(...)`, `col_description(...)`

### Connection

```
Host:     localhost
Port:     5433
Database: evosql
User:     (any)
Password: (any)
```

Create a new PostgreSQL connection in DBeaver with the settings above. Table list, column information, types, NOT NULL and PRIMARY KEY constraints are displayed automatically.

## Build

### Requirements

- GCC (MinGW-w64 / MSYS2)
- Windows SDK headers (included with MinGW-w64, required for PopPad)
- Bison and Flex (only needed to regenerate parser/lexer from source)

### Build All Components

```bash
make              # Build all three components
make evolution    # Build only evosql.exe (CLI)
make adaptor      # Build only evosql-server.exe
make poppad       # Build only PopPad.exe
make clean        # Clean all build artifacts
make release      # Stripped binaries to release/ directory
make generate     # Regenerate parser/lexer from .y/.l files
```

### CLI Usage

```bash
cd evolution
make
./evosql.exe      # Reads SQL commands from test.txt
```

### Adaptor Server

```bash
cd adaptor
make
./evosql-server.exe         # Listens on port 5433
./evosql-server.exe 5434    # Custom port
```

### PopPad GUI

```bash
cd PopPad
make
./PopPad.exe
```

Write SQL statements in the editor, click Execute. Results are displayed in the panel below.

## Docker

Run the EvoSQL server in a Docker container (Linux) without any build tools:

### Quick Start

```bash
# Build and run with docker-compose
docker compose up -d

# Or build and run manually
docker build -t evosql .
docker run -d -p 5433:5433 --name evosql evosql
```

### Connect

```bash
# psql
psql -h localhost -p 5433 -U evosql evosql

# Or use DBeaver: PostgreSQL, localhost:5433, db=evosql
```

### Data Persistence

Table files (`.idx`, `.dat`, `.meta`) are stored in `/data` inside the container. The docker-compose configuration mounts a named volume so data survives container restarts:

```bash
docker compose down       # stop (data preserved)
docker compose up -d      # restart (data still there)
docker compose down -v    # stop and delete data
```

## How It Works

1. **Lexer** (`evolexer.l`) - Tokenizes SQL input into keywords, identifiers, strings, and operators
2. **Parser** (`evoparser.y`) - Processes tokens according to SQL grammar rules and emits RPN (Reverse Polish Notation)
3. **Database engine** (`db.c`) - Manages hash-indexed flat files (`.idx` + `.dat`) for persistent storage
4. **Operation modules** (`Create.c`, `Insert.c`, etc.) - Bridge parser actions to database calls
5. **Meta files** (`.meta`) - Store per-table column definitions, types, and constraints
6. **Type validation** - Validates values against column types during INSERT/UPDATE (integer, decimal, varchar length, boolean)
7. **Constraint enforcement** - NOT NULL constraints are enforced on INSERT and UPDATE
8. **GUI mode** (`g_gui_mode`) - Suppresses RPN debug output and uses `setjmp/longjmp` for safe error recovery
9. **Adaptor layer** - Forwards SQL queries to the EvoSQL engine and returns structured results to PostgreSQL clients
