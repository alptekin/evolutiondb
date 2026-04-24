/*
 * hnsw.c — In-memory vector index for `CREATE INDEX ... USING HNSW`
 *
 * v1 strategy: brute-force top-k over a dense per-graph vector store.
 * The module exposes the pgvector-style build + search surface so SQL
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

    /* Dense vector store (v1 brute-force backing). */
    int      count;
    int      cap;
    float   *vectors;      /* cap * dim floats, row-major */
    char   (*pk_keys)[HNSW_MAX_PK_LEN];
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

static void graph_free_locked(HnswGraph *g)
{
    if (!g || !g->in_use) return;
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
    g->ef_construction = ef_construction > 0 ? ef_construction : 64;
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

    /* Brute-force top-k: rank every vector. A future v1.1 swaps in
     * greedy-graph search; callers stay on the same interface. */
    int n = g->count;
    if (n == 0) { pthread_mutex_unlock(&g_mu); free(query); return 0; }

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
