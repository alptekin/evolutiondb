/*
 * hash_idx.c — Page-Based Hash Index for EvoSQL
 *
 * Static hashing with bucket overflow chains.
 * Each bucket is a page chain; entries are packed sequentially.
 * Entry format: [key_len:2 LE][key_data:N][RowID:6]
 *
 * Composite key format (same as B+ tree secondary indexes):
 *   "indexed_value\x1fPK_value"
 * Search by indexed_value does prefix matching up to \x1f.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_idx.h"

/* \x1F separator between indexed value and PK (same as B+ tree secondary) */
#define SEC_IDX_SEP '\x1f'

/* ── FNV-1a hash ── */
uint32_t hash_fnv1a(const char *key, int len)
{
    uint32_t h = 2166136261u;
    for (int i = 0; i < len; i++) {
        h ^= (uint8_t)key[i];
        h *= 16777619u;
    }
    return h;
}

/* ── Helper: read directory page ── */
static int read_dir(HashIndex *hi, uint8_t *page)
{
    return pgm_read_page(hi->dir_page, page);
}

static int write_dir(HashIndex *hi, const uint8_t *page)
{
    return pgm_write_page(hi->dir_page, page);
}

static HashDirHdr *dir_hdr(uint8_t *page)
{
    return (HashDirHdr *)(page + PAGE_HEADER_SIZE);
}

static uint32_t *dir_buckets(uint8_t *page)
{
    return (uint32_t *)(page + HASH_BUCKET_OFFSET);
}

static HashBktHdr *bkt_hdr(uint8_t *page)
{
    return (HashBktHdr *)(page + PAGE_HEADER_SIZE);
}

static uint8_t *bkt_data(uint8_t *page)
{
    return page + HASH_BKT_DATA_OFFSET;
}

/* ── Create ── */
int hash_idx_create(HashIndex *hi, int num_buckets)
{
    if (num_buckets <= 0) num_buckets = HASH_DEFAULT_BUCKETS;
    if (num_buckets > HASH_MAX_BUCKETS) num_buckets = HASH_MAX_BUCKETS;

    /* Allocate directory page */
    uint32_t dp = pgm_alloc_page(PAGE_HASH_DIR);
    if (dp == 0) return -1;

    uint8_t page[EVO_PAGE_SIZE];
    memset(page, 0, EVO_PAGE_SIZE);

    PageHeader *ph = (PageHeader *)page;
    ph->page_type = PAGE_HASH_DIR;
    ph->page_id = dp;

    HashDirHdr *dh = dir_hdr(page);
    dh->num_buckets = (uint32_t)num_buckets;

    /* All bucket pointers = 0 (no bucket pages allocated yet — lazy) */
    pgm_write_page(dp, page);

    hi->dir_page = dp;
    return 0;
}

/* ── Allocate a new empty bucket page ── */
static uint32_t alloc_bucket_page(void)
{
    uint32_t bp = pgm_alloc_page(PAGE_HASH_BKT);
    if (bp == 0) return 0;

    uint8_t page[EVO_PAGE_SIZE];
    memset(page, 0, EVO_PAGE_SIZE);

    PageHeader *ph = (PageHeader *)page;
    ph->page_type = PAGE_HASH_BKT;
    ph->page_id = bp;
    ph->next_page = 0;

    HashBktHdr *bh = bkt_hdr(page);
    bh->num_entries = 0;
    bh->used_bytes = 0;

    pgm_write_page(bp, page);
    return bp;
}

/* ── Entry size for a given key ── */
static int entry_size(int key_len)
{
    return 2 + key_len + 6;  /* key_len:2 + key:N + RowID:6 */
}

/* ── Write entry into bucket page at offset ── */
static void write_entry(uint8_t *data, int offset,
                         const char *key, int key_len, RowID rid)
{
    uint16_t kl = (uint16_t)key_len;
    memcpy(data + offset, &kl, 2);
    memcpy(data + offset + 2, key, key_len);
    memcpy(data + offset + 2 + key_len, &rid.page_no, 4);
    memcpy(data + offset + 2 + key_len + 4, &rid.slot_idx, 2);
}

/* ── Read entry from bucket page at offset ── */
static int read_entry(const uint8_t *data, int offset,
                       char *key_out, int key_max, RowID *rid_out)
{
    uint16_t kl;
    memcpy(&kl, data + offset, 2);
    if (kl > HASH_MAX_KEY_LEN) return -1;

    int copy_len = (kl < key_max - 1) ? kl : key_max - 1;
    memcpy(key_out, data + offset + 2, copy_len);
    key_out[copy_len] = '\0';

    memcpy(&rid_out->page_no, data + offset + 2 + kl, 4);
    memcpy(&rid_out->slot_idx, data + offset + 2 + kl + 4, 2);

    return 2 + kl + 6;  /* total entry size */
}

/* ── Insert ── */
int hash_idx_insert(HashIndex *hi, const char *key, RowID rid)
{
    if (!hi->dir_page) return -1;
    int key_len = (int)strlen(key);
    if (key_len > HASH_MAX_KEY_LEN) return -1;

    uint8_t dirPage[EVO_PAGE_SIZE];
    read_dir(hi, dirPage);
    HashDirHdr *dh = dir_hdr(dirPage);
    uint32_t *buckets = dir_buckets(dirPage);

    /* Hash only the indexed_val prefix (before \x1f separator) for bucket routing */
    const char *sep = memchr(key, SEC_IDX_SEP, key_len);
    int hash_len = sep ? (int)(sep - key) : key_len;
    uint32_t bucket = hash_fnv1a(key, hash_len) % dh->num_buckets;
    int esize = entry_size(key_len);

    /* If bucket has no page yet, allocate one */
    if (buckets[bucket] == 0) {
        uint32_t bp = alloc_bucket_page();
        if (bp == 0) return -1;
        buckets[bucket] = bp;
        write_dir(hi, dirPage);
    }

    /* Walk the chain to find a page with space */
    uint32_t cur_page = buckets[bucket];
    uint32_t prev_page = 0;
    uint8_t bpage[EVO_PAGE_SIZE];

    while (cur_page) {
        pgm_read_page(cur_page, bpage);
        HashBktHdr *bh = bkt_hdr(bpage);
        int avail = HASH_BKT_CAPACITY - bh->used_bytes;

        if (avail >= esize) {
            /* Insert here */
            write_entry(bkt_data(bpage), bh->used_bytes, key, key_len, rid);
            bh->used_bytes += esize;
            bh->num_entries++;
            pgm_write_page(cur_page, bpage);
            return 0;
        }

        prev_page = cur_page;
        PageHeader *ph = (PageHeader *)bpage;
        cur_page = ph->next_page;
    }

    /* No space in any page — allocate overflow page */
    uint32_t newp = alloc_bucket_page();
    if (newp == 0) return -1;

    /* Link from previous page */
    PageHeader *ph = (PageHeader *)bpage;
    ph->next_page = newp;
    pgm_write_page(prev_page, bpage);

    /* Write entry to new page */
    uint8_t newpage[EVO_PAGE_SIZE];
    pgm_read_page(newp, newpage);
    HashBktHdr *nbh = bkt_hdr(newpage);
    write_entry(bkt_data(newpage), 0, key, key_len, rid);
    nbh->used_bytes = esize;
    nbh->num_entries = 1;
    pgm_write_page(newp, newpage);
    return 0;
}

/* ── Search by indexed_val prefix ── */
int hash_idx_search(HashIndex *hi, const char *indexed_val,
                    char pk_results[][256], int max_results)
{
    if (!hi->dir_page || max_results <= 0) return 0;

    /* Build prefix: "indexed_val\x1f" */
    char prefix[HASH_MAX_KEY_LEN + 2];
    int plen = snprintf(prefix, sizeof(prefix), "%s%c", indexed_val, SEC_IDX_SEP);

    /* Hash the indexed_val (not the full composite key) to find bucket */
    int val_len = (int)strlen(indexed_val);
    uint8_t dirPage[EVO_PAGE_SIZE];
    read_dir(hi, dirPage);
    HashDirHdr *dh = dir_hdr(dirPage);
    uint32_t *buckets = dir_buckets(dirPage);

    uint32_t bucket = hash_fnv1a(indexed_val, val_len) % dh->num_buckets;
    uint32_t cur_page = buckets[bucket];
    int count = 0;

    uint8_t bpage[EVO_PAGE_SIZE];
    while (cur_page && count < max_results) {
        pgm_read_page(cur_page, bpage);
        HashBktHdr *bh = bkt_hdr(bpage);
        const uint8_t *data = bkt_data(bpage);
        int offset = 0;

        for (int i = 0; i < bh->num_entries && count < max_results; i++) {
            char key[HASH_MAX_KEY_LEN + 1];
            RowID rid;
            int esz = read_entry(data, offset, key, sizeof(key), &rid);
            if (esz < 0) break;

            /* Check if key starts with prefix */
            if (strncmp(key, prefix, plen) == 0) {
                /* Extract PK part after separator */
                const char *pk = key + plen;
                strncpy(pk_results[count], pk, 255);
                pk_results[count][255] = '\0';
                count++;
            }
            offset += esz;
        }

        PageHeader *ph = (PageHeader *)bpage;
        cur_page = ph->next_page;
    }
    return count;
}

/* ── Search returning RowIDs ── */
int hash_idx_search_rids(HashIndex *hi, const char *indexed_val,
                         RowID *rids, int max_results)
{
    if (!hi->dir_page || max_results <= 0) return 0;

    char prefix[HASH_MAX_KEY_LEN + 2];
    int plen = snprintf(prefix, sizeof(prefix), "%s%c", indexed_val, SEC_IDX_SEP);

    int val_len = (int)strlen(indexed_val);
    uint8_t dirPage[EVO_PAGE_SIZE];
    read_dir(hi, dirPage);
    HashDirHdr *dh = dir_hdr(dirPage);
    uint32_t *buckets = dir_buckets(dirPage);

    uint32_t bucket = hash_fnv1a(indexed_val, val_len) % dh->num_buckets;
    uint32_t cur_page = buckets[bucket];
    int count = 0;

    uint8_t bpage[EVO_PAGE_SIZE];
    while (cur_page && count < max_results) {
        pgm_read_page(cur_page, bpage);
        HashBktHdr *bh = bkt_hdr(bpage);
        const uint8_t *data = bkt_data(bpage);
        int offset = 0;

        for (int i = 0; i < bh->num_entries && count < max_results; i++) {
            char key[HASH_MAX_KEY_LEN + 1];
            RowID rid;
            int esz = read_entry(data, offset, key, sizeof(key), &rid);
            if (esz < 0) break;

            if (strncmp(key, prefix, plen) == 0) {
                rids[count++] = rid;
            }
            offset += esz;
        }

        PageHeader *ph = (PageHeader *)bpage;
        cur_page = ph->next_page;
    }
    return count;
}

/* ── Delete by exact composite key ── */
int hash_idx_delete(HashIndex *hi, const char *key)
{
    if (!hi->dir_page) return -1;
    int key_len = (int)strlen(key);

    uint8_t dirPage[EVO_PAGE_SIZE];
    read_dir(hi, dirPage);
    HashDirHdr *dh = dir_hdr(dirPage);
    uint32_t *buckets = dir_buckets(dirPage);

    /* Hash must use the indexed_val prefix (before \x1f) */
    const char *sep = memchr(key, SEC_IDX_SEP, key_len);
    int hash_len = sep ? (int)(sep - key) : key_len;
    uint32_t bucket = hash_fnv1a(key, hash_len) % dh->num_buckets;

    uint32_t cur_page = buckets[bucket];
    uint8_t bpage[EVO_PAGE_SIZE];

    while (cur_page) {
        pgm_read_page(cur_page, bpage);
        HashBktHdr *bh = bkt_hdr(bpage);
        uint8_t *data = bkt_data(bpage);
        int offset = 0;

        for (int i = 0; i < bh->num_entries; i++) {
            uint16_t kl;
            memcpy(&kl, data + offset, 2);
            if (kl > HASH_MAX_KEY_LEN) break;

            /* Compare key */
            if ((int)kl == key_len && memcmp(data + offset + 2, key, key_len) == 0) {
                /* Found — remove by shifting remaining entries */
                int esz = entry_size(kl);
                int remaining = bh->used_bytes - offset - esz;
                if (remaining > 0)
                    memmove(data + offset, data + offset + esz, remaining);
                bh->used_bytes -= esz;
                bh->num_entries--;
                pgm_write_page(cur_page, bpage);
                return 0;
            }
            offset += entry_size(kl);
        }

        PageHeader *ph = (PageHeader *)bpage;
        cur_page = ph->next_page;
    }
    return -1;  /* not found */
}

/* ── Destroy ── */
void hash_idx_destroy(HashIndex *hi)
{
    if (!hi->dir_page) return;

    uint8_t dirPage[EVO_PAGE_SIZE];
    read_dir(hi, dirPage);
    HashDirHdr *dh = dir_hdr(dirPage);
    uint32_t *buckets = dir_buckets(dirPage);

    /* Free all bucket pages and their overflow chains */
    for (uint32_t b = 0; b < dh->num_buckets; b++) {
        uint32_t cur = buckets[b];
        while (cur) {
            uint8_t bpage[EVO_PAGE_SIZE];
            pgm_read_page(cur, bpage);
            PageHeader *ph = (PageHeader *)bpage;
            uint32_t next = ph->next_page;
            pgm_free_page(cur);
            cur = next;
        }
    }

    /* Free directory page */
    pgm_free_page(hi->dir_page);
    hi->dir_page = 0;
}
