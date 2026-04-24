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

### Task 9: ✅ CHECK Constraint (Feature #7)

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

### Task 10: ✅ FOREIGN KEY Constraints (Feature #6)

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

### Task 11: ✅ Real Transactions / ACID (Feature #12)

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

### Task 12: ✅ Indexes — B-tree (Feature #13)

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

### Task 13: ✅ Buffer Pool Manager (Feature #70)

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

### Task 14: ✅ RECLAIM — Storage Garbage Collection (Feature #71)

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

### Task 15: ✅ Temporary Tables (Feature #72)

**Goal:** `CREATE TEMPORARY TABLE` is parsed (`opt_temporary`) but ignored. Implement session-scoped temporary tables that auto-drop on disconnect.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design catalog-based session isolation — temp tables stored in the same `evosql.db` file via `cat_create_table()` with an `is_temporary` flag. Each session tracks its temp table IDs in `SessionCtx`. No separate files or directories needed. | Design |
| 2 | Extend `SessionCtx` — add `uint32_t temp_table_ids[64]`, `int temp_table_count`. Pass `SessionCtx*` into `CreateTableProcess()`. | `adaptor/query_executor.h`, `evolution/db/database.h` |
| 3 | Modify `CreateTableProcess()` — when `g_qctx->isTemporary == 1`, call `cat_create_table()` to register in catalog, then store table ID in `SessionCtx.temp_table_ids[]`. | `evolution/db/Create.c` |
| 4 | Modify table lookup — in `tapi_resolve()`, check session's temp table IDs first (temp tables shadow real tables with the same name). Fall back to normal catalog lookup. | `evolution/db/table_api.c`, `adaptor/query_executor.c` |
| 5 | Auto-drop on disconnect — in `pg_handler()` cleanup (after client disconnects), iterate `temp_table_ids[]` and for each: `bt2_destroy()` + `tapi_free_heap_pages()` + `cat_drop_table()`. | `adaptor/pg_handler.c` |
| 6 | Catalog isolation — temp tables not visible in `pg_class` to other sessions. Only the owning session sees them. Filter by session's `temp_table_ids[]`. | `adaptor/catalog.c` |
| 7 | Regenerate parser (if any changes needed — `opt_temporary` already passes `$$ = 1`). | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_temp_tables.py`: CREATE TEMPORARY TABLE, INSERT+SELECT, disconnect → table gone, temp shadows real table, two sessions have independent temp tables. | `tests/test_temp_tables.py` |
| 9 | Run regression + full system test — Docker rebuild, all test suites pass. | `tests/`, `Dockerfile` |

---

### Task 16: ✅ Native UUID Type & gen_random_uuid() (Feature #73)

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


### Task 17: ✅ Snowflake ID Generation (Feature #74)

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

## Day 10 — Transaction Enhancements

### Task 18: ✅ SAVEPOINT & ROLLBACK TO SAVEPOINT

**Goal:** Support named savepoints within a transaction. `SAVEPOINT sp1` marks a restore point, `ROLLBACK TO sp1` undoes only changes after that savepoint. Requires extending UndoLog with position markers. In MySQL, MSSQL (SAVE TRANSACTION), and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add SAVEPOINT token to lexer and parser rule: `SAVEPOINT NAME`. | `evolexer.l`, `evoparser.y` |
| 2 | Extend UndoLog with savepoint stack — store name + undo position index. | `adaptor/transaction.h`, `adaptor/transaction.c` |
| 3 | Implement `ROLLBACK TO NAME` — undo entries back to savepoint position, keep savepoint alive. | `adaptor/transaction.c` |
| 4 | Implement `RELEASE SAVEPOINT NAME` — discard the savepoint marker (keep changes). | `adaptor/transaction.c` |
| 5 | Wire into SessionCtx — savepoint commands during active transaction only, error outside. | `adaptor/pg_handler.c`, `adaptor/evo_protocol.c` |
| 6 | Nested savepoints — multiple SAVEPOINTs stack, ROLLBACK TO pops to named point. | `adaptor/transaction.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_savepoint.py`: create/rollback/release savepoint, nested savepoints, rollback to middle savepoint. | `tests/test_savepoint.py` |
| 9 | Run regression — all existing test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, verify via psql/DBeaver. | `Dockerfile` |

---

### Task 19: ✅ Transaction Isolation Levels (Feature #79)

**Goal:** Implement `SET TRANSACTION ISOLATION LEVEL` with at least READ COMMITTED and SERIALIZABLE. In MySQL (4 levels), MSSQL (5 levels), and Oracle (3 levels).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add isolation level tokens to lexer: ISOLATION, LEVEL, READ, COMMITTED, UNCOMMITTED, REPEATABLE, SERIALIZABLE. | `evolexer.l` |
| 2 | Parser rule: `SET TRANSACTION ISOLATION LEVEL <level>`. Store level in SessionCtx. | `evoparser.y`, `adaptor/pg_handler.c` |
| 3 | Implement READ COMMITTED — default level, current behavior (see latest committed data). | `adaptor/transaction.c` |
| 4 | Implement SERIALIZABLE — acquire exclusive lock for entire transaction duration. | `adaptor/transaction.c`, `evolution/db/server.c` |
| 5 | Report current isolation level — `SHOW transaction_isolation` or pg_catalog query. | `adaptor/catalog.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_isolation.py`: default level, set level, dirty read prevention, serializable conflicts. | `tests/test_isolation.py` |
| 8 | Run regression — all test suites pass. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Document isolation level behavior differences from PostgreSQL/MySQL. | `README.md` |

---

## Day 11 — Constraint Enhancements

### Task 20: ✅ Named Constraints & ALTER TABLE ADD/DROP CONSTRAINT (Feature #80)

**Goal:** Support `CONSTRAINT name` syntax for PK, FK, UNIQUE, CHECK. Enable `ALTER TABLE DROP CONSTRAINT name`. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add CONSTRAINT token to lexer. Parser rule: `CONSTRAINT NAME` prefix for PK, FK, UNIQUE, CHECK. | `evolexer.l`, `evoparser.y` |
| 2 | Store constraint name in ConstraintDesc (catalog_internal). | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 3 | Parser rule: `ALTER TABLE name DROP CONSTRAINT name`. | `evoparser.y` |
| 4 | Implement DropConstraintProcess — find constraint by name, remove from catalog, drop backing index if UNIQUE/PK. | `evolution/db/Create.c` or new `Alter.c` |
| 5 | Parser rule: `ALTER TABLE name ADD CONSTRAINT name ...` for PK, FK, UNIQUE, CHECK on existing table. | `evoparser.y` |
| 6 | Implement AddConstraintProcess — validate existing data against new constraint, add to catalog. | `evolution/db/Create.c` or `Alter.c` |
| 7 | Auto-generate constraint names when not specified (e.g., `tablename_colname_pkey`). | `evolution/db/Create.c` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_named_constraints.py`: named PK/FK/UNIQUE/CHECK, DROP CONSTRAINT, ADD CONSTRAINT, auto-naming. | `tests/test_named_constraints.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 21: ✅ Composite UNIQUE & Composite FOREIGN KEY (Feature #81)

**Goal:** Support multi-column UNIQUE constraints and multi-column FOREIGN KEYs. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `UNIQUE (col1, col2, ...)` table-level constraint. Store multiple column names. | `evoparser.y`, `evolution/db/Create.c` |
| 2 | Create composite B+ tree index for UNIQUE — key = "val1\|val2". | `evolution/db/Create.c`, `evolution/db/Index.c` |
| 3 | Validate composite UNIQUE on INSERT — build composite key, check for duplicates. | `evolution/db/Insert.c` |
| 4 | Validate composite UNIQUE on UPDATE — re-check when any of the unique columns change. | `evolution/db/Update.c` |
| 5 | Parser: `FOREIGN KEY (col1, col2) REFERENCES table(col1, col2)` with composite columns. | `evoparser.y` |
| 6 | Validate composite FK on INSERT — build composite value, look up in referenced table. | `evolution/db/Insert.c` |
| 7 | Enforce composite FK on DELETE (CASCADE/RESTRICT/SET NULL for composite). | `evolution/db/Delete.c` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_composite_constraints.py`: composite UNIQUE, composite FK, cascade delete with composite FK. | `tests/test_composite_constraints.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

## Day 12 — Constraint Enhancements (Part 2)

### Task 22: ✅ Self-Referencing FOREIGN KEY + Advanced FK Features (Feature #82)

**Goal:** Allow a table to reference itself (e.g., employee → manager). In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Modify FK validation in Create.c — allow ref_table == current table (defer validation to after table creation). | `evolution/db/Create.c` |
| 2 | Handle INSERT order — self-referencing FK allows NULL parent or existing parent in same table. | `evolution/db/Insert.c` |
| 3 | Handle DELETE CASCADE on self-referencing FK — recursive cascading deletion. | `evolution/db/Delete.c` |
| 4 | Handle UPDATE CASCADE on self-referencing FK. | `evolution/db/Update.c` |
| 5 | Prevent circular cascade infinite loops — track visited PKs during cascade. | `evolution/db/Delete.c`, `evolution/db/Update.c` |
| 6 | Write unit tests — `tests/test_self_ref_fk.py`: employee/manager hierarchy, cascade delete tree, update parent, NULL parent. | `tests/test_self_ref_fk.py` |
| 7 | Run regression + full system test. | `tests/`, `Dockerfile` |
| 8-10 | Edge cases: insert root node, delete leaf vs. root, orphan prevention. | `tests/test_self_ref_fk.py` |

---

### Task 23: ✅ Composite Index — Multi-Column B-tree (Feature #83)

**Goal:** `CREATE INDEX idx ON table (col1, col2, ...)` with multi-column key. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: index column list `(col1, col2, ...)` already parsed. Extend CreateIndexProcess to store multiple columns. | `evoparser.y`, `evolution/db/Index.c` |
| 2 | Build composite B+ tree key — concatenate column values with separator `\|`. | `evolution/db/Index.c` |
| 3 | Populate composite index via table scan — extract all index columns per record. | `evolution/db/Index.c` |
| 4 | Maintain composite index on INSERT — build composite key from inserted values. | `evolution/db/Insert.c` |
| 5 | Maintain composite index on DELETE — remove composite key. | `evolution/db/Delete.c` |
| 6 | Maintain composite index on UPDATE — if any indexed column changes, delete old key + insert new. | `evolution/db/Update.c` |
| 7 | Query optimizer — use composite index for WHERE clauses matching leftmost prefix of index columns. | `adaptor/query_executor.c` |
| 8 | Regenerate parser if needed. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_composite_index.py`: create composite index, WHERE on prefix, WHERE on all columns, INSERT/UPDATE/DELETE maintenance. | `tests/test_composite_index.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

## Day 13 — Index Enhancements

### Task 24: ✅ Expression / Functional Index (Feature #84)

**Goal:** `CREATE INDEX idx ON table (LOWER(col))` or `CREATE INDEX idx ON table (col1 + col2)`. In MySQL 8.0, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: allow expression in index column list, not just column names. | `evoparser.y` |
| 2 | Store index expression definition in catalog (serialized ExprNode or expression string). | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 3 | Build index — evaluate expression for each row during CREATE INDEX, insert result as key. | `evolution/db/Index.c` |
| 4 | Maintain on INSERT — evaluate expression on new row, insert into index. | `evolution/db/Insert.c` |
| 5 | Maintain on UPDATE — if any column in expression changes, re-evaluate and update index. | `evolution/db/Update.c` |
| 6 | Maintain on DELETE — evaluate expression on deleted row, remove from index. | `evolution/db/Delete.c` |
| 7 | Query optimizer — detect matching expressions in WHERE clause. | `adaptor/query_executor.c` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_expr_index.py`: LOWER() index, arithmetic expression index, WHERE using expression. | `tests/test_expr_index.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 25: ✅ Hash Index (Feature #85)

**Goal:** `CREATE INDEX idx ON table USING HASH (col)` for O(1) equality lookups. In MySQL (MEMORY/NDB) and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add HASH and USING tokens to lexer. Parser rule: `CREATE INDEX ... USING HASH (col)`. | `evolexer.l`, `evoparser.y` |
| 2 | Implement hash index structure — fixed-size hash table with chaining in pages. | `evolution/db/hash_index.c` (new), `evolution/db/hash_index.h` (new) |
| 3 | Hash function — use FNV-1a or similar for string keys, modulo bucket count. | `evolution/db/hash_index.c` |
| 4 | Store hash index metadata in catalog (type='H' vs 'B' for B-tree). | `evolution/db/catalog_internal.c` |
| 5 | Populate hash index via table scan on CREATE INDEX. | `evolution/db/Index.c` |
| 6 | Maintain on INSERT/DELETE/UPDATE. | `evolution/db/Insert.c`, `evolution/db/Delete.c`, `evolution/db/Update.c` |
| 7 | Query optimizer — use hash index for `WHERE col = value` (equality only, not range). | `adaptor/query_executor.c` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_hash_index.py`: create, equality lookup, insert/delete/update maintenance, performance vs B-tree on equality. | `tests/test_hash_index.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

## Day 14 — Index & Query Planner

### Task 26: ✅ Index Statistics & ANALYZE TABLE (Feature #86)

**Goal:** Collect table/index statistics (row count, distinct values, index depth) to enable future query optimization. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add ANALYZE token to lexer. Parser rule: `ANALYZE TABLE name`. | `evolexer.l`, `evoparser.y` |
| 2 | Implement AnalyzeProcess — scan table, count rows, compute per-column distinct value count. | `evolution/db/Analyze.c` (new) |
| 3 | Store statistics in catalog — new stats entry: table_id, row_count, col_distinct_counts[], last_analyzed timestamp. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 4 | Compute index statistics — B-tree depth, leaf page count, entries per leaf (avg). | `evolution/db/btree2.c` |
| 5 | Auto-analyze — optionally update stats after large INSERT/DELETE batches. | `evolution/db/Insert.c`, `evolution/db/Delete.c` |
| 6 | Expose via `EXPLAIN` — show estimated row counts based on statistics. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_analyze.py`: ANALYZE TABLE, verify stats, EXPLAIN shows estimates. | `tests/test_analyze.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 27: ✅ LIMIT / TOP for UPDATE & DELETE (Feature #87)

**Goal:** `DELETE FROM t WHERE ... LIMIT 10` and `UPDATE t SET ... WHERE ... LIMIT 5`. In MySQL (LIMIT), MSSQL (TOP), and Oracle (ROWNUM/FETCH FIRST).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: add optional LIMIT clause to DELETE and UPDATE grammar rules. | `evoparser.y` |
| 2 | Store limit value in QueryContext (g_deleteLimit, g_updateLimit). | `evolution/db/query_context.h` |
| 3 | Modify DeleteProcess — stop collecting matching rows after limit reached. | `evolution/db/Delete.c` |
| 4 | Modify UpdateProcess — stop updating rows after limit reached. | `evolution/db/Update.c` |
| 5 | Report correct affected_rows count (may be less than total matches). | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_limit_dml.py`: DELETE LIMIT, UPDATE LIMIT, LIMIT 0, LIMIT > total rows. | `tests/test_limit_dml.py` |
| 8 | Run regression — all test suites pass. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

## Day 15 — AUTO_INCREMENT & Identity Enhancements

### Task 28: ✅ LAST_INSERT_ID() / @@IDENTITY (Feature #88)

**Goal:** Return the last auto-generated ID (AUTO_INCREMENT or snowflake_id DEFAULT) via `SELECT LAST_INSERT_ID()`. In MySQL and MSSQL (SCOPE_IDENTITY).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add thread-local `g_last_insert_id` to SessionCtx. | `adaptor/pg_handler.c`, `evolution/db/database.h` |
| 2 | Set `g_last_insert_id` after successful INSERT with AUTO_INCREMENT or snowflake_id DEFAULT. | `evolution/db/Insert.c` |
| 3 | Add LAST_INSERT_ID function token to lexer. Parser rule: `LAST_INSERT_ID()`. | `evolexer.l`, `evoparser.y` |
| 4 | Expression evaluation — return session's `g_last_insert_id`. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 5 | Multi-row INSERT — set to the FIRST auto-generated ID in the batch (MySQL behavior). | `evolution/db/Insert.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_last_insert_id.py`: single insert, multi-row insert, explicit ID (no change), different sessions. | `tests/test_last_insert_id.py` |
| 8 | Run regression — all test suites pass. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify session isolation — two connections get independent LAST_INSERT_ID values. | `tests/test_last_insert_id.py` |

---

### Task 29: ✅ AUTO_INCREMENT Custom Start Value & Step (Feature #89)

**Goal:** `AUTO_INCREMENT = 1000` at table level and `SET @@auto_increment_increment = 2`. In MySQL, MSSQL (IDENTITY(start, step)), and Oracle (GENERATED AS IDENTITY(START WITH n INCREMENT BY n)).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `AUTO_INCREMENT = N` after CREATE TABLE closing paren (table option). | `evoparser.y` |
| 2 | Store start value in catalog (auto_inc_counter initial value). | `evolution/db/Create.c`, `evolution/db/catalog_internal.c` |
| 3 | Parser: `IDENTITY(start, step)` as MSSQL-compatible alias for column-level. | `evoparser.y`, `evolexer.l` |
| 4 | Store step in catalog (auto_inc_step). | `evolution/db/catalog_internal.c` |
| 5 | Modify apply_auto_increment — use stored start and step values. | `evolution/db/Insert.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_auto_inc_options.py`: custom start, custom step, IDENTITY syntax, verify sequence. | `tests/test_auto_inc_options.py` |
| 8 | Run regression — all test suites pass. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify counter persists across server restarts. | `tests/test_auto_inc_options.py` |

---

### Task 130: ✅ @@IDENTITY / SCOPE_IDENTITY() / @@last_insert_id — Session Variable Aliases (Feature #132)

**Goal:** MSSQL `@@IDENTITY`, `SCOPE_IDENTITY()` ve MySQL `@@last_insert_id` session variable'larını destekle. Hepsi mevcut `g_last_insert_id` altyapısına alias olarak bağlanır.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Lexer: `@@IDENTITY` tokeni — `@@` prefix'li identifier pattern ekle veya özel token olarak tanımla. `SCOPE_IDENTITY/"("` fonksiyon tokeni ekle. | `evolexer.l` |
| 2 | Parser: `@@IDENTITY` expression kuralı — `expr_make_last_insert_id()` döndür (mevcut LAST_INSERT_ID ile aynı altyapı). | `evoparser.y` |
| 3 | Parser: `SCOPE_IDENTITY '(' ')'` expression kuralı — `expr_make_last_insert_id()` döndür. EvoSQL'de scope ayrımı yok, LAST_INSERT_ID ile eşdeğer. | `evoparser.y` |
| 4 | Parser: `@@last_insert_id` session variable — `expr_make_last_insert_id()` döndür. `@@` prefix'li variable erişiminin genel çözümü veya özel case. | `evoparser.y` |
| 5 | `SELECT @@IDENTITY`, `SELECT SCOPE_IDENTITY()`, `SELECT @@last_insert_id` — üçü de aynı değeri döndürmeli. | — |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_identity_aliases.py`: `@@IDENTITY` after AUTO_INCREMENT INSERT, `SCOPE_IDENTITY()` after INSERT, `@@last_insert_id`, üçünün eşitliği, session isolation. | `tests/test_identity_aliases.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

## Day 16 — DEFAULT & Computed Columns

### Task 30: ✅ Expression-Based DEFAULT Values (Feature #90)

**Goal:** `DEFAULT (col1 + col2)` or `DEFAULT (UPPER(name))` — defaults that reference other columns or expressions. In MySQL 8.0, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `DEFAULT '(' expr ')'` — store serialized expression as default value. | `evoparser.y` |
| 2 | Store expression default as serialized ExprNode string in catalog. | `evolution/db/Create.c` |
| 3 | Evaluate expression default at INSERT time — pass current row values as context. | `evolution/db/Insert.c` |
| 4 | Handle column ordering — expression may reference columns that appear earlier in the row. | `evolution/db/Insert.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_expr_default.py`: arithmetic default, function default, cross-column default. | `tests/test_expr_default.py` |
| 7 | Run regression — all test suites pass. | `tests/` |
| 8-10 | Edge cases: NULL input columns, circular references (error), UPDATE triggers re-evaluation. | `tests/test_expr_default.py` |

---

### Task 31: ✅ Generated / Computed Columns (Feature #91)

**Goal:** `col AS (expr) STORED` or `col AS (expr) VIRTUAL`. STORED = physically stored, VIRTUAL = computed on read. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add GENERATED, ALWAYS, STORED, VIRTUAL tokens to lexer. | `evolexer.l` |
| 2 | Parser: `col_name type GENERATED ALWAYS AS (expr) [STORED|VIRTUAL]`. | `evoparser.y` |
| 3 | Store generated column expression in catalog (column attribute: gen_expr, gen_type). | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 4 | STORED columns — evaluate expression on INSERT/UPDATE, persist computed value. | `evolution/db/Insert.c`, `evolution/db/Update.c` |
| 5 | VIRTUAL columns — evaluate expression on SELECT (read-time computation). | `evolution/db/Select.c`, `adaptor/query_executor.c` |
| 6 | Prevent direct INSERT/UPDATE of generated columns — error if user tries to set value. | `evolution/db/Insert.c`, `evolution/db/Update.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_generated_cols.py`: stored computed, virtual computed, prevent direct write, index on generated column. | `tests/test_generated_cols.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

## Day 17 — Type System & Temp Table Enhancements

### Task 32: ✅ UUID Binary Storage — 16-byte Native Type (Feature #92)

**Goal:** Store UUID internally as 16 bytes instead of 36-char string. Accept/output canonical string format, store as binary for 2.25x space savings and faster comparison. In MySQL (BINARY(16)), MSSQL (uniqueidentifier), and Oracle (RAW(16)).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Define UUID internal format — 16-byte big-endian binary. New type family or sub-type of family 18. | `evolution/db/database.h` |
| 2 | Modify uuid_generate_v4/v7 — return 16-byte binary array alongside string. | `evolution/db/expression.c` |
| 3 | Storage: convert string UUID → 16-byte on INSERT, 16-byte → string on SELECT. | `evolution/db/Insert.c`, `adaptor/query_executor.c` |
| 4 | B+ tree key comparison — binary memcmp (16 bytes) instead of string compare (36 chars). | `evolution/db/btree2.c` |
| 5 | PG wire protocol — send as PG_OID_UUID with binary format. | `adaptor/pg_protocol.c` |
| 6 | Write unit tests — `tests/test_uuid_binary.py`: insert/select round-trip, binary comparison, index performance. | `tests/test_uuid_binary.py` |
| 7 | Benchmark — compare 100K row INSERT/SELECT performance before and after optimization. | `tests/test_benchmark.py` |
| 8 | Run regression — all test suites pass (including existing UUID tests). | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify DBeaver/psql display UUID correctly. | Manual |

---

### Task 33: ✅ Global Temporary Tables (Feature #93)

**Goal:** Tables visible to all sessions but data is session-private. `CREATE GLOBAL TEMPORARY TABLE`. In MSSQL (##table) and Oracle (GLOBAL TEMPORARY).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add GLOBAL token to lexer. Parser: `CREATE GLOBAL TEMPORARY TABLE`. | `evolexer.l`, `evoparser.y` |
| 2 | Store global temp table definition in catalog (shared metadata, per-session data). | `evolution/db/catalog_internal.c` |
| 3 | Per-session data isolation — each session gets its own heap pages for the global temp table. | `evolution/db/table_api.c` |
| 4 | ON COMMIT DELETE ROWS — clear session data on COMMIT (Oracle default). | `adaptor/transaction.c` |
| 5 | ON COMMIT PRESERVE ROWS — keep data until session disconnect (MSSQL default). | `adaptor/pg_handler.c` |
| 6 | Cleanup on session disconnect — free session-specific pages. | `adaptor/pg_handler.c`, `adaptor/evo_protocol.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_global_temp.py`: create global temp, insert from two sessions, verify isolation, ON COMMIT behavior. | `tests/test_global_temp.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 34: ✅ CREATE TEMPORARY TABLE AS SELECT (Feature #94)

**Goal:** `CREATE TEMPORARY TABLE tmp AS SELECT ...` — create and populate a temp table from a query result. In MySQL, MSSQL (SELECT INTO #tmp), and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `CREATE TEMPORARY TABLE name AS select_stmt`. | `evoparser.y` |
| 2 | Execute SELECT, capture result columns and rows. | `evolution/db/Select.c` |
| 3 | Auto-create temp table with matching column names and types from SELECT result. | `evolution/db/Create.c` |
| 4 | Bulk insert SELECT results into temp table. | `evolution/db/Insert.c` |
| 5 | Handle column aliases — `AS SELECT col1 AS alias1` uses alias as column name. | `evolution/db/Create.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_create_temp_as.py`: basic CTAS, with WHERE, with aliases, with expressions. | `tests/test_create_temp_as.py` |
| 8 | Run regression — all test suites pass. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Combine with Task 45 (CREATE TABLE AS SELECT) — reuse logic for permanent tables too. | `evolution/db/Create.c` |

---

## Day 18 — Infrastructure & Concurrency

### Task 35: ✅ Online DDL — Non-Blocking Schema Changes (Feature #95)

**Goal:** ALTER TABLE operations (ADD/DROP COLUMN, ADD INDEX) without locking the table for reads. In MySQL (ALGORITHM=INPLACE), MSSQL (ONLINE=ON), and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Implement reader-writer lock for table-level access. | `evolution/db/table_api.h`, `evolution/db/table_api.c` |
| 2 | DDL acquires write lock, DML/SELECT acquires read lock — multiple readers, single writer. | `evolution/db/table_api.c` |
| 3 | ADD COLUMN online — add column metadata first, then backfill DEFAULT values in background. | `evolution/db/Create.c` |
| 4 | CREATE INDEX online — build index while allowing concurrent reads. | `evolution/db/Index.c` |
| 5 | DROP INDEX online — mark index as "dropping", stop using in queries, then destroy. | `evolution/db/Index.c` |
| 6 | Progress tracking — report DDL progress (rows processed / total). | `adaptor/query_executor.c` |
| 7 | Write unit tests — `tests/test_online_ddl.py`: concurrent SELECT during ADD COLUMN, concurrent INSERT during CREATE INDEX. | `tests/test_online_ddl.py` |
| 8 | Run regression — all test suites pass. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Benchmark — measure DDL blocking time before vs. after. | `tests/test_benchmark.py` |

---

### Task 36: ✅ Configurable Buffer Pool Size (Feature #96)

**Goal:** `SET buffer_pool_size = <pages>` or command-line `--buffer-pool-size`. In MySQL (innodb_buffer_pool_size), MSSQL (max server memory), and Oracle (SGA).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `--buffer-pool-size` CLI argument to evosql-server. | `adaptor/main.c` |
| 2 | Environment variable `EVOSQL_BUFFER_POOL_SIZE` (number of 4KB pages). | `adaptor/main.c` |
| 3 | Pass configured size to `bp_init()` instead of hardcoded `BP_DEFAULT_PAGES`. | `adaptor/server.c`, `evolution/db/buffer_pool.c` |
| 4 | Runtime resize — `SET buffer_pool_size = N` flushes dirty pages and reallocates. | `evolution/db/buffer_pool.c` |
| 5 | Show current size — `SHOW buffer_pool_size`. | `adaptor/catalog.c` |
| 6 | Sensible defaults — auto-detect available memory, use 25% as default. | `adaptor/main.c` |
| 7 | Buffer pool hit rate monitoring — track hits/misses, expose via `SHOW buffer_pool_stats`. | `evolution/db/buffer_pool.c` |
| 8 | Write unit tests — `tests/test_buffer_pool_config.py`: set size, show size, performance with different sizes. | `tests/test_buffer_pool_config.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — test with small (64 pages) and large (4096 pages) pool. | `Dockerfile` |

---

## Day 19 — MVCC & Deadlock

### Task 37: ✅ MVCC — Multi-Version Concurrency Control (Feature #97)
**All 7 layers implemented — 285 tests pass, 0 regressions.**
- Layer 1: Core MVCC — XID, CLOG, snapshots, tuple xmin/xmax, rwlock, visibility (10/10 tests)
- Layer 2: RECLAIM dead tuples — Phase 0 removes committed-deleted + aborted-insert tuples (8/8 tests)
- Layer 3: HOT updates — skip index updates when non-indexed columns change (7/7 tests)
- Layer 4: Visibility Map — per-page all-visible bit, DML clears, RECLAIM sets
- Layer 5: SSI — deferred to future (requires row-level locking infrastructure)
- Layer 6: CSN — commit sequence numbers for O(1) visibility, ring buffer cache
- Layer 7: Auto-RECLAIM — dead_tuple_count tracking, 20% threshold, counter reset on RECLAIM

**Goal:** Readers never block writers, writers never block readers. Each transaction sees a consistent snapshot. In MySQL (InnoDB), MSSQL (snapshot isolation), and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add transaction ID (txid) — global monotonically increasing counter, assigned at BEGIN. | `adaptor/transaction.h`, `adaptor/transaction.c` |
| 2 | Row versioning — each record stores (xmin, xmax) — created-by and deleted-by txid. | `evolution/db/table_api.h`, `evolution/db/slotted.c` |
| 3 | Visibility check — a row is visible to txid T if: xmin < T AND (xmax == 0 OR xmax > T). | `evolution/db/table_api.c` |
| 4 | UPDATE creates new version — mark old row's xmax, insert new row with new xmin. | `evolution/db/Update.c` |
| 5 | DELETE sets xmax — don't physically remove, just mark as deleted for this txid. | `evolution/db/Delete.c` |
| 6 | Snapshot isolation — at BEGIN, record current txid as snapshot. All reads use this snapshot for visibility. | `adaptor/transaction.c` |
| 7 | Vacuum/cleanup — background process to physically remove rows invisible to all active transactions. | `evolution/db/Reclaim.c` |
| 8 | Integrate with buffer pool — versioned pages in cache. | `evolution/db/buffer_pool.c` |
| 9 | Write unit tests — `tests/test_mvcc.py`: concurrent read+write, snapshot isolation, dirty read prevention, phantom read prevention. | `tests/test_mvcc.py` |
| 10 | Run regression + full system test — verify no regressions, benchmark concurrent workload. | `tests/`, `Dockerfile` |

---

### Task 38: ✅ Deadlock Detection & Resolution (Feature #98)

**Goal:** Detect deadlocks between concurrent transactions and abort one to resolve. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Implement row-level locking — lock manager tracks (table, key, txid, lock_type). | `evolution/db/lock_mgr.c` (new), `evolution/db/lock_mgr.h` (new) |
| 2 | Lock types — SHARED (for SELECT FOR UPDATE) and EXCLUSIVE (for UPDATE/DELETE). | `evolution/db/lock_mgr.c` |
| 3 | Wait-for graph — when a transaction waits for a lock, add edge to dependency graph. | `evolution/db/lock_mgr.c` |
| 4 | Cycle detection — periodically (or on wait) check for cycles in wait-for graph using DFS. | `evolution/db/lock_mgr.c` |
| 5 | Victim selection — abort the transaction with least work done (fewest undo log entries). | `evolution/db/lock_mgr.c`, `adaptor/transaction.c` |
| 6 | Return deadlock error to client — SQLSTATE 40P01 (deadlock_detected). | `adaptor/query_executor.c` |
| 7 | Lock timeout — `SET lock_timeout = <ms>` as alternative to deadlock detection. | `evolution/db/lock_mgr.c` |
| 8 | Write unit tests — `tests/test_deadlock.py`: two transactions deadlocking, victim gets error, other completes. | `tests/test_deadlock.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — concurrent DBeaver sessions causing deadlock. | `Dockerfile` |

---

## Day 20 — Distributed & Reliability

### Task 39: ✅ XA Transactions — 2-Phase Commit (Feature #99)

**Goal:** Distributed transaction support via XA protocol. `XA START`, `XA END`, `XA PREPARE`, `XA COMMIT`. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add XA, START, END, PREPARE tokens to lexer. | `evolexer.l` |
| 2 | Parser: `XA START 'xid'`, `XA END 'xid'`, `XA PREPARE 'xid'`, `XA COMMIT 'xid'`, `XA ROLLBACK 'xid'`. | `evoparser.y` |
| 3 | XA transaction state machine — IDLE → ACTIVE → ENDED → PREPARED → COMMITTED/ROLLED_BACK. | `adaptor/transaction.c` |
| 4 | PREPARE phase — flush undo log to disk, write prepare record. Survives crash. | `adaptor/transaction.c` |
| 5 | COMMIT phase — finalize transaction, remove prepare record. | `adaptor/transaction.c` |
| 6 | XA RECOVER — list all prepared (in-doubt) transactions. | `adaptor/transaction.c` |
| 7 | Crash recovery — on startup, detect prepared transactions and keep them until explicit COMMIT/ROLLBACK. | `adaptor/server.c` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_xa.py`: full XA cycle, prepare+crash+recover, XA ROLLBACK. | `tests/test_xa.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 40: ✅ TRUNCATE TABLE — Fast DDL Delete (Feature #100)

**Goal:** `TRUNCATE TABLE name` — remove all rows without scanning (reset heap + index). Much faster than `DELETE FROM table`. In MySQL, MSSQL, and Oracle.

| Step | Description | Files |
|------|-------------|-------|
| 1 | TRUNCATE token already in lexer. Add parser rule: `TRUNCATE TABLE name`. | `evoparser.y` |
| 2 | Implement TruncateProcess — destroy and recreate PK B+ tree (empty). | `evolution/db/Drop.c` or new `Truncate.c` |
| 3 | Free all heap pages — return to page manager free list. | `evolution/db/table_api.c` |
| 4 | Reset AUTO_INCREMENT counter to initial value. | `evolution/db/catalog_internal.c` |
| 5 | Destroy and recreate all secondary indexes (empty). | `evolution/db/Index.c` |
| 6 | Reset table statistics. | `evolution/db/catalog_internal.c` |
| 7 | FK constraint check — error if other tables reference this table with existing rows. | `evolution/db/Delete.c` |
| 8 | Regenerate parser. | `evolution/parser/` |
| 9 | Write unit tests — `tests/test_truncate.py`: truncate empty table, truncate with data, verify auto_inc reset, FK check. | `tests/test_truncate.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

### Task 41: ✅ Query Timeout, Statement Cancellation & Delay Functions (Features #75, #76, #77)

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

## Day 22 — INSERT...SELECT & Multi-Table DELETE

### Task 42: ✅ INSERT INTO ... SELECT (Feature #15)

**Goal:** Implement inserting rows from a SELECT query result.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `INSERT INTO table [columns] SELECT ...` in `evoparser.y`. Set a flag `g_insertFromSelect = 1`. | `evolution/parser/evoparser.y` |
| 2 | Implement — first execute the SELECT query into a temporary ResultSet. Then loop over rows and insert each into target table via `tapi_heap_insert()` + `bt2_insert()`. | `evolution/db/Insert.c`, `adaptor/query_executor.c` |
| 3 | Column mapping — if column list specified, map SELECT result columns to target columns. | `evolution/db/Insert.c` |
| 4 | Validate column count matches. Validate types per column. | `evolution/db/Insert.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Handle INSERT ... SELECT with WHERE, ORDER BY, LIMIT on source query. | `adaptor/query_executor.c` |
| 7 | Error handling — partial failure (some rows succeed, some fail on constraints). | `evolution/db/Insert.c` |
| 8 | Write unit tests — `tests/test_insert_select.py`: basic, with column mapping, with WHERE on source, cross-table insert, type mismatch → error. | `tests/test_insert_select.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 43: ✅ Multi-Table DELETE (Feature #19)

**Goal:** Grammar exists for multi-table DELETE but no execution. Implement `DELETE t1 FROM t1 JOIN t2 ON ... WHERE ...`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Analyze parser `delete_list` / `table_references` rules — understand how multi-table DELETE is parsed. Identify globals set. | `evolution/parser/evoparser.y` |
| 2 | Store target table list — `g_deleteTargets[]` (which tables to delete from) vs join tables. | `evolution/db/database.h`, `evolution/parser/evoparser.y` |
| 3 | Implement — join tables via `tapi_scan` + `bt2_search` for PK lookup (reuse JOIN engine from Task 29+), evaluate WHERE, collect matching rows for each target table. | `evolution/db/Delete.c` |
| 4 | Execute deletions — for each target table, delete matching rows via `tapi_heap_delete()` + `bt2_delete()` per row. | `evolution/db/Delete.c` |
| 5 | Report combined affected_rows count. | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle edge cases — delete from both sides of a JOIN, self-referencing delete. | `evolution/db/Delete.c` |
| 8 | Write unit tests — `tests/test_multi_table_delete.py`: DELETE t1 FROM t1 JOIN t2, delete from both tables, verify remaining rows. | `tests/test_multi_table_delete.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 23 — Multi-Table UPDATE & ALTER TABLE ADD COLUMN

### Task 44: ✅ Multi-Table UPDATE (Feature #20)

**Goal:** Implement `UPDATE t1 JOIN t2 ON ... SET t1.col = t2.col WHERE ...`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — multi-table UPDATE with JOIN in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Store target tables and SET assignments per table. | `evolution/db/database.h`, `evolution/parser/evoparser.y` |
| 3 | Implement — join tables via `tapi_scan`, evaluate WHERE, collect matching rows from target table(s). | `evolution/db/Update.c` |
| 4 | Apply SET assignments per target table row via `tapi_heap_update()`. Handle cross-table references in SET (`SET t1.col = t2.col`). | `evolution/db/Update.c` |
| 5 | Report combined affected_rows. | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle pad-size resize — update table descriptor in catalog if needed. | `evolution/db/Update.c`, `evolution/db/catalog_internal.c` |
| 8 | Write unit tests — `tests/test_multi_table_update.py`: UPDATE with JOIN, cross-table SET, verify both tables. | `tests/test_multi_table_update.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 45: ✅ ALTER TABLE — ADD COLUMN (Feature #5, Part 1)

**Goal:** No schema evolution exists. Implement `ALTER TABLE t ADD [COLUMN] col type [constraints]`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rule — `ALTER TABLE name ADD [COLUMN] column_def` in `evoparser.y`. Define `AlterTableAddColumnProcess()`. | `evolution/parser/evoparser.y` |
| 2 | Implement `AlterTableAddColumnProcess()` — use `cat_find_columns()` to get existing columns. Create new `ColumnDesc` for the added column and write to catalog (via `cat_add_column()` or drop+recreate column entries). | `evolution/db/Alter.c` (new file), `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 3 | Migrate existing data — `tapi_scan_begin/next` to read all records, append DEFAULT value (or NULL marker) for the new column to each record, `tapi_heap_update()` to write back. If record moves, `bt2_update()` for PK tree. | `evolution/db/Alter.c`, `evolution/db/table_api.h` |
| 4 | Handle constraints — the new column can have NOT NULL (requires a DEFAULT), UNIQUE, DEFAULT, etc. | `evolution/db/Alter.c` |
| 5 | Wire into `query_executor.c` — detect `ALTER TABLE` via `is_alter_query()`, call process function. | `adaptor/query_executor.c` |
| 6 | Also handle in catalog.c if needed for intercepted queries. | `adaptor/catalog.c` |
| 7 | Update Makefiles — add `Alter.c` to evolution Makefile. | `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_alter_table.py`: add column, insert new row with new col, select old rows show NULL/default. | `tests/test_alter_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 24 — ALTER TABLE DROP & MODIFY COLUMN

### Task 46: ✅ ALTER TABLE — DROP COLUMN (Feature #5, Part 2)

**Goal:** Implement `ALTER TABLE t DROP [COLUMN] col`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rule — `ALTER TABLE name DROP [COLUMN] name` in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Implement `AlterTableDropColumnProcess()` — use `cat_find_columns()` to locate the column in catalog. | `evolution/db/Alter.c`, `evolution/db/catalog_internal.h` |
| 3 | Update catalog — remove column entry from catalog. Adjust remaining column ordinals. If column has secondary indexes, drop them via `cat_list_indexes()` + `bt2_destroy()` + `cat_drop_index()`. | `evolution/db/Alter.c`, `evolution/db/catalog_internal.c` |
| 4 | Migrate data — `tapi_scan_begin/next` to read all records, remove the field at dropped column index, rebuild each record via `tapi_heap_update()`. Update PK B+ tree RowIDs if records move via `bt2_update()`. | `evolution/db/Alter.c`, `evolution/db/table_api.h` |
| 5 | Safety — cannot drop the last column. Cannot drop PK column (or warn). | `evolution/db/Alter.c` |
| 6 | Recalculate pad size — update table descriptor in catalog. | `evolution/db/Alter.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_alter_table.py` (extend): drop column, verify data intact, drop last col → error, drop PK → error. | `tests/test_alter_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 47: ✅ ALTER TABLE — MODIFY & RENAME COLUMN (Feature #5, Part 3)

**Goal:** Implement `ALTER TABLE t MODIFY COLUMN col new_type` and `ALTER TABLE t RENAME COLUMN old TO new`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rules — MODIFY COLUMN and RENAME COLUMN in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Implement `AlterTableModifyColumnProcess()` — update column type in catalog via column descriptor update. Validate existing data is compatible. MODIFY: `tapi_scan_begin/next` to read all records, apply type conversion, `tapi_heap_update()`. | `evolution/db/Alter.c`, `evolution/db/catalog_internal.h` |
| 3 | Implement `AlterTableRenameColumnProcess()` — update column name in catalog descriptor. No data migration needed, metadata-only change. | `evolution/db/Alter.c`, `evolution/db/catalog_internal.c` |
| 4 | MODIFY with size change — if VARCHAR(50) → VARCHAR(100), update table descriptor pad_size in catalog. If shrinking, validate no data exceeds new limit via `tapi_scan`. | `evolution/db/Alter.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Wire into query_executor.c. | `adaptor/query_executor.c` |
| 7 | Handle edge cases — modify PK column type, rename column referenced by constraints. | `evolution/db/Alter.c` |
| 8 | Write unit tests — `tests/test_alter_table.py` (extend): modify type, rename column, verify data survives, invalid modify → error. | `tests/test_alter_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 25 — RENAME TABLE & DROP DATABASE/SCHEMA

### Task 48: ✅ RENAME TABLE (Feature #31)

**Goal:** Implement `RENAME TABLE old TO new` / `ALTER TABLE old RENAME TO new`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `RENAME TABLE old_name TO new_name` and `ALTER TABLE old_name RENAME TO new_name`. | `evolution/parser/evoparser.y` |
| 2 | Implement `RenameTableProcess()` — update table name in catalog via `cat_update_table_name()` (new catalog function). No physical file rename needed — all data in single `evosql.db`. | `evolution/db/Alter.c`, `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 3 | Index references — catalog indexes are linked by `table_id`, not table name. No index updates needed. | `evolution/db/Alter.c` |
| 4 | Wire into catalog.c / query_executor.c. | `adaptor/catalog.c`, `adaptor/query_executor.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Handle non-existent table → error, target name already exists → error. | `evolution/db/Alter.c` |
| 7 | Update grants — rename scoped grants from old name to new name via `cat_update_grant()` or drop+recreate grant entries. | `evolution/db/GrantMgmt.c`, `evolution/db/catalog_internal.c` |
| 8 | Write unit tests — `tests/test_rename_table.py`: rename, verify data, rename non-existent → error, rename to existing → error. | `tests/test_rename_table.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 49: ✅ DROP DATABASE & DROP SCHEMA (Features #29, #30)

**Goal:** CREATE DATABASE/SCHEMA exist but DROP is missing. Implement both.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar rules — `DROP DATABASE [IF EXISTS] name`, `DROP SCHEMA [IF EXISTS] name`. | `evolution/parser/evoparser.y` |
| 2 | Implement `DropDatabaseProcess(name, if_exists)` — call `cat_drop_database(name)`. Cascade: `cat_list_schemas()` → for each schema, drop all tables via `cat_list_tables()` → `bt2_destroy()` + `tapi_free_heap_pages()` + `cat_drop_table()` per table, then `cat_drop_schema()`. Refuse to drop active database. | `evolution/db/DatabaseMgmt.c`, `evolution/db/database.h`, `evolution/db/catalog_internal.h` |
| 3 | Implement `DropSchemaProcess(name, if_exists)` — cascade: `cat_list_tables()` for schema → `bt2_destroy()` + `tapi_free_heap_pages()` + `cat_drop_table()` per table, then `cat_drop_schema()`. Refuse to drop active schema. | `evolution/db/DatabaseMgmt.c` |
| 4 | Safety checks — cannot drop `evosql` system database. Cannot drop `default` schema. | `evolution/db/DatabaseMgmt.c` |
| 5 | Wire into catalog handler — `catalog.c` intercepts `DROP DATABASE` / `DROP SCHEMA`. | `adaptor/catalog.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Clean up grants — when database/schema dropped, remove all grants scoped to it via `cat_list_grants_for_user()` + `cat_drop_grant()`. | `evolution/db/GrantMgmt.c`, `evolution/db/catalog_internal.c` |
| 8 | Write unit tests — `tests/test_drop_database.py`: create then drop, drop if exists, drop non-existent → error, drop active → error, drop evosql → error. | `tests/test_drop_database.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, verify catalog entries removed. | `Dockerfile` |

---

## Day 26 — UNION & ORDER BY Expressions

### Task 50: ✅ UNION / UNION ALL / INTERSECT / EXCEPT (Feature #4)

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

### Task 51: ✅ ORDER BY Expression & Ordinal Position (Feature #35)

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

## Day 27 — JOIN (Part 1)

### Task 52: ✅ INNER JOIN Execution (Feature #1, Part 1)

**Goal:** Grammar for JOINs exists. Implement INNER JOIN execution.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design multi-table execution — define structures: `JoinPlan { table_name, alias, join_type, on_condition }[]`. | `evolution/db/database.h`, `evolution/db/Join.c` (new) |
| 2 | Update parser — in `table_references` / `join` rules, populate `JoinPlan` instead of just `emit()`. | `evolution/parser/evoparser.y` |
| 3 | Implement `load_table_data()` — generic function using `tapi_scan_begin/next` to load all rows from a table into memory as arrays. | `evolution/db/Join.c`, `evolution/db/table_api.h` |
| 4 | Implement nested-loop INNER JOIN — for each row in left table, scan right table, evaluate ON condition using `expr_evaluate()`. | `evolution/db/Join.c` |
| 5 | Column name resolution — handle `t1.col` and `t2.col` qualified names in expressions. | `evolution/db/Join.c` |
| 6 | Wire into `query_executor.c` — detect multi-table SELECT, use join path instead of single-table `collect_select_results`. | `adaptor/query_executor.c` |
| 7 | Handle WHERE, ORDER BY, LIMIT on joined result. | `adaptor/query_executor.c` |
| 8 | Update Makefile — add `Join.c`. | `evolution/Makefile` |
| 9 | Write unit tests — `tests/test_join.py`: INNER JOIN with ON, multi-column ON, JOIN with WHERE, no matches → empty, self-join. | `tests/test_join.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 53: ✅ LEFT / RIGHT / CROSS / NATURAL JOIN (Feature #1, Part 2)

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

## Day 28 — Subqueries

### Task 54: ✅ Scalar & WHERE Subqueries (Feature #2)

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

### Task 55: ✅ EXISTS & ANY/SOME/ALL Subqueries (Feature #3)

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

## Day 29 — String Functions & Multi-arg CONCAT

### Task 56: ✅ String Functions (Feature #48)

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

### Task 57: ✅ CONCAT 3+ args & || Operator (Features #45, #46)

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

## Day 30 — Math & Date Functions

### Task 58: ✅ Math Functions (Feature #49)

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

### Task 59: ✅ Date Functions & INTERVAL (Features #50, #43)

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

## Day 31 — Utility Functions

### Task 60: ✅ CAST / CONVERT (Feature #37)

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

### Task 61: ✅ NULLIF, IF, IFNULL (Features #38, #39)

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

## Day 32 — Boolean Operators & REGEXP

### Task 62: ✅ IS TRUE / IS FALSE / IS UNKNOWN & NULL-safe <=> (Features #42, #47)

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

### Task 63: ✅ REGEXP / RLIKE Evaluation (Feature #40)

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

## Day 33 — GROUP_CONCAT & SET Variables

### Task 64: ✅ GROUP_CONCAT / STRING_AGG (Feature #44)

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

### Task 65: ✅ SET @var = ... User Variables (Feature #36)

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

## Day 34 — ON DUPLICATE KEY UPDATE & REPLACE INTO

### Task 66: ✅ ON DUPLICATE KEY UPDATE (Feature #32)

**Goal:** Parsed but not executed. Implement upsert semantics for MySQL-style ON DUPLICATE KEY UPDATE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Wire parser — ON DUPLICATE KEY UPDATE assignment list is already parsed. Store columns/values in `g_onDupCols[]`, `g_onDupVals[]`, `g_onDupCount`. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 2 | In `InsertProcess()` — if `bt2_search()` finds PK collision and `g_onDupCount > 0`, read existing record via `tapi_heap_read()`. | `evolution/db/Insert.c` |
| 3 | Apply ON DUPLICATE KEY UPDATE assignments to existing record (like UPDATE SET). | `evolution/db/Insert.c` |
| 4 | Store updated record with `tapi_heap_update()` + `bt2_update()` if record moves. | `evolution/db/Insert.c` |
| 5 | Report affected_rows: INSERT=1, ON DUP UPDATE=2 (MySQL convention). | `adaptor/query_executor.c` |
| 6 | Handle `VALUES(col)` function — reference the would-be-inserted value in UPDATE clause. | `evolution/db/Insert.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_on_dup_key.py`: insert new → 1, insert dup with ON DUP → update, verify updated values. | `tests/test_on_dup_key.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 67: ✅ REPLACE INTO (Feature #33)

**Goal:** Parsed but not executed. Implement `REPLACE INTO` — delete existing then insert, or just insert.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Wire parser — REPLACE already has a token. Set `g_isReplace = 1` flag during parsing. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 2 | In `InsertProcess()` — if `g_isReplace` and `bt2_search()` finds existing PK, delete old record: `tapi_heap_delete()` + `bt2_delete()` + secondary index cleanup via `cat_list_indexes()`. | `evolution/db/Insert.c`, `evolution/db/catalog_internal.h` |
| 3 | Insert new record via `tapi_heap_insert()` + `bt2_insert()` + secondary index inserts. | `evolution/db/Insert.c` |
| 4 | Report affected_rows: new=1, replaced=2. | `adaptor/query_executor.c` |
| 5 | Handle all constraints on the new record (NOT NULL, UNIQUE, FK, CHECK). | `evolution/db/Insert.c` |
| 6 | Handle REPLACE with column list mapping. | `evolution/db/Insert.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_replace.py`: REPLACE new row, REPLACE existing row, verify old data gone. | `tests/test_replace.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 35 — CREATE TABLE...SELECT & EXPLAIN

### Task 68: ✅ CREATE TABLE ... SELECT (Feature #34)

**Goal:** Parsed but not executed. Implement creating a table from a SELECT query result.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Wire parser — detect `CREATE TABLE name AS SELECT ...` or `CREATE TABLE name SELECT ...`. Set `g_createTableFromSelect = 1`. | `evolution/parser/evoparser.y` |
| 2 | Execute the SELECT query into a temporary ResultSet. | `adaptor/query_executor.c` |
| 3 | Infer column definitions from ResultSet — column names, types, sizes. | `adaptor/query_executor.c` |
| 4 | Create the table with inferred schema via `cat_create_table()` + heap page init. | `evolution/db/Create.c`, `evolution/db/catalog_internal.h` |
| 5 | Insert all result rows into the new table. | `evolution/db/Insert.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle IF NOT EXISTS, TEMPORARY table variants. | `evolution/db/Create.c` |
| 8 | Write unit tests — `tests/test_create_table_select.py`: basic, with WHERE, verify schema, verify data. | `tests/test_create_table_select.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 69: ✅ EXPLAIN / EXPLAIN ANALYZE (Feature #28)

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

## Day 36 — Views & Prepared Statements

### Task 70: ✅ Views — CREATE VIEW / DROP VIEW (Feature #21)

**Goal:** Implement basic views as stored SELECT queries.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design storage — add `CAT_SYS_VIEWS` B+ tree to catalog (extend `CatalogID` enum in `page_mgr.h`). Key: `schema_id:view_name`, value: SQL text + column info. Implement `cat_create_view()`, `cat_find_view()`, `cat_drop_view()`, `cat_list_views()`. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c`, `evolution/db/page_mgr.h` |
| 2 | Add grammar — `CREATE [OR REPLACE] VIEW name AS select_stmt`, `DROP VIEW [IF EXISTS] name`. | `evolution/parser/evoparser.y` |
| 3 | Implement `CreateViewProcess()` — call `cat_create_view()` with view name + SQL text. Validate inner query. | `evolution/db/View.c` (new) |
| 4 | Implement `DropViewProcess()` — call `cat_drop_view()`. | `evolution/db/View.c` |
| 5 | Implement view expansion — when SELECT references a view name, replace with stored subquery. | `adaptor/query_executor.c` |
| 6 | Wire into catalog.c. Add to `SHOW TABLES` / information_schema output. | `adaptor/catalog.c` |
| 7 | Update Makefile — add `View.c`. | `evolution/Makefile` |
| 8 | Write unit tests — `tests/test_views.py`: CREATE VIEW, SELECT from view, DROP VIEW, view on view. | `tests/test_views.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, verify in DBeaver. | `Dockerfile` |

---

### Task 71: ✅ Prepared Statements (Feature #25)

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

## Day 37 — Window Functions & CTEs

### Task 72: ✅ Window Functions (Feature #26)

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

### Task 73: ✅ CTEs — WITH ... AS (Feature #27)

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

## Day 38 — Stored Procedures & Triggers

### Task 74: ✅ Stored Procedures / Functions (Feature #22)

**Goal:** Implement basic stored procedure support: CREATE PROCEDURE, CALL, DROP PROCEDURE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design storage — add `CAT_SYS_PROCEDURES` B+ tree to catalog (extend `CatalogID` enum in `page_mgr.h`). Key: `schema_id:proc_name`, value: param list + body SQL. Implement `cat_create_procedure()`, `cat_find_procedure()`, `cat_drop_procedure()`. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c`, `evolution/db/page_mgr.h` |
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

### Task 75: ✅ Triggers (Feature #23)

**Goal:** Implement basic triggers: BEFORE/AFTER INSERT/UPDATE/DELETE.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design storage — add `CAT_SYS_TRIGGERS` B+ tree to catalog (extend `CatalogID` enum in `page_mgr.h`). Key: `table_id:trigger_name`, value: timing + event + body SQL. Implement `cat_create_trigger()`, `cat_find_trigger()`, `cat_drop_trigger()`, `cat_list_triggers_for_table()`. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c`, `evolution/db/page_mgr.h` |
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

## Day 39 — Cursors & RETURNING

### Task 76: ✅ Cursors (Feature #24)

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

### Task 77: ✅ RETURNING Clause (Feature #56)

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

## Day 40 — SELECT INTO & Roles

### Task 78: ✅ SELECT INTO (Feature #69)

**Goal:** Implement `SELECT col1, col2 INTO new_table FROM old_table WHERE ...`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `SELECT ... INTO table_name FROM ...` in `evoparser.y`. | `evolution/parser/evoparser.y` |
| 2 | Detect SELECT INTO — set flag `g_selectIntoTable`. | `evolution/parser/evoparser.y`, `evolution/db/database.h` |
| 3 | Execute SELECT query normally into ResultSet. | `adaptor/query_executor.c` |
| 4 | Infer table schema from ResultSet columns. Create new table via `cat_create_table()`. | `adaptor/query_executor.c`, `evolution/db/Create.c`, `evolution/db/catalog_internal.h` |
| 5 | Insert all result rows into new table. | `adaptor/query_executor.c` |
| 6 | Handle IF table already exists → error. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_select_into.py`: basic, with WHERE, verify schema matches, existing table → error. | `tests/test_select_into.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 79: ✅ Roles (Feature #65)

**Goal:** Implement role-based access control. Users can be assigned to roles, roles can have privileges.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `CREATE ROLE name`, `DROP ROLE name`, `GRANT role TO user`, `REVOKE role FROM user`. | `evolution/parser/evoparser.y` |
| 2 | Extend catalog — add role flag to `CAT_SYS_USERS` tree entries, or create `CAT_SYS_ROLES` + `CAT_SYS_ROLE_MEMBERS` B+ trees (extend `CatalogID` enum in `page_mgr.h`). Implement `cat_create_role()`, `cat_grant_role()`, `cat_revoke_role()`. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c`, `evolution/db/page_mgr.h` |
| 3 | Implement `CreateRoleProcess()`, `DropRoleProcess()` — roles are like users without login. Use `cat_create_role()` / `cat_drop_role()`. | `evolution/db/UserMgmt.c` |
| 4 | Implement `GrantRoleToUser()`, `RevokeRoleFromUser()`. | `evolution/db/GrantMgmt.c` |
| 5 | Modify `CheckPrivilege()` — also check all roles the user belongs to. Inherit privileges. | `evolution/db/GrantMgmt.c` |
| 6 | Wire into catalog.c — handle CREATE/DROP ROLE, GRANT/REVOKE role. | `adaptor/catalog.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_roles.py`: create role, grant priv to role, grant role to user, user inherits, revoke role. | `tests/test_roles.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 41 — Dynamic Allocation & Semicolon Safety

### Task 80: ✅ Dynamic Array Allocation (Storage Engine Fix)

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

### Task 81: ✅ Semicolon-Safe Storage (Storage Engine Fix)

**Goal:** Semicolons in data corrupt records. Fix with proper escaping.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Choose encoding — escape `;` as `\;` and `\` as `\\`. Or switch delimiter to `\x1F`. | Design |
| 2 | Implement `encode_field()` — escape before writing. Apply in `InsertProcess()` before `tapi_heap_insert()`. | `evolution/db/Insert.c`, `evolution/db/Update.c` |
| 3 | Implement `decode_field()` — unescape when reading. Apply in `collect_select_results()` (already catalog-based). | `evolution/db/Select.c`, `adaptor/query_executor.c` |
| 4 | Apply encoding in `InsertProcess()` — encode fields before building the semicolon-delimited record string for `tapi_heap_insert()`. | `evolution/db/Insert.c` |
| 5 | Apply decoding in `collect_select_results()` — decode fields after reading via `tapi_scan_begin/next`. | `adaptor/query_executor.c` |
| 6 | Apply encoding in `UpdateProcess()` — encode before `tapi_heap_update()`. | `evolution/db/Update.c` |
| 7 | Migration — handle old data format gracefully. | `evolution/db/Select.c` |
| 8 | Write unit tests — `tests/test_semicolon.py`: insert data with `;`, `\`, special chars, verify retrieval, WHERE filtering. | `tests/test_semicolon.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + DBeaver with semicolon data. | `Dockerfile` |

---

## Day 42 — JSON & Sequences

### Task 82: ✅ JSON / JSONB Support (Feature #51)

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

### Task 83: ✅ Sequences (Feature #55)

**Goal:** Implement PostgreSQL-style CREATE SEQUENCE / NEXTVAL / CURRVAL.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `CREATE SEQUENCE name [START n] [INCREMENT n]`, `DROP SEQUENCE`, `NEXTVAL('name')`, `CURRVAL('name')`. | `evolution/parser/evoparser.y` |
| 2 | Implement storage — add `CAT_SYS_SEQUENCES` B+ tree to catalog (extend `CatalogID` enum in `page_mgr.h`). Key: `schema_id:seq_name`, value: current + increment + min + max. Implement `cat_create_sequence()`, `cat_find_sequence()`, `cat_update_sequence()`, `cat_drop_sequence()`. | `evolution/db/Sequence.c` (new), `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c`, `evolution/db/page_mgr.h` |
| 3 | Implement `NEXTVAL()` — atomic increment and return. | `evolution/db/Sequence.c` |
| 4 | Implement `CURRVAL()` — return last value for this session. | `evolution/db/Sequence.c` |
| 5 | Wire as expression — `EXPR_NEXTVAL`, `EXPR_CURRVAL` types. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 6 | Wire into catalog.c. Update Makefile. | `adaptor/catalog.c`, `evolution/Makefile` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_sequence.py`: create, nextval ×5, currval, drop, nextval on dropped → error. | `tests/test_sequence.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 43 — UPSERT & COPY

### Task 84: ✅ UPSERT — INSERT ... ON CONFLICT (Feature #57)

**Goal:** Implement PostgreSQL-style upsert: `INSERT ... ON CONFLICT (col) DO UPDATE SET ...` / `DO NOTHING`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `ON CONFLICT (column) DO UPDATE SET ...` / `DO NOTHING`. | `evolution/parser/evoparser.y` |
| 2 | Store conflict target and action — `g_onConflictCol`, `g_onConflictAction`, SET assignments. | `evolution/db/database.h`, `evolution/parser/evoparser.y` |
| 3 | In `InsertProcess()` — on PK conflict (detected via `bt2_search()`), if `DO NOTHING`, silently skip. If `DO UPDATE`, apply SET via `tapi_heap_update()` + `bt2_update()`. | `evolution/db/Insert.c` |
| 4 | Handle `EXCLUDED` pseudo-table — reference would-be-inserted values in SET clause. | `evolution/db/Insert.c` |
| 5 | Report correct affected_rows. | `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Handle ON CONFLICT on UNIQUE columns (not just PK). | `evolution/db/Insert.c` |
| 8 | Write unit tests — `tests/test_on_conflict.py`: DO NOTHING, DO UPDATE, EXCLUDED reference, UNIQUE conflict. | `tests/test_on_conflict.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 85: ✅ COPY Command (Feature #61)

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

## Day 44 — Full-Text Search & Materialized Views

### Task 86: ✅ Full-Text Search (Feature #52)

**Goal:** Basic full-text search: text indexing and MATCH AGAINST / @@ syntax.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — inverted index as B+ tree: key = `word:table_id:PK_value`, RowID = heap location. Create FT index via `bt2_create()`. No separate `.ftindex` files — all in `evosql.db`. | Design, `evolution/db/btree2.h` |
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

### Task 87: ✅ Materialized Views (Feature #58)

**Goal:** Implement materialized views: CREATE MATERIALIZED VIEW, REFRESH, DROP.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — materialized view = real catalog table + stored query. Extend `CAT_SYS_VIEWS` B+ tree with `is_materialized` flag, or add `CAT_SYS_MATVIEWS` tree (extend `CatalogID` enum in `page_mgr.h`). Underlying data stored as normal table in catalog via `cat_create_table()`. | Design, `evolution/db/catalog_internal.h`, `evolution/db/page_mgr.h` |
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

## Day 45 — Table Partitioning & Lateral Joins

### Task 88: ✅ Table Partitioning (Feature #53)

**Goal:** Basic RANGE/LIST partitioning.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — partition = separate catalog table per range/list. Master table routes to partitions. All in single `evosql.db` file. | Design |
| 2 | Add grammar — `CREATE TABLE t (...) PARTITION BY RANGE (col)`, `CREATE TABLE t_p1 PARTITION OF t FOR VALUES FROM (1) TO (100)`. | `evolution/parser/evoparser.y` |
| 3 | Store partition metadata — in catalog: `cat_create_partition()`, add `partition_column`, `partition_type` fields to `TableDesc`, or create separate partition metadata entries. Child tables are normal catalog tables + partition range metadata. | `evolution/db/Create.c`, `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 4 | Route INSERT — based on partition column value, insert into correct child table. | `evolution/db/Insert.c` |
| 5 | Route SELECT — scan relevant partitions based on WHERE clause (partition pruning). | `adaptor/query_executor.c` |
| 6 | Route UPDATE/DELETE — find correct partition. | `evolution/db/Update.c`, `evolution/db/Delete.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_partition.py`: create partitioned table, insert into each partition, SELECT with pruning. | `tests/test_partition.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 89: ✅ Lateral Joins (Feature #59)

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

## Day 46 — Array Type & LISTEN/NOTIFY

### Task 90: ✅ Array Data Type (Feature #60)

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

### Task 91: ✅ LISTEN / NOTIFY (Feature #62)

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

## Day 47 — Table Inheritance & Row-Level Security

### Task 92: ✅ Table Inheritance (Feature #63)

**Goal:** Implement PostgreSQL-style table inheritance.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `CREATE TABLE child (...) INHERITS (parent)`. | `evolution/parser/evoparser.y` |
| 2 | Store inheritance metadata — add `parent_table_id` field to `TableDesc` in catalog, or create a separate inheritance metadata B+ tree. | `evolution/db/Create.c`, `evolution/db/catalog_internal.h` |
| 3 | Implement inheritance — child table has all parent columns plus its own. | `evolution/db/Create.c` |
| 4 | SELECT on parent — also return rows from child tables. | `adaptor/query_executor.c` |
| 5 | INSERT on child — validate parent + child constraints. | `evolution/db/Insert.c` |
| 6 | `ONLY` keyword — `SELECT * FROM ONLY parent` excludes child rows. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_inheritance.py`: create parent+child, insert into child, select from parent includes child, ONLY. | `tests/test_inheritance.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

### Task 93: ✅ Row-Level Security (Feature #64)

**Goal:** Implement RLS policies that filter rows based on current user.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add grammar — `ALTER TABLE t ENABLE ROW LEVEL SECURITY`, `CREATE POLICY name ON table USING (expr)`. | `evolution/parser/evoparser.y` |
| 2 | Store RLS policies — add `CAT_SYS_POLICIES` B+ tree to catalog (extend `CatalogID` enum in `page_mgr.h`). Key: `table_id:policy_name`, value: command + using_expr + check_expr. Implement `cat_create_policy()`, `cat_list_policies_for_table()`, `cat_drop_policy()`. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c`, `evolution/db/page_mgr.h` |
| 3 | Implement policy enforcement — on SELECT, append policy USING expression to WHERE clause. | `adaptor/query_executor.c` |
| 4 | Implement for INSERT — evaluate policy CHECK expression against new row. | `adaptor/query_executor.c` |
| 5 | Implement for UPDATE/DELETE — evaluate USING for existing rows, CHECK for new rows. | `adaptor/query_executor.c` |
| 6 | `CURRENT_USER` function — return session username for policy expressions. | `evolution/db/expression.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_rls.py`: create policy, user A sees own rows only, user B sees own rows, superuser sees all. | `tests/test_rls.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild + manual. | `Dockerfile` |

---

## Day 48 — WAL & File Locking

### Task 94: ✅ WAL / Crash Recovery (Feature #66)

**Goal:** Implement basic Write-Ahead Log for crash recovery.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design WAL format — append-only log: `[LSN][type][page_no][slot_no][data_len][data]`. Types: INSERT, UPDATE, DELETE, COMMIT, CHECKPOINT. WAL at page manager level. | Design |
| 2 | Implement WAL writer — `wal_append()`. Append to `evosql.wal` (separate file from `evosql.db`). Use `fsync()`. | `evolution/db/Wal.c` (new) |
| 3 | Wire INSERT — before `tapi_heap_insert()` + `bt2_insert()`, write WAL record. | `evolution/db/Insert.c` |
| 4 | Wire UPDATE — before `tapi_heap_update()` + `bt2_update()`, write WAL record. | `evolution/db/Update.c` |
| 5 | Wire DELETE — before `tapi_heap_delete()` + `bt2_delete()`, write WAL record. | `evolution/db/Delete.c` |
| 6 | Implement recovery — on startup, read WAL from last checkpoint, replay page writes via `pgm_write_page()`. | `evolution/db/Wal.c`, `evolution/db/page_mgr.h` |
| 7 | Implement checkpoint — flush data files, truncate WAL. | `evolution/db/Wal.c` |
| 8 | Update Makefile. | `evolution/Makefile` |
| 9 | Write unit tests — `tests/test_wal.py`: insert + simulate crash + recovery, checkpoint + recovery. | `tests/test_wal.py` |
| 10 | Run regression + full system test. | `tests/`, `Dockerfile` |

---

### Task 95: ✅ Concurrent Write Safety / Lock Manager (Feature #67)

**Goal:** Replace global mutex with finer-grained concurrency control. Single `evosql.db` file means `flock()` is not suitable — use in-memory lock manager instead.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design — in-memory lock manager with table-level read/write locks (hash map: `table_id → lock_state`). Buffer pool already provides page-level pinning via `bp_pin_page()` / `bp_unpin_page()`. | Design |
| 2 | Implement `table_lock_shared()` / `table_lock_exclusive()` / `table_unlock()` — lightweight in-memory lock manager using pthread rwlocks per table. | `evolution/db/Lock.c` (new), `evolution/db/Lock.h` (new) |
| 3 | Wire into SELECT — shared lock during `tapi_scan`. | `evolution/db/Select.c`, `adaptor/query_executor.c` |
| 4 | Wire into INSERT — exclusive lock during `tapi_heap_insert()` + `bt2_insert()`. | `evolution/db/Insert.c` |
| 5 | Wire into UPDATE/DELETE — exclusive lock during `tapi_heap_update/delete()` + `bt2_update/delete()`. | `evolution/db/Update.c`, `evolution/db/Delete.c` |
| 6 | Deadlock prevention — lock tables in alphabetical order for multi-table ops. | `evolution/db/Lock.c` |
| 7 | Timeout — lock not acquired within 5s → error. | `evolution/db/Lock.c` |
| 8 | Update Makefile. Concurrent stress test. | `evolution/Makefile`, `tests/test_concurrent.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test — Docker rebuild, multi-client stress. | `Dockerfile` |

---

## Day 49 — Connection Pooling & Replication

### Task 96: ✅ Connection Pooling (Feature #68)

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

### Task 97: ✅ Replication (Feature #54)

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

## Day 50–54 — ANALYZE & Query Planner Enhancements

### Task 99: ✅ Histograms — Equi-Depth & Frequency (Feature #101)

**Goal:** Build histogram support for column statistics. Equi-depth histograms for high-NDV columns, frequency histograms for low-NDV columns. MySQL 8.0 + PostgreSQL model: `ANALYZE TABLE t UPDATE HISTOGRAM ON col WITH n BUCKETS`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Design histogram storage: `HistogramDesc` struct — table_id, col_name, histogram_type ('F'=frequency, 'E'=equi-depth), num_buckets, bucket_bounds[], bucket_counts[]. Serialize as semicolon-delimited string in CAT_SYS_TABLE_STATS tree with key `"%010u:H:%s"`. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 2 | Implement frequency histogram builder — for columns where NDV ≤ num_buckets: store each distinct value + its count. Sort by value. | `evolution/db/Analyze.c` |
| 3 | Implement equi-depth histogram builder — for columns where NDV > num_buckets: sort all values, divide into N equal-count buckets, store upper bound + cumulative count per bucket. | `evolution/db/Analyze.c` |
| 4 | Parser: `ANALYZE TABLE t UPDATE HISTOGRAM ON col1, col2 WITH n BUCKETS` and `ANALYZE TABLE t DROP HISTOGRAM ON col1`. Add HISTOGRAM, BUCKETS tokens. | `evolexer.l`, `evoparser.y` |
| 5 | Default behavior: `ANALYZE TABLE t` without HISTOGRAM clause — auto-build histograms for all columns (default 100 buckets). | `evolution/db/Analyze.c` |
| 6 | EXPLAIN integration — use histogram for equality selectivity: look up bucket containing value, estimate rows from bucket count. Replace naive `rows/NDV` when histogram exists. | `adaptor/query_executor.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_histogram.py`: frequency vs equi-depth auto-selection, UPDATE/DROP HISTOGRAM, skewed data selectivity, uniform data selectivity. | `tests/test_histogram.py` |
| 9 | Run regression — all test suites pass. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 100: ✅ Range Selectivity Estimation (Feature #102)

**Goal:** Enable row estimation for range predicates (`>`, `<`, `>=`, `<=`, `BETWEEN`). Use min/max interpolation (no histogram) or histogram bucket interpolation (when histogram exists).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Implement min/max linear interpolation: for `WHERE col > V`, estimate `rows * (max - V) / (max - min)`. Handle numeric and string types. | `adaptor/query_executor.c` |
| 2 | Implement histogram-based range estimation: find bucket boundaries containing the range endpoints, sum full buckets + interpolate partial buckets. | `adaptor/query_executor.c` |
| 3 | Extend EXPLAIN WHERE parser to detect `>`, `<`, `>=`, `<=`, `BETWEEN` operators (currently only `=`). | `adaptor/query_executor.c` |
| 4 | Handle `BETWEEN a AND b` as combined range. | `adaptor/query_executor.c` |
| 5 | Handle `LIKE 'prefix%'` as range: convert to `>= prefix AND < prefix_next`. | `adaptor/query_executor.c` |
| 6 | Combined selectivity for AND/OR: `P(A AND B) = P(A) * P(B)`, `P(A OR B) = P(A) + P(B) - P(A)*P(B)` (independence assumption). | `adaptor/query_executor.c` |
| 7 | Write unit tests — `tests/test_range_selectivity.py`: range estimates with/without histogram, BETWEEN, LIKE prefix, AND/OR combined. | `tests/test_range_selectivity.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 101: ✅ Statistics System Views (Feature #103)

**Goal:** Expose collected statistics via SQL-queryable views: `pg_stats` (column stats + histograms), `pg_stat_user_tables` (table stats + DML counters), `pg_stat_user_indexes` (index stats). Model after PostgreSQL.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `pg_stats` support to catalog emulation — columns: schemaname, tablename, attname, null_frac, n_distinct, avg_width, most_common_vals, most_common_freqs, histogram_bounds. Read from `cat_get_column_stats()` + `cat_get_histogram()`. | `adaptor/catalog.c` |
| 2 | Add `pg_stat_user_tables` — columns: relname, n_live_tup (row_count), n_dead_tup (0), n_mod_since_analyze (dml_since_analyze), last_analyze, last_autoanalyze (NULL). Read from `cat_get_table_stats()`. | `adaptor/catalog.c` |
| 3 | Add `pg_stat_user_indexes` — columns: indexrelname, idx_scan (0), idx_tup_read (total_entries), idx_tup_fetch (0). Plus custom columns: tree_depth, leaf_pages. Read from `cat_get_index_stats()`. | `adaptor/catalog.c` |
| 4 | Wire views into `SELECT * FROM pg_stats WHERE tablename = 'x'` query path. Support WHERE filtering on tablename/attname. | `adaptor/catalog.c` |
| 5 | Test via psql/DBeaver: `SELECT * FROM pg_stats`, `SELECT * FROM pg_stat_user_tables`. | Manual |
| 6 | Write unit tests — `tests/test_stats_views.py`: query pg_stats after ANALYZE, verify row counts, verify null_frac, verify n_distinct. | `tests/test_stats_views.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify DBeaver table statistics tab works. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 102: ✅ Sample-Based ANALYZE (Feature #104)

**Goal:** `ANALYZE TABLE t WITH SAMPLE n PERCENT` and `ANALYZE TABLE t WITH SAMPLE n ROWS`. Avoid full table scan for large tables. Scale distinct count and null count estimates to total population.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: add `WITH SAMPLE n PERCENT` and `WITH SAMPLE n ROWS` optional clauses to `analyze_table_stmt`. Store sample_pct or sample_rows in QueryContext. | `evolexer.l`, `evoparser.y`, `evolution/db/query_context.h` |
| 2 | Implement page-based sampling in AnalyzeTableProcess: randomly select `sample_pct%` of heap pages, scan only those pages. Use rand() seeded with time. | `evolution/db/Analyze.c` |
| 3 | Implement row-based sampling: scan sequentially but skip rows with probability `1 - (sample_rows / estimated_total)`. Use reservoir sampling for exact N. | `evolution/db/Analyze.c` |
| 4 | Scale estimates: `estimated_total = sampled_count * (total_pages / sampled_pages)`. Distinct count: HyperLogLog or linear scaling with correction factor. Null fraction: `sampled_nulls / sampled_rows`. | `evolution/db/Analyze.c` |
| 5 | Default: `ANALYZE TABLE t` without SAMPLE clause — auto-select sample size: full scan if < 10K rows, 10% sample if > 10K rows. | `evolution/db/Analyze.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_sample_analyze.py`: sample vs full scan results within 20% margin, SAMPLE 50 PERCENT, SAMPLE 1000 ROWS. | `tests/test_sample_analyze.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 103: ⬜ Auto-Analyze — Threshold-Based Automatic Statistics (Feature #105)

**Goal:** Automatically re-run ANALYZE when DML changes exceed a configurable threshold. PostgreSQL model: trigger when `dml_since_analyze > threshold + scale_factor * row_count`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add server config: `auto_analyze_threshold` (default 50), `auto_analyze_scale_factor` (default 0.1). Read from env vars `EVOSQL_AUTO_ANALYZE_THRESHOLD` and `EVOSQL_AUTO_ANALYZE_SCALE_FACTOR`. | `adaptor/server.c`, `evolution/db/database_globals.c` |
| 2 | Add `cat_check_staleness()`: compare `dml_since_analyze` against `threshold + scale_factor * row_count`. Return 1 if stale. | `evolution/db/catalog_internal.c` |
| 3 | Implement auto-analyze trigger point: after query execution completes (not during), check staleness for the touched table. Run ANALYZE asynchronously if stale. | `adaptor/query_executor.c` |
| 4 | Prevent re-entrant ANALYZE: use a per-table "analyze in progress" flag to avoid concurrent auto-analyze. | `evolution/db/Analyze.c` |
| 5 | Add `SET auto_analyze = OFF` to disable per-session. | `adaptor/catalog.c` |
| 6 | Log auto-analyze events: `"AUTO-ANALYZE: table '%s' (%lu DML changes, threshold %lu)"`. | `evolution/db/Analyze.c` |
| 7 | Write unit tests — `tests/test_auto_analyze.py`: insert > threshold rows, verify stats updated automatically on next query. | `tests/test_auto_analyze.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 104: ⬜ EXPLAIN ANALYZE — Actual vs Estimated Row Counts (Feature #106)

**Goal:** `EXPLAIN ANALYZE SELECT ...` actually executes the query and reports actual row counts alongside estimated counts. PostgreSQL model: `"Seq Scan on t (rows=100) (actual rows=95, time=1.2ms)"`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Detect `EXPLAIN ANALYZE` prefix (vs plain `EXPLAIN`). Strip prefix and parse inner query. | `adaptor/query_executor.c` |
| 2 | Execute the inner query with instrumentation: wrap SelectProcess with timing (gettimeofday before/after) and actual row counter. | `adaptor/query_executor.c` |
| 3 | Collect actual metrics: actual_rows (from g_selectCount or result row count), actual_time_ms (wall clock). | `adaptor/query_executor.c` |
| 4 | Format output: `"Seq Scan on t (est. rows=100) (actual rows=95, time=1.234ms)"`. Include both estimated and actual in same line. | `adaptor/query_executor.c` |
| 5 | Handle non-SELECT: `EXPLAIN ANALYZE INSERT/UPDATE/DELETE` — report affected_rows and time. | `adaptor/query_executor.c` |
| 6 | Write unit tests — `tests/test_explain_analyze.py`: compare estimated vs actual, verify timing present, verify INSERT/UPDATE/DELETE support. | `tests/test_explain_analyze.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 105: ⬜ Clustering Factor & Correlation (Feature #107)

**Goal:** Compute clustering factor (Oracle) / correlation (PostgreSQL) during ANALYZE. Measures how well the physical row order matches the index key order. Critical for cost-based index scan vs full scan decision.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `clustering_factor` (uint64_t) and `correlation` (double) fields to `IndexStatsDesc`. Update serialize/deserialize. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 2 | Implement clustering factor computation in `bt2_stats()` or as separate function: scan index leaf chain in key order, for each consecutive pair of RowIDs check if they're on the same heap page. Clustering factor = number of page changes. | `evolution/db/btree2.c` or `evolution/db/Analyze.c` |
| 3 | Implement correlation computation: Pearson correlation between index key rank and physical RowID rank. Values near ±1.0 = well-clustered, near 0.0 = random. | `evolution/db/Analyze.c` |
| 4 | Store in catalog via extended `cat_store_index_stats()`. | `evolution/db/catalog_internal.c` |
| 5 | Expose in EXPLAIN: when clustering_factor is high relative to row_count, note "poorly clustered" in plan output. | `adaptor/query_executor.c` |
| 6 | Expose in `pg_stat_user_indexes` view (if Task 101 done). | `adaptor/catalog.c` |
| 7 | Write unit tests — `tests/test_clustering.py`: sequential insert (high correlation), random insert (low correlation), verify values after ANALYZE. | `tests/test_clustering.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 106: ⬜ Cost-Based Optimizer — Index vs Full Scan (Feature #108)

**Goal:** Replace rule-based "always use index if available" with cost-based comparison: estimate I/O cost of full table scan vs index scan + heap lookups. Choose the cheaper plan.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Define cost model constants: `SEQ_PAGE_COST = 1.0`, `RANDOM_PAGE_COST = 4.0`, `CPU_TUPLE_COST = 0.01`, `CPU_INDEX_TUPLE_COST = 0.005` (PostgreSQL defaults). Store as globals, configurable via `SET` commands. | `evolution/db/database_globals.c`, `evolution/db/database.h` |
| 2 | Implement `cost_seq_scan()`: `cost = page_count * SEQ_PAGE_COST + row_count * CPU_TUPLE_COST`. Uses table stats. | `adaptor/query_executor.c` |
| 3 | Implement `cost_index_scan()`: `cost = (selectivity * row_count * clustering_factor / page_count) * RANDOM_PAGE_COST + selectivity * row_count * CPU_INDEX_TUPLE_COST + tree_depth * RANDOM_PAGE_COST`. Uses index stats + selectivity estimate. | `adaptor/query_executor.c` |
| 4 | Plan selection: compute both costs, choose lower. If no stats available, fall back to rule-based (use index). | `adaptor/query_executor.c` |
| 5 | Show cost in EXPLAIN: `"Seq Scan on t (cost=0.00..35.50 rows=100)"` or `"Index Scan using idx on t (cost=0.28..8.27 rows=1)"`. | `adaptor/query_executor.c` |
| 6 | Handle edge cases: empty table (always seq scan), no index (always seq scan), PK lookup (always index). | `adaptor/query_executor.c` |
| 7 | Write unit tests — `tests/test_cost_optimizer.py`: high selectivity prefers index, low selectivity (full scan) prefers seq scan, cost values in EXPLAIN, no-stats fallback. | `tests/test_cost_optimizer.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 107: ⬜ Multi-Column & Expression Statistics (Feature #109)

**Goal:** `CREATE STATISTICS s ON (col1, col2) FROM t` for correlated columns. Also expression statistics for functional indexes. PostgreSQL 10+ model.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `CREATE STATISTICS name ON (col1, col2) FROM table` and `DROP STATISTICS name`. Add STATISTICS token. | `evolexer.l`, `evoparser.y` |
| 2 | Store multi-column stats in catalog: `MultiColStatsDesc` — stat_name, table_id, col_list, ndistinct (combined NDV), dependency info. New catalog tree `CAT_SYS_MULTI_STATS` or reuse stats tree. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 3 | Compute combined NDV during ANALYZE: scan table, build composite key from (col1, col2), count distinct. | `evolution/db/Analyze.c` |
| 4 | Use in EXPLAIN: for multi-column WHERE (col1 = X AND col2 = Y), use combined NDV instead of `NDV1 * NDV2` (independence assumption). | `adaptor/query_executor.c` |
| 5 | Expression statistics: `CREATE STATISTICS s ON (UPPER(col)) FROM t` — reuse expression index infrastructure for key building. | `evolution/db/Analyze.c`, `evolution/db/Index.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_multi_col_stats.py`: correlated columns, combined NDV, expression stats, EXPLAIN with multi-col stats. | `tests/test_multi_col_stats.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 108: ⬜ Column-Specific & Schema-Wide ANALYZE (Feature #110)

**Goal:** `ANALYZE TABLE t (col1, col2)` to analyze specific columns only. `ANALYZE SCHEMA s` / `ANALYZE DATABASE` to analyze all tables in scope.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: extend `analyze_table_stmt` to accept optional column list: `ANALYZE TABLE name '(' column_list ')'`. | `evoparser.y` |
| 2 | Store column list in QueryContext. In AnalyzeTableProcess, if column list provided, only compute stats for those columns (skip others). | `evolution/db/query_context.h`, `evolution/db/Analyze.c` |
| 3 | Parser: `ANALYZE SCHEMA name` rule. | `evoparser.y` |
| 4 | Implement AnalyzeSchemaProcess: iterate all tables in schema via `cat_list_tables()`, call AnalyzeTableProcess for each. | `evolution/db/Analyze.c` |
| 5 | Parser: `ANALYZE DATABASE name` rule. | `evoparser.y` |
| 6 | Implement AnalyzeDatabaseProcess: iterate all schemas via `cat_list_schemas()`, then all tables per schema. | `evolution/db/Analyze.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_analyze_scope.py`: column-specific analyze, schema-wide analyze, database-wide analyze. | `tests/test_analyze_scope.py` |
| 9 | Run regression. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 109: ⬜ Top-N & Hybrid Histograms (Feature #111)

**Goal:** Extend histogram support with Top-N (Oracle 12c) and Hybrid (MySQL 8.0) histogram types. Top-N stores the most frequent values when they cover a significant portion of rows. Hybrid combines singleton buckets for popular values with equi-depth for the rest.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Implement Top-N histogram: during ANALYZE, identify values whose combined frequency exceeds a threshold (e.g., top values covering > 50% of rows). Store as frequency histogram with just those values. | `evolution/db/Analyze.c` |
| 2 | Implement Hybrid histogram: for remaining values not in Top-N, build equi-depth buckets. Store both MCV (most common values) list and equi-depth bounds in the same histogram. | `evolution/db/Analyze.c` |
| 3 | Extend `HistogramDesc` to support hybrid type ('H'): add `mcv_values[]`, `mcv_freqs[]` fields alongside bucket bounds. Update serialize/deserialize. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 4 | Auto-selection logic: frequency if NDV ≤ buckets, top-N if top values dominate, hybrid if skewed, equi-depth if uniform. | `evolution/db/Analyze.c` |
| 5 | EXPLAIN integration: for equality on MCV value, use exact frequency; for non-MCV value, use equi-depth bucket estimation. | `adaptor/query_executor.c` |
| 6 | Write unit tests — `tests/test_histogram_advanced.py`: top-N detection with Zipf distribution, hybrid histogram, MCV vs non-MCV selectivity. | `tests/test_histogram_advanced.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver/psql. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 110: ⬜ Most Common Values (MCV) Lists (Feature #112)

**Goal:** Store Most Common Values and their frequencies per column during ANALYZE. PostgreSQL model: `most_common_vals` and `most_common_freqs` arrays in `pg_stats`. Used by optimizer for non-uniform selectivity estimation.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Extend `ColumnStatsDesc` with `mcv_values[32][256]` and `mcv_freqs[32]` (top 32 most common values + frequencies). | `evolution/db/catalog_internal.h` |
| 2 | During ANALYZE, after distinct counting, identify the top-N most frequent values from the `DistinctSet`. Track value→count mapping (extend dset or use separate counter). | `evolution/db/Analyze.c` |
| 3 | Sort by frequency descending, store top 32 (or configurable `default_statistics_target`). Compute frequency as `count / row_count`. | `evolution/db/Analyze.c` |
| 4 | Serialize/deserialize MCV arrays to catalog (semicolon-delimited within the column stats record, use `\x1f` separator between value-freq pairs). | `evolution/db/catalog_internal.c` |
| 5 | EXPLAIN integration: for `WHERE col = 'val'`, first check if val is in MCV list. If yes, use exact frequency. If no, estimate from remaining rows: `(1 - sum(mcv_freqs)) / (NDV - mcv_count)`. | `adaptor/query_executor.c` |
| 6 | Expose in `pg_stats` view (if Task 101 done): `most_common_vals`, `most_common_freqs` columns. | `adaptor/catalog.c` |
| 7 | Write unit tests — `tests/test_mcv.py`: skewed data MCV detection, MCV-based selectivity vs naive NDV, MCV exposed in pg_stats. | `tests/test_mcv.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 111: ⬜ Functional Dependency Statistics (Feature #113)

**Goal:** `CREATE STATISTICS s (dependencies) ON col1, col2 FROM t` — detect functional dependencies between columns. PostgreSQL 10+ model. When col1 determines col2, optimizer avoids over-estimating multi-column WHERE selectivity.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: extend `CREATE STATISTICS` (Task 107) to accept optional `(dependencies)` clause. | `evoparser.y` |
| 2 | Implement dependency detection: for each column pair (A, B), compute `degree_of_dependency = 1 - (NDV(A,B) - NDV(A)) / row_count`. Values close to 1.0 mean A→B dependency. | `evolution/db/Analyze.c` |
| 3 | Store dependency matrix in catalog: `MultiColStatsDesc.dependencies` — serialized as `"col1=>col2:0.95;col2=>col1:0.02"`. | `evolution/db/catalog_internal.c` |
| 4 | EXPLAIN integration: when `WHERE col1 = X AND col2 = Y` and strong dependency A→B exists, use `selectivity(A)` instead of `selectivity(A) * selectivity(B)`. | `adaptor/query_executor.c` |
| 5 | Write unit tests — `tests/test_dependencies.py`: country→city dependency, independent columns, dependency-adjusted selectivity. | `tests/test_dependencies.py` |
| 6 | Run regression. | `tests/` |
| 7 | Full system test. | `Dockerfile` |
| 8 | Verify with DBeaver/psql. | Manual |
| 9 | Update wiki. | Wiki |
| 10 | Regenerate parser. | `evolution/parser/` |

---

### Task 112: ⬜ Filtered Statistics (Feature #114)

**Goal:** `CREATE STATISTICS s ON col FROM t WHERE status = 'active'` — statistics computed only for rows matching a filter predicate. SQL Server model. Useful for multi-tenant tables or partitioned-by-value data.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: extend `CREATE STATISTICS` to accept optional `WHERE` clause. Store filter expression in catalog. | `evoparser.y` |
| 2 | Store filtered stats in catalog: `FilteredStatsDesc` — stat_name, table_id, col_list, filter_expr (serialized RPN), stats values. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 3 | During ANALYZE for filtered stats: evaluate filter predicate per row, only include matching rows in stats computation. Reuse `evaluate_expr()` from expression.c. | `evolution/db/Analyze.c` |
| 4 | EXPLAIN integration: when WHERE clause matches a filtered stat's filter, use the filtered stats for selectivity. | `adaptor/query_executor.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_filtered_stats.py`: filtered stats on active rows, unfiltered vs filtered selectivity difference. | `tests/test_filtered_stats.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver/psql. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 113: ⬜ Statistics Locking & Freezing (Feature #115)

**Goal:** Prevent statistics from being overwritten by subsequent ANALYZE. Oracle model: `LOCK STATISTICS ON TABLE t` / `UNLOCK STATISTICS ON TABLE t`. SQL Server model: `UPDATE STATISTICS ... WITH NORECOMPUTE`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `LOCK STATISTICS ON TABLE name` and `UNLOCK STATISTICS ON TABLE name`. Add LOCK, UNLOCK, STATISTICS tokens (STATISTICS already added in Task 107). | `evolexer.l`, `evoparser.y` |
| 2 | Add `stats_locked` (int, 0/1) field to `TableStatsDesc`. Update serialize/deserialize. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 3 | Implement LockStatsProcess / UnlockStatsProcess: set/clear `stats_locked` flag in catalog. | `evolution/db/Analyze.c` |
| 4 | Guard in AnalyzeTableProcess: if `stats_locked == 1`, print warning and skip analysis (don't overwrite). | `evolution/db/Analyze.c` |
| 5 | Guard in auto-analyze (if Task 103 done): skip locked tables. | `adaptor/query_executor.c` |
| 6 | `ANALYZE TABLE t FORCE` — override lock for explicit force-analyze. | `evoparser.y`, `evolution/db/Analyze.c` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_stats_lock.py`: lock, analyze fails silently, unlock, analyze succeeds, FORCE overrides lock. | `tests/test_stats_lock.py` |
| 9 | Run regression. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 114: ⬜ Manual Statistics Setting (Feature #116)

**Goal:** Allow manually setting statistics values without running ANALYZE. Oracle model: `DBMS_STATS.SET_TABLE_STATS(numrows => 1000000)`. Useful for testing optimizer behavior or when actual ANALYZE is too expensive.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `SET STATISTICS ON TABLE name (ROW_COUNT = n, PAGE_COUNT = n)` and `SET STATISTICS ON TABLE name COLUMN col (DISTINCT_COUNT = n, NULL_COUNT = n)`. | `evoparser.y` |
| 2 | Implement SetTableStatsProcess: validate parameters, build `TableStatsDesc`, call `cat_store_table_stats()`. | `evolution/db/Analyze.c` |
| 3 | Implement SetColumnStatsProcess: validate parameters, build `ColumnStatsDesc`, call `cat_store_column_stats()`. | `evolution/db/Analyze.c` |
| 4 | `RESET STATISTICS ON TABLE name` — delete stored stats, forcing EXPLAIN to show no estimate. | `evolution/db/Analyze.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_manual_stats.py`: set row_count, verify EXPLAIN uses it, set distinct_count, reset stats. | `tests/test_manual_stats.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver/psql. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 115: ⬜ Statistics Export & Import (Feature #117)

**Goal:** Export statistics to a staging table and import them in another environment. Oracle model: `DBMS_STATS.EXPORT_TABLE_STATS` / `IMPORT_TABLE_STATS`. Useful for reproducing production query plans in development.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `EXPORT STATISTICS ON TABLE name TO staging_table` and `IMPORT STATISTICS ON TABLE name FROM staging_table`. Add EXPORT, IMPORT tokens. | `evolexer.l`, `evoparser.y` |
| 2 | ExportStatsProcess: create staging table with schema (table_name, stat_type, stat_key, stat_value), INSERT all table/column/index stats as rows. | `evolution/db/Analyze.c` |
| 3 | ImportStatsProcess: SELECT from staging table, parse rows, call `cat_store_table_stats()` / `cat_store_column_stats()` / `cat_store_index_stats()`. | `evolution/db/Analyze.c` |
| 4 | Handle cross-table-id mapping: when importing, resolve table by name (not ID) since IDs differ between environments. | `evolution/db/Analyze.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_stats_export.py`: export stats, drop and re-create table, import stats, verify EXPLAIN uses imported values. | `tests/test_stats_export.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver/psql. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 116: ⬜ Pending Statistics — Test Before Publish (Feature #118)

**Goal:** Gather statistics into a pending area without affecting the optimizer. Test them with `SET use_pending_statistics = ON`, then publish or discard. Oracle model: `DBMS_STATS.SET_TABLE_PREFS('PUBLISH','FALSE')`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `is_pending` (int, 0/1) field to `TableStatsDesc` and `ColumnStatsDesc`. Pending stats stored alongside published stats with different key prefix (`P:` instead of `_`). | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 2 | Parser: `ANALYZE TABLE t WITH PENDING` — gathers stats but marks them as pending. | `evoparser.y`, `evolution/db/Analyze.c` |
| 3 | Session variable: `SET use_pending_statistics = ON/OFF`. When ON, EXPLAIN reads pending stats; when OFF, reads published stats. | `adaptor/catalog.c`, `adaptor/query_executor.c` |
| 4 | `PUBLISH STATISTICS ON TABLE name` — copy pending stats to published, delete pending. | `evolution/db/Analyze.c` |
| 5 | `DISCARD PENDING STATISTICS ON TABLE name` — delete pending stats without publishing. | `evolution/db/Analyze.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_pending_stats.py`: gather pending, EXPLAIN with/without pending, publish, discard. | `tests/test_pending_stats.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 117: ⬜ EXPLAIN Output Formats — JSON, XML, TEXT (Feature #119)

**Goal:** Support multiple EXPLAIN output formats. PostgreSQL model: `EXPLAIN (FORMAT JSON) SELECT ...`, `EXPLAIN (FORMAT XML) SELECT ...`, `EXPLAIN (FORMAT YAML) SELECT ...`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: detect `EXPLAIN (FORMAT JSON)`, `EXPLAIN (FORMAT XML)`, `EXPLAIN (FORMAT TEXT)` prefix patterns. Default remains TEXT. Store format in a local variable. | `adaptor/query_executor.c` |
| 2 | Refactor EXPLAIN to build a plan struct (PlanNode: scan_type, table_name, index_name, estimated_rows, cost, filter) instead of directly formatting a string. | `adaptor/query_executor.c` |
| 3 | TEXT formatter: current single-line format (backward compatible). | `adaptor/query_executor.c` |
| 4 | JSON formatter: `{"Plan": {"Node Type": "Seq Scan", "Relation Name": "t", "Estimated Rows": 100, "Cost": 35.5}}`. Return as single-column result. | `adaptor/query_executor.c` |
| 5 | XML formatter: `<Plan><NodeType>Seq Scan</NodeType><RelationName>t</RelationName>...</Plan>`. | `adaptor/query_executor.c` |
| 6 | YAML formatter: `Plan:\n  Node Type: Seq Scan\n  Relation Name: t\n  ...`. | `adaptor/query_executor.c` |
| 7 | Write unit tests — `tests/test_explain_formats.py`: TEXT/JSON/XML/YAML output, parse JSON output, verify all fields present. | `tests/test_explain_formats.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver (uses JSON EXPLAIN for plan visualization). | Manual |

---

### Task 118: ⬜ Extended Table & Column Metrics (Feature #120)

**Goal:** Compute additional statistics during ANALYZE: density (1/NDV), average row length, table size in bytes, correlation between column values and physical row order. Exposes via system views.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `density` (double) to `ColumnStatsDesc`: computed as `1.0 / distinct_count` (or 1.0 if distinct_count == 0). Store in catalog. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 2 | Add `avg_row_length` (int) to `TableStatsDesc`: sum of all column `avg_width` values. Computed during ANALYZE. | `evolution/db/catalog_internal.h`, `evolution/db/Analyze.c` |
| 3 | Add `table_size_bytes` (uint64_t) to `TableStatsDesc`: `page_count * EVO_PAGE_SIZE`. | `evolution/db/catalog_internal.h`, `evolution/db/Analyze.c` |
| 4 | Compute per-column `correlation` (double): Pearson correlation between column value rank and physical row position. Values near ±1.0 = ordered, near 0 = random. | `evolution/db/Analyze.c` |
| 5 | Store correlation in `ColumnStatsDesc`. Update serialize/deserialize. | `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c` |
| 6 | Expose all new fields in system views (pg_stats, pg_stat_user_tables) if Task 101 done. | `adaptor/catalog.c` |
| 7 | Update EXPLAIN to use density instead of computing `1/NDV` on the fly. | `adaptor/query_executor.c` |
| 8 | Write unit tests — `tests/test_extended_stats.py`: density, avg_row_length, table_size_bytes, correlation values. | `tests/test_extended_stats.py` |
| 9 | Run regression. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 119: ⬜ TABLESAMPLE Clause (Feature #121)

**Goal:** `SELECT * FROM t TABLESAMPLE BERNOULLI(10)` and `TABLESAMPLE SYSTEM(5)` — return a random sample of rows. PostgreSQL model. Useful for ad-hoc data exploration and manual statistics verification.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `FROM name TABLESAMPLE BERNOULLI '(' number ')'` and `FROM name TABLESAMPLE SYSTEM '(' number ')'`. Add TABLESAMPLE, BERNOULLI, SYSTEM tokens. Store sample method + percentage in QueryContext. | `evolexer.l`, `evoparser.y`, `evolution/db/query_context.h` |
| 2 | BERNOULLI sampling in SelectProcess: for each row in table scan, include with probability `pct/100` using `rand()`. Row-level granularity — unbiased but scans all pages. | `evolution/db/Select.c` |
| 3 | SYSTEM sampling in SelectProcess: randomly select `pct%` of heap pages, return all rows from selected pages. Page-level granularity — faster but clustered bias. | `evolution/db/Select.c` |
| 4 | Optional: `REPEATABLE(seed)` clause for deterministic sampling: `TABLESAMPLE BERNOULLI(10) REPEATABLE(42)`. Seed the PRNG for reproducible results. | `evoparser.y`, `evolution/db/Select.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_tablesample.py`: BERNOULLI ~10% of rows returned (within margin), SYSTEM returns full pages, REPEATABLE produces same result, 0% = no rows, 100% = all rows. | `tests/test_tablesample.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver/psql. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 120: ⬜ Incremental Statistics for Partitioned Tables (Feature #122)

**Goal:** When table partitioning exists (Task 88), compute per-partition statistics and aggregate to global stats without re-scanning the entire table. Oracle model: `DBMS_STATS.GATHER_TABLE_STATS(INCREMENTAL => TRUE)`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Extend `TableStatsDesc` with `is_incremental` flag. When enabled, per-partition stats are gathered and global stats are derived from partition synopses. | `evolution/db/catalog_internal.h` |
| 2 | Per-partition ANALYZE: `ANALYZE TABLE t PARTITION p1` — analyze only the specified partition. Store partition-level stats with key `"%010u:P:%s"` (table_id, partition_name). | `evolution/db/Analyze.c`, `evolution/db/catalog_internal.c` |
| 3 | Global stats aggregation: sum row_count, sum page_count, merge NDV using HyperLogLog sketches (approximate NDV across partitions without full scan). | `evolution/db/Analyze.c` |
| 4 | HyperLogLog implementation: compact 64-byte sketch per column per partition. Merge by taking max of corresponding registers. | `evolution/db/Analyze.c` |
| 5 | Histogram aggregation: merge equi-depth histograms from partitions by re-bucketing combined boundary sets. | `evolution/db/Analyze.c` |
| 6 | Parser: `ANALYZE TABLE t PARTITION name` rule. | `evoparser.y` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_incremental_stats.py`: per-partition analyze, global aggregation correctness, incremental after INSERT to one partition. | `tests/test_incremental_stats.py` |
| 9 | Run regression. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

## Day 61–63 — LIMIT / TOP / FETCH Enhancements

### Task 121: ⬜ FETCH FIRST/NEXT N ROWS ONLY — SQL:2008 Standard (Feature #123)

**Goal:** SQL:2008 standard row limiting: `FETCH FIRST N ROWS ONLY`, `FETCH NEXT N ROWS ONLY`, `OFFSET M ROWS FETCH FIRST N ROWS ONLY`. Tüm major DB'ler destekliyor (PG, MySQL 8.0+, MSSQL 2012+, Oracle 12c+).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Lexer: FETCH, FIRST, NEXT, ROW, ROWS, ONLY tokenleri ekle. | `evolexer.l` |
| 2 | Parser: `opt_fetch` kuralı — `FETCH FIRST expr ROW/ROWS ONLY` ve `FETCH NEXT expr ROW/ROWS ONLY`. `g_limitExpr`'e atama (mevcut LIMIT altyapısını kullan). | `evoparser.y` |
| 3 | Parser: `OFFSET expr ROW/ROWS` standalone kuralı — `g_offsetExpr`'e atama. `opt_limit` kuralına `opt_offset opt_fetch` alternatifleri ekle. | `evoparser.y` |
| 4 | `OFFSET M ROWS FETCH FIRST N ROWS ONLY` combined sözdizimi. | `evoparser.y` |
| 5 | `FETCH FIRST 1 ROW ONLY` (tekil ROW) ve `FETCH NEXT 5 ROWS ONLY` (çoğul ROWS) her ikisini de destekle. | `evoparser.y` |
| 6 | Mevcut `expr_eval_limit_range()` altyapısı yeniden kullanılır — yeni kod gerekmez. | — |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_fetch.py`: FETCH FIRST, FETCH NEXT, OFFSET ROWS FETCH, ROW vs ROWS, SELECT/DELETE/UPDATE ile kombinasyon. | `tests/test_fetch.py` |
| 9 | Run regression. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 122: ⬜ TOP N — T-SQL Uyumluluk (Feature #124)

**Goal:** `SELECT TOP N ...`, `SELECT TOP(N) ...`, `DELETE TOP(N) FROM ...`, `UPDATE TOP(N) ... SET ...`. MSSQL migration desteği.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Lexer: TOP tokeni ekle. | `evolexer.l` |
| 2 | Parser: `select_opts` kuralına `TOP expr` ve `TOP '(' expr ')'` alternatifleri ekle. `g_limitExpr`'e atama. | `evoparser.y` |
| 3 | Parser: `delete_opts` kuralına `TOP '(' expr ')'` ekle. | `evoparser.y` |
| 4 | Parser: `update_opts` kuralına `TOP '(' expr ')'` ekle. | `evoparser.y` |
| 5 | TOP ile LIMIT birlikte kullanılırsa hata ver (çakışma). | `evolution/db/Select.c` veya `adaptor/query_executor.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_top.py`: SELECT TOP N, TOP(N), DELETE TOP(N), UPDATE TOP(N), TOP + ORDER BY, TOP + WHERE. | `tests/test_top.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 123: ⬜ TOP N PERCENT (Feature #125)

**Goal:** `SELECT TOP N PERCENT ...` ve `DELETE/UPDATE TOP(N) PERCENT ...`. Toplam satır sayısının yüzdesini döndürür. MSSQL özelliği.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Lexer: PERCENT tokeni ekle. | `evolexer.l` |
| 2 | Parser: TOP kurallarına opsiyonel PERCENT ekle. QueryContext'e `g_topPercent` (int 0/1) flag'i ekle. | `evoparser.y`, `evolution/db/query_context.h` |
| 3 | `expr_eval_limit_range()` fonksiyonuna percent modu ekle: `limit = (match_count * percent_val) / 100`, yukarı yuvarlama (CEILING). | `evolution/db/expression.c` |
| 4 | SELECT, DELETE, UPDATE için PERCENT desteği. | `adaptor/query_executor.c`, `evolution/db/Delete.c`, `evolution/db/Update.c` |
| 5 | Edge case: PERCENT 0 = 0 satır, PERCENT 100 = tümü, PERCENT > 100 = tümü. | `evolution/db/expression.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_top_percent.py`: TOP 10 PERCENT, TOP 50 PERCENT, TOP 100 PERCENT, TOP 0 PERCENT, PERCENT + WHERE. | `tests/test_top_percent.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 124: ⬜ WITH TIES (Feature #126)

**Goal:** `SELECT TOP N WITH TIES ...` ve `FETCH FIRST N ROWS WITH TIES`. ORDER BY son değeriyle eşit olan ek satırları da dahil eder. PG 13+, Oracle 12c+, MSSQL.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Lexer: TIES tokeni ekle (WITH zaten var). | `evolexer.l` |
| 2 | Parser: `opt_fetch` kuralına `FETCH FIRST expr ROWS WITH TIES` alternatifi ekle. `g_withTies` flag'i QueryContext'e ekle. TOP kurallarına da `WITH TIES` ekle. | `evoparser.y`, `evolution/db/query_context.h` |
| 3 | `expr_eval_limit_range()` sonrasında WITH TIES kontrolü: son satırın ORDER BY değerini al, aynı değere sahip ek satırları dahil et. `effectiveEnd`'i genişlet. | `adaptor/query_executor.c` |
| 4 | ORDER BY zorunluluk kontrolü: WITH TIES kullanılıp ORDER BY yoksa hata ver. | `adaptor/query_executor.c` |
| 5 | DELETE ve UPDATE için WITH TIES: match listesinde son eşleşen değerle aynı ORDER BY değerine sahip satırları dahil et. | `evolution/db/Delete.c`, `evolution/db/Update.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_with_ties.py`: TOP 3 WITH TIES (4+ döner), FETCH FIRST 3 ROWS WITH TIES, WITH TIES + no ORDER BY → hata, tüm satırlar eşit → hepsi döner. | `tests/test_with_ties.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 125: ⬜ FETCH FIRST N PERCENT ROWS ONLY (Feature #127)

**Goal:** `FETCH FIRST N PERCENT ROWS ONLY` — Oracle 12c+ row limiting clause ile yüzdelik. SQL standard extension.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `opt_fetch` kuralına `FETCH FIRST expr PERCENT ROW/ROWS ONLY` alternatifi ekle. `g_topPercent` flag'ini set et. | `evoparser.y` |
| 2 | Mevcut PERCENT altyapısını (Task 123) yeniden kullan — `expr_eval_limit_range()` percent modu. | — |
| 3 | `FETCH FIRST 10 PERCENT ROWS WITH TIES` kombinasyonu (Task 124 ile birlikte). | `evoparser.y` |
| 4 | Regenerate parser. | `evolution/parser/` |
| 5 | Write unit tests — `tests/test_fetch_percent.py`: FETCH FIRST 25 PERCENT, FETCH FIRST 50 PERCENT ROWS WITH TIES. | `tests/test_fetch_percent.py` |
| 6 | Run regression. | `tests/` |
| 7 | Full system test. | `Dockerfile` |
| 8 | Verify with DBeaver/psql. | Manual |
| 9 | Update wiki. | Wiki |
| 10 | Verify with psql. | Manual |

---

### Task 126: ⬜ LIMIT ALL / LIMIT NULL & OFFSET Without LIMIT (Feature #128)

**Goal:** PostgreSQL uyumlu edge case sözdizimi: `LIMIT ALL` (limit yok), `LIMIT NULL` (limit yok), `OFFSET N` (LIMIT olmadan sadece offset — tüm satırlar offset sonrasından).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Lexer: ALL tokeni zaten var mı kontrol et (yoksa ekle). | `evolexer.l` |
| 2 | Parser: `opt_limit` kuralına `LIMIT ALL` alternatifi ekle — `g_limitExpr = NULL` (no limit). | `evoparser.y` |
| 3 | Parser: `LIMIT NULL` → `g_limitExpr = NULL`. NULL literal'i expression olarak parse edilecek, `expr_eval_limit_range()` içinde NULL sonucunu no-limit olarak yorumla. | `evoparser.y`, `evolution/db/expression.c` |
| 4 | Parser: `OFFSET expr` standalone (LIMIT olmadan) — `g_offsetExpr` set, `g_limitExpr = NULL`. `expr_eval_limit_range()` zaten LIMIT yoksa tüm satırları döndürüyor, sadece offset'i uygula. | `evoparser.y`, `evolution/db/expression.c` |
| 5 | `expr_eval_limit_range()` güncelle: `g_offsetExpr` varken `g_limitExpr` yoksa, `end = match_count` (offset sonrası tümü). | `evolution/db/expression.c` |
| 6 | Regenerate parser. | `evolution/parser/` |
| 7 | Write unit tests — `tests/test_limit_edge.py`: LIMIT ALL, LIMIT NULL, OFFSET 5 (LIMIT olmadan), OFFSET 0 (noop). | `tests/test_limit_edge.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 127: ⬜ Early Termination for LIMIT (Feature #129)

**Goal:** LIMIT N ile sorgu çalıştırırken N satır bulunduktan sonra taramayı durdur. Şu anda tüm eşleşen satırlar toplanıp sonra kesiliyor — büyük tablolarda ciddi performans kaybı.

| Step | Description | Files |
|------|-------------|-------|
| 1 | SELECT: `collect_select_results()` içinde LIMIT kontrolü — N satır toplandığında scan'i durdur. OFFSET varsa `offset + limit` kadar satır topla. | `adaptor/query_executor.c` |
| 2 | DELETE: `DeleteProcess()` WHERE scan loop'unda `matchCount >= offset + limit` olunca `break`. | `evolution/db/Delete.c` |
| 3 | UPDATE: `UpdateProcess()` WHERE scan loop'unda `matchCount >= offset + limit` olunca `break`. | `evolution/db/Update.c` |
| 4 | ORDER BY + LIMIT: ORDER BY varsa early termination yapılamaz (tüm satırlar sıralanmalı). Bu durumu tespit et ve early termination'ı devre dışı bırak. | `adaptor/query_executor.c` |
| 5 | GROUP BY/HAVING + LIMIT: Benzer kısıtlama — aggregation tamamlanmalı. | `adaptor/query_executor.c` |
| 6 | Index scan + LIMIT: PK veya sıralı index scan'de zaten sıralı olduğundan ORDER BY + LIMIT'te bile early termination yapılabilir. | `adaptor/query_executor.c` |
| 7 | Write unit tests — `tests/test_limit_perf.py`: büyük tablo (1000 satır), LIMIT 5'in hızlı olması, ORDER BY + LIMIT, GROUP BY + LIMIT. | `tests/test_limit_perf.py` |
| 8 | Run regression. | `tests/` |
| 9 | Full system test. | `Dockerfile` |
| 10 | Verify with DBeaver/psql. | Manual |

---

### Task 128: ⬜ EXPLAIN'de LIMIT Node Gösterimi (Feature #130)

**Goal:** EXPLAIN çıktısında LIMIT/OFFSET bilgisini göster. PostgreSQL model: `"Limit (rows=10)"` alt node'u. LIMIT kullanıldığında plan'da görünür olsun.

| Step | Description | Files |
|------|-------------|-------|
| 1 | EXPLAIN çıktısına LIMIT bilgisi ekle: LIMIT varsa `"  -> Limit (rows=N)"` veya `"  -> Limit (rows=N, offset=M)"` satırı ekle. | `adaptor/query_executor.c` |
| 2 | TOP veya FETCH kullanıldığında da aynı LIMIT node'u göster. | `adaptor/query_executor.c` |
| 3 | WITH TIES kullanıldığında `"  -> Limit (rows=N, with_ties=true)"`. | `adaptor/query_executor.c` |
| 4 | PERCENT kullanıldığında `"  -> Limit (pct=10%)"`. | `adaptor/query_executor.c` |
| 5 | Write unit tests — `tests/test_explain_limit.py`: EXPLAIN SELECT ... LIMIT, EXPLAIN DELETE ... LIMIT, EXPLAIN UPDATE ... LIMIT. | `tests/test_explain_limit.py` |
| 6 | Run regression. | `tests/` |
| 7 | Full system test. | `Dockerfile` |
| 8 | Verify with DBeaver/psql. | Manual |
| 9 | Update wiki. | Wiki |
| 10 | Verify EXPLAIN ANALYZE (Task 104) ile kombinasyon. | Manual |

---

### Task 129: ⬜ SQL_CALC_FOUND_ROWS & FOUND_ROWS() (Feature #131)

**Goal:** `SELECT SQL_CALC_FOUND_ROWS * FROM t LIMIT 10` sonrasında `SELECT FOUND_ROWS()` ile LIMIT öncesi toplam satır sayısını döndür. MySQL uyumluluk (8.0.17'de deprecated ama yaygın kullanımlı).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Lexer: SQL_CALC_FOUND_ROWS tokeni zaten var. FOUND_ROWS fonksiyon tokeni ekle: `FOUND_ROWS/"("`. | `evolexer.l` |
| 2 | Parser: `select_opts` içinde `SQL_CALC_FOUND_ROWS` flag'ini set et (zaten parse ediliyor, QueryContext'e `g_calcFoundRows` ekle). | `evoparser.y`, `evolution/db/query_context.h` |
| 3 | `collect_select_results()` içinde: `g_calcFoundRows` aktifse, LIMIT uygulamadan önce toplam satır sayısını session'a kaydet. | `adaptor/query_executor.c` |
| 4 | Session context'e `last_found_rows` (uint64_t) alanı ekle. | `adaptor/pg_handler.c` veya session struct |
| 5 | `SELECT FOUND_ROWS()` expression desteği: `EXPR_FOUND_ROWS` expression node, session'dan `last_found_rows` değerini oku. | `evolution/db/expression.h`, `evolution/db/expression.c` |
| 6 | Parser: `FOUND_ROWS '(' ')'` expression kuralı. | `evoparser.y` |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Write unit tests — `tests/test_found_rows.py`: SQL_CALC_FOUND_ROWS + FOUND_ROWS(), LIMIT olmadan FOUND_ROWS, ardışık sorgular. | `tests/test_found_rows.py` |
| 9 | Run regression. | `tests/` |
| 10 | Full system test. | `Dockerfile` |

---

## Day 66–69 — CTAS & INSERT SELECT Enhancements

### Task 131: ⬜ SELECT INTO — MSSQL/PostgreSQL Syntax (Feature #133)

**Goal:** `SELECT * INTO new_table FROM src` ve `SELECT * INTO #temp FROM src`. PostgreSQL ve MSSQL uyumlu alternatif CTAS sözdizimi.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `select_stmt` kuralına `INTO NAME` clause ekle. `opt_into_list` rule'unu genişlet. | `evoparser.y` |
| 2 | `SELECT INTO` algılandığında `g_create.ctasMode = CTAS_INFER`, `g_create.ctasTableName` set et. | `evoparser.y` |
| 3 | `#name` prefix'i ile local temp, `##name` ile global temp tablo oluştur (MSSQL uyumluluk). | `evoparser.y`, `evolexer.l` |
| 4 | Post-parse'ta `execute_ctas()` çağır (mevcut altyapıyı yeniden kullan). | `adaptor/query_executor.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_select_into.py`: SELECT INTO, SELECT INTO #temp, WHERE/ORDER BY ile. | `tests/test_select_into.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver/psql. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 132: ⬜ CREATE TABLE AS SELECT WITH NO DATA / WITH DATA (Feature #134)

**Goal:** `CREATE TABLE t AS SELECT ... WITH NO DATA` — sadece yapı kopyala, data insert etme. PostgreSQL sözdizimi.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `create_select_statement` rule'una opsiyonel `WITH DATA` ve `WITH NO DATA` clause ekle. | `evoparser.y` |
| 2 | QueryContext'e `ctasWithData` flag ekle (default 1 = WITH DATA). | `evolution/db/query_context.h` |
| 3 | `execute_ctas()` içinde: `ctasWithData == 0` ise `ctas_insert_rows()` çağırma, sadece tablo oluştur. | `adaptor/query_executor.c` |
| 4 | Command tag: `WITH NO DATA` → `"SELECT 0"`. | `adaptor/query_executor.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_ctas_no_data.py`: WITH NO DATA yapı doğrulama, WITH DATA (default) data doğrulama. | `tests/test_ctas_no_data.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Verify with DBeaver/psql. | Manual |
| 10 | Update wiki. | Wiki |

---

### Task 133: ⬜ CTAS Atomicity — Transaction Rollback (Feature #135)

**Goal:** CTAS hata durumunda partial insert bırakmamalı. Tablo oluşturma + data insert tek atomik işlem olmalı.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `execute_ctas()` başında implicit BEGIN (transaction yoksa). | `adaptor/query_executor.c` |
| 2 | `ctas_insert_rows()` hata dönerse: oluşturulan tabloyu DROP et + implicit ROLLBACK. | `adaptor/query_executor.c` |
| 3 | Başarı durumunda implicit COMMIT. | `adaptor/query_executor.c` |
| 4 | Mevcut transaction içinde CTAS: hata durumunda transaction'ı abort et (PostgreSQL davranışı). | `adaptor/query_executor.c` |
| 5 | Write unit tests — `tests/test_ctas_atomic.py`: partial insert sonrası tablo temiz, hata sonrası rollback. | `tests/test_ctas_atomic.py` |
| 6 | Run regression. | `tests/` |
| 7 | Full system test. | `Dockerfile` |
| 8 | Verify with DBeaver/psql. | Manual |
| 9 | Update wiki. | Wiki |
| 10 | Verify transaction isolation. | Manual |

---

### Task 134: ⬜ Expression Column Type Inference for CTAS (Feature #136)

**Goal:** `CREATE TABLE t AS SELECT col1 + col2 AS sum_val FROM src` — expression sonucu column tipi doğru çıkarılmalı. Şu anda VARCHAR(255) fallback kullanılıyor.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `collect_select_results()` içinde expression column'ları için PG type OID doğru set et: arithmetic → INT/FLOAT, string func → VARCHAR, boolean → BOOL. | `adaptor/query_executor.c` |
| 2 | `pg_oid_to_type_encoding()` fonksiyonuna TIMESTAMP (1114) ve BOOLEAN (16→220001 düzelt) desteği ekle. | `adaptor/query_executor.c` |
| 3 | Expression type inference: `ExprNode.type` → PG OID mapping fonksiyonu. | `evolution/db/expression.c` |
| 4 | Write unit tests — `tests/test_ctas_types.py`: arithmetic expression → INT, string func → VARCHAR, CAST → hedef tip. | `tests/test_ctas_types.py` |
| 5 | Run regression. | `tests/` |
| 6 | Full system test. | `Dockerfile` |
| 7 | Verify with DBeaver. | Manual |
| 8 | Update wiki. | Wiki |
| 9 | Edge cases: NULL expression, mixed type arithmetic. | `tests/test_ctas_types.py` |
| 10 | Verify type modifiers (VARCHAR length) preserved. | `tests/test_ctas_types.py` |

---

### Task 135: ⬜ CTAS with Aggregate / GROUP BY Source (Feature #137)

**Goal:** `CREATE TABLE stats AS SELECT category, COUNT(*), AVG(price) FROM products GROUP BY category` — aggregate sorgu sonucundan tablo oluşturma.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `collect_select_results()` aggregate + GROUP BY path'ini CTAS context'inde test et. | `adaptor/query_executor.c` |
| 2 | Aggregate sonuç column'ları için tip inference: COUNT→BIGINT, SUM→numeric type, AVG→FLOAT. | `adaptor/query_executor.c` |
| 3 | HAVING clause desteği CTAS'ta. | `adaptor/query_executor.c` |
| 4 | Write unit tests — `tests/test_ctas_aggregate.py`: GROUP BY + COUNT/SUM/AVG, HAVING, empty groups. | `tests/test_ctas_aggregate.py` |
| 5 | Run regression. | `tests/` |
| 6 | Full system test. | `Dockerfile` |
| 7 | Verify with DBeaver. | Manual |
| 8 | Update wiki. | Wiki |
| 9 | Edge cases: GROUP BY multiple columns, NULL groups. | `tests/test_ctas_aggregate.py` |
| 10 | Verify column naming for unnamed aggregates. | `tests/test_ctas_aggregate.py` |

---

### Task 136: ⬜ CTAS in Transaction (Feature #138)

**Goal:** `BEGIN; CREATE TABLE t AS SELECT ...; COMMIT/ROLLBACK;` — CTAS transaction içinde çalışabilmeli, rollback'te tablo + data geri alınabilmeli.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `execute_ctas()` undo log entegrasyonu: tablo oluşturma + data insert undo log'a kaydedilmeli. | `adaptor/query_executor.c`, `adaptor/transaction.c` |
| 2 | ROLLBACK durumunda: oluşturulan tabloyu DROP et, insert edilen data'yı temizle. | `adaptor/transaction.c` |
| 3 | COMMIT durumunda: normal persist. | `adaptor/query_executor.c` |
| 4 | Write unit tests — `tests/test_ctas_transaction.py`: BEGIN + CTAS + ROLLBACK → tablo yok, BEGIN + CTAS + COMMIT → tablo var. | `tests/test_ctas_transaction.py` |
| 5 | Run regression. | `tests/` |
| 6 | Full system test. | `Dockerfile` |
| 7 | Verify with DBeaver. | Manual |
| 8 | Savepoint + CTAS kombinasyonu. | `tests/test_ctas_transaction.py` |
| 9 | Nested transaction CTAS. | `tests/test_ctas_transaction.py` |
| 10 | Update wiki. | Wiki |

---

### Task 137: ⬜ CREATE TABLE LIKE — Structure Copy (Feature #139)

**Goal:** `CREATE TABLE t2 (LIKE t1 INCLUDING ALL)` — kaynak tablonun yapısını (column, constraint, index, default) kopyala. PostgreSQL modeli.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `CREATE TABLE t2 (LIKE t1)` ve `CREATE TABLE t2 (LIKE t1 INCLUDING ALL/DEFAULTS/CONSTRAINTS/INDEXES)`. LIKE token ekle. | `evolexer.l`, `evoparser.y` |
| 2 | `CreateLikeProcess()`: kaynak tabloyu resolve et, ColumnDesc array'ini kopyala, constraint'leri kopyala. | `evolution/db/Create.c` |
| 3 | `INCLUDING DEFAULTS`: default_val kopyala. `INCLUDING CONSTRAINTS`: CHECK/UNIQUE/FK kopyala. `INCLUDING INDEXES`: secondary index'leri oluştur. | `evolution/db/Create.c` |
| 4 | `INCLUDING ALL`: hepsini kopyala. `EXCLUDING ALL`: sadece column yapısı. | `evolution/db/Create.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_create_like.py`: LIKE basic, INCLUDING ALL, INCLUDING DEFAULTS, column type preservation. | `tests/test_create_like.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | LIKE + AS SELECT kombinasyonu. | `tests/test_create_like.py` |
| 10 | Update wiki. | Wiki |

---

### Task 138: ⬜ CREATE UNLOGGED TABLE AS SELECT (Feature #140)

**Goal:** `CREATE UNLOGGED TABLE t AS SELECT ...` — WAL/redo log bypass ile hızlı bulk tablo oluşturma. PostgreSQL modeli. Crash sonrası data kaybolabilir.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `opt_temporary` rule'una `UNLOGGED` alternatifi ekle. `UNLOGGED` token. | `evolexer.l`, `evoparser.y` |
| 2 | `TableDesc.is_unlogged` flag ekle. | `evolution/db/catalog_internal.h` |
| 3 | UNLOGGED tablolar için buffer pool write-through skip (dirty page flush atla). | `evolution/db/buffer_pool.c` |
| 4 | Crash recovery: UNLOGGED tabloları truncate et (PostgreSQL davranışı). | `evolution/db/DatabaseMgmt.c` |
| 5 | Regenerate parser. | `evolution/parser/` |
| 6 | Write unit tests — `tests/test_unlogged.py`: UNLOGGED CTAS, performance comparison. | `tests/test_unlogged.py` |
| 7 | Run regression. | `tests/` |
| 8 | Full system test. | `Dockerfile` |
| 9 | information_schema'da `relpersistence = 'u'` gösterimi. | `adaptor/catalog.c` |
| 10 | Update wiki. | Wiki |

---

### Task 139: ⬜ CTAS Field Truncation Fix — Large Column Support (Feature #141)

**Goal:** `ctas_insert_rows()` içindeki `fields[64][256]` limiti büyük VARCHAR/TEXT column'ları 255 byte'ta kesiyor. Dynamic allocation ile sınır kaldırılmalı.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `ctas_insert_rows()` içinde `fields` array'ini `malloc` ile dynamic allocate et. Column value boyutunu `selectRs->rows[r].fields[c]` uzunluğuna göre belirle. | `adaptor/query_executor.c` |
| 2 | Alternatif: `tup_build` API'sini doğrudan `const char **vals` pointer array ile çağır (kopyalama yapmadan). | `adaptor/query_executor.c` |
| 3 | Test: 1000+ karakter VARCHAR column ile CTAS — data truncation olmadığını doğrula. | `tests/test_ctas.py` |
| 4 | Run regression. | `tests/` |
| 5 | Full system test. | `Dockerfile` |
| 6 | Verify with DBeaver. | Manual |
| 7 | Performance: kopyalama overhead'ını minimize et. | `adaptor/query_executor.c` |
| 8 | Edge cases: NULL columns, empty strings, binary data. | `tests/test_ctas.py` |
| 9 | Update wiki. | Wiki |
| 10 | Memory cleanup (free) doğrulama. | `adaptor/query_executor.c` |

---

## Day 69 — Performance Optimizations (Continued)

### Task 140: ⬜ DELETE/UPDATE PK Range Fast Path

**Goal:** Currently `DELETE FROM t WHERE pk_col <= N` does full heap scan + per-row expression evaluation (~100 ms for 5K rows). PostgreSQL does B+ tree range scan in ~2 ms. Add fast-path detection for simple PK range patterns.

**Context:** Benchmark shows EvolutionDB DELETE = 103 ms vs PostgreSQL = 2 ms (50x slower). Same for UPDATE: 73 ms vs 5 ms. Total benchmark gap with PG: ~150 ms.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `expr_is_simple_pk_range(node, pk_col_name, op_out, value_out)` helper that detects `pk_col <op> literal` patterns where op is `<`, `<=`, `>`, `>=`, `=`. Returns 1 if matched, 0 otherwise. | `evolution/db/expression.c`, `expression.h` |
| 2 | Add `bt2_range_iterate(tree, op, key_value, callback)` function — walks B+ tree leaves in PK order, calls callback for each matching key. Reuses existing leaf sibling pointers. | `evolution/db/btree2.c`, `btree2.h` |
| 3 | In `DeleteProcess()`, before falling through to expression-based path, check `expr_is_simple_pk_range()` against PK column. If matched, use `bt2_range_iterate()` to collect keys, then delete in batch. | `evolution/db/Delete.c` |
| 4 | Same fast path in `UpdateProcess()` — detect PK range, use range iterate, then per-row UPDATE via tapi_heap_update. | `evolution/db/Update.c` |
| 5 | Handle MVCC visibility: for prepared range delete, ensure xmax is set correctly for all matched rows in one transaction. | `evolution/db/Delete.c` |
| 6 | Update Delete.c FK cascade path: when range delete triggers FK cascade, recurse into child tables with the affected PK list. | `evolution/db/Delete.c` |
| 7 | Add `tests/test_pk_range_fastpath.py` — verify correctness: range delete with various ops (`<`, `<=`, `>`, `>=`, `=`), edge cases (empty range, full range, single row). | `tests/` |
| 8 | Benchmark: re-run evolutiondb-benchmarks. Target: DELETE 103 ms → ~10 ms, UPDATE 73 ms → ~10 ms. | `evolutiondb-benchmarks` |
| 9 | Profile with `EVOSQL_PROFILE=1` to confirm full table scan eliminated. | Server log |
| 10 | Regression: run all tests including test_delete.py, test_update.py, test_foreign_key.py, test_mvcc.py. | `tests/` |

**Expected impact:** 176 ms → ~20 ms (saves ~155 ms total benchmark time). EvolutionDB matches PostgreSQL on all CRUD operations.

---

## Day 70 — Performance Optimizations (Optional)

### Task 141: ⬜ Binary Parameter Encoding Mode (Optional)

**Goal:** Optional binary mode for parameters in EXECUTE / EXECUTE_BATCH. Currently all parameters are sent as text strings — `1234567` = 7 bytes vs 4 bytes binary, plus parser overhead on server side.

**Context:** Phase 4 of the optimization plan. Estimated 5-10% throughput improvement for numeric-heavy workloads.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `BINARY ON\n` / `BINARY OFF\n` protocol command — toggles binary mode for the session. | `adaptor/evo_protocol.c` |
| 2 | Add binary parameter format to PREPARE: `PREPARE_BINARY <name> <len>\n<sql>\n<param_type1><param_type2>...` where each type is one byte: 'i'=int4, 'l'=int8, 'f'=float4, 'd'=float8, 's'=string, 'b'=bool. | `adaptor/evo_protocol.c` |
| 3 | Add `EXECUTE_BINARY <name>\n` reading parameters as raw bytes per declared type (network byte order for integers). | `adaptor/evo_protocol.c` |
| 4 | Same for EXECUTE_BATCH_BINARY — flat parameter buffer with type-aware decoding. | `adaptor/evo_protocol.c` |
| 5 | Server-side parameter substitution: format binary value to text (sprintf) only when building SQL — saves nothing in current substitution path, but enables future direct value binding. | `adaptor/evo_protocol.c` |
| 6 | Client-side: `EvoProtocolClient.PrepareBinary()`, `ExecuteBatchBinary()` methods that pack parameters into byte buffer. | `evolutiondb-efcore/src/evosql/Internal/EvoProtocolClient.cs` |
| 7 | `EvosqlBatch` API: detect parameter types from `EvosqlParameter.DbType`, use binary path automatically when all params are numeric/bool. | `evolutiondb-efcore/src/evosql/EvosqlBatch.cs` |
| 8 | Add `tests/test_binary_params.py` — verify INT4, INT8, FLOAT4, FLOAT8, BOOL round-trip correctly. | `tests/` |
| 9 | Benchmark: compare text vs binary modes for 10K row INSERT with mixed numeric data. | `evolutiondb-benchmarks` |
| 10 | Document in protocol spec: when to use binary mode, type byte encoding, byte order. | `docs/evo_protocol.md` |

**Expected impact:** ~5-10% throughput improvement (~100 ms savings on 10K row benchmark).

---

### Task 142: ⬜ DML Inner-Loop Profiling Harness (Phase 6.0)

**Goal:** Build a minimal, zero-overhead-when-off profiling harness for the DELETE/UPDATE inner loop so Phase 6.1 is driven by real per-helper numbers instead of code-reading estimates.

**Context:** Phase 5 (PK range fast path) brought DELETE 5K to 85 ms and UPDATE 2K to 65 ms. Remaining gap to PG (2 ms / 5 ms) is per-row DML overhead (~17 µs/row for DELETE). Phase 1 exploration produced rough estimates but they were tuned to the wrong helpers — `lock_row_acquire` at 3-5 µs/row vs real 0.29 µs/row, `tapi_heap_read` at 5-8 µs/row vs real 0.18 µs/row. Measure before optimizing.

| Step | Description | Files |
|------|-------------|-------|
| 1 | New minimal harness: thread-local `DMLProfile` with fixed slot table, `DML_PROF(name, call)` statement macro and `DML_PROF_EXPR(name, expr)` expression macro (GCC `__typeof__` + statement expression). Env var `EVOSQL_DML_PROFILE=1` gates; off-mode cost is a single branch. | `evolution/db/dml_profile.h/c` |
| 2 | Output to `/tmp/evosql_dml_profile.log` (path configurable via `EVOSQL_DML_PROFILE_LOG`). Bypasses the stdout/stderr redirect that query_executor.c applies around `yyparse`. Line-buffered, mutex-protected writes. | `evolution/db/dml_profile.c` |
| 3 | Instrument `Delete.c` `DeleteProcess()` Phase 2 loop: bt2_search, tapi_heap_read, fk_check, tup_extract, trigger_before/after, undo_log, sec_idx_delete, conc_mod_log, mvcc_ensure_xid, cg_check_write, lock_row_acquire, vmap_clear, heap_set_xmax, returning_capture. `loop_body_total` sentinel wraps the entire for-loop. | `evolution/db/Delete.c` |
| 4 | Instrument `Update.c` `UpdateProcess()` loop + `ApplyUpdateToRow()`: `apply_update_total`, bt2_search, tapi_heap_read, mvcc_ensure_xid, cg_check_write, lock_row_acquire, undo_log, trigger_before/after, vmap_clear (called twice per row), heap_set_xmax, heap_insert, bt2_update. | `evolution/db/Update.c` |
| 5 | Add `dml_profile.c` to both Makefiles (`adaptor/Makefile`, `evolution/Makefile`). | `adaptor/Makefile`, `evolution/Makefile` |
| 6 | Benchmark harness: `tests/bench_dml_profile.py` runs 6 iterations of the plan scenario (INSERT 10K → DELETE 5K → UPDATE 2K), discards first 2 as warmup, parses the profile log, averages the last 4 per-helper. | `tests/bench_dml_profile.py` |
| 7 | Baseline document: `docs/dml-profile-baseline.md` with the 4-run average table, estimate-vs-reality comparison, and top-N ranked recommendations. | `docs/dml-profile-baseline.md` |
| 8 | Off-mode regression: all existing test suites pass with the harness installed but EVOSQL_DML_PROFILE unset. | existing tests |

**Baseline findings (from completed measurement):**
- DELETE 5K top-4 helpers = **84.5% of loop_total**
  - `bt2_search` 5.55 µs/row (25.4%) — redundant, cursor already had rid
  - `trigger_before/after` 10.04 µs/row combined (46%) — **no triggers exist**, pure catalog scan waste
  - `sec_idx_delete` 2.86 µs/row (13.1%) — **no secondary indexes**, pure catalog scan waste
- UPDATE 2K: `bt2_search` + `bt2_update` + triggers = 70.7%
- `lock_row_acquire`, `tapi_heap_read`, `cg_check_write`, `fk_check` — all under 1% each; skipping them buys almost nothing

**Unblocks:** Task 143 (Phase 6.1) — cache table schema presence flags.

### Task 143: ⬜ DML Phase 6.1 — Schema Presence Flag Cache

**Goal:** Cache per-table "has triggers / has secondary indexes / has referencing FKs" flags on `TableDesc` so the DML inner loop can `if (td->has_triggers) evo_fire_triggers(...)` instead of entering the catalog-scanning helper every row.

**Depends on:** Task 142 baseline data showing that no-trigger / no-index catalog scans dominate the inner loop (>59% of DELETE 5K).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `uint8_t has_triggers, has_secondary_indexes, has_referencing_fks` to `TableDesc`. Populate from catalog at `tapi_resolve()` time. | `evolution/db/catalog_internal.h`, `table_api.c` |
| 2 | Invalidate / refresh flags on `CREATE TRIGGER`, `DROP TRIGGER`, `CREATE INDEX`, `DROP INDEX`, `CREATE TABLE ... REFERENCES ...`, `ALTER TABLE DROP CONSTRAINT`. Simplest: recompute on next resolve (flags are cheap). | `Trigger.c`, `Index.c`, `Create.c`, `Drop.c` |
| 3 | Guard `evo_fire_triggers` calls in `Delete.c` / `Update.c` / `Insert.c` with `if (td->has_triggers)`. | `Delete.c`, `Update.c`, `Insert.c` |
| 4 | Guard `delete_secondary_indexes`, `idx_load_secondary`, and update-path secondary-index loops with `if (td->has_secondary_indexes)`. | `Delete.c`, `Update.c`, `Insert.c` |
| 5 | Guard `enforce_fk_on_delete` with `if (td->has_referencing_fks)`. | `Delete.c` |
| 6 | Re-run `tests/bench_dml_profile.py`; DELETE 5K should drop from ~85 ms to ~25 ms (trigger + index saves). Confirm via updated baseline doc. | `docs/dml-profile-after-6.1.md` |
| 7 | Regression: full test suite green, especially trigger / index / FK tests. | existing tests |

**Expected impact:** DELETE 5K 85 → ~25 ms (~60 ms save), UPDATE 2K 65 → ~40 ms.

### Task 144: ⬜ DML Phase 6.2 — Fast Path RowID Carry-Through

**Goal:** Eliminate the redundant `bt2_search` per row in the fast path by saving `(key, rid)` pairs when the cursor walk collects them. Currently the fast path drops the rid from `bt2_cursor_next` and re-looks it up inside the delete/update loop.

**Depends on:** Task 143 (to confirm `bt2_search` is the remaining top after trigger/index caching).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Change `matchKeys` in `Delete.c` / `Update.c` fast path from `char **` to a typed array of `{char *key; RowID rid;}` struct. | `evolution/db/Delete.c`, `Update.c` |
| 2 | During the cursor walk (`bt2_cursor_first` / `bt2_cursor_seek` / `bt2_cursor_next`), copy both key and rid into the collection array. | same |
| 3 | In the inner loop, replace `bt2_search(&pk_tree, matchKeys[i], &rid)` with direct `rid = matches[i].rid`. The fallback scan path still needs the search (no rid cached there) — gate by `fast_path_used`. | same |
| 4 | Re-measure: DELETE 5K should drop another ~28 ms. | `docs/dml-profile-after-6.2.md` |

**Expected impact:** DELETE 5K → ~10-15 ms, hitting the <10 ms target range.

### Task 145: ⬜ DML Phase 6.3 — Per-Page Batching (optional)

**Goal:** Group same-page soft-deletes so `pgm_read_page` / `pgm_write_page` / `vmap_clear` run once per page instead of once per row. Low priority — per Task 142 data these helpers already sum to <5% of loop_total once 6.1 + 6.2 land, so savings are in the 1-2 ms range.

Deferred until after 6.1 + 6.2 results are verified.

---

## Day 72 — Cloud Native Deployment: Environment

### Task 146: ⬜ Local K8s Dev Environment — Azure AKS & kind (Feature #142)

**Goal:** Provide free/cheap Kubernetes cluster provisioning for testing the Ceph integration. Azure AKS ($200 free trial; control plane always free) as primary path, `kind` + loop devices as zero-cost local fallback.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `scripts/aks-setup.sh` — provision AKS (3x `Standard_B2s`, managed identity, basic load balancer). | `scripts/aks-setup.sh` (new) |
| 2 | `scripts/aks-attach-disks.sh` — attach 32GB Premium SSD per node for Rook OSDs; verify `lsblk` shows `/dev/sdb`. | `scripts/aks-attach-disks.sh` (new) |
| 3 | `scripts/aks-stop.sh` + `aks-start.sh` — `az aks stop/start` to deallocate worker VMs when idle (zero-cost pause). | `scripts/aks-stop.sh`, `aks-start.sh` (new) |
| 4 | `scripts/aks-destroy.sh` — full `az group delete` for hard reset. | `scripts/aks-destroy.sh` (new) |
| 5 | `scripts/kind-ceph-setup.sh` — kind cluster with 3 workers + loop devices mounted. | `scripts/kind-ceph-setup.sh` (new) |
| 6 | `deploy/kind/cluster-config.yaml` — kind config with `extraMounts` for `/dev/loop-ceph1..3`. | `deploy/kind/cluster-config.yaml` (new) |
| 7 | `scripts/kind-create-loop-devices.sh` — host-side `dd` + `losetup` for 3×20GB sparse files (Linux; macOS note: use Colima). | `scripts/kind-create-loop-devices.sh` (new) |
| 8 | Verify AKS: `kubectl get nodes` → 3 Ready; verify kind: `kind get clusters && kubectl get nodes` → 4 Ready. | Manual |
| 9 | `tests/test_k8s_env.sh` — smoke test: pull `evolutiondb/evolutiondb:latest`, run pod, execute `SELECT 1` via `kubectl exec`. | `tests/test_k8s_env.sh` (new) |
| 10 | Document prerequisite versions (azure-cli ≥ 2.50, kubectl ≥ 1.28, helm ≥ 3.12, kind ≥ 0.20) as comments in scripts. | Scripts |

---

## Day 73 — Cloud Native Deployment: Prerequisites

### Task 147: ⬜ WAL Durability Hardening & Connection Pooling (Feature #143)

**Goal:** Close remaining single-node correctness gaps before layering K8s/Ceph/replication on top — SIGKILL/TDE recovery, commit latency bench, server-side connection pool, graceful shutdown.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Fix TDE + WAL init ordering so SIGKILL-after-write recovery replays encrypted pages correctly. | `evolution/main.c`, `evolution/db/wal.c`, `evolution/db/page_crypt.c` |
| 2 | `tests/test_wal_recovery.py` — partial-write, mid-commit SIGKILL, TDE-enabled replay, 6+ scenarios. | `tests/test_wal_recovery.py` (new) |
| 3 | `tests/test_checkpoint.py` — verify `wal_checkpoint` truncates WAL and preserves all committed state across restart. | `tests/test_checkpoint.py` (new) |
| 4 | `bench/commit_latency.py` — measure p50/p99 commit latency at 1/10/100 concurrent writers. | `bench/commit_latency.py` (new) |
| 5 | Design connection-pool architecture (worker pool + backpressure queue). | `.claude/plans/connection-pool.md` (new) |
| 6 | Implement `adaptor/conn_pool.c/h` — bounded worker thread pool, accept queue, per-conn context. | `adaptor/conn_pool.c/h` (new), `adaptor/server.c` |
| 7 | Replace 1-thread-per-conn accept loop with pool dispatch in `adaptor/server.c`. | `adaptor/server.c` |
| 8 | `tests/test_connection_pool.py` — 1000 concurrent clients, queue saturation, graceful reject. | `tests/test_connection_pool.py` (new) |
| 9 | `tests/test_graceful_shutdown.py` — SIGTERM during DML; dirty-page flush within grace; no data loss. | `tests/test_graceful_shutdown.py` (new) |
| 10 | Helm `values.yaml`: `terminationGracePeriodSeconds: 60`; verify via `kubectl delete pod` smoke test. | `deploy/helm/evolutiondb/values.yaml` |

---

## Day 74 — Cloud Native Deployment: Storage

### Task 148: ⬜ Rook-Ceph Cluster Manifests — Tiered Pools (Feature #144)

**Goal:** Provision a Rook-Ceph cluster with two device-class pools (NVMe for WAL, SSD for data), each exposed via a StorageClass tuned to the 4 KB page size of EvosSQL.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `deploy/rook/operator.yaml` — Rook ≥ 1.15 operator, `CSI_ENABLE_HOST_NETWORK=true`. | `deploy/rook/operator.yaml` (new) |
| 2 | `deploy/rook/cluster.yaml` — `CephCluster` with `deviceClassSets: [nvme, ssd]`, `bluestore_min_alloc_size_ssd=4096`, OSD memory target 8 GiB. | `deploy/rook/cluster.yaml` (new) |
| 3 | `deploy/rook/pool-wal-nvme.yaml` — `CephBlockPool wal-nvme`, `replicated.size=3`, `deviceClass: nvme`, `failureDomain: host`. | `deploy/rook/pool-wal-nvme.yaml` (new) |
| 4 | `deploy/rook/pool-data-ssd.yaml` — `CephBlockPool data-ssd`, `replicated.size=3`, `deviceClass: ssd`. | `deploy/rook/pool-data-ssd.yaml` (new) |
| 5 | `deploy/rook/storageclass-wal.yaml` — `evo-wal-nvme` SC, `stripeUnit: 4096`, `stripeCount: 16`, imageFeatures, XFS fstype fallback. | `deploy/rook/storageclass-wal.yaml` (new) |
| 6 | `deploy/rook/storageclass-data.yaml` — `evo-data-ssd` SC, same stripe params. | `deploy/rook/storageclass-data.yaml` (new) |
| 7 | `scripts/rook-install.sh` — apply operator → wait → apply cluster → wait → apply pools+SCs. | `scripts/rook-install.sh` (new) |
| 8 | Verify: `kubectl -n rook-ceph exec deploy/rook-ceph-tools -- ceph status` → HEALTH_OK; `ceph osd tree` shows nvme+ssd classes. | Manual |
| 9 | `deploy/bench/fio-smoke.yaml` — fio PVC for each SC, write+read pass. | `deploy/bench/fio-smoke.yaml` (new) |
| 10 | `tests/test_rook_storage.sh` — create PVC on each SC, bind, write/read, delete. | `tests/test_rook_storage.sh` (new) |

---

## Day 75 — Cloud Native Deployment: Engine Refactor

### Task 149: ⬜ Configurable WAL & Data Paths (Feature #145)

**Goal:** Eliminate hardcoded `"evosql.wal"` / `root/` paths so WAL and data can live on separate volumes.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `evolution/db/evo_paths.h/c` — central getters: `evo_paths_data_dir()`, `evo_paths_wal_dir()`, init from env + CLI. | `evolution/db/evo_paths.h`, `evo_paths.c` (new) |
| 2 | Replace hardcoded WAL path with getter — `wal.c:224,227`. | `evolution/db/wal.c` |
| 3 | Replace archive path hardcodes — `wal.c:389,460,534`. | `evolution/db/wal.c` |
| 4 | Add `wal_init_with_path(int fd, const char *path)`; keep `wal_init` as wrapper. | `evolution/db/wal.h`, `wal.c` |
| 5 | `EVO_DATA_DIR` env support in `DatabaseMgmt.c` — replaces CWD-relative `root/`. | `evolution/db/DatabaseMgmt.c` |
| 6 | Add `--wal-dir` and `--data-dir` CLI flags. | `adaptor/main.c` |
| 7 | Fix replication hardcodes at `adaptor/replication.c:70,73,136,137,284`. | `adaptor/replication.c` |
| 8 | `tests/test_wal.py` + `tests/test_crash_recovery.py` pass with custom paths. | `tests/` |
| 9 | Regression: run all 84 test suites, 0 failures. | `tests/` |
| 10 | Docker rebuild + manual smoke test with mounted `/wal` and `/data`. | `Dockerfile` |

---

## Day 76 — Cloud Native Deployment: Dual PVC + Block Mode

### Task 150: ⬜ Dual PVC StatefulSet + Raw Block Mode (Feature #146)

**Goal:** Two PVCs per pod (WAL on NVMe pool, data on SSD pool) with optional `volumeMode: Block` (raw RBD) to skip kernel page cache double-buffering.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Add `EVO_RAW_DEVICE` handling — skip `mkdir`+`ftruncate` when set, open device directly. | `evolution/db/DatabaseMgmt.c` |
| 2 | Gate `O_DIRECT` in page_mgr behind raw-mode flag; add alignment checks. | `evolution/db/page_mgr.c:119,200` |
| 3 | WAL raw-mode: `O_DIRECT | O_DSYNC` + `posix_memalign(buffer, 4096, len)`. | `evolution/db/wal.c` |
| 4 | Helm `statefulset.yaml` — two `volumeClaimTemplates` (`wal`, `data`), `volumeMode: Block`, `volumeDevices` mount at `/dev/evo-wal`, `/dev/evo-data`. | `deploy/helm/evolutiondb/templates/statefulset.yaml` |
| 5 | `values.yaml` — `persistence.wal.{storageClass,size}`, `persistence.data.{storageClass,size}`, `persistence.rawDevice: true`. | `deploy/helm/evolutiondb/values.yaml` |
| 6 | entrypoint.sh — pass `--wal-dir` / `--data-dir` args based on `rawDevice` flag. | `entrypoint.sh` |
| 7 | Filesystem fallback: when `rawDevice=false`, mount PVCs as `/wal` and `/data` (XFS). | Helm templates |
| 8 | `helm install --set persistence.rawDevice=true` + verify `kubectl exec evosql-0 -- ls -l /dev/evo-wal /dev/evo-data`. | Manual |
| 9 | Filesystem E2E: install with `rawDevice=false`, same smoke test. | Manual |
| 10 | Regression under both modes (raw + FS) — all test suites green. | `tests/` |

---

## Day 77 — Cloud Native Deployment: Performance Tuning

### Task 151: ⬜ K8s Performance Tuning — Huge Pages, RBD Cache, Topology (Feature #147)

**Goal:** Squeeze max throughput from Ceph RBD via huge-page buffer pool, asymmetric RBD cache (writeback for data, none for WAL), and topology co-location.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Buffer pool huge-page allocation — `mmap(MAP_HUGETLB)` when `EVO_USE_HUGEPAGES=1`. | `evolution/db/buffer_pool.c:294` |
| 2 | Helm `resources.limits.hugepages-2Mi: 1Gi` + `/dev/hugepages` mount. | `statefulset.yaml`, `values.yaml` |
| 3 | Data SC writeback cache: `rbd_cache=true,rbd_cache_policy=writeback,rbd_cache_size=268435456`. | `deploy/rook/storageclass-data.yaml` |
| 4 | WAL SC writethrough (cache off): `rbd_cache=false`. | `deploy/rook/storageclass-wal.yaml` |
| 5 | `topologySpreadConstraints` + `nodeAffinity` — DB pod co-located with one Ceph OSD replica rack. | `statefulset.yaml` |
| 6 | `deploy/bench/fio-4k-sync.yaml` — 4K sync write (iodepth=1, fsync/64), hit ≥30K IOPS, p99 <500µs. | `deploy/bench/fio-4k-sync.yaml` (new) |
| 7 | `deploy/bench/fio-4k-rand-read.yaml` — 4K random read (iodepth=32), hit ≥80K IOPS. | `deploy/bench/fio-4k-rand-read.yaml` (new) |
| 8 | Run `/benchmark` skill against Ceph-backed pod — compare baseline vs Ceph throughput. | `tests/bench` |
| 9 | `kubectl exec evosql-0 -- cat /proc/meminfo \| grep Huge` → HugePages_Total > 0. | Manual |
| 10 | Document tuning decisions and bench results. | `docs/ceph-perf.md` (new) |

---

## Day 78 — Cloud Native Deployment: High Availability

### Task 152: ⬜ Multi-Replica HA StatefulSet (Feature #148)

**Goal:** Drive the existing raft/replication code (`adaptor/raft.c`, `adaptor/replication.c`) from a 3-replica StatefulSet with stable DNS and a PodDisruptionBudget.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `templates/configmap-cluster.yaml` — render `node-0.svc:9968,node-1.svc:9968,node-2.svc:9968` from `replicaCount`. | `templates/configmap-cluster.yaml` (new) |
| 2 | `templates/service-headless.yaml` — `clusterIP: None` for stable `<ordinal>.svc` DNS. | `templates/service-headless.yaml` (new) |
| 3 | `templates/poddisruptionbudget.yaml` — `minAvailable: 2` (quorum protection). | `templates/poddisruptionbudget.yaml` (new) |
| 4 | `statefulset.yaml` initContainer — parse ordinal from `${HOSTNAME##*-}`, write to `/etc/evo/node-id`. | `statefulset.yaml` |
| 5 | Main container args: `--node-id $(cat /etc/evo/node-id) --cluster $(CLUSTER_NODES) --replication-port 9968`. | `statefulset.yaml` |
| 6 | `values.yaml` — `replicaCount: 3`, `replication.enabled: true`. | `values.yaml` |
| 7 | `tests/test_ha_failover.py` — `kubectl delete pod evosql-0`, wait for new leader, continue queries. | `tests/test_ha_failover.py` (new) |
| 8 | `tests/test_replication.py` pass against 3-replica cluster. | `tests/` |
| 9 | Quorum tests: scale to 5, kill 2, verify writes still succeed; kill 3, verify writes halt. | `tests/test_quorum.py` (new) |
| 10 | Rolling restart via `kubectl rollout restart statefulset` — no data loss, no split-brain. | Manual |

---

## Day 79 — Cloud Native Deployment: Backup

### Task 153: ⬜ CSI VolumeSnapshot Backup + Restore (Feature #149)

**Goal:** Crash-consistent snapshots of both WAL and data PVCs using Rook's toolbox to ensure Ceph-level atomicity (K8s VolumeSnapshot alone does not guarantee cross-PVC atomicity).

| Step | Description | Files |
|------|-------------|-------|
| 1 | `deploy/rook/volumesnapshotclass.yaml` — two `VolumeSnapshotClass` (WAL + data), `deletionPolicy: Retain`. | `deploy/rook/volumesnapshotclass.yaml` (new) |
| 2 | `templates/cronjob-snapshot.yaml` — CronJob invokes Rook toolbox `rbd snap create` across both pools in one call. | `templates/cronjob-snapshot.yaml` (new) |
| 3 | `templates/restore-job.yaml` — restore Job creates fresh PVCs from snapshots, new StatefulSet. | `templates/restore-job.yaml` (new) |
| 4 | `values.yaml` — `backup.enabled`, `backup.schedule`, `backup.retention`. | `values.yaml` |
| 5 | `scripts/evo-snapshot.sh` — manual snapshot invocation wrapper. | `scripts/evo-snapshot.sh` (new) |
| 6 | `scripts/evo-restore.sh` — manual restore wrapper; takes snapshot name + target namespace. | `scripts/evo-restore.sh` (new) |
| 7 | `tests/test_snapshot_restore.py` — write 10K rows, snapshot, write more, restore, verify original 10K. | `tests/test_snapshot_restore.py` (new) |
| 8 | Atomicity test: kill pod mid-snapshot, verify restored state is crash-consistent. | `tests/test_snapshot_atomicity.py` (new) |
| 9 | Document RTO/RPO expectations from snapshot-only backups. | `docs/ceph-perf.md` |
| 10 | Retention policy: keep last N snapshots, oldest evicted by CronJob. | `templates/cronjob-snapshot.yaml` |

---

## Day 80 — Cloud Native Deployment: PITR

### Task 154: ⬜ Ceph RGW WAL Archive + PITR (Feature #150)

**Goal:** Continuous WAL archiving to Ceph RGW (S3-compatible) + Point-In-Time Recovery by replaying WAL up to a target timestamp.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `deploy/rook/object-store.yaml` — `CephObjectStore evosql-archive`, RGW pods, S3 endpoint. | `deploy/rook/object-store.yaml` (new) |
| 2 | `deploy/rook/objectbucketclaim.yaml` — `ObjectBucketClaim wal-archive` (bucket + secret). | `deploy/rook/objectbucketclaim.yaml` (new) |
| 3 | `s5cmd` sidecar container in StatefulSet — sync `/wal/*.archive` → S3 bucket on checkpoint. | `statefulset.yaml` |
| 4 | `adaptor/main.c` — `--recover-to-time <ISO8601>` flag. | `adaptor/main.c` |
| 5 | Restore path: download WAL archives from S3 before `wal_init`, replay in order. | `evolution/db/wal.c:250-254`, `wal_archiver.c/h` (new) |
| 6 | WAL replay-to-timestamp — stop at first record past target time. | `evolution/db/wal.c` |
| 7 | `scripts/evo-pitr.sh` — wrapper: `evo-pitr.sh --from-snapshot X --to-time 2026-04-16T12:34:00Z`. | `scripts/evo-pitr.sh` (new) |
| 8 | `tests/test_pitr.py` — traffic at T0 → snap → traffic at T1 → snap → restore to T0.5 → verify state. | `tests/test_pitr.py` (new) |
| 9 | Failure mode tests: missing WAL segment, corrupted segment (CRC fail), target time before base snapshot. | `tests/test_pitr.py` |
| 10 | Document PITR window, retention, storage cost trade-offs. | `docs/pitr.md` (new) |

---

## Day 81 — Cloud Native Deployment: Observability

### Task 155: ⬜ Prometheus + OpenTelemetry Observability (Feature #151)

**Goal:** Three observability axes — metrics (Prometheus), traces (OTel), structured logs (JSON) — with unified Grafana dashboard covering EvosSQL + Ceph.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `evolution/db/metrics.c/h` — Prometheus text-format metrics emitter. | `evolution/db/metrics.c/h` (new) |
| 2 | `adaptor/metrics_server.c/h` — embedded HTTP server on separate port (default 9968 → /metrics). | `adaptor/metrics_server.c/h` (new) |
| 3 | Metrics set: QPS per DML, p50/p99 latency, buffer hit ratio, WAL bytes/sec, active TX, lock waits. | Same |
| 4 | `templates/servicemonitor.yaml` — Prometheus Operator scrape config. | `templates/servicemonitor.yaml` (new) |
| 5 | `evolution/db/otel.c/h` — OTLP/gRPC span emitter. | `evolution/db/otel.c/h` (new) |
| 6 | Instrument query path: parse → plan → execute → I/O spans at `query_executor.c`, `buffer_pool.c`, `wal.c`. | Multiple |
| 7 | Structured JSON logging — replace `fprintf(stderr, ...)` with log helper emitting `{ts, level, xid, query, msg}`. | `evolution/db/error.c`, all call sites |
| 8 | OTel Collector sidecar config + `templates/otel-collector.yaml`. | `templates/otel-collector.yaml` (new) |
| 9 | `deploy/grafana/evosql-ceph-dashboard.json` — unified dashboard (EvosSQL + Ceph OSD/RBD metrics). | `deploy/grafana/evosql-ceph-dashboard.json` (new) |
| 10 | `tests/test_metrics.py` — scrape `/metrics`, assert expected series; OTel span emission E2E. | `tests/test_metrics.py` (new) |

---

## Day 82 — Cloud Native Deployment: Operator

### Task 156: ⬜ EvosSQL Kubernetes Operator (Feature #152)

**Goal:** Declarative cluster management via CRDs — `EvosqlCluster`, `EvosqlBackup`, `EvosqlRestore` — implemented with kubebuilder (Go).

| Step | Description | Files |
|------|-------------|-------|
| 1 | `kubebuilder init` project skeleton. | `deploy/operator/` (new) |
| 2 | `EvosqlCluster` CRD — `replicas`, `cephStorageClass`, `version`, `tde.enabled`, `backupSchedule`. | `deploy/operator/api/v1/cluster_types.go` (new) |
| 3 | `EvosqlBackup` CRD — snapshot + WAL archive reference, retention. | `deploy/operator/api/v1/backup_types.go` (new) |
| 4 | `EvosqlRestore` CRD — `sourceBackup`, `recoverToTime` (PITR). | `deploy/operator/api/v1/restore_types.go` (new) |
| 5 | Cluster reconcile: StatefulSet, Service, ConfigMap, Secret, PVCs. | `controllers/cluster_controller.go` (new) |
| 6 | Backup controller — snapshot CronJob + WAL archive bucket lifecycle. | `controllers/backup_controller.go` (new) |
| 7 | Failover controller — detect unreachable leader, trigger replica promote. | `controllers/failover_controller.go` (new) |
| 8 | Rolling upgrade controller — version bump → pod-by-pod upgrade with readiness gate. | `controllers/upgrade_controller.go` (new) |
| 9 | `deploy/helm/evolutiondb-operator/` — Helm chart to install operator. | `deploy/helm/evolutiondb-operator/` (new) |
| 10 | E2E: `kubectl apply -f evosqlcluster.yaml` → 3-pod cluster up, `SELECT 1` works. | `tests/operator_e2e.sh` (new) |

---

## Day 83 — Cloud Native Deployment: Horizontal Scale

### Task 157: ⬜ Horizontal Sharding Infrastructure (Feature #153)

**Goal:** Shard EvosSQL across multiple Ceph-backed clusters — partition by key, routing metadata in Ceph RGW, cross-shard 2PC. Depends on Task 88 (Partitioning) + Task 39 (XA).

| Step | Description | Files |
|------|-------------|-------|
| 1 | Prerequisite: Task 88 (Table Partitioning) completed. | — |
| 2 | Shard-key design doc — hash vs range, resharding strategy. | `.claude/plans/sharding.md` (new) |
| 3 | Shard routing metadata schema — stored in Ceph RGW or etcd. | `adaptor/shard_router.c/h` (extend) |
| 4 | Coordinator node — parses query, routes to shard(s), aggregates results. | `adaptor/coordinator.c/h` (new) |
| 5 | Shard-aware driver path (optional) — client library hash → shard. | CLI update |
| 6 | Cross-shard 2PC on top of Task 39 XA — coordinator plays TM role. | `adaptor/xa_transaction.c` |
| 7 | Helm chart — `shards × replicasPerShard` (e.g. `4 × 3 = 12 pods`), per-shard headless Services. | `values.yaml`, `statefulset.yaml` (sharded template) |
| 8 | Each shard backed by separate Ceph pool (or shared pool + image-per-shard). | `deploy/rook/pool-shard-*.yaml` |
| 9 | `tests/test_sharded_query.py` — insert across shards, JOIN across shards, aggregate. | `tests/test_sharded_query.py` (new) |
| 10 | `deploy/bench/shard-bench.yaml` — scaling test: 2, 4, 8 shards; measure throughput scaling. | `deploy/bench/shard-bench.yaml` (new) |

---

## Day 85 — v2 Hardening: COPY

### Task 158: ⬜ COPY v2 — Hardening & Extended Features (Feature #154)

**Goal:** Close the remaining gaps from Task 85 v1 (PR #83): superuser enforcement, `COPY (SELECT ...) TO`, PG BINARY format, multi-line quoted-newline CSV support, and s5cmd sidecar-less WAL-style archiving.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Enforce superuser/ADMIN role for server-side file mode (`COPY t FROM '/path'` / `TO '/path'`). Non-admin attempts return 42501. | `evolution/db/Copy.c`, `adaptor/query_executor.c` (privilege check) |
| 2 | `realpath()` + configured allow-prefix — defeat symlink traversal. Add `EVOSQL_COPY_ALLOW_PATH` env. | `evolution/db/Copy.c` |
| 3 | Grammar + executor for `COPY (SELECT ...) TO '/path'` / STDOUT. | `evolution/parser/evoparser.y`, `evolution/db/Copy.c` |
| 4 | PG wire BINARY format — signed little-endian payload per PG docs, per-column type encoders. | `adaptor/pg_handler.c`, `evolution/db/csv.c` (rename → `copy_format.c`) |
| 5 | Multi-line quoted fields in CSV — the current parser stops at first newline; fix to respect open quote. | `evolution/db/csv.c` |
| 6 | NOTICE-style client feedback for per-row parse errors with `ON_ERROR stop|skip` option. | `evolution/db/Copy.c` |
| 7 | Bench: 1M-row COPY FROM — target ≥500K rows/sec. | `bench/bench_copy.py` (new) |
| 8 | Tests — `tests/test_copy_v2.py`: superuser gate, symlink reject, (SELECT ...) TO, BINARY format, multi-line CSV. | `tests/test_copy_v2.py` |
| 9 | Regression — all existing test_copy* pass. | `tests/` |
| 10 | Docker rebuild + psql `\copy` BINARY test. | Manual |

---

## Day 86 — v2 Hardening: Full-Text Search

### Task 159: ⬜ Full-Text Search v2 — Maintenance & Speedup (Feature #155)

**Goal:** Task 86 v1 (PR #85) shipped a working tokenizer but leaves the inverted index stale on DML and the MATCH evaluator doesn't use it. v2 closes both.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Incremental index maintenance on INSERT: tokenize FT columns post-insert, `bt2_insert` each (word, PK) pair. | `evolution/db/Insert.c`, `evolution/db/FullText.c` |
| 2 | DELETE: prefix scan `<word>\x1fPK` for the row's PK and remove. | `evolution/db/Delete.c`, `FullText.c` |
| 3 | UPDATE: diff old vs new tokens, remove+insert. | `evolution/db/Update.c`, `FullText.c` |
| 4 | Query-time index-accelerated MATCH: prefix-scan each query term, intersect posting lists, rank. | `evolution/db/expression.c` (EXPR_MATCH) |
| 5 | Phrase queries — `AGAINST('"exact phrase"')` with positional posting lists. | `FullText.c` |
| 6 | Boolean operators — `+required -excluded` per MySQL IN BOOLEAN MODE. | `FullText.c` |
| 7 | Multi-column FULLTEXT INDEX — `CREATE FULLTEXT INDEX ON t(col1, col2)` concatenates columns. | `FullText.c`, `evolution/db/Index.c` |
| 8 | Turkish stemming + case fold (ICU optional build). Document ASCII-only fallback. | `FullText.c` |
| 9 | Tests — `tests/test_fulltext_v2.py`: maintenance on INSERT/UPDATE/DELETE, index speed-up vs scan, phrase, boolean. | `tests/test_fulltext_v2.py` |
| 10 | Regression. Docker + manual DBeaver test. | `tests/` |

---

## Day 87 — v2 Hardening: Materialized Views

### Task 160: ⬜ Materialized Views v2 — REFRESH CONCURRENTLY & Dependencies (Feature #156)

**Goal:** Task 87 v1 (PR #86) does a drop-and-rebuild REFRESH with a brief unavailability window. v2 adds in-place refresh and dependency tracking.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `REFRESH MATERIALIZED VIEW CONCURRENTLY name` grammar token + dispatch. | `evolution/parser/evoparser.y`, `adaptor/catalog.c` |
| 2 | In-place refresh: CTAS into a shadow table, atomic RENAME swap. | `adaptor/catalog.c` |
| 3 | Dependency tracking: new CAT_SYS_DEPENDS tree (MV ↔ source table IDs). | `evolution/db/catalog_internal.c/h`, `evolution/db/page_mgr.h` (CAT_MAX bump) |
| 4 | `ALTER TABLE` / `DROP TABLE` on a source emits a notice that dependent MVs are stale. | `adaptor/catalog.c`, `evolution/db/Drop.c` |
| 5 | `pg_matviews`-compatible catalog view for MV listing. | `adaptor/catalog.c` |
| 6 | Incremental refresh (delta-based) — track per-MV WAL LSN watermark, replay deltas only. Optional, stretch goal. | `evolution/db/wal.c`, `adaptor/catalog.c` |
| 7 | Indexes on MVs — `CREATE INDEX ON mv_name (...)` must work and survive REFRESH. | `evolution/db/Index.c` |
| 8 | Tests — `tests/test_matviews_v2.py`: REFRESH CONCURRENTLY (no read-blocking window), dependency tracking, index on MV. | `tests/test_matviews_v2.py` |
| 9 | Regression. | `tests/` |
| 10 | Full system test — Docker. | Manual |

---

## Day 88 — v2 Hardening: Table Partitioning

### Task 161: ⬜ Table Partitioning v2 — SELECT routing, LIST/HASH, multi-row (Feature #157)

**Goal:** Task 88 v1 (PR #87) supports RANGE partitioning with INSERT routing only. v2 closes SELECT/UPDATE/DELETE parent-level routing and adds LIST/HASH + partition cache.

| Step | Description | Files |
|------|-------------|-------|
| 1 | SELECT from parent — query_executor rewrites `SELECT ... FROM parent` to UNION ALL over children. | `adaptor/query_executor.c` |
| 2 | UPDATE / DELETE on parent — route per-row (for WHERE-matched partitions only). Partition pruning via WHERE on partition key. | `evolution/db/Update.c`, `evolution/db/Delete.c` |
| 3 | Multi-row INSERT across partitions — route per row instead of rejecting. Remove the v1 same-partition guard. | `evolution/db/Insert.c` |
| 4 | LIST partitioning — `PARTITION BY LIST (col)` + `PARTITION OF parent FOR VALUES IN (a, b, c)`. | `evolution/parser/evoparser.y`, `evolution/db/Create.c`, `catalog_internal.c` |
| 5 | HASH partitioning — `PARTITION BY HASH (col)` + `PARTITION OF parent FOR VALUES WITH (MODULUS m, REMAINDER r)`. | same as #4 |
| 6 | TableDesc partition cache — transient sorted array of (lo, hi, child_name); binary search at lookup time. | `evolution/db/table_api.c`, `catalog_internal.c` |
| 7 | Non-INT partition keys — VARCHAR, DATE bounds via string comparison (range_bound already string-encoded). | `catalog_internal.c` |
| 8 | DETACH PARTITION — ALTER TABLE parent DETACH PARTITION child; child becomes standalone table. ATTACH PARTITION — inverse. | `evolution/parser/evoparser.y`, `Create.c` / new `Partition.c` |
| 9 | PK uniqueness across partitions — enforce PK-contains-partition-key at CREATE TABLE time. | `evolution/db/Create.c` |
| 10 | Tests — `tests/test_partition_v2.py`: UNION ALL SELECT, per-row multi-row, LIST, HASH, DATE keys, DETACH/ATTACH, PK enforcement. Plus cap-enforcement edge test for 1025th partition. | `tests/test_partition_v2.py` |

---

### Task 162: ⬜ Lateral Joins v2 — Syntax surface, nested / multi-slot, ambiguity (Feature #158)

**Goal:** Task 89 v1 (PR #89) supports comma LATERAL, INNER/LEFT JOIN LATERAL, correlated refs, save/restore around probe + per-row re-exec. v2 closes PG-parity gaps in the lateral surface: explicit CROSS, rejecting RIGHT/FULL, nested / multi-slot regression coverage, clear ambiguity errors, and outer ORDER BY over lateral columns.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Grammar — accept explicit `CROSS JOIN LATERAL ( ... ) alias` as alias for comma-form; map to same JoinPlan slot type. | `evolution/parser/evoparser.y` |
| 2 | Grammar — reject `RIGHT JOIN LATERAL` and `FULL JOIN LATERAL` with SQL standard error (PG matches). Surface as `42601` / `0A000`. | `evolution/parser/evoparser.y`, `adaptor/query_executor.c` |
| 3 | Nested LATERAL — `LATERAL (SELECT ... FROM LATERAL (...))` depth ≥ 2. Snapshot save stack must nest correctly; no pool corruption. Add tests covering 3-deep nesting with correlated refs at each level. | `adaptor/join.c`, `tests/test_lateral_v2.py` |
| 4 | Multi-slot LATERAL — `FROM t1, LATERAL (...) s1, LATERAL (...) s2` with both correlated to `t1` and `s2` correlated to `s1`. Verify Phase 1 probe order + outer_col_* chain. | `adaptor/join.c` |
| 5 | Ambiguity error — when a bare column (`x`) exists in BOTH inner FROM and outer scope, emit `ERROR: column reference "x" is ambiguous` (`42702`) instead of silently using the inner one. | `evolution/db/expression.c` |
| 6 | ORDER BY over lateral columns — `ORDER BY u.id, sub.amount` where `sub.amount` is a lateral column currently not fully sorted (pipeline emits per-outer-row order). Either sort the final ResultSet or document the limitation. | `adaptor/query_executor.c`, `evolution/db/Select.c` |
| 7 | LATERAL with USING — reject (PG requires ON). | `evolution/parser/evoparser.y` |
| 8 | Parse-once plan cache — pre-compile the lateral subquery's AST at Phase 1 and bind outer row at per-row execution instead of full `query_execute` per row. Optional in v2 if too invasive. | `adaptor/join.c`, `evolution/db/expression.c` |
| 9 | Tests — `tests/test_lateral_v2.py`: CROSS JOIN LATERAL syntax, RIGHT/FULL rejection, 3-deep nested LATERAL, multi-slot LATERAL chain, ambiguous column error, ORDER BY over lateral col, USING rejection. Minimum 15 tests (10 normal + 3 edge + 2 error). | `tests/test_lateral_v2.py` |
| 10 | Performance benchmark — compare v1 (per-row full query_execute) vs v2 (with #8 plan cache if done) on 10K-row outer with 3-row lateral. Target: ≥ 5x speedup if plan cache shipped, else document baseline. | `tests/bench_lateral.py`, docs |

---

### Task 163: ⬜ Array Data Type v2 — Nesting, custom VARCHAR(N)[], operators (Feature #159)

**Goal:** Task 90 v1 (PR #91) supports 1-D arrays over 19 base types with binary blob storage, text-mode I/O, `col[i]` subscript, `ANY(col)`, `array_length()`, and `FROM unnest(arr)` (single-table). v2 closes PG-parity gaps on the expression surface and growth dimensions.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Nested arrays — `INT[][]`, `TEXT[][]`. Extend encoding to ndim > 1 with per-dim size header; update `arr_build_blob`/`arr_format_text` for nested braces `{{1,2},{3,4}}`. | `evolution/db/tuple_format.c` |
| 2 | Custom element size — `VARCHAR(N)[]`, `BINARY(N)[]` with per-array N stored in the blob element-type-code (not default 255). | `evolution/db/tuple_format.c`, `evolution/parser/evoparser.y` |
| 3 | Array concatenation — `arr1 \|\| arr2` and `arr \|\| elem` operators. | `evolution/db/expression.c`, `evolution/parser/evoparser.y` |
| 4 | Array slice — `col[1:3]` sub-array extraction. | `evolution/parser/evoparser.y`, `evolution/db/expression.c` |
| 5 | Set-equality for arrays — `arr = ARRAY[...]` compares element-wise ordered (matches PG). | `evolution/db/expression.c` |
| 6 | `unnest()` in SELECT list — SRF (set-returning function) infrastructure. Emits one output row per array element. | `adaptor/query_executor.c` |
| 7 | Correlated `FROM t, LATERAL unnest(t.col)` — wire UNNEST through the existing LATERAL pipeline with per-outer-row array expansion. | `adaptor/join.c` |
| 8 | Index on array column — GIN-style inverted index (or fall back to expression-based). Currently rejected with 0A000. | `evolution/db/Index.c`, `evolution/db/hash_idx.c` |
| 9 | Tests — `tests/test_array_v2.py`: nested, VARCHAR(N)[], `\|\|`, slice `[1:3]`, set-equality, unnest-in-SELECT, correlated LATERAL, GIN lookups. Min 20 tests. | `tests/test_array_v2.py` |
| 10 | Performance benchmark — 100K-row table with INT[] column, `ANY(col)` filter vs GIN index. Target: ≥ 10x speedup with GIN. | `tests/bench_array_v2.py`, docs |

---

### Task 164: ⬜ LISTEN / NOTIFY v2 — Expression payload, multi-server, persistence (Feature #160)

**Goal:** Task 91 v1 (PR #92) supports LISTEN/NOTIFY/UNLISTEN with commit-time delivery, savepoint scoping, per-TX dedup, and the `evo_notify()`/`pg_notify()` scalar functions on PG and EVO protocols. v2 extends delivery semantics and resilience.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Expression payload — `NOTIFY ch, <expr>` where `<expr>` is a full expression evaluated at NOTIFY time (concat, function calls, column refs). Currently literal-only. | `evolution/parser/evoparser.y`, `adaptor/query_executor.c` |
| 2 | Cross-server delivery — a NOTIFY on a leader replicates pending notifications via Raft WAL to followers, so listeners connected to any node receive the message after commit. | `adaptor/notify.c`, `adaptor/replication.c`, `adaptor/raft.c` |
| 3 | Optional persistence — opt-in `NOTIFY ch, 'payload' DURABLE` flag writes to a dedicated WAL segment so a server restart can replay undelivered notifications to reconnecting listeners. | `adaptor/notify.c`, `evolution/db/wal.c` |
| 4 | Listener queue overflow protection — if a listener's send queue exceeds `evo_listener_queue_max`, drop oldest messages with a `NoticeResponse` warning and a counter metric. | `adaptor/notify.c`, `adaptor/pg_protocol.c` |
| 5 | `pg_notification_queue_usage()` — return fraction of pending queue used (0.0–1.0) per PG convention. | `evolution/parser/evoparser.y`, `evolution/db/expression.c` |
| 6 | Channel pattern LISTEN — `LISTEN 'prefix.*'` subscribes to a glob. NOTIFY routes to every subscribing pattern that matches. | `adaptor/notify.c` |
| 7 | Async session ID in payload — let subscribers reliably distinguish their own notifications (for `SELF` mode) via a well-known header. | `adaptor/notify.c`, `adaptor/pg_protocol.c` |
| 8 | Deadlock avoidance rework — if the snapshot-then-release pattern ever blocks under pathological fan-out, move to `trylock + backoff` with a bounded retry budget. | `adaptor/notify.c` |
| 9 | Tests — `tests/test_listen_notify_v2.py`: expression payload, Raft fan-out across 3 nodes, DURABLE replay across restart, queue overflow, pattern subscribe, pg_notification_queue_usage. Min 20 tests. | `tests/test_listen_notify_v2.py` |
| 10 | Performance benchmark — sustained NOTIFY throughput at 10K subscribers / 1 publisher, 10K distinct channels, 5-minute soak. Target: no memory leak, ≥ 20K msg/sec. | `tests/bench_listen_notify_v2.py`, docs |

---

### Task 165: ⬜ Table Inheritance v2 — Multi-parent, ALTER propagation, constraint inheritance (Feature #161)

**Goal:** Task 92 v1 (PR #93) supports single-parent INHERITS with column copy at CREATE time, SELECT union (recursive, depth 16), `FROM ONLY`, `DROP CASCADE`, and the `pg_inherits` catalog view. v2 brings the model up to full PG parity on schema evolution and constraint semantics.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Multi-parent inheritance — `CREATE TABLE child () INHERITS (p1, p2)`. Column-name duplicates across parents merge when types match, else error `42804`. | `evolution/parser/evoparser.y`, `evolution/db/Create.c` |
| 2 | ALTER TABLE parent ADD COLUMN — propagate the new column to every descendant (via walking `cat_list_children` recursively). Default values and NOT NULL carry down. | `evolution/db/Create.c` (ALTER path), `adaptor/query_executor.c` |
| 3 | ALTER TABLE parent DROP COLUMN — reject with `2BP01` if a descendant has a row containing the column; else propagate drop. | `evolution/db/Create.c` |
| 4 | ALTER TABLE parent RENAME COLUMN — propagate to descendants; update each descendant's catalog row atomically under the DML mutex. | `evolution/db/Create.c`, `evolution/db/catalog_internal.c` |
| 5 | CHECK constraint inheritance — CHECK declared on parent at CREATE TABLE time auto-replicates to children. Child-added CHECKs stay local. | `evolution/db/Create.c` |
| 6 | Foreign-key propagation — a FK whose referencing column lives on parent also applies to children (enforce on INSERT into child). | `evolution/db/Insert.c`, `evolution/db/catalog_internal.c` |
| 7 | Trigger propagation — BEFORE/AFTER triggers on parent fire on child rows too, with correct NEW/OLD bindings. | `evolution/db/Trigger.c` |
| 8 | Statistics — `cat_list_all_descendants` walks the full subtree; `pg_stat_user_tables` aggregates child row counts under the parent's name. | `evolution/db/catalog_internal.c`, `adaptor/catalog.c` |
| 9 | Tests — `tests/test_inheritance_v2.py`: multi-parent merge, type-mismatch error (42804), ALTER ADD/DROP/RENAME propagation, CHECK inheritance, FK propagation, trigger fire-through, deep-chain stats. Min 25 tests. | `tests/test_inheritance_v2.py` |
| 10 | Performance benchmark — 1K descendants with 10K rows each; compare SELECT on parent (union of 10M rows) vs SELECT on ONLY parent. Target: linear scan time proportional to total rows, no per-descendant constant overhead. | `tests/bench_inheritance.py`, docs |

---

### Task 166: ⬜ Row-Level Security v2 — ALTER, BYPASSRLS, FORCE, column mask, role hierarchy (Feature #162)

**Goal:** Task 93 v1 (PR #98) shipped PostgreSQL-compatible RLS with ENABLE/DISABLE RLS, CREATE/DROP POLICY, USING / WITH CHECK, permissive vs. restrictive composition, FOR-command scoping, superuser bypass (hardcoded `admin`), CURRENT_USER expression, SELECT/INSERT/UPDATE/DELETE enforcement, and JOIN per-table filtering. v2 closes the gap on schema evolution, admin surface, and PG-parity semantics that v1 explicitly deferred.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `ALTER POLICY name ON table RENAME TO new_name` + `ALTER POLICY name ON table USING (…) [WITH CHECK (…)]` — in-place edit without drop/create. Preserve policy ordinal so permissive OR order stays deterministic. | `evolution/parser/evoparser.y`, `evolution/db/Policy.c`, `evolution/db/catalog_internal.c` |
| 2 | `BYPASSRLS` user attribute — new `is_bypass_rls` column on `UserDesc`, toggled by `ALTER USER name BYPASSRLS / NOBYPASSRLS`. `policy_is_superuser` replaced with catalog lookup; "admin" hardcoding removed. | `evolution/db/UserMgmt.c`, `evolution/db/catalog_internal.*`, `evolution/db/Policy.c`, `evolution/parser/evoparser.y` |
| 3 | `FORCE ROW LEVEL SECURITY` / `NO FORCE ROW LEVEL SECURITY` — table-level flag that makes even the table owner go through the policy overlay. `TableDesc.rls_forced` (uint8_t), serialized alongside `rls_enabled`. | `evolution/db/catalog_internal.*`, `evolution/db/Policy.c`, `evolution/parser/evoparser.y` |
| 4 | Column-level RLS — optional `COLUMNS (c1, c2)` clause on `CREATE POLICY`; reads of non-listed columns return NULL for non-superuser sessions (masking). Requires `tup_extract_fields` column-filter hook + executor result-row rewrite. | `evolution/parser/evoparser.y`, `evolution/db/Policy.c`, `adaptor/query_executor.c`, `evolution/db/tuple_format.c` |
| 5 | Real role hierarchy — `GRANT role_a TO role_b` creates an inheritance edge. `policy_applies_to_user` walks the graph (DFS with cycle guard, depth 32) so `TO admins` matches any user that inherits `admins`. Store edges in `CAT_SYS_GRANTS` with a new scope type `SCOPE_ROLE`. | `evolution/db/GrantMgmt.c`, `evolution/db/catalog_internal.*`, `evolution/db/Policy.c` |
| 6 | `pg_policies` + `pg_catalog.pg_policy` views — enumerate policies for `\dp+` / DBeaver introspection. Materialize on demand from `cat_list_policies_for_table` walked across all tables. | `adaptor/catalog.c` (pg_catalog shims) |
| 7 | RLS inside triggers + procedures — trigger body runs with the invoking user's identity when `SECURITY INVOKER`, ignores RLS when `SECURITY DEFINER`. Add `CREATE TRIGGER ... SECURITY {INVOKER|DEFINER}` surface. | `evolution/db/Trigger.c`, `evolution/parser/evoparser.y` |
| 8 | RLS + materialized views — record the owner + snapshot-time user on REFRESH; `SELECT FROM mv` under a non-owner session re-applies the base-table policy against the cached rows (rejecting rows the current user can't see even if they were materialized earlier). | `evolution/db/Create.c` (REFRESH path), `adaptor/query_executor.c`, new `MatViewOwner` field in `ViewDesc` |
| 9 | Overlay cache — thread-local LRU (capacity 64) keyed by `(table_id, user_id, cmd)` caching the composed `ExprNode*`. Invalidate on CREATE/DROP/ALTER POLICY and on BYPASSRLS toggle. Benchmark target: 2× improvement on `SELECT` latency against an RLS-enabled table vs. v1. | `evolution/db/Policy.c`, new `policy_cache.{h,c}` |
| 10 | Tests — `tests/test_rls_v2.py` with ≥25 cases: ALTER POLICY rename + USING/CHECK mutation, BYPASSRLS toggle round-trip, FORCE ROW LEVEL SECURITY (owner gated), column masking, role-hierarchy transitive match, `pg_policies` introspection, SECURITY INVOKER/DEFINER trigger, MV refresh + later SELECT, cache-hit/invalidate sanity, large-policy scaling. | `tests/test_rls_v2.py` (new) |

---

### Task 167: ⬜ Connection Pooling v2 — Dynamic sizing, diagnostics, per-user partitioning (Feature #163)

**Goal:** Task 96 v1 ships a fixed-size pre-spawned worker pool with a bounded FIFO queue (`EVOSQL_POOL_SIZE`, default 20) and a block-on-full backpressure policy. v2 closes the operational + multi-tenant gaps that v1 explicitly deferred: dynamic sizing, observability, crash recovery, multiplexing, and Windows parity.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Dynamic pool resize — grow when queue depth exceeds a high-watermark and CPU budget allows; shrink idle workers past a low-watermark. `EVOSQL_POOL_MIN` / `_MAX` env vars. Resize loop runs in a dedicated monitor thread (10 s tick). | `adaptor/pool.c`, `adaptor/server.c` |
| 2 | Worker crash recovery — install a `pthread_cleanup_push` handler + a supervisor thread that detects worker exits (signal, abort) and respawns up to `EVOSQL_POOL_MAX_RESPAWN` times before giving up with an operator-visible error. | `adaptor/pool.c` |
| 3 | `SHOW POOL` / `SHOW POOL WORKERS` — surface queue depth, avg/p99 wait time, per-worker state (idle/busy), total connections served, respawn count. Add row-returning SHOW variants, emit via `result_add_row`. | `adaptor/catalog.c` (handle_show), `adaptor/pool.c` (instrumentation) |
| 4 | Backpressure policy choice — `EVOSQL_POOL_OVERFLOW` with three modes: `block` (v1 default), `drop` (close socket with 53300), `error` (PG `ErrorResponse` 53300 "too many connections"). Default stays `block`. | `adaptor/pool.c`, `adaptor/server.c` |
| 5 | Idle worker timeout — a worker with no task for > `EVOSQL_POOL_IDLE_TIMEOUT` seconds exits; pool tracks min-worker floor so steady-state latency stays predictable. | `adaptor/pool.c` |
| 6 | Per-user / per-database partitioning — `EVOSQL_POOL_TENANT_WEIGHT` caps a single user's in-flight workers at `ceil(pool_max * weight)`. Prevents noisy-neighbor starvation in multi-tenant RLS deployments (Task 93/166 synergy). | `adaptor/pool.c`, `adaptor/server.c`, `evolution/db/catalog_internal.c` (per-user limit column on UserDesc) |
| 7 | Shared prepared statement plan cache — a read-mostly LRU keyed by `(normalized_sql, user_id, db_id)` stored in the pool manager, shared across workers. First parse populates, subsequent sessions skip the parser. Invalidated on any DDL targeting a referenced table. | `adaptor/query_executor.c`, new `adaptor/plan_cache.{h,c}` |
| 8 | Graceful pool resize via SQL — `SET GLOBAL pool_size = N` and `RELOAD POOL` commands drain idle workers and apply the new size without disconnecting live sessions. | `adaptor/catalog.c` (handle_set / handle_reload), `adaptor/pool.c` |
| 9 | Windows native pool — port the POSIX pthread loop to Win32 (`CreateThread` + `WaitForMultipleObjects` + SRWLock). Removes the `#ifdef _WIN32` no-op stubs Task 96 installed; server behaves identically across platforms. | `adaptor/pool.c` |
| 10 | Tests — `tests/test_pool_v2.py` with ≥20 cases: pool grows under load, shrinks when idle, SHOW POOL shape, drop/error overflow modes, idle timeout, per-user cap enforcement, plan cache hit ratio after warm-up, live-resize, worker respawn after controlled abort. Add a micro-benchmark comparing v1 vs. v2 p99 connect latency + steady-state RAM. | `tests/test_pool_v2.py` (new), `tests/bench_pool.py` |

---

### Task 168: ⬜ Replication v2 — Hardening, replica read-after-replay, dynamic leader advert (Feature #164)

**Goal:** Task 97 v1 shipped the hardened transport (auth, TLS, sync-commit, Raft persistence, witness, base backup). v2 closes the residual security/operability gaps surfaced by the Commit 8 security review + the scoped-out "make replica queryable without restart" work.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Hard-fail at boot when `EVO_ENCRYPTION` is enabled but `EVOSQL_REPLICATION_TLS` is off and `--replication-port > 0`. Replication would otherwise stream plaintext page bodies over the wire despite TDE at rest. | `adaptor/main.c` |
| 2 | Constant-time AUTH handshake — run PBKDF2 against a fixed dummy hash when the supplied user isn't found, so attackers can't enumerate valid usernames by response time. | `adaptor/replication.c` |
| 3 | Per-source-IP rate limiter on `sender_listener` accept: N failed AUTHs in T seconds → exponential backoff. Stops brute-force against the replication port even though PBKDF2 is already expensive. | `adaptor/replication.c` |
| 4 | `fsync(dir_fd)` after `rename()` in `raft_save_state` — POSIX atomicity only covers the file, not the directory entry. Without this the post-rename state can be lost on crash and Raft grants a second vote in the same term. | `adaptor/raft.c` |
| 5 | Bounded drain in `sender_drain_acks` — cap total bytes drained per call (e.g., 4 KiB) so a malicious replica can't starve the sender thread with a recv flood. | `adaptor/replication.c` |
| 6 | Validate `voted_for` range on `raft_load_state` — reject `voted < -1 \|\| voted >= g_num_nodes`; an attacker with write access to `root/raft.state` could otherwise drive OOB reads of `g_nodes[]`. | `adaptor/raft.c` |
| 7 | Strict AUTH line parser — reject lines with >1 space or non-printable user bytes; sanitize `user_s` for logging so malformed usernames can't inject control bytes into stderr. | `adaptor/replication.c` |
| 8 | Replica read-after-replay — `bp_invalidate_page` currently drops bp cache but the catalog layer's in-memory structures still reflect boot-time state. Add a `cat_refresh_on_wal(page_no)` hook invoked from the WAL receiver when the page belongs to a CAT_SYS_* B+ tree, so `SHOW TABLES` / `SELECT` on a replica see replayed state without a restart. | `evolution/db/catalog_internal.c`, `adaptor/replication.c` |
| 9 | Dynamic leader advert — extend `RaftMessage` (or a side channel in AppendEntries) to carry `repl_host:repl_port`. Replication glue on `RAFT_FOLLOWER` transition calls `repl_start_receiver(leader_host, leader_port, data_fd)` using the adverted address, so Raft failover automatically redirects the receiver. | `adaptor/raft.c`, `adaptor/replication.c` |
| 10 | Tests — `tests/test_replication_v2.py` with ≥20 cases: TDE+no-TLS boot fails, AUTH timing within 5%, rate-limiter blocks 100 failed attempts, raft.state survives `SIGKILL` between rename and dir fsync, drain bound enforcement, voted_for OOB rejected, replica SELECT after WAL catch-up without restart, 3-node kill-leader failover with auto-redirect. | `tests/test_replication_v2.py` (new) |

---

# Agent Memory Platform (Feature #200-#225)

**Vision:** "Powering Long-Term Memory for Agents" — Make EvolutionDB the canonical long-term memory backend for AI agent frameworks. Compete with MongoDB `langgraph-store-mongodb`, Pinecone, Zep (Graphiti), Mem0.

**Differentiators:** (1) SQL + vector + JSON in a single process (no dual-stack Postgres + Pinecone), (2) Temporal / bitemporal via MVCC-backed `FOR SYSTEM_TIME AS OF`, (3) Reactive push via LISTEN/NOTIFY + durable subscriptions + CDC stream, (4) Embedded + TDE on-prem for regulated sectors.

**Framework coverage (9 frameworks, 7 SQL primitives):** LangGraph (CHECKPOINT + MEMORY STORE), LangChain (MESSAGE LOG + MEMORY + ENTITY + GRAPH), LlamaIndex (MESSAGE LOG + MEMORY + DOCUMENT), CrewAI (CHECKPOINT + MEMORY + ENTITY), AutoGen (MEMORY), Semantic Kernel (MEMORY), Haystack (DOCUMENT + Mongo-filter), Mem0 (MEMORY + GRAPH + ENTITY), Zep (MESSAGE LOG + GRAPH bitemporal).

**MVP critical path** (LangGraph-only demo, ~3 sprints): 200 → 201 → 202 → 204 → 205 → 216 → 218(LangGraph) → 220.

**Full enterprise push:** 26 tasks / 8 sprints / ~9-10 weeks → v3.0.0.

See `docs/adr/ADR-002-agent-memory-platform-roadmap.md` for the architecture decision record.

---

## Day 94 — Sprint 1: Vector & Semantic Search Foundation

### Task 200: ⬜ VECTOR(N) Data Type (Feature #200)

**Goal:** Add a first-class `VECTOR(N)` type that stores N float4 values as a compact binary payload, with parser/lexer support, tuple format encoding, and full DML + COPY roundtrip.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Tuple format encoding: reserve `type_code = 260000 + N` (N = dimension). Payload = N × 4 bytes float4 LE. Single null bitmap bit. Update `tup_build`, `tup_extract_fields`, `tup_record_len` to handle the new type family. | `evolution/db/tuple_format.{h,c}` |
| 2 | Parser / lexer: new `VECTOR` token, `data_type` production `VECTOR '(' ICONST ')'`. Dimension must be in [1, 16384]. Regen parser via `make generate`. | `evolution/parser/evolexer.l`, `evoparser.y` |
| 3 | Literal syntax: `'[0.1, 0.2, 0.3]'::VECTOR(3)` — write vector literal parser in expression.c that converts the text form into the binary payload. Reject non-finite (NaN/Inf). | `evolution/db/expression.c` |
| 4 | Catalog type mapping: add `PG_OID_VECTOR` stub so `type_encoding_to_pg_oid` exposes the type over PG wire (RowDescription uses OID 0 — client treats as text). | `adaptor/query_executor.c`, `adaptor/result.h` |
| 5 | INSERT/UPDATE validation: ensure provided vector literal matches the declared dimension; raise SQLSTATE `22023` on mismatch. | `evolution/db/Insert.c`, `Update.c` |
| 6 | Text I/O roundtrip in `tup_extract_fields` → `'[0.100000,0.200000,0.300000]'` style. Float4 format with 6 decimals. | `evolution/db/tuple_format.c` |
| 7 | Cast / coercion: `array[f1, f2, f3]::VECTOR(3)`, `vector_to_array(v)`, `array_to_vector(arr)`. Expression evaluator dispatch. | `evolution/db/expression.c` |
| 8 | Tests — `tests/test_vector_type.py`: CREATE TABLE with `VECTOR(128)`, INSERT literal, SELECT roundtrip, dimension-mismatch rejection, NULL element, array↔vector cast, boundary (N=1, N=16384). ≥10 cases. | `tests/test_vector_type.py` (new) |
| 9 | Regression — ensure existing tuple_format / insert / select / COPY / dump test suites stay green. | `tests/` |
| 10 | Docker rebuild + DBeaver smoke: create a table, insert a 384-dim vector, confirm it renders as a bracket-list string. | `Dockerfile` |

---

### Task 201: ⬜ Vector Distance Functions + Operators (Feature #201)

**Goal:** Add pgvector-compatible distance functions (`cosine_distance`, `l2_distance`, `inner_product`, `l1_distance`) + operators (`<=>`, `<->`, `<#>`).

| Step | Description | Files |
|------|-------------|-------|
| 1 | `cosine_distance(a, b)` = `1 − (a·b) / (‖a‖·‖b‖)`. Loop over matched-dim float4 arrays. Returns DOUBLE. | `evolution/db/expression.c` |
| 2 | `l2_distance(a, b)` = `sqrt(sum((a[i]−b[i])²))`, `inner_product(a, b)` = `−(a·b)` (negative dot), `l1_distance(a, b)` = `sum(|a[i]−b[i]|)`. | `evolution/db/expression.c` |
| 3 | Operator syntax: `<=>` (cosine), `<->` (L2), `<#>` (negative inner product). Follow pgvector convention. Lexer tokens + parser productions. | `evolution/parser/evolexer.l`, `evoparser.y` |
| 4 | Expression engine wire: `EXPR_VEC_COSINE`, `EXPR_VEC_L2`, `EXPR_VEC_INNER`, `EXPR_VEC_L1` enum + constructors in expression.h. | `evolution/db/expression.{h,c}` |
| 5 | Type check: both operands must be `VECTOR(N)` with identical N; return FLOAT8. Raise `42883` on mismatch. | `evolution/db/expression.c` |
| 6 | Helpers: `vector_dim(v)`, `vector_norm(v)`, `vector_normalize(v)` scalar functions. | `evolution/db/expression.c` |
| 7 | Regenerate parser via `make generate`; ensure no new shift/reduce conflicts. | `evolution/parser/` |
| 8 | Tests — `tests/test_vector_ops.py`: known-answer distances for (0,0,0) vs (1,0,0), ORDER BY vec <=> query LIMIT k, NULL-safe semantics, dimension-mismatch error, normalize idempotence. ≥15 cases. | `tests/test_vector_ops.py` (new) |
| 9 | Regression sweep. | `tests/` |
| 10 | Full system test: Docker rebuild + DBeaver smoke. | `Dockerfile` |

---

### Task 202: ⬜ HNSW ANN Index (Feature #202)

**Goal:** Graph-based approximate nearest neighbor index via `CREATE INDEX ... USING HNSW (col vector_cosine_ops) WITH (m=16, ef_construction=64)`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | New file `evolution/db/hnsw.{h,c}` — HNSW graph stored on slotted pages. Define `HnswNode` layout: id (uint32), layer (uint8), neighbor count per layer, neighbor RowIDs array. | `evolution/db/hnsw.{h,c}` (new) |
| 2 | Build path: bottom-up layer assignment with geometric decay (`layer = floor(-ln(rand()) / ln(m))`), greedy search + neighbor refinement per pgvector/HNSW paper, bulk-insert batch mode. | `evolution/db/hnsw.c` |
| 3 | Search: `hnsw_search(root_page, query_vec, k, ef)` → returns top-k RowIDs ordered by distance. Supports dynamic `ef` per query. | `evolution/db/hnsw.c` |
| 4 | Catalog: add index_type `'H'` (HNSW) + store `m`, `ef_construction`, `distance_op` in `IndexDesc.params`. | `evolution/db/catalog_internal.{h,c}` |
| 5 | Parser: `CREATE INDEX ... USING HNSW (col <opclass>) WITH (m=N, ef_construction=N)`. Opclasses: `vector_cosine_ops`, `vector_l2_ops`, `vector_ip_ops`. | `evolution/parser/evoparser.y`, `evolexer.l` |
| 6 | Maintenance: hook HNSW `insert`/`delete` into `Insert.c`, `Delete.c`, `Update.c` for indexed vector columns. | `evolution/db/Insert.c`, `Delete.c`, `Update.c` |
| 7 | Planner hook: detect `ORDER BY col <distance_op> $const LIMIT k` → use HNSW scan if the index opclass matches the operator. | `adaptor/query_executor.c` |
| 8 | Tests — `tests/test_hnsw_index.py`: 10k × 128-dim vectors, recall@10 > 90% vs brute-force, CREATE/DROP INDEX, delete+reinsert correctness, `ef` tuning sanity, boundary `k=1` and `k=1000`. ≥12 cases. | `tests/test_hnsw_index.py` (new) |
| 9 | Regression + micro-bench: brute force vs HNSW latency comparison in `bench/bench_hnsw.py`. | `tests/`, `bench/bench_hnsw.py` (new) |
| 10 | Docker rebuild + DBeaver `CREATE INDEX USING HNSW` smoke. | `Dockerfile` |

---

### Task 203: ⬜ Hybrid Search — Vector + Filter (Feature #203)

**Goal:** `ORDER BY vec <=> $q WHERE user_id = 42 LIMIT 10` runs in a single pass using statistics-guided strategy selection.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Planner: detect hybrid pattern (`ORDER BY vec_op LIMIT k` + WHERE filter on same relation). | `adaptor/query_executor.c` |
| 2 | Strategy A (pre-filter): when filter selectivity < 10%, full scan the filtered rows then vector-sort top-k. Optimal for low selectivity. | `adaptor/query_executor.c` |
| 3 | Strategy B (post-filter): when filter selectivity > 10%, probe HNSW for `k' = k × ceil(1 / selectivity)` candidates, apply WHERE, take final top-k. | `adaptor/query_executor.c` |
| 4 | Selectivity source: plug Task 100 range estimator + Task 99 histograms. Fallback to default estimates for column without stats. | `adaptor/query_executor.c` |
| 5 | EXPLAIN output: distinguish `HNSW Index Scan + Filter` vs `Seq Scan + Vector Sort` paths with cost + estimated rows. | `adaptor/query_executor.c` |
| 6 | Tests — `tests/test_hybrid_search.py`: both strategies triggered by selectivity, recall + correctness vs pre-computed ground truth, NULL vector rows skipped, LIMIT 0 degenerate case, filter on expression index. ≥10 cases. | `tests/test_hybrid_search.py` (new) |
| 7 | Regression. | `tests/` |
| 8 | Benchmark: filter selectivity spectrum (1/10/50/90%) latency curve in `bench/bench_hybrid.py`. | `bench/bench_hybrid.py` (new) |
| 9 | Wiki page `Hybrid-Search.md` — pattern cookbook with query examples. | `wiki/Hybrid-Search.md` (new) |
| 10 | Docker rebuild + benchmark comparison vs Postgres+pgvector. | `Dockerfile` |

---

## Day 95 — Sprint 2: Agent Memory Native DDL

### Task 204: ⬜ CHECKPOINT Store DDL + DML (Feature #204)

**Goal:** Native `CREATE CHECKPOINT STORE` + `CHECKPOINT PUT/GET/LIST/PUT WRITES` DML for LangGraph `BaseCheckpointSaver`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | New catalog slot `CAT_SYS_CHECKPOINT_STORES` — store name, config (thread_column, ns_column, retention). | `evolution/db/catalog_internal.{h,c}` |
| 2 | DDL: `CREATE CHECKPOINT STORE mem_ck [WITH (retention='30 days')]`. | `evolution/parser/evoparser.y` |
| 3 | DDL: `DROP CHECKPOINT STORE mem_ck [CASCADE]`. | `evolution/parser/evoparser.y` |
| 4 | Physical backing table auto-created: `__ck_<name>(thread_id TEXT, checkpoint_ns TEXT, checkpoint_id TEXT PK, values JSON, metadata JSON, parent_config JSON, created_at TIMESTAMP)`. | `evolution/db/Checkpoint.{h,c}` (new) |
| 5 | DML: `CHECKPOINT PUT INTO mem_ck (thread_id, ns, id, values, metadata [, parent_config])`. | `evolution/db/Checkpoint.c`, `evoparser.y` |
| 6 | DML: `CHECKPOINT GET FROM mem_ck WHERE thread_id=? [AT id?]` → returns latest-by-thread if `AT` omitted. | `evolution/db/Checkpoint.c` |
| 7 | DML: `CHECKPOINT LIST FROM mem_ck WHERE thread_id=? [LIMIT n]` → history DESC order. | `evolution/db/Checkpoint.c` |
| 8 | DML: `CHECKPOINT PUT WRITES INTO mem_ck (...)` — atomic batch for pending/intermediate state. | `evolution/db/Checkpoint.c` |
| 9 | Tests — `tests/test_checkpoint_store.py`: CREATE/DROP, put/get/list/put_writes, thread isolation, JSON metadata roundtrip, latest-by-thread semantics. ≥15 cases. | `tests/test_checkpoint_store.py` (new) |
| 10 | Wiki `Checkpoint-Store.md` + regression. | `wiki/Checkpoint-Store.md` (new) |

---

### Task 205: ⬜ MEMORY Store DDL + DML (Feature #205)

**Goal:** Native `CREATE MEMORY STORE` + `MEMORY PUT/GET/SEARCH/DELETE/LIST NAMESPACES` for LangGraph `BaseStore` + cross-framework long-term memory.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Catalog slot `CAT_SYS_MEMORY_STORES` — name, embedding_column, embedding_dim, distance_op, index_type (default HNSW). | `evolution/db/catalog_internal.{h,c}` |
| 2 | DDL: `CREATE MEMORY STORE mem [WITH (embedding_dim=1536, distance='cosine')]`. | `evolution/parser/evoparser.y` |
| 3 | Physical backing table: `__mem_<name>(namespace TEXT[], key TEXT, value JSON, embedding VECTOR(N) NULL, created_at TIMESTAMP, ttl_at TIMESTAMP NULL)`, PK `(namespace, key)`. | `evolution/db/Memory.{h,c}` (new) |
| 4 | DML: `MEMORY PUT INTO mem (ns, key, value [, embedding])`. Upsert semantics. | `evolution/db/Memory.c` |
| 5 | DML: `MEMORY GET FROM mem WHERE ns=? AND key=?` → single row or empty. | `evolution/db/Memory.c` |
| 6 | DML: `MEMORY SEARCH mem USING VECTOR $q [WHERE filter] LIMIT k` — hybrid search wrapper (Task 203 reuse). | `evolution/db/Memory.c` |
| 7 | DML: `MEMORY DELETE FROM mem WHERE ns=? AND key=?` — single-row delete. | `evolution/db/Memory.c` |
| 8 | DML: `MEMORY LIST NAMESPACES IN mem PREFIX (?)` — hierarchical prefix scan using bt2_cursor_seek. | `evolution/db/Memory.c` |
| 9 | Tests — `tests/test_memory_store.py`: put/get/search/delete/list, namespace hierarchy, embedding roundtrip, TTL expiry sanity. ≥18 cases. | `tests/test_memory_store.py` (new) |
| 10 | Wiki `Memory-Store.md`. | `wiki/Memory-Store.md` (new) |

---

### Task 206: ⬜ Namespace Hierarchy + Multi-Tenant Policy (Feature #206)

**Goal:** Tuple-based namespace `(user_id, 'memories', ...)` + RLS-on-MEMORY-STORE integration.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Namespace storage format: text array serialized as `'{user_42,memories,session_1}'` in PK prefix. | `evolution/db/Memory.c` |
| 2 | Prefix scan: zero-padded prefix match via `bt2_cursor_seek` — walk keys where PK starts with given namespace tuple. | `evolution/db/Memory.c` |
| 3 | `LIST NAMESPACES` child discovery: distinct first-level children under a prefix. | `evolution/db/Memory.c` |
| 4 | RLS integration: `CREATE POLICY pname ON MEMORY STORE mem FOR SEARCH USING (namespace[1] = current_user)`. | `evolution/db/Policy.c`, `evoparser.y` |
| 5 | `current_user` in policy evaluator: resolves from session context during MEMORY access. | `evolution/db/expression.c`, `Policy.c` |
| 6 | Permissive / restrictive policy composition applied to memory store paths. | `evolution/db/Policy.c` |
| 7 | EXPLAIN on MEMORY SEARCH: show `Policy Filter: ...` line. | `adaptor/query_executor.c` |
| 8 | Tests — `tests/test_memory_multitenant.py`: two users, separate namespaces, PUT/GET isolation, SEARCH cross-leak prevention, RLS policy toggle. ≥12 cases. | `tests/test_memory_multitenant.py` (new) |
| 9 | Regression on existing RLS tests. | `tests/` |
| 10 | Wiki section: multi-tenant patterns in `Memory-Store.md`. | `wiki/Memory-Store.md` |

---

## Day 96 — Sprint 3: Temporal / Bitemporal Memory

### Task 207: ⬜ FOR SYSTEM_TIME AS OF Query Syntax (Feature #207)

**Goal:** `SELECT * FROM memories FOR SYSTEM_TIME AS OF '2026-04-20 14:00'` — snapshot-travel via MVCC.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Parser: `table_ref FOR SYSTEM_TIME AS OF expr` production. | `evoparser.y`, `evolexer.l` |
| 2 | MVCC: timestamp → CSN lookup via CSN ring buffer cache + CLOG binary search for older records. | `evolution/db/mvcc.{h,c}` |
| 3 | QueryContext: `snapshot_at_csn` override field used by Select scan path so visibility predicate uses historical snapshot. | `evolution/db/query_context.h` |
| 4 | `AS OF TIMESTAMP expr` vs `AS OF TRANSACTION xid_literal` (XID-based) variants. | `evoparser.y` |
| 5 | Retention bound check: out-of-range timestamp (before WAL retention) → SQLSTATE `22023` `out_of_range_snapshot`. | `evolution/db/Select.c`, `mvcc.c` |
| 6 | Tests — `tests/test_temporal_query.py`: INSERT, capture t1, UPDATE, capture t2; AS OF t1 returns old values, AS OF t2 returns new, out-of-window error. ≥10 cases. | `tests/test_temporal_query.py` (new) |
| 7 | Regenerate parser. | `evolution/parser/` |
| 8 | Regression. | `tests/` |
| 9 | Wiki `Temporal-Queries.md`. | `wiki/Temporal-Queries.md` (new) |
| 10 | Full system test. | `Dockerfile` |

---

### Task 208: ⬜ WITH SYSTEM VERSIONING — Temporal Tables (Feature #208)

**Goal:** `CREATE TABLE ... WITH SYSTEM VERSIONING` → automatic `valid_from`, `valid_to` columns + shadow history table.

| Step | Description | Files |
|------|-------------|-------|
| 1 | DDL: `CREATE TABLE t (...) WITH SYSTEM VERSIONING`. Add `TableDesc.system_versioned` flag. | `evolution/db/Create.c`, `catalog_internal.h` |
| 2 | Auto-inject `valid_from TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP`, `valid_to TIMESTAMP NOT NULL DEFAULT '9999-12-31 23:59:59'`. | `evolution/db/Create.c` |
| 3 | Auto-create history table: `t_history` with identical schema + mandatory `valid_from`, `valid_to`. | `evolution/db/Create.c` |
| 4 | UPDATE/DELETE hook: copy old row into history with `valid_to = CURRENT_TIMESTAMP`; new row gets `valid_from = CURRENT_TIMESTAMP`. | `evolution/db/Update.c`, `Delete.c` |
| 5 | `FOR SYSTEM_TIME BETWEEN x AND y` — bitemporal range query, union of main + history. Complements Task 207. | `evoparser.y`, `Select.c` |
| 6 | Edge: `DROP TABLE t` cascades to history table. `DROP TABLE t_history` alone rejected with `0A000`. | `evolution/db/Drop.c` |
| 7 | Tests — `tests/test_system_versioning.py`: INSERT → UPDATE → DELETE → AS OF queries see correct history state, BETWEEN range union, DROP cascade. ≥12 cases. | `tests/test_system_versioning.py` (new) |
| 8 | Regression. | `tests/` |
| 9 | Wiki `Temporal-Queries.md` update. | `wiki/Temporal-Queries.md` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 209: ⬜ WAL Retention Policy for AS OF Window (Feature #209)

**Goal:** `SET SYSTEM_TIME_RETENTION = '30 days'` bounds the AS OF query window and the history-table disk footprint.

| Step | Description | Files |
|------|-------------|-------|
| 1 | GUC-style setting: `EVOSQL_SYSTEM_TIME_RETENTION_DAYS` env var + SQL `SET` syntax. Default: 7 days. | `evolution/db/database_globals.c`, `adaptor/catalog.c` |
| 2 | WAL archive pruning: after each checkpoint, delete archive files older than retention. | `evolution/db/wal.c` |
| 3 | Pruning daemon: runs hourly using existing auto-reclaim thread pattern. | `evolution/db/auto_reclaim.c` |
| 4 | History table pruning (Task 208): `DELETE FROM t_history WHERE valid_to < now() - retention`. | `evolution/db/Reclaim.c` |
| 5 | `SHOW SYSTEM_TIME_RETENTION` + pg_catalog view `pg_retention_policy`. | `adaptor/catalog.c` |
| 6 | Tests — `tests/test_temporal_retention.py`: AS OF beyond retention → error; within window → success; pruning actually deletes history. ≥8 cases. | `tests/test_temporal_retention.py` (new) |
| 7 | Regression. | `tests/` |
| 8 | Wiki. | `wiki/Temporal-Queries.md` |
| 9 | Docker env var + Helm values.yaml exposure. | `docker-compose.yml`, `deploy/helm/evolutiondb/values.yaml` |
| 10 | Full system test. | `Dockerfile` |

---

## Day 97 — Sprint 4: Reactive Streaming

### Task 210: ⬜ Durable Subscription Cursor (Feature #210)

**Goal:** Client disconnect doesn't lose messages — resume-on-reconnect via ack-based cursor.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Catalog `CAT_SYS_SUBSCRIPTIONS` — subscription_id, channel, last_ack_lsn, consumer_addr, created_at. | `evolution/db/catalog_internal.{h,c}` |
| 2 | DDL: `CREATE SUBSCRIPTION s FOR CHANNEL 'memory_updated' DURABLE`. | `evoparser.y` |
| 3 | NOTIFY path extension: durable channels also WAL-log + append to `__sub_queue` table. | `adaptor/notify.c`, `evolution/db/Notify.c` |
| 4 | `RESUME SUBSCRIPTION s FROM lsn?` — replay unacked messages, advance cursor on ack. | `adaptor/notify.c` |
| 5 | Retention: acked messages pruned immediately; unacked TTL default 7 days. | `evolution/db/Notify.c` |
| 6 | PG wire extension: new message type for subscription resume; reuse CancelRequest framing. | `adaptor/pg_protocol.c` |
| 7 | Tests — `tests/test_durable_subscription.py`: publish → disconnect → reconnect → previously missed messages delivered, ack advances cursor, TTL prunes unacked. ≥10 cases. | `tests/test_durable_subscription.py` (new) |
| 8 | Regression — existing LISTEN/NOTIFY must stay working (non-durable channels). | `tests/` |
| 9 | Wiki `LISTEN-NOTIFY.md` update. | `wiki/LISTEN-NOTIFY.md` |
| 10 | Docker rebuild. | `Dockerfile` |

---

### Task 211: ⬜ CDC Streaming Server (Feature #211)

**Goal:** External consumers (Kafka/agent) subscribe to CDC events over TCP JSON lines (finish GAP-D7 stub).

| Step | Description | Files |
|------|-------------|-------|
| 1 | `adaptor/replication.c repl_start_cdc_server(port)` — full accept loop + per-client WAL decoder. | `adaptor/replication.c` |
| 2 | JSON event format: `{"op":"I","table":"memories","pk":"42","new":{...},"lsn":N,"ts":...}`. `op` ∈ `I/U/D`. | `adaptor/replication.c` |
| 3 | Filter DDL: `CREATE CDC STREAM s FOR TABLE memories [WHERE ...]`. Catalog entry + WAL decoder plug-in. | `evoparser.y`, `catalog_internal.c` |
| 4 | Consumer handshake: `CDC SUBSCRIBE s [FROM LSN n]`, ack-based resume. | `adaptor/replication.c` |
| 5 | CLI flag `--cdc-port 9970` (opt-in, default off). | `adaptor/main.c` |
| 6 | Tests — `tests/test_cdc_stream.py`: DML → CDC client receives JSON events, filter works, resume from LSN. ≥10 cases. | `tests/test_cdc_stream.py` (new) |
| 7 | Regression. | `tests/` |
| 8 | Wiki `CDC.md`. | `wiki/CDC.md` (new) |
| 9 | Docker compose CDC port expose. | `docker-compose.yml` |
| 10 | Full system test. | `Dockerfile` |

---

### Task 212: ⬜ MEMORY Event Triggers (Feature #212)

**Goal:** `ON MEMORY PUT mem DO ...` — trigger surface at the MEMORY STORE level.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Trigger scope extension: `cat_create_trigger` accepts MEMORY_STORE target alongside tables. | `evolution/db/catalog_internal.{h,c}`, `Trigger.c` |
| 2 | Hook into `MEMORY PUT/DELETE` execution path — fire BEFORE/AFTER. | `evolution/db/Memory.c` |
| 3 | OLD/NEW namespace + value access from trigger body. | `evolution/db/Trigger.c` |
| 4 | Cascade guard: recursive flag prevents infinite loop on self-referencing MEMORY PUT inside trigger. | `evolution/db/Trigger.c` |
| 5 | Tests — `tests/test_memory_trigger.py`: AFTER PUT auto-summary generation, AFTER DELETE audit log, cascade guard activation, OLD/NEW bindings. ≥10 cases. | `tests/test_memory_trigger.py` (new) |
| 6 | Regression. | `tests/` |
| 7 | Wiki update. | `wiki/Memory-Store.md` |
| 8 | Full system test. | `Dockerfile` |
| 9 | Example pattern: auto-summary trigger invoking a stored procedure. | `docs/agent-patterns/auto-summary.md` (new) |
| 10 | DBeaver / psql compat smoke. | Manual |

---

## Day 98 — Sprint 5: Agent Ops

### Task 213: ⬜ TTL Column Syntax + Auto-Expire (Feature #213)

**Goal:** `CREATE TABLE ... WITH (ttl_column='expires_at')` — background DELETE daemon for expired rows.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `TableDesc.ttl_column_name[128]` field. DDL parse: `WITH (ttl_column='expires_at')`. | `evolution/db/catalog_internal.h`, `Create.c`, `evoparser.y` |
| 2 | `ALTER TABLE t SET TTL COLUMN = 'col_name'` / `DROP TTL`. | `evoparser.y`, `Create.c` |
| 3 | TTL daemon thread (auto-reclaim pattern): per minute tick, `DELETE FROM t WHERE ttl_col < NOW()`. | `evolution/db/auto_reclaim.c`, new `ttl_daemon.c` |
| 4 | Index acceleration: if TTL column has a btree index, range-prune; otherwise seq scan. | `evolution/db/ttl_daemon.c` |
| 5 | MEMORY STORE default `ttl_at` column auto-registered as TTL column. | `evolution/db/Memory.c` |
| 6 | `SHOW TTL` — list tables with TTL columns and their status. | `adaptor/catalog.c` |
| 7 | Tests — `tests/test_ttl.py`: past `expires_at` auto-delete within 60 s, future rows survive, ALTER SET/DROP TTL roundtrip, indexed vs non-indexed daemon. ≥10 cases. | `tests/test_ttl.py` (new) |
| 8 | Regression. | `tests/` |
| 9 | Wiki `TTL.md`. | `wiki/TTL.md` (new) |
| 10 | Full system test. | `Dockerfile` |

---

### Task 214: ⬜ Auto-Summarization Template (Feature #214)

**Goal:** Stored procedure template + `token_length(text)` built-in for conversation buffer rollup.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `token_length(text)` built-in: split-by-whitespace count (reasonable default; tuned by LLM in v2). | `evolution/db/expression.c` |
| 2 | Sample procedure: `CREATE PROCEDURE summarize_thread(thread_id TEXT, max_tokens INT)`. | `docs/agent-patterns/summarize-procedure.sql` (new) |
| 3 | External summarization hook: `pg_call_external('summarize', json_payload)` UDF stub (v2 promotes to real HTTP). | `evolution/db/expression.c` |
| 4 | CHECKPOINT store trigger glue: every N-th PUT invokes `summarize_thread` (Task 212 consumer). | `evolution/db/Checkpoint.c` |
| 5 | Metadata: `summarized_at`, `summary_tokens_saved` columns on checkpoint rows. | `evolution/db/Checkpoint.c` |
| 6 | Tests — `tests/test_auto_summarize.py`: 100-message thread → summary triggered, token_length correctness, external hook stub returns known value. ≥8 cases. | `tests/test_auto_summarize.py` (new) |
| 7 | Regression. | `tests/` |
| 8 | Wiki `Agent-Patterns.md`. | `wiki/Agent-Patterns.md` (new) |
| 9 | Docker rebuild. | `Dockerfile` |
| 10 | DBeaver smoke. | Manual |

---

### Task 215: ⬜ Scheduled Jobs / CRON (Feature #215)

**Goal:** Cron-style scheduled SQL execution — `ANALYZE`, TTL prune, custom agent jobs.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Catalog `CAT_SYS_SCHEDULED_JOBS` — name, cron_expr, sql, last_run, status. | `evolution/db/catalog_internal.{h,c}` |
| 2 | DDL: `CREATE JOB j ON SCHEDULE '*/5 * * * *' DO 'ANALYZE TABLE t'`. | `evoparser.y` |
| 3 | Cron evaluator — 30 s tick, minute-level resolution. | new `evolution/db/Scheduler.{h,c}` |
| 4 | DDL: `DROP JOB j`, `SHOW JOBS`, `ALTER JOB j DISABLE/ENABLE`. | `evoparser.y`, `adaptor/catalog.c` |
| 5 | Background thread lifecycle + SIGTERM safe shutdown (existing auto-reclaim pattern). | `evolution/db/Scheduler.c`, `adaptor/main.c` |
| 6 | Tests — `tests/test_scheduled_jobs.py`: create job with 1-minute schedule → fires, DISABLE stops it, SHOW JOBS lists state. ≥8 cases. | `tests/test_scheduled_jobs.py` (new) |
| 7 | Regression. | `tests/` |
| 8 | Wiki `Scheduled-Jobs.md`. | `wiki/Scheduled-Jobs.md` (new) |
| 9 | Full system test. | `Dockerfile` |
| 10 | Multi-node race: 3-node cluster, confirm only leader runs each job (or leader elects via Raft). | `tests/` |

---

## Day 99 — Sprint 6: Framework-Common Primitives

### Task 222: ⬜ MESSAGE LOG (Append-Only Chat History) (Feature #222)

**Goal:** `CREATE MESSAGE LOG chat` — one-line-per-message ordered log. Covers LangChain `BaseChatMessageHistory`, LlamaIndex `ChatMemoryBuffer`, AutoGen `Memory`, Zep session messages.

| Step | Description | Files |
|------|-------------|-------|
| 1 | Catalog `CAT_SYS_MESSAGE_LOGS` + new object. DDL `CREATE MESSAGE LOG chat [WITH (ttl='7 days')]`. | `evolution/db/catalog_internal.{h,c}`, `evoparser.y` |
| 2 | Physical table `__ml_<name>(session_id TEXT, seq INT, role TEXT, content JSON, meta JSON, created_at TIMESTAMP)`, PK `(session_id, seq)`. | `evolution/db/MessageLog.{h,c}` (new) |
| 3 | `LOG APPEND INTO chat (session_id, role, content [, meta])` — auto-increment seq atomically. | `evolution/db/MessageLog.c` |
| 4 | `LOG READ FROM chat WHERE session_id=? [LAST n] [SINCE ts]` — ordered ASC. | `evolution/db/MessageLog.c` |
| 5 | `LOG TRUNCATE FROM chat WHERE session_id=? [BEFORE seq]`. | `evolution/db/MessageLog.c` |
| 6 | `LOG COUNT FROM chat WHERE session_id=?` — fast length for memory-bound summarization triggers. | `evolution/db/MessageLog.c` |
| 7 | TTL integration (Task 213): `WITH (ttl='7 days')` auto-registers TTL daemon on the log. | `evolution/db/MessageLog.c` |
| 8 | Tests — `tests/test_message_log.py`: append/read/truncate/count, session isolation, seq monotonicity, TTL expiry. ≥12 cases. | `tests/test_message_log.py` (new) |
| 9 | Regression. | `tests/` |
| 10 | Wiki `Message-Log.md`. | `wiki/Message-Log.md` (new) |

---

### Task 223: ⬜ DOCUMENT STORE + Mongo-Style JSON Filter (Feature #223)

**Goal:** Haystack `DocumentStore.filter_documents(filters={...})` + LlamaIndex `BaseDocumentStore`.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `CREATE DOCUMENT STORE docs` DDL + catalog entry. | `evoparser.y`, `catalog_internal.{h,c}` |
| 2 | Physical table `__doc_<name>(id TEXT PK, content TEXT, meta JSON, embedding VECTOR(N) NULL, created_at TIMESTAMP)`. | `evolution/db/Document.{h,c}` (new) |
| 3 | `DOCUMENT WRITE INTO docs (id, content, meta [, embedding])` — batch insert supported. | `evolution/db/Document.c` |
| 4 | Mongo-filter DSL parser: `{"$and":[{"user_id":"42"},{"score":{"$gt":0.5}}]}` → AST → internal WHERE predicate. Operators: `$eq, $ne, $gt, $gte, $lt, $lte, $in, $nin, $and, $or, $not, $exists` — 12 total. | `evolution/db/mongo_filter.{h,c}` (new) |
| 5 | `DOCUMENT FILTER FROM docs WHERE $json_filter$ [LIMIT n]`. Filter delimited by `$ ... $` shell-like markers to avoid SQL escape wars. | `evolution/db/Document.c`, `evoparser.y` |
| 6 | `DOCUMENT SEARCH docs USING VECTOR $q [WHERE $filter$] LIMIT k` — hybrid search wrapper (Task 203 reuse). | `evolution/db/Document.c` |
| 7 | `DOCUMENT DELETE FROM docs WHERE $filter$`. | `evolution/db/Document.c` |
| 8 | Tests — `tests/test_document_store.py`: all 12 operators, hybrid search with filter, delete-by-filter, unsupported operator rejected. ≥15 cases. | `tests/test_document_store.py` (new) |
| 9 | Regression. | `tests/` |
| 10 | Wiki `Document-Store.md`. | `wiki/Document-Store.md` (new) |

---

### Task 224: ⬜ GRAPH STORE — Temporal Knowledge Graph (Feature #224)

**Goal:** Zep Graphiti + Mem0 graph mode + LangChain KG equivalent. Bitemporal edges (`valid_from`, `valid_to`, `invalid_at` per triple).

| Step | Description | Files |
|------|-------------|-------|
| 1 | `CREATE GRAPH STORE kg` DDL + catalog entry. | `evoparser.y`, `catalog_internal.{h,c}` |
| 2 | Node table `__kg_<name>_nodes(id TEXT PK, type TEXT, props JSON, embedding VECTOR NULL, valid_from, valid_to)`. Edge table `__kg_<name>_edges(src_id, dst_id, rel TEXT, props JSON, valid_from, valid_to, invalid_at NULL, PK (src,rel,dst,valid_from))`. | `evolution/db/Graph.{h,c}` (new) |
| 3 | `GRAPH UPSERT NODE INTO kg (id, type [, props, embedding])`. | `evolution/db/Graph.c` |
| 4 | `GRAPH UPSERT EDGE INTO kg (src, rel, dst [, props])` — auto `valid_from = NOW()`, mark older matching triple's `invalid_at = NOW()`. | `evolution/db/Graph.c` |
| 5 | `GRAPH NEIGHBORS OF id IN kg [AS OF ts] [DEPTH n] [WHERE rel IN (...)]` — BFS up to n hops, bitemporal filter. | `evolution/db/Graph.c` |
| 6 | `GRAPH SEARCH kg USING VECTOR $q LIMIT k` — node embedding similarity. | `evolution/db/Graph.c` |
| 7 | `GRAPH PATH FROM a TO b IN kg [AS OF ts]` — shortest path (BFS, depth cap 8). | `evolution/db/Graph.c` |
| 8 | Tests — `tests/test_graph_store.py`: upsert, neighbors, path, bitemporal query ("what did we know about X 6 months ago?"), vector similarity. ≥15 cases. | `tests/test_graph_store.py` (new) |
| 9 | Regression. | `tests/` |
| 10 | Wiki `Graph-Store.md` — emphasize Zep-parity + temporal edge example. | `wiki/Graph-Store.md` (new) |

---

### Task 225: ⬜ ENTITY MEMORY Templates (Feature #225)

**Goal:** LangChain `ConversationEntityMemory` + CrewAI `EntityMemory` — one-SQL-object template.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `CREATE ENTITY STORE entities` — catalog + physical table `__ent_<name>(entity_key TEXT PK, summary TEXT, facts JSON, mention_count INT, last_seen TIMESTAMP)`. | `evoparser.y`, `evolution/db/Entity.{h,c}` (new) |
| 2 | `ENTITY PUT INTO entities (key, summary [, facts])` — upsert + `mention_count += 1`. | `evolution/db/Entity.c` |
| 3 | `ENTITY GET FROM entities WHERE key = ?`. | `evolution/db/Entity.c` |
| 4 | `ENTITY RANK FROM entities LIMIT n` — ORDER BY mention_count DESC, last_seen DESC. | `evolution/db/Entity.c` |
| 5 | Entity summary refresh trigger (Task 212 consumer): every 10th PUT invokes external LLM summary hook. | `evolution/db/Entity.c`, `docs/agent-patterns/entity-summary.sql` (new) |
| 6 | TTL hook: entity not mentioned for N days → auto-expire (Task 213 integration). | `evolution/db/Entity.c` |
| 7 | Tests — `tests/test_entity_store.py`: put/get/rank, mention_count increment, summary refresh stub, TTL expiry. ≥10 cases. | `tests/test_entity_store.py` (new) |
| 8 | Regression. | `tests/` |
| 9 | Wiki `Entity-Store.md`. | `wiki/Entity-Store.md` (new) |
| 10 | Full system test. | `Dockerfile` |

---

## Day 100 — Sprint 7: C Client Library + FFI Adapters

### Task 216: ⬜ libevosql-memory C SDK — Core (Feature #216)

**Goal:** `libevosql-memory.{so,dylib,a}` — opaque connection handle, checkpoint + memory + vector API, pkg-config install.

| Step | Description | Files |
|------|-------------|-------|
| 1 | New directory `client/libevosql-memory/` with Makefile. Optional CMakeLists. | `client/libevosql-memory/Makefile` (new) |
| 2 | Public header `include/evosql_memory.h` — opaque `evo_conn_t`, `evo_error_t`, constants, structs. | `client/libevosql-memory/include/evosql_memory.h` (new) |
| 3 | `evo_connect(host, port, user, pass, **conn_out)`, `evo_close(conn)` — EVO text protocol client. | `client/libevosql-memory/src/conn.c` (new) |
| 4 | Checkpoint API: `evo_checkpoint_put`, `evo_checkpoint_get`, `evo_checkpoint_list`. | `client/libevosql-memory/src/checkpoint.c` |
| 5 | Memory API: `evo_memory_put`, `evo_memory_get`, `evo_memory_search`, `evo_memory_delete`, `evo_memory_list_namespaces`. | `client/libevosql-memory/src/memory.c` |
| 6 | Vector helpers: `evo_vector_from_floats(float *arr, int n)`, `evo_vector_free`. | `client/libevosql-memory/src/vector.c` |
| 7 | Error handling: thread-local `last_error`, `evo_strerror(rc)`. | `client/libevosql-memory/src/error.c` |
| 8 | Tests — C unit suite `tests/test_sdk.c` (CUnit or plain main). ≥15 cases. | `client/libevosql-memory/tests/test_sdk.c` (new) |
| 9 | `make install` + pkg-config file `evosql-memory.pc`. | `client/libevosql-memory/Makefile` |
| 10 | README + example `examples/put_get.c`. | `client/libevosql-memory/README.md`, `examples/` |

---

### Task 217: ⬜ C SDK Streaming / Subscribe (Feature #217)

**Goal:** `evo_subscribe` callback-based event delivery built on Task 210 durable subscriptions.

| Step | Description | Files |
|------|-------------|-------|
| 1 | `evo_subscribe(conn, channel, callback, ctx)` — background thread per subscription. | `client/libevosql-memory/src/subscribe.c` (new) |
| 2 | CDC client: `evo_cdc_subscribe(conn, stream, callback, from_lsn)`. | `client/libevosql-memory/src/cdc.c` (new) |
| 3 | Thread-safe callback dispatch: mutex around callback invocation + event queue buffer. | `client/libevosql-memory/src/subscribe.c` |
| 4 | Graceful unsubscribe: `evo_unsubscribe(sub)` joins thread, flushes pending. | `client/libevosql-memory/src/subscribe.c` |
| 5 | Ack API: `evo_ack_up_to(subscription, lsn)` — advances cursor. | `client/libevosql-memory/src/subscribe.c` |
| 6 | Tests — callback fires on NOTIFY, CDC events delivered in order, unsubscribe is deterministic, concurrent 1k threads. | `client/libevosql-memory/tests/test_subscribe.c` |
| 7 | Example: reactive agent loop. | `examples/reactive_agent.c` |
| 8 | Thread-safety doc section. | `client/libevosql-memory/README.md` |
| 9 | Regression against server-side tests. | `tests/` |
| 10 | Docker compose test: server + SDK client in compose, assert events flow. | `docker-compose.yml` |

---

### Task 218: ⬜ FFI Bindings + Multi-Framework Adapters (Feature #218)

**Goal:** Python/Go/Rust FFI bindings + 6 framework adapter reference implementations.

| Step | Description | Files |
|------|-------------|-------|
| 1 | **LangGraph** `BaseCheckpointSaver` + `BaseStore` Python shim (ctypes over Task 204/205 DML). | `examples/python/adapters/langgraph_evosql.py` (new) |
| 2 | **LangChain classic** `BaseChatMessageHistory` + `VectorStoreRetrieverMemory` + `ConversationEntityMemory` → Task 222 + 205 + 225. | `examples/python/adapters/langchain_evosql.py` (new) |
| 3 | **LlamaIndex** `BaseKVStore` + `BaseDocumentStore` + `ChatMemoryBuffer` → 205 + 223 + 222. | `examples/python/adapters/llamaindex_evosql.py` (new) |
| 4 | **CrewAI** `ShortTermMemory` + `LongTermMemory` + `EntityMemory` → 205 + 204 + 225. | `examples/python/adapters/crewai_evosql.py` (new) |
| 5 | **AutoGen / AG2** `Memory` protocol (`add/query/clear`) → Task 205 (MemoryContent MIME in JSON). | `examples/python/adapters/autogen_evosql.py` (new) |
| 6 | **Mem0-compatible** Python API — drop-in `from evosql_memory import Memory` with `add/search/get/update/delete/history`. | `examples/python/adapters/mem0_compat.py` (new) |
| 7 | Go cgo example + Rust bindgen stub (FFI scaffolding, not a full adapter). | `examples/go/`, `examples/rust/` |
| 8 | Demo app: LangGraph ReAct agent using MESSAGE LOG + CHECKPOINT + MEMORY SEARCH end-to-end. | `examples/python/react_agent_demo.py` (new) |
| 9 | Documentation: framework-by-framework table mapping interfaces to EvoSQL primitives. | `wiki/Agent-Frameworks.md` (new) |
| 10 | Docker-compose demo stack + blog post draft. | `docker-compose.demo.yml` (new), `docs/blog/multi-framework-launch.md` (new) |

---

## Day 101 — Sprint 8: Benchmarks & Positioning

### Task 219: ⬜ Agent-Memory Benchmark Harness (Feature #219)

**Goal:** LongMemEval accuracy + p50/p99 latency vs Zep, Mem0, langgraph-store-mongodb, (optional) Pinecone.

| Step | Description | Files |
|------|-------------|-------|
| 1 | LongMemEval dataset loader — parse `https://github.com/xiaowu0162/LongMemEval` JSON corpus. | `bench/longmemeval/loader.py` (new) |
| 2 | Ingest: dataset → MEMORY STORE (Task 205) via C SDK FFI. | `bench/longmemeval/ingest.py` |
| 3 | Query: per-question semantic recall + answer, route through grader harness. | `bench/longmemeval/run.py` |
| 4 | Comparison backends: Zep (docker), Mem0 (pip), langgraph-store-mongodb (docker), Pinecone (optional via API key). | `bench/longmemeval/compare.py` |
| 5 | Latency bench: p50/p99 for checkpoint PUT/GET, memory SEARCH k=10 — 1k iterations × 5 backends. | `bench/latency/` (new) |
| 6 | Reactive latency: LISTEN/NOTIFY push vs Mongo change-stream polling — agent tick-loop replay. | `bench/reactive/` (new) |
| 7 | Temporal query: "what did we know 6 months ago?" — EvoSQL AS OF vs Zep Graphiti vs Mongo materialized snapshots. | `bench/temporal/` (new) |
| 8 | Report: markdown table + accuracy/latency/cost matrix. Targets: LongMemEval ≥ Zep (63.8%), p99 checkpoint PUT < 5 ms, reactive push latency < 10 ms. | `docs/benchmarks/v1.md` (new) |
| 9 | CI weekly run + README badge. | `.github/workflows/bench.yml` (new), `README.md` |
| 10 | Docker compose bench target + wiki. | `docker-compose.bench.yml` (new), `wiki/Benchmarks.md` (new) |

---

### Task 220: ⬜ Multi-Framework Compatibility Suite (Feature #220)

**Goal:** Run each framework's official/in-house conformance suite against EvoSQL — prove "works with X" via passing tests.

| Step | Description | Files |
|------|-------------|-------|
| 1 | **LangGraph** — run `langgraph-checkpoint-tests` (official) + BaseStore suite. | `tests/framework_compat/langgraph/` (new) |
| 2 | **LangChain** — `ChatMessageHistory` + `BaseMemory` test matrix. | `tests/framework_compat/langchain/` (new) |
| 3 | **LlamaIndex** — `BaseKVStore` + `BaseDocumentStore` protocol conformance. | `tests/framework_compat/llamaindex/` (new) |
| 4 | **CrewAI** — no official suite; write our own covering reset/search happy paths. | `tests/framework_compat/crewai/` (new) |
| 5 | **AutoGen** — `Memory` protocol conformance (add/query/clear). | `tests/framework_compat/autogen/` (new) |
| 6 | **Mem0** — REST-compat smoke (add/search/delete) via our `mem0_compat` adapter. | `tests/framework_compat/mem0_compat/` (new) |
| 7 | Async + concurrency stress: 1k concurrent threads per adapter. | `tests/framework_compat/stress/` (new) |
| 8 | CI matrix — one job per framework. | `.github/workflows/framework-compat.yml` (new) |
| 9 | Passing badges in README per framework. | `README.md` |
| 10 | Wiki `Agent-Frameworks.md` compat table — native / via-adapter / missing per feature. | `wiki/Agent-Frameworks.md` |

---

### Task 221: ⬜ Positioning & Docs Relaunch (Feature #221)

**Goal:** Landing page rewrite, comparison matrix, ADR-002 publish, v3.0.0 release.

| Step | Description | Files |
|------|-------------|-------|
| 1 | New `README.md` — agent-memory positioning front-and-center; keep SQL engine description secondary. | `README.md` |
| 2 | Comparison matrix: EvoSQL vs Mongo langgraph-store vs Pinecone vs Zep vs Mem0 vs Weaviate — feature grid. | `docs/comparison.md` (new) |
| 3 | Architecture diagram — SQL + vector + JSON single-process, reactive streaming, temporal. | `docs/architecture.svg` (new) |
| 4 | Getting started: 60-second quickstart (docker run + MEMORY STORE + C SDK PUT). | `docs/quickstart.md` (new) |
| 5 | ADR-002: Agent Memory pivot — scope, why, alternatives, consequences. Link from README. | `docs/adr/ADR-002-agent-memory-platform-roadmap.md` |
| 6 | Wiki home page update — point to new "Agent Memory" sidebar section. | `wiki/Home.md` |
| 7 | Pricing/positioning landing (self-host free + enterprise support placeholder). | `docs/pricing.md` (new) |
| 8 | Blog post: "Powering Long-Term Memory for Agents" launch. | `docs/blog/2026-launch.md` (new) |
| 9 | Version bump to v3.0.0 (major: product repositioning). | `evolution/db/version.h`, `deploy/helm/evolutiondb/Chart.yaml` |
| 10 | Release notes. | `docs/release-notes/3.0.0.md` (new) |

---

## Day 89 — Final Task

### Task 98: ⬜ Comprehensive Integration & Hardening

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
---

## Feature → Task Cross-Reference

| Feature # | Feature Name | Task # |
|-----------|-------------|--------|
| 1 | JOIN (INNER, LEFT, RIGHT, CROSS, NATURAL) | 52, 53 |
| 2 | Subqueries (scalar, WHERE) | 54 |
| 3 | EXISTS / ANY / SOME / ALL | 55 |
| 4 | UNION / UNION ALL / INTERSECT / EXCEPT | 50 |
| 5 | ALTER TABLE (ADD / DROP / MODIFY / RENAME) | 45, 46, 47 |
| 6 | FOREIGN KEY constraints | 10 |
| 7 | CHECK constraint | 9 |
| 8 | DEFAULT value enforcement | 6 |
| 9 | AUTO_INCREMENT / SERIAL | 7 |
| 10 | UNIQUE constraint enforcement | 5 |
| 11 | Composite PRIMARY KEY | 8 |
| 12 | Transactions (BEGIN / COMMIT / ROLLBACK) | 11 |
| 13 | Indexes (B-tree) | 12 |
| 14 | Multi-row INSERT | 3 |
| 15 | INSERT INTO ... SELECT | 42 |
| 16 | INSERT column list mapping | 4 |
| 17 | Expression-based WHERE for DELETE | 1 |
| 18 | Expression-based WHERE for UPDATE | 2 |
| 19 | Multi-table DELETE | 43 |
| 20 | Multi-table UPDATE | 44 |
| 21 | Views (CREATE VIEW / DROP VIEW) | 70 |
| 22 | Stored Procedures / Functions | 74 |
| 23 | Triggers | 75 |
| 24 | Cursors | 76 |
| 25 | Prepared Statements | 71 |
| 26 | Window Functions | 72 |
| 27 | CTEs (WITH ... AS) | 73 |
| 28 | EXPLAIN / EXPLAIN ANALYZE | 69 |
| 29 | DROP DATABASE | 49 |
| 30 | DROP SCHEMA | 49 |
| 31 | RENAME TABLE | 48 |
| 32 | ON DUPLICATE KEY UPDATE | 66 |
| 33 | REPLACE INTO | 67 |
| 34 | CREATE TABLE ... SELECT | 68 |
| 35 | ORDER BY expression & ordinal | 51 |
| 36 | SET @var = ... user variables | 65 |
| 37 | CAST / CONVERT | 60 |
| 38 | NULLIF | 61 |
| 39 | IF / IFNULL | 61 |
| 40 | REGEXP / RLIKE | 63 |
| 41 | EXISTS / ANY / ALL subquery execution | 55 |
| 42 | IS TRUE / IS FALSE / IS UNKNOWN | 62 |
| 43 | INTERVAL evaluation | 59 |
| 44 | GROUP_CONCAT / STRING_AGG | 64 |
| 45 | CONCAT 3+ args | 57 |
| 46 | \|\| operator | 57 |
| 47 | NULL-safe <=> comparison | 62 |
| 48 | String functions (LEFT, RIGHT, etc.) | 56 |
| 49 | Math functions (ABS, CEIL, etc.) | 58 |
| 50 | Date functions (NOW, DATEDIFF, etc.) | 59 |
| 51 | JSON / JSONB support | 82 |
| 52 | Full-text search | 86 |
| 53 | Table partitioning | 88 |
| 54 | Replication | 97 |
| 55 | Sequences (CREATE SEQUENCE, NEXTVAL) | 83 |
| 56 | RETURNING clause | 77 |
| 57 | UPSERT (ON CONFLICT) | 84 |
| 58 | Materialized Views | 87 |
| 59 | Lateral Joins | 89 |
| 60 | Array data type | 90 |
| 61 | COPY command | 85 |
| 62 | LISTEN / NOTIFY | 91 |
| 63 | Table inheritance | 92 |
| 64 | Row-level security | 93 |
| 65 | Roles | 79 |
| 66 | WAL / Crash recovery | 94 |
| 67 | File locking / concurrency | 95 |
| 68 | Connection pooling | 96 |
| 69 | SELECT INTO | 78 |
| 70 | Buffer Pool Manager | 13 |
| 71 | RECLAIM (Storage Garbage Collection) | 14 |
| 72 | Temporary Tables | 15 |
| 73 | Native UUID Type & gen_random_uuid() | 16 |
| 74 | Snowflake ID Generation | 17 |
| 75 | Query Timeout & Statement Cancellation | 41 |
| 76 | `evo_sleep(ms)` — Artificial Delay | 41 |
| 77 | `evo_jitter(min_ms, max_ms)` — Random Delay | 41 |
| 78 | JIT Compilation Evaluation | 98 |
| — | Dynamic allocation (storage fix) | 57 |
| — | Semicolon-safe storage (storage fix) | 58 |
| 101 | Histograms (Equi-Depth & Frequency) | 99 |
| 102 | Range Selectivity Estimation | 100 |
| 103 | Statistics System Views (pg_stats) | 101 |
| 104 | Sample-Based ANALYZE | 102 |
| 105 | Auto-Analyze (Threshold-Based) | 103 |
| 106 | EXPLAIN ANALYZE (Actual vs Estimated) | 104 |
| 107 | Clustering Factor & Correlation | 105 |
| 108 | Cost-Based Optimizer (Index vs Full Scan) | 106 |
| 109 | Multi-Column & Expression Statistics | 107 |
| 110 | Column-Specific & Schema-Wide ANALYZE | 108 |
| 111 | Top-N & Hybrid Histograms | 109 |
| 112 | Most Common Values (MCV) Lists | 110 |
| 113 | Functional Dependency Statistics | 111 |
| 114 | Filtered Statistics | 112 |
| 115 | Statistics Locking & Freezing | 113 |
| 116 | Manual Statistics Setting | 114 |
| 117 | Statistics Export & Import | 115 |
| 118 | Pending Statistics (Test-Before-Publish) | 116 |
| 119 | EXPLAIN Output Formats (JSON/XML/YAML) | 117 |
| 120 | Extended Table & Column Metrics | 118 |
| 121 | TABLESAMPLE Clause | 119 |
| 122 | Incremental Statistics (Partitioned) | 120 |
| 123 | FETCH FIRST/NEXT N ROWS ONLY (SQL:2008) | 121 |
| 124 | TOP N (T-SQL Uyumluluk) | 122 |
| 125 | TOP N PERCENT | 123 |
| 126 | WITH TIES | 124 |
| 127 | FETCH FIRST N PERCENT ROWS ONLY | 125 |
| 128 | LIMIT ALL / LIMIT NULL / OFFSET Without LIMIT | 126 |
| 129 | Early Termination for LIMIT | 127 |
| 130 | EXPLAIN'de LIMIT Node | 128 |
| 131 | SQL_CALC_FOUND_ROWS & FOUND_ROWS() | 129 |
| 132 | @@IDENTITY / SCOPE_IDENTITY() / @@last_insert_id | 130 |
| 133 | SELECT INTO (MSSQL/PG syntax) | 131 |
| 134 | CTAS WITH NO DATA / WITH DATA | 132 |
| 135 | CTAS Atomicity (Transaction Rollback) | 133 |
| 136 | Expression Column Type Inference for CTAS | 134 |
| 137 | CTAS with Aggregate / GROUP BY | 135 |
| 138 | CTAS in Transaction | 136 |
| 139 | CREATE TABLE LIKE (Structure Copy) | 137 |
| 140 | CREATE UNLOGGED TABLE AS SELECT | 138 |
| 141 | CTAS Field Truncation Fix | 139 |
| 142 | Local K8s Dev Env (Azure AKS + kind) | 146 |
| 143 | WAL Durability Hardening & Connection Pooling | 147 |
| 144 | Rook-Ceph Cluster Manifests (Tiered Pools) | 148 |
| 145 | Configurable WAL & Data Paths | 149 |
| 146 | Dual PVC StatefulSet + Raw Block Mode | 150 |
| 147 | K8s Performance Tuning (Huge Pages, RBD Cache) | 151 |
| 148 | Multi-Replica HA StatefulSet | 152 |
| 149 | CSI VolumeSnapshot Backup + Restore | 153 |
| 150 | Ceph RGW WAL Archive + PITR | 154 |
| 151 | Prometheus + OpenTelemetry Observability | 155 |
| 152 | EvosSQL Kubernetes Operator | 156 |
| 153 | Horizontal Sharding Infrastructure | 157 |
| 154 | COPY v2 — Hardening & Extended Features | 158 |
| 155 | Full-Text Search v2 — Maintenance & Speedup | 159 |
| 156 | Materialized Views v2 — REFRESH CONCURRENTLY & Dependencies | 160 |
| 157 | Table Partitioning v2 — SELECT routing, LIST/HASH, multi-row | 161 |
| 159 | Array Data Type v2 — Nesting, VARCHAR(N)[], operators | 163 |
| 160 | LISTEN/NOTIFY v2 — Expression payload, multi-server, persistence | 164 |
| 161 | Table Inheritance v2 — Multi-parent, ALTER propagation | 165 |
| 162 | Row-Level Security v2 — ALTER, BYPASSRLS, FORCE, column mask, role hierarchy | 166 |
| 163 | Connection Pooling v2 — Dynamic sizing, diagnostics, per-user partitioning | 167 |

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
| 9 | 17–41 | Snowflake ID & Query Timeout + Sleep/Jitter (#74, #75, #76, #77) | 🏗️ Architecture |
| 10 | 42–43 | INSERT...SELECT & Multi-table DELETE (#15, #19) | 🔴 Critical |
| 11 | 44–45 | Multi-table UPDATE & ALTER TABLE ADD (#20, #5p1) | 🔴 Critical |
| 12 | 46–47 | ALTER TABLE DROP & MODIFY/RENAME (#5p2, #5p3) | 🔴 Critical |
| 13 | 48–49 | RENAME TABLE & DROP DB/SCHEMA (#31, #29, #30) | 🟠 Important |
| 14 | 50–51 | UNION/INTERSECT/EXCEPT & ORDER BY expr (#4, #35) | 🔴 Critical |
| 15 | 52–53 | JOIN INNER & LEFT/RIGHT/CROSS (#1p1, #1p2) | 🔴 Critical |
| 16 | 54–55 | Subqueries & EXISTS/ANY/ALL (#2, #3, #41) | 🔴 Critical |
| 17 | 56–57 | String functions & CONCAT/\|\| (#48, #45, #46) | 🟡 Moderate |
| 18 | 58–59 | Math functions & Date functions (#49, #50, #43) | 🟡 Moderate |
| 19 | 60–61 | CAST & NULLIF/IF/IFNULL (#37, #38, #39) | 🟡 Moderate |
| 20 | 62–63 | IS TRUE/FALSE & REGEXP (#42, #47, #40) | 🟡 Moderate |
| 21 | 64–65 | GROUP_CONCAT & SET @var (#44, #36) | 🟡 Moderate |
| 22 | 66–67 | ON DUP KEY UPDATE & REPLACE INTO (#32, #33) | 🟠 Important |
| 23 | 68–69 | CREATE TABLE...SELECT & EXPLAIN (#34, #28) | 🟠 Important |
| 24 | 70–71 | Views & Prepared Statements (#21, #25) | 🟠 Important |
| 25 | 72–73 | Window Functions & CTEs (#26, #27) | 🟠 Important |
| 26 | 74–75 | Stored Procedures & Triggers (#22, #23) | 🟠 Important |
| 27 | 76–77 | Cursors & RETURNING (#24, #56) | 🟠 Important |
| 28 | 78–79 | SELECT INTO & Roles (#69, #65) | 🟠/🔵 |
| 29 | 80–81 | Dynamic allocation & Semicolon safety (Storage) | ⚙️ Engine |
| 30 | 82–83 | JSON & Sequences (#51, #55) | 🔵 Advanced |
| 31 | 84–85 | UPSERT & COPY (#57, #61) | 🔵 Advanced |
| 32 | 86–87 | Full-text search & Materialized views (#52, #58) | 🔵 Advanced |
| 33 | 88–89 | Partitioning & Lateral Joins (#53, #59) | 🔵 Advanced |
| 34 | 90–91 | Array type & LISTEN/NOTIFY (#60, #62) | 🔵 Advanced |
| 35 | 92–93 | Table inheritance & Row-level security (#63, #64) | 🔵 Advanced |
| 36 | 94–95 | WAL & File locking (#66, #67) | 🔵 Advanced |
| 37 | 96–97 | Connection pooling & Replication (#54, #68) | 🔵 Advanced |
| 38 | 98 | Integration, hardening & release | 🏁 Final |
| 72 | 146 | Local K8s Dev Env — Azure AKS + kind (#142) | ☁️ Cloud Native |
| 73 | 147 | WAL Durability & Connection Pooling (#143) | ☁️ Cloud Native |
| 74 | 148 | Rook-Ceph Cluster Manifests (#144) | ☁️ Cloud Native |
| 75 | 149 | Configurable WAL & Data Paths (#145) | ☁️ Cloud Native |
| 76 | 150 | Dual PVC + Raw Block Mode (#146) | ☁️ Cloud Native |
| 77 | 151 | Performance Tuning — Huge Pages, RBD Cache (#147) | ☁️ Cloud Native |
| 78 | 152 | Multi-Replica HA StatefulSet (#148) | ☁️ Cloud Native |
| 79 | 153 | CSI VolumeSnapshot Backup (#149) | ☁️ Cloud Native |
| 80 | 154 | Ceph RGW WAL Archive + PITR (#150) | ☁️ Cloud Native |
| 81 | 155 | Prometheus + OpenTelemetry Observability (#151) | ☁️ Cloud Native |
| 82 | 156 | EvosSQL Kubernetes Operator (#152) | ☁️ Cloud Native |
| 83 | 157 | Horizontal Sharding Infrastructure (#153) | ☁️ Cloud Native |
| 85 | 158 | COPY v2 — Hardening & Extended Features (#154) | 🔧 v2 Hardening |
| 86 | 159 | Full-Text Search v2 — Maintenance & Speedup (#155) | 🔧 v2 Hardening |
| 87 | 160 | Materialized Views v2 — REFRESH CONCURRENTLY & Deps (#156) | 🔧 v2 Hardening |
| 88 | 161 | Table Partitioning v2 — SELECT routing, LIST/HASH (#157) | 🔧 v2 Hardening |
| 89 | 162 | Lateral Joins v2 — Syntax surface, nested / multi-slot, ambiguity (#158) | 🔧 v2 Hardening |
| 90 | 163 | Array Data Type v2 — Nesting, VARCHAR(N)[], operators (#159) | 🔧 v2 Hardening |
| 91 | 164 | LISTEN / NOTIFY v2 — Expression payload, multi-server, persistence (#160) | 🔧 v2 Hardening |
| 92 | 165 | Table Inheritance v2 — Multi-parent, ALTER propagation (#161) | 🔧 v2 Hardening |
| 93 | 166 | Row-Level Security v2 — ALTER, BYPASSRLS, FORCE, column mask, role hierarchy (#162) | 🔧 v2 Hardening |

**Total:** 116 tasks × 10 steps = **1160 steps** over **66 working days** (118 features).

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
