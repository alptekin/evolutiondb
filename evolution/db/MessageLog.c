/*
 * MessageLog.c — Append-only chat history backend.
 *
 * The DDL piece (CREATE / DROP MESSAGE LOG) walks the standard
 * cat_*_message_log helpers; the DML wrappers translate LOG APPEND /
 * READ / TRUNCATE / COUNT into the regular Insert / Select / Delete
 * paths so all the existing constraint, MVCC, and snapshot machinery
 * still applies.
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
#include "MessageLog.h"

/* ----------------------------------------------------------------
 *  Per-statement staging
 * ---------------------------------------------------------------- */
typedef struct {
    char log_name[CAT_MAX_NAME_LEN];
    int  ttl_days;

    char session_id[256];
    char role[64];
    char content[8192];
    char meta_json[8192];
    int  meta_is_null;

    int       limit_n;          /* < 0 = no LAST cap */
    long long trunc_seq;        /* 0 = no BEFORE clause; deletes before this */
    int       has_trunc_seq;
} MessageLogOpts;

static __thread MessageLogOpts g_ml;

void ResetMessageLogOpts(void)
{
    memset(&g_ml, 0, sizeof(g_ml));
    g_ml.ttl_days       = 0;
    g_ml.meta_is_null   = 1;
    g_ml.limit_n        = -1;
    g_ml.has_trunc_seq  = 0;
}

static void strip_quotes(char *s)
{
    if (!s) return;
    int n = (int)strlen(s);
    if (n >= 2 && (s[0] == '\'' || s[0] == '"') && s[n - 1] == s[0]) {
        memmove(s, s + 1, n - 2);
        s[n - 2] = '\0';
    }
}

void SetMessageLogName(const char *name)
{
    if (name) snprintf(g_ml.log_name, sizeof(g_ml.log_name), "%s", name);
}
void SetMessageLogTtlDays(int days) { g_ml.ttl_days = days; }
void SetMessageLogSession(const char *sid)
{
    if (!sid) return;
    snprintf(g_ml.session_id, sizeof(g_ml.session_id), "%s", sid);
    strip_quotes(g_ml.session_id);
}
void SetMessageLogRole(const char *r)
{
    if (!r) return;
    snprintf(g_ml.role, sizeof(g_ml.role), "%s", r);
    strip_quotes(g_ml.role);
}
void SetMessageLogContent(const char *c)
{
    if (!c) return;
    snprintf(g_ml.content, sizeof(g_ml.content), "%s", c);
    strip_quotes(g_ml.content);
}
void SetMessageLogMeta(const char *m)
{
    if (!m) { g_ml.meta_is_null = 1; g_ml.meta_json[0] = '\0'; return; }
    g_ml.meta_is_null = 0;
    snprintf(g_ml.meta_json, sizeof(g_ml.meta_json), "%s", m);
    strip_quotes(g_ml.meta_json);
}
void SetMessageLogLimit(int n)         { g_ml.limit_n = n; }
void SetMessageLogTruncSeq(long long s) { g_ml.trunc_seq = s; g_ml.has_trunc_seq = 1; }

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void backing_table_name(const char *log_name, char *out, int out_size)
{
    snprintf(out, out_size, "ml_%s", log_name);
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

/* Backing table:
 *   seq         BIGINT PRIMARY KEY AUTO_INCREMENT
 *   session_id  VARCHAR(255) NOT NULL
 *   role        VARCHAR(64)
 *   content     VARCHAR(8000)
 *   meta        VARCHAR(8000)         -- JSON-shaped string
 *   created_at  TIMESTAMP NOT NULL
 *
 * VARCHAR(8000) instead of TEXT keeps the row inline-friendly for
 * the slotted-page format; agents that need bigger payloads can
 * shard the content column-side.
 */
static int create_backing_table(const char *table_name, uint32_t *out_table_id)
{
    ColumnDesc cols[6];
    memset(cols, 0, sizeof(cols));

    snprintf(cols[0].col_name, sizeof(cols[0].col_name), "seq");
    cols[0].type_code = 60008;          /* BIGINT */
    cols[0].is_not_null = 1;
    cols[0].is_pk       = 1;
    cols[0].col_ordinal = 0;

    snprintf(cols[1].col_name, sizeof(cols[1].col_name), "session_id");
    cols[1].type_code = 130255;         /* VARCHAR(255) */
    cols[1].is_not_null = 1;
    cols[1].col_ordinal = 1;

    snprintf(cols[2].col_name, sizeof(cols[2].col_name), "role");
    cols[2].type_code = 130064;         /* VARCHAR(64) */
    cols[2].col_ordinal = 2;

    snprintf(cols[3].col_name, sizeof(cols[3].col_name), "content");
    cols[3].type_code = 138000;         /* VARCHAR(8000) */
    cols[3].col_ordinal = 3;

    snprintf(cols[4].col_name, sizeof(cols[4].col_name), "meta");
    cols[4].type_code = 138000;
    cols[4].col_ordinal = 4;

    snprintf(cols[5].col_name, sizeof(cols[5].col_name), "created_at");
    cols[5].type_code = 100003;         /* TIMESTAMP */
    cols[5].is_not_null = 1;
    cols[5].col_ordinal = 5;

    int rc = cat_create_table(resolve_schema_id(), table_name,
                              cols, 6,
                              0,
                              0,                /* auto_inc_col = seq */
                              1, 1,             /* start = 1, step = 1 */
                              0, 0);
    if (rc < 0) return -1;
    if (out_table_id) *out_table_id = (uint32_t)rc;
    return 0;
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

/* ----------------------------------------------------------------
 *  CREATE MESSAGE LOG
 * ---------------------------------------------------------------- */
int CreateMessageLogProcess(int if_not_exists)
{
    if (g_ml.log_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE MESSAGE LOG: missing name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    MessageLogDesc existing;
    if (cat_find_message_log(g_ml.log_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "message log '%s' already exists", g_ml.log_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_ml.log_name, tbl, sizeof(tbl));

    uint32_t backing_id = 0;
    if (create_backing_table(tbl, &backing_id) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create backing table for message log '%s'",
                 g_ml.log_name);
        g_err.error = 1;
        return -1;
    }

    MessageLogDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name, sizeof(desc.name), "%s", g_ml.log_name);
    desc.backing_table_id = backing_id;
    desc.ttl_days = g_ml.ttl_days;

    if (cat_create_message_log(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register message log '%s'", g_ml.log_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP MESSAGE LOG
 * ---------------------------------------------------------------- */
int DropMessageLogProcess(int if_exists)
{
    MessageLogDesc desc;
    if (cat_find_message_log(g_ml.log_name, &desc) != 0) {
        if (if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "message log '%s' does not exist", g_ml.log_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_ml.log_name, tbl, sizeof(tbl));
    TableDesc td;
    if (cat_find_table(resolve_schema_id(), tbl, &td) == 0) {
        cat_drop_table(td.table_id);
    }
    cat_drop_message_log(g_ml.log_name);
    return 0;
}

/* ----------------------------------------------------------------
 *  Reuse SELECT machinery for LOG READ / COUNT
 * ---------------------------------------------------------------- */
static void seed_select(const char *tbl, ExprNode *first_expr,
                         const char *first_label)
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
 *  LOG APPEND INTO name VALUES (session, role, content [, meta])
 *
 *  Routes through InsertProcess: build g_ins.data with FIELD_SEP
 *  separators so the regular auto-increment + tuple-build path
 *  generates the seq + created_at columns.
 * ---------------------------------------------------------------- */
extern char g_ins_data[];   /* not really — we go through g_ins struct */
extern int InsertProcess(void);

int LogAppendProcess(void)
{
    MessageLogDesc desc;
    if (cat_find_message_log(g_ml.log_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "message log '%s' does not exist", g_ml.log_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_ml.log_name, tbl, sizeof(tbl));

    char ts_buf[32];
    make_iso_timestamp(ts_buf, sizeof(ts_buf));

    /* Build a column-list INSERT through g_ins so the engine fills
     * seq via auto_increment and skips the user-side seq concern. */
    memset(&g_ins, 0, sizeof(g_ins));
    snprintf(g_ins.tblName, sizeof(g_ins.tblName), "%s", tbl);

    g_ins.columnCount = 5;
    snprintf(g_ins.columns[0], 128, "session_id");
    snprintf(g_ins.columns[1], 128, "role");
    snprintf(g_ins.columns[2], 128, "content");
    snprintf(g_ins.columns[3], 128, "meta");
    snprintf(g_ins.columns[4], 128, "created_at");

    /* g_ins.data uses FIELD_SEP (\x1F) between fields and ROW_SEP
     * (\x02) between rows. NULL is encoded as NULL_MARKER. */
    char buf[24576];
    int pos = snprintf(buf, sizeof(buf),
                       "%s\x1F%s\x1F%s\x1F",
                       g_ml.session_id, g_ml.role, g_ml.content);
    if (g_ml.meta_is_null) {
        pos += snprintf(buf + pos, sizeof(buf) - pos, "\x01NULL\x01\x1F");
    } else {
        pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F", g_ml.meta_json);
    }
    pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F\x02", ts_buf);
    snprintf(g_ins.data, sizeof(g_ins.data), "%s", buf);

    return InsertProcess();
}

/* ----------------------------------------------------------------
 *  LOG READ FROM name WHERE SESSION = ? [LAST n]
 *
 *  Pulls (seq, role, content, meta, created_at) ordered by seq ASC,
 *  optionally capped to the most recent N rows. The LAST n form
 *  uses ORDER BY seq DESC + LIMIT n then re-flips client-side.
 * ---------------------------------------------------------------- */
extern int SelectProcess(void);

int LogReadProcess(void)
{
    MessageLogDesc desc;
    if (cat_find_message_log(g_ml.log_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "message log '%s' does not exist", g_ml.log_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (g_ml.session_id[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "LOG READ requires WHERE SESSION = '<sid>'");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_ml.log_name, tbl, sizeof(tbl));

    seed_select(tbl, expr_make_column("seq"), "seq");
    add_select_col(expr_make_column("role"),       "role");
    add_select_col(expr_make_column("content"),    "content");
    add_select_col(expr_make_column("meta"),       "meta");
    add_select_col(expr_make_column("created_at"), "created_at");

    g_expr.whereExpr = expr_make_cmp(4 /* CMP_SUBTOK_EQ */,
                                     expr_make_column("session_id"),
                                     expr_make_string(g_ml.session_id));
    if (g_ml.limit_n > 0) {
        g_expr.limitExpr = expr_make_int(g_ml.limit_n);
    }
    return SelectProcess();
}

/* ----------------------------------------------------------------
 *  LOG TRUNCATE FROM name WHERE SESSION = ? [BEFORE seq]
 *
 *  Without BEFORE: deletes every row for that session.
 *  With BEFORE n : deletes rows whose seq < n.
 * ---------------------------------------------------------------- */
extern int DeleteProcess(void);

int LogTruncateProcess(void)
{
    MessageLogDesc desc;
    if (cat_find_message_log(g_ml.log_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "message log '%s' does not exist", g_ml.log_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (g_ml.session_id[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "LOG TRUNCATE requires WHERE SESSION = '<sid>'");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_ml.log_name, tbl, sizeof(tbl));

    memset(&g_del, 0, sizeof(g_del));
    snprintf(g_del.tblName, sizeof(g_del.tblName), "%s", tbl);

    /* WHERE session_id = ? [AND seq < BEFORE-seq] */
    ExprNode *session_eq = expr_make_cmp(4 /* EQ */,
                                          expr_make_column("session_id"),
                                          expr_make_string(g_ml.session_id));
    if (g_ml.has_trunc_seq) {
        ExprNode *seq_lt = expr_make_cmp(1 /* LT */,
                                          expr_make_column("seq"),
                                          expr_make_int((int)g_ml.trunc_seq));
        g_expr.whereExpr = expr_make_and(session_eq, seq_lt);
    } else {
        g_expr.whereExpr = session_eq;
    }
    return DeleteProcess();
}

/* ----------------------------------------------------------------
 *  LOG COUNT FROM name WHERE SESSION = ?
 * ---------------------------------------------------------------- */
int LogCountProcess(void)
{
    MessageLogDesc desc;
    if (cat_find_message_log(g_ml.log_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "message log '%s' does not exist", g_ml.log_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (g_ml.session_id[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "LOG COUNT requires WHERE SESSION = '<sid>'");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_ml.log_name, tbl, sizeof(tbl));

    /* COUNT(*) routes through SELECT — the aggregation engine
     * handles filtering + count under WHERE session_id = ?. */
    seed_select(tbl, expr_make_count_star(), "count");

    g_expr.whereExpr = expr_make_cmp(4 /* EQ */,
                                     expr_make_column("session_id"),
                                     expr_make_string(g_ml.session_id));
    return SelectProcess();
}
