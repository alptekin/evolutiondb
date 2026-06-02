/*
 * test_colheal.c — CAT_SYS_COLUMNS self-heal for memory-store backing tables.
 *
 * Regression for a production data-integrity bug: a crash / page-level fault
 * dropped the columns-tree leaf pages for a contiguous range of table_ids,
 * leaving the table record (num_columns) and the heap tuples intact but
 * cat_find_columns() returning 0 — so every SELECT on those memory stores
 * came back with empty columns. Because a memory-store backing table has a
 * deterministic schema, cat_find_columns() now reconstructs it in-memory when
 * the columns tree yields nothing, so the existing rows decode again.
 *
 * Build (links the engine objects produced by `make adaptor TLS=1`):
 *   gcc -DEVO_ENCRYPTION -DEVOSQL_TLS -g -I../evolution/db \
 *       -I/opt/homebrew/include -I/opt/homebrew/opt/openssl@3/include \
 *       -o /tmp/test_colheal test_colheal.c \
 *       ../evolution/db/*.o ../evolution/parser/*.o \
 *       -L/opt/homebrew/lib -L/opt/homebrew/opt/openssl@3/lib \
 *       -llz4 -lssl -lcrypto -lpthread -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "page_mgr.h"
#include "buffer_pool.h"
#include "btree2.h"
#include "catalog_internal.h"

/* Link stubs: the engine .o files reference adaptor-layer symbols
 * (CDC / replication / distributed / XA) on write/replication paths this
 * unit test never exercises. */
int  cdc_dispatch_page_xid(unsigned p, unsigned x) { (void)p; (void)x; return 0; }
int  cdc_has_subscribers(void) { return 0; }
int  dist_get_num_nodes(void) { return 0; }
int  dist_is_enabled(void) { return 0; }
unsigned int g_dist_create_node_id = 0;
void repl_notify_new_wal(unsigned long lsn) { (void)lsn; }
int  xa_cleanup_orphans(void) { return 0; }
int  xa_list_prepared(void *a, int b) { (void)a; (void)b; return 0; }
char g_parse_lock[256];

#define TEST_FILE "/tmp/test_colheal.db"

static int tests_passed = 0;
static int tests_failed = 0;

#define TEST(name) do { printf("  %-55s ", name); } while(0)
#define PASS()     do { printf("PASS\n"); tests_passed++; } while(0)
#define FAIL(msg)  do { printf("FAIL: %s\n", msg); tests_failed++; } while(0)
#define ASSERT(cond, msg) do { if (!(cond)) { FAIL(msg); return; } } while(0)

static void setup(void)
{
    unlink(TEST_FILE);
    bp_init(256);
    pgm_init(TEST_FILE);
    cat_init();
}

static void teardown(void)
{
    cat_shutdown();
    pgm_shutdown();
    bp_destroy();
    unlink(TEST_FILE);
}

/* Register a memory store whose backing table_id has NO column entries in
 * CAT_SYS_COLUMNS — the exact state the production corruption left behind (the
 * table record + heap survive, but the columns-tree leaf for that table_id is
 * gone, so cat_find_columns returns 0). cat_create_memory_store does not
 * require the backing table to exist, so a synthetic id reproduces it cleanly.
 * Returns 0 on success. */
static int register_store_missing_cols(const char *store_name,
                                       uint32_t backing_id, int embedding_dim)
{
    MemoryStoreDesc d;
    memset(&d, 0, sizeof(d));
    snprintf(d.name, sizeof(d.name), "%s", store_name);
    d.backing_table_id = backing_id;
    d.embedding_dim = embedding_dim;
    return cat_create_memory_store(&d);
}

/* ---------------------------------------------------------------- */

static void test_heal_six_columns(void)
{
    TEST("6-col store: columns synthesized when tree yields 0");
    uint32_t tid = 900001;            /* backing id with no column entries */
    ASSERT(register_store_missing_cols("heal6", tid, 0) == 0, "register failed");

    ColumnDesc out[16];
    int n = cat_find_columns(tid, out, 16);
    ASSERT(n == 6, "lost columns must be reconstructed to 6");

    /* exact schema must match Memory.c create_backing_table */
    ASSERT(strcmp(out[0].col_name, "mem_namespace") == 0 && out[0].type_code == 130255 && out[0].is_not_null, "col0");
    ASSERT(strcmp(out[1].col_name, "mem_key") == 0 && out[1].is_not_null, "col1");
    ASSERT(strcmp(out[2].col_name, "pk") == 0 && out[2].is_pk && out[2].type_code == 130512, "col2 pk");
    ASSERT(strcmp(out[3].col_name, "mem_value") == 0 && out[3].type_code == 230000, "col3 json");
    ASSERT(strcmp(out[4].col_name, "created_at") == 0 && out[4].type_code == 100003, "col4 ts");
    ASSERT(strcmp(out[5].col_name, "ttl_at") == 0 && out[5].type_code == 100003, "col5 ttl");
    for (int i = 0; i < 6; i++) ASSERT(out[i].col_ordinal == i, "ordinals must be 0..5");
    PASS();
}

static void test_heal_with_embedding(void)
{
    TEST("7-col store (embedding): VECTOR synthesized at ordinal 4");
    uint32_t tid = 900002;
    ASSERT(register_store_missing_cols("heal7", tid, 1024) == 0, "register failed");
    ColumnDesc out[16];
    int n = cat_find_columns(tid, out, 16);
    ASSERT(n == 7, "embedding store must reconstruct to 7 columns");
    ASSERT(strcmp(out[4].col_name, "embedding") == 0 && out[4].type_code == 260000 + 1024,
           "embedding column at ordinal 4 with VECTOR(1024)");
    ASSERT(strcmp(out[5].col_name, "created_at") == 0, "created_at after embedding");
    ASSERT(strcmp(out[6].col_name, "ttl_at") == 0, "ttl_at last");
    PASS();
}

static void test_no_heal_for_plain_table(void)
{
    TEST("non-memory-store table_id is NOT synthesized");
    /* A table_id that is NOT registered as a memory store backing table must
     * keep returning 0 columns when the tree has none — never a fabricated
     * memory-store schema. */
    uint32_t tid = 900003;            /* not registered anywhere */
    ColumnDesc out[8];
    ASSERT(cat_find_columns(tid, out, 8) == 0,
           "unregistered table_id must NOT be synthesized");

    /* A real, healthy plain table still reports its own real columns. */
    ColumnDesc cols[2];
    memset(cols, 0, sizeof(cols));
    snprintf(cols[0].col_name, CAT_MAX_NAME_LEN, "id");  cols[0].type_code=40000; cols[0].is_pk=1; cols[0].col_ordinal=0;
    snprintf(cols[1].col_name, CAT_MAX_NAME_LEN, "v");   cols[1].type_code=130255; cols[1].col_ordinal=1;
    int rtid = cat_create_table(1, "plain_tbl", cols, 2, 0, -1, 0, 1, 0, 0);
    ASSERT(rtid > 0, "plain table create failed");
    ASSERT(cat_find_columns((uint32_t)rtid, out, 8) == 2, "real plain table keeps 2 columns");
    PASS();
}

static void test_heal_survives_restart(void)
{
    TEST("synthesis still applies after reopen (no persisted columns)");
    uint32_t tid = 900004;
    ASSERT(register_store_missing_cols("healR", tid, 0) == 0, "register failed");

    cat_shutdown(); pgm_shutdown(); bp_destroy();
    bp_init(256); pgm_init(TEST_FILE); cat_init();

    ColumnDesc out[16];
    ASSERT(cat_find_columns(tid, out, 16) == 6,
           "after reopen, missing columns must still reconstruct");
    PASS();
}

int main(void)
{
    printf("=== CAT_SYS_COLUMNS self-heal tests ===\n");
    setup();
    test_heal_six_columns();
    test_heal_with_embedding();
    test_no_heal_for_plain_table();
    test_heal_survives_restart();
    teardown();
    printf("\n%d passed, %d failed\n", tests_passed, tests_failed);
    return tests_failed == 0 ? 0 : 1;
}
