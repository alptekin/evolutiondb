/*
 * table_api.c — Table Data Operations for EvoSQL Unified Storage
 *
 * Implements heap page management and PK B+ tree helpers.
 * Records stored as binary tuples in slotted pages.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table_api.h"
#include "tuple_format.h"
#include "database.h"
#include "mvcc.h"
#include "vmap.h"

/* ----------------------------------------------------------------
 *  Table resolution
 * ---------------------------------------------------------------- */

void tapi_basename(const char *path, char *out, int out_size)
{
    const char *base = strrchr(path, '/');
    base = base ? base + 1 : path;
    strncpy(out, base, out_size - 1);
    out[out_size - 1] = '\0';
    /* Strip .dat extension if present */
    char *dot = strstr(out, ".dat");
    if (dot) *dot = '\0';
}

int tapi_resolve(const char *name_or_path, TableDesc *td,
                 ColumnDesc *cols, int *ncols)
{
    char name[CAT_MAX_NAME_LEN];
    tapi_basename(name_or_path, name, sizeof(name));

    if (cat_resolve_table(g_currentDatabase, g_currentSchema,
                          name, td) < 0)
        return -1;

    /* GTT override: swap catalog pk/heap with session-private storage */
    if (td->is_temporary == TEMP_GLOBAL && g_gtt_overrides) {
        int found = 0;
        for (int i = 0; i < g_gtt_override_count; i++) {
            if (g_gtt_overrides[i].table_id == td->table_id) {
                td->pk_root_page = g_gtt_overrides[i].pk_root_page;
                td->heap_page = g_gtt_overrides[i].heap_page;
                td->auto_inc_counter = g_gtt_overrides[i].auto_inc_counter;
                found = 1;
                break;
            }
        }
        if (!found) {
            /* Session hasn't touched this GTT yet — empty table */
            td->pk_root_page = 0;
            td->heap_page = 0;
        }
    }

    if (cols && ncols) {
        *ncols = cat_find_columns(td->table_id, cols, CAT_MAX_COLUMNS);
        if (*ncols < 0) return -1;
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  Heap page operations
 * ---------------------------------------------------------------- */

RowID tapi_heap_insert(TableDesc *td, const char *record, uint16_t rec_len)
{
    RowID bad = {0, 0};
    char page_buf[EVO_PAGE_SIZE];

    /* Try current heap page */
    if (td->heap_page != 0) {
        pgm_read_page(td->heap_page, page_buf);
        int slot = slot_insert(page_buf, record, rec_len);
        if (slot >= 0) {
            pgm_write_page(td->heap_page, page_buf);
            RowID rid = {td->heap_page, (uint16_t)slot};
            return rid;
        }
    }

    /* Current page full or no heap page yet — allocate new page */
    uint32_t new_page = pgm_alloc_page(PAGE_DATA);
    if (new_page == 0) return bad;

    slot_page_init(page_buf, new_page);
    int slot = slot_insert(page_buf, record, rec_len);
    if (slot < 0) {
        pgm_free_page(new_page);
        return bad;
    }

    /* Chain: new page's next_page points to old heap_page */
    PageHeader *hdr = (PageHeader *)page_buf;
    hdr->next_page = td->heap_page;

    pgm_write_page(new_page, page_buf);

    /* Update table's heap_page to point to the new page */
    td->heap_page = new_page;
    if (td->is_temporary == TEMP_GLOBAL) {
        /* GTT: update session override, not catalog */
        gtt_update_override(td->table_id, td->pk_root_page,
                            new_page, td->auto_inc_counter);
    } else {
        cat_update_heap_page(td->table_id, td->table_name,
                             td->schema_id, new_page);
    }

    RowID rid = {new_page, (uint16_t)slot};
    return rid;
}

int tapi_heap_read(RowID rid, char *buf, int bufsize)
{
    if (rid.page_no == 0) return -1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    int len = slot_read(page_buf, rid.slot_idx, buf, (uint16_t)bufsize);
    if (len > 0 && len < bufsize)
        buf[len] = '\0';
    return len;
}

int tapi_heap_delete(RowID rid)
{
    if (rid.page_no == 0) return -1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);
    int ret = slot_delete(page_buf, rid.slot_idx);
    if (ret == 0)
        pgm_write_page(rid.page_no, page_buf);
    return ret;
}

/* MVCC soft-delete: set xmax on a heap tuple without physically deleting it.
 * The record stays on the page and the PK tree entry is preserved so that
 * concurrent readers with older snapshots can still find and check visibility.
 * Returns 0 on success, -1 if not an MVCC tuple (caller should fall back
 * to physical delete). */
int tapi_heap_set_xmax(RowID rid, uint32_t xmax)
{
    if (rid.page_no == 0) return -1;

    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(rid.page_no, page_buf);

    char rec[RECORD_BUF_SIZE];
    int rec_len = slot_read(page_buf, rid.slot_idx, rec, sizeof(rec));
    if (rec_len <= 0) return -1;

    if (tup_set_xmax(rec, rec_len, xmax) < 0)
        return -1;  /* not an MVCC tuple */

    /* Write modified record back — tup_set_xmax only touches xmax field,
     * so the record length is unchanged and slot_update will succeed in-place. */
    if (slot_update(page_buf, rid.slot_idx, rec, (uint16_t)rec_len) < 0)
        return -1;

    pgm_write_page(rid.page_no, page_buf);
    return 0;
}

RowID tapi_heap_update(TableDesc *td, RowID old_rid,
                       const char *new_record, uint16_t rec_len)
{
    char page_buf[EVO_PAGE_SIZE];
    pgm_read_page(old_rid.page_no, page_buf);

    /* Try in-place update */
    if (slot_update(page_buf, old_rid.slot_idx, new_record, rec_len) == 0) {
        pgm_write_page(old_rid.page_no, page_buf);
        return old_rid;
    }

    /* Doesn't fit: delete old, insert new */
    slot_delete(page_buf, old_rid.slot_idx);
    pgm_write_page(old_rid.page_no, page_buf);

    return tapi_heap_insert(td, new_record, rec_len);
}

/* ----------------------------------------------------------------
 *  PK key building
 * ---------------------------------------------------------------- */

int tapi_build_pk_key_from_vals(const ColumnDesc *cols, int ncols,
                                char **vals, int nvals,
                                char *key_out, int key_size)
{
    key_out[0] = '\0';
    int first = 1;

    for (int i = 0; i < ncols && i < nvals; i++) {
        if (cols[i].is_pk) {
            if (!first) {
                int len = (int)strlen(key_out);
                if (len < key_size - 1) {
                    key_out[len] = '|';
                    key_out[len + 1] = '\0';
                }
            }
            strncat(key_out, vals[i], key_size - (int)strlen(key_out) - 1);
            first = 0;
        }
    }

    /* If no PK column marked, use first column */
    if (first && nvals > 0) {
        strncpy(key_out, vals[0], key_size - 1);
        key_out[key_size - 1] = '\0';
    }

    return key_out[0] != '\0' ? 0 : -1;
}

int tapi_build_pk_key(const ColumnDesc *cols, int ncols,
                      const char *record, int record_len,
                      char *key_out, int key_size)
{
    char fields[64][256];
    int is_null[64];
    int nf = tup_extract_fields(record, record_len, cols, ncols,
                                fields, is_null, 64);
    if (nf <= 0) return -1;

    return tapi_build_pk_key_from_fields(cols, ncols,
                                          (const char (*)[256])fields, nf,
                                          key_out, key_size);
}

int tapi_build_pk_key_from_fields(const ColumnDesc *cols, int ncols,
                                  const char fields[][256], int nfields,
                                  char *key_out, int key_size)
{
    /* Delegate to _from_vals with pointer adapter array */
    char *ptrs[64];
    int n = nfields < 64 ? nfields : 64;
    for (int i = 0; i < n; i++)
        ptrs[i] = (char *)fields[i];
    return tapi_build_pk_key_from_vals(cols, ncols, ptrs, n,
                                       key_out, key_size);
}

int tapi_get_pk_indices(const ColumnDesc *cols, int ncols,
                        int *indices, int max)
{
    int count = 0;
    for (int i = 0; i < ncols && count < max; i++) {
        if (cols[i].is_pk)
            indices[count++] = i;
    }
    /* If no PK marked, default to column 0 */
    if (count == 0 && ncols > 0 && max > 0) {
        indices[0] = 0;
        count = 1;
    }
    return count;
}

/* ----------------------------------------------------------------
 *  Full table scan
 * ---------------------------------------------------------------- */

int tapi_scan_begin(const TableDesc *td, TableScanCursor *cursor)
{
    cursor->tree = tapi_pk_tree(td);
    return bt2_cursor_first(&cursor->tree, &cursor->bt_cursor);
}

int tapi_scan_next(TableScanCursor *cursor,
                   char *pk_key_out, char *record_out, int rec_out_size)
{
    while (1) {
        RowID rid;
        if (bt2_cursor_next(&cursor->bt_cursor, pk_key_out, &rid) < 0)
            return -1;

        int rec_len = tapi_heap_read(rid, record_out, rec_out_size);
        if (rec_len < 0)
            continue;  /* deleted slot */

        /* Skip invisible MVCC tuples:
         * - Soft-deleted (xmax committed) — row was deleted
         * - Crashed insert (xmin IN_PROGRESS from previous session) */
        if (tup_has_mvcc(record_out, rec_len)) {
            uint32_t xmin = tup_get_xmin(record_out, rec_len);
            uint32_t xmax = tup_get_xmax(record_out, rec_len);
            if (xmax != 0 && clog_is_committed(xmax))
                continue;  /* soft-deleted and committed — skip */
            if (mvcc_xid_is_crashed(xmin))
                continue;  /* crashed insert — skip */
        }

        return 0;
    }
}

/* ----------------------------------------------------------------
 *  MVCC-aware scan
 * ---------------------------------------------------------------- */

int tapi_scan_next_mvcc(TableScanCursor *cursor,
                        char *pk_key_out, char *record_out, int rec_out_size,
                        const Snapshot *snap)
{
    while (1) {
        RowID rid;
        if (bt2_cursor_next(&cursor->bt_cursor, pk_key_out, &rid) < 0)
            return -1;

        int rec_len = tapi_heap_read(rid, record_out, rec_out_size);
        if (rec_len < 0)
            continue;  /* deleted slot — skip */

        /* VMAP fast-skip: if entire page is all-visible, skip per-tuple check */
        if (snap && vmap_is_visible(rid.page_no)) {
            /* All tuples on this page are visible — skip MVCC check */
        } else if (snap && !mvcc_is_visible(record_out, rec_len, snap))
            continue;  /* invisible to this snapshot */

        /* Lazily set hint bit so future reads skip CLOG */
        if (snap && tup_has_mvcc(record_out, rec_len) &&
            !(record_out[TUPLE_PREFIX_SIZE + 3] & TUPLE_FLAG_XMIN_COMMITTED))
            mvcc_set_hint_committed(rid.page_no, rid.slot_idx);

        return 0;
    }
}

/* ----------------------------------------------------------------
 *  Free heap pages
 * ---------------------------------------------------------------- */

void tapi_free_heap_pages(const TableDesc *td)
{
    uint32_t page = td->heap_page;
    char page_buf[EVO_PAGE_SIZE];

    while (page != 0) {
        pgm_read_page(page, page_buf);
        PageHeader *hdr = (PageHeader *)page_buf;
        uint32_t next = hdr->next_page;
        pgm_free_page(page);
        page = next;
    }
}

/* ----------------------------------------------------------------
 *  GTT: Lazy storage initialization + override management
 * ---------------------------------------------------------------- */

int gtt_ensure_storage(TableDesc *td)
{
    if (td->is_temporary != TEMP_GLOBAL || td->pk_root_page != 0)
        return 0;  /* not a GTT or already initialized */

    /* Check for existing entry (e.g., after ON COMMIT DELETE ROWS reset) */
    if (g_gtt_overrides) {
        for (int i = 0; i < g_gtt_override_count; i++) {
            if (g_gtt_overrides[i].table_id == td->table_id) {
                /* Re-initialize existing entry */
                BTree2 pk_tree = {0};
                if (bt2_create(&pk_tree) < 0) return -1;
                td->pk_root_page = pk_tree.root_page;
                g_gtt_overrides[i].pk_root_page = pk_tree.root_page;
                g_gtt_overrides[i].heap_page = 0;
                return 0;
            }
        }
    }

    /* Check capacity before allocating */
    if (!g_gtt_overrides || g_gtt_override_count >= MAX_GTT_PER_SESSION)
        return -1;  /* no room — don't leak pages */

    BTree2 pk_tree = {0};
    if (bt2_create(&pk_tree) < 0)
        return -1;
    td->pk_root_page = pk_tree.root_page;

    int idx = g_gtt_override_count++;
    g_gtt_overrides[idx].table_id = td->table_id;
    g_gtt_overrides[idx].pk_root_page = pk_tree.root_page;
    g_gtt_overrides[idx].heap_page = 0;
    g_gtt_overrides[idx].auto_inc_counter = td->auto_inc_counter;
    g_gtt_overrides[idx].on_commit_delete = td->on_commit_delete;
    return 0;
}

void gtt_update_override(uint32_t table_id, uint32_t pk_root_page,
                         uint32_t heap_page, int auto_inc_counter)
{
    if (!g_gtt_overrides) return;
    for (int i = 0; i < g_gtt_override_count; i++) {
        if (g_gtt_overrides[i].table_id == table_id) {
            g_gtt_overrides[i].pk_root_page = pk_root_page;
            g_gtt_overrides[i].heap_page = heap_page;
            g_gtt_overrides[i].auto_inc_counter = auto_inc_counter;
            return;
        }
    }
}
