/*
 * Checkpoint.c — LangGraph BaseCheckpointSaver native backend (Task 204)
 *
 * v1 ships the DDL surface natively:
 *   CREATE CHECKPOINT STORE name [WITH (retention='30 days')]
 *   DROP CHECKPOINT STORE name [CASCADE]
 *
 * DML (PUT / GET / LIST / PUT WRITES) is reachable today via plain
 *   INSERT INTO __ck_<name> ...
 *   SELECT ... FROM __ck_<name> ...
 * on the auto-created backing table. A future iteration can sugar the
 * native CHECKPOINT PUT / GET / LIST grammar on top of those primitives;
 * that work doesn't change the wire / catalog shape this task lands.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "database.h"
#include "query_context.h"     /* g_qctx, g_currentDatabase / g_currentSchema */
#include "catalog_internal.h"
#include "Checkpoint.h"

/* ----------------------------------------------------------------
 *  Per-statement state
 * ---------------------------------------------------------------- */
#define CK_PUT_FIELDS 7   /* thread_id, ns, id, parent_id, values, metadata, parent_config */

typedef struct {
    char store_name[CAT_MAX_NAME_LEN];
    char retention[64];
    int  cascade;

    /* PUT / PUT WRITES — 7 user-supplied column values, indexed by put_idx.
     * Each slot is either a string literal or "" + null_flag = 1 for NULL. */
    char put_field[CK_PUT_FIELDS][1024];
    int  put_null[CK_PUT_FIELDS];

    /* GET / LIST */
    char thread_id[256];
    char at_id[256];
    int  limit_n;          /* < 0 = no limit */
} CheckpointOpts;

static __thread CheckpointOpts g_ck;

void ResetCheckpointOpts(void)
{
    memset(&g_ck, 0, sizeof(g_ck));
    g_ck.limit_n = -1;
}
void SetCheckpointStoreName(const char *name)     { if (name) snprintf(g_ck.store_name, sizeof(g_ck.store_name), "%s", name); }
void SetCheckpointStoreRetention(const char *e)   { if (e)    snprintf(g_ck.retention,  sizeof(g_ck.retention),  "%s", e);    }
void SetCheckpointStoreCascade(int cascade)        { g_ck.cascade = cascade ? 1 : 0; }

void SetCheckpointPutField(int idx, const char *literal_or_null)
{
    if (idx < 0 || idx >= CK_PUT_FIELDS) return;
    if (!literal_or_null) {
        g_ck.put_null[idx] = 1;
        g_ck.put_field[idx][0] = '\0';
    } else {
        g_ck.put_null[idx] = 0;
        snprintf(g_ck.put_field[idx], sizeof(g_ck.put_field[idx]),
                 "%s", literal_or_null);
    }
}

void SetCheckpointThread(const char *t)
{
    if (t) snprintf(g_ck.thread_id, sizeof(g_ck.thread_id), "%s", t);
}
void SetCheckpointAtId(const char *i)
{
    if (i) snprintf(g_ck.at_id, sizeof(g_ck.at_id), "%s", i);
}
void SetCheckpointLimit(int n)
{
    g_ck.limit_n = n;
}

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */

static void strip_quotes(char *s)
{
    if (!s) return;
    int n = (int)strlen(s);
    if (n >= 2 && s[0] == '\'' && s[n - 1] == '\'') {
        memmove(s, s + 1, n - 2);
        s[n - 2] = '\0';
    }
}

static void backing_table_name(const char *store_name, char *out, int out_size)
{
    /* Lexer NAME pattern is [A-Za-z][A-Za-z0-9_]* — no leading underscore.
     * Use a "ck_" prefix instead of the spec's "__ck_" so tests can refer
     * to the backing table directly via plain INSERT / SELECT. */
    snprintf(out, out_size, "ck_%s", store_name);
}

static uint32_t resolve_schema_id(void)
{
    /* Resolve the active session schema the same way Create.c does. Falling
     * back to schema_id 1 keeps unit-test contexts (no current db/schema)
     * functional. g_currentDatabase / g_currentSchema are macros around
     * the QueryContext slot — accessible whenever we're inside a query. */
    DatabaseDesc db;
    SchemaDesc   sch;
    if (g_qctx &&
        cat_find_database(g_currentDatabase, &db) == 0 &&
        cat_find_schema(db.db_id, g_currentSchema, &sch) == 0) {
        return sch.schema_id;
    }
    return 1;
}

/* Build the backing table catalog row. Schema is fixed:
 *   thread_id      VARCHAR(255) NOT NULL
 *   checkpoint_ns  VARCHAR(255) NOT NULL
 *   checkpoint_id  VARCHAR(255) PRIMARY KEY
 *   parent_id      VARCHAR(255)
 *   ck_values      JSON          (avoid SQL `values` reserved word)
 *   metadata       JSON
 *   parent_config  JSON
 *   created_at     TIMESTAMP
 */
static int create_backing_table(const char *table_name, uint32_t *out_table_id)
{
    ColumnDesc cols[8];
    memset(cols, 0, sizeof(cols));

    int i = 0;
    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "thread_id");
    cols[i].type_code = 130255; cols[i].is_not_null = 1; cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "checkpoint_ns");
    cols[i].type_code = 130255; cols[i].col_ordinal = i; i++;  /* nullable: empty string maps to NULL in this engine */

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "checkpoint_id");
    cols[i].type_code = 130255; cols[i].is_not_null = 1; cols[i].is_pk = 1; cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "parent_id");
    cols[i].type_code = 130255; cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "ck_values");
    cols[i].type_code = 230000; cols[i].col_ordinal = i; i++;     /* JSON */

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "metadata");
    cols[i].type_code = 230000; cols[i].col_ordinal = i; i++;     /* JSON */

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "parent_config");
    cols[i].type_code = 230000; cols[i].col_ordinal = i; i++;     /* JSON */

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "created_at");
    cols[i].type_code = 100003; cols[i].col_ordinal = i; i++;     /* TIMESTAMP */

    uint32_t sid = resolve_schema_id();
    /* cat_create_table returns the new table_id (positive) on success or
     * -1 on error — NOT 0/non-zero. */
    int rc = cat_create_table(sid, table_name,
                              cols, i,
                              0,    /* pad_size */
                              -1,   /* auto_inc_col */
                              0, 1, /* auto_inc_start, step */
                              0,    /* is_temporary */
                              0);   /* on_commit_delete */
    if (rc < 0) return -1;
    if (out_table_id) *out_table_id = (uint32_t)rc;
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE CHECKPOINT STORE
 * ---------------------------------------------------------------- */
int CreateCheckpointStoreProcess(int if_not_exists)
{
    if (g_ck.store_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE CHECKPOINT STORE: missing store name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    CheckpointStoreDesc existing;
    if (cat_find_checkpoint_store(g_ck.store_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "checkpoint store '%s' already exists", g_ck.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_ck.store_name, tbl, sizeof(tbl));

    uint32_t backing_id = 0;
    if (create_backing_table(tbl, &backing_id) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create backing table for checkpoint store '%s'",
                 g_ck.store_name);
        g_err.error = 1;
        return -1;
    }

    CheckpointStoreDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name, sizeof(desc.name), "%s", g_ck.store_name);
    desc.backing_table_id = backing_id;
    if (g_ck.retention[0]) {
        char buf[64];
        snprintf(buf, sizeof(buf), "%s", g_ck.retention);
        strip_quotes(buf);
        snprintf(desc.retention, sizeof(desc.retention), "%s", buf);
    }

    if (cat_create_checkpoint_store(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register checkpoint store '%s'", g_ck.store_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP CHECKPOINT STORE
 * ---------------------------------------------------------------- */
int DropCheckpointStoreProcess(int if_exists)
{
    CheckpointStoreDesc desc;
    if (cat_find_checkpoint_store(g_ck.store_name, &desc) != 0) {
        if (if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "checkpoint store '%s' does not exist", g_ck.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    /* The cascade flag drops the backing table too. v1 always cascades —
     * the registry reference is the only soft-link we track. */
    char tbl[256];
    backing_table_name(g_ck.store_name, tbl, sizeof(tbl));

    TableDesc td;
    if (cat_find_table(resolve_schema_id(), tbl, &td) == 0) {
        cat_drop_table(td.table_id);
    }
    cat_drop_checkpoint_store(g_ck.store_name);
    return 0;
}

/* ----------------------------------------------------------------
 *  DML — CHECKPOINT PUT / PUT WRITES / GET / LIST
 *
 *  Strategy: bypass parser re-entry. Each DML processor populates the
 *  thread-local INSERT or SELECT options struct directly and calls the
 *  engine processor. Output (rows for GET/LIST, affected count for PUT)
 *  flows through the same ResultSet the executor returns, so MVCC, RLS,
 *  triggers, and replication apply identically to a hand-written
 *  INSERT / SELECT.
 *
 *  The PUT shape is fixed (8 columns; the 8th — created_at — is set
 *  here, not by the user). GET and LIST emit a SELECT against the
 *  backing table with thread_id as the WHERE filter and either a
 *  latest-1 or full-history ORDER BY.
 * ---------------------------------------------------------------- */

/* Accessors for the thread-local DML opt blocks defined in
 * database_globals.c. Declared in query_context.h via macros. */
#include "expression.h"  /* g_expr / g_ins / g_sel macros via database.h */

static const char *put_field_or_null(int idx)
{
    if (g_ck.put_null[idx]) return NULL;
    return g_ck.put_field[idx];
}

/* Append literal to g_ins.data with FIELD_SEP terminator. NULL → engine's
 * NULL marker so tup_build sets the bit in the row's null bitmap. */
static void append_ins_field(const char *value)
{
    char tmp[1024];
    if (!value) {
        snprintf(tmp, sizeof(tmp), "%s", "\x01NULL\x01");
    } else {
        char raw[1024];
        snprintf(raw, sizeof(raw), "%s", value);
        strip_quotes(raw);
        snprintf(tmp, sizeof(tmp), "%s", raw);
    }
    GetInsertions(tmp);
}

int CheckpointPutProcess(int is_writes)
{
    (void)is_writes;   /* v1: writes-vs-full distinction is application-level */

    CheckpointStoreDesc desc;
    if (cat_find_checkpoint_store(g_ck.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "checkpoint store '%s' does not exist", g_ck.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_ck.store_name, tbl, sizeof(tbl));

    /* Reset and populate g_ins for one row, eight columns. */
    TruncateInsert();
    GetInsertionTableName(tbl);

    g_ins.columnCount = 8;
    snprintf(g_ins.columns[0], sizeof(g_ins.columns[0]), "%s", "thread_id");
    snprintf(g_ins.columns[1], sizeof(g_ins.columns[1]), "%s", "checkpoint_ns");
    snprintf(g_ins.columns[2], sizeof(g_ins.columns[2]), "%s", "checkpoint_id");
    snprintf(g_ins.columns[3], sizeof(g_ins.columns[3]), "%s", "parent_id");
    snprintf(g_ins.columns[4], sizeof(g_ins.columns[4]), "%s", "ck_values");
    snprintf(g_ins.columns[5], sizeof(g_ins.columns[5]), "%s", "metadata");
    snprintf(g_ins.columns[6], sizeof(g_ins.columns[6]), "%s", "parent_config");
    snprintf(g_ins.columns[7], sizeof(g_ins.columns[7]), "%s", "created_at");

    /* User-supplied 7 fields, then auto-set created_at. */
    for (int idx = 0; idx < CK_PUT_FIELDS; idx++)
        append_ins_field(put_field_or_null(idx));

    char ts[32];
    {
        time_t now = time(NULL);
        struct tm tm;
#ifdef _WIN32
        gmtime_s(&tm, &now);
#else
        gmtime_r(&now, &tm);
#endif
        strftime(ts, sizeof(ts), "%Y-%m-%d %H:%M:%S", &tm);
    }
    GetInsertions(ts);
    InsertRowSeparator();
    g_ins.rowCount = 1;
    g_ins.insertFromSelect = 0;

    int rc = InsertProcess();
    TruncateInsert();
    return rc;
}

/* Build a stable SELECT against the backing table by populating g_sel
 * + g_expr.whereExpr + ORDER BY + LIMIT, then call SelectProcess. */
static int run_checkpoint_select(int latest_only)
{
    char tbl[256];
    backing_table_name(g_ck.store_name, tbl, sizeof(tbl));

    char thr[256];
    snprintf(thr, sizeof(thr), "%s", g_ck.thread_id);
    strip_quotes(thr);

    /* Reset SELECT state and seed with a star projection over the backing
     * table, plus thread_id = 'thr' WHERE clause. */
    memset(&g_sel, 0, sizeof(g_sel));
    snprintf(g_sel.tblName, sizeof(g_sel.tblName), "%s", tbl);
    g_sel.columnCount = 1;
    snprintf(g_sel.columns[0], sizeof(g_sel.columns[0]), "*");

    g_expr.selectExprCount = 1;
    g_expr.selectExprs[0] = expr_make_star();

    /* WHERE thread_id = 'thr' */
    ExprNode *col = expr_make_column("thread_id");
    ExprNode *lit = expr_make_string(thr);
    g_expr.whereExpr = expr_make_cmp(/* CMP_SUBTOK_EQ */ 4, col, lit);

    /* ORDER BY created_at DESC (newest first); for latest_only also LIMIT 1. */
    g_sel.orderByCount = 1;
    snprintf(g_sel.orderByColumns[0], sizeof(g_sel.orderByColumns[0]), "created_at");
    g_sel.orderByDescs[0] = 1;

    if (latest_only) {
        g_expr.limitExpr = expr_make_int(1);
    } else if (g_ck.limit_n > 0) {
        g_expr.limitExpr = expr_make_int(g_ck.limit_n);
    }

    /* AT id filter narrows the WHERE further. */
    if (latest_only && g_ck.at_id[0]) {
        char at[256];
        snprintf(at, sizeof(at), "%s", g_ck.at_id);
        strip_quotes(at);
        ExprNode *id_col = expr_make_column("checkpoint_id");
        ExprNode *id_lit = expr_make_string(at);
        ExprNode *id_cmp = expr_make_cmp(4, id_col, id_lit);
        g_expr.whereExpr = expr_make_and(g_expr.whereExpr, id_cmp);
        /* AT id implies a single deterministic row → no LIMIT needed. */
        g_expr.limitExpr = NULL;
    }

    return SelectProcess();
}

int CheckpointGetProcess(void)
{
    CheckpointStoreDesc desc;
    if (cat_find_checkpoint_store(g_ck.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "checkpoint store '%s' does not exist", g_ck.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    return run_checkpoint_select(/* latest_only */ 1);
}

int CheckpointListProcess(void)
{
    CheckpointStoreDesc desc;
    if (cat_find_checkpoint_store(g_ck.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "checkpoint store '%s' does not exist", g_ck.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    return run_checkpoint_select(/* latest_only */ 0);
}
