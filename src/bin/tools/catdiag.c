/* catdiag — read-only catalog inspector for the derived-store empty-cols bug.
 * Opens a db file, lists memory stores, and for each prints backing_table_id,
 * cat_find_columns() count, and the table_id resolved by name — to prove
 * whether the broken stores lost their CAT_SYS_COLUMNS entries or got a
 * table_id remap. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "page_mgr.h"
#include "catalog_internal.h"

/* Link stubs: engine .o files reference adaptor-layer symbols on
 * write/replication/dist paths that this read-only inspector never runs. */
int  cdc_dispatch_page_xid(unsigned p, unsigned x) { (void)p; (void)x; return 0; }
int  cdc_has_subscribers(void) { return 0; }
int  dist_get_num_nodes(void) { return 0; }
int  dist_is_enabled(void) { return 0; }
unsigned int g_dist_create_node_id = 0;
void repl_notify_new_wal(unsigned long lsn) { (void)lsn; }
int  xa_cleanup_orphans(void) { return 0; }
int  xa_list_prepared(void *a, int b) { (void)a; (void)b; return 0; }
char g_parse_lock[256];   /* opaque; never locked by the inspector */

int main(int argc, char **argv)
{
    const char *path = argc > 1 ? argv[1] : "/tmp/evo_diag/evosql.db";
    if (pgm_init(path) != 0) { fprintf(stderr, "pgm_init failed\n"); return 1; }
    cat_init();

    MemoryStoreDesc stores[512];
    int n = cat_list_memory_stores(stores, 512);
    printf("== memory stores: %d ==\n", n);
    printf("%-22s %10s %6s %8s %s\n",
           "store", "backing_id", "ncols", "byname", "columns");

    for (int i = 0; i < n; i++) {
        uint32_t tid = stores[i].backing_table_id;
        ColumnDesc cols[64];
        int nc = cat_find_columns(tid, cols, 64);

        /* resolve backing table by name across schemas 1..4 */
        char tbl[300];
        snprintf(tbl, sizeof(tbl), "__mem_%s", stores[i].name);
        int by_tid = -1;
        for (uint32_t sch = 1; sch <= 6; sch++) {
            TableDesc td;
            if (cat_find_table(sch, tbl, &td) == 0) { by_tid = (int)td.table_id; break; }
        }

        /* does a table claim this backing_table_id, and what columns? */
        TableDesc tbid; int has_tbid = (cat_find_table_by_id(tid, &tbid) == 0);

        printf("%-22s %10u %6d %8d  ", stores[i].name, tid, nc, by_tid);
        for (int c = 0; c < nc && c < 8; c++) printf("%s ", cols[c].col_name);
        if (has_tbid) printf(" [tbid_name=%s td.num_columns=%d ncols@tbid=%d]",
                             tbid.table_name, tbid.num_columns,
                             cat_find_columns(tbid.table_id, cols, 64));
        else printf(" [no table @ backing_id]");
        printf("\n");
    }

    /* Map the damage: for every table_id, does CAT_SYS_TABLES have a record
     * (num_columns) and does CAT_SYS_COLUMNS still return its columns?
     * Lists the table_ids where the table exists but columns are gone. */
    printf("\n== table_id scan: exists-but-no-columns ==\n");
    int lost = 0, ok = 0;
    int run_start = -1, prev = -2;
    for (uint32_t t = 1; t <= 1300; t++) {
        TableDesc td;
        if (cat_find_table_by_id(t, &td) != 0) continue;   /* no such table */
        ColumnDesc c[64];
        int nc = cat_find_columns(t, c, 64);
        if (nc == 0 && td.num_columns > 0) {
            lost++;
            if (run_start < 0) run_start = (int)t;
            prev = (int)t;
        } else {
            ok++;
            if (run_start >= 0) {
                printf("  LOST cols: tid %d..%d  (e.g. %s, num_columns=%d)\n",
                       run_start, prev, td.table_name, td.num_columns);
                run_start = -1;
            }
        }
    }
    if (run_start >= 0)
        printf("  LOST cols: tid %d..%d\n", run_start, prev);
    printf("  total tables with columns OK=%d, columns LOST=%d\n", ok, lost);
    return 0;
}
