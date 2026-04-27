/*
 * mvcc.h — Multi-Version Concurrency Control for EvoSQL
 *
 * Provides snapshot isolation via transaction ID (XID) tracking,
 * a Commit Log (CLOG) for transaction status, and tuple visibility
 * predicates.
 *
 * CLOG stores 2-bit status per XID in dedicated pages:
 *   00 = in-progress, 01 = committed, 10 = aborted
 *
 * Visibility rule: a tuple is visible to snapshot S if
 *   - xmin is committed AND xmin < S.xmax AND xmin not in S.active_xids
 *   - xmax is either invalid (0) or aborted or not yet visible to S
 *   - Pre-MVCC tuples (no MVCC flag in tuple header) are always visible
 */
#ifndef MVCC_H
#define MVCC_H

#include <stdint.h>

/* ----------------------------------------------------------------
 *  CLOG status constants (2 bits per XID)
 * ---------------------------------------------------------------- */
#define CLOG_IN_PROGRESS  0
#define CLOG_COMMITTED    1
#define CLOG_ABORTED      2

/* ----------------------------------------------------------------
 *  Special XID constants
 *
 *  XID 0 : pre-MVCC sentinel (no MVCC header; always visible)
 *  XID 1 : frozen — committed long ago, always visible without CLOG
 *  XID 2+: normal transaction IDs assigned by pgm_next_xid()
 * ---------------------------------------------------------------- */
#define XID_FROZEN        1     /* "frozen" xmin — always committed */
#define XID_NORMAL_MIN    2     /* first assignable transaction ID */

/* Freeze tuples whose xmin is older than (current_xid - this threshold).
 * 200 million XIDs — ~1 hour at 50K TPS or ~2 days at 1K TPS. */
#define XID_FREEZE_AGE       200000000

/* Warn about approaching wraparound when next_xid exceeds this value.
 * At 2 billion, there are still ~2 billion XIDs remaining. */
#define XID_WRAPAROUND_WARN  2000000000u

/* ----------------------------------------------------------------
 *  Maximum concurrent active transactions tracked for snapshots
 * ---------------------------------------------------------------- */
#define MVCC_MAX_ACTIVE   256

/* ----------------------------------------------------------------
 *  Snapshot — point-in-time view of transaction activity
 *
 *  xmin        : lowest XID that was active (all XIDs < xmin are done)
 *  xmax        : first XID not yet assigned (all XIDs >= xmax are future)
 *  active_xids : XIDs that were in-progress at snapshot time
 *  nactive     : number of entries in active_xids
 *  my_xid      : XID of the transaction that took this snapshot
 * ---------------------------------------------------------------- */
typedef struct Snapshot {
    uint32_t xmin;
    uint32_t xmax;
    uint32_t active_xids[MVCC_MAX_ACTIVE];
    int      nactive;
    uint32_t my_xid;
    uint32_t snapshot_csn;   /* CSN at snapshot time — for O(1) visibility */
} Snapshot;

/* ----------------------------------------------------------------
 *  Lifecycle
 * ---------------------------------------------------------------- */

/* Initialize MVCC subsystem (active TX array + CLOG).
 * Must be called once at server startup, after pgm_init(). */
void mvcc_init(void);

/* Shut down MVCC subsystem. Called at server shutdown. */
void mvcc_shutdown(void);

/* ----------------------------------------------------------------
 *  XID assignment
 * ---------------------------------------------------------------- */

/* Allocate and return the next transaction ID.
 * Backed by pgm_next_xid() for FileHeader persistence. */
uint32_t mvcc_assign_xid(void);

/* Lazy XID assignment: if *xid_ptr is 0, assign a new XID, register it
 * as active, and store it in *xid_ptr. Returns the (possibly new) XID.
 * Used by auto-commit DML to defer XID allocation until first write. */
uint32_t mvcc_ensure_xid(uint32_t *xid_ptr);

/* ----------------------------------------------------------------
 *  Active transaction tracking
 *
 *  The global active-transaction list is maintained by the adaptor
 *  layer whenever a transaction starts or ends.
 * ---------------------------------------------------------------- */

/* Register a transaction as active (called at BEGIN / implicit start) */
void     mvcc_register_tx(uint32_t xid);

/* Unregister a transaction (called at COMMIT / ROLLBACK) */
void     mvcc_unregister_tx(uint32_t xid);

/* Return the smallest XID among currently active transactions,
 * or UINT32_MAX if no transactions are active. */
uint32_t mvcc_get_oldest_active(void);

/* ----------------------------------------------------------------
 *  Snapshot functions
 * ---------------------------------------------------------------- */

/* Capture a consistent snapshot of xmin, xmax, and active XIDs */
void mvcc_snapshot_take(Snapshot *out);

/* Task 207 — build a synthetic snapshot positioned right after the
 * given transaction committed. Every committed XID <= at_xid is
 * visible; anything assigned later is invisible. at_xid == 0 falls
 * back to mvcc_snapshot_take. */
void mvcc_snapshot_at_xid(uint32_t at_xid, Snapshot *out);

/* ----------------------------------------------------------------
 *  CLOG — Commit Log
 *
 *  Stores 2-bit transaction status packed 4 per byte in dedicated
 *  pages managed by the page manager. Each 4 KB page holds status
 *  for 16,320 XIDs ((4096 - 16) * 4, after the 16-byte PageHeader).
 * ---------------------------------------------------------------- */

/* Initialize CLOG page(s) on first database open */
void clog_init(void);

/* Mark a transaction as committed (status = 01) */
void clog_set_committed(uint32_t xid);

/* Mark a transaction as committed and store its CSN (for O(1) visibility). */
void clog_set_committed_csn(uint32_t xid, uint32_t csn);

/* Get the CSN for a committed XID. Returns 0 if not committed or not found. */
uint32_t clog_get_csn(uint32_t xid);

/* Mark a transaction as aborted (status = 10) */
void clog_set_aborted(uint32_t xid);

/* Status queries — each returns 1 if the XID has that status, 0 otherwise */
int  clog_is_committed(uint32_t xid);
int  clog_is_aborted(uint32_t xid);
int  clog_is_in_progress(uint32_t xid);

/* ----------------------------------------------------------------
 *  Tuple visibility
 *
 *  Determines whether a heap tuple is visible to the given snapshot.
 *  Uses tup_get_xmin() / tup_get_xmax() from tuple_format.h to
 *  read the MVCC fields embedded in the tuple header.
 *
 *  Pre-MVCC tuples (those without the MVCC flag in tuple header)
 *  are unconditionally visible for backward compatibility.
 *
 *  Returns 1 if the tuple is visible, 0 otherwise.
 * ---------------------------------------------------------------- */

/* Visibility predicate — reads xmin/xmax directly from tuple header
 * for performance (keep in sync with tuple_format.h layout). */
int mvcc_is_visible(const char *tuple_data, int tuple_len, const Snapshot *snap);

/* Set XMIN_COMMITTED hint bit on a heap tuple at the given RowID.
 * Reads the page, sets the flag byte, writes back. Called lazily after
 * the first successful CLOG-based visibility check to avoid future lookups. */
void mvcc_set_hint_committed(uint32_t page_no, uint16_t slot_idx);

/* ----------------------------------------------------------------
 *  Crash recovery helpers
 *
 *  g_startup_xid is the first XID assigned after the most recent
 *  server start. Any XID < startup_xid that is still IN_PROGRESS
 *  in the CLOG must be from a crashed session and is treated as
 *  effectively aborted (the inserting TX never committed).
 * ---------------------------------------------------------------- */

/* Return the startup XID (first XID assigned after server start).
 * Any IN_PROGRESS XID < this value is from a crashed session. */
uint32_t mvcc_get_startup_xid(void);

/* Check if an XID belongs to a crashed transaction:
 * returns 1 if xid < startup_xid AND clog status is IN_PROGRESS. */
int mvcc_xid_is_crashed(uint32_t xid);

#endif /* MVCC_H */
