# EvolutionDB — Implementation Tasks

> **Schedule:** 2 tasks per day, 10 steps each.  
> **Testing rule:** Every task ends with unit tests, smoke tests, regression tests, and full system tests.  
> **Ref:** [features.md](features.md) — 78 features → 75 tasks → 38 days.

---

## Legend

| Icon | Meaning |
|------|---------|
| ⬜ | Not started |
| 🔄 | In progress |
| ✅ | Completed |

---

## Day 1 — Expression-Based WHERE for UPDATE & DELETE

### Task 1: ✅ Expression-Based WHERE for DELETE (Feature #17)

**Goal:** DELETE currently only works by primary key (`db_delete(db, key)`). Enable expression-based WHERE filtering for DELETE, same as SELECT already supports.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Refactor `DeleteProcess()` — add a new code path: when `g_whereExpr` is set, iterate all records (like `SelectAll`) and evaluate `g_whereExpr` per row. Collect matching keys into a list. | `evolution/db/Delete.c` |
| 2 | Implement batch deletion — iterate collected keys and call `db_delete(db, key)` for each match. Return count of deleted rows. | `evolution/db/Delete.c` |
| 3 | Update `evoparser.y` DELETE rule — ensure the WHERE expression is stored in `g_whereExpr` (not just into `g_insert` as a raw PK value). Keep backward compat for simple `DELETE ... WHERE pk = value`. | `evolution/parser/evoparser.y` |
| 4 | Regenerate parser — run Bison/Flex to produce `evoparser.tab.c`, `lex.yy.c`. | `evolution/parser/` |
| 5 | Update `query_executor.c` — in the DELETE path, pass `g_whereExpr` context. After `DeleteProcess()`, report affected rows via `rs->affected_rows`. | `adaptor/query_executor.c` |
| 6 | Remove static array cap (200 records) — use dynamic allocation (`malloc/realloc`) for key collection. | `evolution/db/Delete.c` |
| 7 | Write unit tests — `tests/test_delete_where.py`: DELETE with `=`, `>`, `<`, `LIKE`, `BETWEEN`, `AND/OR`, `IS NULL`. | `tests/test_delete_where.py` |
| 8 | Write smoke tests — DELETE all rows, DELETE with no matches, DELETE on non-existent table. | `tests/test_delete_where.py` |
| 9 | Run regression — execute all 27 existing test suites, verify 0 failures. | `tests/` |
| 10 | Run full system test — Docker rebuild, `docker compose up`, connect via psql/DBeaver, manual DELETE with complex WHERE. | `Dockerfile`, `docker-compose.yml` |

---

### Task 2: ✅ Expression-Based WHERE for UPDATE (Feature #18)

**Goal:** UPDATE currently only works by primary key lookup. Enable expression-based WHERE for multi-row UPDATE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Refactor `UpdateProcess()` — when `g_whereExpr` is set, scan all records, evaluate WHERE per row, collect matching keys. | `evolution/db/Update.c` |
| 2 | Apply SET assignments to each matched row. Reuse existing column-matching logic from the current single-key path. | `evolution/db/Update.c` |
| 3 | Handle pad-size resize — if any updated record exceeds current `padSize`, do `ResizeAllRecords()` once at end. | `evolution/db/Update.c` |
| 4 | Update `evoparser.y` UPDATE rule — store WHERE clause into `g_whereExpr` instead of appending PK to `g_insert`. Backward compat for simple `WHERE pk = val`. | `evolution/parser/evoparser.y` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Update `query_executor.c` — report correct `affected_rows` count. | `adaptor/query_executor.c` |
| 7 | Remove static array cap (200 records) for keys — dynamic allocation. | `evolution/db/Update.c` |
| 8 | Write unit tests — `tests/test_update_where.py`: UPDATE with `=`, `>`, `<`, `LIKE`, `AND/OR`, `IS NULL`, multi-column SET. | `tests/test_update_where.py` |
| 9 | Run regression — all existing test suites pass. | `tests/` |
| 10 | Run full system test — Docker rebuild + manual verification. | `Dockerfile` |

---

## Day 2 — Multi-Row INSERT & Column Mapping

### Task 3: ✅ Multi-Row INSERT (Feature #14)

**Goal:** Parser already accepts `INSERT INTO t VALUES (1,'a'), (2,'b')` but only first row is inserted. Execute all rows.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Analyze parser `insert_vals_list` rule — understand how multiple value groups are collected. Determine if rows are concatenated in `g_insert` or only first survives. | `evolution/parser/evoparser.y` |
| 2 | Add row separator — use a sentinel (e.g. `\x02`) between rows in `g_insert` so `InsertProcess()` can split them. | `evolution/parser/evoparser.y` |
| 3 | Modify `InsertProcess()` — loop over each row segment, validate types/NOT NULL per row, insert each into DB. | `evolution/db/Insert.c` |
| 4 | Handle per-row errors — if one row fails (duplicate PK, type error), report which row failed. Use abort semantics (fail whole batch). | `evolution/db/Insert.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Update `query_executor.c` — report `affected_rows = N` for N successfully inserted rows. | `adaptor/query_executor.c` |
| 7 | Write unit tests — `tests/test_multi_insert.py`: 2 rows, 5 rows, 50 rows, mixed types, NULL values. | `tests/test_multi_insert.py` |
| 8 | Write edge-case tests — duplicate PK in batch, type mismatch in 3rd row, empty VALUES. | `tests/test_multi_insert.py` |
| 9 | Run regression — all existing test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, psql multi-row INSERT, verify via SELECT. | `Dockerfile` |

---

### Task 4: ✅ INSERT with Column List Mapping (Feature #16)

**Goal:** `INSERT INTO t (col2, col1) VALUES ('b', 'a')` is parsed but column mapping is ignored. Implement it.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Track specified column list from parser — store column names in order in a new global (e.g. `g_insertColumns[]`, `g_insertColumnCount`). | `evolution/db/database.h`, `evolution/db/database_globals.c` |
| 2 | Update `evoparser.y` `column_list` rule under INSERT — populate `g_insertColumns`. | `evolution/parser/evoparser.y` |
| 3 | Modify `InsertProcess()` — when `g_insertColumnCount > 0`, read table `.meta` for full column order, reorder values to match table schema. Fill missing columns with DEFAULT (or NULL marker). | `evolution/db/Insert.c` |
| 4 | Validate — column count in INSERT must match value count. Unknown column names → error. | `evolution/db/Insert.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Integrate with multi-row INSERT from Task 3 — column mapping applies to all rows. | `evolution/db/Insert.c` |
| 7 | Write unit tests — `tests/test_insert_column_map.py`: reordered columns, partial columns, missing nullable column. | `tests/test_insert_column_map.py` |
| 8 | Write negative tests — unknown column, too many values, too few values. | `tests/test_insert_column_map.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, DBeaver INSERT with column list, verify. | `Dockerfile` |

---

## Day 3 — Constraint Enforcement

### Task 5: ✅ UNIQUE Constraint Enforcement (Feature #10)

**Goal:** UNIQUE is parsed but duplicates are allowed. Enforce uniqueness on INSERT and UPDATE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Extend `.meta` format — add line 6: UNIQUE flags (e.g. `0;1;0;0` where 1 = unique). | `evolution/db/Create.c` |
| 2 | Track UNIQUE from parser — in `column_atts` rule, set a flag (like `g_currentColNotNull`). Add `SetColumnUnique()`. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 3 | Write `ReadUniqueFlags()` — reads line 6 of `.meta`. | `evolution/db/Create.c` |
| 4 | Enforce on INSERT — before `db_store()`, scan all existing records for duplicate values in UNIQUE columns. | `evolution/db/Insert.c` |
| 5 | Enforce on UPDATE — before applying SET, check no other row has the new value for UNIQUE columns. | `evolution/db/Update.c` |
| 6 | Error messages — `"duplicate key value violates unique constraint"` with column name. | `evolution/db/Insert.c`, `evolution/db/Update.c` |
| 7 | Regenerate parser. Ensure backward compat — old tables without line 6 default to no UNIQUE. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_unique.py`: create table with UNIQUE, insert dup → error, insert different → ok, update to dup → error. | `tests/test_unique.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual verification. | `Dockerfile` |

---

### Task 6: ✅ DEFAULT Value Enforcement (Feature #8)

**Goal:** DEFAULT is parsed but not stored or applied. Store DEFAULT values and apply them on INSERT when column is omitted.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Extend `.meta` format — add line 7: DEFAULT values (e.g. `\x01NONE\x01;42;\x01NONE\x01;hello`). `\x01NONE\x01` = no default. | `evolution/db/Create.c` |
| 2 | Track DEFAULT from parser — in `column_atts` rule, capture the default expression string into a new global `g_currentColDefault[256]`. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 3 | Write `ReadDefaults()` — reads line 7 of `.meta`, returns default values per column. | `evolution/db/Create.c` |
| 4 | Apply on INSERT with column list — for omitted columns, use DEFAULT value (or NULL if no DEFAULT and nullable). | `evolution/db/Insert.c` |
| 5 | Apply on INSERT without column list — if fewer values than columns, fill remaining with DEFAULT. | `evolution/db/Insert.c` |
| 6 | Regenerate parser. Backward compat — old `.meta` without line 7 → no defaults. | `evolution/parser/` |
| 7 | Ensure DEFAULT interacts correctly with NOT NULL — omitting a NOT NULL column with no DEFAULT → error. | `evolution/db/Insert.c` |
| 8 | Write unit tests — `tests/test_default.py`: DEFAULT int, DEFAULT string, omitted column gets default, explicit NULL overrides default. | `tests/test_default.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 4 — AUTO_INCREMENT & Composite PK

### Task 7: ✅ AUTO_INCREMENT / SERIAL (Feature #9)

**Goal:** AUTO_INCREMENT is parsed but no counter exists. Implement auto-increment for a single column per table.
 
| Step | Description | Files |
|------|-------------|-------|
| 1 | Design counter storage — `.meta` line 8: auto-increment column index and current counter (e.g. `2:47` = column 2, next value 47). `-1:0` = no auto-inc. | Design |
| 2 | Track AUTO_INCREMENT from parser — `SetColumnAutoIncrement()`, store in `g_currentColAutoIncrement`. Write to `.meta` line 8 during `CreateTableProcess()`. | `evolution/parser/evoparser.y`, `evolution/db/Create.c`, `evolution/db/database.h` |
| 3 | Write `ReadAutoIncrement()` / `WriteAutoIncrement()` — read/update counter from `.meta`. | `evolution/db/Create.c` |
| 4 | Apply on INSERT — if auto-inc column value is omitted or `0` or `NULL`, generate next counter value. Increment and persist. | `evolution/db/Insert.c` |
| 5 | Handle explicit values — if user provides explicit value, accept it. If it's greater than current counter, update counter. | `evolution/db/Insert.c` |
| 6 | Interact with column list mapping (Task 4) — auto-inc column can be omitted in INSERT column list. | `evolution/db/Insert.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_auto_increment.py`: insert without id → auto, insert with explicit id, gap handling, counter persistence across connections. | `tests/test_auto_increment.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, verify counter survives restart. | `Dockerfile` |

---

### Task 8: ✅ Composite PRIMARY KEY (Feature #11)

**Goal:** Parser accepts composite PK but only single column is stored. Implement multi-column primary keys.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Extend `.meta` PK storage — line 4 changes from single int to comma-separated list (e.g. `0,2` for columns 0 and 2). | `evolution/db/Create.c` |
| 2 | Add grammar — `PRIMARY KEY (col1, col2)` at table level in `evoparser.y`. Already partially supported. | `evolution/parser/evoparser.y` |
| 3 | Modify `ReadPrimaryKey()` → `ReadPrimaryKeys(int *indices, int max)` returning count. | `evolution/db/Create.c`, `evolution/db/database.h` |
| 4 | Change key construction in INSERT — concatenate values of all PK columns with separator to form composite hash key. | `evolution/db/Insert.c` |
| 5 | Change key lookup in UPDATE/DELETE — use composite key for lookups. | `evolution/db/Update.c`, `evolution/db/Delete.c` |
| 6 | Enforce PK uniqueness on composite key. | `evolution/db/Insert.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_composite_pk.py`: create table with 2-col PK, insert, dup → error, update via composite key, delete via composite key. | `tests/test_composite_pk.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 5 — CHECK Constraints & FOREIGN KEY

### Task 9: 🔄 CHECK Constraint (Feature #7)

**Goal:** Implement CHECK constraints that are validated on INSERT and UPDATE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design storage — `.meta` line 9 or separate `.constraints` file per table. Format: `CHECK:age>0 AND age<150;CHECK:salary>=0`. | Design |
| 2 | Add grammar — `column_atts` rule: `CHECK ( expr )`. Also table-level `CHECK (expr)`. | `evolution/parser/evoparser.y` |
| 3 | Store check expression as string in `.meta`. Write `ReadCheckConstraints()`. | `evolution/db/Create.c` |
| 4 | Validate on INSERT — parse check expression into ExprNode, evaluate against row values. Reject if false. | `evolution/db/Insert.c` |
| 5 | Validate on UPDATE — re-evaluate check expression against updated row. Reject if false. | `evolution/db/Update.c` |
| 6 | Error message — `"new row violates check constraint"` with expression text. | `evolution/db/Insert.c`, `evolution/db/Update.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_check.py`: CHECK on single column, multi-column CHECK, INSERT violating → error, UPDATE violating → error. | `tests/test_check.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 10: ⬜ FOREIGN KEY Constraints (Feature #6)

**Goal:** Implement basic referential integrity: FOREIGN KEY enforcement on INSERT, UPDATE, DELETE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design FK storage — `.meta` line 10 or separate file: `col_index:ref_table:ref_col[:ON_DELETE_ACTION]`. | Design |
| 2 | Add grammar — `FOREIGN KEY (col) REFERENCES table(col) [ON DELETE CASCADE/SET NULL/RESTRICT]`. | `evolution/parser/evoparser.y` |
| 3 | Store FK definitions during CREATE TABLE. Write `ReadForeignKeys()`. | `evolution/db/Create.c` |
| 4 | Enforce on INSERT — check that FK column value exists in referenced table's referenced column. | `evolution/db/Insert.c` |
| 5 | Enforce on UPDATE — if FK column is being updated, verify new value exists in parent. | `evolution/db/Update.c` |
| 6 | Enforce on DELETE of parent — ON DELETE RESTRICT (default): reject if child rows exist. ON DELETE CASCADE: delete child rows. ON DELETE SET NULL: set FK columns to NULL. | `evolution/db/Delete.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_foreign_key.py`: valid FK insert, invalid FK → error, delete parent RESTRICT → error, CASCADE, SET NULL. | `tests/test_foreign_key.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 6 — Transactions & Indexes

### Task 11: ⬜ Real Transactions / ACID (Feature #12)

**Goal:** BEGIN/COMMIT/ROLLBACK currently no-op. Implement basic single-connection transaction with undo log.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — on BEGIN, create a per-connection "undo log": list of `(table, key, old_data, op_type)` for each modified record. | Design |
| 2 | Extend `SessionCtx` — add `in_transaction` flag, undo log array (dynamic). | `adaptor/query_executor.h` |
| 3 | On INSERT within transaction — log `(table, key, NULL, INSERT)` meaning "delete this on rollback". | `adaptor/query_executor.c` |
| 4 | On UPDATE within transaction — log `(table, key, old_record, UPDATE)` meaning "restore this on rollback". | `adaptor/query_executor.c` |
| 5 | On DELETE within transaction — log `(table, key, old_record, DELETE)` meaning "re-insert this on rollback". | `adaptor/query_executor.c` |
| 6 | COMMIT — discard undo log. Release any held resources. | `adaptor/query_executor.c` |
| 7 | ROLLBACK — replay undo log in reverse order. | `adaptor/query_executor.c` |
| 8 | Auto-rollback on disconnect — if client disconnects with open transaction. | `adaptor/pg_protocol.c` |
| 9 | Write unit tests — `tests/test_transactions.py`: BEGIN+INSERT+COMMIT → visible, BEGIN+INSERT+ROLLBACK → gone, multi-statement, disconnect rollback. | `tests/test_transactions.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 12: ⬜ Indexes — B-tree (Feature #13)

**Goal:** All queries currently do full table scan. Implement basic B-tree index for faster lookups.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design B-tree on-disk format — use a separate `.btree` file per index. Nodes: `[key_count][keys...][child_pointers...]`. | Design |
| 2 | Add grammar — `CREATE INDEX idx_name ON table(col)`, `DROP INDEX idx_name`. | `evolution/parser/evoparser.y` |
| 3 | Implement B-tree insert — on `InsertProcess()`, also insert key+record-pointer into B-tree file. | `evolution/db/Index.c` (new) |
| 4 | Implement B-tree search — given a key, return record pointer(s). O(log n) lookup. | `evolution/db/Index.c` |
| 5 | Implement B-tree delete — on `DeleteProcess()`, remove key from B-tree. | `evolution/db/Index.c` |
| 6 | Wire into SELECT — when WHERE clause is `col = value` and an index exists on `col`, use B-tree search instead of full scan. | `adaptor/query_executor.c` |
| 7 | Implement B-tree range scan — for `col > value`, `col BETWEEN a AND b`. | `evolution/db/Index.c` |
| 8 | Update Makefile. Wire into UPDATE (reindex on key change). | `evolution/Makefile`, `evolution/db/Update.c` |
| 9 | Write unit tests — `tests/test_index.py`: CREATE INDEX, SELECT with index (verify faster), DROP INDEX, index + INSERT/UPDATE/DELETE consistency. | `tests/test_index.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

## Day 7 — Buffer Pool Manager & RECLAIM

### Task 13: ⬜ Buffer Pool Manager (Feature #70)

**Goal:** Implement a global in-memory page cache (LRU) to reduce disk I/O. All `db_fetch`/`db_store`/`db_delete` operations go through the buffer pool instead of hitting disk every time.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — define `BufferPage { off_t offset; char data[DATLEN_MAX]; int dirty; int pin_count; uint64_t access_ts; }`. Global pool array of N pages. Hash map `(fd, offset) → page_index` for O(1) lookup. | Design |
| 2 | Create `buffer_pool.h` — public API: `bp_init(size)`, `bp_read_page(fd, offset, len) → data`, `bp_write_page(fd, offset, data, len)`, `bp_flush(fd)`, `bp_flush_all()`, `bp_invalidate(fd)`, `bp_destroy()`. | `evolution/db/buffer_pool.h` (new) |
| 3 | Implement `buffer_pool.c` — LRU eviction: on cache miss, evict least-recently-used unpinned page. If evicted page is dirty, write to disk first. Use mutex for thread safety (global pool shared across connections). | `evolution/db/buffer_pool.c` (new) |
| 4 | Wire into `db.c` — replace direct `read()`/`write()` calls in `_db_readdat()` and `_db_writedat()` with `bp_read_page()` / `bp_write_page()`. Keep index file I/O direct (small, random). | `evolution/db/db.c` |
| 5 | Initialize buffer pool on server startup — call `bp_init()` from `server_init()` in `server.c`. Default pool size 256 pages. | `adaptor/server.c` |
| 6 | Implement `bp_flush_all()` — called on graceful shutdown from `server_cleanup()`. Ensure all dirty pages written to disk. | `evolution/db/buffer_pool.c`, `adaptor/server.c` |
| 7 | Implement `bp_invalidate(fd)` — invalidate all pages for a table's data file when table is dropped. Wire into `DropProcess()`. | `evolution/db/buffer_pool.c`, `evolution/db/Drop.c` |
| 8 | Update Makefiles — add `buffer_pool.c` to evolution Makefile. | `evolution/Makefile` |
| 9 | Write unit tests — `tests/test_buffer_pool.py`: INSERT+SELECT verifies data consistency through cache, large batch (500 rows) performance, DROP TABLE invalidates cache, multiple tables share pool. | `tests/test_buffer_pool.py` |
| 10 | Run regression + full system test — Docker rebuild, all test suites pass. | `tests/`, `Dockerfile` |

---

### Task 14: ⬜ RECLAIM — Storage Garbage Collection (Feature #71)

**Goal:** Deleted records leave blank space in `.dat`/`.idx` files (free list). `RECLAIM TABLE <name>` compacts storage by rewriting live records contiguously and rebuilding the hash index. EvoSQL-specific command (not PostgreSQL's VACUUM).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `RECLAIM TABLE name` and `RECLAIM TABLE name ANALYZE` in `evoparser.y`. Add `RECLAIM` token to lexer. Set `g_commandType = CMD_RECLAIM`. | `evolution/parser/evoparser.y`, `evolution/parser/evolexer.l` |
| 2 | Implement `ReclaimProcess(table_name)` — open `.idx` and `.dat` files. Scan all hash chains (not free list) to collect live records: `(key, data)` pairs. | `evolution/db/Reclaim.c` (new) |
| 3 | Compact `.dat` file — create temp `.dat.new`, write live records contiguously with no gaps. Record new offsets for each key. | `evolution/db/Reclaim.c` |
| 4 | Rebuild `.idx` file — create temp `.idx.new` with fresh hash table. Re-insert all live keys with their new `.dat` offsets. Empty free list. | `evolution/db/Reclaim.c` |
| 5 | Atomic swap — rename `.dat.new` → `.dat`, `.idx.new` → `.idx`. On failure, keep originals. Invalidate buffer pool pages for this table via `bp_invalidate()`. | `evolution/db/Reclaim.c` |
| 6 | Report statistics — return `"RECLAIM: removed N dead records, reclaimed M bytes"` as a notice/result message. | `evolution/db/Reclaim.c`, `adaptor/query_executor.c` |
| 7 | Wire into `query_executor.c` — detect `RECLAIM` command, call `ReclaimProcess()`. Update Makefiles. | `adaptor/query_executor.c`, `evolution/Makefile` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_reclaim.py`: insert 100 rows → delete 80 → RECLAIM → verify 20 rows intact, file size shrunk, SELECT still works, RECLAIM on empty table, RECLAIM on table with no dead records. | `tests/test_reclaim.py` |
| 10 | Run regression + full system test — Docker rebuild, all test suites pass. | `tests/`, `Dockerfile` |

---

## Day 8 — Temporary Tables & Native UUID

### Task 15: ⬜ Temporary Tables (Feature #72)

**Goal:** `CREATE TEMPORARY TABLE` is parsed (`opt_temporary`) but ignored. Implement session-scoped temporary tables that auto-drop on disconnect.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design temp storage path — Linux: `/tmp/evosql_<pid>/<session_id>/`, Windows: `%TEMP%\evosql_<pid>\<session_id>\`. Tables stored as normal `.dat/.idx/.meta` files in this directory. | Design |
| 2 | Extend `SessionCtx` — add `char temp_dir[512]`, `char temp_tables[64][128]`, `int temp_table_count`. Pass `SessionCtx*` into `CreateTableProcess()`. | `adaptor/query_executor.h`, `evolution/db/database.h` |
| 3 | Modify `CreateTableProcess()` — when `opt_temporary == 1`, create files in session's temp directory instead of schema directory. Register table name in `SessionCtx.temp_tables[]`. | `evolution/db/Create.c` |
| 4 | Modify table lookup — when resolving table name, check session temp directory first (temp tables shadow real tables). Fall back to schema directory. | `adaptor/query_executor.c` |
| 5 | Auto-drop on disconnect — in `pg_handler()` cleanup (after client disconnects), iterate `temp_tables[]` and delete all temp files + temp directory. | `adaptor/pg_handler.c` |
| 6 | Catalog isolation — temp tables not visible in `pg_class` to other sessions. Only the owning session sees them. | `adaptor/catalog.c` |
| 7 | Regenerate parser (if any changes needed — `opt_temporary` already passes `$$ = 1`). | `evolution/parser/` |
| 8 | Platform-specific temp dir — `#ifdef _WIN32` use `GetTempPathA()`, else use `/tmp/`. Create directory with `mkdir()` / `CreateDirectoryA()`. | `adaptor/query_executor.c` |
| 9 | Write unit tests — `tests/test_temp_tables.py`: CREATE TEMPORARY TABLE, INSERT+SELECT, disconnect → table gone, temp shadows real table, two sessions have independent temp tables. | `tests/test_temp_tables.py` |
| 10 | Run regression + full system test — Docker rebuild, all test suites pass. | `tests/`, `Dockerfile` |

---

### Task 16: ⬜ Native UUID Type & gen_random_uuid() (Feature #73)

**Goal:** Implement UUID v4 data type with generation. Uses `/dev/urandom` (Linux) and `CryptGenRandom` (Windows) via existing `crypto_random_bytes()`. OID 2950 already registered in `pg_type` catalog.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Create `uuid.c` / `uuid.h` — `uuid_generate_v4(char *out)`: read 16 random bytes via `crypto_random_bytes()`, set version nibble (byte 6 → `0x4X`), set variant bits (byte 8 → `0x8X`/`0x9X`/`0xaX`/`0xbX`), format as `xxxxxxxx-xxxx-4xxx-[89ab]xxx-xxxxxxxxxxxx`. | `evolution/db/uuid.c` (new), `evolution/db/uuid.h` (new) |
| 2 | Add UUID type validation — `uuid_validate(const char *str)`: verify 36-char format `8-4-4-4-12` with valid hex digits. Wire into type checking in `validate_types()` (Insert.c). | `evolution/db/uuid.c`, `evolution/db/Insert.c` |
| 3 | Add `gen_random_uuid()` SQL function — expression type `EXPR_GEN_RANDOM_UUID`. Add lexer token `FGEN_RANDOM_UUID`, parser rule `FGEN_RANDOM_UUID '(' ')'`. Evaluate by calling `uuid_generate_v4()`. | `evolution/db/expression.h`, `evolution/db/expression.c`, `evolution/parser/evolexer.l`, `evolution/parser/evoparser.y` |
| 4 | Wire UUID as DEFAULT — `CREATE TABLE t (id UUID DEFAULT gen_random_uuid(), ...)`. When column is omitted in INSERT, generate UUID automatically. | `evolution/db/Insert.c` |
| 5 | Add UUID comparison — UUIDs compared as case-insensitive strings. WHERE clause with UUID equality/inequality. | `evolution/db/expression.c` |
| 6 | Regenerate parser. Update Makefiles. | `evolution/parser/`, `evolution/Makefile` |
| 7 | Catalog — UUID type OID 2950 already in `pg_type`. Ensure DBeaver recognizes UUID columns. | `adaptor/catalog.c` |
| 8 | Cross-platform test — verify `crypto_random_bytes()` works correctly on both Linux (Docker) and Windows (native build). UUID format and randomness. | Manual |
| 9 | Write unit tests — `tests/test_uuid.py`: CREATE TABLE with UUID col, INSERT with gen_random_uuid(), INSERT with explicit UUID, invalid UUID → error, SELECT WHERE uuid_col = '...', UUID as DEFAULT, uniqueness over 100 generated UUIDs. | `tests/test_uuid.py` |
| 10 | Run regression + full system test — Docker rebuild, all test suites pass. | `tests/`, `Dockerfile` |

---

## Day 9 — Snowflake ID & Query Timeout

### Task 17: ⬜ Snowflake ID Generation (Feature #74)

**Goal:** Implement Twitter Snowflake ID as a built-in function. 64-bit integer: 41-bit timestamp (ms since Unix epoch 1970-01-01) + 10-bit machine ID + 12-bit sequence counter. Exposed via `snowflake_id()` SQL function and `SNOWFLAKE` keyword.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Create snowflake module — extend `uuid.c` (or new `snowflake.c`): `snowflake_generate(int64_t *out)`. Use Unix epoch (1970-01-01 00:00:00 UTC). 41-bit ms timestamp gives range until ~2039. | `evolution/db/uuid.c` or `evolution/db/snowflake.c` (new) |
| 2 | Monotonic clock — Linux: `clock_gettime(CLOCK_REALTIME)`, Windows: `GetSystemTimeAsFileTime()` converted to Unix ms. Helper: `snowflake_current_ms()`. | `evolution/db/snowflake.c` |
| 3 | Machine ID — 10 bits (0–1023). Read from `EVOSQL_MACHINE_ID` env var, default to `hash(hostname) % 1024`. Linux: `gethostname()`, Windows: `GetComputerNameA()`. Stored as global `g_snowflake_machine_id`. | `evolution/db/snowflake.c` |
| 4 | Sequence counter — 12-bit counter (0–4095) per millisecond. Thread-safe with mutex. If 4096 IDs exhausted in same ms, spin-wait until next ms. | `evolution/db/snowflake.c` |
| 5 | Add `SNOWFLAKE` keyword to lexer and `snowflake_id()` SQL function — lexer token `SNOWFLAKE`, parser rule `SNOWFLAKE '(' ')'` → `EXPR_SNOWFLAKE_ID`. Return as BIGINT (int64). | `evolution/parser/evolexer.l`, `evolution/parser/evoparser.y`, `evolution/db/expression.h`, `evolution/db/expression.c` |
| 6 | Wire as column DEFAULT — `CREATE TABLE t (id BIGINT DEFAULT snowflake_id(), ...)`. Auto-generate on INSERT when column omitted. | `evolution/db/Insert.c` |
| 7 | Regenerate parser. Update Makefiles. | `evolution/parser/`, `evolution/Makefile` |
| 8 | Initialize on server startup — call `snowflake_init()` from `server_init()`. Read machine ID, init mutex, init sequence. | `adaptor/server.c` |
| 9 | Write unit tests — `tests/test_snowflake.py`: generate 100 IDs → all unique and monotonically increasing, extract timestamp component → within last second, extract machine ID → matches config, concurrent generation (multi-row INSERT) → no duplicates. | `tests/test_snowflake.py` |
| 10 | Run regression + full system test — Docker rebuild, all test suites pass. | `tests/`, `Dockerfile` |

---

### Task 18: ⬜ Query Timeout, Statement Cancellation & Delay Functions (Features #75, #76, #77)

**Goal:** Implement `SET statement_timeout = <ms>` to prevent runaway queries + `evo_sleep(ms)` and `evo_jitter(min_ms, max_ms)` SQL functions for artificial delay injection (pg_jitter-style). Uses a cross-platform watchdog thread approach — spawn a monitoring thread before query execution that sets a cancellation flag after timeout. The delay functions enable chaos-engineering style testing of timeout/retry behaviour.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `platform_sleep_ms(ms)` — cross-platform millisecond sleep. Linux: `usleep(ms * 1000)` or `nanosleep()`. Windows: `Sleep(ms)`. Also add `platform_random_range(min, max)` helper using `rand()` seeded by `time(NULL)` once. | `adaptor/platform.h` |
| 2 | Add `statement_timeout` to `SessionCtx` — `int statement_timeout_ms` (0 = no timeout, default). Parse `SET statement_timeout = N` in catalog.c SET handler. Add cancellation flag `volatile int g_query_cancelled` global. | `adaptor/query_executor.h`, `adaptor/catalog.c`, `evolution/db/database.h`, `evolution/db/database_globals.c` |
| 3 | Implement watchdog thread — before `safe_query_execute()`, if `statement_timeout_ms > 0`, spawn a watchdog thread: `platform_sleep_ms(timeout_ms)` then set `g_query_cancelled = 1`. Cross-platform via `platform.h` macros (Linux: `pthread_create`, Windows: `CreateThread`). Add `volatile int g_query_done` to cancel watchdog on normal completion. | `adaptor/server.c`, `adaptor/platform.h` |
| 4 | Check cancellation in scan loops — in `SelectAll()`, `DeleteProcess()`, `UpdateProcess()` inner loops, check `if (g_query_cancelled) { set SQLSTATE 57014; return; }`. Early exit on cancel. Reset `g_query_cancelled = 0` after query completes (success or cancel). | `evolution/db/Select.c`, `evolution/db/Delete.c`, `evolution/db/Update.c`, `adaptor/server.c`, `adaptor/query_executor.c` |
| 5 | PG protocol cancel key — send `BackendKeyData` message with PID + secret during startup. Implement `CancelRequest` message handler: client sends cancel key → set `g_query_cancelled = 1` for matching session. | `adaptor/pg_handler.c` |
| 6 | Implement `evo_sleep(ms)` — register as a SQL function in parser & catalog. Semantics: `SELECT evo_sleep(500)` → blocks for 500 ms using `platform_sleep_ms()`, returns integer 0 (success). Checks `g_query_cancelled` periodically (sleep in 50 ms chunks) so it can be interrupted by timeout. Grammar: `EVO_SLEEP '(' expr ')'` in evoparser.y. | `evolution/parser/evoparser.y`, `adaptor/catalog.c`, `adaptor/query_executor.c` |
| 7 | Implement `evo_jitter(min_ms, max_ms)` — register as SQL function. Semantics: `SELECT evo_jitter(100, 500)` → sleeps for a random duration between min_ms and max_ms using `platform_random_range() + platform_sleep_ms()`, returns the actual delay in ms. Same interruptible chunked sleep as `evo_sleep`. Grammar: `EVO_JITTER '(' expr ',' expr ')'`. | `evolution/parser/evoparser.y`, `adaptor/catalog.c`, `adaptor/query_executor.c` |
| 8 | Regenerate parser — run Bison/Flex to produce `evoparser.tab.c`, `lex.yy.c`. Wire delay functions through `query_executor.c` result pipeline (return single-row, single-column integer result). | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_timeout.py`: SET statement_timeout = 100 (100ms), run `SELECT evo_sleep(2000)` → error "statement timeout" (SQLSTATE 57014). SET statement_timeout = 0 → no timeout. `SELECT evo_sleep(50)` with timeout = 5000 → succeeds. `SELECT evo_jitter(10, 50)` → returns integer between 10-50. `SELECT evo_jitter(0, 0)` → returns 0 instantly. `evo_sleep` in WHERE: `SELECT * FROM t WHERE evo_sleep(1) = 0` → works. | `tests/test_timeout.py` |
| 10 | Run regression + full system test — Docker rebuild, all test suites pass. Manual test: `SELECT evo_jitter(500, 2000)` from psql/DBeaver, observe delay. | `tests/`, `Dockerfile` |

---

## Day 10 — INSERT...SELECT & Multi-Table DELETE

### Task 19: ⬜ INSERT INTO ... SELECT (Feature #15)

**Goal:** Implement inserting rows from a SELECT query result.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `INSERT INTO table [columns] SELECT ...` in `evoparser.y`. Set a flag `g_insertFromSelect = 1`. | `evolution/parser/evoparser.y` |
| 2 | Implement — first execute the SELECT query into a temporary ResultSet. Then loop over rows and insert each into target table. | `evolution/db/Insert.c`, `adaptor/query_executor.c` |
| 3 | Column mapping — if column list specified, map SELECT result columns to target columns. | `evolution/db/Insert.c` |
| 4 | Validate column count matches. Validate types per column. | `evolution/db/Insert.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Handle INSERT ... SELECT with WHERE, ORDER BY, LIMIT on source query. | `adaptor/query_executor.c` |
| 7 | Error handling — partial failure (some rows succeed, some fail on constraints). | `evolution/db/Insert.c` |
| 8 | Write unit tests — `tests/test_insert_select.py`: basic, with column mapping, with WHERE on source, cross-table insert, type mismatch → error. | `tests/test_insert_select.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 20: ⬜ Multi-Table DELETE (Feature #19)

**Goal:** Grammar exists for multi-table DELETE but no execution. Implement `DELETE t1 FROM t1 JOIN t2 ON ... WHERE ...`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Analyze parser `delete_list` / `table_references` rules — understand how multi-table DELETE is parsed. Identify globals set. | `evolution/parser/evoparser.y` |
| 2 | Store target table list — `g_deleteTargets[]` (which tables to delete from) vs join tables. | `evolution/db/database.h`, `evolution/parser/evoparser.y` |
| 3 | Implement — join tables (reuse JOIN engine from Task 29+), evaluate WHERE, collect keys for each target table. | `evolution/db/Delete.c` |
| 4 | Execute deletions — for each target table, delete matching rows. | `evolution/db/Delete.c` |
| 5 | Report combined affected_rows count. | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle edge cases — delete from both sides of a JOIN, self-referencing delete. | `evolution/db/Delete.c` |
| 8 | Write unit tests — `tests/test_multi_table_delete.py`: DELETE t1 FROM t1 JOIN t2, delete from both tables, verify remaining rows. | `tests/test_multi_table_delete.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 11 — Multi-Table UPDATE & ALTER TABLE ADD COLUMN

### Task 21: ⬜ Multi-Table UPDATE (Feature #20)

**Goal:** Implement `UPDATE t1 JOIN t2 ON ... SET t1.col = t2.col WHERE ...`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — multi-table UPDATE with JOIN in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Store target tables and SET assignments per table. | `evolution/db/database.h`, `evolution/parser/evoparser.y` |
| 3 | Implement — join tables, evaluate WHERE, collect matching rows from target table(s). | `evolution/db/Update.c` |
| 4 | Apply SET assignments per target table row. Handle cross-table references in SET (`SET t1.col = t2.col`). | `evolution/db/Update.c` |
| 5 | Report combined affected_rows. | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle pad-size resize for updated tables. | `evolution/db/Update.c` |
| 8 | Write unit tests — `tests/test_multi_table_update.py`: UPDATE with JOIN, cross-table SET, verify both tables. | `tests/test_multi_table_update.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 22: ⬜ ALTER TABLE — ADD COLUMN (Feature #5, Part 1)

**Goal:** No schema evolution exists. Implement `ALTER TABLE t ADD [COLUMN] col type [constraints]`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rule — `ALTER TABLE name ADD [COLUMN] column_def` in `evoparser.y`. Define `AlterTableAddColumnProcess()`. | `evolution/parser/evoparser.y` |
| 2 | Implement `AlterTableAddColumnProcess()` — update `.meta` file: append column to line 1 (names), line 3 (types), line 5 (null flags), recalculate pad size (line 2). | `evolution/db/Alter.c` (new file) |
| 3 | Migrate existing data — scan all records, append a DEFAULT value (or NULL marker) for the new column to each record. Respect new pad size. | `evolution/db/Alter.c` |
| 4 | Handle constraints — the new column can have NOT NULL (requires a DEFAULT), UNIQUE, DEFAULT, etc. | `evolution/db/Alter.c` |
| 5 | Wire into `query_executor.c` — detect `ALTER TABLE` via `is_alter_query()`, call process function. | `adaptor/query_executor.c` |
| 6 | Also handle in catalog.c if needed for intercepted queries. | `adaptor/catalog.c` |
| 7 | Update Makefiles — add `Alter.c` to evolution Makefile. | `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_alter_table.py`: add column, insert new row with new col, select old rows show NULL/default. | `tests/test_alter_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 12 — ALTER TABLE DROP & MODIFY COLUMN

### Task 23: ⬜ ALTER TABLE — DROP COLUMN (Feature #5, Part 2)

**Goal:** Implement `ALTER TABLE t DROP [COLUMN] col`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rule — `ALTER TABLE name DROP [COLUMN] name` in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Implement `AlterTableDropColumnProcess()` — find column index in `.meta` line 1. | `evolution/db/Alter.c` |
| 3 | Update `.meta` — remove column from lines 1, 3, 5, 6 (unique), 7 (default), 8 (auto-inc). Adjust PK index if needed. | `evolution/db/Alter.c` |
| 4 | Migrate data — scan all records, remove the field at dropped column index, rebuild each record. | `evolution/db/Alter.c` |
| 5 | Safety — cannot drop the last column. Cannot drop PK column (or warn). | `evolution/db/Alter.c` |
| 6 | Recalculate pad size — may shrink. Re-pad all records. | `evolution/db/Alter.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_alter_table.py` (extend): drop column, verify data intact, drop last col → error, drop PK → error. | `tests/test_alter_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 24: ⬜ ALTER TABLE — MODIFY & RENAME COLUMN (Feature #5, Part 3)

**Goal:** Implement `ALTER TABLE t MODIFY COLUMN col new_type` and `ALTER TABLE t RENAME COLUMN old TO new`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rules — MODIFY COLUMN and RENAME COLUMN in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Implement `AlterTableModifyColumnProcess()` — change type encoding in `.meta` line 3. Validate existing data is compatible. | `evolution/db/Alter.c` |
| 3 | Implement `AlterTableRenameColumnProcess()` — rename column in `.meta` line 1. | `evolution/db/Alter.c` |
| 4 | MODIFY with size change — if VARCHAR(50) → VARCHAR(100), update pad size. If shrinking, validate no data exceeds new limit. | `evolution/db/Alter.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Wire into query_executor.c. | `adaptor/query_executor.c` |
| 7 | Handle edge cases — modify PK column type, rename column referenced by constraints. | `evolution/db/Alter.c` |
| 8 | Write unit tests — `tests/test_alter_table.py` (extend): modify type, rename column, verify data survives, invalid modify → error. | `tests/test_alter_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 13 — RENAME TABLE & DROP DATABASE/SCHEMA

### Task 25: ⬜ RENAME TABLE (Feature #31)

**Goal:** Implement `RENAME TABLE old TO new` / `ALTER TABLE old RENAME TO new`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `RENAME TABLE old_name TO new_name` and `ALTER TABLE old_name RENAME TO new_name`. | `evolution/parser/evoparser.y` |
| 2 | Implement `RenameTableProcess()` — rename `.dat`, `.idx`, `.meta` files on disk. | `evolution/db/Alter.c` |
| 3 | Update any indexes referencing old table name. | `evolution/db/Alter.c` |
| 4 | Wire into catalog.c / query_executor.c. | `adaptor/catalog.c`, `adaptor/query_executor.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Handle non-existent table → error, target name already exists → error. | `evolution/db/Alter.c` |
| 7 | Update grants — rename scoped grants from old name to new name. | `evolution/db/GrantMgmt.c` |
| 8 | Write unit tests — `tests/test_rename_table.py`: rename, verify data, rename non-existent → error, rename to existing → error. | `tests/test_rename_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 26: ⬜ DROP DATABASE & DROP SCHEMA (Features #29, #30)

**Goal:** CREATE DATABASE/SCHEMA exist but DROP is missing. Implement both.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rules — `DROP DATABASE [IF EXISTS] name`, `DROP SCHEMA [IF EXISTS] name`. | `evolution/parser/evoparser.y` |
| 2 | Implement `DropDatabaseProcess(name, if_exists)` — delete the database directory and all its contents. Refuse to drop active database. | `evolution/db/DatabaseMgmt.c`, `evolution/db/database.h` |
| 3 | Implement `DropSchemaProcess(name, if_exists)` — delete schema directory within current database. Refuse to drop active schema. | `evolution/db/DatabaseMgmt.c` |
| 4 | Safety checks — cannot drop `evosql` system database. Cannot drop schema `public`. | `evolution/db/DatabaseMgmt.c` |
| 5 | Wire into catalog handler — `catalog.c` intercepts `DROP DATABASE` / `DROP SCHEMA`. | `adaptor/catalog.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Clean up grants — when database dropped, remove all grants scoped to it. | `evolution/db/GrantMgmt.c` |
| 8 | Write unit tests — `tests/test_drop_database.py`: create then drop, drop if exists, drop non-existent → error, drop active → error, drop evosql → error. | `tests/test_drop_database.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, verify directories removed. | `Dockerfile` |

---

## Day 14 — UNION & ORDER BY Expressions

### Task 27: ⬜ UNION / UNION ALL / INTERSECT / EXCEPT (Feature #4)

**Goal:** Implement set operations on query results.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rules — `select_stmt UNION [ALL] select_stmt`, same for INTERSECT and EXCEPT. | `evolution/parser/evoparser.y` |
| 2 | Implement UNION ALL — execute both queries, merge results. Column count must match. | `adaptor/query_executor.c` |
| 3 | Implement UNION (without ALL) — deduplicate rows by comparing all column values. | `adaptor/query_executor.c` |
| 4 | Implement INTERSECT — keep only rows appearing in both results. | `adaptor/query_executor.c` |
| 5 | Implement EXCEPT — keep only rows from first result not in second. | `adaptor/query_executor.c` |
| 6 | Handle column name resolution — use column names from first query. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_union.py`: UNION, UNION ALL, INTERSECT, EXCEPT, mismatched column count → error. | `tests/test_union.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 28: ⬜ ORDER BY Expression & Ordinal Position (Feature #35)

**Goal:** ORDER BY currently only accepts column names. Support expressions and ordinal positions (`ORDER BY 1`, `ORDER BY col+1`).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Extend ORDER BY parser — store expressions (not just column names). Add `ExprNode *g_orderByExprs[8]`. | `evolution/db/expression.h`, `evolution/parser/evoparser.y` |
| 2 | Support ordinal position — `ORDER BY 1` = order by first select column. Convert number to expression reference. | `evolution/parser/evoparser.y` |
| 3 | Refactor sort in `query_executor.c` — evaluate ORDER BY expressions per row using `expr_evaluate` instead of `FindColumnIndex`. | `adaptor/query_executor.c` |
| 4 | Multi-key sort — support `ORDER BY expr1 ASC, expr2 DESC`. | `adaptor/query_executor.c` |
| 5 | Sort stability — use stable sort (merge sort) for deterministic results. | `adaptor/query_executor.c` |
| 6 | Remove static `RecordEntry records[500]` — use dynamic allocation. | `evolution/db/Select.c`, `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_orderby_expr.py`: ORDER BY 1, ORDER BY col+1, ORDER BY expr DESC, multi-key. | `tests/test_orderby_expr.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 15 — JOIN (Part 1)

### Task 29: ⬜ INNER JOIN Execution (Feature #1, Part 1)

**Goal:** Grammar for JOINs exists. Implement INNER JOIN execution.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design multi-table execution — define structures: `JoinPlan { table_name, alias, join_type, on_condition }[]`. | `evolution/db/database.h`, `evolution/db/Join.c` (new) |
| 2 | Update parser — in `table_references` / `join` rules, populate `JoinPlan` instead of just `emit()`. | `evolution/parser/evoparser.y` |
| 3 | Implement `load_table_data()` — generic function to load all rows from a table into memory as arrays. | `evolution/db/Join.c` |
| 4 | Implement nested-loop INNER JOIN — for each row in left table, scan right table, evaluate ON condition using `expr_evaluate()`. | `evolution/db/Join.c` |
| 5 | Column name resolution — handle `t1.col` and `t2.col` qualified names in expressions. | `evolution/db/Join.c` |
| 6 | Wire into `query_executor.c` — detect multi-table SELECT, use join path instead of single-table `collect_select_results`. | `adaptor/query_executor.c` |
| 7 | Handle WHERE, ORDER BY, LIMIT on joined result. | `adaptor/query_executor.c` |
| 8 | Update Makefile — add `Join.c`. | `evolution/Makefile` |
| 9 | Write unit tests — `tests/test_join.py`: INNER JOIN with ON, multi-column ON, JOIN with WHERE, no matches → empty, self-join. | `tests/test_join.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 30: ⬜ LEFT / RIGHT / CROSS / NATURAL JOIN (Feature #1, Part 2)

**Goal:** Extend join engine for LEFT, RIGHT, CROSS, and NATURAL joins.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Implement LEFT JOIN — same as INNER but emit NULLs for right columns when no match. | `evolution/db/Join.c` |
| 2 | Implement RIGHT JOIN — mirror of LEFT (swap tables). | `evolution/db/Join.c` |
| 3 | Implement CROSS JOIN — cartesian product, no ON condition. | `evolution/db/Join.c` |
| 4 | Implement NATURAL JOIN — auto-detect shared column names, implicit ON condition. | `evolution/db/Join.c` |
| 5 | Handle table aliases — `FROM t1 AS a JOIN t2 AS b ON a.id = b.id`. | `evolution/db/Join.c` |
| 6 | Implement JOIN with USING clause — `JOIN t2 USING (col)`. | `evolution/db/Join.c` |
| 7 | Multi-table JOIN — support 3+ table chains. | `evolution/db/Join.c` |
| 8 | Write unit tests — `tests/test_join.py` (extend): LEFT JOIN, RIGHT JOIN, CROSS JOIN, NATURAL JOIN, 3-table join. | `tests/test_join.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, complex multi-join queries from DBeaver. | `Dockerfile` |

---

## Day 16 — Subqueries

### Task 31: ⬜ Scalar & WHERE Subqueries (Feature #2)

**Goal:** Implement subquery execution in WHERE and SELECT clauses.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `EXPR_SUBQUERY` type — the node holds a complete SQL string for recursive execution. | `evolution/db/expression.h` |
| 2 | Implement `expr_evaluate_subquery()` — call `query_execute()` recursively with fresh ResultSet. Return scalar result. | `evolution/db/expression.c`, `adaptor/query_executor.c` |
| 3 | Wire parser — subquery rules create `EXPR_SUBQUERY` nodes. | `evolution/parser/evoparser.y` |
| 4 | Implement `WHERE col IN (SELECT ...)` — evaluate inner query, collect values, convert to IN-list check. | `evolution/db/expression.c` |
| 5 | Implement scalar subquery in SELECT — `SELECT (SELECT COUNT(*) FROM t2) AS cnt`. | `adaptor/query_executor.c` |
| 6 | Handle correlated subqueries (basic) — pass outer row context into inner query. | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_subquery.py`: scalar in SELECT, WHERE IN subquery, WHERE = subquery, correlated. | `tests/test_subquery.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 32: ⬜ EXISTS & ANY/SOME/ALL Subqueries (Feature #3)

**Goal:** Implement EXISTS, NOT EXISTS, ANY/SOME/ALL subquery operators.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Implement EXISTS evaluation — execute inner query, return TRUE if any rows. | `evolution/db/expression.c` |
| 2 | Implement NOT EXISTS. | `evolution/db/expression.c` |
| 3 | Implement ANY/SOME — `WHERE col > ANY (SELECT ...)`. | `evolution/db/expression.c` |
| 4 | Implement ALL — `WHERE col > ALL (SELECT ...)`. | `evolution/db/expression.c` |
| 5 | Wire parser rules — EXISTS, ANY, SOME, ALL already have tokens. Ensure proper expression nodes. | `evolution/parser/evoparser.y` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Implement derived tables — `FROM (SELECT ...) AS sub`. | `adaptor/query_executor.c` |
| 8 | Write unit tests — `tests/test_subquery.py` (extend): EXISTS, NOT EXISTS, ANY, ALL, derived table. | `tests/test_subquery.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 17 — String Functions & Multi-arg CONCAT

### Task 33: ⬜ String Functions (Feature #48)

**Goal:** Add LEFT, RIGHT, LPAD, RPAD, REVERSE, REPEAT, INSTR, LOCATE, POSITION to expression engine.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add expression types — `EXPR_LEFT`, `EXPR_RIGHT`, `EXPR_LPAD`, `EXPR_RPAD`, `EXPR_REVERSE`, `EXPR_REPEAT`, `EXPR_INSTR`, `EXPR_LOCATE`, `EXPR_POSITION`. | `evolution/db/expression.h` |
| 2 | Add constructor functions — `expr_make_left()`, etc. | `evolution/db/expression.c` |
| 3 | Add lexer tokens — `FLEFT`, `FRIGHT`, etc. in `evolexer.l`. | `evolution/parser/evolexer.l` |
| 4 | Add parser rules — function call syntax for each. | `evolution/parser/evoparser.y` |
| 5 | Implement evaluation — LEFT(str, n), RIGHT(str, n), LPAD(str, len, pad), RPAD(str, len, pad), REVERSE(str), REPEAT(str, n), INSTR(str, substr), LOCATE(substr, str), POSITION(substr IN str). | `evolution/db/expression.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle edge cases — empty string, 0 length, negative n, NULL input. | `evolution/db/expression.c` |
| 8 | Write unit tests — `tests/test_string_functions2.py`: each function with normal + edge inputs. | `tests/test_string_functions2.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 34: ⬜ CONCAT 3+ args & || Operator (Features #45, #46)

**Goal:** Extend CONCAT to support 3+ arguments and add `||` string concatenation operator.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Extend `EXPR_CONCAT` — support variadic args via chained nodes or argument list. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 2 | Update parser — `FCONCAT '(' expr ',' expr ',' expr ... ')'` with variable arg count. | `evolution/parser/evoparser.y` |
| 3 | Implement evaluation — concatenate all arguments left to right. Handle NULLs (MySQL: NULL → NULL, PG: NULL → skip). Choose MySQL semantics. | `evolution/db/expression.c` |
| 4 | Add `||` operator — parser rule `expr '|' '|' expr` → `EXPR_CONCAT`. | `evolution/parser/evoparser.y` |
| 5 | Handle type coercion — non-string args converted to string. | `evolution/db/expression.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle CONCAT_WS (separator variant) as bonus. | `evolution/db/expression.c` |
| 8 | Write unit tests — `tests/test_concat.py`: CONCAT(a,b,c), CONCAT with NULL, ||, CONCAT_WS. | `tests/test_concat.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 18 — Math & Date Functions

### Task 35: ⬜ Math Functions (Feature #49)

**Goal:** Implement ABS, CEIL, FLOOR, ROUND, POWER, SQRT, LOG, RAND.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add expression types — `EXPR_ABS`, `EXPR_CEIL`, `EXPR_FLOOR`, `EXPR_ROUND`, `EXPR_POWER`, `EXPR_SQRT`, `EXPR_LOG`, `EXPR_RAND`. | `evolution/db/expression.h` |
| 2 | Add constructor functions. | `evolution/db/expression.c` |
| 3 | Add lexer tokens and parser rules. | `evolution/parser/evolexer.l`, `evolution/parser/evoparser.y` |
| 4 | Implement evaluation using `<math.h>`: `fabs()`, `ceil()`, `floor()`, `round()`, `pow()`, `sqrt()`, `log()`, `((double)rand()/RAND_MAX)`. | `evolution/db/expression.c` |
| 5 | Handle edge cases — SQRT of negative → NULL, LOG of 0 → NULL, ROUND with precision arg. | `evolution/db/expression.c` |
| 6 | Link with `-lm` in Makefiles if not already. | `evolution/Makefile`, `adaptor/Makefile` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_math_functions.py`: each function, negative inputs, NULL inputs, precision. | `tests/test_math_functions.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 36: ⬜ Date Functions & INTERVAL (Features #50, #43)

**Goal:** Implement NOW, DATEDIFF, DATE_FORMAT, EXTRACT, YEAR, MONTH, DAY. Wire DATE_ADD/DATE_SUB and INTERVAL evaluation.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add expression types — `EXPR_NOW`, `EXPR_DATEDIFF`, `EXPR_DATE_FORMAT`, `EXPR_EXTRACT`, `EXPR_YEAR`, `EXPR_MONTH`, `EXPR_DAY`, `EXPR_DATE_ADD`, `EXPR_DATE_SUB`. | `evolution/db/expression.h` |
| 2 | Add constructors. | `evolution/db/expression.c` |
| 3 | Add lexer tokens / parser rules. | `evolution/parser/evolexer.l`, `evolution/parser/evoparser.y` |
| 4 | Implement date parsing helpers — `parse_date()`, `parse_datetime()`. | `evolution/db/expression.c` |
| 5 | Implement evaluation — NOW(), YEAR/MONTH/DAY, DATE_ADD/SUB with INTERVAL, DATEDIFF. | `evolution/db/expression.c` |
| 6 | Implement INTERVAL evaluation — `INTERVAL 1 DAY`, `INTERVAL 3 MONTH`. | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_date_functions.py`: NOW(), YEAR('2024-01-15'), DATE_ADD, DATE_SUB, DATEDIFF, EXTRACT. | `tests/test_date_functions.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 19 — Utility Functions

### Task 37: ⬜ CAST / CONVERT (Feature #37)

**Goal:** Implement type casting: `CAST(expr AS type)`, `CONVERT(expr, type)`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `EXPR_CAST` expression type with target type info. | `evolution/db/expression.h` |
| 2 | Add constructor — `expr_make_cast(ExprNode *arg, int target_type)`. | `evolution/db/expression.c` |
| 3 | Add parser rule — `CAST '(' expr AS data_type ')'`, `CONVERT '(' expr ',' data_type ')'`. | `evolution/parser/evoparser.y` |
| 4 | Implement CAST(x AS INT) — parse string to int with error handling. | `evolution/db/expression.c` |
| 5 | Implement CAST(x AS VARCHAR) — convert numeric to string. | `evolution/db/expression.c` |
| 6 | Implement CAST(x AS DATE), CAST(x AS FLOAT), CAST(x AS BOOLEAN). | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_cast.py`: int→varchar, varchar→int, invalid cast → error, NULL cast. | `tests/test_cast.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 38: ⬜ NULLIF, IF, IFNULL (Features #38, #39)

**Goal:** Implement NULLIF(), IF(), IFNULL() functions.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add expression types — `EXPR_NULLIF`, `EXPR_IF`, `EXPR_IFNULL`. | `evolution/db/expression.h` |
| 2 | Add constructors. | `evolution/db/expression.c` |
| 3 | Add lexer/parser — `NULLIF(a, b)`, `IF(cond, then, else)`, `IFNULL(a, b)`. | `evolution/parser/evolexer.l`, `evolution/parser/evoparser.y` |
| 4 | Implement NULLIF — if a = b return NULL, else return a. | `evolution/db/expression.c` |
| 5 | Implement IF — IF(cond, then_val, else_val). Evaluate cond as boolean. | `evolution/db/expression.c` |
| 6 | Implement IFNULL — IFNULL(a, b) = if a IS NULL then b else a (same as COALESCE(a,b)). | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_utility_functions.py`: NULLIF equal/not-equal, IF true/false, IFNULL with NULL/non-NULL. | `tests/test_utility_functions.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 20 — Boolean Operators & REGEXP

### Task 39: ⬜ IS TRUE / IS FALSE / IS UNKNOWN & NULL-safe <=> (Features #42, #47)

**Goal:** Implement boolean truth-value tests and NULL-safe comparison operator.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add expression types — `EXPR_IS_TRUE`, `EXPR_IS_FALSE`, `EXPR_IS_UNKNOWN`, `EXPR_CMP_NULL_SAFE`. | `evolution/db/expression.h` |
| 2 | Add constructors. | `evolution/db/expression.c` |
| 3 | Wire parser — `expr IS TRUE`, `expr IS FALSE`, `expr IS UNKNOWN`, `expr <=> expr`. | `evolution/parser/evoparser.y` |
| 4 | Implement IS TRUE — evaluate expr; true if result is truthy and not NULL. | `evolution/db/expression.c` |
| 5 | Implement IS FALSE — true if result is falsy and not NULL. | `evolution/db/expression.c` |
| 6 | Implement IS UNKNOWN — true if result is NULL. | `evolution/db/expression.c` |
| 7 | Implement `<=>` — NULL-safe equality: `NULL <=> NULL` = true, `NULL <=> 1` = false. | `evolution/db/expression.c` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_bool_operators.py`: IS TRUE/FALSE/UNKNOWN with NULL/non-NULL, `<=>` with NULL/value combos. Run regression. | `tests/test_bool_operators.py` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 40: ⬜ REGEXP / RLIKE Evaluation (Feature #40)

**Goal:** REGEXP is parsed but not evaluated. Implement regex matching using POSIX regex.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `EXPR_REGEXP` and `EXPR_NOT_REGEXP` expression types (if not already present). | `evolution/db/expression.h` |
| 2 | Implement REGEXP evaluation using `<regex.h>` — `regcomp()`, `regexec()`. | `evolution/db/expression.c` |
| 3 | Implement NOT REGEXP. | `evolution/db/expression.c` |
| 4 | Handle regex compilation errors — invalid pattern → SQL error. | `evolution/db/expression.c` |
| 5 | Case sensitivity — default case-insensitive (MySQL), or provide REGEXP BINARY for case-sensitive. | `evolution/db/expression.c` |
| 6 | Wire parser — ensure REGEXP token produces `EXPR_REGEXP` node. | `evolution/parser/evoparser.y` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_regexp.py`: match, no match, special chars, invalid regex → error, case sensitivity. | `tests/test_regexp.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 21 — GROUP_CONCAT & SET Variables

### Task 41: ⬜ GROUP_CONCAT / STRING_AGG (Feature #44)

**Goal:** Implement GROUP_CONCAT aggregate function.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `EXPR_GROUP_CONCAT` expression type. | `evolution/db/expression.h` |
| 2 | Add constructor — with optional SEPARATOR, ORDER BY, DISTINCT. | `evolution/db/expression.c` |
| 3 | Add lexer token `FGROUP_CONCAT` / parser rule — `GROUP_CONCAT(expr [ORDER BY ...] [SEPARATOR str])`. | `evolution/parser/evolexer.l`, `evolution/parser/evoparser.y` |
| 4 | Implement evaluation in aggregate path — collect all values per group, join with separator (default `,`). | `adaptor/query_executor.c` |
| 5 | Handle DISTINCT — deduplicate values before concatenation. | `adaptor/query_executor.c` |
| 6 | Handle NULL values — skip NULLs. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_group_concat.py`: basic, with separator, with GROUP BY, with DISTINCT, NULL handling. | `tests/test_group_concat.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 42: ⬜ SET @var = ... User Variables (Feature #36)

**Goal:** Implement session-scoped user variables: `SET @name = expr`, `SELECT @name`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add per-session variable storage — hash map of `@name → string_value` in `SessionCtx`. | `adaptor/query_executor.h` |
| 2 | Intercept `SET @var = expr` in catalog.c — parse variable name and value expression. | `adaptor/catalog.c` |
| 3 | Evaluate expression and store result in session variable map. | `adaptor/catalog.c` |
| 4 | Add `EXPR_USERVAR` expression type — when `@name` appears in SELECT/WHERE, resolve from session variables. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 5 | Wire parser — USERVAR token already exists. Create `EXPR_USERVAR` node. | `evolution/parser/evoparser.y` |
| 6 | Implement in `expr_evaluate()` — look up `@name` from session context. | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_user_vars.py`: SET @x = 1, SELECT @x, SET @x = @x + 1, use in WHERE, undefined var → NULL. | `tests/test_user_vars.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 22 — ON DUPLICATE KEY UPDATE & REPLACE INTO

### Task 43: ⬜ ON DUPLICATE KEY UPDATE (Feature #32)

**Goal:** Parsed but not executed. Implement upsert semantics for MySQL-style ON DUPLICATE KEY UPDATE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Wire parser — ON DUPLICATE KEY UPDATE assignment list is already parsed. Store columns/values in `g_onDupCols[]`, `g_onDupVals[]`, `g_onDupCount`. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 2 | In `InsertProcess()` — if `db_store()` returns duplicate error and `g_onDupCount > 0`, fetch existing record. | `evolution/db/Insert.c` |
| 3 | Apply ON DUPLICATE KEY UPDATE assignments to existing record (like UPDATE SET). | `evolution/db/Insert.c` |
| 4 | Store updated record with `db_store(DB_REPLACE)`. | `evolution/db/Insert.c` |
| 5 | Report affected_rows: INSERT=1, ON DUP UPDATE=2 (MySQL convention). | `adaptor/query_executor.c` |
| 6 | Handle `VALUES(col)` function — reference the would-be-inserted value in UPDATE clause. | `evolution/db/Insert.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_on_dup_key.py`: insert new → 1, insert dup with ON DUP → update, verify updated values. | `tests/test_on_dup_key.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 44: ⬜ REPLACE INTO (Feature #33)

**Goal:** Parsed but not executed. Implement `REPLACE INTO` — delete existing then insert, or just insert.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Wire parser — REPLACE already has a token. Set `g_isReplace = 1` flag during parsing. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 2 | In `InsertProcess()` — if `g_isReplace` and PK exists, delete old record first. | `evolution/db/Insert.c` |
| 3 | Insert new record. | `evolution/db/Insert.c` |
| 4 | Report affected_rows: new=1, replaced=2. | `adaptor/query_executor.c` |
| 5 | Handle all constraints on the new record (NOT NULL, UNIQUE, FK, CHECK). | `evolution/db/Insert.c` |
| 6 | Handle REPLACE with column list mapping. | `evolution/db/Insert.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_replace.py`: REPLACE new row, REPLACE existing row, verify old data gone. | `tests/test_replace.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 23 — CREATE TABLE...SELECT & EXPLAIN

### Task 45: ⬜ CREATE TABLE ... SELECT (Feature #34)

**Goal:** Parsed but not executed. Implement creating a table from a SELECT query result.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Wire parser — detect `CREATE TABLE name AS SELECT ...` or `CREATE TABLE name SELECT ...`. Set `g_createTableFromSelect = 1`. | `evolution/parser/evoparser.y` |
| 2 | Execute the SELECT query into a temporary ResultSet. | `adaptor/query_executor.c` |
| 3 | Infer column definitions from ResultSet — column names, types, sizes. | `adaptor/query_executor.c` |
| 4 | Create the table with inferred schema (call `CreateTableProcess()` logic). | `evolution/db/Create.c` |
| 5 | Insert all result rows into the new table. | `evolution/db/Insert.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle IF NOT EXISTS, TEMPORARY table variants. | `evolution/db/Create.c` |
| 8 | Write unit tests — `tests/test_create_table_select.py`: basic, with WHERE, verify schema, verify data. | `tests/test_create_table_select.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 46: ⬜ EXPLAIN / EXPLAIN ANALYZE (Feature #28)

**Goal:** Show query execution plan.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `EXPLAIN select_stmt`, `EXPLAIN ANALYZE select_stmt`. | `evolution/parser/evoparser.y` |
| 2 | Intercept in catalog.c — detect `EXPLAIN` prefix, extract inner query. | `adaptor/catalog.c` |
| 3 | Implement plan generation — for single table: `Seq Scan on tablename`, estimated rows (count records), filter condition. | `adaptor/catalog.c` |
| 4 | For JOIN queries — show `Nested Loop`, both table names, join condition. | `adaptor/catalog.c` |
| 5 | EXPLAIN ANALYZE — execute the query, add timing info and actual row counts. | `adaptor/catalog.c` |
| 6 | Output format — return as ResultSet with single TEXT column "QUERY PLAN". | `adaptor/catalog.c` |
| 7 | Regenerate parser (if needed). | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_explain.py`: EXPLAIN SELECT, EXPLAIN with WHERE, EXPLAIN with JOIN, EXPLAIN ANALYZE. | `tests/test_explain.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, verify in DBeaver. | `Dockerfile` |

---

## Day 24 — Views & Prepared Statements

### Task 47: ⬜ Views — CREATE VIEW / DROP VIEW (Feature #21)

**Goal:** Implement basic views as stored SELECT queries.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design storage — `root/evosql/public/evo_views` file with format `viewname:SELECT query`. | Design |
| 2 | Add grammar — `CREATE [OR REPLACE] VIEW name AS select_stmt`, `DROP VIEW [IF EXISTS] name`. | `evolution/parser/evoparser.y` |
| 3 | Implement `CreateViewProcess()` — store view name + SQL text. Validate inner query. | `evolution/db/View.c` (new) |
| 4 | Implement `DropViewProcess()` — remove from storage. | `evolution/db/View.c` |
| 5 | Implement view expansion — when SELECT references a view name, replace with stored subquery. | `adaptor/query_executor.c` |
| 6 | Wire into catalog.c. Add to `SHOW TABLES` / information_schema output. | `adaptor/catalog.c` |
| 7 | Update Makefile — add `View.c`. | `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_views.py`: CREATE VIEW, SELECT from view, DROP VIEW, view on view. | `tests/test_views.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, verify in DBeaver. | `Dockerfile` |

---

### Task 48: ⬜ Prepared Statements (Feature #25)

**Goal:** PG wire protocol extended query has stubs. Implement Parse/Bind/Describe/Execute.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Implement Parse message handler — store named statement with query text and parameter types. | `adaptor/pg_protocol.c` |
| 2 | Implement Bind message handler — bind parameter values, substitute `$1`, `$2`, etc. | `adaptor/pg_protocol.c` |
| 3 | Implement Describe message handler — return parameter descriptions and row description. | `adaptor/pg_protocol.c` |
| 4 | Implement Execute message handler — run the bound statement via `query_execute()`. | `adaptor/pg_protocol.c` |
| 5 | Statement cache — store up to 64 named statements per session in `SessionCtx`. | `adaptor/query_executor.h`, `adaptor/pg_protocol.c` |
| 6 | Implement Close message — deallocate a prepared statement. | `adaptor/pg_protocol.c` |
| 7 | Parameter type inference — for `$1` in `WHERE id = $1`, infer type from column metadata. | `adaptor/pg_protocol.c` |
| 8 | Write unit tests — `tests/test_prepared.py`: prepare + execute, multiple params, close, unnamed statement. | `tests/test_prepared.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, DBeaver prepared statement test. | `Dockerfile` |

---

## Day 25 — Window Functions & CTEs

### Task 49: ⬜ Window Functions (Feature #26)

**Goal:** Implement ROW_NUMBER(), RANK(), DENSE_RANK() with OVER (PARTITION BY ... ORDER BY ...).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add expression types — `EXPR_ROW_NUMBER`, `EXPR_RANK`, `EXPR_DENSE_RANK`, `EXPR_OVER`. | `evolution/db/expression.h` |
| 2 | Add grammar — `ROW_NUMBER() OVER (PARTITION BY expr ORDER BY expr)`. | `evolution/parser/evoparser.y`, `evolution/parser/evolexer.l` |
| 3 | Implement partitioning — after collecting all rows, group by partition key. | `adaptor/query_executor.c` |
| 4 | Implement ROW_NUMBER — sequential number within each partition per ORDER BY. | `adaptor/query_executor.c` |
| 5 | Implement RANK — same value gets same rank, with gaps. | `adaptor/query_executor.c` |
| 6 | Implement DENSE_RANK — same value gets same rank, no gaps. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_window.py`: ROW_NUMBER, RANK, DENSE_RANK, PARTITION BY, ORDER BY within window. | `tests/test_window.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 50: ⬜ CTEs — WITH ... AS (Feature #27)

**Goal:** Implement Common Table Expressions.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `WITH name AS (select_stmt) select_stmt`. Multiple CTEs. | `evolution/parser/evoparser.y` |
| 2 | Design runtime — execute CTE query into temporary in-memory table, register name. | `adaptor/query_executor.c` |
| 3 | Implement CTE storage — name → ResultSet map for query scope. | `adaptor/query_executor.c` |
| 4 | Implement CTE resolution — when main query references CTE name, load from memory. | `adaptor/query_executor.c` |
| 5 | Multiple CTEs — `WITH a AS (...), b AS (...) SELECT ...`. Later CTEs can reference earlier ones. | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Clean up — destroy CTE ResultSets after main query completes. | `adaptor/query_executor.c` |
| 8 | Write unit tests — `tests/test_cte.py`: single CTE, multiple CTEs, CTE with JOIN, CTE with WHERE. | `tests/test_cte.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 26 — Stored Procedures & Triggers

### Task 51: ⬜ Stored Procedures / Functions (Feature #22)

**Goal:** Implement basic stored procedure support: CREATE PROCEDURE, CALL, DROP PROCEDURE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design storage — `evo_procedures` system file with `name:param_list:body_sql`. | Design |
| 2 | Add grammar — `CREATE PROCEDURE name (params) BEGIN ... END`, `CALL name(args)`, `DROP PROCEDURE name`. | `evolution/parser/evoparser.y` |
| 3 | Implement `CreateProcedureProcess()` — validate and store procedure definition. | `evolution/db/Procedure.c` (new) |
| 4 | Implement `CallProcedureProcess()` — look up stored SQL, bind parameters, execute sequentially. | `evolution/db/Procedure.c` |
| 5 | Implement basic control flow — `IF ... THEN ... ELSE ... END IF`, `WHILE ... DO ... END WHILE`. | `evolution/db/Procedure.c` |
| 6 | Implement `DECLARE var type; SET var = expr;` — local variables within procedure. | `evolution/db/Procedure.c` |
| 7 | Wire into catalog.c — intercept CREATE/DROP/CALL PROCEDURE. Update Makefile. | `adaptor/catalog.c`, `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_procedures.py`: CREATE, CALL with params, DROP, procedure with IF, procedure with WHILE. | `tests/test_procedures.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 52: ⬜ Triggers (Feature #23)

**Goal:** Implement basic triggers: BEFORE/AFTER INSERT/UPDATE/DELETE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design storage — `evo_triggers` file: `name:table:timing:event:body_sql`. | Design |
| 2 | Add grammar — `CREATE TRIGGER name BEFORE|AFTER INSERT|UPDATE|DELETE ON table FOR EACH ROW body`. | `evolution/parser/evoparser.y` |
| 3 | Implement `CreateTriggerProcess()` — store trigger definition. | `evolution/db/Trigger.c` (new) |
| 4 | Implement trigger firing — in `InsertProcess()`, before/after insert, look up triggers for table and execute. | `evolution/db/Insert.c`, `evolution/db/Trigger.c` |
| 5 | Wire into UPDATE and DELETE — fire BEFORE/AFTER triggers. | `evolution/db/Update.c`, `evolution/db/Delete.c` |
| 6 | Implement OLD/NEW row references — `NEW.col` (INSERT/UPDATE), `OLD.col` (UPDATE/DELETE). | `evolution/db/Trigger.c` |
| 7 | Implement `DROP TRIGGER name`. Wire into catalog.c. Update Makefile. | `adaptor/catalog.c`, `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_triggers.py`: BEFORE INSERT, AFTER INSERT, BEFORE UPDATE, OLD/NEW references. | `tests/test_triggers.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 27 — Cursors & RETURNING

### Task 53: ⬜ Cursors (Feature #24)

**Goal:** Implement server-side cursors: DECLARE, OPEN, FETCH, CLOSE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — per-session cursor storage in `SessionCtx`: `name → (query, result_set, position)`. | `adaptor/query_executor.h` |
| 2 | Add grammar — `DECLARE name CURSOR FOR select_stmt`, `OPEN name`, `FETCH name`, `CLOSE name`. | `evolution/parser/evoparser.y` |
| 3 | Implement DECLARE — store query text associated with cursor name. | `adaptor/query_executor.c` |
| 4 | Implement OPEN — execute the stored query, cache ResultSet. Position = 0. | `adaptor/query_executor.c` |
| 5 | Implement FETCH — return next row(s) from cached ResultSet. Advance position. | `adaptor/query_executor.c` |
| 6 | Implement CLOSE — release cursor resources. | `adaptor/query_executor.c` |
| 7 | Wire into catalog.c. Regenerate parser. | `adaptor/catalog.c`, `evolution/parser/` |
| 8 | Write unit tests — `tests/test_cursors.py`: DECLARE, OPEN, FETCH one-by-one, FETCH after end, CLOSE. | `tests/test_cursors.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 54: ⬜ RETURNING Clause (Feature #56)

**Goal:** Implement `INSERT/UPDATE/DELETE ... RETURNING *` / `RETURNING col1, col2`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `RETURNING select_expr_list` after INSERT/UPDATE/DELETE. | `evolution/parser/evoparser.y` |
| 2 | Store RETURNING expressions — `g_returningExprs[]`, `g_returningCount`. | `evolution/db/expression.h` |
| 3 | Implement for INSERT — after insert, return the inserted row as a SELECT result. | `adaptor/query_executor.c` |
| 4 | Implement for UPDATE — return updated rows. | `adaptor/query_executor.c` |
| 5 | Implement for DELETE — return deleted rows (capture before removal). | `adaptor/query_executor.c` |
| 6 | Handle RETURNING * — return all columns. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_returning.py`: INSERT RETURNING *, UPDATE RETURNING col, DELETE RETURNING *. | `tests/test_returning.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 28 — SELECT INTO & Roles

### Task 55: ⬜ SELECT INTO (Feature #69)

**Goal:** Implement `SELECT col1, col2 INTO new_table FROM old_table WHERE ...`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `SELECT ... INTO table_name FROM ...` in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Detect SELECT INTO — set flag `g_selectIntoTable`. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 3 | Execute SELECT query normally into ResultSet. | `adaptor/query_executor.c` |
| 4 | Infer table schema from ResultSet columns. Create new table. | `adaptor/query_executor.c`, `evolution/db/Create.c` |
| 5 | Insert all result rows into new table. | `adaptor/query_executor.c` |
| 6 | Handle IF table already exists → error. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_select_into.py`: basic, with WHERE, verify schema matches, existing table → error. | `tests/test_select_into.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 56: ⬜ Roles (Feature #65)

**Goal:** Implement role-based access control. Users can be assigned to roles, roles can have privileges.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `CREATE ROLE name`, `DROP ROLE name`, `GRANT role TO user`, `REVOKE role FROM user`. | `evolution/parser/evoparser.y` |
| 2 | Extend user storage — role membership in `evo_users` or separate `evo_roles` file. | `evolution/db/UserMgmt.c` |
| 3 | Implement `CreateRoleProcess()`, `DropRoleProcess()` — roles are like users without login. | `evolution/db/UserMgmt.c` |
| 4 | Implement `GrantRoleToUser()`, `RevokeRoleFromUser()`. | `evolution/db/GrantMgmt.c` |
| 5 | Modify `CheckPrivilege()` — also check all roles the user belongs to. Inherit privileges. | `evolution/db/GrantMgmt.c` |
| 6 | Wire into catalog.c — handle CREATE/DROP ROLE, GRANT/REVOKE role. | `adaptor/catalog.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_roles.py`: create role, grant priv to role, grant role to user, user inherits, revoke role. | `tests/test_roles.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 29 — Dynamic Allocation & Semicolon Safety

### Task 57: ⬜ Dynamic Array Allocation (Storage Engine Fix)

**Goal:** Remove all static array caps. Use dynamic allocation throughout.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Audit all static arrays — find every `[200]`, `[500]`, `[64]` for records/rows. | All C files |
| 2 | Replace `RecordEntry records[500]` in `Select.c` with `malloc/realloc`. | `evolution/db/Select.c` |
| 3 | Replace `keys[200]`/`records[200]` in `Update.c`. | `evolution/db/Update.c` |
| 4 | Make `rs->rows` in ResultSet a dynamically growing array — remove `MAX_ROWS`. | `adaptor/result.h`, `adaptor/result.c` |
| 5 | Make `rs->columns` dynamic — remove `MAX_COLUMNS`. | `adaptor/result.h`, `adaptor/result.c` |
| 6 | Update all consumers. | `adaptor/query_executor.c`, `adaptor/catalog.c` |
| 7 | Memory cleanup — ensure all `malloc`'d memory is `free`'d. No leaks. | All files |
| 8 | Stress test — insert 10,000 rows, SELECT all, ORDER BY, GROUP BY. | `tests/test_stress.py` (new) |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, memory check with Valgrind. | `Dockerfile` |

---

### Task 58: ⬜ Semicolon-Safe Storage (Storage Engine Fix)

**Goal:** Semicolons in data corrupt records. Fix with proper escaping.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Choose encoding — escape `;` as `\;` and `\` as `\\`. Or switch delimiter to `\x1F`. | Design |
| 2 | Implement `encode_field()` — escape before writing. | `evolution/db/Insert.c`, `evolution/db/Update.c` |
| 3 | Implement `decode_field()` — unescape when reading. | `evolution/db/Select.c`, `adaptor/query_executor.c` |
| 4 | Apply encoding in `InsertProcess()`. | `evolution/db/Insert.c` |
| 5 | Apply decoding in `collect_select_results()`. | `adaptor/query_executor.c` |
| 6 | Apply in `UpdateProcess()`. | `evolution/db/Update.c` |
| 7 | Migration — handle old data format gracefully. | `evolution/db/Select.c` |
| 8 | Write unit tests — `tests/test_semicolon.py`: insert data with `;`, `\`, special chars, verify retrieval, WHERE filtering. | `tests/test_semicolon.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + DBeaver with semicolon data. | `Dockerfile` |

---

## Day 30 — JSON & Sequences

### Task 59: ⬜ JSON / JSONB Support (Feature #51)

**Goal:** Basic JSON storage and query functions.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add JSON data type — type encoding family 23 (JSON). Stored as text, validated on insert. | `evolution/db/Create.c`, `evolution/parser/evoparser.y` |
| 2 | Implement JSON validation — basic recursive descent parser for well-formed JSON. | `evolution/db/Json.c` (new) |
| 3 | Implement `->` operator — `col->'key'` returns JSON value. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 4 | Implement `->>` operator — `col->>'key'` returns text value. | `evolution/db/expression.c` |
| 5 | Implement `json_extract_path()`. | `evolution/db/Json.c` |
| 6 | Add lexer/parser tokens for `->`, `->>`. | `evolution/parser/evolexer.l`, `evolution/parser/evoparser.y` |
| 7 | Update Makefile. | `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_json.py`: insert JSON, ->, ->>, nested, invalid JSON → error. | `tests/test_json.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 60: ⬜ Sequences (Feature #55)

**Goal:** Implement PostgreSQL-style CREATE SEQUENCE / NEXTVAL / CURRVAL.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `CREATE SEQUENCE name [START n] [INCREMENT n]`, `DROP SEQUENCE`, `NEXTVAL('name')`, `CURRVAL('name')`. | `evolution/parser/evoparser.y` |
| 2 | Implement storage — system file `evo_sequences` with `name:current:increment:min:max`. | `evolution/db/Sequence.c` (new) |
| 3 | Implement `NEXTVAL()` — atomic increment and return. | `evolution/db/Sequence.c` |
| 4 | Implement `CURRVAL()` — return last value for this session. | `evolution/db/Sequence.c` |
| 5 | Wire as expression — `EXPR_NEXTVAL`, `EXPR_CURRVAL` types. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 6 | Wire into catalog.c. Update Makefile. | `adaptor/catalog.c`, `evolution/Makefile` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_sequence.py`: create, nextval ×5, currval, drop, nextval on dropped → error. | `tests/test_sequence.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 31 — UPSERT & COPY

### Task 61: ⬜ UPSERT — INSERT ... ON CONFLICT (Feature #57)

**Goal:** Implement PostgreSQL-style upsert: `INSERT ... ON CONFLICT (col) DO UPDATE SET ...` / `DO NOTHING`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `ON CONFLICT (column) DO UPDATE SET ...` / `DO NOTHING`. | `evolution/parser/evoparser.y` |
| 2 | Store conflict target and action — `g_onConflictCol`, `g_onConflictAction`, SET assignments. | `evolution/db/database.h`, `evolution/parser/evoparser.y` |
| 3 | In `InsertProcess()` — on PK conflict, if `DO NOTHING`, silently skip. If `DO UPDATE`, apply SET. | `evolution/db/Insert.c` |
| 4 | Handle `EXCLUDED` pseudo-table — reference would-be-inserted values in SET clause. | `evolution/db/Insert.c` |
| 5 | Report correct affected_rows. | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle ON CONFLICT on UNIQUE columns (not just PK). | `evolution/db/Insert.c` |
| 8 | Write unit tests — `tests/test_on_conflict.py`: DO NOTHING, DO UPDATE, EXCLUDED reference, UNIQUE conflict. | `tests/test_on_conflict.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 62: ⬜ COPY Command (Feature #61)

**Goal:** Implement PostgreSQL-compatible COPY for bulk import/export.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `COPY table FROM 'file'`, `COPY table TO 'file'`, `COPY (SELECT ...) TO 'file'`. | `evolution/parser/evoparser.y` |
| 2 | Intercept in catalog.c. | `adaptor/catalog.c` |
| 3 | Implement COPY FROM — read CSV file, parse fields, insert into table. | `evolution/db/Copy.c` (new) |
| 4 | Implement COPY TO — SELECT all, write as CSV. | `evolution/db/Copy.c` |
| 5 | Support PG wire protocol COPY sub-protocol — CopyInResponse, CopyData, CopyDone. | `adaptor/pg_protocol.c` |
| 6 | Handle options — DELIMITER, HEADER, NULL string. | `evolution/db/Copy.c` |
| 7 | Update Makefile. | `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_copy.py`: COPY FROM csv, COPY TO csv, with header, large file (1000 rows). | `tests/test_copy.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, psql `\copy` test. | `Dockerfile` |

---

## Day 32 — Full-Text Search & Materialized Views

### Task 63: ⬜ Full-Text Search (Feature #52)

**Goal:** Basic full-text search: text indexing and MATCH AGAINST / @@ syntax.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — inverted index: `word → [(table, key, col, position), ...]` stored in `.ftindex` files. | Design |
| 2 | Add grammar — `FULLTEXT INDEX`, `MATCH (col) AGAINST ('text')` / PG-style `col @@ 'query'`. | `evolution/parser/evoparser.y` |
| 3 | Implement tokenizer — split text into lowercase words, remove stop words. | `evolution/db/FullText.c` (new) |
| 4 | Build inverted index on INSERT — tokenize text columns, store word→record mappings. | `evolution/db/FullText.c` |
| 5 | Implement MATCH AGAINST — look up search terms in index, rank results by frequency. | `evolution/db/FullText.c` |
| 6 | Maintain index on UPDATE/DELETE. | `evolution/db/FullText.c` |
| 7 | Update Makefile. Regenerate parser. | `evolution/Makefile`, `evolution/parser/` |
| 8 | Write unit tests — `tests/test_fulltext.py`: create index, search single word, multi-word, no match, ranking. | `tests/test_fulltext.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 64: ⬜ Materialized Views (Feature #58)

**Goal:** Implement materialized views: CREATE MATERIALIZED VIEW, REFRESH, DROP.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — materialized view = real table + stored query. Stored in `evo_matviews` with `name:query`. | Design |
| 2 | Add grammar — `CREATE MATERIALIZED VIEW name AS select_stmt`, `REFRESH MATERIALIZED VIEW name`, `DROP MATERIALIZED VIEW name`. | `evolution/parser/evoparser.y` |
| 3 | Implement CREATE — execute query, store results as a real table. Also store query definition. | `evolution/db/View.c` |
| 4 | Implement REFRESH — drop and recreate table data from stored query. | `evolution/db/View.c` |
| 5 | Implement DROP — remove table and definition. | `evolution/db/View.c` |
| 6 | SELECT from materialized view — same as table (already works). | No change needed |
| 7 | Wire into catalog.c. Regenerate parser. | `adaptor/catalog.c`, `evolution/parser/` |
| 8 | Write unit tests — `tests/test_matviews.py`: CREATE, SELECT, REFRESH after source change, DROP. | `tests/test_matviews.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 33 — Table Partitioning & Lateral Joins

### Task 65: ⬜ Table Partitioning (Feature #53)

**Goal:** Basic RANGE/LIST partitioning.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — partition = separate physical table per range/list. Master table routes to partitions. | Design |
| 2 | Add grammar — `CREATE TABLE t (...) PARTITION BY RANGE (col)`, `CREATE TABLE t_p1 PARTITION OF t FOR VALUES FROM (1) TO (100)`. | `evolution/parser/evoparser.y` |
| 3 | Store partition metadata — in master `.meta`: partition column, type (RANGE/LIST), child table names and ranges. | `evolution/db/Create.c` |
| 4 | Route INSERT — based on partition column value, insert into correct child table. | `evolution/db/Insert.c` |
| 5 | Route SELECT — scan relevant partitions based on WHERE clause (partition pruning). | `adaptor/query_executor.c` |
| 6 | Route UPDATE/DELETE — find correct partition. | `evolution/db/Update.c`, `evolution/db/Delete.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_partition.py`: create partitioned table, insert into each partition, SELECT with pruning. | `tests/test_partition.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 66: ⬜ Lateral Joins (Feature #59)

**Goal:** Implement LATERAL subquery in FROM clause.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `FROM t1, LATERAL (SELECT ... WHERE ... t1.col ...) AS sub`. | `evolution/parser/evoparser.y` |
| 2 | Implement — for each row of outer table, evaluate lateral subquery with outer row context. | `evolution/db/Join.c` |
| 3 | Merge outer row + lateral result columns. | `evolution/db/Join.c` |
| 4 | Handle LATERAL with JOIN syntax — `JOIN LATERAL (subquery) ON true`. | `evolution/db/Join.c` |
| 5 | Column resolution — lateral subquery can reference outer table columns. | `evolution/db/Join.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle empty lateral result — if no rows, omit outer row (INNER) or NULL-pad (LEFT). | `evolution/db/Join.c` |
| 8 | Write unit tests — `tests/test_lateral.py`: basic LATERAL, with JOIN, empty result, column reference. | `tests/test_lateral.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 34 — Array Type & LISTEN/NOTIFY

### Task 67: ⬜ Array Data Type (Feature #60)

**Goal:** Implement PostgreSQL-style array columns: `col INT[]`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add array type encoding — type family 25 (ARRAY), base type stored in sub-encoding. | `evolution/db/Create.c` |
| 2 | Add grammar — `data_type '['']'`, array literals `ARRAY[1,2,3]` or `'{1,2,3}'`. | `evolution/parser/evoparser.y` |
| 3 | Store arrays as delimited strings internally (e.g. `{1,2,3}`). | `evolution/db/Insert.c` |
| 4 | Implement array access — `col[1]` → extract element. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 5 | Implement `ANY(array)` — `WHERE 5 = ANY(col)`. | `evolution/db/expression.c` |
| 6 | Implement `array_length()`, `unnest()`. | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_array.py`: create table with array, insert, select, array access, ANY. | `tests/test_array.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 68: ⬜ LISTEN / NOTIFY (Feature #62)

**Goal:** Implement PostgreSQL-style asynchronous notifications.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — global channel registry: `channel_name → [list of listening socket FDs]`. | Design |
| 2 | Implement `LISTEN channel` — register current connection on channel. | `adaptor/pg_protocol.c` |
| 3 | Implement `NOTIFY channel [, 'payload']` — send notification to all listeners. | `adaptor/pg_protocol.c` |
| 4 | Implement PG async notification message — NotificationResponse ('A') message format. | `adaptor/pg_protocol.c` |
| 5 | Implement `UNLISTEN channel` / `UNLISTEN *`. | `adaptor/pg_protocol.c` |
| 6 | Thread safety — channel registry must be thread-safe (mutex). | `adaptor/pg_protocol.c` |
| 7 | Wire into catalog.c. | `adaptor/catalog.c` |
| 8 | Write unit tests — `tests/test_listen_notify.py`: LISTEN, NOTIFY from another connection, UNLISTEN, payload. | `tests/test_listen_notify.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, two psql sessions. | `Dockerfile` |

---

## Day 35 — Table Inheritance & Row-Level Security

### Task 69: ⬜ Table Inheritance (Feature #63)

**Goal:** Implement PostgreSQL-style table inheritance.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `CREATE TABLE child (...) INHERITS (parent)`. | `evolution/parser/evoparser.y` |
| 2 | Store inheritance metadata — in child `.meta`: parent table name. | `evolution/db/Create.c` |
| 3 | Implement inheritance — child table has all parent columns plus its own. | `evolution/db/Create.c` |
| 4 | SELECT on parent — also return rows from child tables. | `adaptor/query_executor.c` |
| 5 | INSERT on child — validate parent + child constraints. | `evolution/db/Insert.c` |
| 6 | `ONLY` keyword — `SELECT * FROM ONLY parent` excludes child rows. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_inheritance.py`: create parent+child, insert into child, select from parent includes child, ONLY. | `tests/test_inheritance.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 70: ⬜ Row-Level Security (Feature #64)

**Goal:** Implement RLS policies that filter rows based on current user.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `ALTER TABLE t ENABLE ROW LEVEL SECURITY`, `CREATE POLICY name ON table USING (expr)`. | `evolution/parser/evoparser.y` |
| 2 | Store RLS policies — in `.meta` or separate file: `policy_name:table:command:using_expr:check_expr`. | `evolution/db/Create.c` |
| 3 | Implement policy enforcement — on SELECT, append policy USING expression to WHERE clause. | `adaptor/query_executor.c` |
| 4 | Implement for INSERT — evaluate policy CHECK expression against new row. | `adaptor/query_executor.c` |
| 5 | Implement for UPDATE/DELETE — evaluate USING for existing rows, CHECK for new rows. | `adaptor/query_executor.c` |
| 6 | `CURRENT_USER` function — return session username for policy expressions. | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_rls.py`: create policy, user A sees own rows only, user B sees own rows, superuser sees all. | `tests/test_rls.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 36 — WAL & File Locking

### Task 71: ⬜ WAL / Crash Recovery (Feature #66)

**Goal:** Implement basic Write-Ahead Log for crash recovery.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design WAL format — append-only log: `[LSN][type][table][key][data_len][data]`. Types: INSERT, UPDATE, DELETE, COMMIT, CHECKPOINT. | Design |
| 2 | Implement WAL writer — `wal_append()`. Append to `root/wal/wal.log`. Use `fsync()`. | `evolution/db/Wal.c` (new) |
| 3 | Wire INSERT — before `db_store()`, write WAL record. | `evolution/db/Insert.c` |
| 4 | Wire UPDATE — before `db_store(DB_REPLACE)`, write WAL record. | `evolution/db/Update.c` |
| 5 | Wire DELETE — before `db_delete()`, write WAL record. | `evolution/db/Delete.c` |
| 6 | Implement recovery — on startup, read WAL from last checkpoint, replay. | `evolution/db/Wal.c` |
| 7 | Implement checkpoint — flush data files, truncate WAL. | `evolution/db/Wal.c` |
| 8 | Update Makefile. | `evolution/Makefile` |
| 9 | Write unit tests — `tests/test_wal.py`: insert + simulate crash + recovery, checkpoint + recovery. | `tests/test_wal.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 72: ⬜ Concurrent Write Safety / File Locking (Feature #67)

**Goal:** Replace global mutex with per-table file-level locking.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — `flock()` on `.dat` files. Reads → shared lock. Writes → exclusive lock. | Design |
| 2 | Implement `table_lock_shared()` / `table_lock_exclusive()` / `table_unlock()`. | `evolution/db/Lock.c` (new) |
| 3 | Wire into SELECT — shared lock during read. | `evolution/db/Select.c`, `adaptor/query_executor.c` |
| 4 | Wire into INSERT — exclusive lock during write. | `evolution/db/Insert.c` |
| 5 | Wire into UPDATE/DELETE — exclusive lock. | `evolution/db/Update.c`, `evolution/db/Delete.c` |
| 6 | Deadlock prevention — lock tables in alphabetical order for multi-table ops. | `evolution/db/Lock.c` |
| 7 | Timeout — lock not acquired within 5s → error. | `evolution/db/Lock.c` |
| 8 | Update Makefile. Concurrent stress test. | `evolution/Makefile`, `tests/test_concurrent.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, multi-client stress. | `Dockerfile` |

---

## Day 37 — Connection Pooling & Replication

### Task 73: ⬜ Connection Pooling (Feature #68)

**Goal:** Implement server-side connection pooling to reuse threads/connections.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — pre-create a pool of N worker threads. Incoming connections assigned to idle workers. | Design |
| 2 | Implement thread pool — `pool_init(max_workers)`, `pool_assign(client_fd)`. | `adaptor/pg_protocol.c` |
| 3 | Worker lifecycle — after client disconnects, worker returns to pool instead of thread exit. | `adaptor/pg_protocol.c` |
| 4 | Session cleanup — reset `SessionCtx` when connection is returned to pool. | `adaptor/query_executor.c` |
| 5 | Pool sizing — configurable via `EVOSQL_POOL_SIZE` env var (default 20). | `adaptor/pg_protocol.c` |
| 6 | Queue management — if all workers busy, queue incoming connections (up to backlog limit). | `adaptor/pg_protocol.c` |
| 7 | Graceful shutdown — drain pool on SIGTERM. | `adaptor/pg_protocol.c` |
| 8 | Write unit tests — `tests/test_pool.py`: rapid connect/disconnect ×100, concurrent queries, pool exhaustion. | `tests/test_pool.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, stress test with 50 concurrent clients. | `Dockerfile` |

---

### Task 74: ⬜ Replication (Feature #54)

**Goal:** Basic primary→replica streaming replication.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — primary streams WAL records to replica over TCP. Replica replays WAL to stay in sync. | Design |
| 2 | Add configuration — `EVOSQL_REPLICATION_ROLE=primary|replica`, `EVOSQL_PRIMARY_HOST`, `EVOSQL_PRIMARY_PORT`. | `adaptor/pg_protocol.c` |
| 3 | Implement WAL sender — on primary, stream new WAL entries to connected replicas. | `evolution/db/Replication.c` (new) |
| 4 | Implement WAL receiver — on replica, connect to primary, receive and replay WAL entries. | `evolution/db/Replication.c` |
| 5 | Read-only mode for replica — reject writes on replica. | `adaptor/query_executor.c` |
| 6 | Replication lag monitoring — track LSN difference between primary and replica. | `evolution/db/Replication.c` |
| 7 | Update Makefile. | `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_replication.py`: write on primary → appears on replica, write on replica → error, lag check. | `tests/test_replication.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker Compose with primary + replica containers. | `docker-compose.yml`, `Dockerfile` |

---

## Day 38 — Final Task

### Task 75: ⬜ Comprehensive Integration & Hardening

**Goal:** Final sweep: all features integrated, edge cases handled, full test suite green. Profile hot paths and evaluate JIT compilation need.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Run ALL test suites — all 75+ test files must pass. Fix any failures. | `tests/` |
| 2 | Cross-feature integration tests — e.g. JOIN + subquery + UNION + ORDER BY + LIMIT in one query. | `tests/test_integration.py` (new) |
| 3 | DBeaver full compatibility test — connect, browse tables, run queries, use prepared statements. | Manual |
| 4 | psql full compatibility test — all SQL features via psql client. | Manual |
| 5 | Performance benchmarks — 10K row table: SELECT, JOIN, GROUP BY, ORDER BY timing. | `tests/test_benchmark.py` (new) |
| 6 | **JIT evaluation (Feature #78)** — Profile expression evaluation & tuple deform hot paths with `perf`/`gprof`. If `evaluate_expr()` or scan loops consume >30% CPU on 100K+ row queries, evaluate lightweight JIT approach (SLJIT/AsmJIT-style native codegen for expressions). Document findings in `docs/jit_evaluation.md`. Decision: implement, defer, or skip. | `docs/jit_evaluation.md` (new) |
| 7 | Memory leak audit — run Valgrind on full test suite, fix any leaks. | `Dockerfile` |
| 8 | Error message audit — ensure all error messages follow PostgreSQL error code format (SQLSTATE). | All files |
| 9 | Update `features.md` — mark all features as ✅. | `features.md` |
| 10 | Update `README.md` — final documentation with all features, benchmarks, known limitations. | `README.md` |
| 11 | Tag release — `git tag v2.0.0`, update CHANGELOG. | Git |

---

## Feature → Task Cross-Reference

| Feature # | Feature Name | Task # |
|-----------|-------------|--------|
| 1 | JOIN (INNER, LEFT, RIGHT, CROSS, NATURAL) | 29, 30 |
| 2 | Subqueries (scalar, WHERE) | 31 |
| 3 | EXISTS / ANY / SOME / ALL | 32 |
| 4 | UNION / UNION ALL / INTERSECT / EXCEPT | 27 |
| 5 | ALTER TABLE (ADD / DROP / MODIFY / RENAME) | 22, 23, 24 |
| 6 | FOREIGN KEY constraints | 10 |
| 7 | CHECK constraint | 9 |
| 8 | DEFAULT value enforcement | 6 |
| 9 | AUTO_INCREMENT / SERIAL | 7 |
| 10 | UNIQUE constraint enforcement | 5 |
| 11 | Composite PRIMARY KEY | 8 |
| 12 | Transactions (BEGIN / COMMIT / ROLLBACK) | 11 |
| 13 | Indexes (B-tree) | 12 |
| 14 | Multi-row INSERT | 3 |
| 15 | INSERT INTO ... SELECT | 19 |
| 16 | INSERT column list mapping | 4 |
| 17 | Expression-based WHERE for DELETE | 1 |
| 18 | Expression-based WHERE for UPDATE | 2 |
| 19 | Multi-table DELETE | 20 |
| 20 | Multi-table UPDATE | 21 |
| 21 | Views (CREATE VIEW / DROP VIEW) | 47 |
| 22 | Stored Procedures / Functions | 51 |
| 23 | Triggers | 52 |
| 24 | Cursors | 53 |
| 25 | Prepared Statements | 48 |
| 26 | Window Functions | 49 |
| 27 | CTEs (WITH ... AS) | 50 |
| 28 | EXPLAIN / EXPLAIN ANALYZE | 46 |
| 29 | DROP DATABASE | 26 |
| 30 | DROP SCHEMA | 26 |
| 31 | RENAME TABLE | 25 |
| 32 | ON DUPLICATE KEY UPDATE | 43 |
| 33 | REPLACE INTO | 44 |
| 34 | CREATE TABLE ... SELECT | 45 |
| 35 | ORDER BY expression & ordinal | 28 |
| 36 | SET @var = ... user variables | 42 |
| 37 | CAST / CONVERT | 37 |
| 38 | NULLIF | 38 |
| 39 | IF / IFNULL | 38 |
| 40 | REGEXP / RLIKE | 40 |
| 41 | EXISTS / ANY / ALL subquery execution | 32 |
| 42 | IS TRUE / IS FALSE / IS UNKNOWN | 39 |
| 43 | INTERVAL evaluation | 36 |
| 44 | GROUP_CONCAT / STRING_AGG | 41 |
| 45 | CONCAT 3+ args | 34 |
| 46 | \|\| operator | 34 |
| 47 | NULL-safe <=> comparison | 39 |
| 48 | String functions (LEFT, RIGHT, etc.) | 33 |
| 49 | Math functions (ABS, CEIL, etc.) | 35 |
| 50 | Date functions (NOW, DATEDIFF, etc.) | 36 |
| 51 | JSON / JSONB support | 59 |
| 52 | Full-text search | 63 |
| 53 | Table partitioning | 65 |
| 54 | Replication | 74 |
| 55 | Sequences (CREATE SEQUENCE, NEXTVAL) | 60 |
| 56 | RETURNING clause | 54 |
| 57 | UPSERT (ON CONFLICT) | 61 |
| 58 | Materialized Views | 64 |
| 59 | Lateral Joins | 66 |
| 60 | Array data type | 67 |
| 61 | COPY command | 62 |
| 62 | LISTEN / NOTIFY | 68 |
| 63 | Table inheritance | 69 |
| 64 | Row-level security | 70 |
| 65 | Roles | 56 |
| 66 | WAL / Crash recovery | 71 |
| 67 | File locking / concurrency | 72 |
| 68 | Connection pooling | 73 |
| 69 | SELECT INTO | 55 |
| 70 | Buffer Pool Manager | 13 |
| 71 | RECLAIM (Storage Garbage Collection) | 14 |
| 72 | Temporary Tables | 15 |
| 73 | Native UUID Type & gen_random_uuid() | 16 |
| 74 | Snowflake ID Generation | 17 |
| 75 | Query Timeout & Statement Cancellation | 18 |
| 76 | `evo_sleep(ms)` — Artificial Delay | 18 |
| 77 | `evo_jitter(min_ms, max_ms)` — Random Delay | 18 |
| 78 | JIT Compilation Evaluation | 75 |
| — | Dynamic allocation (storage fix) | 57 |
| — | Semicolon-safe storage (storage fix) | 58 |

---

## Summary

| Day | Task # | Feature(s) | Priority |
|-----|--------|------------|----------|
| 1 | 1–2 | Expression WHERE for DELETE & UPDATE (#17, #18) | 🔴 Critical |
| 2 | 3–4 | Multi-row INSERT & Column mapping (#14, #16) | 🔴 Critical |
| 3 | 5–6 | UNIQUE & DEFAULT enforcement (#10, #8) | 🔴 Critical |
| 4 | 7–8 | AUTO_INCREMENT & Composite PK (#9, #11) | 🔴 Critical |
| 5 | 9–10 | CHECK & FOREIGN KEY constraints (#7, #6) | 🔴 Critical |
| 6 | 11–12 | Transactions & Indexes (#12, #13) | 🔴 Critical |
| 7 | 13–14 | Buffer Pool Manager & RECLAIM (#70, #71) | 🏗️ Architecture |
| 8 | 15–16 | Temporary Tables & Native UUID (#72, #73) | 🏗️ Architecture |
| 9 | 17–18 | Snowflake ID & Query Timeout + Sleep/Jitter (#74, #75, #76, #77) | 🏗️ Architecture |
| 10 | 19–20 | INSERT...SELECT & Multi-table DELETE (#15, #19) | 🔴 Critical |
| 11 | 21–22 | Multi-table UPDATE & ALTER TABLE ADD (#20, #5p1) | 🔴 Critical |
| 12 | 23–24 | ALTER TABLE DROP & MODIFY/RENAME (#5p2, #5p3) | 🔴 Critical |
| 13 | 25–26 | RENAME TABLE & DROP DB/SCHEMA (#31, #29, #30) | 🟠 Important |
| 14 | 27–28 | UNION/INTERSECT/EXCEPT & ORDER BY expr (#4, #35) | 🔴 Critical |
| 15 | 29–30 | JOIN INNER & LEFT/RIGHT/CROSS (#1p1, #1p2) | 🔴 Critical |
| 16 | 31–32 | Subqueries & EXISTS/ANY/ALL (#2, #3, #41) | 🔴 Critical |
| 17 | 33–34 | String functions & CONCAT/\|\| (#48, #45, #46) | 🟡 Moderate |
| 18 | 35–36 | Math functions & Date functions (#49, #50, #43) | 🟡 Moderate |
| 19 | 37–38 | CAST & NULLIF/IF/IFNULL (#37, #38, #39) | 🟡 Moderate |
| 20 | 39–40 | IS TRUE/FALSE & REGEXP (#42, #47, #40) | 🟡 Moderate |
| 21 | 41–42 | GROUP_CONCAT & SET @var (#44, #36) | 🟡 Moderate |
| 22 | 43–44 | ON DUP KEY UPDATE & REPLACE INTO (#32, #33) | 🟠 Important |
| 23 | 45–46 | CREATE TABLE...SELECT & EXPLAIN (#34, #28) | 🟠 Important |
| 24 | 47–48 | Views & Prepared Statements (#21, #25) | 🟠 Important |
| 25 | 49–50 | Window Functions & CTEs (#26, #27) | 🟠 Important |
| 26 | 51–52 | Stored Procedures & Triggers (#22, #23) | 🟠 Important |
| 27 | 53–54 | Cursors & RETURNING (#24, #56) | 🟠 Important |
| 28 | 55–56 | SELECT INTO & Roles (#69, #65) | 🟠/🔵 |
| 29 | 57–58 | Dynamic allocation & Semicolon safety (Storage) | ⚙️ Engine |
| 30 | 59–60 | JSON & Sequences (#51, #55) | 🔵 Advanced |
| 31 | 61–62 | UPSERT & COPY (#57, #61) | 🔵 Advanced |
| 32 | 63–64 | Full-text search & Materialized views (#52, #58) | 🔵 Advanced |
| 33 | 65–66 | Partitioning & Lateral Joins (#53, #59) | 🔵 Advanced |
| 34 | 67–68 | Array type & LISTEN/NOTIFY (#60, #62) | 🔵 Advanced |
| 35 | 69–70 | Table inheritance & Row-level security (#63, #64) | 🔵 Advanced |
| 36 | 71–72 | WAL & File locking (#66, #67) | 🔵 Advanced |
| 37 | 73–74 | Connection pooling & Replication (#54, #68) | 🔵 Advanced |
| 38 | 75 | Integration, hardening & release | 🏁 Final |

**Total:** 75 tasks × 10 steps = **750 steps** over **38 working days** (78 features).

---

## Test Execution Checklist (End of Every Task)

```bash
# 1. Unit tests for the new feature
python tests/test_<feature>.py

# 2. Smoke test — basic CRUD still works
python tests/test_database.py

# 3. Regression — ALL existing test suites
for f in tests/test_*.py; do python "$f"; done

# 4. Full system test
docker compose build --no-cache
docker compose up -d
python tests/test_database.py       # PG wire protocol
python tests/test_evo_protocol.py   # EVO protocol
# Manual: DBeaver connection test
docker compose down
```
