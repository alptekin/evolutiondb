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
#include <pthread.h>
#include <unistd.h>
#include "database.h"
#include "catalog_internal.h"
#include "query_context.h"
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
    pthread_create(&g_reclaim_thread, NULL, auto_reclaim_worker, NULL);
    fprintf(stderr, "[auto-RECLAIM] Background thread started (interval=%ds, threshold=20%%)\n",
            AUTO_RECLAIM_INTERVAL_SEC);
}

void auto_reclaim_stop(void)
{
    if (!g_reclaim_running) return;
    g_reclaim_running = 0;
    pthread_join(g_reclaim_thread, NULL);
    fprintf(stderr, "[auto-RECLAIM] Background thread stopped\n");
}
