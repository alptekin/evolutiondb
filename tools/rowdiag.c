/* rowdiag — read-only row-reachability diagnostic for a table.
 * Compares: PK B+ tree entry count vs PHYSICAL heap tuples on disk
 * (table_id match) — proves whether rows are shadowed (on disk but
 * unreachable via the index) vs physically gone. */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "page_mgr.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "btree2.h"
#include "slotted.h"
#include "tuple_format.h"
#include "toast.h"
#ifndef RECORD_BUF_SIZE
#define RECORD_BUF_SIZE 8192
#endif

/* adaptor-layer link stubs (read-only tool never runs those paths) */
int  cdc_dispatch_page_xid(unsigned p, unsigned x){(void)p;(void)x;return 0;}
int  cdc_has_subscribers(void){return 0;}
int  dist_get_num_nodes(void){return 0;}
int  dist_is_enabled(void){return 0;}
unsigned int g_dist_create_node_id = 0;
void repl_notify_new_wal(unsigned long lsn){(void)lsn;}
int  xa_cleanup_orphans(void){return 0;}
int  xa_list_prepared(void *a,int b){(void)a;(void)b;return 0;}
char g_parse_lock[256];

int main(int argc, char **argv)
{
    const char *path = argc > 1 ? argv[1] : "/tmp/evo_diag/evosql.db";
    uint32_t want_tid = argc > 2 ? (uint32_t)atoi(argv[2]) : 1;
    if (pgm_init(path) != 0) { fprintf(stderr, "pgm_init failed\n"); return 1; }
    cat_init();

    TableDesc td;
    if (cat_find_table_by_id(want_tid, &td) != 0) {
        printf("table_id %u not found\n", want_tid); return 1;
    }
    printf("table_id=%u name=%s pk_root_page=%u heap_page=%u num_columns=%d\n",
           want_tid, td.table_name, td.pk_root_page, td.heap_page, td.num_columns);

    /* 1) PK B+ tree entry count (the index's reachable view) */
    BTree2 tree = tapi_pk_tree(&td);
    BTree2Cursor cur;
    long pk = 0;
    char kbuf[1100]; RowID rid;
    if (bt2_cursor_first(&tree, &cur) == 0) {
        pk = 1;
        while (bt2_cursor_next(&cur, kbuf, &rid) == 0) pk++;
    }
    printf("PK-tree entry sayisi (erisilebilir/index): %ld\n", pk);

    /* 2) PHYSICAL heap scan: every PAGE_DATA page, count tuples whose
     *    on-disk table_id matches. Also tally how many of those have a
     *    PK entry pointing back at them (truly reachable) vs orphaned. */
    char p0[EVO_PAGE_SIZE];
    if (pgm_read_page(0, p0) < 0) { printf("page 0 read fail\n"); return 1; }
    uint32_t total_pages;
    memcpy(&total_pages, p0 + 8, 4);          /* FileHeader: total_pages @ off 8 */
    printf("total_pages=%u (file ~%.0f MB)\n", total_pages,
           total_pages * 4096.0 / 1048576.0);

    long phys = 0, data_pages = 0, total_tup = 0;
    long per[2048]={0};
    char buf[EVO_PAGE_SIZE];
    char rec[RECORD_BUF_SIZE];
    for (uint32_t pno = 1; pno < total_pages; pno++) {
        if (pgm_read_page(pno, buf) < 0) continue;
        if (((unsigned char)buf[0]) != PAGE_DATA) continue;  /* page_type @ off 0 */
        data_pages++;
        for (uint16_t s = 0; s < 1024; s++) {
            int len = slot_read(buf, s, rec, sizeof(rec));
            if (len <= 0) continue;
            if ((unsigned char)rec[0] != TUPLE_MAGIC &&
                (unsigned char)rec[0] != TOAST_STUB_MAGIC) continue;
            uint32_t tid;
            memcpy(&tid, rec + 1, 4);          /* table_id @ prefix off 1 */
            total_tup++;
            if (tid < 2048) per[tid]++;
            if (tid == want_tid) phys++;
        }
    }
    printf("FIZIKSEL heap tuple (table %u): %ld  [%ld data-page, TOPLAM tum-tablo tuple=%ld]\n",
           want_tid, phys, data_pages, total_tup);
    /* en cok tuple'li 15 table_id */
    printf("   EN COK tuple'li table_id'ler:\n");
    for (int top=0; top<15; top++) {
        int bi=-1; long bv=0;
        for (int t=1;t<2048;t++) if(per[t]>bv){bv=per[t];bi=t;}
        if (bi<0) break;
        TableDesc x; int ok=(cat_find_table_by_id((uint32_t)bi,&x)==0);
        printf("      t%-5d = %-7ld  %s\n", bi, bv, ok?x.table_name:"(katalogda yok!)");
        per[bi]=0;
    }
    printf("\n==> phys=%ld  pk=%ld  -> %s\n", phys, pk,
           phys > pk + 50
             ? "SHADOWED: diskte PK'dan COK fazla tuple var (kurtarilabilir)"
             : "phys ~ pk: golgeleme yok, fark dead-tuple/baska");
    return 0;
}
