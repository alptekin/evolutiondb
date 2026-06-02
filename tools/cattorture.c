/* cattorture — reproduce the CAT_SYS_COLUMNS leaf-loss in a clean DB.
 * Creates many 6-column tables (like memory-store backing tables) and, after
 * each create, scans every previously-created table to see if its columns
 * are still reachable via cat_find_columns. Reports the first loss and which
 * table_id range vanished — pinpointing the split that orphans leaves. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "page_mgr.h"
#include "catalog_internal.h"

int  cdc_dispatch_page_xid(unsigned p, unsigned x) { (void)p; (void)x; return 0; }
int  cdc_has_subscribers(void) { return 0; }
int  dist_get_num_nodes(void) { return 0; }
int  dist_is_enabled(void) { return 0; }
unsigned int g_dist_create_node_id = 0;
void repl_notify_new_wal(unsigned long lsn) { (void)lsn; }
int  xa_cleanup_orphans(void) { return 0; }
int  xa_list_prepared(void *a, int b) { (void)a; (void)b; return 0; }
char g_parse_lock[256];

static void mkcols(ColumnDesc *c)
{
    memset(c, 0, sizeof(ColumnDesc) * 6);
    snprintf(c[0].col_name, 64, "mem_namespace"); c[0].type_code=130255; c[0].is_not_null=1; c[0].col_ordinal=0;
    snprintf(c[1].col_name, 64, "mem_key");       c[1].type_code=130255; c[1].is_not_null=1; c[1].col_ordinal=1;
    snprintf(c[2].col_name, 64, "pk");            c[2].type_code=130512; c[2].is_not_null=1; c[2].is_pk=1; c[2].col_ordinal=2;
    snprintf(c[3].col_name, 64, "mem_value");     c[3].type_code=230000; c[3].col_ordinal=3;
    snprintf(c[4].col_name, 64, "created_at");    c[4].type_code=100003; c[4].col_ordinal=4;
    snprintf(c[5].col_name, 64, "ttl_at");        c[5].type_code=100003; c[5].col_ordinal=5;
}

int main(int argc, char **argv)
{
    const char *path = argc > 1 ? argv[1] : "/tmp/evo_diag/torture.db";
    int N = argc > 2 ? atoi(argv[2]) : 1300;
    remove(path);
    if (pgm_init(path) != 0) { fprintf(stderr, "pgm_init failed\n"); return 1; }
    cat_init();

    uint32_t *ids = calloc(N + 1, sizeof(uint32_t));
    int created = 0;
    int first_loss_at = -1;

    ColumnDesc cols[6];
    for (int i = 1; i <= N; i++) {
        mkcols(cols);
        char name[64];
        snprintf(name, sizeof(name), "tort_%d", i);
        int rc = cat_create_table(1, name, cols, 6, 0, -1, 0, 1, 0, 0);
        if (rc < 0) { printf("create %d failed rc=%d\n", i, rc); break; }
        ids[created++] = (uint32_t)rc;

        /* integrity scan: any previously-created table now missing columns? */
        int losses = 0; int first_lost_id = -1;
        ColumnDesc tmp[8];
        for (int j = 0; j < created; j++) {
            int nc = cat_find_columns(ids[j], tmp, 8);
            if (nc != 6) { losses++; if (first_lost_id < 0) first_lost_id = (int)ids[j]; }
        }
        if (losses && first_loss_at < 0) {
            first_loss_at = i;
            printf(">>> FIRST LOSS after creating table #%d (tid=%u, '%s'): "
                   "%d prior tables lost columns; first lost tid=%d\n",
                   i, (uint32_t)rc, name, losses, first_lost_id);
        }
        if (losses && (i % 100 == 0 || i == N)) {
            printf("    after #%d: %d tables with broken columns\n", i, losses);
        }
    }

    /* final tally */
    int broken = 0, fineN = 0, run0 = -1, prev = -2;
    printf("\n== final integrity (created %d tables) ==\n", created);
    for (int j = 0; j < created; j++) {
        ColumnDesc tmp[8];
        int nc = cat_find_columns(ids[j], tmp, 8);
        int tid = (int)ids[j];
        if (nc != 6) {
            broken++;
            if (run0 < 0) run0 = tid; prev = tid;
        } else {
            fineN++;
            if (run0 >= 0) { printf("  LOST tid %d..%d\n", run0, prev); run0 = -1; }
        }
    }
    if (run0 >= 0) printf("  LOST tid %d..%d\n", run0, prev);
    printf("  OK=%d  BROKEN=%d\n", fineN, broken);
    free(ids);
    return 0;
}
