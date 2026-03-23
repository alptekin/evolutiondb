#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "mvcc.h"
#include "tuple_format.h"
#include "vmap.h"

/*
 * RECLAIM TABLE <name> — Dead Tuple Cleanup + Heap Page Defragmentation
 *
 * Phase 0: Remove dead MVCC tuples (committed deletes/updates past horizon,
 *          aborted inserts) — cleans PK tree, secondary indexes, and slots
 * Phase 1: Walk heap page chain, compact each page internally (slot_compact)
 * Phase 2: Merge records from sparse pages into fuller pages
 * Phase 3: Free completely empty pages from the chain
 * Phase 4: Update PK B+ tree RowIDs when records move between pages
 * Phase 5: Update secondary index RowIDs as well
 * Phase 6: Report statistics
 */

/* Check if auto-RECLAIM should run for a table.
 * Returns 1 if dead_tuple_count / row_count > 20% threshold. */
int should_auto_reclaim(uint32_t table_id)
{
    TableStatsDesc ts;
    if (cat_get_table_stats(table_id, &ts) < 0)
        return 0;
    if (ts.row_count == 0) return 0;
    /* Threshold: 20% dead tuples */
    return (ts.dead_tuple_count * 100 / ts.row_count) > 20;
}

/* Collect all heap page numbers into an array.
 * Returns count of pages found. */
static int collect_heap_pages(const TableDesc *td,
                              uint32_t *pages, int maxPages)
{
    int count = 0;
    uint32_t page = td->heap_page;
    char page_buf[EVO_PAGE_SIZE];

    while (page != 0 && count < maxPages) {
        pages[count++] = page;
        pgm_read_page(page, page_buf);
        PageHeader *hdr = (PageHeader *)page_buf;
        page = hdr->next_page;
    }
    return count;
}

/* Move all live records from src_page into dst_page.
 * For each moved record, updates the PK B+ tree with the new RowID.
 * Returns number of records moved. */
static int move_records(uint32_t src_page_no, char *src_buf,
                        uint32_t dst_page_no, char *dst_buf,
                        BTree2 *pk_tree,
                        const ColumnDesc *cols, int ncols)
{
    SlottedHeader *src_sh = (SlottedHeader *)((char *)src_buf + PAGE_HEADER_SIZE);
    int moved = 0;

    for (uint16_t i = 0; i < src_sh->num_slots; i++) {
        SlotEntry *se = (SlotEntry *)((char *)src_buf + PAGE_HEADER_SIZE +
                         SLOTTED_HEADER_SIZE + i * SLOT_ENTRY_SIZE);
        if (se->offset == 0) continue; /* deleted slot */

        /* Read the record */
        char rec[RECORD_BUF_SIZE];
        int rec_len = slot_read(src_buf, i, rec, sizeof(rec));
        if (rec_len <= 0) continue;

        /* Try to insert into destination page */
        int dst_slot = slot_insert(dst_buf, rec, (uint16_t)rec_len);
        if (dst_slot < 0) break; /* destination full */

        /* Build PK key to update B+ tree */
        char pkKey[1024];
        if (tapi_build_pk_key(cols, ncols, rec, rec_len, pkKey, sizeof(pkKey)) == 0 &&
            pkKey[0] != '\0') {
            RowID newRid = {dst_page_no, (uint16_t)dst_slot};
            bt2_update(pk_tree, pkKey, newRid);
        }

        /* Delete from source */
        slot_delete(src_buf, i);
        moved++;
    }

    return moved;
}

int ReclaimTableProcess(void)
{
    /* Resolve table */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(g_drop.tblName, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table not found");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        TruncateDrop();
        return -1;
    }

    if (td.heap_page == 0) {
        printf("RECLAIM: table is empty, nothing to do\n");
        TruncateDrop();
        return 0;
    }

    /* ================================================================
     * Phase 0: Dead MVCC Tuple Removal + XID Freeze
     *
     * Walk all heap pages and:
     *   (a) Remove dead tuples (committed deletes past horizon, aborted inserts)
     *   (b) Freeze old committed xmin values to XID_FROZEN to prevent
     *       XID wraparound — tuples with xmin older than freeze_cutoff
     *       get their xmin replaced with XID_FROZEN (1).
     * ================================================================ */
    int dead_count = 0;
    int freeze_count = 0;
    uint32_t oldest_unfrozen = UINT32_MAX;  /* track per-table frozen_xid */
    {
        uint32_t xmin_horizon = mvcc_get_oldest_active();

        /* Prepare column name array for secondary index key building */
        char colNames[64][128];
        for (int i = 0; i < ncols && i < 64; i++) {
            strncpy(colNames[i], cols[i].col_name, 127);
            colNames[i][127] = '\0';
        }

        /* Load secondary indexes once */
        IndexDesc secIdx[16];
        int nIdx = idx_load_secondary(g_drop.tblName, secIdx, 16);

        BTree2 pk_tree_p0 = tapi_pk_tree(&td);

        /* Walk heap page chain */
        uint32_t page_no = td.heap_page;
        char page_buf[EVO_PAGE_SIZE];

        while (page_no != 0) {
            pgm_read_page(page_no, page_buf);
            PageHeader *hdr = (PageHeader *)page_buf;
            uint32_t next_page = hdr->next_page;

            SlottedHeader *sh = (SlottedHeader *)((char *)page_buf + PAGE_HEADER_SIZE);
            int page_modified = 0;

            for (uint16_t si = 0; si < sh->num_slots; si++) {
                SlotEntry *se = (SlotEntry *)((char *)page_buf + PAGE_HEADER_SIZE +
                                 SLOTTED_HEADER_SIZE + si * SLOT_ENTRY_SIZE);
                if (se->offset == 0) continue; /* already deleted slot */

                /* Read the record from the slot */
                char rec[RECORD_BUF_SIZE];
                int rec_len = slot_read(page_buf, si, rec, sizeof(rec));
                if (rec_len <= 0) continue;

                /* Only process MVCC tuples */
                if (!tup_has_mvcc(rec, rec_len)) continue;

                uint32_t xmin = tup_get_xmin(rec, rec_len);
                uint32_t xmax = tup_get_xmax(rec, rec_len);

                int is_dead = 0;

                /* Dead by aborted INSERT: inserting TX rolled back */
                if (clog_is_aborted(xmin)) {
                    is_dead = 1;
                }
                /* Dead by crashed INSERT: xmin is IN_PROGRESS from a
                 * previous server session (crashed TX never committed) */
                else if (mvcc_xid_is_crashed(xmin)) {
                    is_dead = 1;
                }
                /* Dead by committed DELETE/UPDATE: xmax set, committed, and
                 * older than all active transactions */
                else if (xmax != 0 && clog_is_committed(xmax) &&
                         xmax < xmin_horizon) {
                    is_dead = 1;
                }

                if (!is_dead) {
                    /* ---- XID Freeze pass ----
                     * For live tuples with committed xmin older than the
                     * freeze cutoff, replace xmin with XID_FROZEN so the
                     * original XID can be recycled without wraparound risk. */
                    if (xmin != XID_FROZEN && xmin >= XID_NORMAL_MIN &&
                        clog_is_committed(xmin) && xmax == 0) {
                        uint32_t current_xid = xmin_horizon < UINT32_MAX
                                                ? xmin_horizon : pgm_peek_xid();
                        if (current_xid > XID_FREEZE_AGE &&
                            xmin < (current_xid - XID_FREEZE_AGE)) {
                            /* Freeze this tuple's xmin in-place on the page */
                            char *slot_rec = page_buf + se->offset;
                            int slot_len = se->length;
                            if (tup_has_mvcc(slot_rec, slot_len)) {
                                tup_freeze_xmin(slot_rec, slot_len);
                                page_modified = 1;
                                freeze_count++;
                            }
                        } else {
                            /* Track oldest non-frozen xmin for frozen_xid */
                            if (xmin < oldest_unfrozen)
                                oldest_unfrozen = xmin;
                        }
                    } else if (xmin != XID_FROZEN && xmin >= XID_NORMAL_MIN) {
                        if (xmin < oldest_unfrozen)
                            oldest_unfrozen = xmin;
                    }
                    continue;
                }

                /* Extract fields for PK key and secondary index cleanup */
                char fields[64][256];
                int isNull[64];
                int nf = tup_extract_fields(rec, rec_len, cols, ncols,
                                            fields, isNull, 64);
                if (nf < 0) continue;

                /* Build PK key */
                char pkKey[1024];
                if (tapi_build_pk_key(cols, ncols, rec, rec_len,
                                      pkKey, sizeof(pkKey)) == 0 && pkKey[0]) {
                    /* Only delete PK entry if it still points to THIS dead slot.
                     * Non-destructive UPDATE leaves old versions on heap with the
                     * same PK key — the PK tree now points to the newer version,
                     * so we must NOT delete it. */
                    RowID pk_rid;
                    RowID dead_rid = { page_no, si };
                    if (bt2_search(&pk_tree_p0, pkKey, &pk_rid) == 0 &&
                        pk_rid.page_no == dead_rid.page_no &&
                        pk_rid.slot_idx == dead_rid.slot_idx) {
                        bt2_delete(&pk_tree_p0, pkKey);
                    }
                }

                /* Delete from secondary indexes */
                for (int ix = 0; ix < nIdx; ix++) {
                    char idxKey[512];
                    if (idx_build_key(&secIdx[ix],
                            (const char (*)[128])colNames, ncols,
                            (const char (*)[256])fields,
                            idxKey, sizeof(idxKey)) && idxKey[0]) {
                        char idxPath[1024];
                        snprintf(idxPath, sizeof(idxPath), "%u:%s:%u:%c",
                                 secIdx[ix].table_id, secIdx[ix].index_name,
                                 secIdx[ix].root_page, secIdx[ix].index_type);
                        btree_delete(idxPath, idxKey, pkKey);
                    }
                }

                /* Delete the slot */
                slot_delete(page_buf, si);
                page_modified = 1;
                dead_count++;
            }

            /* Write back if any slots were deleted */
            if (page_modified)
                pgm_write_page(page_no, page_buf);

            page_no = next_page;
        }

        /* Update PK root in case it changed during deletions */
        td.pk_root_page = pk_tree_p0.root_page;
        cat_update_pk_root(td.table_id, td.table_name,
                           td.schema_id, td.pk_root_page);
    }

    /* Phase 1: Collect all heap pages */
    uint32_t pages[1024];
    int numPages = collect_heap_pages(&td, pages, 1024);

    if (numPages <= 0) {
        if (dead_count > 0) {
            printf("RECLAIM: removed %d dead tuples, no heap pages remain\n",
                   dead_count);
        } else {
            printf("RECLAIM: no heap pages found\n");
        }
        TruncateDrop();
        return 0;
    }

    /* Phase 2: Compact each page internally */
    int totalCompacted = 0;
    for (int i = 0; i < numPages; i++) {
        char page_buf[EVO_PAGE_SIZE];
        pgm_read_page(pages[i], page_buf);
        uint16_t freeBefore = slot_free_space(page_buf);
        slot_compact(page_buf);
        uint16_t freeAfter = slot_free_space(page_buf);
        pgm_write_page(pages[i], page_buf);
        if (freeAfter > freeBefore)
            totalCompacted += (freeAfter - freeBefore);
    }

    /* Phase 3: Merge sparse pages — move records from later pages
     * into earlier pages that have space */
    BTree2 pk_tree = tapi_pk_tree(&td);
    int totalMoved = 0;
    int pagesFreed = 0;

    /* Read all page buffers */
    char (*pageBufs)[EVO_PAGE_SIZE] = (char (*)[EVO_PAGE_SIZE])
        malloc(numPages * EVO_PAGE_SIZE);
    if (!pageBufs) {
        printf("RECLAIM: out of memory\n");
        TruncateDrop();
        return -1;
    }

    for (int i = 0; i < numPages; i++)
        pgm_read_page(pages[i], pageBufs[i]);

    /* Try to move records from tail pages into head pages */
    for (int src = numPages - 1; src > 0; src--) {
        uint16_t srcActive = slot_active_count(pageBufs[src]);
        if (srcActive == 0) continue; /* already empty */

        for (int dst = 0; dst < src; dst++) {
            int moved = move_records(pages[src], pageBufs[src],
                                     pages[dst], pageBufs[dst],
                                     &pk_tree, cols, ncols);
            totalMoved += moved;

            /* Check if source is now empty */
            if (slot_active_count(pageBufs[src]) == 0)
                break;
        }
    }

    /* Write all modified pages back */
    for (int i = 0; i < numPages; i++)
        pgm_write_page(pages[i], pageBufs[i]);

    /* Phase 4: Free empty pages and rebuild chain */
    /* Collect non-empty pages in order */
    uint32_t livePages[1024];
    int numLive = 0;
    for (int i = 0; i < numPages; i++) {
        if (slot_active_count(pageBufs[i]) > 0) {
            livePages[numLive++] = pages[i];
        }
    }

    /* Free empty pages */
    for (int i = 0; i < numPages; i++) {
        if (slot_active_count(pageBufs[i]) == 0) {
            pgm_free_page(pages[i]);
            pagesFreed++;
        }
    }

    free(pageBufs);

    /* Rebuild heap chain: head → livePages[0] → livePages[1] → ... → 0 */
    if (numLive == 0) {
        /* All pages freed — table is empty */
        td.heap_page = 0;
    } else {
        td.heap_page = livePages[0];
        for (int i = 0; i < numLive; i++) {
            char page_buf[EVO_PAGE_SIZE];
            pgm_read_page(livePages[i], page_buf);
            PageHeader *hdr = (PageHeader *)page_buf;
            hdr->next_page = (i + 1 < numLive) ? livePages[i + 1] : 0;
            pgm_write_page(livePages[i], page_buf);
        }
    }

    /* VMAP: mark all surviving pages as all-visible (they were just cleaned) */
    for (int i = 0; i < numLive; i++)
        vmap_set_visible(livePages[i]);

    /* Update catalog with new heap_page and pk_root */
    cat_update_heap_page(td.table_id, td.table_name,
                         td.schema_id, td.heap_page);
    td.pk_root_page = pk_tree.root_page;

    /* Reset dead tuple counter and update frozen_xid after RECLAIM */
    {
        TableStatsDesc ts;
        if (cat_get_table_stats(td.table_id, &ts) == 0) {
            ts.dead_tuple_count = 0;
            ts.last_reclaim_xid = mvcc_get_oldest_active();
            if (oldest_unfrozen < UINT32_MAX)
                ts.frozen_xid = oldest_unfrozen;
            else if (freeze_count > 0)
                ts.frozen_xid = 0;  /* all tuples frozen */
            cat_store_table_stats(&ts);
        }
    }

    printf("RECLAIM: %d dead tuples removed, %d tuples frozen, "
           "compacted %d bytes, moved %d records, freed %d pages (%d pages remain)\n",
           dead_count, freeze_count, totalCompacted, totalMoved, pagesFreed, numLive);

    TruncateDrop();
    return 0;
}
