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

/* The global callback installed while a transaction query runs.
 * Engine DML code calls this (if non-NULL) before modifying data. */
void tx_undo_callback(int op_type, const char *table,
                      const char *key, const char *data);

#endif /* TRANSACTION_H */
