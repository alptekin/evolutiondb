# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

EvoSQL (EvolutionDB) is a SQL database engine written in C. It features Flex/Bison SQL parsing, unified page-based storage with binary tuple format, a dual-protocol server (PostgreSQL wire protocol on port 5433 + native EVO text protocol on port 9967), and a CLI client.

## Build Commands

```bash
make                  # Build the engine + server
make engine           # Build core SQL engine (src/backend/evosql)
make server           # Build dual-protocol server (src/server/evosql-server)
make tools            # Build diagnostic tools (src/bin/tools)
make clean            # Clean all build artifacts
make generate         # Regenerate Flex/Bison parser from .y/.l files
make release          # Stripped binaries to release/
make server TLS=1     # Build server with OpenSSL TLS support
```

Build dependencies: GCC, Bison, Flex, liblz4, libssl-dev (for TLS). The CLI
client (`evosql-cli`) and all other clients/SDKs/agent live in the separate
**evolutionagent** repository.

## Running

```bash
# Start server via Docker (recommended for testing)
docker compose up -d

# Or run locally after building
./src/server/evosql-server                    # PG:5433, EVO:9967
./src/server/evosql-server --pg-port 5434     # Custom PG port
# the evosql-cli client lives in the evolutionagent repo
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

All test files connect to `127.0.0.1:5433` (PG) or `:9967` (EVO) with default credentials `admin/admin`. Tests use `test/pg_helpers.py` for shared connection/query helpers. Default test database is `testdb`.

## Repository layout (PostgreSQL-style)

```
src/include/        all engine headers (flat) + platform.h + version.h
                    -> everything compiles with -I src/include
src/backend/        engine sources grouped by subsystem:
  storage/  page_mgr slotted btree2 buffer_pool toast page_crypt hash_idx hnsw vmap
  access/   table_api mvcc lock_mgr table_lock wal wal_checkpointer catalog_internal
            tuple_format conflict_guard Checkpoint
  commands/ Create Select Insert Update Delete Drop Copy + DDL (DatabaseMgmt UserMgmt
            GrantMgmt Procedure Trigger Sequence ...) + Memory MessageLog Document Graph
  executor/ query_context expression mongo_filter Json dml_profile
  utils/    error crypto database_globals standalone_stubs
  parser/   evoparser.y evolexer.l (+ generated .tab.c/.h, lex.yy.c)
  main.c    standalone evosql REPL entry
src/server/         dual-protocol server (was adaptor/): net, pg_protocol, evo_protocol,
                    query_executor, replication, raft, shard, ...
src/bin/tools/      diagnostics (catdiag, catrepair, rowdiag, cattorture)
test/               python wire-protocol tests
infra/{docker,compose,helm}/   container + k8s deployment
packaging/          OS installers (macos/linux/windows/aur)
docs/site/{docs,wiki}/  two static sites: docs.evolutiondb.org (SQL manual) + wiki.evolutiondb.org (engine internals)
docs/tools/         site generator (gen_docs.py), templates, style guide; version read from src/include/version.h
```

The agent, MCP memory server, connectors, language SDKs, and the `evosql-cli`
client live in the separate **evolutionagent** repository — this repo is the
engine only.

## Architecture

```
Clients (evolutionagent: cli, SDKs, MCP, agent), DBeaver, psql
         │
    ┌────┴────┐
    │ Server  │  src/server/ — dual-protocol TCP server (PG wire + EVO text)
    └────┬────┘
         │
  ┌──────┴──────┐
  │   Backend   │  src/backend/ — core SQL engine
  ├─────────────┤
  │   Parser    │  src/backend/parser/ — Flex/Bison (evoparser.y, evolexer.l)
  │   DB Engine │  src/backend/{storage,access,commands,executor,utils}/
  └─────────────┘
```

**Key architectural details:**

- **Parser output is RPN**: The Bison parser (`evoparser.y`) emits Reverse Polish Notation which the operation modules consume. Understanding the RPN stack is essential for adding new SQL features.
- **Adaptor links evolution's object files directly** (no library): The adaptor Makefile compiles `src/backend/*.c` and `src/backend/parser/*.c` directly, excluding `src/backend/main.c`.
- **Global state with mutex**: The database engine uses global variables (`src/backend/database_globals.c`, `src/backend/database.h`). The adaptor's `query_executor.c` wraps all query execution in a mutex lock for thread safety.
- **Storage**: Single global binary file (`evosql.db`) with 4KB pages. Page Manager (`page_mgr.c`) handles allocation/free list, Slotted Pages (`slotted.c`) store variable-length records, B+ Tree (`btree2.c`) provides O(log n) indexing, System Catalog (`catalog_internal.c`) stores all metadata in B+ trees. All I/O through Clock Sweep buffer pool (`buffer_pool.c`). User table records use binary tuple format (`tuple_format.c`): `[0xE7][table_id:4B][Header:4B][NullBitmap][ColData...]`. Type encoding: `typeVal / 10000` = type family, `typeVal % 10000` = size (e.g., `130050` = VARCHAR(50)).
- **Error handling**: Uses `setjmp`/`longjmp` (not exceptions). See `src/backend/error.c`.
- **Catalog emulation**: `src/server/catalog.c` fakes `pg_catalog` and `information_schema` tables so DBeaver/pgAdmin work.

## Code Layout by Concern

- **SQL operations**: `src/backend/Create.c`, `Select.c`, `Insert.c`, `Update.c`, `Delete.c`, `Drop.c`
- **WHERE evaluation**: `src/backend/expression.c`
- **Binary tuple format**: `src/backend/tuple_format.c` — encode/decode, column cache
- **Table API**: `src/backend/table_api.c` — heap CRUD, PK key building, table scan
- **Database/schema management**: `src/backend/DatabaseMgmt.c`
- **User auth & crypto**: `src/backend/UserMgmt.c`, `src/backend/crypto.c` (PBKDF2-SHA256)
- **Privileges**: `src/backend/GrantMgmt.c` — waterfall check: TABLE → SCHEMA → DATABASE
- **PG wire protocol**: `src/server/pg_protocol.c` (message r/w), `src/server/pg_handler.c` (session handling)
- **EVO text protocol**: `src/server/evo_protocol.c`
- **Network/server**: `src/server/net.c`, `src/server/server.c` (multi-threaded TCP accept loop)
- **TLS**: `src/server/tls.c` (OpenSSL, auto-generated self-signed certs)
- **Buffer pool**: `src/backend/buffer_pool.c` — Clock Sweep 4KB page cache (PostgreSQL algorithm)
- **Unified page storage**: `src/backend/page_mgr.c` (page alloc/free), `slotted.c` (record storage), `btree2.c` (B+ tree index), `catalog_internal.c` (system catalog in B+ trees)

## Parser Modification Workflow

When modifying the SQL grammar:
1. Edit `src/backend/parser/evoparser.y` (Bison grammar) and/or `src/backend/parser/evolexer.l` (Flex lexer)
2. Run `make generate` to regenerate `evoparser.tab.c/h` and `lex.yy.c`
3. The generated files are committed to the repo so builds don't require Bison/Flex

## Platform Notes

- Linux/macOS: Builds produce executables without `.exe` suffix
- Windows (MinGW/MSYS2): Produces `.exe` files
- Docker build uses `gcc:13` → `debian:bookworm-slim` multi-stage with `TLS=1`
