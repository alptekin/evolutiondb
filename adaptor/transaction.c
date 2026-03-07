/*
 * transaction.c — Undo-log based transaction support for EvoSQL
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "transaction.h"
#include "../evolution/db/apue.h"
#include "../evolution/db/apue_db.h"

/* Current undo log pointer — set by safe_query_execute when in transaction */
UndoLog *g_current_undo_log = NULL;

UndoLog *undo_log_create(void)
{
    UndoLog *log = (UndoLog *)calloc(1, sizeof(UndoLog));
    return log;
}

void undo_log_free(UndoLog *log)
{
    if (!log) return;
    UndoEntry *e = log->head;
    while (e) {
        UndoEntry *next = e->next;
        free(e->table);
        free(e->key);
        free(e->old_data);
        free(e);
        e = next;
    }
    free(log);
}

void undo_log_record(UndoLog *log, int op_type,
                     const char *table, const char *key,
                     const char *old_data)
{
    if (!log) return;
    UndoEntry *e = (UndoEntry *)calloc(1, sizeof(UndoEntry));
    if (!e) return;
    e->op_type  = op_type;
    e->table    = table    ? strdup(table)    : NULL;
    e->key      = key      ? strdup(key)      : NULL;
    e->old_data = old_data ? strdup(old_data) : NULL;
    e->next     = log->head;
    log->head   = e;
    log->count++;
}

int undo_log_rollback(UndoLog *log)
{
    if (!log || !log->head) return 0;

    /* Keep one DBHANDLE open per table to avoid repeated open/close */
    char cur_table[1024] = "";
    DBHANDLE db = NULL;

    UndoEntry *e = log->head;
    while (e) {
        if (!e->table || !e->key) {
            e = e->next;
            continue;
        }

        /* Open new handle if table changed */
        if (strcmp(cur_table, e->table) != 0) {
            if (db) db_close(db);
            db = db_open(e->table, O_RDWR, FILE_MODE);
            if (!db) {
                fprintf(stderr, "[TX] rollback: cannot open %s\n", e->table);
                cur_table[0] = '\0';
                e = e->next;
                continue;
            }
            strncpy(cur_table, e->table, sizeof(cur_table) - 1);
            cur_table[sizeof(cur_table) - 1] = '\0';
        }

        switch (e->op_type) {
        case TX_OP_INSERT:
            /* Undo INSERT = delete the inserted key */
            if (db_delete(db, e->key) != 0)
                fprintf(stderr, "[TX] rollback: delete key '%s' failed\n", e->key);
            break;
        case TX_OP_UPDATE:
            /* Undo UPDATE = restore old data */
            if (e->old_data) {
                if (db_store(db, e->key, e->old_data, DB_REPLACE) != 0)
                    fprintf(stderr, "[TX] rollback: restore key '%s' failed\n", e->key);
            }
            break;
        case TX_OP_DELETE:
            /* Undo DELETE = re-insert old data */
            if (e->old_data) {
                if (db_store(db, e->key, e->old_data, DB_INSERT) != 0)
                    fprintf(stderr, "[TX] rollback: re-insert key '%s' failed\n", e->key);
            }
            break;
        }

        e = e->next;
    }

    if (db) db_close(db);
    return 0;
}

/* Callback invoked by engine DML code */
void tx_undo_callback(int op_type, const char *table,
                      const char *key, const char *data)
{
    if (g_current_undo_log)
        undo_log_record(g_current_undo_log, op_type, table, key, data);
}
