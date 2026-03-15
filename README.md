# EvoSQL - SQL Database Engine

I started this project approximately 18 years ago, driven by a deep curiosity about how database engines work internally. At the time, I began building a relational SQL database engine from scratch in C — implementing core components such as the parser, storage engine, indexing structures, and execution layer myself.

Soon after the initial development phase, the project was set aside. It did not remain active in a public repository; instead, it was archived and stayed on a DVD for many years — preserved, but untouched.

About one month ago, I rediscovered the project and decided to revive it. This time, I resumed development as a solo engineer with the assistance of Claude OPUS 4.6. In just a few days, I was able to implement and refine significantly more functionality than I had built over several years in the past. The combination of prior architectural vision and modern AI-assisted development dramatically accelerated progress.

EvolutionDB was born as a relational database engine, but its next evolution is clear: it will incorporate AI capabilities to translate natural language directly into optimized SQL, enabling intuitive human interaction while preserving the performance characteristics of a high-speed relational core. The goal is a database that remains structurally rigorous and extremely fast, yet accessible through natural language — bridging classical relational systems with modern AI-driven interfaces.

---

EvoSQL is a SQL database engine written in C featuring unified page-based storage with binary tuple format, a Flex/Bison SQL parser, B+ tree indexing, a Clock Sweep buffer pool, undo-log transactions, and a dual-protocol server that speaks both PostgreSQL wire protocol and a native text protocol.

For detailed architecture documentation, see the [Wiki](../../wiki).

## Quick Start

```bash
# Start server via Docker
docker compose up -d

# Connect with PostgreSQL clients (psql, DBeaver, JDBC)
psql -h localhost -p 5433 -U admin -W evosql

# Connect with EvoSQL CLI
./cli/evosql-cli -W admin
```

The admin password is set via `EVOSQL_PASSWORD` environment variable. If not set, a random password is generated and printed to stdout on first startup:

```bash
docker logs evolutiondb-evosql-1 | grep "GENERATED PASSWORD"
```

## Build

**Requirements:** GCC, Bison, Flex, libreadline-dev. For TLS: libssl-dev.

```bash
make                  # Build all components
make evolution        # Core SQL engine (evolution/evosql)
make adaptor          # Dual-protocol server (adaptor/evosql-server)
make cli              # CLI client (cli/evosql-cli)
make adaptor TLS=1    # Build with OpenSSL TLS support
make clean            # Clean all build artifacts
make generate         # Regenerate Flex/Bison parser from .y/.l files
```

## Docker

```bash
docker compose up -d                                          # PG:5433 + EVO:9967
docker run -d -p 5433:5433 -p 9967:9967 -e EVOSQL_PASSWORD=mysecret evosql  # Manual

docker compose down       # Stop (data preserved)
docker compose down -v    # Stop and delete data
```

## SQL Examples

```sql
CREATE TABLE users (
    id      INT NOT NULL PRIMARY KEY,
    name    VARCHAR(50) NOT NULL,
    email   VARCHAR(100),
    active  BOOLEAN DEFAULT true
);

INSERT INTO users VALUES (1, 'Alice', 'alice@example.com', true);

SELECT * FROM users WHERE active = true ORDER BY name;

UPDATE users SET email = 'new@example.com' WHERE id = 1;

DELETE FROM users WHERE active = false;
```

## Features

**SQL Support:**
DDL (CREATE/DROP/ALTER TABLE, CREATE INDEX, CREATE DOMAIN), DML (SELECT, INSERT, UPDATE, DELETE), WHERE (=, <>, <, >, <=, >=, AND, OR, NOT, IN, LIKE, BETWEEN, IS NULL), ORDER BY, GROUP BY, HAVING, LIMIT/OFFSET, DISTINCT, CASE, JOINs, subqueries, aggregates (SUM, AVG, MIN, MAX, COUNT), string/date functions, EXPLAIN

**Data Types:**
INT, BIGINT, FLOAT, DOUBLE, DECIMAL, BOOLEAN, CHAR(N), VARCHAR(N), TEXT, DATE, TIME, DATETIME, TIMESTAMP, UUID

**Constraints & Indexes:**
PRIMARY KEY, FOREIGN KEY (CASCADE, SET NULL, SET DEFAULT, RESTRICT), NOT NULL, CHECK, UNIQUE, named constraints (CONSTRAINT name ...), ALTER TABLE ADD/DROP/ENABLE/DISABLE CONSTRAINT, secondary indexes, composite indexes, expression indexes (UPPER/LOWER/LENGTH/CONCAT)

**Storage:**
Unified page-based storage (single `evosql.db` file), 4KB pages with Clock Sweep buffer pool, slotted pages, B+ tree indexing, binary tuple format, system catalog in B+ trees, AES-256 Transparent Data Encryption (TDE)

**Transactions:**
BEGIN/COMMIT/ROLLBACK, SAVEPOINT/ROLLBACK TO/RELEASE, undo-log based recovery, per-session isolation

**Security:**
User management (CREATE/DROP/ALTER USER), PBKDF2-SHA256 password hashing, GRANT/REVOKE privileges (DATABASE/SCHEMA/TABLE scope, PUBLIC, WITH GRANT OPTION), TLS/SSL with auto-generated certificates

**Protocols:**
PostgreSQL wire protocol v3 (port 5433) — compatible with psql, DBeaver, pgAdmin, JDBC; native EVO text protocol (port 9967) for the CLI client

**ID Generation:**
gen_random_uuid() (v4), gen_random_uuid_v7() (RFC 9562), snowflake_id() (Twitter-style 64-bit), AUTO_INCREMENT / IDENTITY(start, step)

**Other:**
Generated/computed columns (STORED, VIRTUAL), expression-based DEFAULT values, RECLAIM TABLE (page defragmentation), LAST_INSERT_ID(), TRUNCATE TABLE

## Testing

27 test suites, 450+ tests (Python, requires running server):

```bash
docker compose up -d
python tests/test_where.py
python tests/test_aggregates.py
python tests/test_foreign_key.py
# ...
```

## Documentation

Detailed architecture and internals documentation is available in the [Wiki](../../wiki):

- [Architecture Overview](../../wiki/Architecture)
- [Unified Storage](../../wiki/Unified-Storage-Overview)
- [Storage Engine](../../wiki/Storage-Engine)
- [B+ Tree](../../wiki/BPlus-Tree)
- [System Catalog](../../wiki/System-Catalog)
- [SQL Parser](../../wiki/SQL-Parser)
- [SQL Operations](../../wiki/SQL-Operations)
- [Expression Engine](../../wiki/Expression-Engine)
- [Table API and DML](../../wiki/Table-API-and-DML)
- [Query Context](../../wiki/Query-Context)
- [Transactions](../../wiki/Transactions)
- [Authentication and Security](../../wiki/Authentication-and-Security)
- [PostgreSQL Wire Protocol](../../wiki/PostgreSQL-Wire-Protocol)
- [EVO Protocol](../../wiki/EVO-Protocol)
- [Server Architecture](../../wiki/Server-Architecture)
- [Page Manager and Slotted Pages](../../wiki/Page-Manager-and-Slotted-Pages)
- [CLI Client](../../wiki/CLI-Client)
