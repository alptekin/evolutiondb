/* catrepair — restore lost CAT_SYS_COLUMNS entries for memory-store backing
 * tables. A crash + WAL-replay cycle dropped the columns-tree leaf pages for
 * a contiguous range of table_ids while leaving the table record
 * (num_columns) and the heap tuples (well-formed, num_cols=N) intact. Because
 * every memory store's backing table has a deterministic schema, we can
 * reconstruct the exact columns (in their original ordinals/types) so the
 * existing rows decode again — no data rebuild needed.
 *
 * Usage:  catrepair <db_path> [apply]
 *   default = dry run (report only); "apply" = write + checkpoint.
 *
 * Schema (must mirror Memory.c create_backing_table):
 *   0 mem_namespace VARCHAR(255) 130255 NOT NULL
 *   1 mem_key       VARCHAR(255) 130255 NOT NULL
 *   2 pk            VARCHAR(512) 130512 NOT NULL PK
 *   3 mem_value     JSON         230000
 *  [4 embedding     VECTOR(dim)  260000+dim]   -- only if embedding_dim > 0
 *   . created_at    TIMESTAMP    100003
 *   . ttl_at        TIMESTAMP    100003
 */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "page_mgr.h"
#include "catalog_internal.h"

/* Adaptor-layer link stubs (write/replication/dist paths unused here). */
int  cdc_dispatch_page_xid(unsigned p, unsigned x) { (void)p; (void)x; return 0; }
int  cdc_has_subscribers(void) { return 0; }
int  dist_get_num_nodes(void) { return 0; }
int  dist_is_enabled(void) { return 0; }
unsigned int g_dist_create_node_id = 0;
void repl_notify_new_wal(unsigned long lsn) { (void)lsn; }
int  xa_cleanup_orphans(void) { return 0; }
int  xa_list_prepared(void *a, int b) { (void)a; (void)b; return 0; }
char g_parse_lock[256];

static void add_col(uint32_t tid, int ord, const char *name,
                    int type_code, int not_null, int is_pk, int apply)
{
    ColumnDesc c;
    memset(&c, 0, sizeof(c));
    snprintf(c.col_name, sizeof(c.col_name), "%s", name);
    c.type_code   = type_code;
    c.is_not_null = not_null;
    c.is_pk       = is_pk;
    c.col_ordinal = ord;
    if (apply) cat_add_column(tid, &c);
    printf("      + ord %d %-14s type=%d%s%s\n", ord, name, type_code,
           not_null ? " NOT NULL" : "", is_pk ? " PK" : "");
}

static int rebuild_columns(uint32_t tid, int embedding_dim, int apply)
{
    int ord = 0;
    add_col(tid, ord++, "mem_namespace", 130255, 1, 0, apply);
    add_col(tid, ord++, "mem_key",       130255, 1, 0, apply);
    add_col(tid, ord++, "pk",            130512, 1, 1, apply);
    add_col(tid, ord++, "mem_value",     230000, 0, 0, apply);
    if (embedding_dim > 0)
        add_col(tid, ord++, "embedding", 260000 + embedding_dim, 0, 0, apply);
    add_col(tid, ord++, "created_at",    100003, 0, 0, apply);
    add_col(tid, ord++, "ttl_at",        100003, 0, 0, apply);
    return ord;
}

int main(int argc, char **argv)
{
    if (argc < 2) { fprintf(stderr, "usage: catrepair <db> [apply]\n"); return 2; }
    const char *path = argv[1];
    int apply = (argc > 2 && strcmp(argv[2], "apply") == 0);

    if (pgm_init(path) != 0) { fprintf(stderr, "pgm_init failed\n"); return 1; }
    cat_init();

    MemoryStoreDesc stores[512];
    int n = cat_list_memory_stores(stores, 512);
    printf("== catrepair %s (%s) — %d memory stores ==\n",
           path, apply ? "APPLY" : "dry-run", n);

    int repaired = 0, skipped = 0;
    for (int i = 0; i < n; i++) {
        uint32_t tid = stores[i].backing_table_id;
        ColumnDesc c[64];
        int nc = cat_find_columns(tid, c, 64);
        if (nc > 0) { continue; }   /* healthy */

        TableDesc td;
        if (cat_find_table_by_id(tid, &td) != 0) {
            printf("  SKIP %s: no table record for backing_id %u\n",
                   stores[i].name, tid);
            skipped++;
            continue;
        }
        int want = stores[i].embedding_dim > 0 ? 7 : 6;
        if (td.num_columns != want) {
            printf("  SKIP %s (tid %u): num_columns=%d != expected %d "
                   "(emb_dim=%d) — not auto-repairing\n",
                   stores[i].name, tid, td.num_columns, want,
                   stores[i].embedding_dim);
            skipped++;
            continue;
        }
        printf("  REPAIR %s (tid %u, emb_dim=%d, num_columns=%d):\n",
               stores[i].name, tid, stores[i].embedding_dim, td.num_columns);
        rebuild_columns(tid, stores[i].embedding_dim, apply);
        if (apply) {
            int after = cat_find_columns(tid, c, 64);
            printf("      -> cat_find_columns now = %d %s\n", after,
                   after == want ? "OK" : "STILL WRONG");
            if (after == want) repaired++;
        } else {
            repaired++;
        }
    }

    printf("\n== %s: %d repaired, %d skipped ==\n",
           apply ? "APPLIED" : "WOULD REPAIR", repaired, skipped);

    if (apply) {
        printf("flushing + checkpoint...\n");
        pgm_shutdown();   /* bp_flush_all + WAL checkpoint for durability */
        printf("done.\n");
    }
    return 0;
}
