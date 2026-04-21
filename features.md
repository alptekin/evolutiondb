# EvolutionDB — Feature Status & Roadmap

> Comparison with MySQL and PostgreSQL.
> ✅ = Implemented &nbsp; 🔧 = Parsed but not executed &nbsp; ❌ = Not implemented

---

## 🔴 Critical — Core SQL

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 1 | JOIN (INNER/LEFT/RIGHT/CROSS/NATURAL) | ✅ | ✅ | ✅ | Volcano-style pipeline join engine (join.c), up to 8 tables |
| 2 | Subqueries (WHERE, FROM, SELECT) | ✅ | ✅ | 🔧 | Grammar exists, no subquery execution |
| 3 | Subquery comparison (ANY/SOME/ALL) | ✅ | ✅ | 🔧 | Grammar exists, no evaluation |
| 4 | UNION / UNION ALL / INTERSECT / EXCEPT | ✅ | ✅ | ❌ | |
| 5 | ALTER TABLE (ADD/DROP/MODIFY/RENAME COLUMN) | ✅ | ✅ | ✅ | ADD/DROP/MODIFY/RENAME COLUMN — hybrid DROP (lazy+RECLAIM rewrite) |
| 6 | FOREIGN KEY constraints | ✅ | ✅ | ✅ | CASCADE, SET NULL, RESTRICT, SET DEFAULT, NO ACTION; ON DELETE + ON UPDATE; cross-schema |
| 7 | CHECK constraints | ✅ | ✅ | ✅ | Named constraints, NOT VALID, ENABLE/DISABLE/VALIDATE |
| 8 | DEFAULT value enforcement | ✅ | ✅ | ✅ | Literals, CURRENT_TIMESTAMP, gen_random_uuid(), expressions |
| 9 | AUTO_INCREMENT / SERIAL / IDENTITY | ✅ | ✅ | ✅ | Custom start value and step, LAST_INSERT_ID() |
| 10 | UNIQUE constraint enforcement | ✅ | ✅ | ✅ | Table-level and column-level, composite UNIQUE |
| 11 | Composite PRIMARY KEY | ✅ | ✅ | ✅ | Pipe-delimited composite key in B+ tree |
| 12 | Real transactions (ACID) | ✅ | ✅ | ✅ | BEGIN/COMMIT/ROLLBACK, undo log, MVCC, SAVEPOINT |
| 13 | Indexes (B-tree, Hash) | ✅ | ✅ | ✅ | B+ tree, hash index, expression index, composite index, CONCURRENTLY |
| 14 | Multi-row INSERT | ✅ | ✅ | ✅ | VALUES (a), (b), (c) — batch insert |
| 15 | INSERT INTO ... SELECT | ✅ | ✅ | ✅ | With column mapping, WHERE, JOIN source |
| 16 | INSERT with column list mapping | ✅ | ✅ | ✅ | Reorder + fill missing with DEFAULT/NULL |
| 17 | DELETE with expression-based WHERE | ✅ | ✅ | ✅ | Two-phase collect-then-delete with LIMIT/OFFSET |
| 18 | UPDATE with expression-based WHERE | ✅ | ✅ | ✅ | MVCC non-destructive update (soft-delete old + insert new) |
| 19 | Multi-table DELETE | ✅ | ✅ | ✅ | MySQL syntax 1 + 2, USING, multi-target, LEFT JOIN orphan pattern |
| 20 | Multi-table UPDATE | ✅ | ✅ | ✅ | Cross-table SET values, alias support, expr evaluation from join row |

## 🟠 Important — Commonly Used

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 21 | Views (CREATE/DROP VIEW) | ✅ | ✅ | ❌ | |
| 22 | Stored Procedures / Functions | ✅ | ✅ | ✅ | MySQL-complete: IF/ELSEIF/ELSE, WHILE, LOOP/LEAVE/ITERATE, FOR, FOREACH, CASE/WHEN, SELECT INTO, SET expr, CURSOR/FETCH/CLOSE, DECLARE HANDLER, OUT/INOUT params, EXECUTE dynamic SQL, SIGNAL, RETURN, nested CALL |
| 23 | Triggers | ✅ | ✅ | ✅ | BEFORE/AFTER INSERT/UPDATE/DELETE, FOR EACH ROW, OLD/NEW refs, SIGNAL reject, IF/WHILE body |
| 24 | Cursors | ✅ | ✅ | ✅ | Standalone DECLARE/OPEN/FETCH/CLOSE, FETCH NEXT/ALL/FORWARD N/PRIOR/FIRST/LAST, MOVE, procedure cursors |
| 25 | Prepared Statements (server-side) | ✅ | ✅ | 🔧 | Extended query protocol stubs only |
| 26 | Window Functions (ROW_NUMBER, RANK, OVER) | ✅ | ✅ | ❌ | |
| 27 | CTEs (WITH ... AS) | ✅ | ✅ | ❌ | |
| 28 | EXPLAIN / EXPLAIN ANALYZE | ✅ | ✅ | ✅ | EXPLAIN shows access method (PK Lookup, Index Scan, Seq Scan) |
| 29 | DROP DATABASE | ✅ | ✅ | ❌ | CREATE DATABASE exists |
| 30 | DROP SCHEMA | ✅ | ✅ | ❌ | CREATE SCHEMA exists |
| 31 | RENAME TABLE | ✅ | ✅ | ❌ | |
| 32 | ON DUPLICATE KEY UPDATE | ✅ | ❌ | 🔧 | Parsed but not executed |
| 33 | REPLACE INTO | ✅ | ❌ | 🔧 | Parsed but not executed |
| 34 | CREATE TABLE AS SELECT (CTAS) | ✅ | ✅ | ✅ | INFER + EXPLICIT modes, TEMPORARY support |
| 35 | ORDER BY expression / ordinal position | ✅ | ✅ | 🔧 | Multi-column ORDER BY works; expression/ordinal pending |
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
| 43 | INTERVAL (date arithmetic) | ✅ | ✅ | 🔧 | DATE_ADD/DATE_SUB parsed, evaluation pending |
| 44 | GROUP_CONCAT / STRING_AGG | ✅ | ✅ | ❌ | |
| 45 | CONCAT with 3+ arguments | ✅ | ✅ | ❌ | 2-arg CONCAT works |
| 46 | \|\| string concatenation operator | ❌ | ✅ | ❌ | |
| 47 | NULL-safe comparison (`<=>`) | ✅ | ❌ | 🔧 | Token exists but not evaluated |
| 48 | String: LEFT, RIGHT, LPAD, RPAD, REVERSE, REPEAT, INSTR, LOCATE, POSITION | ✅ | ✅ | ❌ | UPPER, LOWER, LENGTH, SUBSTRING, TRIM, REPLACE, CONCAT implemented |
| 49 | Math: ABS, CEIL, FLOOR, ROUND, POWER, SQRT, LOG, RAND | ✅ | ✅ | ❌ | |
| 50 | Date: NOW, DATE_ADD, DATE_SUB, DATEDIFF, DATE_FORMAT, EXTRACT | ✅ | ✅ | 🔧 | CURRENT_TIMESTAMP/DATE/TIME work; DATE_ADD/SUB parsed |

## 🔵 Advanced — Enterprise / Production

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 51 | JSON / JSONB support | ✅ | ✅ | ❌ | |
| 52 | Full-text search | ✅ | ✅ | ❌ | |
| 53 | Table partitioning | ✅ | ✅ | ❌ | Sharding (hash/range) implemented instead |
| 54 | Replication | ✅ | ✅ | ✅ | Logical replication, Raft consensus, read replicas |
| 55 | Sequences (CREATE SEQUENCE, NEXTVAL) | ❌ | ✅ | ❌ | |
| 56 | RETURNING clause | ❌ | ✅ | ✅ | INSERT/UPDATE/DELETE RETURNING *, col1, col2 |
| 57 | UPSERT (INSERT ... ON CONFLICT) | ❌ | ✅ | ❌ | |
| 58 | Materialized Views | ❌ | ✅ | ❌ | |
| 59 | Lateral Joins | ❌ | ✅ | 🔧 | v1: comma LATERAL, INNER/LEFT JOIN LATERAL, correlated refs, 13/13 tests |
| 60 | Array data type | ❌ | ✅ | ❌ | |
| 61 | COPY command (bulk import/export) | ❌ | ✅ | ❌ | |
| 62 | LISTEN / NOTIFY | ❌ | ✅ | ❌ | |
| 63 | Table inheritance | ❌ | ✅ | ❌ | |
| 64 | Row-level security | ❌ | ✅ | ❌ | |
| 65 | Roles (vs individual users) | ✅ | ✅ | ✅ | CREATE/DROP ROLE, GRANT/REVOKE role TO/FROM user, privilege inheritance, SHOW ROLES |
| 66 | WAL / crash recovery | ✅ | ✅ | ✅ | FPI-based WAL, checkpoint, crash recovery replay |
| 67 | MVCC (Multi-Version Concurrency Control) | ✅ | ✅ | ✅ | 7 layers: Snapshots, CLOG, RECLAIM, HOT, VMAP, CSN, Auto-RECLAIM |
| 68 | Connection pooling | ✅ | ✅ | ❌ | Thread-per-connection model |
| 69 | SELECT INTO | ✅ | ✅ | ✅ | PostgreSQL-style: SELECT ... INTO table FROM ... (reuses CTAS engine) |

## 🏗️ Architecture & Operations

| # | Feature | MySQL | PG | EvoSQL | Notes |
|---|---------|:-----:|:--:|:------:|-------|
| 70 | Buffer Pool Manager | ✅ | ✅ | ✅ | Clock Sweep (PG algorithm), configurable size, anti-pollution ring |
| 71 | RECLAIM / VACUUM | ✅ | ✅ | ✅ | 6-phase defrag, dead tuple cleanup, XID freeze, auto-RECLAIM at 20% threshold |
| 72 | Temporary Tables | ✅ | ✅ | ✅ | LOCAL + GLOBAL TEMPORARY, ON COMMIT DELETE/PRESERVE ROWS |
| 73 | Native UUID type & gen_random_uuid() | ❌ | ✅ | ✅ | UUID v4 + v7 (RFC 9562), 16-byte binary storage |
| 74 | Snowflake ID generation | ❌ | ❌ | ✅ | 64-bit time-ordered ID (snowflake_id() function) |
| 75 | Query Timeout & Statement Cancellation | ✅ | ✅ | ✅ | evo_statement_timeout, KILL QUERY, PG CancelRequest, idle timeout |
| 76 | `evo_sleep(ms)` — delay function | ❌ | ✅ | ✅ | Interruptible by statement_timeout |
| 77 | `evo_jitter(min_ms, max_ms)` — random delay | ❌ | ❌ | ✅ | Returns actual delay in ms |
| 78 | JIT Compilation | ✅ | ✅ | ❌ | |
| 79 | Transparent Data Encryption (TDE) | ❌ | ❌ | ✅ | MEK/DEK two-layer, AES-256-CTR pages, AES-256-GCM DEK wrap |
| 80 | TLS / SSL | ✅ | ✅ | ✅ | Auto self-signed certs, STARTTLS for EVO protocol |
| 81 | Deadlock Detection | ✅ | ✅ | ✅ | Timeout-based row-level lock manager |
| 82 | XA Distributed Transactions | ✅ | ❌ | ✅ | XA START/END/PREPARE/COMMIT/ROLLBACK, WAL-persisted |
| 83 | SAVEPOINT / ROLLBACK TO | ✅ | ✅ | ✅ | Nested savepoints, partial rollback |
| 84 | Isolation Levels | ✅ | ✅ | ✅ | READ COMMITTED (default), REPEATABLE READ |
| 85 | Hash Index | ✅ | ✅ | ✅ | FNV-1a, static hashing with overflow chains |
| 86 | Expression Index | ❌ | ✅ | ✅ | UPPER(), LOWER(), LENGTH(), CONCAT() |
| 87 | ANALYZE TABLE (statistics) | ✅ | ✅ | ✅ | Table + column + index statistics |
| 88 | TRUNCATE TABLE | ✅ | ✅ | ✅ | CASCADE, RESTART/CONTINUE IDENTITY, multi-table |
| 89 | Generated Columns | ✅ | ✅ | ✅ | STORED + VIRTUAL |
| 90 | FOR UPDATE / FOR SHARE | ✅ | ✅ | ✅ | Row-level locking, SKIP LOCKED syntax |
| 91 | CREATE INDEX CONCURRENTLY | ❌ | ✅ | ✅ | 3-phase non-blocking build |
| 92 | Sharding | ✅ (Vitess) | ✅ (Citus) | ✅ | Hash/range sharding, Raft consensus |
| 93 | SHOW PROCESSLIST / sessions | ✅ | ✅ | ✅ | Session registry, SHOW EVO_SESSIONS |
| 94 | Constraint Management | ✅ | ✅ | ✅ | Named constraints, NOT VALID, ENABLE/DISABLE/VALIDATE |
| 95 | ALTER TABLE ADD COLUMN | ✅ | ✅ | ✅ | Existing rows return NULL for new column |

## ⚙️ Resolved Storage Limitations

| Item | Status | Notes |
|------|--------|-------|
| B+ tree index O(log n) | ✅ Resolved | btree2.c integrated into all DML |
| Binary tuple format | ✅ Resolved | Type-specific encoding, no semicolons |
| Dynamic allocation | ✅ Resolved | No static caps on ORDER BY, UPDATE, DELETE |
| Row-level locking / MVCC | ✅ Resolved | lock_mgr.c + 7-layer MVCC |
| Crash recovery | ✅ Resolved | FPI-based WAL + checkpoint |
| Record size cap | ~8 KB | TOAST not yet implemented |
| Connection pooling | ❌ | Thread-per-connection model |

## 🏗️ Unified Storage Migration — Complete ✅

| Phase | Component | Status |
|-------|-----------|--------|
| 1 | Page Manager + Slotted Pages | ✅ (18/18 tests) |
| 2 | B+ Tree | ✅ (13/13 tests) |
| 3 | System Catalog (12 B+ trees) | ✅ (30/30 tests) |
| 4 | Table API + DML Migration | ✅ |
| 5 | Metadata Migration (UserMgmt, GrantMgmt) | ✅ |
| 6 | Secondary Index Migration (Index.c → btree2) | ✅ |
| 7 | FOREIGN KEY Constraints | ✅ (22/22 tests) |
| 8 | File I/O Elimination | ✅ (all fopen removed) |
