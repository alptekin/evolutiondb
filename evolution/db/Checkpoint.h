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

/* DML field collectors — set during PUT / PUT WRITES parser actions. */
void  SetCheckpointThread(const char *thread_id);
void  SetCheckpointNs(const char *ns);
void  SetCheckpointId(const char *id);
void  SetCheckpointParent(const char *parent_id);
void  SetCheckpointValues(const char *json);
void  SetCheckpointMetadata(const char *json);
void  SetCheckpointParentConfig(const char *json);
void  SetCheckpointAtId(const char *id);
void  SetCheckpointLimit(int n);

/* ---- Top-level statement processors ---- */
int  CreateCheckpointStoreProcess(int if_not_exists);
int  DropCheckpointStoreProcess(int if_exists);
int  CheckpointPutProcess(void);            /* CHECKPOINT PUT */
int  CheckpointGetProcess(void);            /* CHECKPOINT GET (single row) */
int  CheckpointListProcess(void);           /* CHECKPOINT LIST (history) */
int  CheckpointPutWritesProcess(void);      /* CHECKPOINT PUT WRITES (batch) */

#endif /* CHECKPOINT_H */
