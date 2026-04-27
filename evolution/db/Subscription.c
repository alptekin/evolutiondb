/*
 * Subscription.c — Durable LISTEN/NOTIFY backend.
 *
 * The in-memory LISTEN/NOTIFY registry (adaptor/notify.{h,c}) handles
 * connected listeners: it broadcasts payloads to every conn_t that is
 * currently listening on the channel. Durable subscriptions add a
 * persistent on-disk mailbox so a consumer that disconnects can come
 * back later, drain everything that arrived in the meantime, and
 * acknowledge progress so the daemon can prune the queue.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "database.h"
#include "query_context.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "tuple_format.h"
#include "Subscription.h"

/* ----------------------------------------------------------------
 *  Per-statement staging
 * ---------------------------------------------------------------- */
typedef struct {
    char      sub_name[CAT_MAX_NAME_LEN];
    char      channel[CAT_MAX_NAME_LEN];
    long long ack_seq;
} SubscriptionOpts;

static __thread SubscriptionOpts g_sub;

void ResetSubscriptionOpts(void)
{
    memset(&g_sub, 0, sizeof(g_sub));
}

void SetSubscriptionName(const char *name)
{
    if (name) snprintf(g_sub.sub_name, sizeof(g_sub.sub_name), "%s", name);
}

void SetSubscriptionChannel(const char *channel)
{
    if (channel) snprintf(g_sub.channel, sizeof(g_sub.channel), "%s", channel);
}

void SetSubscriptionAckSeq(long long seq)
{
    g_sub.ack_seq = seq;
}

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void backing_table_name(const char *sub_name, char *out, int out_size)
{
    snprintf(out, out_size, "sub_%s", sub_name);
}

static uint32_t resolve_schema_id(void)
{
    DatabaseDesc db;
    SchemaDesc   sch;
    if (g_qctx &&
        cat_find_database(g_currentDatabase, &db) == 0 &&
        cat_find_schema(db.db_id, g_currentSchema, &sch) == 0) {
        return sch.schema_id;
    }
    return 1;
}

static void make_iso_timestamp(char *buf, int sz)
{
    time_t now = time(NULL);
    struct tm tm;
#ifdef _WIN32
    gmtime_s(&tm, &now);
#else
    gmtime_r(&now, &tm);
#endif
    strftime(buf, sz, "%Y-%m-%d %H:%M:%S", &tm);
}

/* Backing table layout for the durable mailbox:
 *   seq        BIGINT PRIMARY KEY
 *   payload    VARCHAR(8000)   -- NULL allowed for "no-payload" notify
 *   posted_at  TIMESTAMP NOT NULL
 *
 * One row per published NOTIFY; the seq is monotonic and stamped from
 * the SubscriptionDesc.next_seq counter at publish time. */
static int create_backing_table(const char *table_name, uint32_t *out_table_id)
{
    ColumnDesc cols[3];
    memset(cols, 0, sizeof(cols));

    snprintf(cols[0].col_name, sizeof(cols[0].col_name), "seq");
    cols[0].type_code = 60008;          /* BIGINT */
    cols[0].is_not_null = 1;
    cols[0].is_pk       = 1;
    cols[0].col_ordinal = 0;

    snprintf(cols[1].col_name, sizeof(cols[1].col_name), "payload");
    cols[1].type_code = 138000;         /* VARCHAR(8000) */
    cols[1].col_ordinal = 1;

    snprintf(cols[2].col_name, sizeof(cols[2].col_name), "posted_at");
    cols[2].type_code = 100003;         /* TIMESTAMP */
    cols[2].is_not_null = 1;
    cols[2].col_ordinal = 2;

    int rc = cat_create_table(resolve_schema_id(), table_name,
                              cols, 3,
                              0,
                              -1, 0, 1,
                              0, 0);
    if (rc < 0) return -1;
    if (out_table_id) *out_table_id = (uint32_t)rc;
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE SUBSCRIPTION
 * ---------------------------------------------------------------- */
int CreateSubscriptionProcess(int if_not_exists)
{
    if (g_sub.sub_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE SUBSCRIPTION: missing subscription name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }
    if (g_sub.channel[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE SUBSCRIPTION: missing FOR CHANNEL");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    SubscriptionDesc existing;
    if (cat_find_subscription(g_sub.sub_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "subscription '%s' already exists", g_sub.sub_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_sub.sub_name, tbl, sizeof(tbl));

    uint32_t backing_id = 0;
    if (create_backing_table(tbl, &backing_id) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create backing table for subscription '%s'",
                 g_sub.sub_name);
        g_err.error = 1;
        return -1;
    }

    SubscriptionDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name, sizeof(desc.name), "%s", g_sub.sub_name);
    snprintf(desc.channel, sizeof(desc.channel), "%s", g_sub.channel);
    desc.backing_table_id = backing_id;
    desc.last_ack_seq = 0;
    desc.next_seq     = 1;
    desc.ttl_days     = 7;          /* default — pruning daemon honors */

    if (cat_create_subscription(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register subscription '%s'", g_sub.sub_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP SUBSCRIPTION
 * ---------------------------------------------------------------- */
int DropSubscriptionProcess(int if_exists)
{
    SubscriptionDesc desc;
    if (cat_find_subscription(g_sub.sub_name, &desc) != 0) {
        if (if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "subscription '%s' does not exist", g_sub.sub_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_sub.sub_name, tbl, sizeof(tbl));
    TableDesc td;
    if (cat_find_table(resolve_schema_id(), tbl, &td) == 0) {
        cat_drop_table(td.table_id);
    }
    cat_drop_subscription(g_sub.sub_name);
    return 0;
}

/* ----------------------------------------------------------------
 *  Reuse the SELECT machinery to return rows for RESUME.
 * ---------------------------------------------------------------- */
static void seed_select(const char *tbl, ExprNode *first_expr, const char *first_label)
{
    memset(&g_sel, 0, sizeof(g_sel));
    snprintf(g_sel.tblName, sizeof(g_sel.tblName), "%s", tbl);
    g_sel.columnCount = 1;
    snprintf(g_sel.columns[0], sizeof(g_sel.columns[0]), "%s", first_label);
    g_expr.selectExprCount = 1;
    g_expr.selectExprs[0] = first_expr;
}

static void add_select_col(ExprNode *e, const char *label)
{
    int i = g_sel.columnCount;
    if (i >= 64 || g_expr.selectExprCount >= 64) return;
    snprintf(g_sel.columns[i], sizeof(g_sel.columns[i]), "%s", label);
    g_expr.selectExprs[g_expr.selectExprCount++] = e;
    g_sel.columnCount = i + 1;
}

/* ----------------------------------------------------------------
 *  RESUME SUBSCRIPTION s
 *
 *  Returns (seq, payload, posted_at) for every row whose seq is
 *  strictly greater than last_ack_seq, ordered by seq ascending.
 * ---------------------------------------------------------------- */
int ResumeSubscriptionProcess(void)
{
    SubscriptionDesc desc;
    if (cat_find_subscription(g_sub.sub_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "subscription '%s' does not exist", g_sub.sub_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_sub.sub_name, tbl, sizeof(tbl));

    seed_select(tbl, expr_make_column("seq"), "seq");
    add_select_col(expr_make_column("payload"),   "payload");
    add_select_col(expr_make_column("posted_at"), "posted_at");

    /* WHERE seq > last_ack_seq */
    g_expr.whereExpr = expr_make_cmp(2 /* CMP_SUBTOK_GT */,
                                     expr_make_column("seq"),
                                     expr_make_int((int)desc.last_ack_seq));
    /* No ORDER BY in v1 — backing table PK already sorts seq ascending
     * via the B+ tree cursor walk. */
    return SelectProcess();
}

/* ----------------------------------------------------------------
 *  ACK SUBSCRIPTION s UPTO N
 *
 *  Advances last_ack_seq if N > current. Idempotent: ACK 5, ACK 3
 *  leaves last_ack_seq at 5. Ack of an unknown seq simply moves the
 *  watermark — the pruning daemon catches up on the next tick.
 * ---------------------------------------------------------------- */
int AckSubscriptionProcess(void)
{
    SubscriptionDesc desc;
    if (cat_find_subscription(g_sub.sub_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "subscription '%s' does not exist", g_sub.sub_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (g_sub.ack_seq > desc.last_ack_seq) {
        desc.last_ack_seq = g_sub.ack_seq;
        if (cat_update_subscription(&desc) != 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "failed to update subscription '%s' ack watermark",
                     g_sub.sub_name);
            g_err.error = 1;
            return -1;
        }
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  Append a notification to every durable subscription bound to
 *  `channel`. Called from the commit-time NOTIFY broadcast in
 *  adaptor/notify.c, AFTER the in-memory listener fan-out so live
 *  consumers don't pay the durable write on the hot path when no
 *  one is enrolled.
 * ---------------------------------------------------------------- */
void subscription_publish(const char *channel, const char *payload)
{
    if (!channel || !*channel) return;

    SubscriptionDesc subs[64];
    int n = cat_list_subscriptions(subs, 64);
    if (n <= 0) return;

    char ts_buf[32];
    make_iso_timestamp(ts_buf, sizeof(ts_buf));

    for (int i = 0; i < n; i++) {
        if (strcasecmp(subs[i].channel, channel) != 0) continue;

        TableDesc histTd;
        if (cat_find_table_by_id(subs[i].backing_table_id, &histTd) != 0)
            continue;
        ColumnDesc cols[8];
        int ncols = cat_find_columns(histTd.table_id, cols, 8);
        if (ncols <= 0) continue;

        char seq_buf[32];
        snprintf(seq_buf, sizeof(seq_buf), "%lld",
                 (long long)subs[i].next_seq);

        char fields[3][256];
        snprintf(fields[0], sizeof(fields[0]), "%s", seq_buf);
        snprintf(fields[1], sizeof(fields[1]), "%s",
                 payload && *payload ? payload : "");
        snprintf(fields[2], sizeof(fields[2]), "%s", ts_buf);

        char rec[RECORD_BUF_SIZE];
        int rec_len = tup_build_from_fields(
            (const char (*)[256])fields, 3,
            histTd.table_id, cols, ncols,
            rec, sizeof(rec));
        if (rec_len <= 0) continue;

        RowID hrid = tapi_heap_insert(&histTd, rec, (uint16_t)rec_len);
        if (hrid.page_no == 0) continue;

        /* Index the row in the PK B+ tree so RESUME's full scan
         * picks it up. The seq is the PK so we use it directly. */
        BTree2 pk_tree = { histTd.pk_root_page };
        if (bt2_insert(&pk_tree, seq_buf, hrid) == 0 &&
            pk_tree.root_page != histTd.pk_root_page) {
            cat_update_pk_root(histTd.table_id, histTd.table_name,
                                histTd.schema_id, pk_tree.root_page);
        }

        /* Bump next_seq and persist. */
        subs[i].next_seq++;
        cat_update_subscription(&subs[i]);
    }
}
