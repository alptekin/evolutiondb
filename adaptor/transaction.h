#ifndef TRANSACTION_H
#define TRANSACTION_H

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

/* Append an undo entry (pushed to head = stack order) */
void undo_log_record(UndoLog *log, int op_type,
                     const char *table, const char *key,
                     const char *old_data);

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
 * Engine DML code calls this (if non-NULL) before modifying data. */
void tx_undo_callback(int op_type, const char *table,
                      const char *key, const char *data);

#endif /* TRANSACTION_H */
