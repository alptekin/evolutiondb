/*
 * Entity.c — Entity store backend.
 *
 * PUT does upsert-by-key: if a row exists for the key, UPDATE
 * summary / facts and bump mention_count + last_seen; else INSERT
 * a fresh row with mention_count = 1.
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
#include "Entity.h"

/* ----------------------------------------------------------------
 *  Per-statement staging
 * ---------------------------------------------------------------- */
typedef struct {
    char store_name[CAT_MAX_NAME_LEN];
    char key_buf[256];
    char summary[8192];
    char facts[8192];
    int  facts_is_null;
    int  limit_n;
} EntityOpts;

static __thread EntityOpts g_e;

void ResetEntityOpts(void)
{
    memset(&g_e, 0, sizeof(g_e));
    g_e.facts_is_null = 1;
    g_e.limit_n = -1;
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

void SetEntityStoreName(const char *n)
{
    if (n) snprintf(g_e.store_name, sizeof(g_e.store_name), "%s", n);
}
void SetEntityKey(const char *k)
{
    if (k) { snprintf(g_e.key_buf, sizeof(g_e.key_buf), "%s", k); strip_quotes(g_e.key_buf); }
}
void SetEntitySummary(const char *s)
{
    if (s) { snprintf(g_e.summary, sizeof(g_e.summary), "%s", s); strip_quotes(g_e.summary); }
}
void SetEntityFacts(const char *f)
{
    if (!f) { g_e.facts_is_null = 1; g_e.facts[0] = '\0'; return; }
    g_e.facts_is_null = 0;
    snprintf(g_e.facts, sizeof(g_e.facts), "%s", f);
    strip_quotes(g_e.facts);
}
void SetEntityLimit(int n) { g_e.limit_n = n; }

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void backing_table_name(const char *store_name, char *out, int sz)
{
    snprintf(out, sz, "ent_%s", store_name);
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

/* Backing table:
 *   entity_key     VARCHAR(255) PK NOT NULL
 *   summary        VARCHAR(8000)
 *   facts          VARCHAR(8000)             -- JSON-shaped string
 *   mention_count  INT NOT NULL
 *   last_seen      TIMESTAMP NOT NULL
 */
static int create_backing_table(const char *table_name, uint32_t *out_id)
{
    ColumnDesc cols[5];
    memset(cols, 0, sizeof(cols));

    snprintf(cols[0].col_name, sizeof(cols[0].col_name), "entity_key");
    cols[0].type_code = 130255; cols[0].is_not_null = 1; cols[0].is_pk = 1;
    cols[0].col_ordinal = 0;

    snprintf(cols[1].col_name, sizeof(cols[1].col_name), "summary");
    cols[1].type_code = 138000; cols[1].col_ordinal = 1;

    snprintf(cols[2].col_name, sizeof(cols[2].col_name), "facts");
    cols[2].type_code = 138000; cols[2].col_ordinal = 2;

    snprintf(cols[3].col_name, sizeof(cols[3].col_name), "mention_count");
    cols[3].type_code = 10000; cols[3].is_not_null = 1; cols[3].col_ordinal = 3;

    snprintf(cols[4].col_name, sizeof(cols[4].col_name), "last_seen");
    cols[4].type_code = 100003; cols[4].is_not_null = 1; cols[4].col_ordinal = 4;

    int rc = cat_create_table(resolve_schema_id(), table_name,
                              cols, 5, 0, -1, 0, 1, 0, 0);
    if (rc < 0) return -1;
    if (out_id) *out_id = (uint32_t)rc;
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE / DROP
 * ---------------------------------------------------------------- */
int CreateEntityStoreProcess(int if_not_exists)
{
    if (g_e.store_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE ENTITY STORE: missing name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }
    EntityStoreDesc existing;
    if (cat_find_entity_store(g_e.store_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "entity store '%s' already exists", g_e.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_e.store_name, tbl, sizeof(tbl));

    uint32_t backing_id = 0;
    if (create_backing_table(tbl, &backing_id) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create backing table for entity store '%s'",
                 g_e.store_name);
        g_err.error = 1;
        return -1;
    }
    EntityStoreDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name, sizeof(desc.name), "%s", g_e.store_name);
    desc.backing_table_id = backing_id;
    desc.ttl_days = 0;

    if (cat_create_entity_store(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register entity store '%s'", g_e.store_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

int DropEntityStoreProcess(int if_exists)
{
    EntityStoreDesc desc;
    if (cat_find_entity_store(g_e.store_name, &desc) != 0) {
        if (if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "entity store '%s' does not exist", g_e.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_e.store_name, tbl, sizeof(tbl));
    TableDesc td;
    if (cat_find_table(resolve_schema_id(), tbl, &td) == 0) {
        cat_drop_table(td.table_id);
    }
    cat_drop_entity_store(g_e.store_name);
    return 0;
}

/* ----------------------------------------------------------------
 *  Reuse engine machinery
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

extern int InsertProcess(void);
extern int SelectProcess(void);
extern int UpdateProcess(void);

/* ----------------------------------------------------------------
 *  ENTITY PUT INTO name VALUES ('key', 'summary' [, 'facts'])
 * ---------------------------------------------------------------- */
int EntityPutProcess(void)
{
    EntityStoreDesc desc;
    if (cat_find_entity_store(g_e.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "entity store '%s' does not exist", g_e.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_e.store_name, tbl, sizeof(tbl));

    char ts_buf[32];
    make_iso_timestamp(ts_buf, sizeof(ts_buf));

    /* Existence check via direct PK lookup. */
    int existed = 0;
    int prior_count = 0;
    {
        TableDesc td;
        ColumnDesc cols[8];
        int ncols = 0;
        if (tapi_resolve(tbl, &td, cols, &ncols) == 0) {
            BTree2 pk = tapi_pk_tree(&td);
            RowID rid;
            if (bt2_search(&pk, g_e.key_buf, &rid) == 0) {
                existed = 1;
                /* Read mention_count for the bump. */
                char rec[RECORD_BUF_SIZE];
                int rec_len = tapi_heap_read(rid, rec, sizeof(rec));
                if (rec_len > 0) {
                    char fields[CAT_MAX_COLUMNS][256];
                    int  is_null[CAT_MAX_COLUMNS];
                    int nf = tup_extract_fields(rec, rec_len, cols, ncols,
                                                 fields, is_null, CAT_MAX_COLUMNS);
                    for (int i = 0; i < nf; i++) {
                        if (strcasecmp(cols[i].col_name, "mention_count") == 0) {
                            prior_count = atoi(fields[i]);
                            break;
                        }
                    }
                }
            }
        }
    }

    if (existed) {
        /* UPDATE summary / facts / mention_count / last_seen */
        memset(&g_upd, 0, sizeof(g_upd));
        snprintf(g_upd.tblName, sizeof(g_upd.tblName), "%s", tbl);
        memset(&g_ins, 0, sizeof(g_ins));
        snprintf(g_sel.tblName, sizeof(g_sel.tblName), "%s", tbl);
        snprintf(g_ins.columnNames, sizeof(g_ins.columnNames),
                 "summary" "\x1F" "facts" "\x1F" "mention_count"
                 "\x1F" "last_seen" "\x1F");
        char cnt_buf[32];
        snprintf(cnt_buf, sizeof(cnt_buf), "%d", prior_count + 1);
        if (g_e.facts_is_null) {
            snprintf(g_ins.data, sizeof(g_ins.data),
                     "%s\x1F\x01NULL\x01\x1F%s\x1F%s\x1F",
                     g_e.summary, cnt_buf, ts_buf);
        } else {
            snprintf(g_ins.data, sizeof(g_ins.data),
                     "%s\x1F%s\x1F%s\x1F%s\x1F",
                     g_e.summary, g_e.facts, cnt_buf, ts_buf);
        }
        g_expr.whereExpr = expr_make_cmp(4 /* EQ */,
                                          expr_make_column("entity_key"),
                                          expr_make_string(g_e.key_buf));
        return UpdateProcess();
    }

    /* Fresh INSERT with mention_count = 1. */
    memset(&g_ins, 0, sizeof(g_ins));
    snprintf(g_ins.tblName, sizeof(g_ins.tblName), "%s", tbl);
    g_ins.columnCount = 5;
    snprintf(g_ins.columns[0], 128, "entity_key");
    snprintf(g_ins.columns[1], 128, "summary");
    snprintf(g_ins.columns[2], 128, "facts");
    snprintf(g_ins.columns[3], 128, "mention_count");
    snprintf(g_ins.columns[4], 128, "last_seen");

    char buf[32768];
    int pos = snprintf(buf, sizeof(buf), "%s\x1F%s\x1F",
                       g_e.key_buf, g_e.summary);
    if (g_e.facts_is_null)
        pos += snprintf(buf + pos, sizeof(buf) - pos, "\x01NULL\x01\x1F");
    else
        pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F", g_e.facts);
    pos += snprintf(buf + pos, sizeof(buf) - pos, "1\x1F%s\x1F\x02", ts_buf);
    snprintf(g_ins.data, sizeof(g_ins.data), "%s", buf);
    return InsertProcess();
}

/* ----------------------------------------------------------------
 *  ENTITY GET FROM name WHERE KEY = 'k'
 * ---------------------------------------------------------------- */
int EntityGetProcess(void)
{
    EntityStoreDesc desc;
    if (cat_find_entity_store(g_e.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "entity store '%s' does not exist", g_e.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_e.store_name, tbl, sizeof(tbl));

    seed_select(tbl, expr_make_column("entity_key"), "entity_key");
    add_select_col(expr_make_column("summary"),       "summary");
    add_select_col(expr_make_column("facts"),         "facts");
    add_select_col(expr_make_column("mention_count"), "mention_count");
    add_select_col(expr_make_column("last_seen"),     "last_seen");

    g_expr.whereExpr = expr_make_cmp(4 /* EQ */,
                                     expr_make_column("entity_key"),
                                     expr_make_string(g_e.key_buf));
    g_expr.limitExpr = expr_make_int(1);
    return SelectProcess();
}

/* ----------------------------------------------------------------
 *  ENTITY RANK FROM name [LIMIT n]
 *
 *  v1 returns rows ordered by mention_count DESC; client-side sort
 *  is the fallback when the engine's ORDER BY DESC over an INT
 *  column hasn't been wired through the entity surface yet. We emit
 *  a SELECT with an ORDER BY hint by populating g_sel.orderByCount
 *  + g_sel.orderByColumns / orderByDescs.
 * ---------------------------------------------------------------- */
int EntityRankProcess(void)
{
    EntityStoreDesc desc;
    if (cat_find_entity_store(g_e.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "entity store '%s' does not exist", g_e.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_e.store_name, tbl, sizeof(tbl));

    seed_select(tbl, expr_make_column("entity_key"), "entity_key");
    add_select_col(expr_make_column("summary"),       "summary");
    add_select_col(expr_make_column("facts"),         "facts");
    add_select_col(expr_make_column("mention_count"), "mention_count");
    add_select_col(expr_make_column("last_seen"),     "last_seen");

    /* g_sel.orderByCount + orderByCols + orderByDescs drive the sort
     * inside collect_select_results. mention_count DESC, then
     * last_seen DESC for tie-break. */
    g_sel.orderByCount = 2;
    snprintf(g_sel.orderByColumns[0], sizeof(g_sel.orderByColumns[0]), "mention_count");
    g_sel.orderByDescs[0] = 1;
    snprintf(g_sel.orderByColumns[1], sizeof(g_sel.orderByColumns[1]), "last_seen");
    g_sel.orderByDescs[1] = 1;

    if (g_e.limit_n > 0) g_expr.limitExpr = expr_make_int(g_e.limit_n);
    return SelectProcess();
}
