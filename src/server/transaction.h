#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <stdint.h>

/* Forward declaration of RowID (full definition in database.h / slotted.h) */
#ifndef ROWID_DEFINED
#define ROWID_DEFINED
typedef struct { uint32_t page_no; uint16_t slot_idx; } RowID;
#endif

/* ----------------------------------------------------------------
 *  Transaction undo-log for single-connection ACID
 *
 *  Each DML operation (INSERT/UPDATE/DELETE) records an undo entry
 *  while a transaction is active.  COMMIT discards the log;
 *  ROLLBACK replays it in reverse order.
 * ---------------------------------------------------------------- */

#define TX_OP_INSERT 1   /* undo = delete the key */
#define TX_OP_UPDATE 2   /* undo = restore old data */
#define TX_OP_DELETE 3   /* undo = re-insert old data */

typedef struct UndoEntry {
    int   op_type;          /* TX_OP_INSERT / UPDATE / DELETE */
    char *table;            /* table file path (e.g. "data/.../t.dat") */
    char *key;              /* primary key */
    char *old_data;         /* previous record data (NULL for INSERT) */
    int   old_data_len;     /* binary tuple length (0 if old_data is NULL) */
    RowID old_rid;          /* heap RowID of old version (for non-destructive UPDATE rollback) */
    struct UndoEntry *next; /* linked list (stack: newest first) */
} UndoEntry;

typedef struct {
    UndoEntry *head;        /* most recent entry (top of stack) */
    int        count;       /* number of entries */
} UndoLog;

/* Savepoint — marks a position in the undo log stack */
#define MAX_SAVEPOINTS 64
typedef struct {
    char name[128];         /* savepoint name */
    int  undo_count;        /* undo log count at savepoint creation */
} SavePoint;

typedef struct {
    SavePoint entries[MAX_SAVEPOINTS];
    int       count;        /* number of active savepoints */
} SavePointStack;

/* Allocate / free an undo log */
UndoLog *undo_log_create(void);
void     undo_log_free(UndoLog *log);

/* Append an undo entry (pushed to head = stack order).
 * old_data is a binary tuple (may contain NUL bytes), old_data_len is its length.
 * old_rid is the heap RowID of the soft-deleted old version (for TX_OP_UPDATE);
 * pass {0,0} for INSERT/DELETE. */
void undo_log_record(UndoLog *log, int op_type,
                     const char *table, const char *key,
                     const char *old_data, int old_data_len,
                     RowID old_rid);

/* Replay the undo log in reverse (ROLLBACK) — undoes all changes.
 * Returns 0 on success, -1 on error. */
int undo_log_rollback(UndoLog *log);

/* Rollback to a savepoint — undoes entries until count == target_count.
 * Returns 0 on success, -1 on error. */
int undo_log_rollback_to(UndoLog *log, int target_count);

/* Savepoint stack operations */
void savepoint_stack_init(SavePointStack *sp);
int  savepoint_create(SavePointStack *sp, const char *name, int undo_count);
int  savepoint_find(SavePointStack *sp, const char *name);
void savepoint_release(SavePointStack *sp, int idx);
void savepoint_release_after(SavePointStack *sp, int idx);

/* The global callback installed while a transaction query runs.
 * Engine DML code calls this (if non-NULL) before modifying data.
 * old_rid is the heap RowID of the old version (for UPDATE); {0,0} otherwise. */
void tx_undo_callback(int op_type, const char *table,
                      const char *key, const char *data, int data_len,
                      RowID old_rid);

#endif /* TRANSACTION_H */
