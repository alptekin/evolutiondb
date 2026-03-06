# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

EvoSQL (EvolutionDB) is a file-based SQL database engine written in C. It features Flex/Bison SQL parsing, APUE hash-indexed file storage, a dual-protocol server (PostgreSQL wire protocol on port 5433 + native EVO text protocol on port 9967), a CLI client, and a Win32 GUI (PopPad).

## Build Commands

```bash
make                  # Build all components (Linux skips PopPad)
make evolution        # Build core SQL engine (evolution/evosql)
make adaptor          # Build dual-protocol server (adaptor/evosql-server)
make cli              # Build CLI client (cli/evosql-cli)
make clean            # Clean all build artifacts
make generate         # Regenerate Flex/Bison parser from .y/.l files
make release          # Stripped binaries to release/
make adaptor TLS=1    # Build server with OpenSSL TLS support
```

Build dependencies: GCC, Bison, Flex, libssl-dev (for TLS). On macOS/Linux, `libreadline-dev` is needed for the CLI.

## Running

```bash
# Start server via Docker (recommended for testing)
docker compose up -d

# Or run locally after building
./adaptor/evosql-server                    # PG:5433, EVO:9967
./adaptor/evosql-server --pg-port 5434     # Custom PG port
./cli/evosql-cli                           # Connect to localhost:9967
./cli/evosql-cli -W admin                  # With password
```

Environment variables: `EVOSQL_USER_NAME` (default: `admin`), `EVOSQL_PASSWORD` (default: random, printed once).

## Testing

Tests are Python scripts using raw socket PG wire protocol (no psycopg2). They require a running server instance.

```bash
# Start server first
docker compose up -d

# Run a single test file
python tests/test_where.py
python tests/test_aggregates.py

# Run EVO protocol tests (port 9967)
python tests/test_evo_protocol.py
```

All test files connect to `127.0.0.1:5433` (PG) or `:9967` (EVO) with default credentials `admin/admin`. Tests use `tests/pg_helpers.py` for shared connection/query helpers. Default test database is `testdb`.

## Architecture

```
Clients (evosql-cli, DBeaver, psql)
         │
    ┌────┴────┐
    │ Adaptor │  adaptor/ — dual-protocol TCP server
    └────┬────┘
         │
  ┌──────┴──────┐
  │  Evolution  │  evolution/ — core SQL engine
  ├─────────────┤
  │   Parser    │  evolution/parser/ — Flex/Bison (evoparser.y, evolexer.l)
  │   DB Engine │  evolution/db/ — APUE hash-file storage, SQL operations
  └─────────────┘
```

**Key architectural details:**

- **Parser output is RPN**: The Bison parser (`evoparser.y`) emits Reverse Polish Notation which the operation modules consume. Understanding the RPN stack is essential for adding new SQL features.
- **Adaptor links evolution's object files directly** (no library): The adaptor Makefile compiles `evolution/db/*.c` and `evolution/parser/*.c` directly, excluding `evolution/main.c`.
- **Global state with mutex**: The database engine uses global variables (`evolution/db/database_globals.c`, `evolution/db/database.h`). The adaptor's `query_executor.c` wraps all query execution in a mutex lock for thread safety.
- **Storage**: Each table = 3 files (`.idx` hash index, `.dat` semicolon-separated records, `.meta` metadata). Type encoding: `typeVal / 10000` = type family, `typeVal % 10000` = size (e.g., `130050` = VARCHAR(50)).
- **Error handling**: Uses `setjmp`/`longjmp` (not exceptions). See `evolution/db/error.c`.
- **Catalog emulation**: `adaptor/catalog.c` fakes `pg_catalog` and `information_schema` tables so DBeaver/pgAdmin work.

## Code Layout by Concern

- **SQL operations**: `evolution/db/Create.c`, `Select.c`, `Insert.c`, `Update.c`, `Delete.c`, `Drop.c`
- **WHERE evaluation**: `evolution/db/expression.c`
- **Database/schema management**: `evolution/db/DatabaseMgmt.c`
- **User auth & crypto**: `evolution/db/UserMgmt.c`, `evolution/db/crypto.c` (PBKDF2-SHA256)
- **Privileges**: `evolution/db/GrantMgmt.c` — waterfall check: TABLE → SCHEMA → DATABASE
- **PG wire protocol**: `adaptor/pg_protocol.c` (message r/w), `adaptor/pg_handler.c` (session handling)
- **EVO text protocol**: `adaptor/evo_protocol.c`
- **Network/server**: `adaptor/net.c`, `adaptor/server.c` (multi-threaded TCP accept loop)
- **TLS**: `adaptor/tls.c` (OpenSSL, auto-generated self-signed certs)

## Parser Modification Workflow

When modifying the SQL grammar:
1. Edit `evolution/parser/evoparser.y` (Bison grammar) and/or `evolution/parser/evolexer.l` (Flex lexer)
2. Run `make generate` to regenerate `evoparser.tab.c/h` and `lex.yy.c`
3. The generated files are committed to the repo so builds don't require Bison/Flex

## Platform Notes

- Linux/macOS: Builds produce executables without `.exe` suffix; PopPad is skipped (Win32 GUI)
- Windows (MinGW/MSYS2): Produces `.exe` files; PopPad is included
- Docker build uses `gcc:13` → `debian:bookworm-slim` multi-stage with `TLS=1`
