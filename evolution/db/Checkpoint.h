/*
 * Checkpoint.h — LangGraph BaseCheckpointSaver native backend (Task 204)
 *
 * Each `CREATE CHECKPOINT STORE name` registers a CheckpointStoreDesc in
 * CAT_SYS_CHECKPOINT_STORES and auto-creates the backing table
 *   __ck_<name>(thread_id, checkpoint_ns, checkpoint_id, parent_id,
 *               values, metadata, parent_config, created_at)
 * with checkpoint_id as PRIMARY KEY. The DML helpers (PUT / GET / LIST /
 * PUT WRITES) compile to plain INSERT / SELECT against this table so all
 * existing engine paths (MVCC, RLS, replication) apply without change.
 */
#ifndef CHECKPOINT_H
#define CHECKPOINT_H

#include "expression.h"  /* forward decls only */

/* ---- Parser interface ---- */
void  SetCheckpointStoreName(const char *name);
void  SetCheckpointStoreRetention(const char *expr);
void  SetCheckpointStoreCascade(int cascade);
void  ResetCheckpointOpts(void);

/* (DML field collectors moved below the new top-level processors.) */

/* ---- Top-level statement processors ---- */
int  CreateCheckpointStoreProcess(int if_not_exists);
int  DropCheckpointStoreProcess(int if_exists);
int  CheckpointPutProcess(int is_writes);   /* CHECKPOINT PUT [WRITES] */
int  CheckpointGetProcess(void);            /* CHECKPOINT GET (single row) */
int  CheckpointListProcess(void);           /* CHECKPOINT LIST (history) */

/* DML field collectors for the new grammar — populated by parser actions
 * before the corresponding *Process call. Strings are stored verbatim;
 * the helpers strip surrounding quotes. NULL pointers are accepted and
 * map to the SQL NULL marker. */
void SetCheckpointPutField(int idx, const char *literal_or_null);
void SetCheckpointThread(const char *thread_id);
void SetCheckpointAtId(const char *id);
void SetCheckpointLimit(int n);

#endif /* CHECKPOINT_H */
