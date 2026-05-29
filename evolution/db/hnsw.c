/*
 * hnsw.c — In-memory vector index for `CREATE INDEX ... USING HNSW`
 *
 * v1 strategy: brute-force top-k over a dense per-graph vector store.
 * The module exposes the evovector build + search surface so SQL
 * callers see the same shape a v1.1 graph-based traversal will use.
 *
 * Graphs live in a small static table keyed by (table_id, index_name);
 * they are populated at CREATE INDEX time and freed on DROP INDEX or
 * hnsw_shutdown. Pre-existing HNSW indexes are NOT rebuilt at startup
 * in v1 — a subsequent CREATE INDEX / REINDEX is required. The DDL
 * layer records enough catalog metadata for that replay to happen
 * automatically in a future iteration.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <pthread.h>

#include "hnsw.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "tuple_format.h"

#define HNSW_MAX_GRAPHS    64
#define HNSW_MAX_PK_LEN    256

typedef struct HnswGraph {
    uint32_t table_id;
    char     index_name[CAT_MAX_NAME_LEN];
    int      in_use;

    int      dim;
    int      distance_kind;
    int      m;
    int      ef_construction;

    /* Dense vector store — backs distance evaluation for both the
     * graph traversal and the brute-force fallback. */
    int      count;
    int      cap;
    float   *vectors;      /* cap * dim floats, row-major */
    char   (*pk_keys)[HNSW_MAX_PK_LEN];

    /* HNSW graph (v1.1). Built over the dense store after the scan.
     * Each node carries one neighbor list per level it reaches; node i
     * shares index i with vectors[i*dim] / pk_keys[i]. */
    int      ef_search;        /* beam width at layer 0 for queries */
    int      graph_built;      /* 0 = fall back to brute force */
    int      entry;            /* entry-point node id (top of graph) */
    int      max_level;        /* highest level any node currently holds */
    int     *node_level;       /* [cap] top level per node */
    int   ***nbr;              /* nbr[node][level] -> malloc'd id array */
    int    **nbr_cnt;          /* nbr_cnt[node][level] -> neighbor count */
    uint64_t rng;              /* xorshift state for level assignment */

    /* Per-search scratch, reused under g_mu (avoids re-malloc each query). */
    int     *visited;          /* [cap] stamp-marked visited set */
    int      visit_stamp;
} HnswGraph;

static HnswGraph        g_graphs[HNSW_MAX_GRAPHS];
static pthread_mutex_t  g_mu = PTHREAD_MUTEX_INITIALIZER;

void hnsw_init(void)
{
    /* Zeroing the static array is sufficient for lazy allocation. */
    pthread_mutex_lock(&g_mu);
    for (int i = 0; i < HNSW_MAX_GRAPHS; i++) g_graphs[i].in_use = 0;
    pthread_mutex_unlock(&g_mu);
}

/* Release the HNSW graph layer (neighbor lists) but keep the dense
 * vector store. Caller holds g_mu. */
static void graph_drop_links_locked(HnswGraph *g)
{
    if (g->nbr) {
        for (int i = 0; i < g->count; i++) {
            if (g->nbr[i]) {
                int lv = g->node_level ? g->node_level[i] : 0;
                for (int l = 0; l <= lv; l++) free(g->nbr[i][l]);
                free(g->nbr[i]);
            }
            if (g->nbr_cnt && g->nbr_cnt[i]) free(g->nbr_cnt[i]);
        }
    }
    free(g->nbr);        g->nbr = NULL;
    free(g->nbr_cnt);    g->nbr_cnt = NULL;
    free(g->node_level); g->node_level = NULL;
    free(g->visited);    g->visited = NULL;
    g->visit_stamp = 0;
    g->graph_built = 0;
    g->entry = -1;
    g->max_level = 0;
}

static void graph_free_locked(HnswGraph *g)
{
    if (!g || !g->in_use) return;
    graph_drop_links_locked(g);
    free(g->vectors);   g->vectors = NULL;
    free(g->pk_keys);   g->pk_keys = NULL;
    g->count = g->cap = 0;
    g->in_use = 0;
}

void hnsw_shutdown(void)
{
    pthread_mutex_lock(&g_mu);
    for (int i = 0; i < HNSW_MAX_GRAPHS; i++) graph_free_locked(&g_graphs[i]);
    pthread_mutex_unlock(&g_mu);
}

/* Find a slot matching (table_id, index_name) or return the first free one.
 * Caller must hold g_mu. Returns NULL if full. */
static HnswGraph *graph_find_or_alloc_locked(uint32_t table_id,
                                             const char *index_name,
                                             int allow_alloc)
{
    int free_slot = -1;
    for (int i = 0; i < HNSW_MAX_GRAPHS; i++) {
        if (g_graphs[i].in_use &&
            g_graphs[i].table_id == table_id &&
            strcmp(g_graphs[i].index_name, index_name) == 0) {
            return &g_graphs[i];
        }
        if (!g_graphs[i].in_use && free_slot < 0) free_slot = i;
    }
    if (!allow_alloc || free_slot < 0) return NULL;
    HnswGraph *g = &g_graphs[free_slot];
    memset(g, 0, sizeof(*g));
    g->in_use = 1;
    g->table_id = table_id;
    strncpy(g->index_name, index_name, sizeof(g->index_name) - 1);
    return g;
}

/* Parse "[f1,f2,...]" into a freshly malloc'd float array. Returns 0 on
 * success with arr_out and n_out filled; -1 on parse error. */
static int parse_vec_text(const char *text, float **arr_out, int *n_out)
{
    *arr_out = NULL; *n_out = 0;
    if (!text) return -1;
    const char *p = text;
    while (*p == ' ' || *p == '\t') p++;
    char open = *p;
    if (open != '[' && open != '{') return -1;
    char close = (open == '[') ? ']' : '}';
    p++;

    int cap = 16, n = 0;
    float *arr = (float *)malloc(sizeof(float) * cap);
    if (!arr) return -1;

    while (*p) {
        while (*p == ' ' || *p == '\t') p++;
        if (*p == close) break;
        char *endp = NULL;
        double d = strtod(p, &endp);
        if (endp == p) { free(arr); return -1; }
        if (!(d == d)) { free(arr); return -1; }    /* NaN check */
        if (n >= cap) {
            cap *= 2;
            float *nw = (float *)realloc(arr, sizeof(float) * cap);
            if (!nw) { free(arr); return -1; }
            arr = nw;
        }
        arr[n++] = (float)d;
        p = endp;
        while (*p == ' ' || *p == '\t') p++;
        if (*p == ',') { p++; continue; }
        if (*p == close) break;
        free(arr);
        return -1;
    }
    if (*p != close) { free(arr); return -1; }
    *arr_out = arr; *n_out = n;
    return 0;
}

/* Compute configured distance kind between two equal-length vectors. */
static double compute_distance(int kind, const float *a, const float *b, int n)
{
    double dot = 0.0, na = 0.0, nb = 0.0, s = 0.0;
    switch (kind) {
    case HNSW_DIST_COSINE:
        for (int i = 0; i < n; i++) {
            dot += (double)a[i] * (double)b[i];
            na  += (double)a[i] * (double)a[i];
            nb  += (double)b[i] * (double)b[i];
        }
        if (na == 0.0 || nb == 0.0) return 1.0;
        return 1.0 - (dot / (sqrt(na) * sqrt(nb)));
    case HNSW_DIST_L2:
        for (int i = 0; i < n; i++) {
            double d = (double)a[i] - (double)b[i];
            s += d * d;
        }
        return sqrt(s);
    case HNSW_DIST_INNER:
        for (int i = 0; i < n; i++) dot += (double)a[i] * (double)b[i];
        return -dot;
    case HNSW_DIST_L1:
        for (int i = 0; i < n; i++) {
            double d = (double)a[i] - (double)b[i];
            if (d < 0) d = -d;
            s += d;
        }
        return s;
    }
    return 0.0;
}

/* Grow vectors + pk_keys arrays if needed. Caller holds g_mu. */
static int graph_ensure_cap_locked(HnswGraph *g, int needed)
{
    if (needed <= g->cap) return 0;
    int new_cap = g->cap ? g->cap : 16;
    while (new_cap < needed) new_cap *= 2;

    float *new_vec = (float *)realloc(g->vectors,
                                       sizeof(float) * new_cap * g->dim);
    if (!new_vec) return -1;
    g->vectors = new_vec;

    char (*new_pk)[HNSW_MAX_PK_LEN] =
        realloc(g->pk_keys, new_cap * sizeof(*new_pk));
    if (!new_pk) return -1;
    g->pk_keys = new_pk;

    g->cap = new_cap;
    return 0;
}

/* ---------------------------------------------------------------- *
 *  HNSW graph (v1.1) — multi-layer greedy index over the dense store.
 *  Sub-linear search replaces the brute-force scan; node id i shares
 *  index i with vectors[i*dim] / pk_keys[i]. In-memory only (rebuilt
 *  from the table scan at CREATE INDEX); on-disk persistence is future.
 * ---------------------------------------------------------------- */

typedef struct DN { double d; int node; } DN;

static void heap_swap(DN *h, int a, int b) { DN t = h[a]; h[a] = h[b]; h[b] = t; }

/* Min-heap: smallest distance at root (candidate frontier). */
static void min_push(DN *h, int *n, double d, int node)
{
    int i = (*n)++; h[i].d = d; h[i].node = node;
    while (i > 0) { int p = (i - 1) / 2; if (h[p].d <= h[i].d) break;
                    heap_swap(h, p, i); i = p; }
}
static DN min_pop(DN *h, int *n)
{
    DN top = h[0]; h[0] = h[--(*n)]; int i = 0;
    for (;;) { int l = 2*i+1, r = 2*i+2, s = i;
        if (l < *n && h[l].d < h[s].d) s = l;
        if (r < *n && h[r].d < h[s].d) s = r;
        if (s == i) break; heap_swap(h, s, i); i = s; }
    return top;
}
/* Max-heap: largest distance at root (result set, so we can evict the
 * current furthest when a closer candidate arrives). */
static void max_push(DN *h, int *n, double d, int node)
{
    int i = (*n)++; h[i].d = d; h[i].node = node;
    while (i > 0) { int p = (i - 1) / 2; if (h[p].d >= h[i].d) break;
                    heap_swap(h, p, i); i = p; }
}
static DN max_pop(DN *h, int *n)
{
    DN top = h[0]; h[0] = h[--(*n)]; int i = 0;
    for (;;) { int l = 2*i+1, r = 2*i+2, s = i;
        if (l < *n && h[l].d > h[s].d) s = l;
        if (r < *n && h[r].d > h[s].d) s = r;
        if (s == i) break; heap_swap(h, s, i); i = s; }
    return top;
}

static int dn_cmp_asc(const void *a, const void *b)
{
    double da = ((const DN *)a)->d, db = ((const DN *)b)->d;
    return (da < db) ? -1 : (da > db) ? 1 : 0;
}

static double g_dist_node(HnswGraph *g, const float *q, int node)
{
    return compute_distance(g->distance_kind,
                            g->vectors + (size_t)node * g->dim, q, g->dim);
}

/* xorshift64* → uniform (0,1]; deterministic per-graph seed keeps builds
 * reproducible (tests rely on stable recall). */
static double rng_uniform(HnswGraph *g)
{
    uint64_t x = g->rng ? g->rng : 0x9e3779b97f4a7c15ULL;
    x ^= x << 13; x ^= x >> 7; x ^= x << 17; g->rng = x;
    return ((x >> 11) + 1.0) / 9007199254740993.0;
}
static int random_level(HnswGraph *g)
{
    double mL = 1.0 / log((double)(g->m > 1 ? g->m : 2));
    int lvl = (int)(-log(rng_uniform(g)) * mL);
    if (lvl < 0) lvl = 0;
    if (lvl > 31) lvl = 31;
    return lvl;
}

/* Greedy beam search at one layer. Seeds from entry points eps[], walks
 * neighbors best-first, keeps the ef closest in W (max-heap). C/W are
 * caller scratch (C sized >= count, W sized >= ef+1). Visited tracked by
 * stamp so no per-call memset. */
static void search_layer(HnswGraph *g, const float *q,
                         const int *eps, int n_eps, int level, int ef,
                         DN *C, DN *W, int *W_n)
{
    g->visit_stamp++;
    int stamp = g->visit_stamp;
    int C_n = 0; *W_n = 0;
    for (int i = 0; i < n_eps; i++) {
        int e = eps[i];
        if (e < 0 || g->visited[e] == stamp) continue;
        g->visited[e] = stamp;
        double d = g_dist_node(g, q, e);
        min_push(C, &C_n, d, e);
        max_push(W, W_n, d, e);
        if (*W_n > ef) max_pop(W, W_n);
    }
    while (C_n > 0) {
        DN c = min_pop(C, &C_n);
        if (*W_n >= ef && c.d > W[0].d) break;
        int *nb = g->nbr[c.node] ? g->nbr[c.node][level] : NULL;
        int nc = nb ? g->nbr_cnt[c.node][level] : 0;
        for (int i = 0; i < nc; i++) {
            int e = nb[i];
            if (g->visited[e] == stamp) continue;
            g->visited[e] = stamp;
            double d = g_dist_node(g, q, e);
            if (*W_n < ef || d < W[0].d) {
                min_push(C, &C_n, d, e);
                max_push(W, W_n, d, e);
                if (*W_n > ef) max_pop(W, W_n);
            }
        }
    }
}

static int graph_alloc_node_locked(HnswGraph *g, int node, int level)
{
    g->node_level[node] = level;
    g->nbr[node]     = (int **)calloc((size_t)level + 1, sizeof(int *));
    g->nbr_cnt[node] = (int *)calloc((size_t)level + 1, sizeof(int));
    if (!g->nbr[node] || !g->nbr_cnt[node]) return -1;
    for (int l = 0; l <= level; l++) {
        int mmax = (l == 0) ? (2 * g->m) : g->m;
        g->nbr[node][l] = (int *)malloc(sizeof(int) * (size_t)mmax);
        if (!g->nbr[node][l]) return -1;
        g->nbr_cnt[node][l] = 0;
    }
    return 0;
}

/* Add b to a's neighbor list at `level`; if full, keep the mmax closest
 * to a (simple distance-based pruning). */
static void connect_locked(HnswGraph *g, int a, int b, int level)
{
    if (a == b) return;
    int mmax = (level == 0) ? (2 * g->m) : g->m;
    int *list = g->nbr[a][level];
    int *cnt  = &g->nbr_cnt[a][level];
    for (int i = 0; i < *cnt; i++) if (list[i] == b) return;
    if (*cnt < mmax) { list[(*cnt)++] = b; return; }
    const float *va = g->vectors + (size_t)a * g->dim;
    double db = compute_distance(g->distance_kind, va,
                                 g->vectors + (size_t)b * g->dim, g->dim);
    int worst = -1; double worst_d = -1.0;
    for (int i = 0; i < *cnt; i++) {
        double di = compute_distance(g->distance_kind, va,
                        g->vectors + (size_t)list[i] * g->dim, g->dim);
        if (di > worst_d) { worst_d = di; worst = i; }
    }
    if (worst >= 0 && db < worst_d) list[worst] = b;
}

/* Insert node `node` into the graph. Scratch (C,W,eps,sel) preallocated
 * by the build so we don't malloc per insert. */
static int graph_insert_locked(HnswGraph *g, int node,
                               DN *C, DN *W, int *eps, DN *sel)
{
    int level = random_level(g);
    if (graph_alloc_node_locked(g, node, level) != 0) return -1;
    const float *q = g->vectors + (size_t)node * g->dim;

    if (g->entry < 0) { g->entry = node; g->max_level = level; return 0; }

    int cur = g->entry;
    for (int l = g->max_level; l > level; l--) {
        int wn = 0; int e0 = cur;
        search_layer(g, q, &e0, 1, l, 1, C, W, &wn);
        if (wn > 0) cur = W[0].node;
    }
    int top = (level < g->max_level) ? level : g->max_level;
    int n_eps = 1; eps[0] = cur;
    for (int l = top; l >= 0; l--) {
        int wn = 0;
        search_layer(g, q, eps, n_eps, l, g->ef_construction, C, W, &wn);
        /* W is a heap; sort ascending and take the closest as neighbors
         * + carry them as entry points to the next-lower layer. */
        for (int i = 0; i < wn; i++) sel[i] = W[i];
        qsort(sel, (size_t)wn, sizeof(DN), dn_cmp_asc);
        int mmax = (l == 0) ? (2 * g->m) : g->m;
        int linked = 0;
        for (int i = 0; i < wn && linked < mmax; i++) {
            if (sel[i].node == node) continue;
            connect_locked(g, node, sel[i].node, l);
            connect_locked(g, sel[i].node, node, l);
            linked++;
        }
        n_eps = 0;
        for (int i = 0; i < wn && n_eps < g->ef_construction; i++)
            eps[n_eps++] = sel[i].node;
        if (n_eps == 0) { eps[0] = cur; n_eps = 1; }
    }
    if (level > g->max_level) { g->max_level = level; g->entry = node; }
    return 0;
}

/* Build the graph over the dense store. Caller holds g_mu. On any
 * allocation failure the links are dropped and the search path falls
 * back to brute force (graph_built stays 0). */
static void graph_build_locked(HnswGraph *g)
{
    graph_drop_links_locked(g);
    if (g->count <= 0) { g->graph_built = 1; return; }

    g->node_level = (int *)calloc((size_t)g->count, sizeof(int));
    g->nbr        = (int ***)calloc((size_t)g->count, sizeof(int **));
    g->nbr_cnt    = (int **)calloc((size_t)g->count, sizeof(int *));
    g->visited    = (int *)calloc((size_t)g->count, sizeof(int));
    DN  *C   = (DN *)malloc(sizeof(DN) * ((size_t)g->count + 1));
    DN  *W   = (DN *)malloc(sizeof(DN) * ((size_t)g->ef_construction + 2));
    DN  *sel = (DN *)malloc(sizeof(DN) * ((size_t)g->ef_construction + 2));
    int *eps = (int *)malloc(sizeof(int) * ((size_t)g->ef_construction + 2));
    if (!g->node_level || !g->nbr || !g->nbr_cnt || !g->visited ||
        !C || !W || !sel || !eps) {
        free(C); free(W); free(sel); free(eps);
        graph_drop_links_locked(g);
        return;  /* brute-force fallback */
    }
    g->entry = -1; g->max_level = 0; g->visit_stamp = 0;
    g->rng = 0x9e3779b97f4a7c15ULL ^ ((uint64_t)g->count << 1);

    int ok = 1;
    for (int i = 0; i < g->count; i++) {
        if (graph_insert_locked(g, i, C, W, eps, sel) != 0) { ok = 0; break; }
    }
    free(C); free(W); free(sel); free(eps);
    if (ok) g->graph_built = 1;
    else    graph_drop_links_locked(g);
}

int hnsw_build(uint32_t table_id, const char *index_name,
               const char *col_name,
               int distance_kind, int m, int ef_construction)
{
    if (!index_name || !col_name) return -1;

    TableDesc td;
    if (cat_find_table_by_id(table_id, &td) != 0) return -1;

    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = cat_find_columns(table_id, cols, CAT_MAX_COLUMNS);
    if (ncols <= 0) return -1;

    int col_idx = -1;
    for (int i = 0; i < ncols; i++) {
        if (strcasecmp(cols[i].col_name, col_name) == 0) { col_idx = i; break; }
    }
    if (col_idx < 0) return -1;
    if (!tup_is_vector(cols[col_idx].type_code)) return -1;
    int dim = tup_vector_dim(cols[col_idx].type_code);
    if (dim <= 0) return -1;

    pthread_mutex_lock(&g_mu);
    HnswGraph *g = graph_find_or_alloc_locked(table_id, index_name, 1);
    if (!g) { pthread_mutex_unlock(&g_mu); return -1; }
    /* Reset any prior build. */
    free(g->vectors); g->vectors = NULL;
    free(g->pk_keys); g->pk_keys = NULL;
    g->count = g->cap = 0;
    g->dim             = dim;
    g->distance_kind   = distance_kind;
    g->m               = m > 0 ? m : 16;
    g->ef_construction = ef_construction > 0 ? ef_construction : 200;
    g->ef_search       = 64;   /* beam width for queries; tunable later */
    g->graph_built     = 0;
    g->entry           = -1;
    pthread_mutex_unlock(&g_mu);

    /* Scan the table (outside the lock so we don't block other searches). */
    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) != 0) {
        /* Empty table — still counts as a successful build. */
        return 0;
    }

    char pk_buf[HNSW_MAX_PK_LEN];
    char rec_buf[8192];
    char fields[CAT_MAX_COLUMNS][256];
    int  nulls[CAT_MAX_COLUMNS];

    while (tapi_scan_next(&cursor, pk_buf, rec_buf, sizeof(rec_buf)) == 0) {
        int rec_len = tup_record_len(rec_buf, sizeof(rec_buf));
        if (rec_len <= 0) continue;
        int nf = tup_extract_fields(rec_buf, rec_len, cols, ncols,
                                    fields, nulls, CAT_MAX_COLUMNS);
        if (nf <= col_idx || nulls[col_idx]) continue;

        float *vec = NULL; int vdim = 0;
        if (parse_vec_text(fields[col_idx], &vec, &vdim) != 0) continue;
        if (vdim != dim) { free(vec); continue; }

        pthread_mutex_lock(&g_mu);
        if (graph_ensure_cap_locked(g, g->count + 1) == 0) {
            memcpy(g->vectors + (size_t)g->count * dim,
                   vec, sizeof(float) * dim);
            strncpy(g->pk_keys[g->count], pk_buf, HNSW_MAX_PK_LEN - 1);
            g->pk_keys[g->count][HNSW_MAX_PK_LEN - 1] = '\0';
            g->count++;
        }
        pthread_mutex_unlock(&g_mu);

        free(vec);
    }

    /* Build the graph over the loaded vectors. Failure leaves
     * graph_built=0, so search transparently uses brute force. */
    pthread_mutex_lock(&g_mu);
    graph_build_locked(g);
    pthread_mutex_unlock(&g_mu);
    return 0;
}

/* Comparison for ascending distance sort. */
static int hit_cmp_asc(const void *a, const void *b)
{
    const HnswHit *ha = (const HnswHit *)a;
    const HnswHit *hb = (const HnswHit *)b;
    if (ha->distance < hb->distance) return -1;
    if (ha->distance > hb->distance) return 1;
    return 0;
}

int hnsw_search_knn(uint32_t table_id, const char *index_name,
                    const char *query_text, int k,
                    HnswHit *out_hits)
{
    if (k <= 0 || !out_hits || !query_text) return -1;

    float *query = NULL; int qdim = 0;
    if (parse_vec_text(query_text, &query, &qdim) != 0) return -1;

    pthread_mutex_lock(&g_mu);
    HnswGraph *g = graph_find_or_alloc_locked(table_id, index_name, 0);
    if (!g || g->dim != qdim) {
        pthread_mutex_unlock(&g_mu);
        free(query);
        return -1;
    }

    int n = g->count;
    if (n == 0) { pthread_mutex_unlock(&g_mu); free(query); return 0; }

    /* Graph traversal — sub-linear path. Skip it for tiny sets (brute
     * force is exact and just as cheap there) or if the graph didn't
     * build (alloc failure → graceful fallback). Held under g_mu so the
     * graph stays stable during the walk. */
    if (g->graph_built && g->entry >= 0 && n > 2 * g->ef_search) {
        int ef = (g->ef_search < k) ? k : g->ef_search;
        DN *C = (DN *)malloc(sizeof(DN) * ((size_t)n + 1));
        DN *W = (DN *)malloc(sizeof(DN) * ((size_t)ef + 2));
        if (C && W) {
            int cur = g->entry;
            for (int l = g->max_level; l > 0; l--) {
                int wn = 0;
                search_layer(g, query, &cur, 1, l, 1, C, W, &wn);
                if (wn > 0) cur = W[0].node;
            }
            int wn = 0;
            search_layer(g, query, &cur, 1, 0, ef, C, W, &wn);
            DN *res = (DN *)malloc(sizeof(DN) * ((size_t)wn + 1));
            if (res) {
                for (int i = 0; i < wn; i++) res[i] = W[i];
                qsort(res, (size_t)wn, sizeof(DN), dn_cmp_asc);
                int out_n = (k < wn) ? k : wn;
                for (int i = 0; i < out_n; i++) {
                    out_hits[i].distance = res[i].d;
                    strncpy(out_hits[i].pk_value, g->pk_keys[res[i].node],
                            sizeof(out_hits[i].pk_value) - 1);
                    out_hits[i].pk_value[sizeof(out_hits[i].pk_value)-1] = '\0';
                }
                free(res); free(C); free(W);
                pthread_mutex_unlock(&g_mu);
                free(query);
                return out_n;
            }
        }
        free(C); free(W);   /* alloc failure → brute-force fallback below */
    }

    /* Brute-force top-k fallback. */
    HnswHit *all = (HnswHit *)malloc(sizeof(HnswHit) * (size_t)n);
    if (!all) { pthread_mutex_unlock(&g_mu); free(query); return -1; }

    for (int i = 0; i < n; i++) {
        all[i].distance = compute_distance(g->distance_kind,
                                           g->vectors + (size_t)i * g->dim,
                                           query, g->dim);
        strncpy(all[i].pk_value, g->pk_keys[i], sizeof(all[i].pk_value) - 1);
        all[i].pk_value[sizeof(all[i].pk_value) - 1] = '\0';
    }
    pthread_mutex_unlock(&g_mu);
    free(query);

    qsort(all, (size_t)n, sizeof(HnswHit), hit_cmp_asc);
    int out_n = (k < n) ? k : n;
    memcpy(out_hits, all, sizeof(HnswHit) * (size_t)out_n);
    free(all);
    return out_n;
}

/* ----------------------------------------------------------------
 *  Hybrid search (Task 203 — Feature #203)
 *
 *  Equality-predicate filter over an arbitrary column, combined with
 *  vector ranking. Auto-selects one of two strategies:
 *
 *    pre-filter : look up the filter column in the base table, compute
 *                 distances only for matching rows, then top-k by distance.
 *                 Best when the filter is tight (few matches).
 *
 *    post-filter: rank all graph vectors, then drop hits whose filter
 *                 value doesn't match. Oversample by OVERSAMPLE_FACTOR
 *                 to offset the filter discarding some of the top-k.
 *                 Best when the filter is loose (matches most rows).
 *
 *  AUTO mode measures selectivity (filter_matches / total) and picks
 *  pre-filter if selectivity < 0.10 else post-filter. This matches the
 *  Task 203 plan's 10% threshold.
 * ---------------------------------------------------------------- */

/* Row → filter value cache entry. Keyed by PK since that's what the
 * graph stores alongside vectors. */
typedef struct FilterRowCache {
    char pk_value[256];
    char filter_value[256];
    int  null_flag;
} FilterRowCache;

/* Build {pk → filter_value} map by table-scanning once and extracting
 * the filter column. Returned as a heap array the caller frees. On
 * success sets *count, returns the array; on failure returns NULL. */
static FilterRowCache *build_filter_cache(uint32_t table_id,
                                           const char *filter_col,
                                           int *count)
{
    *count = 0;
    TableDesc td;
    if (cat_find_table_by_id(table_id, &td) != 0) return NULL;

    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = cat_find_columns(table_id, cols, CAT_MAX_COLUMNS);
    if (ncols <= 0) return NULL;

    int col_idx = -1;
    for (int i = 0; i < ncols; i++) {
        if (strcasecmp(cols[i].col_name, filter_col) == 0) { col_idx = i; break; }
    }
    if (col_idx < 0) return NULL;

    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) != 0) return NULL;

    int cap = 64, n = 0;
    FilterRowCache *rows = (FilterRowCache *)malloc(sizeof(*rows) * (size_t)cap);
    if (!rows) return NULL;

    char pk_buf[HNSW_MAX_PK_LEN];
    char rec_buf[8192];
    char fields[CAT_MAX_COLUMNS][256];
    int  nulls[CAT_MAX_COLUMNS];

    while (tapi_scan_next(&cursor, pk_buf, rec_buf, sizeof(rec_buf)) == 0) {
        int rec_len = tup_record_len(rec_buf, sizeof(rec_buf));
        if (rec_len <= 0) continue;
        int nf = tup_extract_fields(rec_buf, rec_len, cols, ncols,
                                    fields, nulls, CAT_MAX_COLUMNS);
        if (nf <= col_idx) continue;

        if (n >= cap) {
            cap *= 2;
            FilterRowCache *nw = realloc(rows, sizeof(*rows) * (size_t)cap);
            if (!nw) { free(rows); return NULL; }
            rows = nw;
        }
        strncpy(rows[n].pk_value, pk_buf, sizeof(rows[n].pk_value) - 1);
        rows[n].pk_value[sizeof(rows[n].pk_value) - 1] = '\0';
        if (nulls[col_idx]) {
            rows[n].null_flag = 1;
            rows[n].filter_value[0] = '\0';
        } else {
            rows[n].null_flag = 0;
            strncpy(rows[n].filter_value, fields[col_idx],
                    sizeof(rows[n].filter_value) - 1);
            rows[n].filter_value[sizeof(rows[n].filter_value) - 1] = '\0';
        }
        n++;
    }
    *count = n;
    return rows;
}

/* Look up the filter value for a single PK in the cache. */
static const char *cache_lookup(const FilterRowCache *rows, int n,
                                const char *pk, int *is_null)
{
    *is_null = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(rows[i].pk_value, pk) == 0) {
            if (rows[i].null_flag) { *is_null = 1; return NULL; }
            return rows[i].filter_value;
        }
    }
    return NULL;
}

int hnsw_search_knn_filter(uint32_t table_id, const char *index_name,
                           const char *query_text, int k,
                           const char *filter_col, const char *filter_val,
                           int mode,
                           HnswHit *out_hits,
                           HnswHybridTrace *trace)
{
    if (k <= 0 || !out_hits || !query_text) return -1;

    /* Degrade to plain KNN when no filter. */
    if (!filter_col || !filter_col[0]) {
        if (trace) {
            trace->chosen_strategy = HNSW_HYBRID_POST;
            trace->candidate_count = 0;
            trace->filter_matches = 0;
            trace->selectivity = 1.0;
        }
        return hnsw_search_knn(table_id, index_name, query_text, k, out_hits);
    }

    /* Need the filter cache for both strategies. */
    int row_count = 0;
    FilterRowCache *cache = build_filter_cache(table_id, filter_col, &row_count);
    if (!cache) return -1;

    /* Count matches to compute selectivity. */
    int matches = 0;
    for (int i = 0; i < row_count; i++) {
        if (!cache[i].null_flag && strcmp(cache[i].filter_value, filter_val) == 0)
            matches++;
    }
    double sel = (row_count > 0) ? ((double)matches / (double)row_count) : 0.0;

    int strat = mode;
    if (strat == HNSW_HYBRID_AUTO) {
        /* Task 203 plan: <10% selectivity → pre-filter, else post-filter. */
        strat = (sel < 0.10) ? HNSW_HYBRID_PRE : HNSW_HYBRID_POST;
    }

    float *query = NULL; int qdim = 0;
    if (parse_vec_text(query_text, &query, &qdim) != 0) {
        free(cache);
        return -1;
    }

    pthread_mutex_lock(&g_mu);
    HnswGraph *g = graph_find_or_alloc_locked(table_id, index_name, 0);
    if (!g || g->dim != qdim) {
        pthread_mutex_unlock(&g_mu);
        free(query); free(cache);
        return -1;
    }

    int out_n = 0;

    if (strat == HNSW_HYBRID_PRE) {
        /* Pre-filter: restrict to rows where filter_col = filter_val, rank. */
        HnswHit *pool = (HnswHit *)malloc(sizeof(HnswHit) * (size_t)(matches + 1));
        if (!pool) {
            pthread_mutex_unlock(&g_mu);
            free(query); free(cache);
            return -1;
        }
        int p = 0;
        for (int i = 0; i < g->count; i++) {
            int is_null = 0;
            const char *fv = cache_lookup(cache, row_count, g->pk_keys[i], &is_null);
            if (!fv || strcmp(fv, filter_val) != 0) continue;
            pool[p].distance = compute_distance(g->distance_kind,
                                                g->vectors + (size_t)i * g->dim,
                                                query, g->dim);
            strncpy(pool[p].pk_value, g->pk_keys[i],
                    sizeof(pool[p].pk_value) - 1);
            pool[p].pk_value[sizeof(pool[p].pk_value) - 1] = '\0';
            p++;
        }
        pthread_mutex_unlock(&g_mu);
        qsort(pool, (size_t)p, sizeof(HnswHit), hit_cmp_asc);
        out_n = (k < p) ? k : p;
        memcpy(out_hits, pool, sizeof(HnswHit) * (size_t)out_n);
        free(pool);
    } else {
        /* Post-filter: oversample (k / max(sel, 0.01)), then drop non-matches. */
        double s = (sel > 0.01) ? sel : 0.01;
        int over = (int)((double)k / s) + k;
        if (over > g->count) over = g->count;
        if (over < k)        over = k;

        HnswHit *pool = (HnswHit *)malloc(sizeof(HnswHit) * (size_t)g->count);
        if (!pool) {
            pthread_mutex_unlock(&g_mu);
            free(query); free(cache);
            return -1;
        }
        for (int i = 0; i < g->count; i++) {
            pool[i].distance = compute_distance(g->distance_kind,
                                                g->vectors + (size_t)i * g->dim,
                                                query, g->dim);
            strncpy(pool[i].pk_value, g->pk_keys[i],
                    sizeof(pool[i].pk_value) - 1);
            pool[i].pk_value[sizeof(pool[i].pk_value) - 1] = '\0';
        }
        pthread_mutex_unlock(&g_mu);
        qsort(pool, (size_t)g->count, sizeof(HnswHit), hit_cmp_asc);

        for (int i = 0; i < over && out_n < k; i++) {
            int is_null = 0;
            const char *fv = cache_lookup(cache, row_count,
                                          pool[i].pk_value, &is_null);
            if (!fv || strcmp(fv, filter_val) != 0) continue;
            out_hits[out_n++] = pool[i];
        }
        free(pool);
    }

    free(query);
    free(cache);

    if (trace) {
        trace->chosen_strategy = strat;
        trace->candidate_count = row_count;
        trace->filter_matches  = matches;
        trace->selectivity     = sel;
    }
    return out_n;
}

void hnsw_drop(uint32_t table_id, const char *index_name)
{
    pthread_mutex_lock(&g_mu);
    HnswGraph *g = graph_find_or_alloc_locked(table_id, index_name, 0);
    if (g) graph_free_locked(g);
    pthread_mutex_unlock(&g_mu);
}

int hnsw_get_stats(uint32_t table_id, const char *index_name,
                   HnswStats *out)
{
    if (!out) return -1;
    pthread_mutex_lock(&g_mu);
    HnswGraph *g = graph_find_or_alloc_locked(table_id, index_name, 0);
    if (!g) { pthread_mutex_unlock(&g_mu); return -1; }
    out->count           = g->count;
    out->dim             = g->dim;
    out->distance_kind   = g->distance_kind;
    out->m               = g->m;
    out->ef_construction = g->ef_construction;
    pthread_mutex_unlock(&g_mu);
    return 0;
}
