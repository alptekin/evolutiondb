# Table API and DML Operations

This page documents the Table API (`table_api.h/c`) and the DML operation modules (`Insert.c`, `Select.c`, `Update.c`, `Delete.c`, `Drop.c`, `Create.c`, `Index.c`) that implement SQL data manipulation on top of the unified page-based storage engine.

All table data is stored in **slotted pages** (heap storage) and indexed by **B+ trees** (`btree2`). The **system catalog** tracks table metadata, column definitions, constraints, and index descriptors. The Table API provides the bridge between SQL operations and these storage primitives.

---

## Table API (`table_api.h` / `table_api.c`)

The Table API is a focused set of functions that encapsulate catalog resolution, heap page I/O, primary key management, and full table scanning. Every DML module depends on it.

### `tapi_resolve()` -- Catalog Resolution

```c
int tapi_resolve(const char *name_or_path, TableDesc *td,
                 ColumnDesc *cols, int *ncols);
```

Resolves a table name (plain name like `"employees"` or full path like `"root/evosql/default/employees"`) into a `TableDesc` structure and optional `ColumnDesc` array. Internally:

1. Strips directory prefixes and `.dat` extension via `tapi_basename()`.
2. Calls `cat_resolve_table(g_currentDatabase, g_currentSchema, name, td)` to look up the table in the system catalog using the current database/schema context.
3. If `cols` and `ncols` are non-NULL, calls `cat_find_columns(td->table_id, cols, CAT_MAX_COLUMNS)` to populate the column descriptors.

Returns `0` on success, `-1` if the table does not exist.

### `tapi_pk_tree()` -- B+ Tree Handle for Primary Key

```c
static inline BTree2 tapi_pk_tree(const TableDesc *td)
{
    BTree2 tree = { td->pk_root_page };
    return tree;
}
```

Constructs a `BTree2` handle from the table's `pk_root_page`. This is a zero-cost inline that every DML operation uses to access the primary key index.

### `tapi_build_pk_key()` / `tapi_build_pk_key_from_vals()` -- PK Key Composition

```c
int tapi_build_pk_key(const ColumnDesc *cols, int ncols,
                      const char *record, char *key_out, int key_size);

int tapi_build_pk_key_from_vals(const ColumnDesc *cols, int ncols,
                                char **vals, int nvals,
                                char *key_out, int key_size);
```

Builds a composite primary key string from record fields. Scans the `ColumnDesc` array for columns with `is_pk == 1` and concatenates their values:

- **Single PK**: `"42"`
- **Composite PK**: `"42|alice"` (pipe-delimited)

If no column has `is_pk` set, the first column is used as a fallback. The `_from_vals` variant accepts a pre-parsed value array; the plain variant parses a semicolon-delimited record string internally.

### `tapi_get_pk_indices()` -- PK Column Positions

```c
int tapi_get_pk_indices(const ColumnDesc *cols, int ncols,
                        int *indices, int max);
```

Returns the ordinal positions of PK columns within the schema. Used by UPDATE and DELETE to detect when a SET clause modifies a PK column (which requires B+ tree key updates).

### Heap Page Operations

All record data lives in **slotted pages** chained together via `PageHeader.next_page`. The Table API provides four heap operations:

#### `tapi_heap_insert()`

```c
RowID tapi_heap_insert(TableDesc *td, const char *record, uint16_t rec_len);
```

1. Attempts `slot_insert()` on the table's current `heap_page`.
2. If the page is full (or no heap page exists), allocates a fresh `PAGE_DATA` page via `pgm_alloc_page()`, initializes it with `slot_page_init()`, and chains it by setting `new_page->next_page = td->heap_page`.
3. Updates `td->heap_page` and persists it via `cat_update_heap_page()`.
4. Returns the `RowID` (page number + slot index) of the inserted record. Returns `{0, 0}` on error.

#### `tapi_heap_read()`

```c
int tapi_heap_read(RowID rid, char *buf, int bufsize);
```

Reads the page at `rid.page_no`, then calls `slot_read()` for `rid.slot_idx`. Returns the record length (null-terminated), or `-1` on error.

#### `tapi_heap_update()`

```c
RowID tapi_heap_update(TableDesc *td, RowID old_rid,
                       const char *new_record, uint16_t rec_len);
```

Attempts an **in-place update** via `slot_update()`. If the record does not fit in the existing slot (the slot's free space is insufficient), falls back to delete-then-insert: deletes the old slot, then calls `tapi_heap_insert()` to place the record in a page with space. Returns the (possibly changed) `RowID`.

#### `tapi_heap_delete()`

```c
int tapi_heap_delete(RowID rid);
```

Reads the page, calls `slot_delete()` to mark the slot as free, and writes the page back. Returns `0` on success.

### Full Table Scan

```c
int tapi_scan_begin(const TableDesc *td, TableScanCursor *cursor);
int tapi_scan_next(TableScanCursor *cursor,
                   char *pk_key_out, char *record_out, int rec_out_size);
```

Table scans iterate over the **PK B+ tree** (not the heap chain), which yields records in primary key order. `tapi_scan_begin()` opens a cursor at the first leaf entry via `bt2_cursor_first()`. Each call to `tapi_scan_next()` advances the cursor with `bt2_cursor_next()`, retrieves the PK key and `RowID`, then fetches the record via `tapi_heap_read()`.

The `TableScanCursor` wraps a `BTree2Cursor` and the `BTree2` handle:

```c
typedef struct {
    BTree2Cursor bt_cursor;
    BTree2       tree;
} TableScanCursor;
```

### `tapi_free_heap_pages()`

```c
void tapi_free_heap_pages(const TableDesc *td);
```

Walks the heap page chain starting at `td->heap_page`, following `next_page` pointers, and calls `pgm_free_page()` on each page. Used by `DROP TABLE` and bulk cleanup.

---

## DML Operations

### CREATE TABLE (`Create.c`)

`CreateTableProcess()` orchestrates table creation through the catalog and storage layers:

1. **Catalog registration**: Calls `cat_create_table()` to register the table in `CAT_SYS_TABLES`, which assigns a unique `table_id`.
2. **PK B+ tree creation**: Calls `bt2_create()` to allocate the root page for the primary key index. The root page number is stored in the catalog via `cat_update_pk_root()`.
3. **Column registration**: Calls `cat_create_columns()` to store each column's metadata (name, type code, nullability, default value, uniqueness, PK flag) in `CAT_SYS_COLUMNS`.
4. **Constraint registration**: Registers CHECK constraints, UNIQUE constraints, and FOREIGN KEY constraints in `CAT_SYS_CONSTRAINTS`.
5. **AUTO_INCREMENT**: If any column has AUTO_INCREMENT, the auto-increment column index, counter, and step are stored in the `TableDesc` and persisted in the catalog.

### INSERT (`Insert.c`)

```
INSERT INTO employees (name, dept, salary) VALUES ('Alice', 'Eng', 90000);
```

**Data flow:**

```
Parser (RPN) --> InsertProcess()
                    |
                    v
            tapi_resolve(tblName)           -- catalog lookup
                    |
                    v
            [Column reordering]             -- if INSERT specifies column list
                    |
                    v
            [AUTO_INCREMENT]                -- generate value if needed
                    |
                    v
            [Validation pipeline]           -- types, NOT NULL, UNIQUE, CHECK
                    |
                    v
            [Unique index pre-check]        -- btree_search on secondary indexes
                    |
                    v
            store_single_row()
                |
                +-- tapi_build_pk_key()     -- compose PK from values
                +-- bt2_search()            -- duplicate PK check
                +-- g_tx_undo_callback()    -- record TX_OP_INSERT undo entry
                +-- tapi_heap_insert()      -- store record in slotted page
                +-- bt2_insert()            -- index PK in B+ tree
                    |
                    v
            [Secondary index update]        -- btree_insert() for each index
                    |
                    v
            [Persist AUTO_INCREMENT]        -- cat_update_auto_inc()
```

**Key details:**

- **Multi-row INSERT**: `g_insert` contains all rows separated by `ROW_SEP` (`\x02`). Each row is processed independently through the validation and storage pipeline.
- **Column reordering**: When the INSERT specifies a column list (`INSERT INTO t (c2, c1) VALUES ...`), `reorder_row_for_column_map()` maps user-specified column order to the schema's physical column order, filling missing columns with DEFAULT values or NULL.
- **Duplicate PK detection**: `store_single_row()` calls `bt2_search()` before inserting. If the key exists, returns `1` (duplicate) without modifying any data.
- **Root page tracking**: After `bt2_insert()`, the function updates `td->pk_root_page = pk_tree.root_page` because a B+ tree split may have created a new root page.

### SELECT (`Select.c`)

```
SELECT * FROM employees WHERE dept = 'Eng';
```

**Data flow:**

```
Parser (RPN) --> SelectAll() / SelectProcess()
                    |
                    v
            tapi_resolve(tblName)           -- catalog lookup
                    |
                    v
        +---[Access path decision]---+
        |                            |
   Full Scan                    PK Lookup
        |                            |
        v                            v
tapi_scan_begin()           bt2_search(pk_tree, key)
tapi_scan_next() loop            |
        |                        v
        v                  tapi_heap_read(rid)
[WHERE evaluation]               |
        |                        v
        v                  [Single result]
[ORDER BY sort]
        |
        v
[Result output]
```

**`SelectAll()`** handles `SELECT *` with these paths:

1. **Simple scan**: Opens a `TableScanCursor` via `tapi_scan_begin()`, iterates with `tapi_scan_next()`, prints each record.
2. **ORDER BY**: Collects all records into an array, sorts with `qsort()` using the specified column index (`g_sortColIndex`) and direction (`g_sortDesc`), then prints the sorted result.

**`SelectProcess()`** (in the adaptor's `query_executor.c`) handles full SQL SELECT with WHERE:

- **PK Lookup**: When WHERE matches the primary key column with `=`, performs a single `bt2_search()` + `tapi_heap_read()`.
- **Index Scan**: When WHERE matches a secondary index column, uses `sec_idx_search()` to find matching PKs, then fetches each via `bt2_search()` + `tapi_heap_read()`.
- **Sequential Scan**: Falls back to `tapi_scan_begin/next()` over all rows, evaluating the WHERE expression on each record via `expr_evaluate()`.

### UPDATE (`Update.c`)

```
UPDATE employees SET salary = 95000 WHERE name = 'Alice';
```

**Data flow:**

```
Parser (RPN) --> UpdateProcess()
                    |
                    v
            tapi_resolve(tblName)           -- catalog lookup
                    |
                    v
        [Identify matching rows]            -- WHERE scan or PK lookup
                    |
                    v
            ApplyUpdateToRow()
                |
                +-- bt2_search(pk_tree, pkKey)
                +-- tapi_heap_read(rid)     -- fetch current record
                +-- g_tx_undo_callback()    -- TX_OP_UPDATE with old data
                +-- [Modify fields]         -- apply SET column = value
                +-- [CHECK validation]      -- expr_evaluate on updated row
                +-- [Unique index check]    -- btree_search for conflicts
                +-- tapi_heap_update()      -- write modified record
                +-- bt2_update()            -- update PK tree if RowID moved
                +-- [Secondary idx update]  -- btree_delete old + btree_insert new
```

**Key details:**

- **In-place vs. relocated update**: `tapi_heap_update()` first tries `slot_update()` in-place. If the record grew and no longer fits, it deletes the old slot and inserts into a page with space, returning a different `RowID`. When the RowID changes, `bt2_update()` updates the PK B+ tree's value pointer.
- **Secondary index maintenance**: For each secondary index whose indexed column was modified by the SET clause, the function deletes the old composite key (`btree_delete(path, old_value, pk)`) and inserts the new one (`btree_insert(path, new_value, pk)`).
- **CHECK constraint re-evaluation**: After modifying the field values in memory, all CHECK constraints are re-evaluated against the updated row before persisting.

### DELETE (`Delete.c`)

```
DELETE FROM employees WHERE dept = 'Eng';
```

**Data flow:**

```
Parser (RPN) --> DeleteProcess()
                    |
                    v
            tapi_resolve(tblName)           -- catalog lookup
                    |
                    v
        +---[WHERE present?]---+
        |                      |
   Expression WHERE       PK-based delete
        |                      |
        v                      v
tapi_scan_begin/next()    bt2_search(pkKey)
[expr_evaluate loop]           |
[collect matching keys]        v
        |                tapi_heap_read(rid)
        v                      |
[Phase 2: delete]              v
    for each match:       g_tx_undo_callback()
        |                      |
        +-- bt2_search()       v
        +-- tapi_heap_read()  [sec idx cleanup]
        +-- g_tx_undo_callback()    |
        +-- [sec idx cleanup]      v
        +-- tapi_heap_delete() tapi_heap_delete()
        +-- bt2_delete()       bt2_delete()
```

**Two-phase WHERE delete:**

1. **Phase 1 -- Scan and collect**: Iterates all records via `tapi_scan_begin/next()`, evaluates the WHERE expression on each row, and collects matching PK keys into a dynamically allocated array (`matchKeys`). This avoids modifying the B+ tree while iterating it.
2. **Phase 2 -- Delete collected**: For each collected key, looks up the `RowID` via `bt2_search()`, reads the record for undo logging and index cleanup, removes from secondary indexes, then calls `tapi_heap_delete()` and `bt2_delete()`.

### DROP TABLE (`Drop.c`)

```
DROP TABLE employees;
```

**Data flow:**

```
Parser (RPN) --> DropTableProcess()
                    |
                    v
            tapi_resolve(tblName)           -- catalog lookup
                    |
                    v
            bt2_destroy(pk_tree)            -- free all PK B+ tree pages
                    |
                    v
            tapi_free_heap_pages()          -- walk heap chain, pgm_free_page each
                    |
                    v
            [Destroy secondary indexes]     -- cat_list_indexes + bt2_destroy each
                    |
                    v
            cat_drop_table(table_id)        -- remove from catalog
```

`cat_drop_table()` removes the table entry, all associated column entries, all index entries, and all constraint entries from the system catalog B+ trees. After `DROP TABLE`, all storage pages (PK tree nodes, heap data pages, secondary index nodes) are returned to the free list.

**TRUNCATE TABLE** (`TruncateTableProcess()`) preserves the table structure but deletes all data: it collects all PK keys via a B+ tree cursor scan, then for each key calls `tapi_heap_delete()` and `bt2_delete()`. The table's PK tree and heap pages remain allocated but empty.

---

## Secondary Indexes (`Index.c`)

Secondary indexes are B+ trees where each key encodes both the indexed column value and the row's primary key to ensure uniqueness at the B+ tree level.

### Composite Key Format

```
"indexed_value" + \x1F + "pk_value"
```

The **Unit Separator** character (`\x1F`, ASCII 31) is chosen because:
- It sorts before all printable characters, enabling efficient prefix scans.
- It never appears in user data.
- A prefix scan on `"indexed_value\x1F"` finds all rows matching that indexed value.

For multi-column composite indexes, column values within the indexed portion are pipe-delimited: `"val1|val2\x1Fpk"`.

### Core Operations

#### `sec_idx_search()`

```c
int sec_idx_search(uint32_t root_page, const char *indexed_val,
                   char results[][256], int max_results);
```

Performs a **prefix scan** on the secondary index B+ tree. Seeks to `"indexed_val\x1F"` via `bt2_cursor_seek()`, then iterates forward with `bt2_cursor_next()` until the prefix no longer matches. Returns the PK portion of each matching key (the part after `\x1F`). A companion function `sec_idx_search_rids()` returns `RowID` values directly instead of PK strings.

#### `sec_idx_insert()`

```c
int sec_idx_insert(uint32_t *root_page, const char *indexed_val,
                   const char *pk, RowID heap_rid);
```

Builds the composite key via `sec_idx_make_key()` and inserts it into the B+ tree with the heap `RowID` as the value. Updates `*root_page` if the tree's root splits.

#### `sec_idx_delete()`

```c
int sec_idx_delete(uint32_t *root_page, const char *indexed_val,
                   const char *pk);
```

Builds the composite key and deletes it from the B+ tree. The PK component ensures only the exact row's entry is removed.

### Legacy Wrapper Functions

The DML modules use wrapper functions that encode index identity as a path string in the format `"table_id:index_name:root_page"`:

- **`btree_insert(path, key, pk)`**: Parses the path, builds the composite key, calls `bt2_insert()`, and updates the catalog root page if it changed via `cat_update_index_root()`.
- **`btree_search(path, key, results, max)`**: Parses the path, delegates to `sec_idx_search()`.
- **`btree_delete(path, key, pk)`**: Parses the path, builds the composite key, calls `bt2_delete()`, updates catalog if root changed.

These wrappers provide a stable interface for DML code while encapsulating the composite key encoding and catalog root-page tracking.

### CREATE INDEX (`CreateIndexProcess()`)

```sql
CREATE INDEX idx_dept ON employees(dept);
CREATE UNIQUE INDEX idx_email ON employees(email);
```

1. **Resolve table**: `tapi_resolve()` to verify the table exists and retrieve column metadata.
2. **Verify columns**: Checks that all specified columns exist in the schema. Supports composite indexes (`col1,col2`).
3. **Check duplicates**: Queries `cat_list_indexes()` to see if an index on the same column(s) already exists. Respects `IF NOT EXISTS`.
4. **Create B+ tree**: `bt2_create()` allocates the root page for the index.
5. **Populate from existing data**: Opens a `TableScanCursor` and iterates all rows. For each row:
   - Extracts the indexed column value(s) from the record.
   - For UNIQUE indexes, calls `sec_idx_search()` to check for duplicates. If found, destroys the partially built tree and returns an error.
   - Builds the composite key (`indexed_value\x1Fpk_value`) and calls `bt2_insert()`.
6. **Register in catalog**: `cat_create_index()` stores the index metadata (name, root page, column list, type `'U'`/`'N'`).

### DROP INDEX (`DropIndexProcess()`)

1. Finds the index by name via `cat_find_index_by_name()`.
2. Rejects dropping PK indexes (`index_type == 'P'`).
3. Destroys the B+ tree via `bt2_destroy()`.
4. Removes from catalog via `cat_drop_index()`.

### EXPLAIN Integration

The query executor classifies access methods for `EXPLAIN` output:

| Access Method | Condition |
|---|---|
| **PK Lookup (Hash)** | WHERE clause matches the primary key column with `=` |
| **Index Scan (Unique B-tree)** | WHERE column has a UNIQUE secondary index |
| **Index Scan (B-tree)** | WHERE column has a non-unique secondary index |
| **Seq Scan** | No applicable index; full table scan required |

---

## Transactions

EvoSQL implements single-connection ACID transactions using an **undo-log** approach. The transaction subsystem lives in `adaptor/transaction.h` and `adaptor/transaction.c`.

### Data Structures

```c
typedef struct UndoEntry {
    int   op_type;          /* TX_OP_INSERT (1) / TX_OP_UPDATE (2) / TX_OP_DELETE (3) */
    char *table;            /* table name */
    char *key;              /* primary key value */
    char *old_data;         /* previous record data (NULL for INSERT) */
    struct UndoEntry *next; /* linked list, stack order (newest first) */
} UndoEntry;

typedef struct {
    UndoEntry *head;        /* most recent entry (top of stack) */
    int        count;       /* number of entries */
} UndoLog;
```

The undo log is a **singly-linked list used as a stack**. Entries are pushed to the head so that rollback naturally processes them in reverse chronological order.

### Session Integration

Each client connection maintains a `SessionCtx` (defined in `adaptor/query_executor.h`):

```c
typedef struct {
    char database[256];
    char schema[256];
    char username[256];
    int       in_transaction;   /* 1 if BEGIN was issued */
    int       tx_aborted;       /* 1 if error occurred in transaction */
    UndoLog  *undo_log;         /* undo entries for rollback */
} SessionCtx;
```

Transaction state transitions:

- **`BEGIN`**: Sets `in_transaction = 1`, allocates a fresh `UndoLog`.
- **`COMMIT`**: Sets `in_transaction = 0`, frees the `UndoLog` (changes are permanent).
- **`ROLLBACK`**: Calls `undo_log_rollback()`, frees the log, resets `in_transaction = 0` and `tx_aborted = 0`.
- **Error in transaction**: Sets `tx_aborted = 1`. Subsequent queries (except `ROLLBACK`) are rejected with SQLSTATE `25P02`.

### DML Hook Mechanism

DML operations record undo entries via a **function pointer callback** declared as `g_tx_undo_callback` in `database.h`:

```c
void (*g_tx_undo_callback)(int op_type, const char *table,
                           const char *key, const char *data);
```

Before each query, `safe_query_execute()` in `server.c` checks whether the session is in a transaction:

- **In transaction**: Sets `g_tx_undo_callback = tx_undo_callback` and `g_current_undo_log` (thread-local) to the session's undo log.
- **Not in transaction**: Sets both to `NULL`.

Each DML operation checks `g_tx_undo_callback` before modifying data:

| Operation | Undo Entry |
|---|---|
| **INSERT** | `TX_OP_INSERT`, key = PK, old_data = NULL |
| **UPDATE** | `TX_OP_UPDATE`, key = PK, old_data = pre-update record |
| **DELETE** | `TX_OP_DELETE`, key = PK, old_data = deleted record |

After the query completes, `safe_query_execute()` clears the callback and the thread-local undo log pointer.

### Rollback

`undo_log_rollback()` traverses the undo log from head to tail (reverse chronological order) and applies the inverse operation for each entry:

| Original Op | Undo Action |
|---|---|
| `TX_OP_INSERT` | `bt2_search()` to find RowID, `tapi_heap_delete()`, `bt2_delete()` |
| `TX_OP_UPDATE` | `bt2_search()` to find RowID, `tapi_heap_update()` with old data, `bt2_update()` if RowID moved |
| `TX_OP_DELETE` | `tapi_heap_insert()` with old data, `bt2_insert()` to restore PK index entry |

Each undo action resolves the table via `tapi_resolve()` using the stored table name, ensuring it works with the correct catalog state.

### Disconnect Auto-Rollback

Both the PG wire protocol handler (`pg_handler.c`) and the EVO text protocol handler (`evo_protocol.c`) check for open transactions when a client disconnects. If `session.in_transaction` is true:

1. A temporary `QueryContext` is allocated (since the per-query context is already freed).
2. The database and schema are restored from the session.
3. `undo_log_rollback()` is called.
4. The undo log is freed and the session state is reset.

This guarantees that uncommitted changes are never persisted when a client drops its connection.
