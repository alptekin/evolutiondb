/*
 * Analyze.c — ANALYZE TABLE for EvoSQL
 *
 * Scans all rows in a table and collects statistics:
 *   - Table-level: row_count, page_count, last_analyzed
 *   - Column-level: null_count, distinct_count, min, max, avg_width
 *
 * Statistics are stored in the catalog (CAT_SYS_TABLE_STATS tree)
 * and used by EXPLAIN for row count estimates.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "tuple_format.h"
#include "btree2.h"

/* Hash set for distinct value tracking with per-value counts (capped).
 * Counts power the histogram builders in addition to the NDV used by
 * the existing ColumnStatsDesc flow. */
#define DISTINCT_CAP      10000
#define DISTINCT_HASH_SIZE 16384  /* power of 2 */

typedef struct {
    char    **entries;    /* hash slots — NULL = empty, else owned strdup */
    uint64_t *counts;     /* parallel slot count */
    int       count;      /* number of non-empty slots */
    int       capacity;   /* hash_size (power of 2) */
} DistinctSet;

static void dset_init(DistinctSet *ds)
{
    ds->entries = (char **)calloc(DISTINCT_HASH_SIZE, sizeof(char *));
    ds->counts  = (uint64_t *)calloc(DISTINCT_HASH_SIZE, sizeof(uint64_t));
    ds->count = 0;
    ds->capacity = DISTINCT_HASH_SIZE;
}

static void dset_free(DistinctSet *ds)
{
    if (!ds->entries) return;
    for (int i = 0; i < ds->capacity; i++)
        free(ds->entries[i]);
    free(ds->entries);
    free(ds->counts);
    ds->entries = NULL;
    ds->counts = NULL;
    ds->count = 0;
}

static unsigned int dset_hash(const char *s)
{
    unsigned int h = 2166136261u;
    while (*s) {
        h ^= (unsigned char)*s++;
        h *= 16777619u;
    }
    return h;
}

/* Returns 1 if newly added, 0 if already present (count incremented)
 * or capped (not tracked). */
static int dset_add(DistinctSet *ds, const char *val)
{
    unsigned int h = dset_hash(val) & (unsigned)(ds->capacity - 1);
    for (int i = 0; i < ds->capacity; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(ds->capacity - 1));
        if (!ds->entries[slot]) {
            /* Empty slot — add only if we haven't hit the distinct cap. */
            if (ds->count >= DISTINCT_CAP) return 0;
            ds->entries[slot] = strdup(val);
            ds->counts[slot]  = 1;
            ds->count++;
            return 1;
        }
        if (strcmp(ds->entries[slot], val) == 0) {
            ds->counts[slot]++;
            return 0;
        }
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  Histogram builders (Task 99 — Feature #101)
 *
 *  Input: a DistinctSet with per-value counts collected during the
 *  table scan. The set is capped at DISTINCT_CAP so histograms on
 *  ultra-high-cardinality columns see a representative sample.
 *
 *  Output: a HistogramDesc ready for cat_store_histogram.
 *    - NDV ≤ num_buckets: frequency histogram (one bucket per value)
 *    - NDV >  num_buckets: equi-depth (values sorted, buckets hold
 *                          ~total/N rows each; stores upper bound +
 *                          cumulative count).
 * ---------------------------------------------------------------- */

typedef struct {
    const char *val;
    uint64_t    count;
} HistPair;

/* Compare pairs using numeric order when both values parse as doubles,
 * else lexicographic. Keeps equi-depth bounds consistent with the
 * query_executor's compare_bound reader — otherwise a bucket stored
 * in lex order ("1","10","100",...,"2","20") would produce wrong
 * cumulative lookups for numeric range queries. */
static int histpair_cmp(const void *a, const void *b)
{
    const char *as = ((const HistPair *)a)->val;
    const char *bs = ((const HistPair *)b)->val;
    char *e1, *e2;
    double av = strtod(as, &e1);
    double bv = strtod(bs, &e2);
    int a_numeric = (e1 != as && *e1 == '\0');
    int b_numeric = (e2 != bs && *e2 == '\0');
    if (a_numeric && b_numeric) {
        if (av < bv) return -1;
        if (av > bv) return  1;
        return 0;
    }
    return strcmp(as, bs);
}

/* Snapshot the set into a flat array of (value, count) pairs, sorted
 * by value. Caller owns the array; pointers into set->entries are
 * stable for the lifetime of the set (no resize). */
static int dset_snapshot(const DistinctSet *ds, HistPair **out)
{
    if (ds->count <= 0) { *out = NULL; return 0; }
    HistPair *arr = (HistPair *)malloc((size_t)ds->count * sizeof(HistPair));
    if (!arr) { *out = NULL; return 0; }
    int n = 0;
    for (int i = 0; i < ds->capacity && n < ds->count; i++) {
        if (ds->entries[i]) {
            arr[n].val   = ds->entries[i];
            arr[n].count = ds->counts[i];
            n++;
        }
    }
    qsort(arr, (size_t)n, sizeof(HistPair), histpair_cmp);
    *out = arr;
    return n;
}

/* Build a frequency histogram: one bucket per distinct value. Used
 * when NDV fits entirely in the requested bucket count. Gives exact
 * equality selectivity (not an estimate). */
static int build_frequency_histogram(const DistinctSet *ds, uint32_t table_id,
                                     const char *col_name, HistogramDesc *out)
{
    HistPair *pairs;
    int n = dset_snapshot(ds, &pairs);
    if (n == 0) { free(pairs); return -1; }

    memset(out, 0, sizeof(*out));
    out->table_id = table_id;
    strncpy(out->col_name, col_name, CAT_MAX_NAME_LEN - 1);
    out->histogram_type = 'F';
    out->num_buckets = n > HIST_MAX_BUCKETS ? HIST_MAX_BUCKETS : n;

    uint64_t total = 0;
    for (int i = 0; i < out->num_buckets; i++) {
        strncpy(out->bucket_bounds[i], pairs[i].val, HIST_MAX_BOUND_LEN - 1);
        out->bucket_counts[i] = pairs[i].count;
        total += pairs[i].count;
    }
    out->total_rows = total;

    free(pairs);
    return 0;
}

/* Build an equi-depth histogram: sort all distinct values, target
 * ~total/num_buckets rows per bucket, record the upper bound and
 * cumulative count at each bucket boundary. */
static int build_equi_depth_histogram(const DistinctSet *ds, uint32_t table_id,
                                      const char *col_name, int num_buckets,
                                      HistogramDesc *out)
{
    HistPair *pairs;
    int n = dset_snapshot(ds, &pairs);
    if (n == 0) { free(pairs); return -1; }
    if (num_buckets < 1) num_buckets = 1;
    if (num_buckets > HIST_MAX_BUCKETS) num_buckets = HIST_MAX_BUCKETS;

    uint64_t total = 0;
    for (int i = 0; i < n; i++) total += pairs[i].count;

    memset(out, 0, sizeof(*out));
    out->table_id = table_id;
    strncpy(out->col_name, col_name, CAT_MAX_NAME_LEN - 1);
    out->histogram_type = 'E';
    out->total_rows = total;

    uint64_t target = total / (uint64_t)num_buckets;
    if (target == 0) target = 1;

    int bucket = 0;
    uint64_t bucket_count = 0;
    uint64_t cumulative = 0;
    for (int i = 0; i < n && bucket < num_buckets; i++) {
        bucket_count += pairs[i].count;
        cumulative += pairs[i].count;
        int last_row = (i + 1 == n);
        int boundary = (bucket + 1 < num_buckets && bucket_count >= target);
        if (boundary || last_row) {
            strncpy(out->bucket_bounds[bucket], pairs[i].val,
                    HIST_MAX_BOUND_LEN - 1);
            out->bucket_counts[bucket] = cumulative;
            bucket++;
            bucket_count = 0;
        }
    }
    out->num_buckets = bucket;

    free(pairs);
    return 0;
}

/* Auto-select flavor based on the NDV vs. bucket budget. */
static int build_auto_histogram(const DistinctSet *ds, uint32_t table_id,
                                const char *col_name, int num_buckets,
                                HistogramDesc *out)
{
    if (ds->count <= 0) return -1;
    if (ds->count <= num_buckets)
        return build_frequency_histogram(ds, table_id, col_name, out);
    return build_equi_depth_histogram(ds, table_id, col_name, num_buckets, out);
}

/* ----------------------------------------------------------------
 *  Parser-driven histogram control (Task 99 step 4)
 *
 *  The parser fills g_analyze_hist before invoking AnalyzeTableProcess.
 *    mode=0 (default): rebuild all column stats + auto histograms
 *    mode=1 UPDATE   : only rebuild histograms on listed columns
 *    mode=2 DROP     : delete histograms on listed columns
 * ---------------------------------------------------------------- */

typedef struct {
    int  mode;                                 /* 0|1|2 */
    int  num_buckets;                           /* 0 = use HIST_DEFAULT_BUCKETS */
    int  num_cols;
    char cols[CAT_MAX_COLUMNS][CAT_MAX_NAME_LEN];
} AnalyzeHistReq;

AnalyzeHistReq g_analyze_hist = {0, 0, 0, {{0}}};

void ResetAnalyzeHist(void)
{
    g_analyze_hist.mode = 0;
    g_analyze_hist.num_buckets = 0;
    g_analyze_hist.num_cols = 0;
}

void SetAnalyzeHistMode(int mode)         { g_analyze_hist.mode = mode; }
void SetAnalyzeHistBuckets(int buckets)   { g_analyze_hist.num_buckets = buckets; }
void AddAnalyzeHistCol(const char *name)
{
    if (g_analyze_hist.num_cols >= CAT_MAX_COLUMNS) return;
    strncpy(g_analyze_hist.cols[g_analyze_hist.num_cols], name,
            CAT_MAX_NAME_LEN - 1);
    g_analyze_hist.cols[g_analyze_hist.num_cols][CAT_MAX_NAME_LEN - 1] = '\0';
    g_analyze_hist.num_cols++;
}

/* Returns 1 if the column should participate in this ANALYZE's
 * histogram work, 0 otherwise. mode=0 always returns 1. */
static int hist_col_selected(const char *col_name)
{
    if (g_analyze_hist.mode == 0) return 1;
    for (int i = 0; i < g_analyze_hist.num_cols; i++) {
        if (strcmp(g_analyze_hist.cols[i], col_name) == 0)
            return 1;
    }
    return 0;
}

/* Count heap pages by following the chain. */
static int count_heap_pages(const TableDesc *td)
{
    int count = 0;
    uint32_t page = td->heap_page;
    char page_buf[EVO_PAGE_SIZE];

    while (page != 0 && count < 100000) {
        count++;
        pgm_read_page(page, page_buf);
        PageHeader *hdr = (PageHeader *)page_buf;
        page = hdr->next_page;
    }
    return count;
}

int AnalyzeTableProcess(void)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;

    if (tapi_resolve(g_drop.tblName, &td, cols, &ncols) < 0) {
        snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                 "ERROR: table \"%s\" does not exist", g_drop.tblName);
        g_err.error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        TruncateDrop();
        ResetAnalyzeHist();
        return -1;
    }

    /* DROP HISTOGRAM short-circuit — no scan needed. */
    if (g_analyze_hist.mode == 2) {
        for (int i = 0; i < g_analyze_hist.num_cols; i++)
            cat_drop_histogram(td.table_id, g_analyze_hist.cols[i]);
        ResetAnalyzeHist();
        TruncateDrop();
        return 0;
    }

    /* Per-column tracking structures */
    DistinctSet *dsets = (DistinctSet *)calloc((size_t)ncols, sizeof(DistinctSet));
    uint64_t *null_counts = (uint64_t *)calloc((size_t)ncols, sizeof(uint64_t));
    uint64_t *width_sums = (uint64_t *)calloc((size_t)ncols, sizeof(uint64_t));
    char (*min_vals)[256] = (char (*)[256])calloc((size_t)ncols, 256);
    char (*max_vals)[256] = (char (*)[256])calloc((size_t)ncols, 256);
    int *min_set = (int *)calloc((size_t)ncols, sizeof(int));

    for (int i = 0; i < ncols; i++)
        dset_init(&dsets[i]);

    /* Scan all rows.
     *
     * Records are binary tuples ([0xE7][table_id][header][bitmap][data]).
     * The old semicolon-based parser returned garbage for every non-trivial
     * column, so histogram/ndv/min/max were silently broken. Decode via
     * tup_extract_fields for the correct per-column strings. */
    uint64_t row_count = 0;
    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) == 0) {
        char pk_key[1024], record[RECORD_BUF_SIZE];
        char values[CAT_MAX_COLUMNS][256];
        int  is_null[CAT_MAX_COLUMNS];

        while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
            row_count++;
            int rec_len = tup_record_len(record, (int)sizeof(record));
            if (rec_len <= 0) rec_len = (int)sizeof(record);

            int nvals = tup_extract_fields(record, rec_len, cols, ncols,
                                           values, is_null, CAT_MAX_COLUMNS);
            if (nvals < 0) nvals = 0;

            for (int c = 0; c < ncols && c < nvals; c++) {
                int vlen = (int)strlen(values[c]);
                width_sums[c] += (uint64_t)vlen;

                if (is_null[c] || vlen == 0) {
                    null_counts[c]++;
                    continue;
                }

                dset_add(&dsets[c], values[c]);

                /* Track min/max */
                if (!min_set[c]) {
                    strncpy(min_vals[c], values[c], 255);
                    strncpy(max_vals[c], values[c], 255);
                    min_set[c] = 1;
                } else {
                    if (strcmp(values[c], min_vals[c]) < 0)
                        strncpy(min_vals[c], values[c], 255);
                    if (strcmp(values[c], max_vals[c]) > 0)
                        strncpy(max_vals[c], values[c], 255);
                }
            }
        }
    }

    /* Count heap pages */
    int page_count = count_heap_pages(&td);

    /* Store table-level stats */
    TableStatsDesc ts;
    memset(&ts, 0, sizeof(ts));
    ts.table_id = td.table_id;
    ts.row_count = row_count;
    ts.page_count = (uint32_t)page_count;
    ts.last_analyzed = time(NULL);
    cat_store_table_stats(&ts);

    /* Store per-column stats + histograms.
     *
     * UPDATE HISTOGRAM mode skips column stats rewrite (the parser asked
     * for histograms only) but still runs the scan above — needed to
     * populate dsets. mode=0 rebuilds both. */
    int want_colstats = (g_analyze_hist.mode == 0);
    int buckets = g_analyze_hist.num_buckets > 0
                  ? g_analyze_hist.num_buckets : HIST_DEFAULT_BUCKETS;
    if (buckets > HIST_MAX_BUCKETS) buckets = HIST_MAX_BUCKETS;

    for (int c = 0; c < ncols; c++) {
        if (want_colstats) {
            ColumnStatsDesc cs;
            memset(&cs, 0, sizeof(cs));
            cs.table_id = td.table_id;
            strncpy(cs.col_name, cols[c].col_name, CAT_MAX_NAME_LEN - 1);
            cs.null_count = null_counts[c];
            cs.distinct_count = (uint64_t)dsets[c].count;
            if (min_set[c]) {
                strncpy(cs.min_value, min_vals[c], 255);
                strncpy(cs.max_value, max_vals[c], 255);
            }
            cs.avg_width = row_count > 0
                           ? (int)(width_sums[c] / row_count) : 0;
            cat_store_column_stats(&cs);
        }

        if (hist_col_selected(cols[c].col_name) && dsets[c].count > 0) {
            HistogramDesc hist;
            if (build_auto_histogram(&dsets[c], td.table_id,
                                     cols[c].col_name, buckets, &hist) == 0) {
                cat_store_histogram(&hist);
            }
        }
    }

    /* Collect and store index statistics */
    {
        IndexDesc indexes[32];
        int nIdx = cat_list_indexes(td.table_id, indexes, 32);
        for (int i = 0; i < nIdx; i++) {
            BTree2 idxTree = {0};
            idxTree.root_page = indexes[i].root_page;
            BTree2Stats bstats;
            if (bt2_stats(&idxTree, &bstats) == 0) {
                IndexStatsDesc ist;
                memset(&ist, 0, sizeof(ist));
                ist.table_id = td.table_id;
                strncpy(ist.index_name, indexes[i].index_name,
                        CAT_MAX_NAME_LEN - 1);
                ist.tree_depth = bstats.depth;
                ist.leaf_pages = bstats.leaf_pages;
                ist.total_entries = bstats.total_entries;
                ist.avg_entries_per_leaf = (int)bstats.avg_entries_per_leaf;
                cat_store_index_stats(&ist);
            }
        }
    }

    /* Cleanup */
    for (int i = 0; i < ncols; i++)
        dset_free(&dsets[i]);
    free(dsets);
    free(null_counts);
    free(width_sums);
    free(min_vals);
    free(max_vals);
    free(min_set);

    ResetAnalyzeHist();

    printf("ANALYZE: %lu rows, %d columns, %d pages\n",
           (unsigned long)row_count, ncols, page_count);

    TruncateDrop();
    return 0;
}
