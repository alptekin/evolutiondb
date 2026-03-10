/*
 * test_page_mgr.c — Unit tests for Page Manager and Slotted Pages
 *
 * Build:  gcc -Wall -g -I../evolution/db -o test_page_mgr test_page_mgr.c \
 *         ../evolution/db/page_mgr.c ../evolution/db/slotted.c \
 *         ../evolution/db/buffer_pool.c -lpthread
 *
 * Run:    ./test_page_mgr
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

#include "page_mgr.h"
#include "slotted.h"
#include "buffer_pool.h"

#define TEST_FILE "/tmp/test_evosql.db"

static int tests_passed = 0;
static int tests_failed = 0;

#define TEST(name) \
    do { printf("  %-50s ", name); } while(0)

#define PASS() \
    do { printf("PASS\n"); tests_passed++; } while(0)

#define FAIL(msg) \
    do { printf("FAIL: %s\n", msg); tests_failed++; } while(0)

#define ASSERT(cond, msg) \
    do { if (!(cond)) { FAIL(msg); return; } } while(0)

/* ---------------------------------------------------------------- */
static void cleanup(void)
{
    pgm_shutdown();
    bp_destroy();
    unlink(TEST_FILE);
}

/* ----------------------------------------------------------------
 *  Page Manager Tests
 * ---------------------------------------------------------------- */
static void test_pgm_create_new_file(void)
{
    TEST("pgm_init creates new file");
    cleanup();
    bp_init(64);
    int ret = pgm_init(TEST_FILE);
    ASSERT(ret == 0, "pgm_init failed");
    ASSERT(pgm_get_fd() >= 0, "fd should be valid");
    PASS();
}

static void test_pgm_reopen_existing(void)
{
    TEST("pgm_init reopens existing file");
    pgm_shutdown();
    bp_flush_all();
    /* Re-init with same file */
    int ret = pgm_init(TEST_FILE);
    ASSERT(ret == 0, "pgm_init reopen failed");
    PASS();
}

static void test_pgm_alloc_single(void)
{
    TEST("pgm_alloc_page returns valid page");
    uint32_t p = pgm_alloc_page(PAGE_DATA);
    ASSERT(p > 0, "page number should be > 0");

    /* Read back and verify — use pgm_read_page which goes through bp_read */
    char buf[EVO_PAGE_SIZE];
    int ret = pgm_read_page(p, buf);
    ASSERT(ret >= 0, "read_page failed");
    PageHeader *ph = (PageHeader *)buf;
    ASSERT(ph->page_type == PAGE_DATA,
           "page type mismatch (possible stale cache after reopen)");
    ASSERT(ph->page_id == p, "page_id should match");
    PASS();
}

static void test_pgm_alloc_many(void)
{
    TEST("pgm_alloc_page allocates many pages");
    uint32_t pages[100];
    for (int i = 0; i < 100; i++) {
        pages[i] = pgm_alloc_page(PAGE_DATA);
        ASSERT(pages[i] > 0, "allocation failed");
    }
    /* All should be distinct */
    for (int i = 0; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {
            ASSERT(pages[i] != pages[j], "duplicate page numbers");
        }
    }
    PASS();
}

static void test_pgm_free_and_reuse(void)
{
    TEST("pgm_free_page + re-alloc reuses page");
    uint32_t p1 = pgm_alloc_page(PAGE_DATA);
    pgm_free_page(p1);
    uint32_t p2 = pgm_alloc_page(PAGE_DATA);
    ASSERT(p2 == p1, "freed page should be reused");
    PASS();
}

static void test_pgm_file_growth(void)
{
    TEST("File grows when free list exhausted");
    /* Allocate enough pages to exhaust initial pool */
    uint32_t pages[200];
    int count = 0;
    for (int i = 0; i < 200; i++) {
        uint32_t p = pgm_alloc_page(PAGE_DATA);
        if (p == 0) break;
        pages[count++] = p;
    }
    ASSERT(count == 200, "should allocate 200 pages (with growth)");
    /* Free them all */
    for (int i = 0; i < count; i++)
        pgm_free_page(pages[i]);
    PASS();
}

static void test_pgm_catalog_roots(void)
{
    TEST("Catalog root get/set");
    pgm_set_catalog_root(CAT_SYS_TABLES, 42);
    pgm_set_catalog_root(CAT_SYS_COLUMNS, 99);
    ASSERT(pgm_get_catalog_root(CAT_SYS_TABLES) == 42, "tables root");
    ASSERT(pgm_get_catalog_root(CAT_SYS_COLUMNS) == 99, "columns root");
    PASS();
}

static void test_pgm_next_id(void)
{
    TEST("pgm_next_id auto-increment");
    uint32_t id1 = pgm_next_id(0); /* table */
    uint32_t id2 = pgm_next_id(0);
    uint32_t id3 = pgm_next_id(0);
    ASSERT(id2 == id1 + 1, "sequential IDs");
    ASSERT(id3 == id2 + 1, "sequential IDs");
    PASS();
}

/* ----------------------------------------------------------------
 *  Slotted Page Tests
 * ---------------------------------------------------------------- */
static void test_slot_init(void)
{
    TEST("slot_page_init creates empty page");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 10);

    PageHeader *ph = (PageHeader *)page;
    ASSERT(ph->page_type == PAGE_DATA, "page type");
    ASSERT(ph->page_id == 10, "page id");
    ASSERT(slot_active_count(page) == 0, "should be empty");
    ASSERT(slot_free_space(page) > 4000, "most space free");
    PASS();
}

static void test_slot_insert_read(void)
{
    TEST("slot_insert + slot_read roundtrip");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 20);

    const char *rec = "1;John;25";
    int slot = slot_insert(page, rec, (uint16_t)strlen(rec) + 1);
    ASSERT(slot >= 0, "insert should succeed");

    char out[256];
    int len = slot_read(page, (uint16_t)slot, out, sizeof(out));
    ASSERT(len > 0, "read should succeed");
    ASSERT(strcmp(out, "1;John;25") == 0, "data mismatch");
    PASS();
}

static void test_slot_multiple_records(void)
{
    TEST("Multiple records insert/read");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 30);

    const char *recs[] = {
        "1;Alice;30", "2;Bob;25", "3;Charlie;35",
        "4;Diana;28", "5;Eve;22"
    };
    int slots[5];

    for (int i = 0; i < 5; i++) {
        slots[i] = slot_insert(page, recs[i], (uint16_t)strlen(recs[i]) + 1);
        ASSERT(slots[i] >= 0, "insert failed");
    }

    ASSERT(slot_active_count(page) == 5, "should have 5 records");

    for (int i = 0; i < 5; i++) {
        char out[256];
        int len = slot_read(page, (uint16_t)slots[i], out, sizeof(out));
        ASSERT(len > 0, "read failed");
        ASSERT(strcmp(out, recs[i]) == 0, "data mismatch");
    }
    PASS();
}

static void test_slot_delete(void)
{
    TEST("slot_delete removes record");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 40);

    const char *rec = "1;Test;100";
    int slot = slot_insert(page, rec, (uint16_t)strlen(rec) + 1);
    ASSERT(slot >= 0, "insert");

    int ret = slot_delete(page, (uint16_t)slot);
    ASSERT(ret == 0, "delete should succeed");
    ASSERT(slot_active_count(page) == 0, "should be empty");

    /* Read should fail */
    char out[256];
    int len = slot_read(page, (uint16_t)slot, out, sizeof(out));
    ASSERT(len == -1, "read after delete should fail");
    PASS();
}

static void test_slot_delete_and_reuse(void)
{
    TEST("Deleted slot gets reused");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 50);

    int s0 = slot_insert(page, "A", 2);
    int s1 = slot_insert(page, "B", 2);
    slot_delete(page, (uint16_t)s0);

    /* New insert should reuse slot 0 */
    int s2 = slot_insert(page, "C", 2);
    ASSERT(s2 == s0, "should reuse deleted slot");

    char out[16];
    slot_read(page, (uint16_t)s2, out, sizeof(out));
    ASSERT(strcmp(out, "C") == 0, "data should be C");
    PASS();
}

static void test_slot_update_smaller(void)
{
    TEST("slot_update with smaller record");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 60);

    int slot = slot_insert(page, "LongRecord;Data;Here", 21);
    int ret = slot_update(page, (uint16_t)slot, "Short", 6);
    ASSERT(ret == 0, "update should succeed");

    char out[256];
    slot_read(page, (uint16_t)slot, out, sizeof(out));
    ASSERT(strcmp(out, "Short") == 0, "data should be updated");
    PASS();
}

static void test_slot_update_larger_fails(void)
{
    TEST("slot_update with larger record fails");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 70);

    int slot = slot_insert(page, "AB", 3);
    int ret = slot_update(page, (uint16_t)slot,
                          "VeryLongReplacementRecord", 26);
    ASSERT(ret == -1, "update should fail for larger record");
    PASS();
}

static void test_slot_fill_page(void)
{
    TEST("Fill page until full");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 80);

    char rec[128];
    memset(rec, 'X', 127);
    rec[127] = '\0';

    int count = 0;
    while (slot_insert(page, rec, 128) >= 0)
        count++;

    ASSERT(count > 20, "should fit 20+ records of 128B");
    ASSERT(count < 40, "sanity upper bound");
    PASS();
}

static void test_slot_compact(void)
{
    TEST("slot_compact reclaims space");
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, 90);

    /* Fill with 10 records of 200 bytes each */
    char rec[200];
    memset(rec, 'Z', 199);
    rec[199] = '\0';

    int slots[10];
    for (int i = 0; i < 10; i++)
        slots[i] = slot_insert(page, rec, 200);

    /* Delete odd slots */
    for (int i = 1; i < 10; i += 2)
        slot_delete(page, (uint16_t)slots[i]);

    uint16_t free_before = slot_free_space(page);
    slot_compact(page);
    uint16_t free_after = slot_free_space(page);

    ASSERT(free_after > free_before, "compaction should increase free space");

    /* Even slots should still be readable */
    for (int i = 0; i < 10; i += 2) {
        char out[256];
        int len = slot_read(page, (uint16_t)slots[i], out, sizeof(out));
        ASSERT(len == 200, "even records should survive compaction");
    }
    PASS();
}

/* ----------------------------------------------------------------
 *  Integration: Page Manager + Slotted Pages
 * ---------------------------------------------------------------- */
static void test_integration_store_and_retrieve(void)
{
    TEST("Integration: alloc page, insert records, persist");
    uint32_t pno = pgm_alloc_page(PAGE_DATA);
    ASSERT(pno > 0, "alloc");

    /* Init as slotted page */
    char page[EVO_PAGE_SIZE];
    slot_page_init(page, pno);

    /* Insert records */
    const char *r1 = "100;Alice;30;New York";
    const char *r2 = "200;Bob;25;London";
    int s1 = slot_insert(page, r1, (uint16_t)strlen(r1) + 1);
    int s2 = slot_insert(page, r2, (uint16_t)strlen(r2) + 1);
    ASSERT(s1 >= 0 && s2 >= 0, "inserts");

    /* Write to disk */
    pgm_write_page(pno, page);

    /* Read back from disk (clear buffer to prove it reads from cache/disk) */
    char page2[EVO_PAGE_SIZE];
    pgm_read_page(pno, page2);

    char out[256];
    slot_read(page2, (uint16_t)s1, out, sizeof(out));
    ASSERT(strcmp(out, r1) == 0, "record 1 persisted");
    slot_read(page2, (uint16_t)s2, out, sizeof(out));
    ASSERT(strcmp(out, r2) == 0, "record 2 persisted");
    PASS();
}

/* ----------------------------------------------------------------
 *  Main
 * ---------------------------------------------------------------- */
int main(void)
{
    printf("\n=== Page Manager + Slotted Page Unit Tests ===\n\n");

    /* Setup */
    unlink(TEST_FILE);
    bp_init(64);
    int ret = pgm_init(TEST_FILE);
    if (ret != 0) {
        fprintf(stderr, "FATAL: pgm_init failed\n");
        return 1;
    }

    printf("[Page Manager]\n");
    test_pgm_create_new_file();
    test_pgm_reopen_existing();
    test_pgm_alloc_single();
    test_pgm_alloc_many();
    test_pgm_free_and_reuse();
    test_pgm_file_growth();
    test_pgm_catalog_roots();
    test_pgm_next_id();

    printf("\n[Slotted Pages]\n");
    test_slot_init();
    test_slot_insert_read();
    test_slot_multiple_records();
    test_slot_delete();
    test_slot_delete_and_reuse();
    test_slot_update_smaller();
    test_slot_update_larger_fails();
    test_slot_fill_page();
    test_slot_compact();

    printf("\n[Integration]\n");
    test_integration_store_and_retrieve();

    /* Cleanup */
    cleanup();

    printf("\n=== Results: %d passed, %d failed ===\n\n",
           tests_passed, tests_failed);
    return tests_failed > 0 ? 1 : 0;
}
