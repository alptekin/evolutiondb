/*
 * lock_mgr.h — Row-Level Lock Manager for EvoSQL
 *
 * Provides per-row exclusive/shared locks for concurrent DML operations.
 * Locks are identified by (table_id, pk_key) and held by transaction XID.
 *
 * Lock modes:
 *   LOCK_SHARED    — multiple holders allowed (for SELECT FOR UPDATE SHARE)
 *   LOCK_EXCLUSIVE — single holder (for UPDATE/DELETE/SELECT FOR UPDATE)
 *
 * Lock lifecycle:
 *   - Acquired during DML (UPDATE/DELETE) or SELECT FOR UPDATE
 *   - Released at COMMIT, ROLLBACK, or session disconnect
 *   - Auto-commit releases immediately after statement completes
 *
 * Conflict detection:
 *   - EXCLUSIVE vs EXCLUSIVE: second requester waits (with timeout)
 *   - EXCLUSIVE vs SHARED: second requester waits
 *   - SHARED vs SHARED: both acquire immediately
 *   - If timeout expires: returns LOCK_TIMEOUT error
 */
#ifndef LOCK_MGR_H
#define LOCK_MGR_H

#include <stdint.h>

/* Lock modes */
#define LOCK_NONE       0
#define LOCK_SHARED     1
#define LOCK_EXCLUSIVE  2

/* Lock result codes */
#define LOCK_OK         0
#define LOCK_TIMEOUT   -1
#define LOCK_ERROR     -2

/* Default lock wait timeout in milliseconds (5 seconds) */
#define LOCK_WAIT_TIMEOUT_MS  5000

/* ----------------------------------------------------------------
 *  Lock Manager API
 * ---------------------------------------------------------------- */

/* Initialize the lock manager. Called once at server startup. */
void lock_mgr_init(void);

/* Shut down and free all lock state. */
void lock_mgr_shutdown(void);

/* Acquire a row lock.
 * Blocks if the row is already locked by a different XID in a conflicting mode.
 * Returns LOCK_OK on success, LOCK_TIMEOUT if wait exceeds timeout.
 * Re-entrant: acquiring the same lock by the same XID is a no-op. */
int lock_row_acquire(uint32_t table_id, const char *pk_key,
                     uint32_t xid, int mode);

/* Release a specific row lock held by this XID.
 * No-op if the XID doesn't hold the lock. */
void lock_row_release(uint32_t table_id, const char *pk_key, uint32_t xid);

/* Release ALL row locks held by a given XID.
 * Called at COMMIT, ROLLBACK, auto-commit, or disconnect. */
void lock_release_all(uint32_t xid);

/* Check if a row is locked. Returns the lock mode (LOCK_NONE if not locked).
 * If holder_xid is non-NULL, stores the holder's XID. */
int lock_row_check(uint32_t table_id, const char *pk_key, uint32_t *holder_xid);

/* Get count of currently held locks (for diagnostics). */
int lock_mgr_count(void);

#endif /* LOCK_MGR_H */
