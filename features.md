# EvolutionDB — Missing Features & Roadmap

> Comparison with MySQL and PostgreSQL.  
> ✅ = Implemented &nbsp; 🔧 = Parsed but not executed &nbsp; ❌ = Not implemented

---

## 🔴 Critical — Core SQL

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 1 | JOIN (INNER/LEFT/RIGHT/CROSS/NATURAL) | ✅ | ✅ | 🔧 | Grammar exists, no multi-table execution |
| 2 | Subqueries (WHERE, FROM, SELECT) | ✅ | ✅ | 🔧 | Grammar exists, no subquery execution |
| 3 | Subquery comparison (ANY/SOME/ALL) | ✅ | ✅ | 🔧 | Grammar exists, no evaluation |
| 4 | UNION / UNION ALL / INTERSECT / EXCEPT | ✅ | ✅ | ❌ | |
| 5 | ALTER TABLE (ADD/DROP/MODIFY/RENAME COLUMN) | ✅ | ✅ | ❌ | No schema evolution |
| 6 | FOREIGN KEY constraints | ✅ | ✅ | ❌ | No referential integrity |
| 7 | CHECK constraints | ✅ | ✅ | ❌ | |
| 8 | DEFAULT value enforcement | ✅ | ✅ | 🔧 | Parsed but not stored/applied |
| 9 | AUTO_INCREMENT / SERIAL | ✅ | ✅ | 🔧 | Parsed but no counter/enforcement |
| 10 | UNIQUE constraint enforcement | ✅ | ✅ | 🔧 | Parsed but duplicates allowed |
| 11 | Composite PRIMARY KEY | ✅ | ✅ | 🔧 | Parser accepts but only single-column PK stored |
| 12 | Real transactions (ACID) | ✅ | ✅ | 🔧 | BEGIN/COMMIT/ROLLBACK accepted but no-op |
| 13 | Indexes (B-tree, Hash, GiST, GIN) | ✅ | ✅ | ❌ | Full table scan only |
| 14 | Multi-row INSERT | ✅ | ✅ | 🔧 | Parser accepts but only first row inserted |
| 15 | INSERT INTO ... SELECT | ✅ | ✅ | ❌ | |
| 16 | INSERT with column list mapping | ✅ | ✅ | 🔧 | Parser accepts but column mapping not used |
| 17 | DELETE with expression-based WHERE | ✅ | ✅ | ❌ | Only deletes by primary key |
| 18 | UPDATE with expression-based WHERE | ✅ | ✅ | ❌ | Only updates by primary key |
| 19 | Multi-table DELETE | ✅ | ✅ | 🔧 | Grammar exists, no execution |
| 20 | Multi-table UPDATE | ✅ | ✅ | ❌ | |

## 🟠 Important — Commonly Used

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 21 | Views (CREATE/DROP VIEW) | ✅ | ✅ | ❌ | |
| 22 | Stored Procedures / Functions | ✅ | ✅ | ❌ | |
| 23 | Triggers | ✅ | ✅ | ❌ | |
| 24 | Cursors | ✅ | ✅ | ❌ | |
| 25 | Prepared Statements (server-side) | ✅ | ✅ | 🔧 | Extended query protocol stubs only |
| 26 | Window Functions (ROW_NUMBER, RANK, OVER) | ✅ | ✅ | ❌ | |
| 27 | CTEs (WITH ... AS) | ✅ | ✅ | ❌ | |
| 28 | EXPLAIN / EXPLAIN ANALYZE | ✅ | ✅ | ❌ | |
| 29 | DROP DATABASE | ✅ | ✅ | ❌ | CREATE exists but DROP missing |
| 30 | DROP SCHEMA | ✅ | ✅ | ❌ | CREATE exists but DROP missing |
| 31 | RENAME TABLE | ✅ | ✅ | ❌ | |
| 32 | ON DUPLICATE KEY UPDATE | ✅ | ❌ | 🔧 | Parsed but not executed |
| 33 | REPLACE INTO | ✅ | ❌ | 🔧 | Parsed but not executed |
| 34 | CREATE TABLE ... SELECT | ✅ | ✅ | 🔧 | Parsed but not executed |
| 35 | ORDER BY expression / ordinal position | ✅ | ✅ | ❌ | Column names only |
| 36 | SET @var = ... (user variables) | ✅ | ❌ | ❌ | |

## 🟡 Moderate — Standard SQL

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 37 | CAST / CONVERT | ✅ | ✅ | ❌ | |
| 38 | NULLIF() | ✅ | ✅ | ❌ | COALESCE exists |
| 39 | IF() / IFNULL() / IIF() | ✅ | ❌ | ❌ | CASE WHEN exists as alternative |
| 40 | REGEXP / RLIKE | ✅ | ✅ | 🔧 | Parsed but not evaluated |
| 41 | EXISTS | ✅ | ✅ | 🔧 | Parsed but not evaluated |
| 42 | IS TRUE / IS FALSE / IS UNKNOWN | ✅ | ✅ | 🔧 | Parsed but not evaluated |
| 43 | INTERVAL (date arithmetic) | ✅ | ✅ | 🔧 | Parsed but not evaluated |
| 44 | GROUP_CONCAT / STRING_AGG | ✅ | ✅ | ❌ | |
| 45 | CONCAT with 3+ arguments | ✅ | ✅ | ❌ | Only 2-arg CONCAT works |
| 46 | \|\| string concatenation operator | ❌ | ✅ | ❌ | |
| 47 | NULL-safe comparison (`<=>`) | ✅ | ❌ | 🔧 | Token exists but not evaluated |
| 48 | String: LEFT, RIGHT, LPAD, RPAD, REVERSE, REPEAT, INSTR, LOCATE, POSITION | ✅ | ✅ | ❌ | |
| 49 | Math: ABS, CEIL, FLOOR, ROUND, POWER, SQRT, LOG, RAND | ✅ | ✅ | ❌ | |
| 50 | Date: NOW, DATE_ADD, DATE_SUB, DATEDIFF, DATE_FORMAT, EXTRACT, YEAR, MONTH, DAY | ✅ | ✅ | 🔧 | DATE_ADD/SUB parsed but not evaluated |

## 🔵 Advanced — Enterprise / Production

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 51 | JSON / JSONB support | ✅ | ✅ | ❌ | |
| 52 | Full-text search (MATCH AGAINST / tsvector) | ✅ | ✅ | ❌ | |
| 53 | Table partitioning | ✅ | ✅ | ❌ | |
| 54 | Replication | ✅ | ✅ | ❌ | |
| 55 | Sequences (CREATE SEQUENCE, NEXTVAL) | ❌ | ✅ | ❌ | |
| 56 | RETURNING clause | ❌ | ✅ | ❌ | |
| 57 | UPSERT (INSERT ... ON CONFLICT) | ❌ | ✅ | ❌ | |
| 58 | Materialized Views | ❌ | ✅ | ❌ | |
| 59 | Lateral Joins | ❌ | ✅ | ❌ | |
| 60 | Array data type | ❌ | ✅ | ❌ | |
| 61 | COPY command (bulk import/export) | ❌ | ✅ | ❌ | |
| 62 | LISTEN / NOTIFY | ❌ | ✅ | ❌ | |
| 63 | Table inheritance | ❌ | ✅ | ❌ | |
| 64 | Row-level security | ❌ | ✅ | ❌ | |
| 65 | Roles (vs individual users) | ✅ | ✅ | ❌ | Users only, no roles |
| 66 | WAL / crash recovery | ✅ | ✅ | ❌ | Not crash-safe |
| 67 | Concurrent write safety (file locking / MVCC) | ✅ | ✅ | ❌ | Mutex per query but no file-level locking |
| 68 | Connection pooling | ✅ | ✅ | ❌ | |
| 69 | SELECT INTO | ✅ | ✅ | ❌ | |

## 🏗️ Architecture & Operations

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 70 | Buffer Pool Manager (LRU page cache) | ✅ | ✅ | ❌ | All I/O goes directly to disk; no caching layer |
| 71 | RECLAIM (storage garbage collection) | ✅ (OPTIMIZE TABLE) | ✅ (VACUUM) | ❌ | Deleted records blanked but space never reclaimed |
| 72 | Temporary Tables (session-scoped) | ✅ | ✅ | 🔧 | `opt_temporary` parsed but not executed |
| 73 | Native UUID type & gen_random_uuid() | ❌ | ✅ | ❌ | UUID OID 2950 in catalog but no generation/validation |
| 74 | Snowflake ID generation (SNOWFLAKE keyword) | ❌ | ❌ | ❌ | Twitter Snowflake: 41-bit timestamp + 10-bit machine + 12-bit sequence |
| 75 | Query Timeout & Statement Cancellation | ✅ | ✅ | ❌ | No watchdog; runaway queries block connection forever |
| 76 | `evo_sleep(ms)` — artificial delay function | ❌ | ✅ (`pg_sleep`) | ❌ | Block for N ms; interruptible by statement_timeout; chaos-engineering |
| 77 | `evo_jitter(min_ms, max_ms)` — random delay function | ❌ (`pg_jitter` ext) | ❌ (`pg_jitter` ext) | ❌ | Random delay [min,max] ms; returns actual delay; pg_jitter-inspired |
| 78 | JIT Compilation Evaluation | ✅ (LLVM) | ✅ (LLVM / pg_jitter) | ❌ | Profile-driven decision at hardening phase; SLJIT/AsmJIT if expr eval >30% CPU on 100K+ rows |

## ⚙️ Storage Engine Limitations

| Limitation | Current | Ideal |
|-----------|---------|-------|
| All queries full table scan | O(n) | B-tree index O(log n) |
| Record size cap | ~8 KB | Configurable / TOAST |
| Max ORDER BY rows | 500 (static array) | Dynamic allocation |
| Max UPDATE/DROP rows | 200 (static array) | Dynamic allocation |
| Semicolon in data | Corrupts records | Escaped/binary storage |
| Concurrent writes | Global mutex | Row-level locking / MVCC |
| Crash recovery | None | WAL + checkpoints |
