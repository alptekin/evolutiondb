# Unified Page-Based Storage

EvolutionDB stores all data -- databases, schemas, tables, indexes, users, grants, and system catalog metadata -- in a single binary file (`evosql.db`) composed of fixed-size 4KB pages. Every disk I/O operation passes through a Clock Sweep buffer pool, and all structural relationships are maintained via B+ tree indexes and slotted pages within this file.

## Architecture Overview

```
evosql.db (single binary file, 4KB pages)
 Page 0: FileHeader (magic, free list head, catalog roots, ID counters)
 Page 1..N: Data pages, B+ tree nodes, free pages
```

The storage engine is organized in layers. Each layer depends only on the one below it:

```
┌──────────────────────────────────────────────────┐
│          DML Modules (Insert / Select / ...)      │
├──────────────────────────────────────────────────┤
│  Table API         │  System Catalog              │
│  tapi_heap_insert  │  cat_create_table            │
│  tapi_scan_begin   │  cat_find_columns            │
│  tapi_build_pk_key │  cat_resolve_table           │
├──────────────────────────────────────────────────┤
│          B+ Tree (bt2_insert / search / cursor)   │
├──────────────────────────────────────────────────┤
│          Slotted Pages (slot_insert / read)        │
├──────────────────────────────────────────────────┤
│          Page Manager (pgm_alloc / read / write)   │
├──────────────────────────────────────────────────┤
│          Buffer Pool (bp_read / bp_write)           │
└──────────────────────────────────────────────────┘
               ┌────────────────┐
               │   evosql.db    │
               └────────────────┘
```

## Page Layout

Every page is exactly `EVO_PAGE_SIZE` (4096) bytes. The first 16 bytes of every page contain a common header:

```c
typedef struct {
    uint8_t  page_type;    /* PAGE_FREE=0, PAGE_DATA=1, PAGE_BTREE_INT=2,
                              PAGE_BTREE_LEAF=3, PAGE_OVERFLOW=4 */
    uint8_t  flags;        /* reserved */
    uint16_t free_space;   /* bytes of free space on this page */
    uint32_t page_id;      /* self-identifying page number */
    uint32_t next_page;    /* free list chain or leaf chain */
    uint32_t prev_page;    /* B+ tree leaf backward pointer */
} PageHeader;              /* 16 bytes */
```

Usable space per page: `4096 - 16 = 4080 bytes`.

### Page 0 -- File Header

Page 0 is reserved for the `FileHeader`, which is never freed:

| Field | Size | Description |
|-------|------|-------------|
| `magic` | 4B | `0x45564F44` ("EVOD") |
| `version` | 2B | File format version (currently 1) |
| `page_size` | 2B | Always 4096 |
| `total_pages` | 4B | Total pages in file |
| `free_list_head` | 4B | First free page (0 = none) |
| `catalog_roots[16]` | 64B | Root page numbers for system catalog B+ trees |
| `next_table_id` | 4B | Auto-increment counter for table IDs |
| `next_schema_id` | 4B | Auto-increment counter for schema IDs |
| `next_db_id` | 4B | Auto-increment counter for database IDs |
| `reserved` | 4004B | Pad to full page |

### Free List

Free pages are chained through the `next_page` field in their `PageHeader`. When `pgm_alloc_page()` is called:

1. If the free list is non-empty, pop the head page and initialize it with the requested type.
2. If the free list is empty, grow the file by 50% of the current size (minimum 16 pages), chain the new pages into the free list, then allocate.

When `pgm_free_page()` is called, the page is zeroed and pushed onto the front of the free list. Page 0 cannot be freed.

The initial file is 64 pages (256KB). Pages 1 through 63 form the initial free list.

## Buffer Pool

All page I/O flows through a Clock Sweep buffer pool (`buffer_pool.h/c`), modeled after PostgreSQL's buffer manager. The pool caches 4KB pages in memory and uses write-back semantics -- dirty pages are flushed to disk only on eviction or explicit flush.

**Key parameters:**

| Constant | Value | Description |
|----------|-------|-------------|
| `BP_PAGE_SIZE` | 4096 | Cache page granularity |
| `BP_DEFAULT_PAGES` | 256 | Default pool size (1MB) |
| `BP_MAX_USAGE` | 5 | Maximum usage count per page |
| `BP_RING_SIZE` | 8 | Sequential scan ring buffer slots |

**Clock Sweep algorithm:**

A clock hand rotates through all buffer slots. When a victim is needed:
- If `pin_count > 0`, skip (page is in use).
- If `usage_count == 0`, select as victim. Flush to disk if dirty, then evict.
- Otherwise, decrement `usage_count` and advance.

Each cache hit increments `usage_count` (up to `BP_MAX_USAGE`), giving frequently accessed pages more chances to survive eviction sweeps.

**Anti-pollution ring buffer:**

Sequential scans use `bp_read_seq()` with a private `BPRing` (8 slots, round-robin). This prevents large table scans from evicting hot pages from the main pool.

**Core API:**

```c
void bp_init(int num_pages);           /* allocate pool */
int  bp_read(int fd, void *buf, size_t count, off_t offset);
int  bp_write(int fd, const void *buf, size_t count, off_t offset);
void bp_flush_all(void);               /* write all dirty pages to disk */
void bp_flush_fd(int fd);              /* flush dirty pages for one fd */
void bp_invalidate_fd(int fd);         /* flush + drop all pages for fd */
```

The pool uses an open-addressing hash table (4x pool size, linear probing) keyed by `(fd, page_no)` for O(1) page lookup. An internal mutex serializes all pool operations for thread safety.

## Component Summary

### Page Manager (`page_mgr.h/c`)

Manages the global `evosql.db` file. Provides page allocation/deallocation, free list management, file growth, and access to file header fields (catalog root pages, auto-increment counters). All reads and writes delegate to the buffer pool.

See: [Phase 1 -- Page Manager and Slotted Pages](Phase-1-Page-Manager-and-Slotted-Pages.md)

### Slotted Pages (`slotted.h/c`)

Stores variable-length records within a single 4KB data page. The page layout:

```
[PageHeader 16B][SlottedHeader 6B][Slot Directory -->]
                   [ FREE SPACE ]
                [<-- Records packed from end of page]
```

Each record is identified by a `RowID = {page_no, slot_idx}` (6 bytes). A `RowID` with `page_no == 0` is the "deleted" sentinel since page 0 is always the file header. The slot directory grows forward; records grow backward. Deleted slots can be reused. `slot_compact()` defragments records to reclaim space from deletions.

Maximum record size: `4096 - 16 - 6 - 4 = 4070 bytes`.

See: [Phase 1 -- Page Manager and Slotted Pages](Phase-1-Page-Manager-and-Slotted-Pages.md)

### B+ Tree (`btree2.h/c`)

Provides O(log n) key-to-RowID indexing. Each B+ tree node occupies one 4KB page. Leaf nodes are doubly linked for efficient sequential and range scans.

**Key format:** Length-prefixed string (1 byte length + up to 255 bytes of data). Key comparison is numeric-aware -- if both keys parse as numbers, they are compared as `double`; otherwise, lexicographic comparison is used.

**Leaf entry:** `[key_len:1][key_data:N][RowID:6]`

**Internal entry:** `[child0:4][key0_len:1][key0:N][child1:4]...`

Insertions handle splits automatically, propagating separator keys up to the parent and creating a new root when necessary. Deletions use lazy marking (set RowID to `{0, 0}`).

Cursor operations (`bt2_cursor_first`, `bt2_cursor_next`, `bt2_cursor_seek`) traverse the leaf chain for ordered iteration.

See: [Phase 2 -- B+ Tree](Phase-2-BPlus-Tree.md)

### System Catalog (`catalog_internal.h/c`)

Stores all metadata in 8 B+ trees, one per catalog table:

| CatalogID | Tree | Key Format | Description |
|-----------|------|------------|-------------|
| 0 | `CAT_SYS_DATABASES` | `db_name` | Database registry |
| 1 | `CAT_SYS_SCHEMAS` | `db_id:schema_name` | Schemas per database |
| 2 | `CAT_SYS_TABLES` | `schema_id:table_name` | Tables per schema |
| 3 | `CAT_SYS_COLUMNS` | `table_id:col_ordinal` | Column definitions |
| 4 | `CAT_SYS_INDEXES` | `table_id:index_name` | Index metadata |
| 5 | `CAT_SYS_CONSTRAINTS` | `table_id:ordinal` | CHECK, UNIQUE, PK, FK |
| 6 | `CAT_SYS_USERS` | `username` | User credentials |
| 7 | `CAT_SYS_GRANTS` | `username:scope_type:scope_name` | Privilege grants |

Composite keys use zero-padded 10-digit IDs with `:` separator (e.g., `"0000000001:tablename"`). Catalog records are stored as semicolon-delimited strings on slotted pages, pointed to by the B+ tree entries. Root page numbers for all 8 trees are persisted in the file header's `catalog_roots[]` array.

See: [Phase 3 -- System Catalog](Phase-3-System-Catalog.md)

### Table API (`table_api.h/c`)

Bridges the DML modules and the storage layers. Provides:

- **Table resolution:** `tapi_resolve()` -- looks up a table by name using the catalog, returns `TableDesc` and `ColumnDesc` arrays.
- **Heap operations:** `tapi_heap_insert()`, `tapi_heap_read()`, `tapi_heap_delete()`, `tapi_heap_update()` -- manage records on slotted pages. Pages are chained via `next_page` in the page header; new pages are allocated when existing ones are full.
- **PK key building:** `tapi_build_pk_key()` -- extracts primary key columns from a semicolon-delimited record and builds the B+ tree key string (single column: `"value"`, composite: `"val1|val2"`).
- **Table scan:** `tapi_scan_begin()` / `tapi_scan_next()` -- iterates all records ordered by primary key using the PK B+ tree cursor. Each cursor step reads the RowID from the B+ tree, then fetches the full record from the heap page.
- **Cleanup:** `tapi_free_heap_pages()` -- walks the heap chain and frees all pages (used by DROP TABLE).

## Data Flow

### INSERT

```
SQL: INSERT INTO employees (id, name) VALUES (1, 'Alice');

 evoparser.y (parse + emit RPN)
      |
 Insert.c  InsertProcess()
      |
      +-- tapi_resolve("employees") --> TableDesc, ColumnDesc[]
      |
      +-- tapi_build_pk_key(cols, record) --> "1"
      |
      +-- bt2_search(pk_tree, "1") --> check for duplicate PK
      |
      +-- tapi_heap_insert(td, "1;Alice") --> RowID{page=5, slot=3}
      |       |
      |       +-- pgm_read_page(heap_page)    (via buffer pool)
      |       +-- slot_insert(page_buf, record)
      |       +-- pgm_write_page(heap_page)   (via buffer pool)
      |
      +-- bt2_insert(pk_tree, "1", RowID{5,3})
              |
              +-- find_leaf() --> descend internal nodes
              +-- write entry to leaf page (split if full)
              +-- pgm_write_page()            (via buffer pool)
```

### SELECT (full scan)

```
SQL: SELECT * FROM employees;

 Select.c  SelectProcess()
      |
      +-- tapi_resolve("employees") --> TableDesc, ColumnDesc[]
      |
      +-- tapi_scan_begin(td, &cursor) --> positions at first PK
      |
      +-- loop: tapi_scan_next(&cursor, pk_key, record_buf)
              |
              +-- bt2_cursor_next() --> RowID
              +-- tapi_heap_read(RowID) --> "1;Alice"
              +-- apply WHERE filter (expression.c)
              +-- emit row to result set
```

### SELECT (PK lookup)

```
SQL: SELECT * FROM employees WHERE id = 1;

 Select.c  SelectProcess()
      |
      +-- tapi_resolve("employees")
      +-- tapi_build_pk_key(cols, where_val) --> "1"
      +-- bt2_search(pk_tree, "1") --> RowID{5,3}
      +-- tapi_heap_read(RowID{5,3}) --> "1;Alice"
```

### DELETE

```
 Delete.c  DeleteProcess()
      |
      +-- tapi_scan_begin/next --> find matching rows
      +-- bt2_delete(pk_tree, pk_key) --> lazy-mark RowID as {0,0}
      +-- tapi_heap_delete(RowID)     --> slot_delete on page
```

### UPDATE

```
 Update.c  UpdateProcess()
      |
      +-- tapi_scan_begin/next --> find matching rows
      +-- tapi_heap_update(td, old_rid, new_record)
      |       |
      |       +-- slot_update() if fits in-place --> done
      |       +-- otherwise: slot_delete() + tapi_heap_insert() --> new RowID
      |
      +-- if RowID changed: bt2_update(pk_tree, pk_key, new_rid)
```

## Initialization

Server startup calls `db_ensure_root()` in `DatabaseMgmt.c`, which triggers the full initialization sequence:

```
db_ensure_root()
    |
    +-- mkdir("root/")                     create data directory
    |
    +-- pgm_init("root/evosql.db")         open or create the global file
    |       |
    |       +-- (if file exists) validate magic + page_size, load header
    |       +-- (if file absent) create file, write FileHeader to page 0,
    |           chain pages 1..63 into free list (256KB initial)
    |
    +-- cat_init()                         initialize system catalog
    |       |
    |       +-- (first run) create 8 B+ trees, store roots in file header,
    |       |   insert default database ("evosql") and schema ("default")
    |       +-- (subsequent runs) load tree roots from file header
    |
    +-- db_ensure_users()                  create admin user if absent
    |       |
    |       +-- cat_find_user("admin")
    |       +-- if not found: cat_create_user("admin", hashed_password)
    |
    +-- db_ensure_grants()                 create admin superuser grant
            |
            +-- cat_find_grant("admin", DATABASE, "*")
            +-- if not found: cat_create_grant("admin", DATABASE, "*", "ALL", 1)
```

The buffer pool (`bp_init()`) must be initialized before `pgm_init()` since all page I/O depends on it. The adaptor's `server.c` calls `bp_init()` during server startup before invoking `db_ensure_root()`.

## Building and Testing

Standalone C tests validate each layer independently:

```bash
# Page Manager + Slotted Pages (18 tests)
gcc -Wall -g -I../evolution/db -o test_page_mgr test_page_mgr.c \
    ../evolution/db/page_mgr.c ../evolution/db/slotted.c \
    ../evolution/db/buffer_pool.c ../evolution/db/error.c \
    ../evolution/db/database_globals.c ../evolution/db/query_context.c -lpthread

# B+ Tree (13 tests)
gcc -Wall -g -I../evolution/db -o test_btree2 test_btree2.c \
    ../evolution/db/btree2.c ../evolution/db/page_mgr.c \
    ../evolution/db/slotted.c ../evolution/db/buffer_pool.c \
    ../evolution/db/error.c ../evolution/db/database_globals.c \
    ../evolution/db/query_context.c -lpthread

# System Catalog (30 tests)
gcc -Wall -g -I../evolution/db -o test_catalog test_catalog.c \
    ../evolution/db/catalog_internal.c ../evolution/db/btree2.c \
    ../evolution/db/page_mgr.c ../evolution/db/slotted.c \
    ../evolution/db/buffer_pool.c ../evolution/db/error.c \
    ../evolution/db/database_globals.c ../evolution/db/query_context.c -lpthread
```

Integration tests use the Python test suite against a running server (see project README for details).
