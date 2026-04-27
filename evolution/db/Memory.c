/*
 * Memory.c — Long-term agent memory store backend
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
#include "mvcc.h"
#include "Memory.h"

/* ----------------------------------------------------------------
 *  Per-statement state
 * ---------------------------------------------------------------- */
typedef struct {
    char store_name[CAT_MAX_NAME_LEN];
    int  embedding_dim;
    int  distance_kind;
    int  cascade;

    char ns[256];
    char key[256];
    char value_json[8192];
    int  value_is_null;
    char embedding[16384];      /* "[f1,f2,...]" — empty = no embedding */
    char query_vec[16384];      /* SEARCH query embedding */
    int  limit_n;               /* < 0 = no limit (default 10 for SEARCH) */
    char prefix[256];
    int  prefix_set;
} MemoryOpts;

static __thread MemoryOpts g_mem;

void ResetMemoryOpts(void)
{
    memset(&g_mem, 0, sizeof(g_mem));
    g_mem.embedding_dim = 0;
    g_mem.distance_kind = MEMORY_DIST_COSINE;
    g_mem.limit_n = -1;
}

void SetMemoryStoreName(const char *name)
{
    if (name) snprintf(g_mem.store_name, sizeof(g_mem.store_name), "%s", name);
}
void SetMemoryEmbeddingDim(int dim)         { g_mem.embedding_dim = dim; }
void SetMemoryStoreCascade(int c)            { g_mem.cascade = c ? 1 : 0; }

static void strip_quotes(char *s)
{
    if (!s) return;
    int n = (int)strlen(s);
    if (n >= 2 && s[0] == '\'' && s[n - 1] == '\'') {
        memmove(s, s + 1, n - 2);
        s[n - 2] = '\0';
    }
}

void SetMemoryDistance(const char *lit)
{
    if (!lit) return;
    char buf[64];
    snprintf(buf, sizeof(buf), "%s", lit);
    strip_quotes(buf);
    if      (strcasecmp(buf, "cosine") == 0)            g_mem.distance_kind = MEMORY_DIST_COSINE;
    else if (strcasecmp(buf, "l2")     == 0)            g_mem.distance_kind = MEMORY_DIST_L2;
    else if (strcasecmp(buf, "inner")  == 0 ||
             strcasecmp(buf, "ip")     == 0)            g_mem.distance_kind = MEMORY_DIST_INNER;
    else if (strcasecmp(buf, "l1")     == 0)            g_mem.distance_kind = MEMORY_DIST_L1;
    else                                                 g_mem.distance_kind = MEMORY_DIST_COSINE;
}

void SetMemoryNs(const char *ns)
{
    if (ns) { snprintf(g_mem.ns, sizeof(g_mem.ns), "%s", ns); strip_quotes(g_mem.ns); }
}
void SetMemoryKey(const char *k)
{
    if (k) { snprintf(g_mem.key, sizeof(g_mem.key), "%s", k); strip_quotes(g_mem.key); }
}
void SetMemoryValue(const char *json_or_null)
{
    if (!json_or_null) {
        g_mem.value_is_null = 1;
        g_mem.value_json[0] = '\0';
    } else {
        g_mem.value_is_null = 0;
        snprintf(g_mem.value_json, sizeof(g_mem.value_json), "%s", json_or_null);
        strip_quotes(g_mem.value_json);
    }
}
void SetMemoryEmbedding(const char *v)
{
    if (!v) { g_mem.embedding[0] = '\0'; return; }
    snprintf(g_mem.embedding, sizeof(g_mem.embedding), "%s", v);
    strip_quotes(g_mem.embedding);
}
void SetMemoryQuery(const char *v)
{
    if (!v) { g_mem.query_vec[0] = '\0'; return; }
    snprintf(g_mem.query_vec, sizeof(g_mem.query_vec), "%s", v);
    strip_quotes(g_mem.query_vec);
}
void SetMemoryLimit(int n) { g_mem.limit_n = n; }
void SetMemoryPrefix(const char *prefix)
{
    if (!prefix) { g_mem.prefix_set = 0; return; }
    snprintf(g_mem.prefix, sizeof(g_mem.prefix), "%s", prefix);
    strip_quotes(g_mem.prefix);
    g_mem.prefix_set = 1;
}

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void backing_table_name(const char *store_name, char *out, int out_size)
{
    snprintf(out, out_size, "mem_%s", store_name);
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

/* Build the composite "namespace\x1Ekey" PK string.
 *
 * 0x1E (Record Separator) is used instead of 0x1F because GetInsertions
 * strips FIELD_SEP_CHAR (0x1F) and ROW_SEP (0x02) from incoming values
 * to protect the in-memory FIELD_SEP-delimited buffer from corruption.
 * 0x1E doesn't conflict with either marker. */
static void make_pk(const char *ns, const char *key, char *out, int out_size)
{
    snprintf(out, out_size, "%s\x1E%s", ns ? ns : "", key ? key : "");
}

/* Build the backing table catalog row.
 *   namespace      VARCHAR(255) NOT NULL
 *   mem_key        VARCHAR(255) NOT NULL
 *   pk             VARCHAR(512) PRIMARY KEY  (namespace + 0x1F + mem_key)
 *   value          JSON
 *   embedding      VECTOR(N)               -- only if N > 0
 *   created_at     TIMESTAMP
 *   ttl_at         TIMESTAMP
 *
 * The embedding column is omitted entirely when embedding_dim is 0 so a
 * memory store with no semantic search remains a pure JSON KV table. */
static int create_backing_table(const char *table_name, int embedding_dim,
                                uint32_t *out_table_id)
{
    ColumnDesc cols[8];
    memset(cols, 0, sizeof(cols));

    int i = 0;
    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "mem_namespace");
    cols[i].type_code = 130255; cols[i].is_not_null = 1; cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "mem_key");
    cols[i].type_code = 130255; cols[i].is_not_null = 1; cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "pk");
    cols[i].type_code = 130512; cols[i].is_not_null = 1; cols[i].is_pk = 1; cols[i].col_ordinal = i; i++;

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "mem_value");
    cols[i].type_code = 230000; cols[i].col_ordinal = i; i++;     /* JSON */

    if (embedding_dim > 0) {
        snprintf(cols[i].col_name, sizeof(cols[i].col_name), "embedding");
        cols[i].type_code = 260000 + embedding_dim;               /* VECTOR(N) */
        cols[i].col_ordinal = i; i++;
    }

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "created_at");
    cols[i].type_code = 100003; cols[i].col_ordinal = i; i++;     /* TIMESTAMP */

    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "ttl_at");
    cols[i].type_code = 100003; cols[i].col_ordinal = i; i++;     /* TIMESTAMP, nullable */

    int rc = cat_create_table(resolve_schema_id(), table_name,
                              cols, i,
                              0,       /* pad_size */
                              -1,      /* auto_inc_col */
                              0, 1,    /* auto_inc_start, step */
                              0, 0);   /* is_temporary, on_commit_delete */
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
 *  CREATE MEMORY STORE
 * ---------------------------------------------------------------- */
int CreateMemoryStoreProcess(int if_not_exists)
{
    if (g_mem.store_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE MEMORY STORE: missing store name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    MemoryStoreDesc existing;
    if (cat_find_memory_store(g_mem.store_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' already exists", g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_mem.store_name, tbl, sizeof(tbl));

    uint32_t backing_id = 0;
    if (create_backing_table(tbl, g_mem.embedding_dim, &backing_id) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create backing table for memory store '%s'",
                 g_mem.store_name);
        g_err.error = 1;
        return -1;
    }

    MemoryStoreDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name, sizeof(desc.name), "%s", g_mem.store_name);
    desc.backing_table_id = backing_id;
    desc.embedding_dim    = g_mem.embedding_dim;
    desc.distance_kind    = g_mem.distance_kind;

    if (cat_create_memory_store(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register memory store '%s'", g_mem.store_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  DROP MEMORY STORE
 * ---------------------------------------------------------------- */
int DropMemoryStoreProcess(int if_exists)
{
    MemoryStoreDesc desc;
    if (cat_find_memory_store(g_mem.store_name, &desc) != 0) {
        if (if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' does not exist", g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_mem.store_name, tbl, sizeof(tbl));

    TableDesc td;
    if (cat_find_table(resolve_schema_id(), tbl, &td) == 0) {
        cat_drop_table(td.table_id);
    }
    cat_drop_memory_store(g_mem.store_name);
    return 0;
}

/* ----------------------------------------------------------------
 *  MEMORY PUT — populates g_ins, runs InsertProcess
 * ---------------------------------------------------------------- */
int MemoryPutProcess(void)
{
    MemoryStoreDesc desc;
    if (cat_find_memory_store(g_mem.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' does not exist", g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_mem.store_name, tbl, sizeof(tbl));

    /* PUT semantics: upsert. If a row already exists at the same
     * (namespace, mem_key), delete it first so the INSERT succeeds.
     * Done here at the engine level (DELETE → INSERT) because the
     * existing INSERT path doesn't expose a generic upsert. */
    char pk[600];
    make_pk(g_mem.ns, g_mem.key, pk, sizeof(pk));
    {
        TableDesc dtd;
        if (cat_find_table(resolve_schema_id(), tbl, &dtd) == 0) {
            BTree2 pk_tree = { .root_page = dtd.pk_root_page };
            RowID rid;
            if (bt2_search(&pk_tree, pk, &rid) == 0) {
                if (g_qctx) mvcc_ensure_xid(&g_qctx->mvcc_xid);
                tapi_heap_delete(rid);
                bt2_delete(&pk_tree, pk);
            }
        }
    }

    TruncateInsert();
    GetInsertionTableName(tbl);

    int has_emb = (desc.embedding_dim > 0);
    int ncols = has_emb ? 7 : 6;

    g_ins.columnCount = ncols;
    int c = 0;
    snprintf(g_ins.columns[c++], 128, "%s", "mem_namespace");
    snprintf(g_ins.columns[c++], 128, "%s", "mem_key");
    snprintf(g_ins.columns[c++], 128, "%s", "pk");
    snprintf(g_ins.columns[c++], 128, "%s", "mem_value");
    if (has_emb) snprintf(g_ins.columns[c++], 128, "%s", "embedding");
    snprintf(g_ins.columns[c++], 128, "%s", "created_at");
    snprintf(g_ins.columns[c++], 128, "%s", "ttl_at");

    GetInsertions(g_mem.ns);
    GetInsertions(g_mem.key);
    GetInsertions(pk);
    if (g_mem.value_is_null) {
        char nm[16] = NULL_MARKER;
        GetInsertions(nm);
    } else {
        GetInsertions(g_mem.value_json);
    }
    if (has_emb) {
        if (g_mem.embedding[0] == '\0') {
            char nm[16] = NULL_MARKER;
            GetInsertions(nm);
        } else {
            GetInsertions(g_mem.embedding);
        }
    }
    char ts[32];
    make_iso_timestamp(ts, sizeof(ts));
    GetInsertions(ts);
    {
        char nm[16] = NULL_MARKER;
        GetInsertions(nm);   /* ttl_at NULL by default */
    }
    InsertRowSeparator();
    g_ins.rowCount = 1;
    g_ins.insertFromSelect = 0;

    int rc = InsertProcess();
    TruncateInsert();
    return rc;
}

/* ----------------------------------------------------------------
 *  Generic SELECT runner for GET / SEARCH / LIST NAMESPACES — wires
 *  g_sel + g_expr and calls SelectProcess. The caller fills the WHERE
 *  expression and any ORDER BY / LIMIT before invoking.
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
 *  MEMORY GET FROM name WHERE NS=ns AND KEY=key
 * ---------------------------------------------------------------- */
int MemoryGetProcess(void)
{
    MemoryStoreDesc desc;
    if (cat_find_memory_store(g_mem.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' does not exist", g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_mem.store_name, tbl, sizeof(tbl));

    seed_select(tbl, expr_make_column("mem_namespace"), "mem_namespace");
    add_select_col(expr_make_column("mem_key"),    "mem_key");
    add_select_col(expr_make_column("mem_value"),       "mem_value");
    if (desc.embedding_dim > 0)
        add_select_col(expr_make_column("embedding"), "embedding");
    add_select_col(expr_make_column("created_at"),  "created_at");

    char pk[600];
    make_pk(g_mem.ns, g_mem.key, pk, sizeof(pk));
    g_expr.whereExpr = expr_make_cmp(4 /* CMP_SUBTOK_EQ */,
                                     expr_make_column("pk"),
                                     expr_make_string(pk));
    g_expr.limitExpr = expr_make_int(1);
    return SelectProcess();
}

/* ----------------------------------------------------------------
 *  MEMORY SEARCH name USING VECTOR query [LIMIT k]
 *
 *  Selects all rows, projects (namespace, mem_key, value, embedding,
 *  l2_distance(embedding, query) AS score). Caller-side ORDER BY is
 *  not yet wired through this path (Task 169 will add ORDER BY-expr);
 *  for now the projection lets the user sort client-side. SEARCH still
 *  benefits from semantic relevance because the score column is
 *  computed per row using the configured distance metric.
 * ---------------------------------------------------------------- */
int MemorySearchProcess(void)
{
    MemoryStoreDesc desc;
    if (cat_find_memory_store(g_mem.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' does not exist", g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (desc.embedding_dim <= 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' was created without an embedding column",
                 g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42P01");
        return -1;
    }

    char tbl[256];
    backing_table_name(g_mem.store_name, tbl, sizeof(tbl));

    /* Distance expression: choose function by stored distance_kind. */
    int op_node = EXPR_VEC_COSINE;
    switch (desc.distance_kind) {
        case MEMORY_DIST_L2:    op_node = EXPR_VEC_L2;    break;
        case MEMORY_DIST_INNER: op_node = EXPR_VEC_INNER; break;
        case MEMORY_DIST_L1:    op_node = EXPR_VEC_L1;    break;
        default:                op_node = EXPR_VEC_COSINE; break;
    }
    ExprNode *score = expr_make_func2(op_node,
                                       expr_make_column("embedding"),
                                       expr_make_string(g_mem.query_vec),
                                       "score");

    seed_select(tbl, expr_make_column("mem_namespace"), "mem_namespace");
    add_select_col(expr_make_column("mem_key"), "mem_key");
    add_select_col(expr_make_column("mem_value"),   "mem_value");
    add_select_col(score,                       "score");

    /* ORDER BY 4 (the score column) ascending so closest matches come
     * first. The ordinal form bypasses the missing ORDER BY <expr>
     * grammar (Task 169 covers that for native operators). */
    AddOrderByColumn("4", 0);

    if (g_mem.limit_n > 0) {
        g_expr.limitExpr = expr_make_int(g_mem.limit_n);
    }
    return SelectProcess();
}

/* ----------------------------------------------------------------
 *  MEMORY DELETE FROM name WHERE NS=ns AND KEY=key
 *
 *  Routes through the engine's DeleteProcess so RLS policies, FK
 *  cascade, MVCC, and triggers all apply identically to a
 *  hand-written DELETE FROM mem_<name> WHERE pk = '...'.
 * ---------------------------------------------------------------- */
int MemoryDeleteProcess(void)
{
    MemoryStoreDesc desc;
    if (cat_find_memory_store(g_mem.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' does not exist", g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_mem.store_name, tbl, sizeof(tbl));

    char pk[600];
    make_pk(g_mem.ns, g_mem.key, pk, sizeof(pk));

    /* Populate DeleteOpts and emit DELETE FROM mem_<name> WHERE pk=...
     * The standard delete path applies any RLS policy attached to the
     * backing table — that's what makes MEMORY DELETE multi-tenant safe. */
    memset(&g_del, 0, sizeof(g_del));
    snprintf(g_del.tblName, sizeof(g_del.tblName), "%s", tbl);
    g_expr.whereExpr = expr_make_cmp(4 /* CMP_SUBTOK_EQ */,
                                     expr_make_column("pk"),
                                     expr_make_string(pk));
    return DeleteProcess();
}

/* ----------------------------------------------------------------
 *  MEMORY LIST NAMESPACES IN name [PREFIX prefix]
 * ---------------------------------------------------------------- */
int MemoryListNamespacesProcess(void)
{
    MemoryStoreDesc desc;
    if (cat_find_memory_store(g_mem.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "memory store '%s' does not exist", g_mem.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char tbl[256];
    backing_table_name(g_mem.store_name, tbl, sizeof(tbl));

    /* SELECT DISTINCT namespace FROM mem_<name> [WHERE namespace LIKE 'prefix%'] */
    seed_select(tbl, expr_make_column("mem_namespace"), "mem_namespace");
    g_sel.distinct = 1;

    if (g_mem.prefix_set && g_mem.prefix[0]) {
        char pat[300];
        snprintf(pat, sizeof(pat), "%s%%", g_mem.prefix);
        g_expr.whereExpr = expr_make_like(
            expr_make_column("mem_namespace"),
            expr_make_string(pat));
    }
    return SelectProcess();
}
