/*
 * conflict_guard.c — Conflict Guard for EvoSQL SERIALIZABLE Isolation
 *
 * Simplified RW-dependency tracking: detects "dangerous structures"
 * (both inbound and outbound RW edges) at COMMIT time.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include "conflict_guard.h"
#include "expression.h"  /* ExprNode, expr_deserialize, expr_evaluate */

/* ================================================================
 *  SIRead interest: records that a TX read a specific row
 * ================================================================ */
typedef struct {
    uint32_t table_id;
    char     pk_key[128];
} ReadInterest;

/* ================================================================
 *  Per-TX conflict state
 * ================================================================ */
/* Predicate lock: serialized WHERE expression for a table */
typedef struct {
    uint32_t table_id;
    char     expr_str[1024];       /* serialized RPN expression */
    char     col_names[64][128];   /* column name context */
    int      num_cols;
} PredicateLock;

typedef struct {
    uint32_t     xid;
    int          active;
    int          has_rw_in;        /* another TX wrote what we read */
    int          has_rw_out;       /* we wrote what another TX read */
    uint32_t     rw_in_from;      /* XID that caused rw-in (for error msg) */
    uint32_t     rw_out_to;       /* XID that caused rw-out (for error msg) */
    ReadInterest reads[CG_MAX_READS];
    int          read_count;
    PredicateLock predicates[CG_MAX_PREDICATES];
    int          predicate_count;
} CGTxState;

/* ================================================================
 *  Global state
 * ================================================================ */
static CGTxState       g_cg_txs[CG_MAX_TXS];
static pthread_mutex_t g_cg_lock = PTHREAD_MUTEX_INITIALIZER;

/* ================================================================
 *  Internal helpers
 * ================================================================ */

static CGTxState *find_tx(uint32_t xid)
{
    for (int i = 0; i < CG_MAX_TXS; i++) {
        if (g_cg_txs[i].active && g_cg_txs[i].xid == xid)
            return &g_cg_txs[i];
    }
    return NULL;
}

static CGTxState *alloc_tx(uint32_t xid)
{
    for (int i = 0; i < CG_MAX_TXS; i++) {
        if (!g_cg_txs[i].active) {
            memset(&g_cg_txs[i], 0, sizeof(CGTxState));
            g_cg_txs[i].xid = xid;
            g_cg_txs[i].active = 1;
            return &g_cg_txs[i];
        }
    }
    return NULL;  /* no slots available */
}

/* Check if a TX has a read interest in a specific row */
static int has_read_interest(const CGTxState *tx, uint32_t table_id,
                              const char *pk_key)
{
    for (int i = 0; i < tx->read_count; i++) {
        if (tx->reads[i].table_id == table_id &&
            strcmp(tx->reads[i].pk_key, pk_key) == 0)
            return 1;
    }
    return 0;
}

/* ================================================================
 *  Public API
 * ================================================================ */

void cg_init(void)
{
    memset(g_cg_txs, 0, sizeof(g_cg_txs));
}

void cg_register_tx(uint32_t xid)
{
    if (xid == 0) return;
    pthread_mutex_lock(&g_cg_lock);
    alloc_tx(xid);
    pthread_mutex_unlock(&g_cg_lock);
}

void cg_unregister_tx(uint32_t xid)
{
    if (xid == 0) return;
    pthread_mutex_lock(&g_cg_lock);
    CGTxState *tx = find_tx(xid);
    if (tx) tx->active = 0;
    pthread_mutex_unlock(&g_cg_lock);
}

void cg_record_read(uint32_t reader_xid, uint32_t table_id, const char *pk_key)
{
    if (reader_xid == 0 || !pk_key) return;

    pthread_mutex_lock(&g_cg_lock);
    CGTxState *tx = find_tx(reader_xid);
    if (tx && tx->read_count < CG_MAX_READS) {
        /* Check for duplicate */
        if (!has_read_interest(tx, table_id, pk_key)) {
            tx->reads[tx->read_count].table_id = table_id;
            strncpy(tx->reads[tx->read_count].pk_key, pk_key, 127);
            tx->reads[tx->read_count].pk_key[127] = '\0';
            tx->read_count++;
        }
    }
    pthread_mutex_unlock(&g_cg_lock);
}

void cg_check_write(uint32_t writer_xid, uint32_t table_id, const char *pk_key)
{
    if (writer_xid == 0 || !pk_key) return;

    pthread_mutex_lock(&g_cg_lock);

    /* Check all active SERIALIZABLE TXs for read interest in this row */
    for (int i = 0; i < CG_MAX_TXS; i++) {
        CGTxState *reader = &g_cg_txs[i];
        if (!reader->active || reader->xid == writer_xid) continue;

        if (has_read_interest(reader, table_id, pk_key)) {
            /* RW conflict: reader read this row, writer is changing it.
             *   reader has rw-in  (someone wrote what I read)
             *   writer has rw-out (I wrote what someone read) */
            reader->has_rw_in = 1;
            reader->rw_in_from = writer_xid;

            CGTxState *writer = find_tx(writer_xid);
            if (writer) {
                writer->has_rw_out = 1;
                writer->rw_out_to = reader->xid;
            }
        }
    }

    pthread_mutex_unlock(&g_cg_lock);
}

int cg_check_commit(uint32_t xid)
{
    if (xid == 0) return CG_OK;

    pthread_mutex_lock(&g_cg_lock);
    CGTxState *tx = find_tx(xid);
    int result = CG_OK;
    if (tx && tx->has_rw_in && tx->has_rw_out) {
        /* Dangerous structure: this TX is the "pivot" in an
         * rw-antidependency cycle. Serialization failure. */
        fprintf(stderr, "[Conflict Guard] serialization failure: "
                "TX %u has rw-in from %u and rw-out to %u\n",
                xid, tx->rw_in_from, tx->rw_out_to);
        result = CG_SERIALIZATION_FAILURE;
    }
    pthread_mutex_unlock(&g_cg_lock);
    return result;
}

/* ================================================================
 *  Predicate Locking
 * ================================================================ */

void cg_record_predicate(uint32_t reader_xid, uint32_t table_id,
                          const char *expr_str,
                          const char *col_names, int name_stride,
                          int num_cols)
{
    if (reader_xid == 0 || !expr_str || !expr_str[0]) return;

    pthread_mutex_lock(&g_cg_lock);
    CGTxState *tx = find_tx(reader_xid);
    if (tx && tx->predicate_count < CG_MAX_PREDICATES) {
        PredicateLock *pl = &tx->predicates[tx->predicate_count];
        pl->table_id = table_id;
        strncpy(pl->expr_str, expr_str, sizeof(pl->expr_str) - 1);
        pl->expr_str[sizeof(pl->expr_str) - 1] = '\0';
        pl->num_cols = num_cols < 64 ? num_cols : 64;
        for (int i = 0; i < pl->num_cols; i++) {
            const char *src = col_names + i * name_stride;
            strncpy(pl->col_names[i], src, 127);
            pl->col_names[i][127] = '\0';
        }
        tx->predicate_count++;
    }
    pthread_mutex_unlock(&g_cg_lock);
}

void cg_check_predicate_conflict(uint32_t writer_xid, uint32_t table_id,
                                  const char *col_names, int name_stride,
                                  const char *col_values, int val_stride,
                                  int num_cols)
{
    if (writer_xid == 0) return;

    pthread_mutex_lock(&g_cg_lock);

    for (int i = 0; i < CG_MAX_TXS; i++) {
        CGTxState *reader = &g_cg_txs[i];
        if (!reader->active || reader->xid == writer_xid) continue;

        for (int pi = 0; pi < reader->predicate_count; pi++) {
            PredicateLock *pl = &reader->predicates[pi];
            if (pl->table_id != table_id) continue;

            /* Deserialize the predicate expression */
            ExprNode *expr = expr_deserialize(pl->expr_str);
            if (!expr) continue;

            /* Build col_names and col_values arrays for evaluation */
            char evalResult[512];
            int ok = expr_evaluate(expr,
                                   (const char (*)[128])pl->col_names,
                                   (const char (*)[256])col_values,
                                   num_cols < pl->num_cols ? num_cols : pl->num_cols,
                                   evalResult, sizeof(evalResult));

            int match = 0;
            if (ok) {
                if (strcmp(evalResult, "t") == 0 ||
                    strcasecmp(evalResult, "true") == 0 ||
                    strcmp(evalResult, "1") == 0)
                    match = 1;
                else {
                    double v = strtod(evalResult, NULL);
                    if (v != 0.0) match = 1;
                }
            }

            if (match) {
                /* RW conflict: reader's predicate matches writer's new row */
                reader->has_rw_in = 1;
                reader->rw_in_from = writer_xid;
                CGTxState *writer = find_tx(writer_xid);
                if (writer) {
                    writer->has_rw_out = 1;
                    writer->rw_out_to = reader->xid;
                }
            }
        }
    }

    pthread_mutex_unlock(&g_cg_lock);
}
