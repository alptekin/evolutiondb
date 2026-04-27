/*
 * hnsw.h — Approximate Nearest-Neighbor index surface (Task 202 — Feature #202)
 *
 * Plumbs `CREATE INDEX ... USING HNSW` end-to-end: parser, catalog, build-time
 * scan, and a top-k search callable from SQL. v1 uses an in-memory vector
 * store backed by brute-force distance evaluation — the on-disk HNSW graph
 * and graph traversal are scheduled for v1.1, protected behind the same
 * hnsw_search_knn interface so callers don't need to change.
 *
 * Distance kinds match expression.c's vec_distance selector.
 */
#ifndef HNSW_H
#define HNSW_H

#include <stdint.h>

/* Distance operator codes — match expression.c vec_distance selector. */
#define HNSW_DIST_COSINE  0
#define HNSW_DIST_L2      1
#define HNSW_DIST_INNER   2
#define HNSW_DIST_L1      3

/* Public result entry — one top-k candidate. */
typedef struct HnswHit {
    char   pk_value[256];
    double distance;
} HnswHit;

/* Initialize the HNSW module (idempotent, safe at process startup). */
void hnsw_init(void);

/* Drop all in-memory graphs — called on graceful shutdown + before
 * restart-from-catalog replay. */
void hnsw_shutdown(void);

/* Build (or rebuild) the graph for a given (table_id, index_name) pair.
 *  - col_name:       vector column to index
 *  - distance_kind:  HNSW_DIST_* selector
 *  - m, ef_construction: evovector build params (stored, consulted
 *                        by the v1.1 graph implementation)
 *  Scans the table, decodes the VECTOR(dim) column from each live row,
 *  and stores (pk_text, vector) pairs. Returns 0 on success, -1 on error
 *  (e.g. column missing, column not a VECTOR). */
int hnsw_build(uint32_t table_id, const char *index_name,
               const char *col_name,
               int distance_kind, int m, int ef_construction);

/* Search the graph for the k nearest neighbors of `query_text`
 * (same "[f1,f2,...]" literal tup_extract_fields renders).
 * Writes up to k hits into out_hits (caller-owned, size >= k). Returns
 * the number of hits actually written, or -1 if the index does not
 * exist or query_text is malformed. */
int hnsw_search_knn(uint32_t table_id, const char *index_name,
                    const char *query_text, int k,
                    HnswHit *out_hits);

/* Free the graph for (table_id, index_name). Called from DROP INDEX. */
void hnsw_drop(uint32_t table_id, const char *index_name);

/* Expose build parameters for introspection (pg_indexes / SHOW INDEX). */
typedef struct HnswStats {
    int    count;            /* number of vectors in the graph */
    int    dim;
    int    distance_kind;
    int    m;
    int    ef_construction;
} HnswStats;

int hnsw_get_stats(uint32_t table_id, const char *index_name,
                   HnswStats *out);

/* ----------------------------------------------------------------
 *  Hybrid search (Task 203 — Feature #203) — vector + metadata filter
 *
 *  Selects a strategy based on the filter's selectivity versus k:
 *    - pre-filter : full-scan the filter column, rank matches only
 *                   (ideal when filter selectivity is low, i.e. tight)
 *    - post-filter: HNSW-probe a wider candidate set (oversample k / s),
 *                   then keep the rows that match the filter
 *
 *  Strategy mode:
 *    HNSW_HYBRID_AUTO = 0  — planner picks based on filter stats
 *    HNSW_HYBRID_PRE  = 1  — force pre-filter
 *    HNSW_HYBRID_POST = 2  — force post-filter
 *
 *  filter_col / filter_val: currently only equality predicate
 *  (filter_col = filter_val). NULL or empty filter_col ⇒ degrades to
 *  plain hnsw_search_knn.
 *
 *  HnswHitTrace reports which strategy fired, intended for EXPLAIN and
 *  tests. Returns the number of hits written, or -1 on error.
 * ---------------------------------------------------------------- */
#define HNSW_HYBRID_AUTO  0
#define HNSW_HYBRID_PRE   1
#define HNSW_HYBRID_POST  2

typedef struct HnswHybridTrace {
    int   chosen_strategy;   /* HNSW_HYBRID_PRE / HNSW_HYBRID_POST */
    int   candidate_count;   /* rows considered before ranking */
    int   filter_matches;    /* rows passing the filter */
    double selectivity;      /* filter_matches / candidate_count (0..1) */
} HnswHybridTrace;

int hnsw_search_knn_filter(uint32_t table_id, const char *index_name,
                           const char *query_text, int k,
                           const char *filter_col, const char *filter_val,
                           int mode,
                           HnswHit *out_hits,
                           HnswHybridTrace *trace);

#endif /* HNSW_H */
