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

/* Simple hash set for distinct value tracking (capped) */
#define DISTINCT_CAP      10000
#define DISTINCT_HASH_SIZE 16384  /* power of 2 */

typedef struct {
    char   **entries;
    int      count;
    int      capacity;
} DistinctSet;

static void dset_init(DistinctSet *ds)
{
    ds->entries = (char **)calloc(DISTINCT_HASH_SIZE, sizeof(char *));
    ds->count = 0;
    ds->capacity = DISTINCT_HASH_SIZE;
}

static void dset_free(DistinctSet *ds)
{
    if (!ds->entries) return;
    for (int i = 0; i < ds->capacity; i++)
        free(ds->entries[i]);
    free(ds->entries);
    ds->entries = NULL;
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

/* Returns 1 if newly added, 0 if already present or capped. */
static int dset_add(DistinctSet *ds, const char *val)
{
    if (ds->count >= DISTINCT_CAP) return 0;

    unsigned int h = dset_hash(val) & (unsigned)(ds->capacity - 1);
    for (int i = 0; i < ds->capacity; i++) {
        int slot = (int)((h + (unsigned)i) & (unsigned)(ds->capacity - 1));
        if (!ds->entries[slot]) {
            ds->entries[slot] = strdup(val);
            ds->count++;
            return 1;
        }
        if (strcmp(ds->entries[slot], val) == 0)
            return 0;
    }
    return 0;
}

/* Parse semicolon-delimited record into values array.
 * Returns number of values parsed. */
static int parse_record(const char *record, char values[][256], int max_cols)
{
    int col = 0;
    const char *p = record;
    while (*p && col < max_cols) {
        int i = 0;
        while (*p && *p != ';' && i < 255)
            values[col][i++] = *p++;
        values[col][i] = '\0';
        col++;
        if (*p == ';') p++;
    }
    return col;
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

    if (tapi_resolve(g_tblDropName, &td, cols, &ncols) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "ERROR: table \"%s\" does not exist", g_tblDropName);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_TABLE);
        TruncateDrop();
        return -1;
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

    /* Scan all rows */
    uint64_t row_count = 0;
    TableScanCursor cursor;
    if (tapi_scan_begin(&td, &cursor) == 0) {
        char pk_key[1024], record[RECORD_BUF_SIZE];
        char values[CAT_MAX_COLUMNS][256];

        while (tapi_scan_next(&cursor, pk_key, record, sizeof(record)) == 0) {
            row_count++;
            int nvals = parse_record(record, values, ncols);

            for (int c = 0; c < ncols && c < nvals; c++) {
                int vlen = (int)strlen(values[c]);
                width_sums[c] += (uint64_t)vlen;

                if (vlen == 0 || strcmp(values[c], "NULL") == 0) {
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

    /* Store per-column stats */
    for (int c = 0; c < ncols; c++) {
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
        cs.avg_width = row_count > 0 ? (int)(width_sums[c] / row_count) : 0;
        cat_store_column_stats(&cs);
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

    printf("ANALYZE: %lu rows, %d columns, %d pages\n",
           (unsigned long)row_count, ncols, page_count);

    TruncateDrop();
    return 0;
}
