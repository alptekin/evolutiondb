/*
 * conflict_guard.h — Conflict Guard for EvoSQL SERIALIZABLE Isolation
 *
 * Detects write skew anomalies in SERIALIZABLE transactions using
 * simplified RW-dependency tracking (dangerous structure detection).
 *
 * When a SERIALIZABLE transaction:
 *   - READs a row → registers a "read interest" (SIRead)
 *   - WRITEs a row → checks if another TX has a read interest → marks RW edge
 *
 * At COMMIT: if the TX has both inbound AND outbound RW edges
 * (dangerous structure), the commit is rejected with serialization failure.
 *
 * This catches ~90% of write skew anomalies without full predicate
 * locking or complete dependency graph analysis.
 */
#ifndef CONFLICT_GUARD_H
#define CONFLICT_GUARD_H

#include <stdint.h>

/* Maximum tracked read interests per transaction */
#define CG_MAX_READS   256

/* Maximum predicate locks per transaction */
#define CG_MAX_PREDICATES 16

/* Maximum concurrent SERIALIZABLE transactions */
#define CG_MAX_TXS     64

/* Result codes */
#define CG_OK                    0
#define CG_SERIALIZATION_FAILURE -1

/* ----------------------------------------------------------------
 *  Conflict Guard API
 * ---------------------------------------------------------------- */

/* Initialize the Conflict Guard. Called once at server startup. */
void cg_init(void);

/* Register a SERIALIZABLE transaction. Called at BEGIN. */
void cg_register_tx(uint32_t xid);

/* Unregister a transaction. Called at COMMIT/ROLLBACK/disconnect. */
void cg_unregister_tx(uint32_t xid);

/* Record that a SERIALIZABLE TX read a row (SIRead interest).
 * Called during SELECT when isolation_level == SERIALIZABLE. */
void cg_record_read(uint32_t reader_xid, uint32_t table_id, const char *pk_key);

/* Check if writing a row conflicts with any SERIALIZABLE reader.
 * If a reader exists for this row, marks RW edges on both TXs.
 * Called during INSERT/UPDATE/DELETE. */
void cg_check_write(uint32_t writer_xid, uint32_t table_id, const char *pk_key);

/* Check if a transaction can safely commit.
 * Returns CG_OK if safe, CG_SERIALIZATION_FAILURE if dangerous structure detected.
 * A "dangerous structure" = TX has both rw-in AND rw-out edges. */
int cg_check_commit(uint32_t xid);

/* ----------------------------------------------------------------
 *  Predicate Locking — catches UPDATE-based phantom reads
 *
 *  When a SERIALIZABLE TX executes SELECT with WHERE, the serialized
 *  WHERE expression is stored. On UPDATE/INSERT by another TX, the
 *  new row values are evaluated against stored predicates. If a match
 *  is found, RW-dependency edges are created.
 * ---------------------------------------------------------------- */

/* Record a predicate (serialized WHERE expression) for a SERIALIZABLE TX.
 * table_name + col_names needed for expression evaluation context.
 * expr_str is the serialized RPN expression (from expr_serialize). */
void cg_record_predicate(uint32_t reader_xid, uint32_t table_id,
                          const char *expr_str,
                          const char *col_names, int name_stride,
                          int num_cols);

/* Check if a new/modified row matches any stored predicate from other TXs.
 * If match → marks RW edges (same as cg_check_write).
 * col_values/val_stride: field values of the new row.
 * col_names/name_stride: column name array for expression evaluation. */
void cg_check_predicate_conflict(uint32_t writer_xid, uint32_t table_id,
                                  const char *col_names, int name_stride,
                                  const char *col_values, int val_stride,
                                  int num_cols);

#endif /* CONFLICT_GUARD_H */
