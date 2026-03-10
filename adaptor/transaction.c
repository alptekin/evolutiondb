/*
 * transaction.c — Undo-log based transaction support for EvoSQL
 *
 * Rollback uses the unified page-based storage (catalog + table_api + bt2).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transaction.h"
#include "../evolution/db/database.h"
#include "../evolution/db/catalog_internal.h"
#include "../evolution/db/table_api.h"
#include "../evolution/db/btree2.h"

/* Current undo log pointer — set by safe_query_execute when in transaction.
 * Thread-local: each connection has its own transaction context. */
#if defined(_WIN32)
__declspec(thread) UndoLog *g_current_undo_log = NULL;
#else
__thread UndoLog *g_current_undo_log = NULL;
#endif

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

    UndoEntry *e = log->head;
    while (e) {
        if (!e->table || !e->key) {
            e = e->next;
            continue;
        }

        /* Resolve table via catalog (tapi_resolve handles path stripping) */
        TableDesc td;
        ColumnDesc cols[CAT_MAX_COLUMNS];
        int ncols;
        if (tapi_resolve(e->table, &td, cols, &ncols) < 0) {
            fprintf(stderr, "[TX] rollback: cannot resolve table %s\n", e->table);
            e = e->next;
            continue;
        }

        BTree2 pk_tree = tapi_pk_tree(&td);

        switch (e->op_type) {
        case TX_OP_INSERT: {
            /* Undo INSERT = delete the inserted row */
            RowID rid;
            if (bt2_search(&pk_tree, e->key, &rid) == 0) {
                tapi_heap_delete(rid);
                bt2_delete(&pk_tree, e->key);
            }
            break;
        }
        case TX_OP_UPDATE: {
            /* Undo UPDATE = restore old data */
            if (e->old_data) {
                RowID rid;
                if (bt2_search(&pk_tree, e->key, &rid) == 0) {
                    uint16_t rec_len = (uint16_t)(strlen(e->old_data) + 1);
                    RowID new_rid = tapi_heap_update(&td, rid, e->old_data, rec_len);
                    /* If record moved to a different page, update PK B+ tree */
                    if (new_rid.page_no != rid.page_no || new_rid.slot_idx != rid.slot_idx) {
                        bt2_update(&pk_tree, e->key, new_rid);
                    }
                }
            }
            break;
        }
        case TX_OP_DELETE: {
            /* Undo DELETE = re-insert old data */
            if (e->old_data) {
                uint16_t rec_len = (uint16_t)(strlen(e->old_data) + 1);
                RowID rid = tapi_heap_insert(&td, e->old_data, rec_len);
                if (rid.page_no != 0) {
                    bt2_insert(&pk_tree, e->key, rid);
                    td.pk_root_page = pk_tree.root_page;
                }
            }
            break;
        }
        }

        e = e->next;
    }

    return 0;
}

/* Callback invoked by engine DML code */
void tx_undo_callback(int op_type, const char *table,
                      const char *key, const char *data)
{
    if (g_current_undo_log)
        undo_log_record(g_current_undo_log, op_type, table, key, data);
}
