#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "hash_idx.h"

int DropTableProcess(void)
{
    /* Resolve table via catalog */
    TableDesc td;
    if (tapi_resolve(g_drop.tblName, &td, NULL, NULL) < 0) {
        if (g_drop.ifExists) {
            /* IF EXISTS — silently succeed when table doesn't exist */
            printf("command(s) completed successfully!..\n");
            TruncateDrop();
            return 0;
        }
        printf("Error: table '%s' not found\n", g_drop.tblName);
        TruncateDrop();
        return -1;
    }

    /* Destroy PK B+ tree */
    BTree2 pk_tree = tapi_pk_tree(&td);
    bt2_destroy(&pk_tree);

    /* Free all heap pages */
    tapi_free_heap_pages(&td);

    /* Destroy secondary index B+ trees */
    {
        IndexDesc indexes[16];
        int nIdx = cat_list_indexes(td.table_id, indexes, 16);
        for (int ix = 0; ix < nIdx; ix++) {
            if (indexes[ix].index_type == 'P') continue; /* PK handled above */
            if (indexes[ix].index_type == 'H' || indexes[ix].index_type == 'V') {
                HashIndex hi = { .dir_page = indexes[ix].root_page };
                hash_idx_destroy(&hi);
            } else {
                BTree2 idx_tree = { .root_page = indexes[ix].root_page };
                bt2_destroy(&idx_tree);
            }
        }
    }

    /* Drop table from catalog (removes table, columns, indexes, constraints) */
    cat_drop_table(td.table_id);

    printf("command(s) completed successfully!..\n");
    TruncateDrop();

    return 0;
}

int TruncateTableProcess(void)
{
    /* Step 1: Resolve table */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(g_drop.tblName, &td, cols, &ncols) < 0) {
        if (g_drop.ifExists) {
            printf("command(s) completed successfully!..\n");
            TruncateDrop();
            return 0;
        }
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", g_drop.tblName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        TruncateDrop();
        return -1;
    }

    /* Step 2: FK referential integrity check — reject if other tables
     * reference this table and have data (RESTRICT semantics). */
    {
        ConstraintDesc refs[32];
        int nrefs = cat_list_referencing_fks(td.table_id, refs, 32);
        for (int i = 0; i < nrefs; i++) {
            /* Check if the referencing table has any rows */
            TableDesc ref_td;
            if (cat_find_table_by_id(refs[i].table_id, &ref_td) == 0 &&
                ref_td.table_id != td.table_id) { /* skip self-ref */
                if (ref_td.pk_root_page != 0 && ref_td.heap_page != 0) {
                    /* Quick check: try to read first row */
                    TableScanCursor sc;
                    if (tapi_scan_begin(&ref_td, &sc) == 0) {
                        char pk[256], rec[256];
                        if (tapi_scan_next(&sc, pk, rec, sizeof(rec)) == 0) {
                            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                     "cannot truncate table \"%s\": referenced by foreign key from \"%s\"",
                                     g_drop.tblName, ref_td.table_name);
                            g_err.error = 1;
                            EVOSQL_SET_SQLSTATE("23503");
                            TruncateDrop();
                            return -1;
                        }
                    }
                }
            }
        }
    }

    /* Step 3: Destroy all secondary indexes and recreate empty */
    {
        IndexDesc indexes[32];
        int nIdx = cat_list_indexes(td.table_id, indexes, 32);
        for (int ix = 0; ix < nIdx; ix++) {
            if (indexes[ix].index_type == 'P') continue; /* PK handled separately */
            if (indexes[ix].root_page == 0) continue;

            /* Destroy old tree */
            if (indexes[ix].index_type == 'H' || indexes[ix].index_type == 'V') {
                HashIndex hi = { .dir_page = indexes[ix].root_page };
                hash_idx_destroy(&hi);
            } else {
                BTree2 idx_tree = { .root_page = indexes[ix].root_page };
                bt2_destroy(&idx_tree);
            }

            /* Create new empty tree */
            if (indexes[ix].index_type == 'H' || indexes[ix].index_type == 'V') {
                HashIndex new_hi;
                hash_idx_create(&new_hi, 16);
                cat_update_index_root(td.table_id, indexes[ix].index_name,
                                       new_hi.dir_page);
            } else {
                BTree2 new_tree = {0};
                bt2_create(&new_tree);
                cat_update_index_root(td.table_id, indexes[ix].index_name,
                                       new_tree.root_page);
            }
        }
    }

    /* Step 4: Destroy PK B+ tree and recreate empty */
    {
        BTree2 pk_tree = tapi_pk_tree(&td);
        if (pk_tree.root_page != 0)
            bt2_destroy(&pk_tree);

        BTree2 new_pk = {0};
        bt2_create(&new_pk);
        cat_update_pk_root(td.table_id, td.table_name,
                           td.schema_id, new_pk.root_page);
    }

    /* Step 5: Free all heap pages — next INSERT will allocate fresh ones */
    tapi_free_heap_pages(&td);
    cat_update_heap_page(td.table_id, td.table_name, td.schema_id, 0);

    /* Step 6: Reset AUTO_INCREMENT counter (0 so next insert gives 1) */
    if (td.auto_inc_col >= 0) {
        cat_update_auto_inc(td.table_id, td.table_name,
                            td.schema_id, 0);
    }

    /* Step 7: Reset table statistics */
    {
        TableStatsDesc ts = {0};
        ts.table_id = td.table_id;
        ts.row_count = 0;
        ts.page_count = 1;
        ts.dead_tuple_count = 0;
        ts.last_reclaim_xid = 0;
        cat_store_table_stats(&ts);
    }

    printf("command(s) completed successfully!..\n");
    TruncateDrop();
    return 0;
}

int GetDropTableName(char *pname)
{
    db_table_path(pname, g_drop.tblName, sizeof(g_drop.tblName));
    return 0;
}

int TruncateDrop(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_drop.tblName[i] = '\0';
    }

    return 0;
}
