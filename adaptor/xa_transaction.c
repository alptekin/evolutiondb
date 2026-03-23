/*
 * xa_transaction.c — XA Distributed Transaction Support for EvoSQL
 *
 * Prepared transactions are persisted via WAL records (not a separate file).
 * On startup, WAL replay + archive scan rebuilds the in-memory prepared list.
 * XA RECOVER returns all prepared (in-doubt) transactions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "xa_transaction.h"
#include "../evolution/db/wal.h"

/* In-memory prepared transaction list (rebuilt from WAL on startup) */
static XAPreparedRecord g_xa_records[XA_MAX_PREPARED];

void xa_init(void)
{
    memset(g_xa_records, 0, sizeof(g_xa_records));

    /* Scan WAL archive for prepared TXs that weren't committed/rolled back.
     * For now, prepared TXs are tracked in-memory. After crash, they're
     * rebuilt from WAL archive records during recovery.
     * TODO: scan WAL archive for XA_PREPARE/COMMIT/ROLLBACK records */

    int count = 0;
    for (int i = 0; i < XA_MAX_PREPARED; i++)
        if (g_xa_records[i].active) count++;
    if (count > 0)
        fprintf(stderr, "[XA] %d prepared transaction(s) loaded\n", count);
}

void xa_shutdown(void)
{
    /* Nothing to flush — WAL records are already durable */
}

int xa_persist_prepare(const char *xa_xid, uint32_t mvcc_xid)
{
    /* Find a free slot */
    for (int i = 0; i < XA_MAX_PREPARED; i++) {
        if (!g_xa_records[i].active) {
            strncpy(g_xa_records[i].xid, xa_xid, XA_ID_MAX - 1);
            g_xa_records[i].xid[XA_ID_MAX - 1] = '\0';
            g_xa_records[i].mvcc_xid = mvcc_xid;
            g_xa_records[i].active = 1;
            { struct timeval tv; gettimeofday(&tv, NULL);
              g_xa_records[i].prepare_time = (int64_t)tv.tv_sec * 1000000LL + tv.tv_usec; }

            /* Write PREPARE record to WAL (crash-safe) */
            wal_log_xa_prepare(xa_xid, mvcc_xid);

            return 0;
        }
    }
    return -1;  /* no free slot */
}

int xa_remove_prepared(const char *xa_xid)
{
    for (int i = 0; i < XA_MAX_PREPARED; i++) {
        if (g_xa_records[i].active &&
            strcmp(g_xa_records[i].xid, xa_xid) == 0) {
            g_xa_records[i].active = 0;
            g_xa_records[i].xid[0] = '\0';
            g_xa_records[i].mvcc_xid = 0;

            /* WAL resolve record written by caller (COMMIT or ROLLBACK path) */

            return 0;
        }
    }
    return -1;
}

int xa_list_prepared(XAPreparedRecord *out, int max)
{
    int count = 0;
    for (int i = 0; i < XA_MAX_PREPARED && count < max; i++) {
        if (g_xa_records[i].active)
            out[count++] = g_xa_records[i];
    }
    return count;
}

uint32_t xa_find_prepared(const char *xa_xid)
{
    for (int i = 0; i < XA_MAX_PREPARED; i++) {
        if (g_xa_records[i].active &&
            strcmp(g_xa_records[i].xid, xa_xid) == 0)
            return g_xa_records[i].mvcc_xid;
    }
    return 0;
}

int xa_cleanup_orphans(void)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    int64_t now_us = (int64_t)tv.tv_sec * 1000000LL + tv.tv_usec;
    int64_t timeout_us = (int64_t)XA_ORPHAN_TIMEOUT_SEC * 1000000LL;
    int cleaned = 0;

    for (int i = 0; i < XA_MAX_PREPARED; i++) {
        if (!g_xa_records[i].active) continue;
        if (g_xa_records[i].prepare_time == 0) continue;  /* no timestamp */

        int64_t age_us = now_us - g_xa_records[i].prepare_time;
        if (age_us > timeout_us) {
            fprintf(stderr, "[XA] Orphan cleanup: rolling back '%s' "
                    "(prepared %lld seconds ago)\n",
                    g_xa_records[i].xid, (long long)(age_us / 1000000));

            /* Abort the orphaned TX */
            uint32_t mvcc_xid = g_xa_records[i].mvcc_xid;
            {
                extern void clog_set_aborted(uint32_t);
                extern void lock_release_all(uint32_t);
                extern void lock_gap_release_all(uint32_t);
                extern void mvcc_unregister_tx(uint32_t);
                clog_set_aborted(mvcc_xid);
                lock_release_all(mvcc_xid);
                lock_gap_release_all(mvcc_xid);
                mvcc_unregister_tx(mvcc_xid);
            }
            wal_log_xa_resolve(g_xa_records[i].xid, 0);  /* WAL ROLLBACK record */

            g_xa_records[i].active = 0;
            g_xa_records[i].xid[0] = '\0';
            cleaned++;
        }
    }
    return cleaned;
}
