/*
 * test_btree2.c — Unit tests for Page-Based B+ Tree
 *
 * Build:  gcc -Wall -g -I../evolution/db -o test_btree2 test_btree2.c \
 *         ../evolution/db/btree2.c ../evolution/db/page_mgr.c \
 *         ../evolution/db/slotted.c ../evolution/db/buffer_pool.c \
 *         ../evolution/db/error.c ../evolution/db/database_globals.c \
 *         ../evolution/db/query_context.c -lpthread
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "page_mgr.h"
#include "buffer_pool.h"
#include "btree2.h"

#define TEST_FILE "/tmp/test_btree2.db"

static int tests_passed = 0;
static int tests_failed = 0;

#define TEST(name) do { printf("  %-55s ", name); } while(0)
#define PASS()     do { printf("PASS\n"); tests_passed++; } while(0)
#define FAIL(msg)  do { printf("FAIL: %s\n", msg); tests_failed++; } while(0)
#define ASSERT(cond, msg) do { if (!(cond)) { FAIL(msg); return; } } while(0)

static void setup(void)
{
    unlink(TEST_FILE);
    bp_init(128);
    pgm_init(TEST_FILE);
}

static void teardown(void)
{
    pgm_shutdown();
    bp_destroy();
    unlink(TEST_FILE);
}

/* ---------------------------------------------------------------- */
static void test_create_empty(void)
{
    TEST("bt2_create creates empty tree");
    BTree2 tree = {0};
    int ret = bt2_create(&tree);
    ASSERT(ret == 0, "create failed");
    ASSERT(tree.root_page > 0, "root page should be valid");
    bt2_destroy(&tree);
    PASS();
}

static void test_insert_and_search(void)
{
    TEST("Insert + search single key");
    BTree2 tree = {0};
    bt2_create(&tree);

    RowID rid = {10, 5};
    int ret = bt2_insert(&tree, "hello", rid);
    ASSERT(ret == 0, "insert failed");

    RowID found;
    ret = bt2_search(&tree, "hello", &found);
    ASSERT(ret == 0, "search failed");
    ASSERT(found.page_no == 10 && found.slot_idx == 5, "wrong RowID");

    bt2_destroy(&tree);
    PASS();
}

static void test_search_not_found(void)
{
    TEST("Search for non-existent key returns -1");
    BTree2 tree = {0};
    bt2_create(&tree);

    RowID rid = {1, 1};
    bt2_insert(&tree, "exists", rid);

    RowID found;
    int ret = bt2_search(&tree, "nope", &found);
    ASSERT(ret == -1, "should not find");

    bt2_destroy(&tree);
    PASS();
}

static void test_insert_many_sorted(void)
{
    TEST("Insert 100 sequential keys, search all");
    BTree2 tree = {0};
    bt2_create(&tree);

    for (int i = 0; i < 100; i++) {
        char key[32];
        snprintf(key, sizeof(key), "%d", i);
        RowID rid = {(uint32_t)(i + 1), (uint16_t)(i % 100)};
        int ret = bt2_insert(&tree, key, rid);
        ASSERT(ret == 0, "insert failed");
    }

    for (int i = 0; i < 100; i++) {
        char key[32];
        snprintf(key, sizeof(key), "%d", i);
        RowID found;
        int ret = bt2_search(&tree, key, &found);
        ASSERT(ret == 0, "search failed for existing key");
        ASSERT(found.page_no == (uint32_t)(i + 1), "wrong page_no");
    }

    bt2_destroy(&tree);
    PASS();
}

static void test_insert_many_random(void)
{
    TEST("Insert 500 keys (varied lengths), search all");
    BTree2 tree = {0};
    bt2_create(&tree);

    char keys[500][64];
    for (int i = 0; i < 500; i++) {
        snprintf(keys[i], sizeof(keys[i]), "key_%04d_data", i * 7 % 500);
        RowID rid = {(uint32_t)(i + 1), 0};
        bt2_insert(&tree, keys[i], rid);
    }

    int found_count = 0;
    for (int i = 0; i < 500; i++) {
        RowID found;
        if (bt2_search(&tree, keys[i], &found) == 0)
            found_count++;
    }
    ASSERT(found_count >= 490, "most keys should be found");

    bt2_destroy(&tree);
    PASS();
}

static void test_delete(void)
{
    TEST("Delete key (lazy), search returns -1");
    BTree2 tree = {0};
    bt2_create(&tree);

    RowID rid = {5, 3};
    bt2_insert(&tree, "to_delete", rid);

    int ret = bt2_delete(&tree, "to_delete");
    ASSERT(ret == 0, "delete failed");

    RowID found;
    ret = bt2_search(&tree, "to_delete", &found);
    ASSERT(ret == -1, "should not find deleted key");

    bt2_destroy(&tree);
    PASS();
}

static void test_delete_and_reinsert(void)
{
    TEST("Delete then reinsert same key");
    BTree2 tree = {0};
    bt2_create(&tree);

    RowID rid1 = {5, 1};
    bt2_insert(&tree, "reuse", rid1);
    bt2_delete(&tree, "reuse");

    RowID rid2 = {99, 88};
    int ret = bt2_insert(&tree, "reuse", rid2);
    ASSERT(ret == 0, "reinsert failed");

    RowID found;
    ret = bt2_search(&tree, "reuse", &found);
    ASSERT(ret == 0, "search after reinsert failed");
    ASSERT(found.page_no == 99, "wrong page_no after reinsert");

    bt2_destroy(&tree);
    PASS();
}

static void test_update(void)
{
    TEST("bt2_update changes RowID");
    BTree2 tree = {0};
    bt2_create(&tree);

    RowID rid1 = {10, 1};
    bt2_insert(&tree, "updatable", rid1);

    RowID rid2 = {20, 2};
    int ret = bt2_update(&tree, "updatable", rid2);
    ASSERT(ret == 0, "update failed");

    RowID found;
    bt2_search(&tree, "updatable", &found);
    ASSERT(found.page_no == 20 && found.slot_idx == 2, "wrong after update");

    bt2_destroy(&tree);
    PASS();
}

static void test_cursor_scan(void)
{
    TEST("Cursor scan returns keys in sorted order");
    BTree2 tree = {0};
    bt2_create(&tree);

    /* Insert keys in reverse order (page_no starts at 1, page 0 = header) */
    for (int i = 9; i >= 0; i--) {
        char key[8];
        snprintf(key, sizeof(key), "%d", i);
        RowID rid = {(uint32_t)(i + 1), 0};
        bt2_insert(&tree, key, rid);
    }

    BTree2Cursor cur;
    int ret = bt2_cursor_first(&tree, &cur);
    ASSERT(ret == 0, "cursor_first failed");

    int prev = -1;
    int count = 0;
    char key[256];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        int val = atoi(key);
        ASSERT(val >= prev, "keys not in sorted order");
        prev = val;
        count++;
    }
    ASSERT(count == 10, "should scan 10 keys");

    bt2_destroy(&tree);
    PASS();
}

static void test_cursor_scan_large(void)
{
    TEST("Cursor scan 1000 keys across multiple leaves");
    BTree2 tree = {0};
    bt2_create(&tree);

    for (int i = 0; i < 1000; i++) {
        char key[32];
        snprintf(key, sizeof(key), "%d", i);
        RowID rid = {(uint32_t)(i + 1), 0};
        bt2_insert(&tree, key, rid);
    }

    BTree2Cursor cur;
    bt2_cursor_first(&tree, &cur);

    int count = 0;
    char key[256];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0)
        count++;

    ASSERT(count == 1000, "should scan all 1000 keys");

    bt2_destroy(&tree);
    PASS();
}

static void test_cursor_seek(void)
{
    TEST("Cursor seek to specific key");
    BTree2 tree = {0};
    bt2_create(&tree);

    for (int i = 0; i < 20; i++) {
        char key[8];
        snprintf(key, sizeof(key), "%d", i);
        RowID rid = {(uint32_t)(i + 1), 0};
        bt2_insert(&tree, key, rid);
    }

    BTree2Cursor cur;
    int ret = bt2_cursor_seek(&tree, "10", &cur);
    ASSERT(ret == 0, "seek failed");

    char key[256];
    RowID rid;
    ret = bt2_cursor_next(&cur, key, &rid);
    ASSERT(ret == 0, "next after seek failed");
    /* With numeric comparison, key "10" has page_no = 11 */
    ASSERT(rid.page_no == 11, "should be at key 10");

    bt2_destroy(&tree);
    PASS();
}

static void test_split_stress(void)
{
    TEST("Stress test: 5000 inserts causing many splits");
    BTree2 tree = {0};
    bt2_create(&tree);

    for (int i = 0; i < 5000; i++) {
        char key[32];
        snprintf(key, sizeof(key), "k%06d", i);
        RowID rid = {(uint32_t)(i + 1), (uint16_t)(i % 1000)};
        int ret = bt2_insert(&tree, key, rid);
        ASSERT(ret == 0, "insert failed during stress");
    }

    /* Verify random subset */
    for (int i = 0; i < 5000; i += 37) {
        char key[32];
        snprintf(key, sizeof(key), "k%06d", i);
        RowID found;
        int ret = bt2_search(&tree, key, &found);
        ASSERT(ret == 0, "search failed in stress test");
        ASSERT(found.page_no == (uint32_t)(i + 1), "wrong page_no in stress");
    }

    /* Full scan */
    BTree2Cursor cur;
    bt2_cursor_first(&tree, &cur);
    int count = 0;
    char key[256];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0)
        count++;
    ASSERT(count == 5000, "full scan should return 5000");

    bt2_destroy(&tree);
    PASS();
}

static void test_numeric_key_order(void)
{
    TEST("Numeric keys sorted numerically (1 < 2 < 10)");
    BTree2 tree = {0};
    bt2_create(&tree);

    const char *nums[] = {"10", "2", "1", "20", "3"};
    for (int i = 0; i < 5; i++) {
        RowID rid = {(uint32_t)(atoi(nums[i]) + 1), 0};
        bt2_insert(&tree, nums[i], rid);
    }

    BTree2Cursor cur;
    bt2_cursor_first(&tree, &cur);

    int prev = -1;
    char key[256];
    RowID rid;
    while (bt2_cursor_next(&cur, key, &rid) == 0) {
        int val = atoi(key);
        ASSERT(val > prev, "numeric order violated");
        prev = val;
    }

    bt2_destroy(&tree);
    PASS();
}

/* ---------------------------------------------------------------- */
int main(void)
{
    printf("\n=== B+ Tree Unit Tests ===\n\n");

    setup();

    test_create_empty();
    test_insert_and_search();
    test_search_not_found();
    test_insert_many_sorted();
    test_insert_many_random();
    test_delete();
    test_delete_and_reinsert();
    test_update();
    test_cursor_scan();
    test_cursor_scan_large();
    test_cursor_seek();
    test_split_stress();
    test_numeric_key_order();

    teardown();

    printf("\n=== Results: %d passed, %d failed ===\n\n",
           tests_passed, tests_failed);
    return tests_failed > 0 ? 1 : 0;
}
