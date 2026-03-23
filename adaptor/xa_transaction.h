/*
 * xa_transaction.h — XA Distributed Transaction Support for EvoSQL
 *
 * Implements the XA protocol for 2-Phase Commit:
 *   XA START 'xid'    — begin an XA transaction branch
 *   XA END 'xid'      — end the active branch (mark idle)
 *   XA PREPARE 'xid'  — persist state to disk (crash-safe)
 *   XA COMMIT 'xid'   — finalize the transaction
 *   XA ROLLBACK 'xid' — abort the transaction
 *   XA RECOVER        — list all prepared (in-doubt) transactions
 *
 * State machine: IDLE → ACTIVE → ENDED → PREPARED → COMMITTED/ROLLED_BACK
 *
 * PREPARE records are stored in a dedicated file (evosql.xa) so they
 * survive crash. On startup, XA RECOVER returns all prepared transactions.
 */
#ifndef XA_TRANSACTION_H
#define XA_TRANSACTION_H

#include <stdint.h>

/* XA transaction states */
#define XA_STATE_IDLE      0
#define XA_STATE_ACTIVE    1
#define XA_STATE_ENDED     2
#define XA_STATE_PREPARED  3
#define XA_STATE_COMMITTED 4
#define XA_STATE_ROLLEDBACK 5

/* Max XA ID length */
#define XA_ID_MAX 128

/* Max concurrent prepared transactions */
#define XA_MAX_PREPARED 64

/* Default orphan TX timeout: 5 minutes (seconds) */
#define XA_ORPHAN_TIMEOUT_SEC 300

/* XA prepared transaction record (persisted via WAL) */
typedef struct {
    char     xid[XA_ID_MAX];     /* XA transaction identifier */
    uint32_t mvcc_xid;           /* internal MVCC transaction ID */
    int      active;             /* 1 = prepared, 0 = free slot */
    int64_t  prepare_time;       /* epoch microseconds when PREPARE was issued */
} XAPreparedRecord;

/* Initialize XA subsystem. Loads prepared records from disk. */
void xa_init(void);

/* Shutdown XA subsystem. */
void xa_shutdown(void);

/* Store a prepared transaction record to disk (crash-safe). */
int xa_persist_prepare(const char *xa_xid, uint32_t mvcc_xid);

/* Remove a prepared transaction (after COMMIT or ROLLBACK). */
int xa_remove_prepared(const char *xa_xid);

/* List all prepared transactions. Returns count.
 * Fills out[] with up to max entries. */
int xa_list_prepared(XAPreparedRecord *out, int max);

/* Find a prepared transaction by XA ID. Returns mvcc_xid or 0. */
uint32_t xa_find_prepared(const char *xa_xid);

/* Cleanup orphan prepared TXs older than XA_ORPHAN_TIMEOUT_SEC.
 * Called periodically by auto-reclaim background thread.
 * Rolls back expired prepared TXs. Returns number cleaned. */
int xa_cleanup_orphans(void);

#endif /* XA_TRANSACTION_H */
