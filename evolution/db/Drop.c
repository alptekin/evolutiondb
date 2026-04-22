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

    /* Task 92 — Feature #63: inheritance dependency check.
     * If this table has children, refuse unless DROP ... CASCADE.
     * With CASCADE, recursively drop each child first (cat_list_children
     * returns only direct descendants). */
    {
        uint32_t children[64];
        int nch = cat_list_children(td.table_id, children, 64);
        if (nch > 0) {
            if (!g_drop.dropCascade) {
                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                         "cannot drop table \"%s\" because other objects depend on it",
                         td.table_name);
                g_err.error = 1;
                EVOSQL_SET_SQLSTATE("2BP01");
                TruncateDrop();
                return -1;
            }
            /* CASCADE: recursively drop children before dropping parent. */
            for (int i = 0; i < nch; i++) {
                TableDesc child_td;
                if (cat_find_table_by_id(children[i], &child_td) < 0) continue;
                char saved_tbl[1024];
                strncpy(saved_tbl, g_drop.tblName, sizeof(saved_tbl) - 1);
                saved_tbl[sizeof(saved_tbl) - 1] = '\0';
                int saved_if = g_drop.ifExists;
                strncpy(g_drop.tblName, child_td.table_name,
                        sizeof(g_drop.tblName) - 1);
                g_drop.tblName[sizeof(g_drop.tblName) - 1] = '\0';
                g_drop.ifExists = 1;   /* tolerate already-dropped races */
                /* dropCascade stays = 1, so grandchildren get dropped too */
                DropTableProcess();
                strncpy(g_drop.tblName, saved_tbl, sizeof(g_drop.tblName) - 1);
                g_drop.tblName[sizeof(g_drop.tblName) - 1] = '\0';
                g_drop.ifExists = saved_if;
                g_drop.dropCascade = 1;  /* re-assert after nested call */
            }
            /* Re-resolve this table — recursion above may have reset g_err */
            if (tapi_resolve(g_drop.tblName, &td, NULL, NULL) < 0) {
                TruncateDrop();
                return 0;   /* already gone via some cascade path */
            }
        }
    }

    /* Check view dependencies — reject if a view references this table */
    {
        DatabaseDesc dbDesc;
        if (cat_find_database(g_currentDatabase, &dbDesc) == 0) {
            SchemaDesc schemas[16];
            int ns = cat_list_schemas(dbDesc.db_id, schemas, 16);
            for (int si = 0; si < ns; si++) {
                ViewDesc views[32];
                int nv = cat_list_views(schemas[si].schema_id, views, 32);
                for (int vi = 0; vi < nv; vi++) {
                    if (strcasestr(views[vi].view_sql, td.table_name)) {
                        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                 "cannot drop table \"%s\": view \"%s\" depends on it",
                                 td.table_name, views[vi].view_name);
                        g_err.error = 1;
                        EVOSQL_SET_SQLSTATE("2BP01");
                        TruncateDrop();
                        return -1;
                    }
                }
            }
        }
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

    /* Task 92: scrub inheritance entry for this child (no-op if it wasn't a child). */
    cat_remove_inheritance(td.table_id);

    printf("command(s) completed successfully!..\n");
    TruncateDrop();

    return 0;
}

/* ----------------------------------------------------------------
 *  TRUNCATE helper: truncate a single table (core logic)
 *  Returns 0 on success, -1 on error (sets g_err).
 * ---------------------------------------------------------------- */
static int truncate_single_table(const char *tblName, int cascade, int continueIdentity)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tblName, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "table \"%s\" does not exist", tblName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    /* FK referential integrity check */
    {
        ConstraintDesc refs[32];
        int nrefs = cat_list_referencing_fks(td.table_id, refs, 32);
        for (int i = 0; i < nrefs; i++) {
            TableDesc ref_td;
            if (cat_find_table_by_id(refs[i].table_id, &ref_td) == 0 &&
                ref_td.table_id != td.table_id) { /* skip self-ref */
                if (ref_td.pk_root_page != 0 && ref_td.heap_page != 0) {
                    TableScanCursor sc;
                    if (tapi_scan_begin(&ref_td, &sc) == 0) {
                        char pk[256], rec[256];
                        if (tapi_scan_next(&sc, pk, rec, sizeof(rec)) == 0) {
                            if (cascade) {
                                /* CASCADE: truncate referencing table first */
                                int rc = truncate_single_table(ref_td.table_name,
                                                                cascade, continueIdentity);
                                if (rc < 0) return rc;
                            } else {
                                snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                                         "cannot truncate table \"%s\": "
                                         "referenced by foreign key from \"%s\"",
                                         tblName, ref_td.table_name);
                                g_err.error = 1;
                                EVOSQL_SET_SQLSTATE("23503");
                                return -1;
                            }
                        }
                    }
                }
            }
        }
    }

    /* Destroy all secondary indexes and recreate empty */
    {
        IndexDesc indexes[32];
        int nIdx = cat_list_indexes(td.table_id, indexes, 32);
        for (int ix = 0; ix < nIdx; ix++) {
            if (indexes[ix].index_type == 'P') continue;
            if (indexes[ix].root_page == 0) continue;

            if (indexes[ix].index_type == 'H' || indexes[ix].index_type == 'V') {
                HashIndex hi = { .dir_page = indexes[ix].root_page };
                hash_idx_destroy(&hi);
                HashIndex new_hi;
                hash_idx_create(&new_hi, 16);
                cat_update_index_root(td.table_id, indexes[ix].index_name,
                                       new_hi.dir_page);
            } else {
                BTree2 idx_tree = { .root_page = indexes[ix].root_page };
                bt2_destroy(&idx_tree);
                BTree2 new_tree = {0};
                bt2_create(&new_tree);
                cat_update_index_root(td.table_id, indexes[ix].index_name,
                                       new_tree.root_page);
            }
        }
    }

    /* Destroy PK B+ tree and recreate empty */
    {
        BTree2 pk_tree = tapi_pk_tree(&td);
        if (pk_tree.root_page != 0)
            bt2_destroy(&pk_tree);
        BTree2 new_pk = {0};
        bt2_create(&new_pk);
        cat_update_pk_root(td.table_id, td.table_name,
                           td.schema_id, new_pk.root_page);
    }

    /* Free all heap pages */
    tapi_free_heap_pages(&td);
    cat_update_heap_page(td.table_id, td.table_name, td.schema_id, 0);

    /* Reset AUTO_INCREMENT (unless CONTINUE IDENTITY) */
    if (td.auto_inc_col >= 0 && !continueIdentity) {
        cat_update_auto_inc(td.table_id, td.table_name,
                            td.schema_id, 0);
    }

    /* Reset table statistics */
    {
        TableStatsDesc ts = {0};
        ts.table_id = td.table_id;
        ts.row_count = 0;
        ts.page_count = 1;
        cat_store_table_stats(&ts);
    }

    return 0;
}

/* Parser helpers */
void TruncateAddTable(const char *name)
{
    int idx = g_drop.truncExtraCount;
    if (idx >= 7) return;
    char resolved[1024];
    db_table_path(name, resolved, sizeof(resolved));
    strncpy(g_drop.truncExtraTables[idx], resolved, 255);
    g_drop.truncExtraTables[idx][255] = '\0';
    g_drop.truncExtraCount++;
}

void TruncateSetCascade(void)
{
    g_drop.truncCascade = 1;
}

void TruncateSetContinueIdentity(void)
{
    g_drop.truncContinueIdentity = 1;
}

/* ----------------------------------------------------------------
 *  TruncateTableProcess — main entry point (supports CASCADE,
 *  CONTINUE IDENTITY, multi-table TRUNCATE)
 * ---------------------------------------------------------------- */
int TruncateTableProcess(void)
{
    int cascade = g_drop.truncCascade;
    int contId  = g_drop.truncContinueIdentity;

    /* Truncate primary table */
    int rc = truncate_single_table(g_drop.tblName, cascade, contId);
    if (rc < 0) {
        TruncateDrop();
        return rc;
    }

    /* Truncate extra tables (multi-table: TRUNCATE TABLE t1, t2, t3) */
    for (int i = 0; i < g_drop.truncExtraCount; i++) {
        rc = truncate_single_table(g_drop.truncExtraTables[i], cascade, contId);
        if (rc < 0) {
            TruncateDrop();
            return rc;
        }
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
    g_drop.truncCascade = 0;
    g_drop.truncContinueIdentity = 0;
    g_drop.truncExtraCount = 0;
    g_drop.dropCascade = 0;         /* Task 92 — Feature #63 */

    return 0;
}
