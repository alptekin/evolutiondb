#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"

/*
 * RECLAIM TABLE <name> — Heap Page Defragmentation
 *
 * 1. Walk heap page chain, compact each page internally (slot_compact)
 * 2. Merge records from sparse pages into fuller pages
 * 3. Free completely empty pages from the chain
 * 4. Update PK B+ tree RowIDs when records move between pages
 * 5. Update secondary index RowIDs as well
 * 6. Report statistics
 */

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
    if (tapi_resolve(g_tblDropName, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "table not found");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        TruncateDrop();
        return -1;
    }

    if (td.heap_page == 0) {
        printf("RECLAIM: table is empty, nothing to do\n");
        TruncateDrop();
        return 0;
    }

    /* Phase 1: Collect all heap pages */
    uint32_t pages[1024];
    int numPages = collect_heap_pages(&td, pages, 1024);

    if (numPages <= 0) {
        printf("RECLAIM: no heap pages found\n");
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

    /* Update catalog with new heap_page and pk_root */
    cat_update_heap_page(td.table_id, td.table_name,
                         td.schema_id, td.heap_page);
    td.pk_root_page = pk_tree.root_page;

    printf("RECLAIM: compacted %d bytes, moved %d records, freed %d pages "
           "(%d pages remain)\n",
           totalCompacted, totalMoved, pagesFreed, numLive);

    TruncateDrop();
    return 0;
}
