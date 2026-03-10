# Page Manager and Slotted Pages

EvoSQL stores all data -- databases, tables, indexes, and system catalog -- in a single global binary file composed of fixed-size 4KB pages. The **Page Manager** (`page_mgr.h/c`) owns this file: it handles initialization, page allocation and deallocation, and raw I/O. **Slotted Pages** (`slotted.h/c`) provide variable-length record storage within individual data pages using a slot-directory layout.

All disk I/O flows through the Clock Sweep buffer pool (`buffer_pool.c`), so the page manager never calls `read()`/`write()` directly -- it uses `bp_read()` and `bp_write()` instead.

**Source files:**
- `evolution/db/page_mgr.h`, `evolution/db/page_mgr.c`
- `evolution/db/slotted.h`, `evolution/db/slotted.c`
- `tests/test_page_mgr.c` (unit tests)

---

## Page Manager

### File Structure

The global storage file is a sequence of 4096-byte pages. Page 0 is always the **File Header**; all remaining pages are available for allocation. When the server starts, `pgm_init()` either opens the existing file (validating its magic number and page size) or creates a fresh one with 64 pages (256KB).

```
 Page 0          Page 1          Page 2             Page N-1
┌──────────┐   ┌──────────┐   ┌──────────┐       ┌──────────┐
│FileHeader│   │  Data /  │   │  Data /  │  ...  │  Data /  │
│ (4096 B) │   │  Free /  │   │  Free /  │       │  Free /  │
│          │   │  BTree   │   │  BTree   │       │  BTree   │
└──────────┘   └──────────┘   └──────────┘       └──────────┘
```

### Constants

| Constant | Value | Description |
|---|---|---|
| `EVO_MAGIC` | `0x45564F44` | Magic number (ASCII "EVOD") |
| `EVO_FILE_VERSION` | `1` | File format version |
| `EVO_PAGE_SIZE` | `4096` | Page size in bytes |
| `PAGE_HEADER_SIZE` | `16` | Common page header size |
| `PAGE_USABLE` | `4080` | Usable bytes per page (`EVO_PAGE_SIZE - PAGE_HEADER_SIZE`) |
| `PGM_INITIAL_PAGES` | `64` | Pages in a newly created file (256KB) |
| `PGM_GROW_MIN` | `16` | Minimum number of pages added when growing the file |

### Common Page Header

Every page in the file begins with a 16-byte header:

```c
typedef struct {
    uint8_t  page_type;    /* PageType enum                       */
    uint8_t  flags;        /* reserved, must be 0                 */
    uint16_t free_space;   /* bytes of free space on this page    */
    uint32_t page_id;      /* this page's own number (self-check) */
    uint32_t next_page;    /* free list chain or B+ leaf chain    */
    uint32_t prev_page;    /* B+ tree leaf backward pointer       */
} PageHeader;              /* 16 bytes                            */
```

The `page_type` field uses one of five values:

```c
typedef enum {
    PAGE_FREE       = 0,   /* available for allocation           */
    PAGE_DATA       = 1,   /* slotted page for row storage       */
    PAGE_BTREE_INT  = 2,   /* B+ tree internal node              */
    PAGE_BTREE_LEAF = 3,   /* B+ tree leaf node                  */
    PAGE_OVERFLOW   = 4    /* overflow for large records          */
} PageType;
```

The `next_page` field serves double duty: on free pages it chains into the free list; on B+ tree leaf pages it links to the next leaf in key order. Similarly, `prev_page` links B+ tree leaves backward.

### File Header (Page 0)

Page 0 holds the global file header. It occupies an entire page and is padded with a `reserved` array to fill exactly `EVO_PAGE_SIZE` bytes:

```c
#define CATALOG_ROOT_SLOTS 16

typedef struct {
    uint32_t magic;                             /* EVO_MAGIC                          */
    uint16_t version;                           /* EVO_FILE_VERSION                   */
    uint16_t page_size;                         /* EVO_PAGE_SIZE (4096)               */
    uint32_t total_pages;                       /* total pages in file                */
    uint32_t free_list_head;                    /* first free page (0 = none)         */
    uint32_t catalog_roots[CATALOG_ROOT_SLOTS]; /* root pages for system catalog trees */
    uint32_t next_table_id;                     /* auto-increment counter             */
    uint32_t next_schema_id;                    /* auto-increment counter             */
    uint32_t next_db_id;                        /* auto-increment counter             */
    uint8_t  reserved[EVO_PAGE_SIZE - 92];      /* pad to full page                   */
} FileHeader;
```

The fixed fields sum to exactly 92 bytes: `4 + 2 + 2 + 4 + 4 + (16 * 4) + 4 + 4 + 4 = 92`. The `reserved` array occupies the remaining `4096 - 92 = 4004` bytes.

**Catalog root slots** store the root page number of each system catalog B+ tree. The engine defines eight catalog IDs:

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
    CAT_MAX             = 8
} CatalogID;
```

Slots 8 through 15 are reserved for future use.

**Auto-increment counters** (`next_table_id`, `next_schema_id`, `next_db_id`) provide globally unique IDs. They start at 1 in a fresh file and are atomically incremented via `pgm_next_id()`.

### Initialization

`pgm_init(filepath)` is called once at server startup, after the buffer pool has been initialized with `bp_init()`. It follows this logic:

1. If the file already exists, open it and read page 0. Validate that `magic == EVO_MAGIC` and `page_size == EVO_PAGE_SIZE`. If validation fails, return an error.
2. If the file does not exist (`ENOENT`), create it with `O_RDWR | O_CREAT | O_TRUNC`, extend it to `PGM_INITIAL_PAGES * EVO_PAGE_SIZE` bytes via `ftruncate()`, write the initial `FileHeader` to page 0, and chain pages 1 through `PGM_INITIAL_PAGES - 1` into the free list.
3. If already initialized (re-entrant call), return immediately.

`pgm_shutdown()` flushes any dirty file header, calls `bp_flush_all()` to write all dirty buffer pool pages to disk, and closes the file descriptor.

### Page Allocation

`pgm_alloc_page(page_type)` pops a page from the head of the free list:

1. If `free_list_head == 0` (empty), grow the file first.
2. Read the page at `free_list_head`. Extract `next_page` from its header -- this becomes the new `free_list_head`.
3. Zero-fill the page buffer, set `page_type` to the requested type, write it back through the buffer pool.
4. Flush the updated file header.
5. Return the allocated page number. A return value of `0` indicates an error (page 0 is never allocatable).

### Page Deallocation

`pgm_free_page(page_no)` prepends the page to the free list:

1. Refuse to free page 0 (always the file header).
2. Zero-fill the page, set `page_type = PAGE_FREE`, set `next_page` to the current `free_list_head`.
3. Write the page through the buffer pool.
4. Update `free_list_head` to point to this page.
5. Flush the file header.

The free list is a singly-linked chain through `PageHeader.next_page`:

```
 FileHeader                 Page 7           Page 3           Page 12
┌────────────┐            ┌──────────┐     ┌──────────┐     ┌──────────┐
│free_list   │            │PAGE_FREE │     │PAGE_FREE │     │PAGE_FREE │
│ _head = 7 ─┼──────────>│next = 3 ─┼────>│next = 12─┼────>│next = 0  │
└────────────┘            └──────────┘     └──────────┘     └──────────┘
                                                             (end of list)
```

### File Growth

When `pgm_alloc_page()` finds the free list empty, the internal `grow_file()` function extends the file:

1. Compute the growth amount: 50% of the current `total_pages`, but at least `PGM_GROW_MIN` (16 pages).
2. Call `ftruncate()` to extend the file to the new size.
3. Chain all newly created pages into the free list via `chain_free_pages()`. Each page is zero-filled with `page_type = PAGE_FREE` and linked to the next. The last page in the batch points to the previous `free_list_head`.
4. Update `total_pages` and `free_list_head` in the file header.

### Raw Page I/O

```c
int pgm_read_page(uint32_t page_no, void *buf);
int pgm_write_page(uint32_t page_no, const void *buf);
```

These are thin wrappers over `bp_read()` and `bp_write()`. They compute the byte offset as `page_no * EVO_PAGE_SIZE` and transfer a full 4096-byte page through the buffer pool. They return 0 on success, -1 on error. The buffer must be at least `EVO_PAGE_SIZE` bytes.

`pgm_flush()` writes the file header (if dirty) and calls `bp_flush_all()` to force all cached pages to disk.

### Catalog Root Management

```c
uint32_t pgm_get_catalog_root(CatalogID id);
void     pgm_set_catalog_root(CatalogID id, uint32_t page_no);
```

These read and write entries in the `catalog_roots[]` array of the file header. When a system catalog B+ tree is created for the first time, its root page number is stored here so it can be found on subsequent startups. Setting a root flushes the header immediately.

### Auto-Increment IDs

```c
uint32_t pgm_next_id(int id_type);  /* 0 = table, 1 = schema, 2 = database */
```

Atomically returns the current value and increments the counter. The file header is flushed after each call to ensure durability.

### Thread Safety

All page manager operations are serialized by a single `pthread_mutex_t` (`g_pgm_lock`). This includes allocation, deallocation, catalog root access, and ID generation. Raw I/O (`pgm_read_page`, `pgm_write_page`) does not acquire the page manager mutex -- it relies on the buffer pool's internal mutex for thread safety.

### Global State

The page manager is a singleton. It maintains:

- `g_global_fd` -- file descriptor for the global storage file
- `g_header` -- in-memory copy of the `FileHeader` (page 0)
- `g_header_dirty` -- flag indicating unsaved header changes
- `g_pgm_lock` -- mutex for thread safety

The file descriptor is exposed via `pgm_get_fd()` for callers that need direct buffer pool access.

### Complete API Summary

```c
/* Lifecycle */
int      pgm_init(const char *filepath);
void     pgm_shutdown(void);

/* Page allocation */
uint32_t pgm_alloc_page(uint8_t page_type);
void     pgm_free_page(uint32_t page_no);

/* Raw page I/O */
int      pgm_read_page(uint32_t page_no, void *buf);
int      pgm_write_page(uint32_t page_no, const void *buf);
void     pgm_flush(void);

/* Catalog roots */
uint32_t pgm_get_catalog_root(CatalogID id);
void     pgm_set_catalog_root(CatalogID id, uint32_t page_no);

/* Auto-increment IDs */
uint32_t pgm_next_id(int id_type);

/* Utility */
int      pgm_get_fd(void);
```

---

## Slotted Pages

Slotted pages manage variable-length records within a single 4KB page. The design follows a classic database textbook layout: a slot directory grows forward from the top of the page while record data grows backward from the bottom. This allows stable record addressing via slot indices even as records are inserted and deleted.

### Page Layout

```
Byte 0                                                    Byte 4095
┌──────────────┬───────────────┬────────┬────────┬─  ─┬──────────┐
│  PageHeader  │ SlottedHeader │ Slot 0 │ Slot 1 │ .. │          │
│   (16 B)     │    (6 B)      │ (4 B)  │ (4 B)  │    │          │
├──────────────┴───────────────┴────────┴────────┴─  ─┤          │
│                                                      │          │
│                     FREE SPACE                       │          │
│                                                      │          │
│         <── free_offset              free_end ──>    │          │
├──────────────────────────────────────────────────────┤          │
│              │ Record 1 │ Record 0 │                            │
│              │ (var)    │ (var)    │                            │
└──────────────┴──────────┴──────────┴────────────────────────────┘

  Slot directory grows FORWARD (toward higher offsets)  ──────>
  Record area grows BACKWARD (toward lower offsets)     <──────
```

When a slotted page is initialized via `slot_page_init()`:
- `free_offset` = `PAGE_HEADER_SIZE + SLOTTED_HEADER_SIZE` = byte 22 (just past the slotted header)
- `free_end` = `EVO_PAGE_SIZE` = byte 4096 (end of page)
- Free space = `4096 - 22 = 4074` bytes (before any slots are allocated)

The free space is the gap between `free_offset` (end of slot directory) and `free_end` (start of record area). As slots are added, `free_offset` advances forward by 4 bytes each. As records are placed, `free_end` retreats backward by the record size.

### SlottedHeader

```c
typedef struct {
    uint16_t num_slots;     /* total slot entries (including deleted) */
    uint16_t free_offset;   /* byte offset of first free byte after slot directory */
    uint16_t free_end;      /* byte offset where next record will be placed */
} SlottedHeader;            /* 6 bytes */
```

- `num_slots` counts all slots ever created on this page, including those marked as deleted. It only grows; it never shrinks.
- `free_offset` tracks the end of the slot directory. It equals `PAGE_HEADER_SIZE + SLOTTED_HEADER_SIZE + (num_slots * SLOT_ENTRY_SIZE)` when no deleted slots have been reused.
- `free_end` tracks the beginning of the record region. Records are placed just below this offset, and `free_end` is decremented accordingly.

### Slot Entry

```c
typedef struct {
    uint16_t offset;   /* byte offset of record within page (0 = deleted) */
    uint16_t length;   /* record length in bytes */
} SlotEntry;           /* 4 bytes */
```

A slot with `offset == 0` is considered deleted or empty. This works because byte 0 is occupied by the `PageHeader`, so no valid record can start there.

Slot entries are stored contiguously starting at byte 22 (after `PageHeader` + `SlottedHeader`). Slot `i` is at byte offset `22 + (i * 4)`.

### RowID

```c
typedef struct {
    uint32_t page_no;
    uint16_t slot_idx;
} RowID;               /* 6 bytes */
```

A `RowID` uniquely identifies any record in the storage file. The combination of page number and slot index is stable across compaction (slot indices are never renumbered). A `RowID` with `page_no == 0` is used as a "deleted" sentinel, since page 0 is always the file header and never stores records.

### Maximum Record Size

```c
#define SLOT_MAX_RECORD  (EVO_PAGE_SIZE - PAGE_HEADER_SIZE - SLOTTED_HEADER_SIZE - SLOT_ENTRY_SIZE)
```

This evaluates to `4096 - 16 - 6 - 4 = 4070` bytes. A record of this size would consume the entire page (one slot entry + the record data), leaving zero free space.

### Record Operations

#### Insert -- `slot_insert()`

```c
int slot_insert(void *page_buf, const void *record, uint16_t rec_len);
```

Returns the slot index on success, -1 if the record does not fit.

Algorithm:

1. Reject zero-length records and records larger than `SLOT_MAX_RECORD`.
2. Scan the slot directory for a deleted slot (one where `offset == 0` and `length == 0`). If found, reuse it -- no new slot overhead is needed.
3. Calculate the space required: `rec_len` bytes for the record, plus 4 bytes for a new slot entry (if not reusing a deleted slot).
4. If the contiguous free gap (`free_end - free_offset`) is too small, attempt `slot_compact()` to defragment the page. If still insufficient, return -1.
5. Place the record at `free_end - rec_len` and update `free_end`.
6. Write the slot entry (either reused or newly appended to the directory).
7. Update `PageHeader.free_space`.

#### Read -- `slot_read()`

```c
int slot_read(const void *page_buf, uint16_t slot_idx,
              void *out_buf, uint16_t out_size);
```

Returns the actual record length on success, -1 if the slot index is out of range or the slot is deleted. Copies at most `out_size` bytes into `out_buf`. If the record is larger than `out_size`, it is truncated but the full length is still returned, allowing the caller to allocate a larger buffer and retry.

#### Delete -- `slot_delete()`

```c
int slot_delete(void *page_buf, uint16_t slot_idx);
```

Returns 0 on success, -1 if the slot is already deleted or out of range.

1. If the record being deleted happens to be the physically last record (i.e., `se->offset == free_end`), advance `free_end` by `se->length` to immediately reclaim the space.
2. Mark the slot as deleted by setting `offset = 0` and `length = 0`.
3. Update `PageHeader.free_space`.

Records that are not physically last leave a gap ("fragmentation"). This space is reclaimed by `slot_compact()`.

#### Update -- `slot_update()`

```c
int slot_update(void *page_buf, uint16_t slot_idx,
                const void *new_record, uint16_t new_len);
```

Returns 0 on success, -1 if the record does not fit.

- If `new_len <= old_length`, the record is overwritten in place. If shorter than the original, the tail bytes become wasted space (reclaimable via compaction). The slot's `length` is updated to `new_len`.
- If `new_len > old_length`, the function returns -1. The caller is responsible for performing a delete-then-insert, potentially on a different page if the current page lacks space. This overflow handling pattern is used by the table API layer.

### Free Space Management

#### Contiguous Free Space

`slot_free_space()` returns the contiguous gap between the end of the slot directory and the start of the record area:

```c
uint16_t slot_free_space(const void *page_buf);
// Returns: free_end - free_offset (or 0 if they've crossed)
```

This is the maximum amount of data that can be stored without compaction. Note that inserting a record consumes both record bytes and (potentially) 4 bytes for a new slot entry.

#### Fragmentation

Fragmentation occurs when:
- A record in the middle of the record area is deleted, leaving a gap.
- A record is updated to a shorter length, leaving unused tail bytes.

These gaps reduce the effective capacity of the page but do not reduce the value returned by `slot_free_space()` (which only measures the contiguous gap). Compaction reclaims this space.

#### Compaction -- `slot_compact()`

```c
void slot_compact(void *page_buf);
```

Defragments the record area by repacking all active records toward the end of the page, eliminating gaps:

1. Allocate a temporary buffer.
2. Walk all slots in order. For each active (non-deleted) slot, copy its record to the temporary buffer, packing records from the end of the page backward.
3. Copy the compacted records back into the page buffer.
4. Update each slot's `offset` to its new position.
5. Update `free_end` to reflect the new start of the record area.

Compaction preserves slot indices -- it never renumbers or removes deleted slot entries from the directory. This is critical because external references (B+ tree leaf entries, RowIDs) point to specific slot indices.

Compaction is triggered automatically by `slot_insert()` when the contiguous free gap is too small but the page has enough total free space (accounting for fragmented gaps).

### Active Record Count

```c
uint16_t slot_active_count(const void *page_buf);
```

Returns the number of non-deleted slots by scanning the directory and counting entries where `offset != 0`.

### Caller Responsibilities

All slotted page functions operate on an in-memory page buffer. They do **not** read from or write to disk. The caller must:

1. Read the page into a buffer via `pgm_read_page()` before operating on it.
2. Call `pgm_write_page()` after modifying the page to persist changes through the buffer pool.

This design gives callers full control over I/O batching and allows multiple modifications to a page before a single write.

### Detailed Layout Example

After inserting three records (R0 = 100 bytes, R1 = 50 bytes, R2 = 200 bytes), then deleting R1:

```
Byte:  0          16   22   26   30   34                           3746  3846  3946 4096
       ┌──────────┬────┬────┬────┬────┬─────────────────────────────┬─────┬─────┬─────┐
       │PageHeader│Slot│ S0 │ S1 │ S2 │        FREE SPACE           │ R2  │(gap)│ R0  │
       │  (16 B)  │Hdr │off │DEL │off │                             │200B │ 50B │100B │
       │          │6 B │len │0,0 │len │                             │     │     │     │
       └──────────┴────┴────┴────┴────┴─────────────────────────────┴─────┴─────┴─────┘
                       │              ↑                             ↑
                       │         free_offset = 34            free_end = 3746
                       │
                       num_slots = 3

  S0: offset=3946, length=100    (points to R0)
  S1: offset=0,    length=0      (deleted)
  S2: offset=3746, length=200    (points to R2)

  The 50-byte gap at 3846-3896 is fragmented space from the deleted R1.
  It will be reclaimed when slot_compact() runs.
```

After compaction:

```
Byte:  0          16   22   26   30   34                                3796  3996 4096
       ┌──────────┬────┬────┬────┬────┬──────────────────────────────────┬─────┬─────┐
       │PageHeader│Slot│ S0 │ S1 │ S2 │           FREE SPACE             │ R2  │ R0  │
       │  (16 B)  │Hdr │off │DEL │off │                                  │200B │100B │
       │          │6 B │len │0,0 │len │                                  │     │     │
       └──────────┴────┴────┴────┴────┴──────────────────────────────────┴─────┴─────┘
                       │              ↑                                  ↑
                       │         free_offset = 34                 free_end = 3796
                       │
                       num_slots = 3 (unchanged)

  S0: offset=3996, length=100    (updated to new position)
  S1: offset=0,    length=0      (still deleted -- slot not removed)
  S2: offset=3796, length=200    (updated to new position)

  The 50-byte gap is gone. Free space increased from 3712 to 3762 bytes.
```
