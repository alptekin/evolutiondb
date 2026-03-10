# EvoSQL - SQL Database Engine

I started this project approximately 18 years ago, driven by a deep curiosity about how database engines work internally. At the time, I began building a relational SQL database engine from scratch in C — implementing core components such as the parser, storage engine, indexing structures, and execution layer myself.

Soon after the initial development phase, the project was set aside. It did not remain active in a public repository; instead, it was archived and stayed on a DVD for many years — preserved, but untouched.

About one month ago, I rediscovered the project and decided to revive it. This time, I resumed development as a solo engineer with the assistance of Claude OPUS 4.6. In just a few days, I was able to implement and refine significantly more functionality than I had built over several years in the past. The combination of prior architectural vision and modern AI-assisted development dramatically accelerated progress.

EvolutionDB was born as a relational database engine, but its next evolution is clear: it will incorporate AI capabilities to translate natural language directly into optimized SQL, enabling intuitive human interaction while preserving the performance characteristics of a high-speed relational core. The goal is a database that remains structurally rigorous and extremely fast, yet accessible through natural language — bridging classical relational systems with modern AI-driven interfaces.

---

EvoSQL is a SQL database engine written in C featuring unified page-based storage, a Flex/Bison SQL parser, B+ tree indexing, a Clock Sweep buffer pool, undo-log transactions, and a dual-protocol server that speaks both PostgreSQL wire protocol and a native text protocol.

## Architecture

```
  +-----------------+    +------------------+    +------------------+
  |  evosql-cli     |    |     DBeaver      |    |     PopPad       |
  |  (CLI client)   |    |  pgAdmin / psql  |    |   (Win32 GUI)    |
  +--------+--------+    +--------+---------+    +------------------+
           |                       |
   EVO Protocol (TCP 9967)   PG v3 Protocol (TCP 5433)
           |                       |
           +-----------+-----------+
                       |
              +--------+---------+
              |     Adaptor      |
              | evosql-server    |
              |  (dual-protocol) |
              +--------+---------+
                       |
        +--------------+--------------+
        |              |              |
  +-----+------+ +----+-----+ +------+------+
  | net.c/h    | | server.c | | pg_handler  |
  | networking | | TCP srv  | | evo_protocol|
  +------------+ +----+-----+ +-------------+
                       |
        +--------------+--------------+
        |                             |
  +-----+----------+       +---------+---------+
  |   SQL Parser   |       |  Database Engine  |
  |   Flex/Bison   |       |  APUE Hash Files  |
  |  (evoparser.y) |       | (.idx .dat .meta) |
  +----------------+       +---+---------------+
                                |
                    +-----------+-----------+
                    | Unified Page Storage  |
                    | (evosql.db — single   |
                    |  global binary file)  |
                    +-----------+-----------+
                                |
                    +-----------+-----------+
                    |  Buffer Pool (4KB     |
                    |  Clock Sweep cache)   |
                    +-----------------------+
```

The system consists of four main components:

| Component | Output | Description |
|-----------|--------|-------------|
| **Evolution** | `evosql` | Core SQL engine — parser + database operations |
| **Adaptor** | `evosql-server` | Dual-protocol server (PG on 5433, EVO on 9967) |
| **CLI** | `evosql-cli` | Interactive client with readline/history (connects via EVO protocol) |
| **PopPad** | `PopPad.exe` | Win32 GUI — SQL editor and result viewer |

## Project Structure

```
EvoSQL/
├── Makefile                        # Top-level build (all components)
├── Dockerfile                      # Multi-stage Docker build (gcc:13 → debian slim)
├── docker-compose.yml              # One-command deploy (PG:5433 + EVO:9967)
├── README.md
│
├── evolution/                      # SQL Engine (Core)
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
│       ├── expression.c            # WHERE expression evaluation
│       ├── DatabaseMgmt.c          # CREATE/USE DATABASE, CREATE SCHEMA
│       ├── error.c                 # Error handling (setjmp/longjmp)
│       ├── Create.c                # CREATE TABLE + .meta file generation
│       ├── Select.c                # SELECT with WHERE, ORDER BY, GROUP BY, aggregates
│       ├── Insert.c                # INSERT INTO
│       ├── Update.c                # UPDATE (column-level updates)
│       ├── Delete.c                # DELETE FROM
│       ├── Drop.c                  # DROP TABLE / TRUNCATE TABLE
│       ├── crypto.c/h              # PBKDF2-SHA256 password hashing, random bytes
│       ├── UserMgmt.c              # CREATE/DROP/ALTER USER, authentication
│       ├── GrantMgmt.c             # GRANT/REVOKE privileges, CheckPrivilege()
│       ├── buffer_pool.c/h         # Clock Sweep buffer pool (4KB page cache)
│       ├── page_mgr.c/h            # Unified page-based storage manager
│       ├── slotted.c/h             # Slotted page record manager
│       ├── btree2.c/h              # Page-based B+ tree (replaces APUE hash index)
│       └── catalog_internal.c/h    # System catalog (metadata in B+ trees)
│
├── adaptor/                        # Dual-Protocol Server
│   ├── main.c                      # Dual-port launcher (~90 lines)
│   ├── platform.h                  # Cross-platform macros (Win32/POSIX)
│   ├── net.c/h                     # Shared networking primitives
│   ├── server.c/h                  # Generic multi-threaded TCP server
│   ├── pg_handler.c/h              # PostgreSQL wire protocol handler
│   ├── pg_protocol.c/h             # PG v3 message read/write
│   ├── evo_protocol.c/h            # EVO native text protocol handler
│   ├── query_executor.c/h          # Query execution bridge (parser → result)
│   ├── result.c/h                  # ResultSet data structure
│   ├── catalog.c/h                 # pg_catalog / information_schema emulation
│   ├── tls.c/h                     # OpenSSL TLS wrapper (self-signed certs)
│   └── Makefile
│
├── cli/                            # Interactive CLI Client
│   ├── evosql-cli.c                # Readline/history, tabular display
│   └── Makefile
│
├── tests/                          # Test Suite (27 test files, 450+ tests)
│   ├── test_evo_protocol.py        # EVO protocol tests (port 9967)
│   ├── test_session_isolation.py   # Per-connection session isolation
│   ├── test_max_connections.py     # Connection limit enforcement
│   ├── test_aggregates.py          # SUM, AVG, MIN, MAX, COUNT
│   ├── test_where.py               # WHERE clause operators
│   ├── test_groupby.py             # GROUP BY + HAVING
│   ├── test_database.py            # CREATE/USE DATABASE, CREATE SCHEMA
│   ├── test_user_management.py     # CREATE/DROP/ALTER USER, SHOW USERS, auth
│   ├── test_grant_revoke.py        # GRANT/REVOKE, PUBLIC, WITH GRANT OPTION
│   ├── test_random_password.py     # Random admin password generation
│   ├── test_page_mgr.c             # Page Manager + Slotted Pages (C, 18 tests)
│   ├── test_btree2.c               # B+ Tree (C, 13 tests)
│   ├── test_catalog.c              # System Catalog (C, 30 tests)
│   └── ...                         # 16 more test suites
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

## User Management & Authentication

EvoSQL includes a complete user management system with PBKDF2-SHA256 password hashing and a role-based privilege system.

### Authentication

- **PBKDF2-SHA256** password hashing with random salt (100,000 iterations)
- **CleartextPassword** auth flow over PostgreSQL wire protocol (type 3 → PasswordMessage)
- **TLS/SSL** support with auto-generated self-signed certificates

### User Commands

```sql
CREATE USER alice PASSWORD 'secret123';
ALTER USER alice PASSWORD 'newsecret';
DROP USER alice;
SHOW USERS;
```

### Initial Admin User

The admin user is created on first startup:

| Environment Variable | Default | Description |
|---------------------|---------|-------------|
| `EVOSQL_USER_NAME` | `admin` | Admin username |
| `EVOSQL_PASSWORD` | *(random)* | Admin password — if not set, a random 16-char password is generated and printed to stdout **once** |

```bash
# Check the generated password
docker logs evolutiondb-evosql-1
# Output:
#   ============================================================
#     GENERATED PASSWORD for 'admin': xK7mP2qR9wL4nBvT
#     Save this password! It will NOT be shown again.
#     Change it with: ALTER USER admin PASSWORD '<newpass>'
#   ============================================================

# Or set an explicit password
docker compose up -d -e EVOSQL_PASSWORD=mypassword
```

### GRANT / REVOKE Privileges

```sql
-- Grant specific privileges
GRANT SELECT, INSERT ON DATABASE evosql TO alice;
GRANT ALL ON SCHEMA evosql.default TO bob;
GRANT SELECT ON TABLE evosql.default.users TO charlie;

-- Grant with delegation rights
GRANT SELECT ON DATABASE evosql TO alice WITH GRANT OPTION;

-- Grant to all users (PostgreSQL PUBLIC model — additive)
GRANT SELECT ON DATABASE evosql TO PUBLIC;

-- Revoke privileges
REVOKE INSERT ON DATABASE evosql FROM alice;
REVOKE ALL ON DATABASE evosql FROM bob;

-- View grants
SHOW GRANTS;
SHOW GRANTS FOR alice;
```

**Privilege types:** `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, `DROP`, `ALL`

**Scope levels (waterfall check):** `TABLE` → `SCHEMA` → `DATABASE`

| Feature | Behavior |
|---------|----------|
| admin user | Superuser — bypasses all privilege checks |
| PUBLIC grants | Additive (PostgreSQL model) — user-specific REVOKE does not override PUBLIC |
| New databases | No default grants (MySQL model) — explicit GRANT required |
| WITH GRANT OPTION | Non-admin users can delegate their privileges |
| DROP USER | Automatically removes all grants for that user |

## Storage Format

### Unified Page-Based Storage (New)

EvoSQL is transitioning to a single global binary file (`evosql.db`) with page-based storage, similar to Oracle/PostgreSQL/SQLite. The new storage stack:

| Layer | Component | Description |
|-------|-----------|-------------|
| **Buffer Pool** | `buffer_pool.c/h` | Clock Sweep 4KB page cache (like PostgreSQL) |
| **Page Manager** | `page_mgr.c/h` | Single-file management: alloc/free pages, free list, file header |
| **Slotted Pages** | `slotted.c/h` | Variable-length record storage within pages |
| **B+ Tree** | `btree2.c/h` | Page-based B+ tree index (~170 fan-out, 1M rows in 3 levels) |
| **System Catalog** | `catalog_internal.c/h` | Metadata in B+ trees: databases, schemas, tables, columns, indexes, constraints, users, grants |

All I/O goes through the buffer pool. Records are identified by RowID `{page_no, slot_idx}`. The B+ tree supports numeric-aware key comparison and doubly-linked leaf chains for range scans.

### Legacy Storage (Current)

Each table creates three files:

| File | Contents |
|------|----------|
| `Table.idx` | Hash-indexed key-pointer pairs |
| `Table.dat` | Semicolon-separated data records |
| `Table.meta` | Metadata (5 lines) |

### .idx File Format (Hash Index)

The `.idx` file is a **text-based hash-indexed** file. All values — including pointers and lengths — are stored as **fixed-width ASCII decimal strings**, making the file human-readable and platform-portable.

#### Constants

| Constant | Value | Description |
|----------|-------|-------------|
| `NHASH_DEF` | 137 | Number of hash buckets (prime) |
| `PTR_SZ` | 6 | Width of every pointer field (ASCII chars) |
| `IDXLEN_SZ` | 4 | Width of index-record length field (ASCII chars) |
| `SEP` | `:` | Field separator in index records |

#### File Layout

```
.idx file:
═══════════════════════════════════════════════════════════
Offset 0:     [Free-list head ptr]     6 bytes ASCII
Offset 6:     [Hash bucket 0 ptr]      6 bytes ASCII
Offset 12:    [Hash bucket 1 ptr]      6 bytes ASCII
  ...
Offset 822:   [Hash bucket 136 ptr]    6 bytes ASCII
Offset 828:   '\n'                     1 byte
───────────────────────────────────────────────────────────
Offset 829+:  Index Record 0:
              [next_ptr]               6 bytes ASCII
              [body_len]               4 bytes ASCII
              [key:dat_offset:dat_len\n]  body_len bytes

              Index Record 1:
              [next_ptr]               6 bytes ASCII
              [body_len]               4 bytes ASCII
              [key:dat_offset:dat_len\n]  body_len bytes
              ...
═══════════════════════════════════════════════════════════
```

**Header**: $(137 + 1) \times 6 + 1 = 829$ bytes fixed. The first 6 bytes are the free-list head pointer, followed by 137 hash bucket pointers (6 bytes each), terminated by a newline.

**Hash function**: Weighted character-sum modulo `nhash` — $h = \left(\sum_{i=1}^{n} c_i \times i\right) \bmod 137$

#### Index Record Structure

Each index record has a 10-byte header + variable-length body:

```
┌──────────────────┬────────────────┬──────────────────────────┐
│  Next Pointer    │  Body Length   │  Body                    │
│  (6 bytes ASCII) │ (4 bytes ASCII)│ key:dat_off:dat_len\n    │
└──────────────────┴────────────────┴──────────────────────────┘
```

| Field | Size | Description |
|-------|------|-------------|
| Next Pointer | 6 bytes | Offset of next record in hash chain (0 = end) |
| Body Length | 4 bytes | Length of body including `\n` |
| Key | variable | Row lookup key |
| `dat_offset` | ASCII decimal | Byte offset into `.dat` file |
| `dat_len` | ASCII decimal | Length of data record in `.dat` |

Records on the same hash chain are linked via the next-pointer field (singly-linked list). Deleted records are moved to a **free list** (head at offset 0) and reused when a new record of matching size is inserted; otherwise new records are appended to the end of the file.

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

## PostgreSQL Wire Protocol (Adaptor — Port 5433)

The adaptor implements the PostgreSQL v3 wire protocol, enabling connectivity from DBeaver, pgAdmin, psql, JDBC and any standard PostgreSQL client:

### Supported Features

- **Simple Query Protocol** (`Q` message) — Single or multiple SQL statements
- **Extended Query Protocol** (`P`/`B`/`D`/`E`/`S` messages) — DBeaver / JDBC compatibility
- **Multi-threaded**: Each client connection runs in its own thread
- **Per-connection session state**: Each connection has its own database/schema context
- **Authentication**: CleartextPassword (PG auth type 3) with PBKDF2-SHA256 verification
- **TLS/SSL**: Auto-generated self-signed certificates (OpenSSL)
- **Connection limits**: Runtime-configurable `SET max_connections = N`
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
User:     admin
Password: admin     (or the generated random password)
```

Create a new PostgreSQL connection in DBeaver with the settings above. Authentication is required — the server uses CleartextPassword (PG auth type 3). Table list, column information, types, NOT NULL and PRIMARY KEY constraints are displayed automatically.

## EVO Protocol (Native Text Protocol — Port 9967)

A simple, human-readable text-based wire protocol designed for the EvoSQL CLI client. All messages are line-oriented (`\n` terminated).

### Protocol Flow

```
Client → Server:   EVO\n                    (greeting)
Server → Client:   HELLO EvoSQL 1.0\n       (server hello)

Client → Server:   SQL <length>\n           (query header)
                   <sql text>\n             (query body)

Server → Client:   RESULT\n                 (SELECT response)
                   COLS <n>\n
                   COL <name>\n             (× n)
                   ROW\n                    (per row)
                   FIELD <value>\n          (per field, or FIELD NULL\n)
                   END\n
                   TAG <command_tag>\n
                   READY\n

                   OK\n                     (DDL/DML response)
                   TAG <command_tag>\n
                   READY\n

                   ERR <sqlstate> <msg>\n   (error response)
                   READY\n

Client → Server:   QUIT\n                  (disconnect)
Server → Client:   BYE\n
```

## CLI Client (`evosql-cli`)

Interactive command-line client that connects to the EVO protocol port (9967):

```
$ evosql-cli
Connected to EvoSQL 1.0 at localhost:9967
evosql> CREATE TABLE users (id INT, name VARCHAR(50));
OK — CREATE TABLE

evosql> INSERT INTO users VALUES (1, 'Alice');
OK — INSERT 1

evosql> SELECT * FROM users;
 id | name
----+-------
  1 | Alice
(1 row)
```

### Features

- **Readline support**: Line editing, cursor movement, Ctrl+A/E (Linux: GNU readline, Windows: native console API)
- **Command history**: Arrow keys navigate history, persisted to `~/.evosql_history`
- **Tabular output**: Auto-aligned columns with header separator
- **Multi-line SQL**: End a line with `\` to continue on the next line
- **Meta-commands**: `\q` / `exit` / `quit` to disconnect
- **Authentication**: `-W` / `--password` flag or `EVOSQL_PASSWORD` environment variable

### Usage

```bash
evosql-cli                               # Connect to localhost:9967
evosql-cli -h 192.168.1.10               # Connect to remote host
evosql-cli -p 9968                       # Custom port
evosql-cli -h myhost -p 9968             # Both
evosql-cli -W mypassword                 # Explicit password
EVOSQL_PASSWORD=secret evosql-cli        # Password via env var
```

## Build

### Requirements

- GCC (MinGW-w64 / MSYS2)
- Windows SDK headers (included with MinGW-w64, required for PopPad)
- Bison and Flex (only needed to regenerate parser/lexer from source)

### Build All Components

```bash
make              # Build all components
make evolution    # Build only evosql (core engine)
make adaptor      # Build only evosql-server (dual-protocol)
make cli          # Build only evosql-cli (interactive client)
make poppad       # Build only PopPad.exe (Windows only)
make clean        # Clean all build artifacts
make release      # Stripped binaries to release/ directory
make generate     # Regenerate parser/lexer from .y/.l files
```

### CLI Usage

```bash
cd evolution
make
./evosql          # Reads SQL commands from test.txt
```

### Adaptor Server

```bash
cd adaptor
make
./evosql-server                     # PG on 5433, EVO on 9967
./evosql-server --pg-port 5434      # Custom PG port
./evosql-server --evo-port 9968     # Custom EVO port
./evosql-server 5434                # Backward compat: bare number = PG port
```

### CLI Client

```bash
cd cli
make
./evosql-cli                        # Connect to localhost:9967
./evosql-cli -h 10.0.0.1 -p 9968   # Remote host, custom port
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
# Build and run with docker-compose (PG:5433 + EVO:9967)
docker compose up -d

# Or build and run manually
docker build -t evosql .
docker run -d -p 5433:5433 -p 9967:9967 --name evosql evosql

# Set explicit admin password (otherwise random is generated)
docker run -d -p 5433:5433 -p 9967:9967 -e EVOSQL_PASSWORD=mysecret evosql

# Check generated random password
docker logs evosql | grep "GENERATED PASSWORD"
```

### Connect

```bash
# PostgreSQL clients (psql, DBeaver, JDBC)
psql -h localhost -p 5433 -U admin -W evosql

# EvoSQL CLI client
evosql-cli -W admin
```

### Data Persistence

Table files (`.idx`, `.dat`, `.meta`) are stored in `/data` inside the container. The docker-compose configuration mounts a named volume so data survives container restarts:

```bash
docker compose down       # stop (data preserved)
docker compose up -d      # restart (data still there)
docker compose down -v    # stop and delete data
```

## How It Works

1. **Lexer** (`evolexer.l`) — Tokenizes SQL input into keywords, identifiers, strings, and operators
2. **Parser** (`evoparser.y`) — Processes tokens according to SQL grammar rules and emits RPN (Reverse Polish Notation)
3. **Database engine** (`db.c`) — Manages hash-indexed flat files (`.idx` + `.dat`) for persistent storage
4. **Operation modules** (`Create.c`, `Insert.c`, etc.) — Bridge parser actions to database calls
5. **Meta files** (`.meta`) — Store per-table column definitions, types, and constraints
6. **Type validation** — Validates values against column types during INSERT/UPDATE (integer, decimal, varchar length, boolean)
7. **Constraint enforcement** — NOT NULL constraints are enforced on INSERT and UPDATE
8. **Networking layer** (`net.c`) — Shared socket operations (recv, send, accept, bind/listen)
9. **TCP server** (`server.c`) — Generic multi-threaded accept loop with `protocol_handler_fn` callback, connection counting, mutex-protected query execution
10. **PG handler** (`pg_handler.c`) — PostgreSQL wire protocol session (startup, Simple/Extended Query, CleartextPassword auth)
11. **EVO handler** (`evo_protocol.c`) — Native text protocol session (greeting, auth, SQL dispatch, result formatting)
12. **CLI client** (`evosql-cli.c`) — Interactive readline-based client with tabular output, auth support, and persistent history
13. **TLS** (`tls.c`) — OpenSSL-based TLS wrapper with auto-generated self-signed certificates
14. **Crypto** (`crypto.c`) — PBKDF2-SHA256 password hashing with random salt generation
15. **User management** (`UserMgmt.c`) — CREATE/DROP/ALTER USER, authentication, random password generation
16. **Privilege system** (`GrantMgmt.c`) — GRANT/REVOKE, CheckPrivilege() with waterfall scope, PUBLIC support
17. **Buffer pool** (`buffer_pool.c`) — Clock Sweep page cache (PostgreSQL algorithm), anti-pollution ring buffer for sequential scans
18. **Unified storage** (`page_mgr.c`, `slotted.c`, `btree2.c`) — Single global binary file with 4KB pages, slotted pages for variable-length records, B+ tree for O(log n) key lookups
19. **System catalog** (`catalog_internal.c`) — All metadata (databases, schemas, tables, columns, indexes, users, grants) stored in B+ trees within the unified file

## Testing

27 test suites with 450+ individual tests, all written in Python and targeting the running server:

```bash
# Start the server
docker compose up -d

# Run all tests (PG protocol on 5433)
py tests/test_aggregates.py
py tests/test_where.py
py tests/test_session_isolation.py
py tests/test_max_connections.py
# ... (23 PG test files)

# Run EVO protocol tests (port 9967)
py tests/test_evo_protocol.py
```

### Test Coverage

| Area | Test File | Tests |
|------|-----------|-------|
| Aggregates (SUM/AVG/MIN/MAX/COUNT) | `test_aggregates.py` | ✓ |
| WHERE (=, <>, <, >, IN, LIKE, BETWEEN, IS NULL) | `test_where.py`, `test_comparison.py` | ✓ |
| GROUP BY + HAVING | `test_groupby.py` | ✓ |
| ORDER BY (multi-column, ASC/DESC) | `test_multi_orderby.py`, `test_distinct_orderby.py` | ✓ |
| LIMIT / OFFSET | `test_limit.py` | ✓ |
| CASE expressions | `test_case.py` | ✓ |
| String functions (UPPER, LOWER, LENGTH, ...) | `test_string_functions.py` | ✓ |
| Date/time functions | `test_datetime.py` | ✓ |
| NULL handling | `test_null_insert.py`, `test_isnull.py` | ✓ |
| Aliases | `test_alias.py` | ✓ |
| Logical operators (AND, OR, NOT) | `test_logical.py` | ✓ |
| DISTINCT | `test_distinct_orderby.py` | ✓ |
| IN / BETWEEN / LIKE | `test_in.py`, `test_between_like.py` | ✓ |
| Qualified names (schema.table.column) | `test_qualified_names.py` | ✓ |
| CREATE/USE DATABASE, CREATE SCHEMA | `test_database.py`, `test_use_database.py` | ✓ |
| SET/SHOW (schema, max_connections) | `test_set_schema.py`, `test_max_connections.py` | ✓ |
| Per-connection session isolation | `test_session_isolation.py` | ✓ |
| COUNT(*) / COUNT(col) | `test_count.py` | ✓ |
| EVO protocol (handshake, CRUD, errors, multi-conn) | `test_evo_protocol.py` | ✓ |
| User management (CREATE/DROP/ALTER USER, auth) | `test_user_management.py` | ✓ |
| GRANT/REVOKE (privileges, PUBLIC, GRANT OPTION) | `test_grant_revoke.py` | ✓ |
| Random admin password generation | `test_random_password.py` | ✓ |
