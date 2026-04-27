/*
 * test_sdk.c — Unit tests for libevosql-memory.
 *
 * Connects to a running evosql-server on 127.0.0.1:9967 with the
 * default admin/admin credentials. Each test creates and drops its
 * own MEMORY/CHECKPOINT store so the suite is rerunnable and parallel-
 * safe with other suites that share the same database.
 *
 *   make test
 *
 * The test prints PASS / FAIL per case and exits non-zero if any case
 * fails. There is no external dependency on a unit framework — each
 * test is a void fn and a top-level dispatcher counts results.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include "../include/evosql_memory.h"

static int g_pass = 0;
static int g_fail = 0;

#define ASSERT(expr, msg) do { \
    if (!(expr)) { \
        printf("    ASSERT FAILED: %s -- %s (line %d)\n", #expr, (msg), __LINE__); \
        g_fail++; return; \
    } \
} while (0)

static void run(const char *name, void (*fn)(void))
{
    int before = g_fail;
    fn();
    if (g_fail == before) {
        printf("  PASS: %s\n", name);
        g_pass++;
    } else {
        printf("  FAIL: %s\n", name);
    }
}

/* Connect helper used by every test. Aborts the test on connect
 * failure so the rest of the body can assume a live conn. */
static evo_conn_t *connect_or_die(void)
{
    evo_conn_t *c = evo_connect("127.0.0.1", 9967, "admin", "admin");
    if (!c) {
        fprintf(stderr, "  connect failed: %s\n", evo_strerror(NULL));
        exit(2);
    }
    return c;
}

/* ─── 1. Connect / close round-trip ─── */
static void test_connect_close(void)
{
    evo_conn_t *c = evo_connect("127.0.0.1", 9967, "admin", "admin");
    ASSERT(c != NULL, "connect should succeed");
    evo_close(c);
}

/* ─── 2. Wrong password yields AUTH error ─── */
static void test_bad_password(void)
{
    evo_conn_t *c = evo_connect("127.0.0.1", 9967, "admin", "wrong");
    ASSERT(c == NULL, "bad password must fail");
    const char *msg = evo_strerror(NULL);
    ASSERT(msg && msg[0], "error message should be set");
}

/* ─── 3. evo_exec runs DDL and returns 0+ ─── */
static void test_exec_ddl(void)
{
    evo_conn_t *c = connect_or_die();
    int rc = evo_exec(c, "DROP MEMORY STORE IF EXISTS sdk_t3");
    ASSERT(rc >= 0, "drop-if-exists should succeed");
    rc = evo_exec(c, "CREATE MEMORY STORE sdk_t3");
    ASSERT(rc >= 0, "create memory store should succeed");
    rc = evo_exec(c, "DROP MEMORY STORE sdk_t3");
    ASSERT(rc >= 0, "drop memory store should succeed");
    evo_close(c);
}

/* ─── 4. evo_query reads a SELECT result ─── */
static void test_query_select(void)
{
    evo_conn_t *c = connect_or_die();
    char buf[4][8][256];
    int cols = 0;
    int rows = evo_query(c, "SHOW MEMORY STORES",
                          (char *)buf, 4, 8, 256, &cols);
    ASSERT(rows >= 0, "show memory stores should succeed");
    ASSERT(cols >= 1, "result should have at least one column");
    evo_close(c);
}

/* ─── 5. Memory put + get round-trip ─── */
static void test_memory_put_get(void)
{
    evo_conn_t *c = connect_or_die();
    evo_exec(c, "DROP MEMORY STORE IF EXISTS sdk_t5");
    int rc = evo_exec(c, "CREATE MEMORY STORE sdk_t5");
    ASSERT(rc >= 0, "create");

    const char *value = "{\"role\":\"pm\",\"team\":\"infra\"}";
    rc = evo_memory_put(c, "sdk_t5", "users", "alice", value, NULL);
    ASSERT(rc == EVO_OK, "memory_put");

    char out[512];
    rc = evo_memory_get(c, "sdk_t5", "users", "alice", out, sizeof(out));
    ASSERT(rc == EVO_OK, "memory_get");
    ASSERT(strstr(out, "infra") != NULL, "value should include team");

    evo_exec(c, "DROP MEMORY STORE sdk_t5");
    evo_close(c);
}

/* ─── 6. Memory get on missing key returns NOT_FOUND ─── */
static void test_memory_get_missing(void)
{
    evo_conn_t *c = connect_or_die();
    evo_exec(c, "DROP MEMORY STORE IF EXISTS sdk_t6");
    evo_exec(c, "CREATE MEMORY STORE sdk_t6");

    char out[64];
    int rc = evo_memory_get(c, "sdk_t6", "users", "nobody",
                             out, sizeof(out));
    ASSERT(rc == EVO_ERR_NOT_FOUND, "missing key should be NOT_FOUND");

    evo_exec(c, "DROP MEMORY STORE sdk_t6");
    evo_close(c);
}

/* ─── 7. Memory delete then get returns NOT_FOUND ─── */
static void test_memory_delete(void)
{
    evo_conn_t *c = connect_or_die();
    evo_exec(c, "DROP MEMORY STORE IF EXISTS sdk_t7");
    evo_exec(c, "CREATE MEMORY STORE sdk_t7");
    evo_memory_put(c, "sdk_t7", "ns", "k", "{\"v\":1}", NULL);

    char out[64];
    int rc = evo_memory_get(c, "sdk_t7", "ns", "k", out, sizeof(out));
    ASSERT(rc == EVO_OK, "row exists before delete");

    rc = evo_memory_delete(c, "sdk_t7", "ns", "k");
    ASSERT(rc == EVO_OK, "delete should succeed");

    rc = evo_memory_get(c, "sdk_t7", "ns", "k", out, sizeof(out));
    ASSERT(rc == EVO_ERR_NOT_FOUND, "row should be gone after delete");

    evo_exec(c, "DROP MEMORY STORE sdk_t7");
    evo_close(c);
}

/* ─── 8. Memory put with embedding round-trip ─── */
static void test_memory_with_embedding(void)
{
    evo_conn_t *c = connect_or_die();
    evo_exec(c, "DROP MEMORY STORE IF EXISTS sdk_t8");
    int rc = evo_exec(c,
        "CREATE MEMORY STORE sdk_t8 WITH (embedding_dim=4)");
    ASSERT(rc >= 0, "create with embedding_dim=4");

    float vec[4] = {0.10f, 0.20f, 0.30f, 0.40f};
    char vec_lit[128];
    int n = evo_vector_format(vec, 4, vec_lit, sizeof(vec_lit));
    ASSERT(n > 0, "vector_format should write bytes");
    ASSERT(strchr(vec_lit, '[') != NULL, "vector should be bracketed");

    rc = evo_memory_put(c, "sdk_t8", "docs", "k1",
                         "{\"title\":\"hello\"}", vec_lit);
    ASSERT(rc == EVO_OK, "memory_put with embedding");

    char out[256];
    rc = evo_memory_get(c, "sdk_t8", "docs", "k1", out, sizeof(out));
    ASSERT(rc == EVO_OK, "memory_get");
    ASSERT(strstr(out, "hello") != NULL, "value roundtrip");

    evo_exec(c, "DROP MEMORY STORE sdk_t8");
    evo_close(c);
}

/* ─── 9. Checkpoint put + get latest round-trip ─── */
static void test_checkpoint_put_get(void)
{
    evo_conn_t *c = connect_or_die();
    evo_exec(c, "DROP CHECKPOINT STORE IF EXISTS sdk_t9");
    int rc = evo_exec(c, "CREATE CHECKPOINT STORE sdk_t9");
    ASSERT(rc >= 0, "create checkpoint store");

    rc = evo_checkpoint_put(c, "sdk_t9", "thread-A", "",
                             "ck-001",
                             "{\"step\":1,\"answer\":42}",
                             "{\"source\":\"unit-test\"}");
    ASSERT(rc == EVO_OK, "checkpoint_put");

    char out[1024];
    rc = evo_checkpoint_get_latest(c, "sdk_t9", "thread-A",
                                    out, sizeof(out));
    ASSERT(rc == EVO_OK, "checkpoint_get_latest");
    ASSERT(strstr(out, "answer") != NULL, "values JSON should round-trip");

    evo_exec(c, "DROP CHECKPOINT STORE sdk_t9");
    evo_close(c);
}

/* ─── 10. Checkpoint get on unknown thread returns NOT_FOUND ─── */
static void test_checkpoint_missing(void)
{
    evo_conn_t *c = connect_or_die();
    evo_exec(c, "DROP CHECKPOINT STORE IF EXISTS sdk_t10");
    evo_exec(c, "CREATE CHECKPOINT STORE sdk_t10");

    char out[256];
    int rc = evo_checkpoint_get_latest(c, "sdk_t10", "nope",
                                        out, sizeof(out));
    ASSERT(rc == EVO_ERR_NOT_FOUND,
           "unknown thread should be NOT_FOUND");

    evo_exec(c, "DROP CHECKPOINT STORE sdk_t10");
    evo_close(c);
}

/* ─── 11. evo_vector_format edge cases ─── */
static void test_vector_format(void)
{
    char buf[128];
    float v3[3] = {1.0f, 2.0f, 3.0f};
    int n = evo_vector_format(v3, 3, buf, sizeof(buf));
    ASSERT(n > 0, "format 3-vec");
    ASSERT(buf[0] == '[' && buf[n - 1] == ']', "brackets");
    ASSERT(strstr(buf, "1.000000") != NULL, "value 1.0");
    ASSERT(strstr(buf, "2.000000") != NULL, "value 2.0");

    /* tiny output buffer must report failure */
    char small[4];
    n = evo_vector_format(v3, 3, small, sizeof(small));
    ASSERT(n < 0, "tiny buffer should overflow");

    /* zero-length vec is invalid */
    n = evo_vector_format(v3, 0, buf, sizeof(buf));
    ASSERT(n < 0, "n=0 should reject");
}

/* ─── 12. SQL error sets sqlstate + message ─── */
static void test_sql_error_propagation(void)
{
    evo_conn_t *c = connect_or_die();
    int rc = evo_exec(c, "MEMORY PUT INTO does_not_exist_xyz "
                          "VALUES ('a','b','{}')");
    ASSERT(rc < 0, "put on missing store must fail");
    const char *st = evo_sqlstate(NULL);
    ASSERT(st && st[0], "sqlstate should be populated");
    const char *msg = evo_strerror(NULL);
    ASSERT(msg && msg[0], "error message should be populated");

    evo_close(c);
}

/* ─── 13. Thread-local last-error isolation ─── */
struct th_arg { int trip_error; };

static void *worker_thread(void *p)
{
    struct th_arg *a = (struct th_arg *)p;
    if (a->trip_error) {
        evo_conn_t *c = evo_connect("127.0.0.1", 9967, "nope", "nope");
        if (c) evo_close(c);
        /* Last error on this thread should be set. */
        if (!evo_strerror(NULL)[0]) return (void *)1;
    }
    return (void *)0;
}

static void test_thread_local_errors(void)
{
    /* Trip an error on the main thread. */
    evo_conn_t *bogus = evo_connect("127.0.0.1", 9967, "nope", "nope");
    ASSERT(bogus == NULL, "bogus auth fails");
    char main_msg[512];
    snprintf(main_msg, sizeof(main_msg), "%s", evo_strerror(NULL));
    ASSERT(main_msg[0], "main thread error set");

    /* Spawn another thread that records its own error — main's should
     * remain untouched. */
    pthread_t tid;
    struct th_arg a = {1};
    pthread_create(&tid, NULL, worker_thread, &a);
    void *retv = NULL;
    pthread_join(tid, &retv);
    ASSERT(retv == NULL, "child thread saw its own error");

    /* Main thread error should be unchanged. */
    ASSERT(strcmp(main_msg, evo_strerror(NULL)) == 0,
           "main thread last-error not perturbed by other thread");
}

int main(void)
{
    printf("=== libevosql-memory test_sdk ===\n");
    run("connect / close round-trip",            test_connect_close);
    run("bad password yields auth error",        test_bad_password);
    run("evo_exec runs DDL",                      test_exec_ddl);
    run("evo_query reads SELECT",                 test_query_select);
    run("memory put + get round-trip",            test_memory_put_get);
    run("memory get missing key NOT_FOUND",       test_memory_get_missing);
    run("memory delete + get NOT_FOUND",          test_memory_delete);
    run("memory put with embedding",              test_memory_with_embedding);
    run("checkpoint put + get latest",            test_checkpoint_put_get);
    run("checkpoint missing thread NOT_FOUND",    test_checkpoint_missing);
    run("vector_format edge cases",               test_vector_format);
    run("sql error propagates sqlstate + msg",    test_sql_error_propagation);
    run("thread-local last-error isolation",      test_thread_local_errors);

    printf("\n=== %d passed, %d failed ===\n", g_pass, g_fail);
    return g_fail == 0 ? 0 : 1;
}
