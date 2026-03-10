# System Catalog

**Source files:** `evolution/db/catalog_internal.h`, `evolution/db/catalog_internal.c`
**Tests:** `tests/test_catalog.c` (30 tests)

---

## Overview

The system catalog stores all database metadata -- databases, schemas, tables, columns, indexes, constraints, user accounts, and privilege grants -- inside the unified storage file `evosql.db`. There are no external metadata files. Every piece of metadata lives in one of eight B+ trees, with the actual records stored as semicolon-delimited strings on slotted pages. The B+ tree maps a key to a `RowID` (page number + slot index), and the `RowID` points to the record on a slotted page.

```
                ┌─────────────────────────┐
                │      FileHeader         │
                │  (Page 0 of evosql.db)  │
                │                         │
                │  catalog_roots[0..7]    │  ← root page number of each B+ tree
                │  next_table_id          │
                │  next_schema_id         │
                │  next_db_id             │
                └────────┬────────────────┘
                         │
        ┌────────────────┼────────────────┐
        ▼                ▼                ▼
   B+ Tree 0        B+ Tree 1  ...  B+ Tree 7
  (databases)       (schemas)       (grants)
        │                │                │
        ▼                ▼                ▼
   Slotted Pages    Slotted Pages    Slotted Pages
   (records)        (records)        (records)
```

All catalog I/O flows through the buffer pool and page manager -- there is no direct file access.

---

## The Eight Catalog Trees

Each catalog tree is identified by a `CatalogID` constant defined in `page_mgr.h`. The root page number of every tree is persisted in the `FileHeader.catalog_roots[]` array on page 0.

| Constant | ID | Purpose | B+ Tree Key |
|---|---|---|---|
| `CAT_SYS_DATABASES` | 0 | Database registry | `db_name` |
| `CAT_SYS_SCHEMAS` | 1 | Schema registry | `db_id:schema_name` |
| `CAT_SYS_TABLES` | 2 | Table descriptors | `schema_id:table_name` |
| `CAT_SYS_COLUMNS` | 3 | Column definitions | `table_id:col_ordinal` |
| `CAT_SYS_INDEXES` | 4 | Secondary index metadata | `table_id:index_name` |
| `CAT_SYS_CONSTRAINTS` | 5 | CHECK, UNIQUE, FK, PK constraints | `table_id:ordinal` |
| `CAT_SYS_USERS` | 6 | User accounts (PBKDF2-SHA256 hashed passwords) | `username` |
| `CAT_SYS_GRANTS` | 7 | Privilege grants (DATABASE / SCHEMA / TABLE scope) | `username:scope_type:scope_name` |

The `CatalogID` enum and the `CATALOG_ROOT_SLOTS` constant (16 slots, 8 used) are defined in `page_mgr.h`:

```c
typedef enum {
    CAT_SYS_DATABASES   = 0,
    CAT_SYS_SCHEMAS     = 1,
    CAT_SYS_TABLES      = 2,
    CAT_SYS_COLUMNS     = 3,
    CAT_SYS_INDEXES     = 4,
    CAT_SYS_CONSTRAINTS = 5,
    CAT_SYS_USERS       = 6,
    CAT_SYS_GRANTS      = 7,
    CAT_MAX              = 8
} CatalogID;
```

---

## Descriptor Structs

Each catalog tree has a corresponding C struct that represents one record. These structs are defined in `catalog_internal.h`.

### DatabaseDesc

```c
typedef struct {
    uint32_t db_id;
    char     db_name[CAT_MAX_NAME_LEN];   // 128
} DatabaseDesc;
```

The B+ tree key is the database name itself (e.g., `"evosql"`). The record stores only the `db_id`; the name is recovered from the key.

### SchemaDesc

```c
typedef struct {
    uint32_t schema_id;
    uint32_t db_id;
    char     schema_name[CAT_MAX_NAME_LEN];
} SchemaDesc;
```

Key format: `"%010u:%s"` -- zero-padded `db_id`, colon, schema name.

### TableDesc

```c
typedef struct {
    uint32_t table_id;
    uint32_t schema_id;
    char     table_name[CAT_MAX_NAME_LEN];
    uint32_t pk_root_page;      // root page of the table's primary-key B+ tree
    uint32_t heap_page;         // first slotted page for row storage (0 = lazy alloc)
    int      num_columns;
    int      pad_size;
    int      auto_inc_col;      // column ordinal, or -1 if none
    int      auto_inc_counter;
    int      auto_inc_step;
} TableDesc;
```

Key format: `"%010u:%s"` -- zero-padded `schema_id`, colon, table name.

When a table is created, `cat_create_table` also creates a dedicated B+ tree for the table's primary index and records its root page in `pk_root_page`. The `heap_page` field starts at 0 and is set on the first row insertion via `cat_update_heap_page`.

### ColumnDesc

```c
typedef struct {
    uint32_t table_id;
    int      col_ordinal;
    char     col_name[CAT_MAX_NAME_LEN];
    int      type_code;         // typeVal / 10000 = type family, % 10000 = size
    int      is_not_null;
    int      is_unique;
    int      is_pk;
    char     default_val[CAT_MAX_DEFAULT_LEN];  // 256
} ColumnDesc;
```

Key format: `"%010u:%010d"` -- zero-padded `table_id`, colon, zero-padded `col_ordinal`. Both parts are numeric and zero-padded, ensuring columns are returned in ordinal order during prefix scans.

### IndexDesc

```c
typedef struct {
    uint32_t table_id;
    char     index_name[CAT_MAX_NAME_LEN];
    uint32_t root_page;
    char     col_list[CAT_MAX_NAME_LEN];    // comma-separated column names
    char     index_type;                     // 'P' primary, 'U' unique, 'N' normal
} IndexDesc;
```

Key format: `"%010u:%s"` -- zero-padded `table_id`, colon, index name.

### ConstraintDesc

```c
typedef struct {
    uint32_t table_id;
    int      ordinal;
    char     constraint_type;   // 'C' check, 'F' foreign key, 'P' primary, 'U' unique
    char     definition[1024];
    uint32_t ref_table_id;      // for FK, 0 otherwise
    char     ref_columns[CAT_MAX_NAME_LEN];
} ConstraintDesc;
```

Key format: `"%010u:%010d"` -- zero-padded `table_id`, colon, zero-padded `ordinal`. The ordinal is assigned from a global counter (`g_constraint_ordinal`) that increments monotonically across all tables.

### UserDesc

```c
typedef struct {
    char username[CAT_MAX_NAME_LEN];
    char password_hash[CAT_MAX_HASH_LEN];   // 512
} UserDesc;
```

The B+ tree key is the username. The record stores the PBKDF2-SHA256 password hash; the username is recovered from the key.

### GrantDesc

```c
typedef struct {
    char username[CAT_MAX_NAME_LEN];
    int  scope_type;            // 1=DATABASE, 2=SCHEMA, 3=TABLE
    char scope_name[CAT_MAX_NAME_LEN];
    char privileges[CAT_MAX_NAME_LEN];  // comma-separated or "ALL"
    int  grant_option;
} GrantDesc;
```

Key format: `"%s:%d:%s"` -- username, scope type integer, scope name. This enables prefix scanning by `"username:"` to find all grants for a given user.

---

## Composite Key Design

B+ tree keys are variable-length strings up to 255 bytes (`CAT_MAX_KEY_LEN == BT2_MAX_KEY_LEN`). Composite keys use `:` as the separator. Numeric ID components are **zero-padded to 10 digits** so that lexicographic comparison preserves numeric ordering:

```
"0000000001:users"          schema 1, table "users"
"0000000003:0000000002"     table 3, column ordinal 2
"admin:1:evosql"            user "admin", scope DATABASE(1), database "evosql"
```

The B+ tree comparator performs lexicographic comparison on all keys (they contain `:` so they are treated as strings, not numbers). Zero-padding guarantees that `"0000000002"` sorts before `"0000000010"`.

This encoding also enables efficient **prefix scans**. To list all columns of table 5, seek to `"0000000005:"` and iterate while keys still begin with that prefix. Every `cat_list_*` function uses this pattern.

---

## Serialization Format

Records are stored as semicolon-delimited strings on slotted pages, matching the project-wide convention for row storage. Each descriptor struct has a `serialize_*` / `deserialize_*` function pair.

Example: a `TableDesc` serializes to:

```
"1;1;users;42;0;3;256;-1;0;0"
 │ │ │     │  │ │ │   │  │ └─ auto_inc_step
 │ │ │     │  │ │ │   │  └─── auto_inc_counter
 │ │ │     │  │ │ │   └────── auto_inc_col (-1 = none)
 │ │ │     │  │ │ └────────── pad_size
 │ │ │     │  │ └──────────── num_columns
 │ │ │     │  └────────────── heap_page
 │ │ │     └───────────────── pk_root_page
 │ │ └─────────────────────── table_name
 │ └───────────────────────── schema_id
 └─────────────────────────── table_id
```

Field extraction uses the internal `next_field()` helper, which reads characters up to the next `;` or end of string.

For some descriptors, the key carries data that the record omits:
- **DatabaseDesc**: the record contains only `db_id`; the name comes from the B+ tree key.
- **UserDesc**: the record contains only the password hash; the username comes from the key.

Maximum record size is `CAT_MAX_RECORD_LEN` (2048 bytes).

---

## ID Generation

Object IDs (databases, schemas, tables) are auto-incrementing integers stored in the `FileHeader`:

```c
typedef struct {
    // ...
    uint32_t next_table_id;     // auto-increment for table IDs
    uint32_t next_schema_id;    // auto-increment for schema IDs
    uint32_t next_db_id;        // auto-increment for database IDs
    // ...
} FileHeader;
```

The `pgm_next_id(int id_type)` function atomically reads and increments the appropriate counter:

| `id_type` | Counter | Used by |
|---|---|---|
| 0 | `next_table_id` | `cat_create_table` |
| 1 | `next_schema_id` | `cat_create_schema` |
| 2 | `next_db_id` | `cat_create_database` |

IDs start at 1 (the counter initializes to 1 in a fresh file header). They are never reused after deletion.

---

## Initialization and Bootstrap

### Startup sequence

1. `pgm_init("evosql.db")` -- opens or creates the storage file, initializes the page manager and buffer pool.
2. `cat_init()` -- initializes the system catalog.

### First run (empty file)

`cat_init()` detects that `catalog_roots[CAT_SYS_DATABASES]` is 0 (no existing catalog) and performs a full bootstrap:

1. Creates 8 B+ trees via `bt2_create()`.
2. Stores each tree's root page number in `FileHeader.catalog_roots[]` via `pgm_set_catalog_root()`.
3. Inserts the default database `"evosql"` (assigned `db_id = 1`).
4. Inserts the default schema `"default"` under database 1 (assigned `schema_id = 1`).
5. Inserts the default user `"admin"` with an empty password hash. The server's authentication layer sets the real PBKDF2-SHA256 hash on first startup.

### Subsequent runs

`cat_init()` loads the 8 root page numbers from `FileHeader.catalog_roots[]` into the in-memory `BTree2` handles. Data pages for each catalog tree are lazily allocated on the first insert after restart (at most 8 pages = 32 KB of overhead).

### Shutdown

`cat_shutdown()` calls `pgm_flush()` to write all dirty buffer pool pages to disk, then resets all in-memory state.

---

## API Reference

### Lifecycle

```c
int  cat_init(void);       // Bootstrap or load catalog; call after pgm_init()
void cat_shutdown(void);   // Flush dirty pages, reset state
```

### Database Operations

```c
int cat_create_database(const char *name);
    // Returns db_id (>0) on success, -1 if name already exists.

int cat_find_database(const char *name, DatabaseDesc *out);
    // Returns 0 on success, -1 if not found. Pass NULL for out to check existence.

int cat_drop_database(const char *name);
    // Returns 0 on success, -1 if not found.

int cat_list_databases(DatabaseDesc *out, int max);
    // Returns count of databases written to out[]. Full tree scan.
```

### Schema Operations

```c
int cat_create_schema(uint32_t db_id, const char *name);
    // Returns schema_id (>0) on success, -1 if duplicate.

int cat_find_schema(uint32_t db_id, const char *name, SchemaDesc *out);
int cat_drop_schema(uint32_t db_id, const char *name);

int cat_list_schemas(uint32_t db_id, SchemaDesc *out, int max);
    // Prefix scan on db_id -- returns only schemas belonging to the given database.
```

### Table Operations

```c
int cat_create_table(uint32_t schema_id, const char *name,
                     const ColumnDesc *cols, int ncols,
                     int pad_size, int auto_inc_col,
                     int auto_inc_start, int auto_inc_step);
    // Creates table descriptor, a primary-key B+ tree, and all column records.
    // Returns table_id (>0) on success, -1 on duplicate or error.

int cat_find_table(uint32_t schema_id, const char *name, TableDesc *out);

int cat_drop_table(uint32_t table_id);
    // Cascading delete: removes the table record plus all associated columns,
    // indexes, and constraints from the catalog. The caller is responsible for
    // destroying the PK B+ tree and freeing heap pages.

int cat_update_auto_inc(uint32_t table_id, const char *table_name,
                        uint32_t schema_id, int new_counter);
    // Updates auto_inc_counter in the table record. Attempts in-place slotted
    // page update; falls back to delete + re-insert if the record does not fit.

int cat_update_heap_page(uint32_t table_id, const char *table_name,
                         uint32_t schema_id, uint32_t heap_page);
    // Sets the heap_page field (called on first row insertion).

int cat_list_tables(uint32_t schema_id, TableDesc *out, int max);
    // Prefix scan on schema_id.
```

### Column Operations

```c
int cat_find_columns(uint32_t table_id, ColumnDesc *out, int max);
    // Prefix scan on table_id. Returns columns in ordinal order (guaranteed by
    // zero-padded ordinal in the B+ tree key). Returns count.
```

Columns are created as part of `cat_create_table` and deleted as part of `cat_drop_table`. There is no standalone column creation API.

### Index Operations

```c
int cat_create_index(uint32_t table_id, const char *name,
                     uint32_t root_page, const char *col_list,
                     char index_type);
    // index_type: 'P' primary, 'U' unique, 'N' normal.

int cat_find_index(uint32_t table_id, const char *name, IndexDesc *out);
    // Direct key lookup (requires table_id).

int cat_find_index_by_name(const char *name, IndexDesc *out);
    // Full tree scan -- finds index by name alone, regardless of table.

int cat_list_indexes(uint32_t table_id, IndexDesc *out, int max);
    // Prefix scan on table_id.

int cat_drop_index(uint32_t table_id, const char *name);

int cat_update_index_root(uint32_t table_id, const char *name,
                          uint32_t new_root_page);
    // Updates root_page after B+ tree splits or merges change the root.
```

### Constraint Operations

```c
int cat_add_constraint(uint32_t table_id, char type,
                       const char *definition,
                       uint32_t ref_table_id, const char *ref_columns);
    // type: 'C' check, 'F' foreign key, 'P' primary key, 'U' unique.
    // ref_table_id and ref_columns are used only for FK constraints (pass 0 and "" otherwise).
    // Ordinal is assigned from a global counter.

int cat_list_constraints(uint32_t table_id, ConstraintDesc *out, int max);
    // Prefix scan on table_id.
```

### User Operations

```c
int cat_create_user(const char *username, const char *password_hash);
int cat_find_user(const char *username, UserDesc *out);
int cat_update_user(const char *username, const char *new_hash);
int cat_drop_user(const char *username);
int cat_list_users(UserDesc *out, int max);   // Full tree scan.
```

### Grant Operations

```c
int cat_create_grant(const char *username, int scope_type,
                     const char *scope_name, const char *privileges,
                     int grant_option);
    // scope_type: 1=DATABASE, 2=SCHEMA, 3=TABLE.
    // privileges: comma-separated list or "ALL".

int cat_find_grant(const char *username, int scope_type,
                   const char *scope_name, GrantDesc *out);

int cat_drop_grant(const char *username, int scope_type,
                   const char *scope_name);

int cat_list_grants_for_user(const char *username, GrantDesc *out, int max);
    // Prefix scan on "username:".

int cat_drop_all_grants_for_user(const char *username);
    // Collects all grant keys for the user, then deletes them in a second pass
    // (cannot delete during a B+ tree cursor scan).
```

### Convenience: Three-Level Resolution

```c
int cat_resolve_table(const char *db_name, const char *schema_name,
                      const char *table_name, TableDesc *out);
```

Performs a three-step lookup: `cat_find_database` -> `cat_find_schema` (using `db.db_id`) -> `cat_find_table` (using `schema.schema_id`). Returns 0 on success, -1 if any level fails. This is the primary entry point used by DML operations (SELECT, INSERT, UPDATE, DELETE) to resolve a table name to its descriptor.

---

## Internal Data Storage Pattern

All catalog operations follow the same create / find / drop pattern internally.

### Create

```
1. Build composite B+ tree key from the input IDs and name.
2. Check for duplicates via bt2_search (return -1 if key exists).
3. Allocate an auto-increment ID via pgm_next_id().
4. Populate the descriptor struct.
5. Serialize the struct to a semicolon-delimited string.
6. Insert the string into a slotted page via cat_store_record() → returns RowID.
7. Insert (key → RowID) into the B+ tree via bt2_insert().
```

### Find

```
1. Build key.
2. bt2_search(key) → RowID.
3. cat_read_record(RowID) → semicolon-delimited string.
4. Deserialize string into the descriptor struct.
```

### List (prefix scan)

```
1. Build prefix (e.g., "0000000005:").
2. bt2_cursor_seek(prefix) → position cursor at first matching key.
3. Loop: bt2_cursor_next() → (key, RowID).
4. Break when key no longer starts with the prefix.
5. Read and deserialize each record.
```

### Drop

```
1. Build key.
2. bt2_search(key) → RowID.
3. cat_delete_record(RowID) — marks slot as deleted on the slotted page.
4. bt2_delete(key) — removes entry from the B+ tree.
```

### Update (in-place or relocate)

For mutable fields (e.g., `auto_inc_counter`, `heap_page`, `root_page`):

```
1. bt2_search(key) → RowID.
2. Read record, deserialize, modify field, re-serialize.
3. Try slot_update() for in-place replacement on the same slotted page.
4. If the updated record does not fit in the same slot:
   a. Delete the record from the slotted page.
   b. Insert the record on a (possibly different) slotted page → new RowID.
   c. bt2_update(key, new_RowID) to point the B+ tree at the relocated record.
```

---

## Slotted Page Management

Each of the 8 catalog trees maintains a "current data page" (`g_cat_data_pages[CatalogID]`) for new record insertions. When `cat_store_record` is called:

1. If a current data page exists, try `slot_insert` on it.
2. If the page is full (or no current page is set), allocate a fresh `PAGE_DATA` page via `pgm_alloc_page`, initialize it with `slot_page_init`, insert the record, and update `g_cat_data_pages`.

After a server restart, all `g_cat_data_pages` entries reset to 0. The first insert into each catalog tree allocates a fresh data page. This can waste up to 8 pages (32 KB) per restart but avoids the complexity of scanning for partially-full data pages.

---

## Constants

```c
#define CAT_MAX_COLUMNS      64     // max columns per table
#define CAT_MAX_NAME_LEN    128     // max identifier length
#define CAT_MAX_DEFAULT_LEN 256     // max DEFAULT value string
#define CAT_MAX_HASH_LEN    512     // max password hash length
#define CAT_MAX_KEY_LEN     255     // matches BT2_MAX_KEY_LEN
#define CAT_MAX_RECORD_LEN  2048    // max serialized record size
```
