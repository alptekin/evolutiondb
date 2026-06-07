/*
 * btree2.c — Page-Based B+ Tree for EvoSQL Unified Storage
 *
 * Internal/Leaf node layout within a 4KB page:
 *
 * LEAF NODE:
 *   [PageHeader 16B]
 *   [num_keys: uint16_t][flags: uint16_t]
 *   [key0_len:1][key0_data:N][RowID0:6]
 *   [key1_len:1][key1_data:N][RowID1:6]
 *   ...
 *   (keys sorted, leaf chain via PageHeader.next_page/prev_page)
 *
 * INTERNAL NODE:
 *   [PageHeader 16B]
 *   [num_keys: uint16_t][flags: uint16_t]
 *   [child0: uint32_t]
 *   [key0_len:1][key0_data:N][child1: uint32_t]
 *   [key1_len:1][key1_data:N][child2: uint32_t]
 *   ...
 *   (num_keys separator keys, num_keys+1 child pointers)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "btree2.h"

/* ----------------------------------------------------------------
 *  Node header (follows PageHeader)
 * ---------------------------------------------------------------- */
#define NODE_HEADER_OFF  PAGE_HEADER_SIZE
#define NODE_DATA_OFF    (NODE_HEADER_OFF + 4)
#define NODE_CAPACITY    (EVO_PAGE_SIZE - NODE_DATA_OFF)  /* 4076 bytes */

typedef struct {
    uint16_t num_keys;
    uint16_t flags;   /* reserved */
} NodeHeader;

static inline NodeHeader *node_hdr(void *page)
{
    return (NodeHeader *)((char *)page + NODE_HEADER_OFF);
}

static inline uint8_t node_type(const void *page)
{
    return ((const PageHeader *)page)->page_type;
}

/* ----------------------------------------------------------------
 *  Key comparison (numeric-aware, like existing B-tree)
 * ---------------------------------------------------------------- */
static int key_cmp(const char *a, int alen, const char *b, int blen)
{
    /* Try numeric comparison first */
    char abuf[256], bbuf[256];
    if (alen < 255 && blen < 255) {
        memcpy(abuf, a, alen); abuf[alen] = '\0';
        memcpy(bbuf, b, blen); bbuf[blen] = '\0';
        char *ea, *eb;

        /* Try integer comparison first (int64 — full precision for large IDs) */
        long long la = strtoll(abuf, &ea, 10);
        long long lb = strtoll(bbuf, &eb, 10);
        if (*ea == '\0' && *eb == '\0' && ea != abuf && eb != bbuf) {
            if (la < lb) return -1;
            if (la > lb) return 1;
            return 0;
        }

        /* Try floating-point comparison for decimals */
        double da = strtod(abuf, &ea);
        double db = strtod(bbuf, &eb);
        if (*ea == '\0' && *eb == '\0') {
            if (da < db) return -1;
            if (da > db) return 1;
            return 0;
        }
    }
    /* Lexicographic fallback */
    int minlen = alen < blen ? alen : blen;
    int r = memcmp(a, b, minlen);
    if (r != 0) return r;
    return alen - blen;
}

/* ----------------------------------------------------------------
 *  Leaf node operations
 * ---------------------------------------------------------------- */

/* Entry layout in leaf: [key_len:1][key:N][RowID:6] */
#define LEAF_ENTRY_OVERHEAD (1 + ROWID_SIZE)  /* 7 bytes + key length */

/* Read entry at byte position pos within node data area.
 * Returns bytes consumed. */
static int leaf_read_entry(const void *page, int pos,
                           const char **key_out, int *klen_out,
                           RowID *rid_out)
{
    const uint8_t *data = (const uint8_t *)page + NODE_DATA_OFF + pos;
    int klen = data[0];
    if (key_out) *key_out = (const char *)(data + 1);
    if (klen_out) *klen_out = klen;
    if (rid_out) {
        memcpy(&rid_out->page_no, data + 1 + klen, 4);
        memcpy(&rid_out->slot_idx, data + 1 + klen + 4, 2);
    }
    return 1 + klen + ROWID_SIZE;
}

/* Write entry at byte position pos. Returns bytes written. */
static int leaf_write_entry(void *page, int pos,
                            const char *key, int klen, RowID rid)
{
    uint8_t *data = (uint8_t *)page + NODE_DATA_OFF + pos;
    data[0] = (uint8_t)klen;
    memmove(data + 1, key, klen);  /* memmove: key may point into same page */
    memcpy(data + 1 + klen, &rid.page_no, 4);
    memcpy(data + 1 + klen + 4, &rid.slot_idx, 2);
    return 1 + klen + ROWID_SIZE;
}

/* Get byte offset of the i-th entry by scanning from start. */
static int leaf_entry_offset(const void *page, int idx)
{
    int pos = 0;
    for (int i = 0; i < idx; i++) {
        int klen = *((const uint8_t *)page + NODE_DATA_OFF + pos);
        pos += 1 + klen + ROWID_SIZE;
    }
    return pos;
}

/* Total bytes used by all entries */
static int leaf_used_bytes(const void *page)
{
    NodeHeader *nh = node_hdr((void *)page);
    return leaf_entry_offset(page, nh->num_keys);
}

/* ----------------------------------------------------------------
 *  Internal node operations
 * ---------------------------------------------------------------- */

/* Layout: [child0:4][key0_len:1][key0:N][child1:4][key1_len:1][key1:N]...[childN:4]
 * So num_keys+1 children and num_keys keys, interleaved. */

static int internal_read_child(const void *page, int child_idx)
{
    /* Child pointers and keys are interleaved starting at NODE_DATA_OFF */
    int pos = 0;
    const uint8_t *data = (const uint8_t *)page + NODE_DATA_OFF;

    for (int i = 0; i < child_idx; i++) {
        /* Skip child[i] (4 bytes) */
        pos += 4;
        /* Skip key[i] */
        int klen = data[pos];
        pos += 1 + klen;
    }
    uint32_t child;
    memcpy(&child, data + pos, 4);
    return (int)child;
}

static void internal_read_key(const void *page, int key_idx,
                               const char **key_out, int *klen_out)
{
    int pos = 0;
    const uint8_t *data = (const uint8_t *)page + NODE_DATA_OFF;

    /* Skip to key[key_idx]: need to pass child0 + key0..key_{idx-1} */
    for (int i = 0; i <= key_idx; i++) {
        pos += 4;  /* skip child[i] */
        if (i < key_idx) {
            int klen = data[pos];
            pos += 1 + klen;  /* skip key[i] */
        }
    }
    int klen = data[pos];
    if (klen_out) *klen_out = klen;
    if (key_out) *key_out = (const char *)(data + pos + 1);
}

/* Total bytes used by internal node entries */
static int internal_used_bytes(const void *page)
{
    NodeHeader *nh = node_hdr((void *)page);
    int pos = 0;
    const uint8_t *data = (const uint8_t *)page + NODE_DATA_OFF;

    for (int i = 0; i < nh->num_keys; i++) {
        pos += 4;  /* child */
        int klen = data[pos];
        pos += 1 + klen;  /* key */
    }
    pos += 4;  /* last child */
    return pos;
}

/* Init an internal node page with one separator key and two children. */
static void internal_init(void *page, uint32_t page_no,
                          uint32_t left_child,
                          const char *sep_key, int sep_klen,
                          uint32_t right_child)
{
    memset(page, 0, EVO_PAGE_SIZE);
    PageHeader *ph = (PageHeader *)page;
    ph->page_type = PAGE_BTREE_INT;
    ph->page_id = page_no;

    NodeHeader *nh = node_hdr(page);
    nh->num_keys = 1;

    uint8_t *data = (uint8_t *)page + NODE_DATA_OFF;
    int pos = 0;
    memcpy(data + pos, &left_child, 4); pos += 4;
    data[pos] = (uint8_t)sep_klen; pos++;
    memcpy(data + pos, sep_key, sep_klen); pos += sep_klen;
    memcpy(data + pos, &right_child, 4);
}

/* Insert a new separator key + right child into an internal node.
 * Inserts after child_idx position. */
static int internal_insert_key(void *page, int after_child_idx,
                                const char *key, int klen,
                                uint32_t right_child)
{
    NodeHeader *nh = node_hdr(page);
    uint8_t *data = (uint8_t *)page + NODE_DATA_OFF;

    /* Find byte position after child[after_child_idx] */
    int pos = 0;
    for (int i = 0; i <= after_child_idx; i++) {
        pos += 4;
        if (i < after_child_idx) {
            int kl = data[pos];
            pos += 1 + kl;
        }
    }
    /* pos now points just past child[after_child_idx] */
    /* We need to insert: key + right_child here */

    int insert_size = 1 + klen + 4;
    int used = internal_used_bytes(page);
    if (used + insert_size > NODE_CAPACITY)
        return -1;  /* need to split */

    /* Shift everything after pos */
    memmove(data + pos + insert_size, data + pos, used - pos);

    /* Write the key */
    data[pos] = (uint8_t)klen;
    memcpy(data + pos + 1, key, klen);
    memcpy(data + pos + 1 + klen, &right_child, 4);

    nh->num_keys++;
    return 0;
}

/* ----------------------------------------------------------------
 *  Split operations
 * ---------------------------------------------------------------- */

/* Split a leaf node. Moves upper half to new_page.
 * Returns the separator key (first key of new_page) via sep_key/sep_klen. */
static int leaf_split(void *page, void *new_page, uint32_t new_page_no,
                      char *sep_key, int *sep_klen)
{
    NodeHeader *nh = node_hdr(page);
    int total = nh->num_keys;
    int mid = total / 2;

    /* Init new page as leaf */
    memset(new_page, 0, EVO_PAGE_SIZE);
    PageHeader *new_ph = (PageHeader *)new_page;
    new_ph->page_type = PAGE_BTREE_LEAF;
    new_ph->page_id = new_page_no;

    /* Link leaf chain */
    PageHeader *old_ph = (PageHeader *)page;
    new_ph->next_page = old_ph->next_page;
    new_ph->prev_page = old_ph->page_id;
    old_ph->next_page = new_page_no;

    /* Update the next leaf's prev pointer if exists */
    if (new_ph->next_page != 0) {
        char next_buf[EVO_PAGE_SIZE];
        pgm_read_page(new_ph->next_page, next_buf);
        PageHeader *next_ph = (PageHeader *)next_buf;
        next_ph->prev_page = new_page_no;
        pgm_write_page(new_ph->next_page, next_buf);
    }

    /* Copy entries [mid..total) to new page */
    int src_pos = leaf_entry_offset(page, mid);
    int dst_pos = 0;
    NodeHeader *new_nh = node_hdr(new_page);
    new_nh->num_keys = 0;

    for (int i = mid; i < total; i++) {
        const char *k;
        int kl;
        RowID rid;
        int consumed = leaf_read_entry(page, src_pos, &k, &kl, &rid);
        leaf_write_entry(new_page, dst_pos, k, kl, rid);
        dst_pos += consumed;
        src_pos += consumed;
        new_nh->num_keys++;
    }

    /* Truncate old page */
    nh->num_keys = mid;

    /* Separator key = first key of new page */
    const char *fk;
    int fkl;
    leaf_read_entry(new_page, 0, &fk, &fkl, NULL);
    memcpy(sep_key, fk, fkl);
    *sep_klen = fkl;

    return 0;
}

/* Split an internal node. Returns separator key that goes up to parent. */
static int internal_split(void *page, void *new_page, uint32_t new_page_no,
                          char *up_key, int *up_klen)
{
    NodeHeader *nh = node_hdr(page);
    int total = nh->num_keys;
    int mid = total / 2;

    uint8_t *data = (uint8_t *)page + NODE_DATA_OFF;

    /* Find position of key[mid] — this key goes UP to parent */
    int pos = 0;
    for (int i = 0; i <= mid; i++) {
        pos += 4;
        if (i < mid) {
            int kl = data[pos];
            pos += 1 + kl;
        }
    }
    /* pos points to key[mid] */
    int mid_klen = data[pos];
    memcpy(up_key, data + pos + 1, mid_klen);
    *up_klen = mid_klen;

    /* Everything after key[mid] (i.e. child[mid+1], key[mid+1], ...) goes to new page */
    int after_mid = pos + 1 + mid_klen;
    int used = internal_used_bytes(page);
    int copy_bytes = used - after_mid;

    memset(new_page, 0, EVO_PAGE_SIZE);
    PageHeader *new_ph = (PageHeader *)new_page;
    new_ph->page_type = PAGE_BTREE_INT;
    new_ph->page_id = new_page_no;

    NodeHeader *new_nh = node_hdr(new_page);
    new_nh->num_keys = total - mid - 1;

    memcpy((uint8_t *)new_page + NODE_DATA_OFF, data + after_mid, copy_bytes);

    /* Truncate old page */
    nh->num_keys = mid;

    return 0;
}

/* ----------------------------------------------------------------
 *  Search helper — descend to leaf
 * ---------------------------------------------------------------- */
static uint32_t find_leaf(BTree2 *tree, const char *key, int klen)
{
    uint32_t page_no = tree->root_page;
    if (page_no == 0) return 0;

    char page[EVO_PAGE_SIZE];
    pgm_read_page(page_no, page);

    while (node_type(page) == PAGE_BTREE_INT) {
        NodeHeader *nh = node_hdr(page);
        int child_idx = nh->num_keys;  /* default: rightmost child */

        for (int i = 0; i < nh->num_keys; i++) {
            const char *ik;
            int iklen;
            internal_read_key(page, i, &ik, &iklen);
            if (key_cmp(key, klen, ik, iklen) < 0) {
                child_idx = i;
                break;
            }
        }

        uint32_t child = (uint32_t)internal_read_child(page, child_idx);
        pgm_read_page(child, page);
        page_no = child;
    }

    return page_no;
}

/* ----------------------------------------------------------------
 *  Public API — Tree operations
 * ---------------------------------------------------------------- */

int bt2_create(BTree2 *tree)
{
    uint32_t p = pgm_alloc_page(PAGE_BTREE_LEAF);
    if (p == 0) return -1;

    /* Initialize as empty leaf */
    char page[EVO_PAGE_SIZE];
    memset(page, 0, EVO_PAGE_SIZE);
    PageHeader *ph = (PageHeader *)page;
    ph->page_type = PAGE_BTREE_LEAF;
    ph->page_id = p;

    NodeHeader *nh = node_hdr(page);
    nh->num_keys = 0;

    pgm_write_page(p, page);
    tree->root_page = p;
    return 0;
}

int bt2_search(BTree2 *tree, const char *key, RowID *out_rid)
{
    if (tree->root_page == 0) return -1;

    int klen = (int)strlen(key);
    uint32_t leaf_pno = find_leaf(tree, key, klen);
    if (leaf_pno == 0) return -1;

    char page[EVO_PAGE_SIZE];
    pgm_read_page(leaf_pno, page);

    NodeHeader *nh = node_hdr(page);
    int pos = 0;
    for (int i = 0; i < nh->num_keys; i++) {
        const char *ek;
        int eklen;
        RowID rid;
        int consumed = leaf_read_entry(page, pos, &ek, &eklen, &rid);
        if (key_cmp(key, klen, ek, eklen) == 0) {
            /* Check if deleted (rid.page_no == 0 means deleted) */
            if (rid.page_no == 0 && rid.slot_idx == 0)
                return -1;
            if (out_rid) *out_rid = rid;
            return 0;
        }
        pos += consumed;
    }
    return -1;
}

/* Recursive insert helper. Returns:
 *  0 = done (no split needed)
 *  1 = split happened, caller must insert sep_key/new_child into parent
 * -1 = error */
static int insert_recursive(uint32_t page_no,
                            const char *key, int klen, RowID rid,
                            char *sep_key_out, int *sep_klen_out,
                            uint32_t *new_child_out)
{
    char page[EVO_PAGE_SIZE];
    pgm_read_page(page_no, page);

    if (node_type(page) == PAGE_BTREE_LEAF) {
        NodeHeader *nh = node_hdr(page);

        /* Find insertion position (sorted) */
        int pos = 0;
        int insert_before = nh->num_keys;
        for (int i = 0; i < nh->num_keys; i++) {
            const char *ek;
            int eklen;
            RowID erid;
            int consumed = leaf_read_entry(page, pos, &ek, &eklen, &erid);
            int cmp = key_cmp(key, klen, ek, eklen);
            if (cmp == 0) {
                /* Key exists — check if deleted */
                if (erid.page_no == 0 && erid.slot_idx == 0) {
                    /* Reuse deleted slot */
                    leaf_write_entry(page, pos, key, klen, rid);
                    pgm_write_page(page_no, page);
                    return 0;
                }
                return -2;  /* duplicate key — NOT a split */
            }
            if (cmp < 0) {
                insert_before = i;
                break;
            }
            pos += consumed;
        }

        /* Check if entry fits */
        int entry_size = 1 + klen + ROWID_SIZE;
        int used = leaf_used_bytes(page);
        if (used + entry_size <= NODE_CAPACITY) {
            /* Fits — shift and insert */
            int insert_pos = leaf_entry_offset(page, insert_before);
            uint8_t *data = (uint8_t *)page + NODE_DATA_OFF;
            memmove(data + insert_pos + entry_size,
                    data + insert_pos,
                    used - insert_pos);
            leaf_write_entry(page, insert_pos, key, klen, rid);
            nh->num_keys++;
            pgm_write_page(page_no, page);
            return 0;
        }

        /* Need to split */
        uint32_t new_pno = pgm_alloc_page(PAGE_BTREE_LEAF);
        if (new_pno == 0) return -1;

        /* First, insert the new key into the correct position temporarily.
         * We do this by writing to a temp oversized buffer. */
        char temp[EVO_PAGE_SIZE + 512];
        memcpy(temp, page, EVO_PAGE_SIZE);
        NodeHeader *temp_nh = node_hdr(temp);

        int insert_pos = leaf_entry_offset(temp, insert_before);
        uint8_t *temp_data = (uint8_t *)temp + NODE_DATA_OFF;
        memmove(temp_data + insert_pos + entry_size,
                temp_data + insert_pos,
                used - insert_pos);
        /* Write entry into temp */
        temp_data[insert_pos] = (uint8_t)klen;
        memcpy(temp_data + insert_pos + 1, key, klen);
        memcpy(temp_data + insert_pos + 1 + klen, &rid.page_no, 4);
        memcpy(temp_data + insert_pos + 1 + klen + 4, &rid.slot_idx, 2);
        temp_nh->num_keys++;

        /* Now split from temp into page and new_page */
        int total = temp_nh->num_keys;
        int mid = total / 2;

        /* Rebuild old page with entries [0..mid) */
        memset(page + NODE_DATA_OFF, 0, NODE_CAPACITY);
        NodeHeader *old_nh = node_hdr(page);
        old_nh->num_keys = 0;
        int src_pos = 0;
        int dst_pos = 0;
        for (int i = 0; i < mid; i++) {
            int ekl = temp_data[src_pos];
            int esize = 1 + ekl + ROWID_SIZE;
            memcpy((uint8_t *)page + NODE_DATA_OFF + dst_pos,
                   temp_data + src_pos, esize);
            src_pos += esize;
            dst_pos += esize;
            old_nh->num_keys++;
        }

        /* Build new page with entries [mid..total) */
        char new_page[EVO_PAGE_SIZE];
        memset(new_page, 0, EVO_PAGE_SIZE);
        PageHeader *new_ph = (PageHeader *)new_page;
        new_ph->page_type = PAGE_BTREE_LEAF;
        new_ph->page_id = new_pno;
        PageHeader *old_ph = (PageHeader *)page;
        new_ph->next_page = old_ph->next_page;
        new_ph->prev_page = old_ph->page_id;
        old_ph->next_page = new_pno;

        if (new_ph->next_page != 0) {
            char next_buf[EVO_PAGE_SIZE];
            pgm_read_page(new_ph->next_page, next_buf);
            ((PageHeader *)next_buf)->prev_page = new_pno;
            pgm_write_page(new_ph->next_page, next_buf);
        }

        NodeHeader *new_nh = node_hdr(new_page);
        new_nh->num_keys = 0;
        dst_pos = 0;
        for (int i = mid; i < total; i++) {
            int ekl = temp_data[src_pos];
            int esize = 1 + ekl + ROWID_SIZE;
            memcpy((uint8_t *)new_page + NODE_DATA_OFF + dst_pos,
                   temp_data + src_pos, esize);
            src_pos += esize;
            dst_pos += esize;
            new_nh->num_keys++;
        }

        pgm_write_page(page_no, page);
        pgm_write_page(new_pno, new_page);

        /* Separator = first key of new page */
        const char *fk;
        int fkl;
        leaf_read_entry(new_page, 0, &fk, &fkl, NULL);
        memcpy(sep_key_out, fk, fkl);
        *sep_klen_out = fkl;
        *new_child_out = new_pno;
        return 1;  /* split happened */
    }

    /* INTERNAL NODE: descend to correct child */
    NodeHeader *nh = node_hdr(page);
    int child_idx = nh->num_keys;
    for (int i = 0; i < nh->num_keys; i++) {
        const char *ik;
        int iklen;
        internal_read_key(page, i, &ik, &iklen);
        if (key_cmp(key, klen, ik, iklen) < 0) {
            child_idx = i;
            break;
        }
    }

    uint32_t child = (uint32_t)internal_read_child(page, child_idx);
    char child_sep[256];
    int child_sep_len;
    uint32_t child_new;

    int result = insert_recursive(child, key, klen, rid,
                                  child_sep, &child_sep_len, &child_new);

    if (result <= 0)
        return result;  /* 0 = done, -1 = error */

    /* Child split — need to insert separator into this internal node */
    /* Re-read page (may have been evicted from buffer pool) */
    pgm_read_page(page_no, page);
    nh = node_hdr(page);

    /* Try to insert */
    if (internal_insert_key(page, child_idx, child_sep, child_sep_len,
                            child_new) == 0) {
        pgm_write_page(page_no, page);
        return 0;
    }

    /* Internal node is full — split it too */
    uint32_t new_int_pno = pgm_alloc_page(PAGE_BTREE_INT);
    if (new_int_pno == 0) return -1;

    /* Insert the key first into a temp buffer, then split */
    char temp[EVO_PAGE_SIZE + 512];
    memcpy(temp, page, EVO_PAGE_SIZE);
    /* Force insert into temp (we have overflow space) */
    NodeHeader *temp_nh = node_hdr(temp);
    uint8_t *td = (uint8_t *)temp + NODE_DATA_OFF;
    int tpos = 0;
    for (int i = 0; i <= child_idx; i++) {
        tpos += 4;
        if (i < child_idx) {
            int kl = td[tpos];
            tpos += 1 + kl;
        }
    }
    int isize = 1 + child_sep_len + 4;
    int tused = internal_used_bytes(temp);
    memmove(td + tpos + isize, td + tpos, tused - tpos);
    td[tpos] = (uint8_t)child_sep_len;
    memcpy(td + tpos + 1, child_sep, child_sep_len);
    memcpy(td + tpos + 1 + child_sep_len, &child_new, 4);
    temp_nh->num_keys++;

    /* Split temp into page (left) and new_int (right) */
    int total = temp_nh->num_keys;
    int mid = total / 2;

    /* Find position of key[mid] in temp — this goes UP */
    tpos = 0;
    for (int i = 0; i <= mid; i++) {
        tpos += 4;
        if (i < mid) {
            int kl = td[tpos];
            tpos += 1 + kl;
        }
    }
    int up_kl = td[tpos];
    memcpy(sep_key_out, td + tpos + 1, up_kl);
    *sep_klen_out = up_kl;

    /* Left page: entries [0..mid) */
    memset(page + NODE_DATA_OFF, 0, NODE_CAPACITY);
    NodeHeader *left_nh = node_hdr(page);
    left_nh->num_keys = mid;
    int src = 0;
    int epos = 0;
    uint8_t *pd = (uint8_t *)page + NODE_DATA_OFF;
    for (int i = 0; i < mid; i++) {
        int csize = 4;
        memcpy(pd + epos, td + src, 4); src += 4; epos += 4;
        int kl = td[src];
        int ksize = 1 + kl;
        memcpy(pd + epos, td + src, ksize); src += ksize; epos += ksize;
        (void)csize;
    }
    /* Copy last child of left half */
    memcpy(pd + epos, td + src, 4); src += 4; epos += 4;

    /* Skip the separator key (it goes up) */
    int skip_kl = td[src];
    src += 1 + skip_kl;

    /* Right page: entries after separator */
    char new_int[EVO_PAGE_SIZE];
    memset(new_int, 0, EVO_PAGE_SIZE);
    PageHeader *ni_ph = (PageHeader *)new_int;
    ni_ph->page_type = PAGE_BTREE_INT;
    ni_ph->page_id = new_int_pno;
    NodeHeader *right_nh = node_hdr(new_int);
    right_nh->num_keys = total - mid - 1;

    /* Copy remaining entries */
    tused = 0;
    for (int i = 0; i < right_nh->num_keys; i++) {
        tused += 4;
        int kl = td[src + tused - 4 + 4]; /* peek ahead */
        /* Actually let's just memcpy the rest */
        (void)kl;
    }
    /* Simpler: just copy remaining bytes */
    int remaining = 0;
    {
        int rpos = src;
        for (int i = 0; i < right_nh->num_keys; i++) {
            rpos += 4;
            int kl = td[rpos];
            rpos += 1 + kl;
        }
        rpos += 4;  /* last child */
        remaining = rpos - src;
    }
    memcpy((uint8_t *)new_int + NODE_DATA_OFF, td + src, remaining);

    pgm_write_page(page_no, page);
    pgm_write_page(new_int_pno, new_int);

    *new_child_out = new_int_pno;
    return 1;  /* split propagated */
}

int bt2_insert(BTree2 *tree, const char *key, RowID rid)
{
    if (tree->root_page == 0) {
        if (bt2_create(tree) < 0) return -1;
    }

    int klen = (int)strlen(key);
    if (klen > BT2_MAX_KEY_LEN) return -1;

    char sep_key[256];
    int sep_klen;
    uint32_t new_child;

    int result = insert_recursive(tree->root_page, key, klen, rid,
                                  sep_key, &sep_klen, &new_child);

    if (result <= 0)
        return result;

    /* Root split — create new root */
    uint32_t new_root = pgm_alloc_page(PAGE_BTREE_INT);
    if (new_root == 0) return -1;

    char root_page[EVO_PAGE_SIZE];
    internal_init(root_page, new_root,
                  tree->root_page, sep_key, sep_klen, new_child);
    pgm_write_page(new_root, root_page);
    tree->root_page = new_root;
    return 0;
}

int bt2_delete(BTree2 *tree, const char *key)
{
    if (tree->root_page == 0) return -1;

    int klen = (int)strlen(key);
    uint32_t leaf_pno = find_leaf(tree, key, klen);
    if (leaf_pno == 0) return -1;

    char page[EVO_PAGE_SIZE];
    pgm_read_page(leaf_pno, page);

    NodeHeader *nh = node_hdr(page);
    int pos = 0;
    for (int i = 0; i < nh->num_keys; i++) {
        const char *ek;
        int eklen;
        RowID rid;
        int consumed = leaf_read_entry(page, pos, &ek, &eklen, &rid);
        if (key_cmp(key, klen, ek, eklen) == 0) {
            if (rid.page_no == 0 && rid.slot_idx == 0)
                return -1;  /* already deleted */
            /* Lazy delete: set RowID to {0,0} */
            RowID zero = {0, 0};
            leaf_write_entry(page, pos, ek, eklen, zero);
            pgm_write_page(leaf_pno, page);
            return 0;
        }
        pos += consumed;
    }
    return -1;
}

/* Shared helper: scan the entries of `leaf_pno` for `key` and
 * overwrite its rid with `new_rid`. Returns 0 on success, -1 if
 * the key is not on that page. */
static int bt2_update_entry_on_leaf(uint32_t leaf_pno,
                                    const char *key, int klen,
                                    RowID new_rid)
{
    char page[EVO_PAGE_SIZE];
    pgm_read_page(leaf_pno, page);

    NodeHeader *nh = node_hdr(page);
    int pos = 0;
    for (int i = 0; i < nh->num_keys; i++) {
        const char *ek;
        int eklen;
        RowID rid;
        int consumed = leaf_read_entry(page, pos, &ek, &eklen, &rid);
        if (key_cmp(key, klen, ek, eklen) == 0) {
            leaf_write_entry(page, pos, ek, eklen, new_rid);
            pgm_write_page(leaf_pno, page);
            return 0;
        }
        pos += consumed;
    }
    return -1;
}

int bt2_update(BTree2 *tree, const char *key, RowID new_rid)
{
    if (tree->root_page == 0) return -1;

    int klen = (int)strlen(key);
    uint32_t leaf_pno = find_leaf(tree, key, klen);
    if (leaf_pno == 0) return -1;

    return bt2_update_entry_on_leaf(leaf_pno, key, klen, new_rid);
}

int bt2_update_at_leaf(BTree2 *tree, uint32_t leaf_pno,
                       const char *key, RowID new_rid)
{
    if (tree->root_page == 0) return -1;
    if (leaf_pno == 0) return bt2_update(tree, key, new_rid);

    int klen = (int)strlen(key);
    /* Try the hinted leaf first — if the key moved due to a split
     * since the hint was captured, fall back to a full find_leaf. */
    if (bt2_update_entry_on_leaf(leaf_pno, key, klen, new_rid) == 0)
        return 0;
    return bt2_update(tree, key, new_rid);
}

/* ----------------------------------------------------------------
 *  Cursor operations
 * ---------------------------------------------------------------- */

/* Find the leftmost leaf by always following child[0]. */
static uint32_t find_leftmost_leaf(uint32_t page_no)
{
    if (page_no == 0) return 0;

    char page[EVO_PAGE_SIZE];
    pgm_read_page(page_no, page);

    while (node_type(page) == PAGE_BTREE_INT) {
        uint32_t child = (uint32_t)internal_read_child(page, 0);
        if (child == 0) return 0;
        pgm_read_page(child, page);
        page_no = child;
    }
    return page_no;
}

int bt2_cursor_first(BTree2 *tree, BTree2Cursor *cur)
{
    if (!tree || tree->root_page == 0) {
        if (cur) { cur->cur_page = 0; cur->cur_idx = 0; }
        return -1;
    }

    uint32_t leaf = find_leftmost_leaf(tree->root_page);
    if (leaf == 0) return -1;

    cur->cur_page = leaf;
    cur->cur_idx = 0;

    /* Skip any leading deleted entries */
    char page[EVO_PAGE_SIZE];
    pgm_read_page(leaf, page);
    NodeHeader *nh = node_hdr(page);
    int pos = 0;
    while (cur->cur_idx < nh->num_keys) {
        RowID rid;
        leaf_read_entry(page, pos, NULL, NULL, &rid);
        if (rid.page_no != 0 || rid.slot_idx != 0)
            break;  /* found active entry */
        int kl = *((uint8_t *)page + NODE_DATA_OFF + pos);
        pos += 1 + kl + ROWID_SIZE;
        cur->cur_idx++;
    }

    if (cur->cur_idx >= nh->num_keys) {
        /* All entries in first leaf are deleted, advance to next leaf */
        if (((PageHeader *)page)->next_page != 0) {
            cur->cur_page = ((PageHeader *)page)->next_page;
            cur->cur_idx = 0;
        } else {
            cur->cur_page = 0;
            return -1;
        }
    }

    return 0;
}

int bt2_cursor_next(BTree2Cursor *cur, char *key_out, RowID *rid_out)
{
    if (!cur || cur->cur_page == 0) return -1;

    char page[EVO_PAGE_SIZE];

again:
    pgm_read_page(cur->cur_page, page);
    NodeHeader *nh = node_hdr(page);

    if (cur->cur_idx >= nh->num_keys) {
        /* Move to next leaf */
        uint32_t next = ((PageHeader *)page)->next_page;
        if (next == 0) {
            cur->cur_page = 0;
            return -1;
        }
        cur->cur_page = next;
        cur->cur_idx = 0;
        goto again;
    }

    int pos = leaf_entry_offset(page, cur->cur_idx);
    const char *k;
    int kl;
    RowID rid;
    leaf_read_entry(page, pos, &k, &kl, &rid);
    cur->cur_idx++;

    /* Skip deleted entries */
    if (rid.page_no == 0 && rid.slot_idx == 0)
        goto again;

    if (key_out) {
        memcpy(key_out, k, kl);
        key_out[kl] = '\0';
    }
    if (rid_out) *rid_out = rid;
    return 0;
}

int bt2_cursor_seek(BTree2 *tree, const char *key, BTree2Cursor *cur)
{
    if (!tree || tree->root_page == 0 || !cur) return -1;

    int klen = (int)strlen(key);
    uint32_t leaf_pno = find_leaf(tree, key, klen);
    if (leaf_pno == 0) return -1;

    cur->cur_page = leaf_pno;
    cur->cur_idx = 0;

    /* Find first key >= given key */
    char page[EVO_PAGE_SIZE];
    pgm_read_page(leaf_pno, page);
    NodeHeader *nh = node_hdr(page);
    int pos = 0;
    for (int i = 0; i < nh->num_keys; i++) {
        const char *ek;
        int eklen;
        leaf_read_entry(page, pos, &ek, &eklen, NULL);
        if (key_cmp(key, klen, ek, eklen) <= 0) {
            cur->cur_idx = (uint16_t)i;
            return 0;
        }
        int kl = *((uint8_t *)page + NODE_DATA_OFF + pos);
        pos += 1 + kl + ROWID_SIZE;
    }

    /* Key is greater than all entries in this leaf */
    uint32_t next = ((PageHeader *)page)->next_page;
    if (next != 0) {
        cur->cur_page = next;
        cur->cur_idx = 0;
        return 0;
    }
    cur->cur_page = 0;
    return -1;
}

/* ----------------------------------------------------------------
 *  Utility
 * ---------------------------------------------------------------- */
static void destroy_recursive(uint32_t page_no)
{
    if (page_no == 0) return;

    char page[EVO_PAGE_SIZE];
    pgm_read_page(page_no, page);

    if (node_type(page) == PAGE_BTREE_INT) {
        NodeHeader *nh = node_hdr(page);
        for (int i = 0; i <= nh->num_keys; i++) {
            uint32_t child = (uint32_t)internal_read_child(page, i);
            destroy_recursive(child);
        }
    }

    pgm_free_page(page_no);
}

void bt2_destroy(BTree2 *tree)
{
    if (!tree || tree->root_page == 0) return;
    destroy_recursive(tree->root_page);
    tree->root_page = 0;
}

/* ----------------------------------------------------------------
 *  Compaction / rebalancing (RECLAIM-time only)
 *
 *  bt2_delete stays a lazy tombstone so the system catalog and every
 *  hot-path caller keep a structurally stable tree (root never moves,
 *  pages never freed). bt2_compact is the offline maintenance pass that
 *  reclaims space: drop tombstones, then borrow/merge across underflowing
 *  siblings (full B+ rebalancing), free emptied pages, collapse the root.
 *
 *  Nodes are deserialized into local arrays, rebalanced, then reserialized
 *  — this keeps the borrow/merge bookkeeping far less error-prone than
 *  in-place byte shuffling. Min-fill is a heuristic (better space usage),
 *  NOT a correctness invariant; the only hard invariant is that a node's
 *  bytes never exceed NODE_CAPACITY, which merge/borrow both preserve.
 * ---------------------------------------------------------------- */
#define BT2_MIN_FILL   (NODE_CAPACITY / 2)
#define BT2_MAX_SLOTS  1024

typedef struct { uint8_t klen; char key[BT2_MAX_KEY_LEN]; RowID rid; } LeafSlot;
typedef struct { uint8_t klen; char key[BT2_MAX_KEY_LEN]; } IntKey;

/* Load a leaf page's entries into slots[]. When drop_tombstones is set,
 * {0,0} entries are skipped. Returns entry count, or -1 on overflow. */
static int bt2c_leaf_load(const void *page, LeafSlot *slots, int max,
                          int drop_tombstones)
{
    const NodeHeader *nh = node_hdr((void *)page);
    int pos = 0, n = 0;
    for (int i = 0; i < nh->num_keys; i++) {
        const char *k; int kl; RowID rid;
        int consumed = leaf_read_entry(page, pos, &k, &kl, &rid);
        pos += consumed;
        if (drop_tombstones && rid.page_no == 0 && rid.slot_idx == 0)
            continue;
        if (n >= max) return -1;
        slots[n].klen = (uint8_t)kl;
        memcpy(slots[n].key, k, kl);
        slots[n].rid = rid;
        n++;
    }
    return n;
}

static int bt2c_leaf_bytes(const LeafSlot *s, int n)
{
    int b = 0;
    for (int i = 0; i < n; i++) b += 1 + s[i].klen + ROWID_SIZE;
    return b;
}

static void bt2c_leaf_store(uint32_t page_no, uint32_t prev, uint32_t next,
                            const LeafSlot *s, int n)
{
    char page[EVO_PAGE_SIZE];
    memset(page, 0, EVO_PAGE_SIZE);
    PageHeader *ph = (PageHeader *)page;
    ph->page_type = PAGE_BTREE_LEAF;
    ph->page_id   = page_no;
    ph->prev_page = prev;
    ph->next_page = next;
    node_hdr(page)->num_keys = (uint16_t)n;
    int pos = 0;
    for (int i = 0; i < n; i++)
        pos += leaf_write_entry(page, pos, s[i].key, s[i].klen, s[i].rid);
    pgm_write_page(page_no, page);
}

/* Load an internal page into children[] (nk+1) and keys[] (nk).
 * Returns nk, or -1 on overflow. */
static int bt2c_int_load(const void *page, uint32_t *children, IntKey *keys,
                         int max)
{
    const NodeHeader *nh = node_hdr((void *)page);
    int nk = nh->num_keys;
    if (nk > max) return -1;
    for (int i = 0; i <= nk; i++)
        children[i] = (uint32_t)internal_read_child(page, i);
    for (int i = 0; i < nk; i++) {
        const char *k; int kl;
        internal_read_key(page, i, &k, &kl);
        keys[i].klen = (uint8_t)kl;
        memcpy(keys[i].key, k, kl);
    }
    return nk;
}

static int bt2c_int_bytes(const IntKey *keys, int nk)
{
    int b = 4 * (nk + 1);
    for (int i = 0; i < nk; i++) b += 1 + keys[i].klen;
    return b;
}

static void bt2c_int_store(uint32_t page_no, const uint32_t *children,
                           const IntKey *keys, int nk)
{
    char page[EVO_PAGE_SIZE];
    memset(page, 0, EVO_PAGE_SIZE);
    PageHeader *ph = (PageHeader *)page;
    ph->page_type = PAGE_BTREE_INT;
    ph->page_id   = page_no;
    node_hdr(page)->num_keys = (uint16_t)nk;
    uint8_t *data = (uint8_t *)page + NODE_DATA_OFF;
    int pos = 0;
    for (int i = 0; i < nk; i++) {
        memcpy(data + pos, &children[i], 4); pos += 4;
        data[pos] = keys[i].klen; pos++;
        memcpy(data + pos, keys[i].key, keys[i].klen); pos += keys[i].klen;
    }
    memcpy(data + pos, &children[nk], 4);
    pgm_write_page(page_no, page);
}

/* Drop separator key `sep` and child pointer `right` from a parent's in-memory
 * arrays after the right sibling was merged away. Centralizes the delicate
 * index shuffling shared by the leaf and internal merge paths. */
static void bt2c_parent_drop(uint32_t *children, IntKey *keys, int *nkp,
                             int sep, int right)
{
    int nk = *nkp;
    for (int j = sep; j < nk - 1; j++) keys[j] = keys[j + 1];
    for (int j = right; j < nk; j++)   children[j] = children[j + 1];
    *nkp = nk - 1;
}

/* Rebalance the underflowing child at parent index `ci`, using an adjacent
 * sibling. Operates on the parent's in-memory children/keys/nkp arrays
 * and performs page I/O on the two siblings (merge frees one page).
 * Returns the next parent child-index to process, or -1 on error. */
static int bt2c_rebalance(uint32_t *children, IntKey *keys, int *nkp, int ci)
{
    int nk = *nkp;
    int left, right;
    if (ci > 0) { left = ci - 1; right = ci; }
    else        { left = ci;     right = ci + 1; }
    if (right > nk) return ci + 1;   /* no sibling available */
    int sep = left;                  /* parent separator between left & right */
    uint32_t lp = children[left], rp = children[right];

    char lpage[EVO_PAGE_SIZE], rpage[EVO_PAGE_SIZE];
    pgm_read_page(lp, lpage);
    pgm_read_page(rp, rpage);
    int is_leaf = (node_type(lpage) == PAGE_BTREE_LEAF);

    if (is_leaf) {
        LeafSlot *L = malloc(sizeof(LeafSlot) * (size_t)(BT2_MAX_SLOTS * 2));
        LeafSlot *R = malloc(sizeof(LeafSlot) * (size_t)BT2_MAX_SLOTS);
        if (!L || !R) { free(L); free(R); return -1; }
        int nL = bt2c_leaf_load(lpage, L, BT2_MAX_SLOTS * 2, 0);
        int nR = bt2c_leaf_load(rpage, R, BT2_MAX_SLOTS, 0);
        uint32_t Lprev = ((PageHeader *)lpage)->prev_page;
        uint32_t Rnext = ((PageHeader *)rpage)->next_page;
        if (nL < 0 || nR < 0) { free(L); free(R); return -1; }

        if (bt2c_leaf_bytes(L, nL) + bt2c_leaf_bytes(R, nR) <= NODE_CAPACITY) {
            /* MERGE right into left */
            for (int j = 0; j < nR; j++) L[nL++] = R[j];
            bt2c_leaf_store(lp, Lprev, Rnext, L, nL);
            if (Rnext != 0) {
                char nb[EVO_PAGE_SIZE];
                pgm_read_page(Rnext, nb);
                ((PageHeader *)nb)->prev_page = lp;
                pgm_write_page(Rnext, nb);
            }
            pgm_free_page(rp);
            bt2c_parent_drop(children, keys, nkp, sep, right);
            free(L); free(R);
            return (ci > 0) ? ci : ci + 1;
        }
        /* BORROW — combined exceeds a page, so both stay non-empty */
        if (ci > 0) {                 /* right (ci) underflows: pull from left */
            while (bt2c_leaf_bytes(R, nR) < BT2_MIN_FILL && nL > 1) {
                for (int j = nR; j > 0; j--) R[j] = R[j - 1];
                R[0] = L[nL - 1];
                nR++; nL--;
                if (bt2c_leaf_bytes(L, nL) < BT2_MIN_FILL) break;
            }
        } else {                      /* left (ci) underflows: pull from right */
            while (bt2c_leaf_bytes(L, nL) < BT2_MIN_FILL && nR > 1) {
                L[nL++] = R[0];
                for (int j = 0; j < nR - 1; j++) R[j] = R[j + 1];
                nR--;
                if (bt2c_leaf_bytes(R, nR) < BT2_MIN_FILL) break;
            }
        }
        bt2c_leaf_store(lp, Lprev, rp, L, nL);   /* L.next = rp */
        bt2c_leaf_store(rp, lp, Rnext, R, nR);   /* R.prev = lp */
        keys[sep].klen = R[0].klen;              /* separator = first key of R */
        memcpy(keys[sep].key, R[0].key, R[0].klen);
        free(L); free(R);
        return ci + 1;
    }

    /* INTERNAL siblings */
    uint32_t *Lc = malloc(sizeof(uint32_t) * (size_t)(BT2_MAX_SLOTS * 2 + 2));
    IntKey   *Lk = malloc(sizeof(IntKey)   * (size_t)(BT2_MAX_SLOTS * 2 + 1));
    uint32_t *Rc = malloc(sizeof(uint32_t) * (size_t)(BT2_MAX_SLOTS + 1));
    IntKey   *Rk = malloc(sizeof(IntKey)   * (size_t)BT2_MAX_SLOTS);
    if (!Lc || !Lk || !Rc || !Rk) { free(Lc); free(Lk); free(Rc); free(Rk); return -1; }
    int nL = bt2c_int_load(lpage, Lc, Lk, BT2_MAX_SLOTS * 2);
    int nR = bt2c_int_load(rpage, Rc, Rk, BT2_MAX_SLOTS);
    if (nL < 0 || nR < 0) { free(Lc); free(Lk); free(Rc); free(Rk); return -1; }

    /* Merged size: children (nL+1)+(nR+1), keys = Lk + sep + Rk */
    int merged_keys = nL + 1 + nR;
    int mb = 4 * (merged_keys + 1);
    for (int j = 0; j < nL; j++) mb += 1 + Lk[j].klen;
    mb += 1 + keys[sep].klen;
    for (int j = 0; j < nR; j++) mb += 1 + Rk[j].klen;

    if (mb <= NODE_CAPACITY) {
        /* MERGE: pull the parent separator down between the two child sets */
        Lk[nL] = keys[sep];
        for (int j = 0; j < nR; j++)  Lk[nL + 1 + j] = Rk[j];
        for (int j = 0; j <= nR; j++) Lc[nL + 1 + j] = Rc[j];
        bt2c_int_store(lp, Lc, Lk, merged_keys);
        pgm_free_page(rp);
        bt2c_parent_drop(children, keys, nkp, sep, right);
        free(Lc); free(Lk); free(Rc); free(Rk);
        return (ci > 0) ? ci : ci + 1;
    }
    /* BORROW — rotate one child+key through the parent separator */
    if (ci > 0) {                 /* right (ci) underflows: rotate from left */
        for (int j = nR; j > 0; j--)      Rk[j] = Rk[j - 1];
        for (int j = nR + 1; j > 0; j--)  Rc[j] = Rc[j - 1];
        Rk[0] = keys[sep];
        Rc[0] = Lc[nL];
        nR++;
        keys[sep] = Lk[nL - 1];
        nL--;
    } else {                      /* left (ci) underflows: rotate from right */
        Lk[nL] = keys[sep];
        Lc[nL + 1] = Rc[0];
        nL++;
        keys[sep] = Rk[0];
        for (int j = 0; j < nR - 1; j++) Rk[j] = Rk[j + 1];
        for (int j = 0; j < nR; j++)     Rc[j] = Rc[j + 1];
        nR--;
    }
    bt2c_int_store(lp, Lc, Lk, nL);
    bt2c_int_store(rp, Rc, Rk, nR);
    free(Lc); free(Lk); free(Rc); free(Rk);
    return ci + 1;
}

/* Recursively compact a subtree. Sets *out_uf if this (non-root) node ends up
 * below min-fill, so the parent can rebalance it. Returns 0 / -1. */
static int bt2c_compact_rec(uint32_t page_no, int *out_uf, int is_root)
{
    char page[EVO_PAGE_SIZE];
    pgm_read_page(page_no, page);

    if (node_type(page) == PAGE_BTREE_LEAF) {
        uint32_t prev = ((PageHeader *)page)->prev_page;
        uint32_t next = ((PageHeader *)page)->next_page;
        LeafSlot *s = malloc(sizeof(LeafSlot) * (size_t)BT2_MAX_SLOTS);
        if (!s) return -1;
        int n = bt2c_leaf_load(page, s, BT2_MAX_SLOTS, 1);
        if (n < 0) { free(s); return -1; }
        bt2c_leaf_store(page_no, prev, next, s, n);
        int bytes = bt2c_leaf_bytes(s, n);
        free(s);
        if (out_uf) *out_uf = (!is_root) && (bytes < BT2_MIN_FILL);
        return 0;
    }

    uint32_t *children = malloc(sizeof(uint32_t) * (size_t)(BT2_MAX_SLOTS + 1));
    IntKey   *keys     = malloc(sizeof(IntKey)   * (size_t)BT2_MAX_SLOTS);
    if (!children || !keys) { free(children); free(keys); return -1; }
    int nk = bt2c_int_load(page, children, keys, BT2_MAX_SLOTS);
    if (nk < 0) { free(children); free(keys); return -1; }

    int i = 0;
    while (i <= nk) {            /* children are indices 0..nk */
        int cu = 0;
        if (bt2c_compact_rec(children[i], &cu, 0) != 0) {
            free(children); free(keys); return -1;
        }
        if (cu && nk > 0) {     /* more than one child (children == nk + 1) */
            int ni = bt2c_rebalance(children, keys, &nk, i);
            if (ni < 0) { free(children); free(keys); return -1; }
            i = ni;
        } else {
            i++;
        }
    }

    bt2c_int_store(page_no, children, keys, nk);
    int bytes = bt2c_int_bytes(keys, nk);
    if (out_uf) *out_uf = (!is_root) && (bytes < BT2_MIN_FILL);
    free(children); free(keys);
    return 0;
}

int bt2_compact(BTree2 *tree)
{
    if (!tree || tree->root_page == 0) return -1;

    char page[EVO_PAGE_SIZE];
    pgm_read_page(tree->root_page, page);

    if (node_type(page) == PAGE_BTREE_LEAF) {
        /* Single-leaf tree: compact tombstones in place, never freed. */
        int uf = 0;
        return bt2c_compact_rec(tree->root_page, &uf, 1);
    }

    if (bt2c_compact_rec(tree->root_page, NULL, 1) != 0) return -1;

    /* Collapse a chain of single-child roots. */
    for (;;) {
        pgm_read_page(tree->root_page, page);
        if (node_type(page) != PAGE_BTREE_INT) break;
        if (node_hdr(page)->num_keys > 0) break;
        uint32_t only = (uint32_t)internal_read_child(page, 0);
        if (only == 0) break;
        uint32_t old_root = tree->root_page;
        tree->root_page = only;
        pgm_free_page(old_root);
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  bt2_stats — compute tree depth, leaf page count, entry count
 * ---------------------------------------------------------------- */
int bt2_stats(BTree2 *tree, BTree2Stats *out)
{
    if (!tree || tree->root_page == 0 || !out) return -1;
    memset(out, 0, sizeof(*out));

    char page[EVO_PAGE_SIZE];
    uint32_t page_no = tree->root_page;

    /* Phase 1: descend child[0] to find depth and leftmost leaf */
    pgm_read_page(page_no, page);
    int depth = 1;
    while (node_type(page) == PAGE_BTREE_INT) {
        uint32_t child = (uint32_t)internal_read_child(page, 0);
        if (child == 0) break;
        page_no = child;
        pgm_read_page(page_no, page);
        depth++;
    }
    out->depth = depth;
    uint32_t leftmost_leaf = page_no;

    /* Phase 2: walk leaf chain, count pages and active entries */
    uint32_t leaf_count = 0;
    uint64_t total_entries = 0;
    page_no = leftmost_leaf;

    while (page_no != 0) {
        pgm_read_page(page_no, page);
        NodeHeader *nh = node_hdr(page);
        leaf_count++;

        int pos = 0;
        for (int i = 0; i < nh->num_keys; i++) {
            RowID rid;
            int consumed = leaf_read_entry(page, pos, NULL, NULL, &rid);
            if (rid.page_no != 0 || rid.slot_idx != 0)
                total_entries++;
            pos += consumed;
        }

        page_no = ((PageHeader *)page)->next_page;
    }

    out->leaf_pages = leaf_count;
    out->total_entries = total_entries;
    out->avg_entries_per_leaf = leaf_count > 0
        ? (double)total_entries / (double)leaf_count : 0.0;

    return 0;
}
