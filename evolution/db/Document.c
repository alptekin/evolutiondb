/*
 * Document.c — Document store backend.
 *
 * Reuses the same SELECT / INSERT / DELETE machinery the rest of the
 * engine ships, so MVCC visibility, RLS, and the standard error path
 * all apply. The only thing this file owns is the doc_<name> backing
 * table layout and the wiring that turns Mongo-style filter JSON into
 * the existing g_expr.whereExpr.
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
#include "mongo_filter.h"
#include "Document.h"

/* ----------------------------------------------------------------
 *  Per-statement staging
 * ---------------------------------------------------------------- */
typedef struct {
    char store_name[CAT_MAX_NAME_LEN];
    int  embedding_dim;
    int  distance_kind;        /* MEMORY_DIST_* */

    char doc_id[256];
    char content[16384];
    char meta_json[8192];
    int  meta_is_null;
    char embedding[16384];     /* "[f1,f2,...]" — empty = no embedding */
    char filter_json[8192];    /* Mongo-style filter, FILTER/SEARCH/DELETE */
    int  limit_n;
    char query_vec[16384];     /* SEARCH query embedding */
} DocumentOpts;

static __thread DocumentOpts g_doc;

void ResetDocumentOpts(void)
{
    memset(&g_doc, 0, sizeof(g_doc));
    g_doc.embedding_dim = 0;
    g_doc.distance_kind = MEMORY_DIST_COSINE;
    g_doc.meta_is_null  = 1;
    g_doc.limit_n       = -1;
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

void SetDocumentStoreName(const char *name)
{
    if (name) snprintf(g_doc.store_name, sizeof(g_doc.store_name), "%s", name);
}
void SetDocumentEmbeddingDim(int dim) { g_doc.embedding_dim = dim; }
void SetDocumentDistance(const char *lit)
{
    if (!lit) return;
    char buf[64];
    snprintf(buf, sizeof(buf), "%s", lit);
    strip_quotes(buf);
    if      (strcasecmp(buf, "cosine") == 0)      g_doc.distance_kind = MEMORY_DIST_COSINE;
    else if (strcasecmp(buf, "l2") == 0)          g_doc.distance_kind = MEMORY_DIST_L2;
    else if (strcasecmp(buf, "inner") == 0 ||
             strcasecmp(buf, "ip") == 0)          g_doc.distance_kind = MEMORY_DIST_INNER;
    else if (strcasecmp(buf, "l1") == 0)          g_doc.distance_kind = MEMORY_DIST_L1;
    else                                            g_doc.distance_kind = MEMORY_DIST_COSINE;
}

void SetDocumentId(const char *id)
{
    if (id) { snprintf(g_doc.doc_id, sizeof(g_doc.doc_id), "%s", id); strip_quotes(g_doc.doc_id); }
}
void SetDocumentContent(const char *c)
{
    if (c) { snprintf(g_doc.content, sizeof(g_doc.content), "%s", c); strip_quotes(g_doc.content); }
}
void SetDocumentMeta(const char *m)
{
    if (!m) { g_doc.meta_is_null = 1; g_doc.meta_json[0] = '\0'; return; }
    g_doc.meta_is_null = 0;
    snprintf(g_doc.meta_json, sizeof(g_doc.meta_json), "%s", m);
    strip_quotes(g_doc.meta_json);
}
void SetDocumentEmbedding(const char *v)
{
    if (!v) { g_doc.embedding[0] = '\0'; return; }
    snprintf(g_doc.embedding, sizeof(g_doc.embedding), "%s", v);
    strip_quotes(g_doc.embedding);
}
void SetDocumentFilterJson(const char *j)
{
    if (!j) { g_doc.filter_json[0] = '\0'; return; }
    snprintf(g_doc.filter_json, sizeof(g_doc.filter_json), "%s", j);
    strip_quotes(g_doc.filter_json);
}
void SetDocumentLimit(int n) { g_doc.limit_n = n; }
void SetDocumentQuery(const char *v)
{
    if (!v) { g_doc.query_vec[0] = '\0'; return; }
    snprintf(g_doc.query_vec, sizeof(g_doc.query_vec), "%s", v);
    strip_quotes(g_doc.query_vec);
}

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void backing_table_name(const char *store_name, char *out, int out_size)
{
    snprintf(out, out_size, "doc_%s", store_name);
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
 *   id          VARCHAR(255) PK NOT NULL
 *   content     VARCHAR(8000)
 *   meta        VARCHAR(8000)         -- JSON-shaped string
 *   embedding   VECTOR(N)              -- only if embedding_dim > 0
 *   created_at  TIMESTAMP NOT NULL
 */
static int create_backing_table(const char *table_name, int embedding_dim,
                                 uint32_t *out_table_id)
{
    ColumnDesc cols[5];
    memset(cols, 0, sizeof(cols));

    int i = 0;
    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "id");
    cols[i].type_code = 130255;       /* VARCHAR(255) */
    cols[i].is_not_null = 1;
    cols[i].is_pk       = 1;
    cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "content");
    cols[i].type_code = 138000;       /* VARCHAR(8000) */
    cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "meta");
    cols[i].type_code = 138000;
    cols[i].col_ordinal = i; i++;

    if (embedding_dim > 0) {
        snprintf(cols[i].col_name, sizeof(cols[i].col_name), "embedding");
        cols[i].type_code = 260000 + embedding_dim;   /* VECTOR(N) */
        cols[i].col_ordinal = i; i++;
    }

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "created_at");
    cols[i].type_code = 100003;       /* TIMESTAMP */
    cols[i].is_not_null = 1;
    cols[i].col_ordinal = i; i++;

    int rc = cat_create_table(resolve_schema_id(), table_name,
                              cols, i,
                              0, -1, 0, 1,
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
 *  CREATE DOCUMENT STORE
 * ---------------------------------------------------------------- */
int CreateDocumentStoreProcess(int if_not_exists)
{
    if (g_doc.store_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE DOCUMENT STORE: missing name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    DocumentStoreDesc existing;
    if (cat_find_document_store(g_doc.store_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "document store '%s' already exists", g_doc.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_doc.store_name, tbl, sizeof(tbl));

    uint32_t backing_id = 0;
    if (create_backing_table(tbl, g_doc.embedding_dim, &backing_id) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create backing table for document store '%s'",
                 g_doc.store_name);
        g_err.error = 1;
        return -1;
    }

    DocumentStoreDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name, sizeof(desc.name), "%s", g_doc.store_name);
    desc.backing_table_id = backing_id;
    desc.embedding_dim = g_doc.embedding_dim;
    desc.distance_kind = g_doc.distance_kind;

    if (cat_create_document_store(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register document store '%s'", g_doc.store_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

int DropDocumentStoreProcess(int if_exists)
{
    DocumentStoreDesc desc;
    if (cat_find_document_store(g_doc.store_name, &desc) != 0) {
        if (if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "document store '%s' does not exist", g_doc.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_doc.store_name, tbl, sizeof(tbl));
    TableDesc td;
    if (cat_find_table(resolve_schema_id(), tbl, &td) == 0) {
        cat_drop_table(td.table_id);
    }
    cat_drop_document_store(g_doc.store_name);
    return 0;
}

/* ----------------------------------------------------------------
 *  Reuse SELECT / INSERT / DELETE machinery
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
extern int DeleteProcess(void);

/* ----------------------------------------------------------------
 *  DOCUMENT WRITE INTO name VALUES (id, content, meta [, embedding])
 * ---------------------------------------------------------------- */
int DocumentWriteProcess(void)
{
    DocumentStoreDesc desc;
    if (cat_find_document_store(g_doc.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "document store '%s' does not exist", g_doc.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_doc.store_name, tbl, sizeof(tbl));

    char ts_buf[32];
    make_iso_timestamp(ts_buf, sizeof(ts_buf));

    memset(&g_ins, 0, sizeof(g_ins));
    snprintf(g_ins.tblName, sizeof(g_ins.tblName), "%s", tbl);

    int has_emb = (desc.embedding_dim > 0 && g_doc.embedding[0]);
    g_ins.columnCount = has_emb ? 5 : 4;
    snprintf(g_ins.columns[0], 128, "id");
    snprintf(g_ins.columns[1], 128, "content");
    snprintf(g_ins.columns[2], 128, "meta");
    if (has_emb) {
        snprintf(g_ins.columns[3], 128, "embedding");
        snprintf(g_ins.columns[4], 128, "created_at");
    } else {
        snprintf(g_ins.columns[3], 128, "created_at");
    }

    char buf[32768];
    int pos = snprintf(buf, sizeof(buf), "%s\x1F%s\x1F",
                       g_doc.doc_id, g_doc.content);
    if (g_doc.meta_is_null) {
        pos += snprintf(buf + pos, sizeof(buf) - pos, "\x01NULL\x01\x1F");
    } else {
        pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F", g_doc.meta_json);
    }
    if (has_emb) {
        pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F", g_doc.embedding);
    }
    pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F\x02", ts_buf);
    snprintf(g_ins.data, sizeof(g_ins.data), "%s", buf);
    return InsertProcess();
}

/* ----------------------------------------------------------------
 *  DOCUMENT FILTER FROM name WHERE 'json' [LIMIT n]
 * ---------------------------------------------------------------- */
int DocumentFilterProcess(void)
{
    DocumentStoreDesc desc;
    if (cat_find_document_store(g_doc.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "document store '%s' does not exist", g_doc.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_doc.store_name, tbl, sizeof(tbl));

    seed_select(tbl, expr_make_column("id"), "id");
    add_select_col(expr_make_column("content"),    "content");
    add_select_col(expr_make_column("meta"),       "meta");
    if (desc.embedding_dim > 0)
        add_select_col(expr_make_column("embedding"), "embedding");
    add_select_col(expr_make_column("created_at"), "created_at");

    if (g_doc.filter_json[0]) {
        char err_buf[256] = "";
        ExprNode *where = mongo_filter_parse(g_doc.filter_json,
                                              err_buf, sizeof(err_buf));
        /* NULL with an empty err_buf means the filter parsed cleanly
         * but had no clauses (e.g., the all-documents wildcard "{}").
         * That just leaves whereExpr unset. */
        if (!where && err_buf[0]) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "DOCUMENT FILTER: %s", err_buf);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("22023");
            return -1;
        }
        if (where) g_expr.whereExpr = where;
    }
    if (g_doc.limit_n > 0) g_expr.limitExpr = expr_make_int(g_doc.limit_n);
    return SelectProcess();
}

/* ----------------------------------------------------------------
 *  DOCUMENT SEARCH name USING VECTOR 'q' [WHERE 'json'] LIMIT k
 *
 *  Projects (id, content, meta, distance) — caller sorts client-side
 *  on the score column; server-side ORDER BY expr is the next task.
 * ---------------------------------------------------------------- */
int DocumentSearchProcess(void)
{
    DocumentStoreDesc desc;
    if (cat_find_document_store(g_doc.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "document store '%s' does not exist", g_doc.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (desc.embedding_dim <= 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "document store '%s' was created without an embedding column",
                 g_doc.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_doc.store_name, tbl, sizeof(tbl));

    int op_node = EXPR_VEC_COSINE;
    switch (desc.distance_kind) {
        case MEMORY_DIST_L2:    op_node = EXPR_VEC_L2;    break;
        case MEMORY_DIST_INNER: op_node = EXPR_VEC_INNER; break;
        case MEMORY_DIST_L1:    op_node = EXPR_VEC_L1;    break;
        default:                op_node = EXPR_VEC_COSINE; break;
    }
    ExprNode *score = expr_make_func2(op_node,
                                       expr_make_column("embedding"),
                                       expr_make_string(g_doc.query_vec),
                                       "score");

    seed_select(tbl, expr_make_column("id"), "id");
    add_select_col(expr_make_column("content"), "content");
    add_select_col(expr_make_column("meta"),    "meta");
    add_select_col(score, "score");

    if (g_doc.filter_json[0]) {
        char err_buf[256];
        ExprNode *where = mongo_filter_parse(g_doc.filter_json,
                                              err_buf, sizeof(err_buf));
        if (!where) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "DOCUMENT SEARCH: %s", err_buf);
            g_err.error = 1;
            EVOSQL_SET_SQLSTATE("22023");
            return -1;
        }
        g_expr.whereExpr = where;
    }
    if (g_doc.limit_n > 0) g_expr.limitExpr = expr_make_int(g_doc.limit_n);
    return SelectProcess();
}

/* ----------------------------------------------------------------
 *  DOCUMENT DELETE FROM name WHERE 'json'
 * ---------------------------------------------------------------- */
int DocumentDeleteProcess(void)
{
    DocumentStoreDesc desc;
    if (cat_find_document_store(g_doc.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "document store '%s' does not exist", g_doc.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (g_doc.filter_json[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "DOCUMENT DELETE requires a filter — pass {} to wipe everything");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_doc.store_name, tbl, sizeof(tbl));

    char err_buf[256] = "";
    ExprNode *where = mongo_filter_parse(g_doc.filter_json,
                                          err_buf, sizeof(err_buf));
    if (!where && err_buf[0]) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "DOCUMENT DELETE: %s", err_buf);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("22023");
        return -1;
    }
    if (!where) {
        /* {} → wipe everything. Build a 1=1 sentinel because the
         * Delete path requires a non-NULL whereExpr to differentiate
         * "delete all (intentional)" from "missing WHERE clause". */
        where = expr_make_cmp(4 /* EQ */,
                               expr_make_int(1), expr_make_int(1));
    }

    memset(&g_del, 0, sizeof(g_del));
    snprintf(g_del.tblName, sizeof(g_del.tblName), "%s", tbl);
    g_expr.whereExpr = where;
    return DeleteProcess();
}
