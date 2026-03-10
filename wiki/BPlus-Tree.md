# B+ Tree Index

## Overview

EvoSQL uses a page-based B+ tree (`btree2`) for all O(log n) key-value indexing. Every primary key index, secondary index, and system catalog tree is a B+ tree instance. Keys are variable-length strings (up to 255 bytes), and values are `RowID` structs that point to heap records. All tree nodes are stored as 4KB pages managed by the Page Manager, and all I/O passes through the Clock Sweep buffer pool.

Key properties:

- **Key format:** Length-prefixed string (1 byte length + up to 255 bytes of data, `BT2_MAX_KEY_LEN = 255`)
- **Value format:** `RowID { page_no: uint32_t, slot_idx: uint16_t }` = 6 bytes
- **Numeric-aware comparison:** Pure numeric strings are compared by numeric value (`"2" < "10"`), with lexicographic fallback for non-numeric keys
- **Node capacity:** ~4076 usable bytes per node (4096 - 16 PageHeader - 4 NodeHeader)
- **Deletion strategy:** Lazy — deleted entries have their RowID set to `{0, 0}`, and the key slot is reused on re-insert of the same key

The `BTree2` handle is a single struct containing the root page number:

```c
typedef struct {
    uint32_t root_page;   /* 0 = empty tree */
} BTree2;
```

---

## Node Structure

Every B+ tree node occupies exactly one 4KB page. The first 16 bytes are the standard `PageHeader`, followed by a 4-byte `NodeHeader`, followed by the key/pointer data area. The page type field in `PageHeader` distinguishes internal nodes (`PAGE_BTREE_INT = 2`) from leaf nodes (`PAGE_BTREE_LEAF = 3`).

### NodeHeader

```c
typedef struct {
    uint16_t num_keys;   /* number of keys stored in this node */
    uint16_t flags;      /* reserved, must be 0 */
} NodeHeader;
```

Position within the page:

```
Offset 0:   PageHeader  (16 bytes)
Offset 16:  NodeHeader  (4 bytes)
Offset 20:  Key/pointer data area  (4076 bytes)
```

### Leaf Node Layout

Leaf nodes store sorted key-RowID pairs. Each entry is a length-prefixed key followed by a 6-byte RowID. Leaf nodes are doubly linked via `PageHeader.next_page` and `PageHeader.prev_page` for sequential scans.

```
┌──────────────────────────────────────────────────────┐
│ PageHeader (16B)                                     │
│   page_type = PAGE_BTREE_LEAF                        │
│   page_id, next_page (→ right leaf), prev_page       │
├──────────────────────────────────────────────────────┤
│ NodeHeader (4B)                                      │
│   num_keys, flags                                    │
├──────────────────────────────────────────────────────┤
│ Entry 0: [klen:1B][key_data:klen B][RowID:6B]        │
│ Entry 1: [klen:1B][key_data:klen B][RowID:6B]        │
│ Entry 2: [klen:1B][key_data:klen B][RowID:6B]        │
│ ...                                                  │
│ (entries sorted by key)                              │
│                                                      │
│              ← free space →                          │
└──────────────────────────────────────────────────────┘
```

Entry overhead per key: `1 (length byte) + key_length + 6 (RowID)` = 7 + key_length bytes.

For a typical 20-byte key, each entry is 27 bytes, yielding approximately 150 entries per leaf.

### Internal Node Layout

Internal nodes store separator keys interleaved with child page pointers. With `N` keys there are `N+1` child pointers. The first child pointer precedes the first key, and each subsequent key is followed by the child pointer for keys greater than or equal to that separator.

```
┌──────────────────────────────────────────────────────┐
│ PageHeader (16B)                                     │
│   page_type = PAGE_BTREE_INT                         │
│   page_id                                            │
├──────────────────────────────────────────────────────┤
│ NodeHeader (4B)                                      │
│   num_keys, flags                                    │
├──────────────────────────────────────────────────────┤
│ child0 (4B)                                          │
│ [key0_len:1B][key0_data:N B]                         │
│ child1 (4B)                                          │
│ [key1_len:1B][key1_data:N B]                         │
│ child2 (4B)                                          │
│ ...                                                  │
│ childN (4B)                                          │
│                                                      │
│              ← free space →                          │
└──────────────────────────────────────────────────────┘
```

Entry overhead per key: `4 (child pointer) + 1 (length byte) + key_length` bytes, plus a trailing 4-byte child pointer at the end.

For a typical 20-byte key, the fan-out is approximately 160-170 children per internal node. With this fan-out, a tree of depth 3 can index over 4 million keys.

### Leaf Chain (Doubly Linked)

All leaf nodes are connected into a doubly linked list through `PageHeader.next_page` and `PageHeader.prev_page`. This enables efficient sequential and range scans without traversing the tree from the root for each next-key lookup.

```
           ┌────────┐     ┌────────┐     ┌────────┐
  ... ←────│ Leaf A │←───→│ Leaf B │←───→│ Leaf C │────→ ...
           │ prev=? │     │prev= A │     │prev= B │
           │ next=B │     │next= C │     │ next=0 │
           └────────┘     └────────┘     └────────┘
```

---

## Key Operations

### bt2_create — Allocate Root Page

```c
int bt2_create(BTree2 *tree);
```

Allocates a single page of type `PAGE_BTREE_LEAF` via `pgm_alloc_page()`, initializes it as an empty leaf node (num_keys = 0), writes it to disk, and stores the page number in `tree->root_page`.

Returns 0 on success, -1 on allocation failure.

A tree with `root_page == 0` is considered empty. `bt2_insert()` calls `bt2_create()` automatically if the root is 0, so explicit creation is optional.

### bt2_insert — Insert Key/RowID

```c
int bt2_insert(BTree2 *tree, const char *key, RowID rid);
```

Inserts a key-RowID mapping into the tree. The key must not exceed `BT2_MAX_KEY_LEN` (255) bytes.

**Return values:**
- `0` — success
- `1` — duplicate key (key already exists with a non-deleted RowID)
- `-1` — error (allocation failure or key too long)

**Algorithm:**

1. If the tree is empty (`root_page == 0`), create a root leaf automatically.
2. Call `insert_recursive()` starting at the root page.
3. The recursive function descends through internal nodes to the correct leaf.
4. At the leaf:
   - Scan entries to find the sorted insertion position.
   - If the key already exists with a deleted RowID (`{0, 0}`), reuse the slot by overwriting the RowID. Return 0.
   - If the key exists with a live RowID, return 1 (duplicate).
   - If the entry fits in the leaf's free space, shift subsequent entries right and write the entry. Return 0.
   - If the leaf is full, perform a leaf split (see [Tree Splitting](#tree-splitting)).
5. If a split propagated up and the root itself split, allocate a new root internal node with the separator key and two children (the old root and the new sibling).

### bt2_search — Exact Key Lookup

```c
int bt2_search(BTree2 *tree, const char *key, RowID *out_rid);
```

Searches for an exact key match. Descends from the root through internal nodes using `find_leaf()`, then performs a linear scan of the leaf's entries.

**Return values:**
- `0` — found (RowID written to `*out_rid`)
- `-1` — not found, or key exists but is marked deleted (`RowID == {0, 0}`)

**Descent logic** (`find_leaf`): At each internal node, scan separator keys left to right. Follow `child[i]` where `i` is the index of the first separator key greater than the search key, or the rightmost child if no separator is greater.

### bt2_delete — Logical Delete

```c
int bt2_delete(BTree2 *tree, const char *key);
```

Performs a lazy (logical) delete. Descends to the leaf containing the key and overwrites the entry's RowID with the sentinel value `{0, 0}`. The key bytes remain in the leaf, and the slot is reused if the same key is re-inserted.

**Return values:**
- `0` — success
- `-1` — key not found, or already deleted

No merging or rebalancing is performed. This keeps the implementation simple and avoids the complexity of B+ tree node merges. Over time, leaves may accumulate deleted entries, but re-inserts of the same key reclaim those slots.

### bt2_update — Update RowID for Existing Key

```c
int bt2_update(BTree2 *tree, const char *key, RowID new_rid);
```

Finds the leaf entry for the given key and overwrites its RowID with `new_rid`. This is used when a heap record moves to a different page (e.g., during an UPDATE that changes record size), requiring the index to point to the record's updated location.

**Return values:**
- `0` — success
- `-1` — key not found

Note: `bt2_update()` does not check whether the existing RowID is deleted. It unconditionally overwrites the RowID, which means it can also be used to "undelete" an entry by writing a valid RowID over a `{0, 0}` sentinel.

### bt2_destroy — Recursive Page Freeing

```c
void bt2_destroy(BTree2 *tree);
```

Recursively frees every page in the tree by walking the tree depth-first. At each internal node, it recurses into all children before freeing the node's own page via `pgm_free_page()`. Leaf pages are freed directly.

After completion, `tree->root_page` is set to 0. Used by `DROP TABLE` and `DROP INDEX` to reclaim all storage.

---

## Cursor API

The cursor API provides sequential iteration over the B+ tree's leaf chain, supporting full scans and prefix-based range scans.

```c
typedef struct {
    uint32_t cur_page;    /* current leaf page (0 = exhausted) */
    uint16_t cur_idx;     /* current key index within leaf */
} BTree2Cursor;
```

### bt2_cursor_first — Position at Smallest Key

```c
int bt2_cursor_first(BTree2 *tree, BTree2Cursor *cur);
```

Descends to the leftmost leaf by always following `child[0]` at each internal node. Sets the cursor to the first non-deleted entry. If all entries in the first leaf are deleted, follows `next_page` to find the first active entry.

Returns 0 on success, -1 if the tree is empty or contains only deleted entries.

### bt2_cursor_next — Advance to Next Entry

```c
int bt2_cursor_next(BTree2Cursor *cur, char *key_out, RowID *rid_out);
```

Returns the current entry's key (null-terminated, max `BT2_MAX_KEY_LEN + 1` bytes) and RowID, then advances the cursor. Automatically skips deleted entries (RowID `{0, 0}`) and follows the leaf chain when the current leaf is exhausted.

Returns 0 on success, -1 when no more entries remain.

**Typical iteration pattern:**

```c
BTree2Cursor cur;
bt2_cursor_first(&tree, &cur);
char key[BT2_MAX_KEY_LEN + 1];
RowID rid;
while (bt2_cursor_next(&cur, key, &rid) == 0) {
    // process key, rid
}
```

### bt2_cursor_seek — Position at Key or First Key >= Key

```c
int bt2_cursor_seek(BTree2 *tree, const char *key, BTree2Cursor *cur);
```

Descends to the leaf containing the given key (using the same `find_leaf()` logic as `bt2_search`), then scans the leaf to find the first entry whose key is greater than or equal to the search key. If all keys in the leaf are smaller, follows `next_page`.

This is the primary mechanism for prefix-based range scans. The system catalog uses composite keys with zero-padded IDs (e.g., `"0000000001:tablename"`), and `bt2_cursor_seek("0000000001:")` positions the cursor at the first entry for table ID 1. Iteration continues with `bt2_cursor_next()` until the prefix no longer matches.

Returns 0 on success, -1 if no key >= the search key exists.

---

## Tree Splitting

When a leaf or internal node runs out of space during insertion, the node is split into two siblings and a separator key is promoted to the parent. If the parent is also full, the split propagates upward recursively. If the root itself splits, a new root is created, increasing the tree height by one.

### Leaf Split

1. The insertion target leaf is full (used bytes + entry size > 4076).
2. A temporary oversized buffer is created, and the new entry is inserted at its sorted position.
3. The entries are divided at the midpoint (`mid = total_keys / 2`).
4. Entries `[0, mid)` stay in the original page.
5. Entries `[mid, total)` are copied to a newly allocated leaf page.
6. The leaf chain is updated:
   - New leaf's `next_page` = old leaf's former `next_page`
   - New leaf's `prev_page` = old leaf's `page_id`
   - Old leaf's `next_page` = new leaf's `page_id`
   - If a leaf existed after the old leaf, its `prev_page` is updated to point to the new leaf.
7. The separator key (first key of the new leaf) is promoted to the parent.

```
BEFORE (leaf full, inserting "F"):

    ┌────────────────────────────────────────┐
    │ Leaf: [A][B][C][D][E][G][H]  (FULL)    │
    └────────────────────────────────────────┘

AFTER (split at midpoint, "E" promoted):

              separator = "E"
                   │
                   ▼
    ┌──── parent receives ("E", ptr→new leaf) ────┐
    │                                              │
    ▼                                              ▼
  ┌─────────────────┐    next    ┌─────────────────┐
  │ [A][B][C][D]    │──────────→│ [E][F][G][H]    │
  │ Old Leaf        │←──────────│ New Leaf        │
  └─────────────────┘    prev    └─────────────────┘
```

### Internal Node Split

1. The internal node is full (cannot fit the new separator key + child pointer).
2. A temporary oversized buffer is created, and the new separator is inserted at its correct position.
3. The entries are divided at the midpoint. The middle key is **not** kept in either sibling — it is promoted to the parent.
4. Keys `[0, mid)` and children `[0, mid]` stay in the original node.
5. The key at index `mid` is sent up to the parent.
6. Keys `[mid+1, total)` and children `[mid+1, total]` go to the new internal node.

```
BEFORE (internal node full, inserting separator "M"):

  ┌─────────────────────────────────────────────────┐
  │ Internal: [ptr0] D [ptr1] G [ptr2] J [ptr3]     │
  │           K [ptr4] P [ptr5] S [ptr6]  (FULL)     │
  └─────────────────────────────────────────────────┘

AFTER (split, "K" promoted to parent):

                    "K" promoted
                       │
                       ▼
           ┌──── parent receives ("K", ptr→right) ────┐
           │                                           │
           ▼                                           ▼
  ┌────────────────────────┐          ┌────────────────────────┐
  │ [ptr0] D [ptr1] G      │          │ [ptr3] M [ptr4] P      │
  │        [ptr2] J [ptr3] │          │        [ptr5] S [ptr6] │
  │ Left (original)        │          │ Right (new)            │
  └────────────────────────┘          └────────────────────────┘
```

### Root Split

When the current root splits, `bt2_insert()` allocates a new internal node as the root. This new root has exactly one separator key, two children (the old root and its new sibling), and becomes the new `tree->root_page`. This is the only operation that increases the tree's height.

```
BEFORE:
         root (leaf or internal, now split)
              │
        ┌─────┴─────┐
    old_root     new_sibling

AFTER:
            new_root
           /    │    \
     child0   "sep"  child1
       │                │
   old_root        new_sibling
```

---

## Sentinel RowID

The RowID value `{page_no = 0, slot_idx = 0}` is the universal "deleted" sentinel. Page 0 is always the file header and can never contain user data, so this value is guaranteed to be invalid as a record pointer.

Sentinel behavior across the API:

| Operation | Behavior |
|---|---|
| `bt2_search()` | Returns -1 (not found) if the matching entry has RowID `{0, 0}` |
| `bt2_delete()` | Writes `{0, 0}` over the entry's RowID |
| `bt2_insert()` | If a key exists with RowID `{0, 0}`, reuses the slot (writes the live RowID) |
| `bt2_cursor_next()` | Silently skips entries with RowID `{0, 0}` |
| `bt2_cursor_first()` | Skips leading deleted entries, advances to next leaf if needed |

---

## Key Comparison

The `key_cmp()` function implements numeric-aware comparison:

1. Attempt to parse both keys as floating-point numbers (`strtod`).
2. If both parse successfully (no trailing characters), compare numerically.
3. Otherwise, fall back to lexicographic comparison (`memcmp` with length tie-breaking).

This ensures that numeric primary keys sort naturally (`"2" < "10"` rather than `"10" < "2"`), while string keys retain standard dictionary order.

---

## Max Key Length

The maximum key length is **255 bytes** (`BT2_MAX_KEY_LEN`), constrained by the 1-byte length prefix used in the node entry format. `bt2_insert()` rejects keys longer than this limit with a return value of -1.

In practice, keys are significantly shorter:

- **Primary key indexes:** String representation of column value(s), typically 5-40 bytes.
- **System catalog composite keys:** Zero-padded 10-digit IDs with `:` separator (e.g., `"0000000001:users"` = 17 bytes).
- **Secondary index keys:** Column value concatenated with primary key for uniqueness.

---

## Usage

The B+ tree is the sole indexing structure in EvoSQL. Every index — whether for user tables or internal metadata — is a `BTree2` instance.

### System Catalog

The system catalog uses 8 B+ trees (stored in `FileHeader.catalog_roots[]`) for all metadata:

| CatalogID | Tree | Purpose |
|---|---|---|
| `CAT_SYS_DATABASES` | Databases | Database name → database record |
| `CAT_SYS_SCHEMAS` | Schemas | `db_id:schema_name` → schema record |
| `CAT_SYS_TABLES` | Tables | `schema_id:table_name` → table record |
| `CAT_SYS_COLUMNS` | Columns | `table_id:ordinal` → column record |
| `CAT_SYS_INDEXES` | Indexes | `table_id:index_name` → index record |
| `CAT_SYS_CONSTRAINTS` | Constraints | `table_id:constraint_name` → constraint record |
| `CAT_SYS_USERS` | Users | Username → user record |
| `CAT_SYS_GRANTS` | Grants | Grant key → privilege record |

Catalog trees use composite keys with zero-padded IDs and `:` separators. `bt2_cursor_seek()` with a prefix like `"0000000005:"` enables efficient iteration over all entries belonging to a specific parent (e.g., all columns of table 5).

### Primary Key Indexes

Every table with a primary key has an associated B+ tree. The key is the string representation of the primary key column value(s). The RowID points to the heap page and slot where the full record is stored. `INSERT` checks for duplicates via `bt2_search()` before inserting, and `SELECT ... WHERE pk = value` uses `bt2_search()` for O(log n) point lookups.

### Secondary Indexes

Secondary indexes created via `CREATE INDEX` are also B+ trees. `Index.c` populates the tree by scanning the table's heap pages (`tapi_scan`) and inserting one entry per row.
