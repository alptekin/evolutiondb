/*
 * auto_reclaim.c — Background Auto-RECLAIM for EvoSQL
 *
 * Periodically scans all tables and triggers RECLAIM TABLE when
 * the dead tuple ratio exceeds the threshold (20%).
 *
 * Runs as a background thread started at server_init and stopped
 * at server_cleanup.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include <unistd.h>
#include "database.h"
#include "catalog_internal.h"
#include "query_context.h"
#include "table_api.h"
#include "tuple_format.h"
#include "btree2.h"
#include "../../adaptor/platform.h"

/* Auto-RECLAIM interval in seconds */
#define AUTO_RECLAIM_INTERVAL_SEC  30

/* ================================================================
 *  Thread state
 * ================================================================ */
static pthread_t    g_reclaim_thread;
static volatile int g_reclaim_running = 0;

/* External lock — serializes DML/DDL with auto-RECLAIM */
extern void *g_parse_lock_ptr;  /* set by server.c */

/* ================================================================
 *  Task 209 — Temporal retention pruning
 *
 *  Once per tick, sweep every system-versioned table's <name>_history
 *  shadow and delete rows whose valid_to fell more than
 *  g_system_time_retention_days days ago. Setting the knob to 0
 *  disables this whole pass — useful for forensic captures or for
 *  tests that want to inspect pre-retention behaviour.
 * ================================================================ */
static void prune_history_rows(const TableDesc *histTd, time_t cutoff)
{
    /* Walk the shadow's PK B+ tree (which carries one entry per
     * history row, keyed h<page>:<slot>) and re-decode each tuple to
     * read its valid_to timestamp. Any row whose valid_to is older
     * than the cutoff is unlinked from the heap and the tree. */
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = cat_find_columns(histTd->table_id, cols, CAT_MAX_COLUMNS);
    if (ncols <= 0) return;

    /* Locate valid_to column index — bail out if the shadow doesn't
     * carry one (shouldn't happen on system-versioned tables, but a
     * mis-attached shadow shouldn't take down the daemon). */
    int valid_to_idx = -1;
    for (int i = 0; i < ncols; i++) {
        if (strcasecmp(cols[i].col_name, "valid_to") == 0) {
            valid_to_idx = i;
            break;
        }
    }
    if (valid_to_idx < 0) return;

    BTree2 tree = { histTd->pk_root_page };
    BTree2Cursor cur;
    if (bt2_cursor_first(&tree, &cur) < 0) return;

    /* Buffer for victims — collect first, delete after the cursor
     * finishes so we don't invalidate the iterator mid-traversal. */
    typedef struct { char key[256]; RowID rid; } Victim;
    enum { MAX_VICTIMS_PER_TICK = 256 };
    Victim victims[MAX_VICTIMS_PER_TICK];
    int nv = 0;

    char key[256];
    RowID rid;
    while (nv < MAX_VICTIMS_PER_TICK &&
           bt2_cursor_next(&cur, key, &rid) == 0) {
        char rec[RECORD_BUF_SIZE];
        int rec_len = tapi_heap_read(rid, rec, sizeof(rec));
        if (rec_len <= 0) continue;

        char fields[CAT_MAX_COLUMNS][256];
        int  is_null[CAT_MAX_COLUMNS];
        int nf = tup_extract_fields(rec, rec_len, cols, ncols,
                                    fields, is_null, CAT_MAX_COLUMNS);
        if (nf <= valid_to_idx || is_null[valid_to_idx]) continue;

        /* Parse "YYYY-MM-DD HH:MM:SS" → time_t (UTC). */
        struct tm tm;
        memset(&tm, 0, sizeof(tm));
        if (sscanf(fields[valid_to_idx],
                   "%4d-%2d-%2d %2d:%2d:%2d",
                   &tm.tm_year, &tm.tm_mon, &tm.tm_mday,
                   &tm.tm_hour, &tm.tm_min, &tm.tm_sec) < 3)
            continue;
        tm.tm_year -= 1900;
        tm.tm_mon  -= 1;
        time_t row_ts = timegm(&tm);
        if (row_ts >= cutoff) continue;  /* still within window */

        strncpy(victims[nv].key, key, sizeof(victims[nv].key) - 1);
        victims[nv].key[sizeof(victims[nv].key) - 1] = '\0';
        victims[nv].rid = rid;
        nv++;
    }

    for (int i = 0; i < nv; i++) {
        BTree2 t = { histTd->pk_root_page };
        bt2_delete(&t, victims[i].key);
        if (t.root_page != histTd->pk_root_page) {
            cat_update_pk_root(histTd->table_id,
                               histTd->table_name,
                               histTd->schema_id,
                               t.root_page);
        }
        tapi_heap_delete(victims[i].rid);
    }

    if (nv > 0) {
        fprintf(stderr,
                "[temporal-retention] Pruned %d row(s) from %s\n",
                nv, histTd->table_name);
    }
}

/* Walk every database / schema / table and prune the history shadows
 * of any system-versioned table whose history_table_id is set. */
static void retention_pass(time_t now_ts)
{
    int days = g_system_time_retention_days;
    if (days <= 0) return;
    time_t cutoff = now_ts - (time_t)days * 86400;

    DatabaseDesc dbs[8];
    int ndb = cat_list_databases(dbs, 8);
    for (int di = 0; di < ndb; di++) {
        SchemaDesc schemas[16];
        int ns = cat_list_schemas(dbs[di].db_id, schemas, 16);
        for (int si = 0; si < ns; si++) {
            TableDesc tables[64];
            int nt = cat_list_tables(schemas[si].schema_id, tables, 64);
            for (int ti = 0; ti < nt; ti++) {
                if (!tables[ti].system_versioned) continue;
                if (tables[ti].history_table_id == 0) continue;

                TableDesc histTd;
                if (cat_find_table_by_id(tables[ti].history_table_id,
                                         &histTd) != 0) continue;
                prune_history_rows(&histTd, cutoff);
            }
        }
    }
}

/* ================================================================
 *  Background thread
 * ================================================================ */
static void *auto_reclaim_worker(void *arg)
{
    (void)arg;

    while (g_reclaim_running) {
        /* Sleep in small increments so we can check g_reclaim_running */
        for (int s = 0; s < AUTO_RECLAIM_INTERVAL_SEC && g_reclaim_running; s++)
            sleep(1);

        if (!g_reclaim_running) break;

        /* XA orphan cleanup — rollback prepared TXs older than timeout */
        {
            extern int xa_cleanup_orphans(void);
            int cleaned = xa_cleanup_orphans();
            if (cleaned > 0)
                fprintf(stderr, "[auto-RECLAIM] Cleaned %d orphan XA transaction(s)\n",
                        cleaned);
        }

        /* Task 209 — prune system-versioned history rows whose valid_to
         * fell outside the retention window. Runs under the same write
         * lock the dead-tuple sweep uses below so DML and DDL are
         * serialized against pruning. */
        {
            extern rwlock_t g_parse_lock;
            rwlock_wrlock(&g_parse_lock);
            retention_pass(time(NULL));
            rwlock_wrunlock(&g_parse_lock);
        }

        /* Scan all databases → schemas → tables */
        DatabaseDesc dbs[8];
        int ndb = cat_list_databases(dbs, 8);

        for (int di = 0; di < ndb; di++) {
            SchemaDesc schemas[16];
            int ns = cat_list_schemas(dbs[di].db_id, schemas, 16);

            for (int si = 0; si < ns; si++) {
                TableDesc tables[64];
                int nt = cat_list_tables(schemas[si].schema_id, tables, 64);

                for (int ti = 0; ti < nt; ti++) {
                    if (!g_reclaim_running) goto done;
                    if (tables[ti].is_temporary) continue;

                    if (should_auto_reclaim(tables[ti].table_id)) {
                        /* Allocate a temporary QueryContext for RECLAIM */
                        QueryContext *qctx = qctx_alloc();
                        if (!qctx) continue;
                        g_qctx = qctx;

                        /* Set database/schema context */
                        strncpy(g_currentDatabase, dbs[di].db_name, 255);
                        strncpy(g_currentSchema, schemas[si].schema_name, 255);

                        /* Set table name for ReclaimTableProcess */
                        strncpy(g_qctx->drop.tblName, tables[ti].table_name,
                                sizeof(g_qctx->drop.tblName) - 1);

                        fprintf(stderr, "[auto-RECLAIM] Triggered for table %s.%s.%s\n",
                                dbs[di].db_name, schemas[si].schema_name,
                                tables[ti].table_name);

                        /* Acquire write lock (serialize with DML) */
                        extern rwlock_t g_parse_lock;
                        rwlock_wrlock(&g_parse_lock);
                        ReclaimTableProcess();
                        rwlock_wrunlock(&g_parse_lock);

                        qctx_free(qctx);
                        g_qctx = NULL;
                    }
                }
            }
        }
    }

done:
    return NULL;
}

/* ================================================================
 *  Public API
 * ================================================================ */

void auto_reclaim_start(void)
{
    if (g_reclaim_running) return;
    g_reclaim_running = 1;

    /* The auto-RECLAIM worker calls into ReclaimTableProcess, which
     * allocates ~250 KB of locals on entry (`ColumnDesc cols[256]`
     * ≈ 237 KB) and more in its inner phases. macOS pthread default
     * stack is 512 KB — not enough. Without explicit attr, an
     * auto-RECLAIM tick on a real table SIGBUS'd here at the function
     * prologue's stack probe. Use the same 16 MB stack the rest of
     * the server's worker threads get via platform.h's thread_create
     * macro. */
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, 16 * 1024 * 1024);
    int rc = pthread_create(&g_reclaim_thread, &attr,
                            auto_reclaim_worker, NULL);
    pthread_attr_destroy(&attr);
    if (rc != 0) {
        fprintf(stderr, "[auto-RECLAIM] pthread_create failed: rc=%d\n", rc);
        g_reclaim_running = 0;
        return;
    }
    fprintf(stderr, "[auto-RECLAIM] Background thread started (interval=%ds, threshold=20%%, stack=16MB)\n",
            AUTO_RECLAIM_INTERVAL_SEC);
}

void auto_reclaim_stop(void)
{
    if (!g_reclaim_running) return;
    g_reclaim_running = 0;
    pthread_join(g_reclaim_thread, NULL);
    fprintf(stderr, "[auto-RECLAIM] Background thread stopped\n");
}
