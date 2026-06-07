/* bt2compact_test — randomized model-based differential test for bt2_compact.
 *
 * Drives bt2_insert/delete/update/compact against a reference model (a flat
 * array keyed by integer key) and after every batch asserts that the tree and
 * the model agree exactly: point lookups, full in-order cursor scan, and that
 * heavy deletes followed by compaction actually free leaf pages and shrink the
 * tree. Build under ASAN to catch any structural/memory bug in the rebalancer.
 *
 * Build (from repo root):
 *   clang -fsanitize=address -g -O1 -I evolution/db -I evolution \
 *     -I/opt/homebrew/include tools/bt2compact_test.c \
 *     $(ls evolution/db/*.c | grep -v standalone_stubs) \
 *     -L/opt/homebrew/lib -llz4 -lssl -lcrypto -lz -o /tmp/bt2compact_test
 *   /tmp/bt2compact_test
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <pthread.h>
#include "page_mgr.h"
#include "btree2.h"

/* ---- link stubs (engine .o files reference adaptor/parser symbols) ---- */
int  cdc_dispatch_page_xid(unsigned p, unsigned x) { (void)p; (void)x; return 0; }
int  cdc_has_subscribers(void) { return 0; }
int  dist_get_num_nodes(void) { return 0; }
int  dist_is_enabled(void) { return 0; }
unsigned int g_dist_create_node_id = 0;
void repl_notify_new_wal(unsigned long lsn) { (void)lsn; }
int  xa_cleanup_orphans(void) { return 0; }
int  xa_list_prepared(void *a, int b) { (void)a; (void)b; return 0; }
char g_parse_lock[256];
pthread_mutex_t g_dml_mutex;
int g_in_subquery = 0;
void *g_lex_input = 0;

/* ---- deterministic PRNG (Math.random-free, reproducible) ---- */
static uint64_t rng_state = 0x9e3779b97f4a7c15ULL;
static uint32_t rng(void)
{
    rng_state ^= rng_state << 13;
    rng_state ^= rng_state >> 7;
    rng_state ^= rng_state << 17;
    return (uint32_t)(rng_state >> 32);
}

#define KEYSPACE  20000
#define KBUF      48

typedef struct { int present; RowID rid; } Model;
static Model model[KEYSPACE];

/* Long, NON-numeric keys: a 'k' prefix forces key_cmp's lexicographic path
 * (a 40-digit number would overflow strtoll and compare equal), the zero-
 * padded field keeps lexicographic order == numeric order, and the underscore
 * filler lengthens the key to shrink node fanout so the tree reaches depth 3+
 * — which is the only way to exercise internal-vs-internal merge/borrow. */
static void kstr(int k, char *buf)
{
    snprintf(buf, KBUF, "k%08d______________________________", k);
}
static long long kparse(const char *buf) { return atoll(buf + 1); }

static int active_count(void)
{
    int c = 0;
    for (int k = 0; k < KEYSPACE; k++) if (model[k].present) c++;
    return c;
}

static int g_fail = 0;
#define CHECK(cond, ...) do { if (!(cond)) { \
    fprintf(stderr, "FAIL: " __VA_ARGS__); fprintf(stderr, "\n"); g_fail++; } } while (0)

/* Full agreement check between tree and model. */
static void verify(BTree2 *tree, const char *phase)
{
    char buf[KBUF];

    /* 1. point lookups for every key in the keyspace */
    for (int k = 0; k < KEYSPACE; k++) {
        kstr(k, buf);
        RowID r = {0, 0};
        int rc = bt2_search(tree, buf, &r);
        if (model[k].present) {
            CHECK(rc == 0, "[%s] key %d should be present", phase, k);
            CHECK(r.page_no == model[k].rid.page_no && r.slot_idx == model[k].rid.slot_idx,
                  "[%s] key %d rid mismatch: got {%u,%u} want {%u,%u}",
                  phase, k, r.page_no, r.slot_idx,
                  model[k].rid.page_no, model[k].rid.slot_idx);
        } else {
            CHECK(rc == -1, "[%s] key %d should be absent", phase, k);
        }
        if (g_fail > 20) return;
    }

    /* 2. full in-order cursor scan == model active set, sorted ascending */
    BTree2Cursor cur;
    int scanned = 0;
    long long prev = -1;
    if (bt2_cursor_first(tree, &cur) == 0) {
        char kb[BT2_MAX_KEY_LEN + 1];
        RowID rid;
        while (bt2_cursor_next(&cur, kb, &rid) == 0) {
            long long kv = kparse(kb);
            CHECK(kv > prev, "[%s] cursor not ascending: %lld after %lld", phase, kv, prev);
            prev = kv;
            CHECK(kv >= 0 && kv < KEYSPACE, "[%s] cursor key %lld out of range", phase, kv);
            if (kv >= 0 && kv < KEYSPACE) {
                CHECK(model[kv].present, "[%s] cursor yielded absent key %lld", phase, kv);
                CHECK(rid.page_no == model[kv].rid.page_no && rid.slot_idx == model[kv].rid.slot_idx,
                      "[%s] cursor key %lld rid mismatch", phase, kv);
            }
            scanned++;
            if (g_fail > 20) return;
        }
    }
    CHECK(scanned == active_count(),
          "[%s] cursor scanned %d, model active %d", phase, scanned, active_count());
}

int main(int argc, char **argv)
{
    if (argc > 1) {
        uint64_t seed = strtoull(argv[1], NULL, 10);
        rng_state = seed ? seed : 1;   /* xorshift must not start at 0 */
    }
    const char *path = "/tmp/bt2compact_test.db";
    remove(path);
    if (pgm_init(path) != 0) { fprintf(stderr, "pgm_init failed\n"); return 1; }

    BTree2 tree;
    if (bt2_create(&tree) != 0) { fprintf(stderr, "bt2_create failed\n"); return 1; }
    memset(model, 0, sizeof(model));

    char buf[KBUF];

    /* Phase A: grow a tall tree. */
    for (int k = 0; k < KEYSPACE; k++) {
        kstr(k, buf);
        RowID rid = { (uint32_t)(k + 1), (uint16_t)(k % 1000) };
        if (bt2_insert(&tree, buf, rid) == 0) { model[k].present = 1; model[k].rid = rid; }
    }
    BTree2Stats st0;
    bt2_stats(&tree, &st0);
    printf("Phase A: inserted %d keys -> depth %d, %u leaf pages\n",
           active_count(), st0.depth, st0.leaf_pages);
    verify(&tree, "A:after-build");
    bt2_compact(&tree);
    verify(&tree, "A:after-compact-noop");

    /* Phase B: randomized churn with periodic compaction. */
    const int ITERS = 300000;
    for (int it = 0; it < ITERS; it++) {
        int k = rng() % KEYSPACE;
        int op = rng() % 3;
        kstr(k, buf);
        if (op == 0) {            /* insert */
            if (!model[k].present) {
                RowID rid = { (uint32_t)(k + 1), (uint16_t)(rng() % 1000) };
                if (bt2_insert(&tree, buf, rid) == 0) { model[k].present = 1; model[k].rid = rid; }
            }
        } else if (op == 1) {     /* delete */
            if (model[k].present) { bt2_delete(&tree, buf); model[k].present = 0; }
        } else {                  /* update */
            if (model[k].present) {
                RowID rid = { (uint32_t)(k + 1), (uint16_t)(rng() % 1000 + 1) };
                bt2_update(&tree, buf, rid); model[k].rid = rid;
            }
        }
        if (it % 1000 == 999) bt2_compact(&tree);
        if (it % 20000 == 19999) {
            verify(&tree, "B:churn");
            if (g_fail) { fprintf(stderr, "aborting at iter %d\n", it); break; }
        }
    }
    verify(&tree, "B:final");
    BTree2Stats st1;
    bt2_stats(&tree, &st1);
    printf("Phase B: %d active -> depth %d, %u leaf pages\n",
           active_count(), st1.depth, st1.leaf_pages);

    /* Phase C: mass delete (~95%) then compact — must merge + collapse. */
    int before_leaves = st1.leaf_pages;
    for (int k = 0; k < KEYSPACE; k++) {
        if (model[k].present && (rng() % 100) < 95) {
            kstr(k, buf);
            bt2_delete(&tree, buf);
            model[k].present = 0;
        }
    }
    verify(&tree, "C:after-massdelete-precompact");
    bt2_compact(&tree);
    verify(&tree, "C:after-massdelete-compact");
    BTree2Stats st2;
    bt2_stats(&tree, &st2);
    printf("Phase C: %d active -> depth %d, %u leaf pages (was %d)\n",
           active_count(), st2.depth, st2.leaf_pages, before_leaves);
    CHECK(st2.leaf_pages < (uint32_t)before_leaves || active_count() == 0,
          "C: leaf pages did not shrink after mass delete (%u vs %d)",
          st2.leaf_pages, before_leaves);

    /* Phase D: delete everything, compact — tree must remain valid & empty. */
    for (int k = 0; k < KEYSPACE; k++) {
        if (model[k].present) { kstr(k, buf); bt2_delete(&tree, buf); model[k].present = 0; }
    }
    bt2_compact(&tree);
    verify(&tree, "D:empty");
    BTree2Stats st3;
    bt2_stats(&tree, &st3);
    printf("Phase D: emptied -> depth %d, %u leaf pages\n", st3.depth, st3.leaf_pages);

    /* Phase E: refill after empty — exercises reuse of collapsed structure. */
    for (int k = 0; k < KEYSPACE; k++) {
        if ((rng() % 2) == 0) {
            kstr(k, buf);
            RowID rid = { (uint32_t)(k + 1), (uint16_t)(rng() % 1000) };
            if (bt2_insert(&tree, buf, rid) == 0) { model[k].present = 1; model[k].rid = rid; }
        }
    }
    bt2_compact(&tree);
    verify(&tree, "E:refill");
    printf("Phase E: refilled %d keys, verified\n", active_count());

    pgm_shutdown();

    if (g_fail) { printf("\n=== %d FAILURES ===\n", g_fail); return 1; }
    printf("\n=== ALL CHECKS PASSED ===\n");
    return 0;
}
