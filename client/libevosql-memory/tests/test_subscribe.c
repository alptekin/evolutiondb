/*
 * test_subscribe.c — Tests for the streaming/subscribe surface.
 *
 * Each case opens a subscription, drives a NOTIFY (or DML when CDC
 * comes online), waits for the callback to fire, and asserts on the
 * recorded events. Sleep budgets are intentionally generous because
 * NOTIFY delivery is async and Docker on shared CI hardware is slow.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include "../include/evosql_memory.h"

static int g_pass = 0;
static int g_fail = 0;

#define ASSERT(expr, msg) do { \
    if (!(expr)) { \
        printf("    ASSERT FAILED: %s -- %s (line %d)\n", \
               #expr, (msg), __LINE__); \
        g_fail++; return; \
    } \
} while (0)

static void run(const char *name, void (*fn)(void))
{
    int before = g_fail;
    fn();
    if (g_fail == before) { printf("  PASS: %s\n", name); g_pass++; }
    else                  { printf("  FAIL: %s\n", name); }
}

/* ----------------------------------------------------------------
 *  Event recorder used as the callback ctx.
 * ---------------------------------------------------------------- */
typedef struct {
    pthread_mutex_t lock;
    int             count;
    char            channels[16][128];
    char            payloads[16][512];
    uint64_t        lsns[16];
} recorder_t;

static void rec_init(recorder_t *r)
{
    memset(r, 0, sizeof(*r));
    pthread_mutex_init(&r->lock, NULL);
}

static void rec_destroy(recorder_t *r)
{
    pthread_mutex_destroy(&r->lock);
}

static void rec_callback(const char *channel, const char *payload,
                          uint64_t lsn, void *ctx)
{
    recorder_t *r = (recorder_t *)ctx;
    pthread_mutex_lock(&r->lock);
    if (r->count < 16) {
        snprintf(r->channels[r->count], sizeof(r->channels[r->count]),
                 "%s", channel ? channel : "");
        snprintf(r->payloads[r->count], sizeof(r->payloads[r->count]),
                 "%s", payload ? payload : "");
        r->lsns[r->count] = lsn;
        r->count++;
    }
    pthread_mutex_unlock(&r->lock);
}

static int rec_count(recorder_t *r)
{
    pthread_mutex_lock(&r->lock);
    int c = r->count;
    pthread_mutex_unlock(&r->lock);
    return c;
}

static int wait_for_count(recorder_t *r, int target, int timeout_ms)
{
    int waited = 0;
    while (rec_count(r) < target && waited < timeout_ms) {
        usleep(50 * 1000);
        waited += 50;
    }
    return rec_count(r);
}

/* ----------------------------------------------------------------
 *  Tests
 * ---------------------------------------------------------------- */

/* 1. Subscribe + NOTIFY callback fires once. */
static void test_basic_notify(void)
{
    recorder_t rec;
    rec_init(&rec);

    evo_subscription_t *sub = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t1", rec_callback, &rec);
    ASSERT(sub != NULL, "subscribe");

    /* Driver connection — separate from the subscription's internal
     * socket. */
    evo_conn_t *driver = evo_connect("127.0.0.1", 9967, "admin", "admin");
    ASSERT(driver != NULL, "driver connect");

    int rc = evo_exec(driver, "NOTIFY ch_t1, 'hello'");
    ASSERT(rc >= 0, "NOTIFY succeeded");

    int n = wait_for_count(&rec, 1, 3000);
    ASSERT(n >= 1, "callback fired at least once");
    ASSERT(strcmp(rec.channels[0], "ch_t1") == 0, "channel name matched");
    ASSERT(strstr(rec.payloads[0], "hello") != NULL,
           "payload contains 'hello'");

    evo_unsubscribe(sub);
    evo_close(driver);
    rec_destroy(&rec);
}

/* 2. Multiple NOTIFY events arrive in order. */
static void test_multiple_notifies(void)
{
    recorder_t rec;
    rec_init(&rec);
    evo_subscription_t *sub = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t2", rec_callback, &rec);
    ASSERT(sub != NULL, "subscribe");

    evo_conn_t *driver = evo_connect("127.0.0.1", 9967, "admin", "admin");
    ASSERT(driver != NULL, "driver connect");

    evo_exec(driver, "NOTIFY ch_t2, 'one'");
    evo_exec(driver, "NOTIFY ch_t2, 'two'");
    evo_exec(driver, "NOTIFY ch_t2, 'three'");

    int n = wait_for_count(&rec, 3, 5000);
    ASSERT(n >= 3, "three callbacks");
    ASSERT(strstr(rec.payloads[0], "one"),   "payload 1");
    ASSERT(strstr(rec.payloads[1], "two"),   "payload 2");
    ASSERT(strstr(rec.payloads[2], "three"), "payload 3");

    evo_unsubscribe(sub);
    evo_close(driver);
    rec_destroy(&rec);
}

/* 3. Two distinct subscriptions on different channels don't cross. */
static void test_channel_isolation(void)
{
    recorder_t r1; recorder_t r2;
    rec_init(&r1); rec_init(&r2);
    evo_subscription_t *s1 = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t3a", rec_callback, &r1);
    evo_subscription_t *s2 = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t3b", rec_callback, &r2);
    ASSERT(s1 && s2, "both subscriptions");

    evo_conn_t *driver = evo_connect("127.0.0.1", 9967, "admin", "admin");
    evo_exec(driver, "NOTIFY ch_t3a, 'A1'");
    evo_exec(driver, "NOTIFY ch_t3b, 'B1'");
    evo_exec(driver, "NOTIFY ch_t3a, 'A2'");

    wait_for_count(&r1, 2, 3000);
    wait_for_count(&r2, 1, 3000);
    ASSERT(rec_count(&r1) == 2, "subscriber 1 sees its 2 messages");
    ASSERT(rec_count(&r2) == 1, "subscriber 2 sees its 1 message");

    evo_unsubscribe(s1); evo_unsubscribe(s2);
    evo_close(driver);
    rec_destroy(&r1); rec_destroy(&r2);
}

/* 4. Unsubscribe is deterministic — callback never fires after. */
static void test_unsubscribe_clean(void)
{
    recorder_t rec; rec_init(&rec);
    evo_subscription_t *sub = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t4", rec_callback, &rec);
    ASSERT(sub != NULL, "subscribe");

    evo_conn_t *driver = evo_connect("127.0.0.1", 9967, "admin", "admin");
    evo_exec(driver, "NOTIFY ch_t4, 'before'");
    wait_for_count(&rec, 1, 2000);

    int seen_before_unsub = rec_count(&rec);
    evo_unsubscribe(sub);

    /* Send another NOTIFY after unsubscribe — must not be observed. */
    evo_exec(driver, "NOTIFY ch_t4, 'after'");
    usleep(500 * 1000);

    ASSERT(rec_count(&rec) == seen_before_unsub,
           "no events after unsubscribe");

    evo_close(driver);
    rec_destroy(&rec);
}

/* 5. Bad password fails fast (no thread leaked). */
static void test_subscribe_bad_password(void)
{
    recorder_t rec; rec_init(&rec);
    evo_subscription_t *sub = evo_subscribe(
        "127.0.0.1", 9967, "admin", "wrong",
        "ch_t5", rec_callback, &rec);
    ASSERT(sub == NULL, "must reject bad password");
    rec_destroy(&rec);
}

/* 6. Subscribe with NULL args is rejected without crashing. */
static void test_subscribe_null_args(void)
{
    evo_subscription_t *s;
    s = evo_subscribe(NULL, 9967, "admin", "admin", "ch", rec_callback, NULL);
    ASSERT(s == NULL, "NULL host rejected");
    s = evo_subscribe("127.0.0.1", 9967, NULL, "admin", "ch", rec_callback, NULL);
    ASSERT(s == NULL, "NULL user rejected");
    s = evo_subscribe("127.0.0.1", 9967, "admin", "admin", NULL, rec_callback, NULL);
    ASSERT(s == NULL, "NULL channel rejected");
    s = evo_subscribe("127.0.0.1", 9967, "admin", "admin", "ch", NULL, NULL);
    ASSERT(s == NULL, "NULL callback rejected");
}

/* 7. evo_ack_up_to advances local cursor and is no-op on NOTIFY subs. */
static void test_ack_up_to(void)
{
    recorder_t rec; rec_init(&rec);
    evo_subscription_t *sub = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t7", rec_callback, &rec);
    ASSERT(sub != NULL, "subscribe");

    int rc = evo_ack_up_to(sub, 12345);
    ASSERT(rc == 0, "ack_up_to returns 0");
    rc = evo_ack_up_to(sub, 0);
    ASSERT(rc == 0, "ack_up_to with 0 is fine");
    rc = evo_ack_up_to(NULL, 99);
    ASSERT(rc != 0, "ack_up_to(NULL) rejected");

    evo_unsubscribe(sub);
    rec_destroy(&rec);
}

/* 8. Many NOTIFYs in quick succession — no event loss. */
static void test_burst(void)
{
    recorder_t rec; rec_init(&rec);
    evo_subscription_t *sub = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t8", rec_callback, &rec);
    ASSERT(sub != NULL, "subscribe");

    evo_conn_t *driver = evo_connect("127.0.0.1", 9967, "admin", "admin");
    for (int i = 0; i < 10; i++) {
        char sql[128];
        snprintf(sql, sizeof(sql), "NOTIFY ch_t8, 'm%d'", i);
        evo_exec(driver, sql);
    }

    int n = wait_for_count(&rec, 10, 5000);
    ASSERT(n >= 10, "all 10 messages delivered");

    evo_unsubscribe(sub);
    evo_close(driver);
    rec_destroy(&rec);
}

/* 9. NOTIFY with empty payload still produces a callback. */
static void test_empty_payload(void)
{
    recorder_t rec; rec_init(&rec);
    evo_subscription_t *sub = evo_subscribe(
        "127.0.0.1", 9967, "admin", "admin",
        "ch_t9", rec_callback, &rec);
    ASSERT(sub != NULL, "subscribe");

    evo_conn_t *driver = evo_connect("127.0.0.1", 9967, "admin", "admin");
    evo_exec(driver, "NOTIFY ch_t9");
    int n = wait_for_count(&rec, 1, 3000);
    ASSERT(n >= 1, "empty-payload NOTIFY delivered");
    ASSERT(strcmp(rec.channels[0], "ch_t9") == 0, "channel matches");

    evo_unsubscribe(sub);
    evo_close(driver);
    rec_destroy(&rec);
}

/* 10. CDC subscribe handles the case where CDC server isn't running.
 * The default port 9970 may or may not be open in the dev container —
 * if connect fails, the SDK should return NULL and not crash. If it
 * succeeds, we just unsubscribe immediately. Either outcome is OK. */
static void test_cdc_optional(void)
{
    recorder_t rec; rec_init(&rec);
    evo_subscription_t *sub = evo_cdc_subscribe(
        "127.0.0.1", 9970, rec_callback, &rec, 0);
    if (sub) {
        /* CDC server is up — let it deliver one or two events if any
         * are happening, then unsubscribe. */
        usleep(200 * 1000);
        evo_unsubscribe(sub);
    } else {
        /* Server not running CDC — getaddrinfo/connect failure surfaced
         * as NULL, which is the expected behaviour. */
    }
    rec_destroy(&rec);
}

int main(void)
{
    printf("=== libevosql-memory test_subscribe ===\n");
    run("basic NOTIFY callback fires",          test_basic_notify);
    run("multiple NOTIFYs arrive in order",     test_multiple_notifies);
    run("two channels don't cross",             test_channel_isolation);
    run("unsubscribe stops further events",     test_unsubscribe_clean);
    run("bad password rejected",                test_subscribe_bad_password);
    run("NULL args rejected",                   test_subscribe_null_args);
    run("ack_up_to records local cursor",       test_ack_up_to);
    run("burst of 10 NOTIFYs not lost",         test_burst);
    run("empty payload still delivers",         test_empty_payload);
    run("CDC subscribe handles missing port",   test_cdc_optional);

    printf("\n=== %d passed, %d failed ===\n", g_pass, g_fail);
    return g_fail == 0 ? 0 : 1;
}
