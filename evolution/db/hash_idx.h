/*
 * hash_idx.h — Page-Based Hash Index for EvoSQL
 *
 * Static hashing with overflow chains for O(1) equality lookups.
 * Uses FNV-1a hash function.
 *
 * Page layout:
 *   Directory page: [PageHeader][HashDirHdr][bucket_pages[num_buckets]]
 *   Bucket pages:   [PageHeader][entries...] chained via next_page
 *   Entry format:   [key_len:2][key:N][RowID:6]
 */
#ifndef HASH_IDX_H
#define HASH_IDX_H

#include <stdint.h>
#include "page_mgr.h"
#include "slotted.h"  /* for RowID */

/* ----------------------------------------------------------------
 *  Constants
 * ---------------------------------------------------------------- */
#define HASH_DEFAULT_BUCKETS  64
#define HASH_MAX_BUCKETS      1017  /* fits in single directory page */
#define HASH_MAX_KEY_LEN      255
#define HASH_ENTRY_OVERHEAD   8     /* 2 key_len + 6 RowID */

/* Page types for hash index */
#define PAGE_HASH_DIR  5
#define PAGE_HASH_BKT  6

/* ----------------------------------------------------------------
 *  Directory page header (follows PageHeader)
 * ---------------------------------------------------------------- */
typedef struct {
    uint32_t num_buckets;
    uint32_t reserved1;
    uint32_t reserved2;
} HashDirHdr;

#define HASH_DIR_HDR_SIZE  12
/* Offset of bucket array within page */
#define HASH_BUCKET_OFFSET (PAGE_HEADER_SIZE + HASH_DIR_HDR_SIZE)

/* ----------------------------------------------------------------
 *  Bucket page header (follows PageHeader)
 * ---------------------------------------------------------------- */
typedef struct {
    uint16_t num_entries;
    uint16_t used_bytes;     /* bytes used for entries (from start of data area) */
} HashBktHdr;

#define HASH_BKT_HDR_SIZE  4
#define HASH_BKT_DATA_OFFSET (PAGE_HEADER_SIZE + HASH_BKT_HDR_SIZE)
#define HASH_BKT_CAPACITY   (EVO_PAGE_SIZE - HASH_BKT_DATA_OFFSET)

/* ----------------------------------------------------------------
 *  Hash Index handle
 * ---------------------------------------------------------------- */
typedef struct {
    uint32_t dir_page;   /* directory page number (0 = empty) */
} HashIndex;

/* ----------------------------------------------------------------
 *  API
 * ---------------------------------------------------------------- */

/* Create a new hash index. Returns 0 on success, -1 on error. */
int hash_idx_create(HashIndex *hi, int num_buckets);

/* Insert key → RowID. Returns 0 on success, -1 on error. */
int hash_idx_insert(HashIndex *hi, const char *key, RowID rid);

/* Search for all entries matching key prefix (before \x1f separator).
 * Fills rids[] and optionally pk_out[][256].
 * Returns count of matches. */
int hash_idx_search(HashIndex *hi, const char *indexed_val,
                    char pk_results[][256], int max_results);

/* Search returning RowIDs directly. */
int hash_idx_search_rids(HashIndex *hi, const char *indexed_val,
                         RowID *rids, int max_results);

/* Delete entry by exact composite key. Returns 0 on success, -1 if not found. */
int hash_idx_delete(HashIndex *hi, const char *key);

/* Destroy all pages belonging to the hash index. */
void hash_idx_destroy(HashIndex *hi);

/* FNV-1a hash function. */
uint32_t hash_fnv1a(const char *key, int len);

#endif /* HASH_IDX_H */
