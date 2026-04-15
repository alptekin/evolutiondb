/*
 * btree2.h — Page-Based B+ Tree for EvoSQL Unified Storage
 *
 * Replaces the old APUE hash index and FILE*-based B-tree.
 * All nodes stored as 4KB pages via the Page Manager.
 * Leaf nodes are doubly-linked for sequential scans.
 *
 * Key format: length-prefixed string (1 byte len + data), max 255 bytes.
 * Value: RowID (page_no:4, slot_idx:2) = 6 bytes.
 */
#ifndef BTREE2_H
#define BTREE2_H

#include <stdint.h>
#include "page_mgr.h"
#include "slotted.h"  /* for RowID */

/* ----------------------------------------------------------------
 *  Constants
 * ---------------------------------------------------------------- */
#define BT2_MAX_KEY_LEN   255

/* ----------------------------------------------------------------
 *  B+ Tree handle
 * ---------------------------------------------------------------- */
typedef struct {
    uint32_t root_page;   /* 0 = empty tree */
} BTree2;

/* ----------------------------------------------------------------
 *  Cursor for sequential / range scans
 * ---------------------------------------------------------------- */
typedef struct {
    uint32_t cur_page;    /* current leaf page (0 = exhausted) */
    uint16_t cur_idx;     /* current key index within leaf */
} BTree2Cursor;

/* ----------------------------------------------------------------
 *  Tree statistics
 * ---------------------------------------------------------------- */
typedef struct {
    int      depth;               /* levels root→leaf (1 = leaf-only) */
    uint32_t leaf_pages;          /* number of leaf pages */
    uint64_t total_entries;       /* active (non-deleted) entries */
    double   avg_entries_per_leaf;
} BTree2Stats;

/* ----------------------------------------------------------------
 *  Tree operations
 * ---------------------------------------------------------------- */

/* Create a new empty B+ tree. Allocates a root leaf page.
 * Returns 0 on success, -1 on error. */
int bt2_create(BTree2 *tree);

/* Insert a key → RowID mapping. Handles splits automatically.
 * Returns 0 on success, -1 on error, 1 if key already exists. */
int bt2_insert(BTree2 *tree, const char *key, RowID rid);

/* Search for a key. Fills *out_rid on success.
 * Returns 0 if found, -1 if not found. */
int bt2_search(BTree2 *tree, const char *key, RowID *out_rid);

/* Delete a key from the tree (lazy: marks entry as deleted).
 * Returns 0 on success, -1 if not found. */
int bt2_delete(BTree2 *tree, const char *key);

/* Update the RowID for an existing key.
 * Returns 0 on success, -1 if not found. */
int bt2_update(BTree2 *tree, const char *key, RowID new_rid);

/* Fast-path variant: caller supplies the leaf page number the key
 * is known to live on (from an earlier cursor walk). Skips the
 * find_leaf() descent. Falls back to a full find_leaf() if the
 * hint misses (key not found on that leaf — e.g. because a split
 * moved it).
 *
 * Safe to use when no DML that could split/merge the tree ran
 * between when leaf_pno was captured and this call. EvoSQL's
 * g_dml_mutex guarantees that for single-statement DML fast paths.
 * Returns 0 on success, -1 if not found anywhere. */
int bt2_update_at_leaf(BTree2 *tree, uint32_t leaf_pno,
                       const char *key, RowID new_rid);

/* ----------------------------------------------------------------
 *  Cursor operations (sequential scan via leaf chain)
 * ---------------------------------------------------------------- */

/* Position cursor at the first (smallest) key in the tree.
 * Returns 0 on success, -1 if tree is empty. */
int bt2_cursor_first(BTree2 *tree, BTree2Cursor *cur);

/* Advance cursor to the next key.
 * Fills key_out (null-terminated, max BT2_MAX_KEY_LEN+1) and rid_out.
 * Returns 0 on success, -1 when no more keys. */
int bt2_cursor_next(BTree2Cursor *cur, char *key_out, RowID *rid_out);

/* Position cursor at the given key (or the first key >= given key).
 * Returns 0 on success, -1 if no such key exists. */
int bt2_cursor_seek(BTree2 *tree, const char *key, BTree2Cursor *cur);

/* ----------------------------------------------------------------
 *  Utility
 * ---------------------------------------------------------------- */

/* Free all pages belonging to the tree (for DROP TABLE). */
void bt2_destroy(BTree2 *tree);

/* Compute tree statistics: depth, leaf/entry counts.
 * Returns 0 on success, -1 if tree is empty. */
int bt2_stats(BTree2 *tree, BTree2Stats *out);

#endif /* BTREE2_H */
