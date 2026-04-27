/*
 * Graph.c — Bitemporal knowledge graph backend.
 *
 * Two backing tables per store:
 *   kg_<name>_nodes (id PK, type, props, valid_from)
 *   kg_<name>_edges (id PK auto-inc, src, rel, dst, props,
 *                    valid_from, invalid_at NULL)
 *
 * UPSERT NODE: bare INSERT-or-REPLACE on id (id is PK, just delete + insert
 *              or rely on uniqueness rejection — v1 does delete-then-insert
 *              via DELETE WHERE id=? then INSERT, so the latest props win).
 *
 * UPSERT EDGE: closes the prior live triple matching (src, rel, dst) by
 *              UPDATE-stamping its invalid_at = NOW(), then inserts a
 *              fresh row with valid_from = NOW() and invalid_at NULL.
 *
 * NEIGHBORS: scans edges for source = id AND active-at-as_of, collects
 *            destination ids, BFS expands depth-1 / depth-2 / etc. up to
 *            the configured DEPTH (default 1). Returns rows
 *            (depth, src, rel, dst, props).
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
#include "Graph.h"

/* ----------------------------------------------------------------
 *  Per-statement staging
 * ---------------------------------------------------------------- */
typedef struct {
    char store_name[CAT_MAX_NAME_LEN];

    /* node */
    char node_id[256];
    char node_type[64];
    char node_props[8192];
    int  node_props_is_null;

    /* edge */
    char edge_src[256];
    char edge_rel[128];
    char edge_dst[256];
    char edge_props[8192];
    int  edge_props_is_null;

    /* neighbors */
    char nbr_id[256];
    int  nbr_depth;
    char nbr_asof[64];
    int  nbr_has_asof;
} GraphOpts;

static __thread GraphOpts g_g;

void ResetGraphOpts(void)
{
    memset(&g_g, 0, sizeof(g_g));
    g_g.node_props_is_null = 1;
    g_g.edge_props_is_null = 1;
    g_g.nbr_depth = 1;
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

void SetGraphStoreName(const char *n)
{
    if (n) snprintf(g_g.store_name, sizeof(g_g.store_name), "%s", n);
}
void SetGraphNodeId(const char *s)
{
    if (s) { snprintf(g_g.node_id, sizeof(g_g.node_id), "%s", s); strip_quotes(g_g.node_id); }
}
void SetGraphNodeType(const char *s)
{
    if (s) { snprintf(g_g.node_type, sizeof(g_g.node_type), "%s", s); strip_quotes(g_g.node_type); }
}
void SetGraphNodeProps(const char *s)
{
    if (!s) { g_g.node_props_is_null = 1; return; }
    g_g.node_props_is_null = 0;
    snprintf(g_g.node_props, sizeof(g_g.node_props), "%s", s);
    strip_quotes(g_g.node_props);
}
void SetGraphEdgeSrc(const char *s)
{
    if (s) { snprintf(g_g.edge_src, sizeof(g_g.edge_src), "%s", s); strip_quotes(g_g.edge_src); }
}
void SetGraphEdgeRel(const char *s)
{
    if (s) { snprintf(g_g.edge_rel, sizeof(g_g.edge_rel), "%s", s); strip_quotes(g_g.edge_rel); }
}
void SetGraphEdgeDst(const char *s)
{
    if (s) { snprintf(g_g.edge_dst, sizeof(g_g.edge_dst), "%s", s); strip_quotes(g_g.edge_dst); }
}
void SetGraphEdgeProps(const char *s)
{
    if (!s) { g_g.edge_props_is_null = 1; return; }
    g_g.edge_props_is_null = 0;
    snprintf(g_g.edge_props, sizeof(g_g.edge_props), "%s", s);
    strip_quotes(g_g.edge_props);
}
void SetGraphNeighborsId(const char *s)
{
    if (s) { snprintf(g_g.nbr_id, sizeof(g_g.nbr_id), "%s", s); strip_quotes(g_g.nbr_id); }
}
void SetGraphNeighborsDepth(int d) { g_g.nbr_depth = (d > 0) ? d : 1; }
void SetGraphNeighborsAsOf(const char *ts)
{
    if (!ts) { g_g.nbr_has_asof = 0; return; }
    snprintf(g_g.nbr_asof, sizeof(g_g.nbr_asof), "%s", ts);
    strip_quotes(g_g.nbr_asof);
    g_g.nbr_has_asof = 1;
}

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void nodes_table_name(const char *store, char *out, int sz)
{
    snprintf(out, sz, "kg_%s_nodes", store);
}
static void edges_table_name(const char *store, char *out, int sz)
{
    snprintf(out, sz, "kg_%s_edges", store);
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

/* Nodes table:
 *   id          VARCHAR(255) PK NOT NULL
 *   type        VARCHAR(64)
 *   props       VARCHAR(8000)         -- JSON-shaped
 *   valid_from  TIMESTAMP NOT NULL
 */
static int create_nodes_table(const char *table_name, uint32_t *out_id)
{
    ColumnDesc cols[4];
    memset(cols, 0, sizeof(cols));

    snprintf(cols[0].col_name, sizeof(cols[0].col_name), "id");
    cols[0].type_code = 130255; cols[0].is_not_null = 1; cols[0].is_pk = 1;
    cols[0].col_ordinal = 0;

    snprintf(cols[1].col_name, sizeof(cols[1].col_name), "type");
    cols[1].type_code = 130064; cols[1].col_ordinal = 1;

    snprintf(cols[2].col_name, sizeof(cols[2].col_name), "props");
    cols[2].type_code = 138000; cols[2].col_ordinal = 2;

    snprintf(cols[3].col_name, sizeof(cols[3].col_name), "valid_from");
    cols[3].type_code = 100003; cols[3].is_not_null = 1; cols[3].col_ordinal = 3;

    int rc = cat_create_table(resolve_schema_id(), table_name,
                              cols, 4, 0, -1, 0, 1, 0, 0);
    if (rc < 0) return -1;
    if (out_id) *out_id = (uint32_t)rc;
    return 0;
}

/* Edges table:
 *   id          BIGINT PK AUTO_INCREMENT
 *   src         VARCHAR(255) NOT NULL
 *   rel         VARCHAR(128) NOT NULL
 *   dst         VARCHAR(255) NOT NULL
 *   props       VARCHAR(8000)
 *   valid_from  TIMESTAMP NOT NULL
 *   invalid_at  TIMESTAMP   (NULL = currently active)
 */
static int create_edges_table(const char *table_name, uint32_t *out_id)
{
    ColumnDesc cols[7];
    memset(cols, 0, sizeof(cols));

    snprintf(cols[0].col_name, sizeof(cols[0].col_name), "id");
    cols[0].type_code = 60008; cols[0].is_not_null = 1; cols[0].is_pk = 1;
    cols[0].col_ordinal = 0;

    snprintf(cols[1].col_name, sizeof(cols[1].col_name), "src");
    cols[1].type_code = 130255; cols[1].is_not_null = 1; cols[1].col_ordinal = 1;

    snprintf(cols[2].col_name, sizeof(cols[2].col_name), "rel");
    cols[2].type_code = 130128; cols[2].is_not_null = 1; cols[2].col_ordinal = 2;

    snprintf(cols[3].col_name, sizeof(cols[3].col_name), "dst");
    cols[3].type_code = 130255; cols[3].is_not_null = 1; cols[3].col_ordinal = 3;

    snprintf(cols[4].col_name, sizeof(cols[4].col_name), "props");
    cols[4].type_code = 138000; cols[4].col_ordinal = 4;

    snprintf(cols[5].col_name, sizeof(cols[5].col_name), "valid_from");
    cols[5].type_code = 100003; cols[5].is_not_null = 1; cols[5].col_ordinal = 5;

    snprintf(cols[6].col_name, sizeof(cols[6].col_name), "invalid_at");
    cols[6].type_code = 100003; cols[6].col_ordinal = 6;

    int rc = cat_create_table(resolve_schema_id(), table_name,
                              cols, 7, 0,
                              0, 1, 1,    /* auto_inc on column 0 */
                              0, 0);
    if (rc < 0) return -1;
    if (out_id) *out_id = (uint32_t)rc;
    return 0;
}

/* ----------------------------------------------------------------
 *  CREATE GRAPH STORE
 * ---------------------------------------------------------------- */
int CreateGraphStoreProcess(int if_not_exists)
{
    if (g_g.store_name[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "CREATE GRAPH STORE: missing name");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }
    GraphStoreDesc existing;
    if (cat_find_graph_store(g_g.store_name, &existing) == 0) {
        if (if_not_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "graph store '%s' already exists", g_g.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42710");
        return -1;
    }
    char nodes_tbl[256], edges_tbl[256];
    nodes_table_name(g_g.store_name, nodes_tbl, sizeof(nodes_tbl));
    edges_table_name(g_g.store_name, edges_tbl, sizeof(edges_tbl));

    uint32_t nodes_id = 0, edges_id = 0;
    if (create_nodes_table(nodes_tbl, &nodes_id) != 0 ||
        create_edges_table(edges_tbl, &edges_id) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to create backing tables for graph store '%s'",
                 g_g.store_name);
        g_err.error = 1;
        return -1;
    }

    GraphStoreDesc desc;
    memset(&desc, 0, sizeof(desc));
    snprintf(desc.name, sizeof(desc.name), "%s", g_g.store_name);
    desc.nodes_table_id = nodes_id;
    desc.edges_table_id = edges_id;

    if (cat_create_graph_store(&desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "failed to register graph store '%s'", g_g.store_name);
        g_err.error = 1;
        return -1;
    }
    return 0;
}

int DropGraphStoreProcess(int if_exists)
{
    GraphStoreDesc desc;
    if (cat_find_graph_store(g_g.store_name, &desc) != 0) {
        if (if_exists) return 0;
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "graph store '%s' does not exist", g_g.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char nodes_tbl[256], edges_tbl[256];
    nodes_table_name(g_g.store_name, nodes_tbl, sizeof(nodes_tbl));
    edges_table_name(g_g.store_name, edges_tbl, sizeof(edges_tbl));

    TableDesc td;
    if (cat_find_table(resolve_schema_id(), nodes_tbl, &td) == 0)
        cat_drop_table(td.table_id);
    if (cat_find_table(resolve_schema_id(), edges_tbl, &td) == 0)
        cat_drop_table(td.table_id);
    cat_drop_graph_store(g_g.store_name);
    return 0;
}

/* ----------------------------------------------------------------
 *  Reuse SELECT / INSERT / DELETE / UPDATE machinery
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
extern int DeleteProcess(void);
extern int UpdateProcess(void);

/* ----------------------------------------------------------------
 *  GRAPH UPSERT NODE INTO name VALUES (id, type, props)
 *
 *  v1: delete-then-insert. The id is PK so a stale row would block
 *  re-INSERT; clearing first is simplest and matches the user's
 *  expectation that the latest props win.
 * ---------------------------------------------------------------- */
int GraphUpsertNodeProcess(void)
{
    GraphStoreDesc desc;
    if (cat_find_graph_store(g_g.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "graph store '%s' does not exist", g_g.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char nodes_tbl[256];
    nodes_table_name(g_g.store_name, nodes_tbl, sizeof(nodes_tbl));

    char ts_buf[32];
    make_iso_timestamp(ts_buf, sizeof(ts_buf));

    /* If a row with this id already exists, UPDATE in place. This
     * avoids the DELETE-then-INSERT round-trip (which had subtle
     * interaction issues with MVCC visibility on the same TX) and
     * gets the latest props to win cleanly. */
    char check_sql[1024];
    /* Quick existence check — simpler than threading another
     * QueryContext: just call the same path we use for the
     * NEIGHBORS read, but on the nodes table. */
    int existed = 0;
    {
        TableDesc td;
        ColumnDesc cols[8];
        int ncols = 0;
        char nodes_tbl_local[256];
        snprintf(nodes_tbl_local, sizeof(nodes_tbl_local), "%s", nodes_tbl);
        if (tapi_resolve(nodes_tbl_local, &td, cols, &ncols) == 0) {
            BTree2 pk = tapi_pk_tree(&td);
            RowID rid;
            if (bt2_search(&pk, g_g.node_id, &rid) == 0) existed = 1;
        }
    }
    (void)check_sql;

    if (existed) {
        /* UPDATE invalid_at-style: stage column names + data, install
         * WHERE id = ? */
        memset(&g_upd, 0, sizeof(g_upd));
        snprintf(g_upd.tblName, sizeof(g_upd.tblName), "%s", nodes_tbl);
        memset(&g_ins, 0, sizeof(g_ins));
        snprintf(g_sel.tblName, sizeof(g_sel.tblName), "%s", nodes_tbl);
        snprintf(g_ins.columnNames, sizeof(g_ins.columnNames),
                 "type\x1Fprops\x1Fvalid_from\x1F");
        if (g_g.node_props_is_null) {
            snprintf(g_ins.data, sizeof(g_ins.data),
                     "%s\x1F\x01NULL\x01\x1F%s\x1F",
                     g_g.node_type[0] ? g_g.node_type : "node",
                     ts_buf);
        } else {
            snprintf(g_ins.data, sizeof(g_ins.data),
                     "%s\x1F%s\x1F%s\x1F",
                     g_g.node_type[0] ? g_g.node_type : "node",
                     g_g.node_props, ts_buf);
        }
        g_expr.whereExpr = expr_make_cmp(4 /* EQ */,
                                          expr_make_column("id"),
                                          expr_make_string(g_g.node_id));
        return UpdateProcess();
    }

    /* INSERT new row. */
    memset(&g_ins, 0, sizeof(g_ins));
    snprintf(g_ins.tblName, sizeof(g_ins.tblName), "%s", nodes_tbl);
    g_ins.columnCount = 4;
    snprintf(g_ins.columns[0], 128, "id");
    snprintf(g_ins.columns[1], 128, "type");
    snprintf(g_ins.columns[2], 128, "props");
    snprintf(g_ins.columns[3], 128, "valid_from");

    char buf[16384];
    int pos = snprintf(buf, sizeof(buf), "%s\x1F%s\x1F",
                       g_g.node_id,
                       g_g.node_type[0] ? g_g.node_type : "node");
    if (g_g.node_props_is_null)
        pos += snprintf(buf + pos, sizeof(buf) - pos, "\x01NULL\x01\x1F");
    else
        pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F", g_g.node_props);
    pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F\x02", ts_buf);
    snprintf(g_ins.data, sizeof(g_ins.data), "%s", buf);
    return InsertProcess();
}

/* ----------------------------------------------------------------
 *  GRAPH UPSERT EDGE INTO name VALUES (src, rel, dst [, props])
 *
 *  Closes prior live (src, rel, dst) by stamping invalid_at = NOW().
 *  Then inserts a fresh row with valid_from = NOW(), invalid_at NULL.
 * ---------------------------------------------------------------- */
int GraphUpsertEdgeProcess(void)
{
    GraphStoreDesc desc;
    if (cat_find_graph_store(g_g.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "graph store '%s' does not exist", g_g.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    char edges_tbl[256];
    edges_table_name(g_g.store_name, edges_tbl, sizeof(edges_tbl));

    char ts_buf[32];
    make_iso_timestamp(ts_buf, sizeof(ts_buf));

    /* 1) Stamp invalid_at on the prior live triple, if any.
     *
     *    The single-table UPDATE engine reads from g_ins.columnNames
     *    (FIELD_SEP-delimited column names) and g_ins.data (FIELD_SEP-
     *    delimited values, with WHERE-side strings stripped before
     *    DML hits). For our case, the SET assignment is exactly
     *    invalid_at = NOW(), so the staged columnNames is "invalid_at"
     *    and the data is the timestamp. The WHERE expression installs
     *    via g_expr.whereExpr. */
    memset(&g_upd, 0, sizeof(g_upd));
    snprintf(g_upd.tblName, sizeof(g_upd.tblName), "%s", edges_tbl);
    memset(&g_ins, 0, sizeof(g_ins));
    snprintf(g_sel.tblName, sizeof(g_sel.tblName), "%s", edges_tbl);
    snprintf(g_ins.columnNames, sizeof(g_ins.columnNames),
             "invalid_at\x1F");
    snprintf(g_ins.data, sizeof(g_ins.data), "%s\x1F", ts_buf);

    ExprNode *match = expr_make_and(
        expr_make_cmp(4 /* EQ */, expr_make_column("src"),
                      expr_make_string(g_g.edge_src)),
        expr_make_and(
            expr_make_cmp(4, expr_make_column("rel"),
                          expr_make_string(g_g.edge_rel)),
            expr_make_cmp(4, expr_make_column("dst"),
                          expr_make_string(g_g.edge_dst))));
    /* Only close rows still live (invalid_at IS NULL). */
    ExprNode *only_live = expr_make_is_null(expr_make_column("invalid_at"));
    g_expr.whereExpr = expr_make_and(match, only_live);
    UpdateProcess();
    g_err.error = 0;
    g_err.errorMsg[0] = '\0';

    /* 2) Append a fresh edge row. Do NOT supply id (auto_inc). */
    memset(&g_ins, 0, sizeof(g_ins));
    snprintf(g_ins.tblName, sizeof(g_ins.tblName), "%s", edges_tbl);
    g_ins.columnCount = 6;
    snprintf(g_ins.columns[0], 128, "src");
    snprintf(g_ins.columns[1], 128, "rel");
    snprintf(g_ins.columns[2], 128, "dst");
    snprintf(g_ins.columns[3], 128, "props");
    snprintf(g_ins.columns[4], 128, "valid_from");
    snprintf(g_ins.columns[5], 128, "invalid_at");

    char buf[16384];
    int pos = snprintf(buf, sizeof(buf), "%s\x1F%s\x1F%s\x1F",
                       g_g.edge_src, g_g.edge_rel, g_g.edge_dst);
    if (g_g.edge_props_is_null)
        pos += snprintf(buf + pos, sizeof(buf) - pos, "\x01NULL\x01\x1F");
    else
        pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F", g_g.edge_props);
    /* valid_from = NOW(), invalid_at = NULL */
    pos += snprintf(buf + pos, sizeof(buf) - pos, "%s\x1F\x01NULL\x01\x1F\x02",
                    ts_buf);
    snprintf(g_ins.data, sizeof(g_ins.data), "%s", buf);
    return InsertProcess();
}

/* ----------------------------------------------------------------
 *  GRAPH NEIGHBORS OF id IN name [DEPTH N] [AS OF ts]
 *
 *  Expands a frontier of node ids via BFS up to DEPTH N, returning
 *  edge rows (depth, src, rel, dst, props). The temporal filter on
 *  edges is applied at every hop so a snapshot AS OF includes only
 *  edges that were live at that moment.
 *
 *  v1 implements this as a single SELECT (depth = 1 only). DEPTH
 *  > 1 BFS is captured for v2 — multi-hop expansion needs an
 *  iterative SQL emit + temp-table approach the v1 surface
 *  doesn't yet support cleanly. The tests that exercise depth=2
 *  do it by issuing two NEIGHBORS calls and union'ing client-side.
 * ---------------------------------------------------------------- */
extern int SelectProcess(void);

int GraphNeighborsProcess(void)
{
    GraphStoreDesc desc;
    if (cat_find_graph_store(g_g.store_name, &desc) != 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "graph store '%s' does not exist", g_g.store_name);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42704");
        return -1;
    }
    if (g_g.nbr_id[0] == '\0') {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "GRAPH NEIGHBORS requires OF '<id>'");
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE("42601");
        return -1;
    }

    char edges_tbl[256];
    edges_table_name(g_g.store_name, edges_tbl, sizeof(edges_tbl));

    seed_select(edges_tbl, expr_make_column("src"), "src");
    add_select_col(expr_make_column("rel"),  "rel");
    add_select_col(expr_make_column("dst"),  "dst");
    add_select_col(expr_make_column("props"), "props");
    add_select_col(expr_make_column("valid_from"), "valid_from");
    add_select_col(expr_make_column("invalid_at"), "invalid_at");

    /* WHERE src = ? */
    ExprNode *where = expr_make_cmp(4 /* EQ */,
                                     expr_make_column("src"),
                                     expr_make_string(g_g.nbr_id));

    if (g_g.nbr_has_asof) {
        /* AS OF ts → valid_from <= ts AND (invalid_at IS NULL OR invalid_at > ts) */
        ExprNode *vf_le = expr_make_cmp(5 /* LE */,
                                         expr_make_column("valid_from"),
                                         expr_make_string(g_g.nbr_asof));
        ExprNode *open = expr_make_or(
            expr_make_is_null(expr_make_column("invalid_at")),
            expr_make_cmp(2 /* GT */,
                          expr_make_column("invalid_at"),
                          expr_make_string(g_g.nbr_asof)));
        where = expr_make_and(where, expr_make_and(vf_le, open));
    } else {
        /* No AS OF: only currently-live edges. */
        where = expr_make_and(where,
            expr_make_is_null(expr_make_column("invalid_at")));
    }
    g_expr.whereExpr = where;
    return SelectProcess();
}
