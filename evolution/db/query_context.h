/*
 * query_context.h — Per-query thread-local context for EvoSQL
 *
 * Moves all query-scoped global variables into a thread-local struct.
 * Compatibility macros map old g_xxx names to g_qctx->xxx members,
 * so existing code (parser actions, Process functions, etc.) works
 * without signature changes.
 *
 * This enables concurrent query execution:
 *   - Parser mutex serializes yyparse() (Flex/Bison not reentrant)
 *   - SELECT execution runs without mutex (thread-local state)
 *   - DML runs inside yyparse (serialized by parser mutex)
 */
#ifndef QUERY_CONTEXT_H
#define QUERY_CONTEXT_H

#include <setjmp.h>
#include <stdint.h>
#include "expression.h"   /* ExprNode, constants */

/* Forward: tx_undo_fn typedef must exist before this header.
 * It's defined in database.h which includes us at the end. */

#ifndef RECORD_BUF_SIZE
#define RECORD_BUF_SIZE 8192
#endif

/* ================================================================
 *  QueryContext — all per-query mutable state
 * ================================================================ */
typedef struct QueryContext {
    /* ---- Database/Schema context (per-session, was global) ---- */
    char currentDatabase[256];
    char currentSchema[256];

    /* ---- Table name paths ---- */
    char tblName[1024];
    char tblInsertionName[1024];
    char tblSelectionName[1024];
    char tblDelName[1024];
    char tblUpdateTableName[1024];
    char tblDropName[1024];
    int  dropIfExists;          /* 1 if DROP TABLE IF EXISTS */
    char lastSelectTable[1024];

    /* ---- INSERT/UPDATE data ---- */
    char insert[RECORD_BUF_SIZE];
    char columnNames[1024];
    char insertColumns[64][128];
    int  insertColumnCount;

    /* ---- WHERE ---- */
    char whereSel[1024];

    /* ---- CREATE TABLE ---- */
    char columnDefs[1024];
    char columnTypeDefs[1024];
    char columnNullFlags[1024];
    char columnUniqueFlags[1024];
    char columnDefaults[4096];
    char currentColDefault[256];
    int  currentColNotNull;
    int  currentColPrimaryKey;
    int  currentColUnique;
    int  currentColAutoIncrement;
    int  autoIncColIndex;
    int  autoIncStart;
    int  autoIncStep;
    char primaryKeyIndices[256];
    int  pkColumnCount;
    char pkColumnNames[16][128];
    int  primaryKeyIndex;
    int  columnCount;
    int  totalColumnSize;
    int  isTemporary;          /* 1 if CREATE TEMPORARY TABLE */
    uint32_t lastCreatedTableId; /* table_id of last created table (0 = none) */

    /* ---- SELECT ---- */
    char selectColumns[64][128];
    int  selectColumnCount;
    int  selectDistinct;

    /* ---- ORDER BY ---- */
    char orderByColumn[256];
    int  orderByDesc;
    char orderByColumns[8][256];
    int  orderByDescs[8];
    int  orderByCount;

    /* ---- DML counters ---- */
    int deleteCount;
    int updateCount;
    int insertCount;

    /* ---- Scratch ---- */
    char temp[1024];

    /* ---- Index ---- */
    char indexName[256];
    char indexTableName[256];
    char indexColumnName[256];
    int  indexUnique;
    int  indexIfNotExists;
    char indexExprDef[1024];        /* expression index: serialized RPN */

    /* ---- Error handling ---- */
    jmp_buf gui_jmpbuf;
    int     gui_error;
    char    gui_error_msg[512];
    char    gui_error_sqlstate[6];

    /* ---- Transaction callback ---- */
    void (*tx_undo_callback)(int op_type, const char *table,
                             const char *key, const char *data);

    /* ---- Expression pool (heap-allocated for size) ---- */
    ExprNode *exprNodePool;
    int       exprNodePoolSize;
    int       exprNodePoolUsed;

    /* ---- Parsed expressions ---- */
    ExprNode *selectExprs[MAX_SELECT_EXPRS];
    int       selectExprCount;
    ExprNode *whereExpr;
    ExprNode *limitExpr;
    ExprNode *offsetExpr;
    ExprNode *havingExpr;
    ExprNode *groupByExprs[MAX_GROUP_BY];
    int       groupByCount;
    ExprNode *inListExprs[MAX_IN_LIST];
    int       inListCount;
    ExprNode *caseWhenExprs[MAX_CASE_WHENS];
    ExprNode *caseThenExprs[MAX_CASE_WHENS];
    int       caseWhenCount;

    /* ---- CHECK constraints ---- */
    char checkSerialized[MAX_CHECK_CONSTRAINTS][1024];
    char checkNames[MAX_CHECK_CONSTRAINTS][128]; /* constraint names */
    int  checkCount;

    /* ---- FOREIGN KEY constraints (accumulated during CREATE TABLE) ---- */
    char fkLocalCols[8][256];      /* local column list CSV per FK */
    char fkRefTable[8][128];       /* referenced table name */
    char fkRefCols[8][256];        /* referenced column list CSV */
    char fkNames[8][128];          /* constraint names */
    int  fkOnDelete[8];            /* 0=RESTRICT, 1=CASCADE, 2=SET NULL, 3=RESTRICT, 4=SET DEFAULT, 5=NO ACTION */
    int  fkOnUpdate[8];            /* same as on_delete */
    int  fkMatchType[8];           /* 0=SIMPLE (default), 1=FULL, 2=PARTIAL */
    int  fkDeferrable[8];          /* 0=NOT DEFERRABLE, 1=DEFERRABLE INITIALLY IMMEDIATE, 2=DEFERRABLE INITIALLY DEFERRED */
    char fkRefSchema[8][128];      /* referenced schema (empty = current schema) */
    int  fkCount;
    /* Temp accumulators for current FK being parsed */
    char fkCurLocalCols[256];
    char fkCurRefCols[256];

    /* ---- Table-level UNIQUE constraints (accumulated during CREATE TABLE) ---- */
    char uniqueLocalCols[8][256];   /* column list CSV per UNIQUE constraint */
    char uniqueNames[8][128];       /* constraint names */
    int  uniqueCount;
    /* Temp accumulator for current UNIQUE being parsed */
    char uniqueCurCols[256];

    /* ---- Pending constraint name (for CONSTRAINT name ... syntax) ---- */
    char pendingConstraintName[128];

    /* ---- Sort context (for qsort callback) ---- */
    int sortColIndex;
    int sortDesc;
} QueryContext;

/* ================================================================
 *  Thread-local context pointer
 * ================================================================ */
#if defined(_WIN32)
extern __declspec(thread) QueryContext *g_qctx;
#else
extern __thread QueryContext *g_qctx;
#endif

/* Lifecycle */
QueryContext *qctx_alloc(void);
void          qctx_free(QueryContext *ctx);

/* ================================================================
 *  Compatibility macros — map old g_xxx names to g_qctx->xxx
 *
 *  This allows ALL existing code (parser actions, Process functions,
 *  query_executor, etc.) to work without changing function signatures.
 * ================================================================ */

/* Table paths */
#define g_tblName               (g_qctx->tblName)
#define g_tblInsertionName      (g_qctx->tblInsertionName)
#define g_tblSelectionName      (g_qctx->tblSelectionName)
#define g_tblDelName            (g_qctx->tblDelName)
#define g_tblUpdateTableName    (g_qctx->tblUpdateTableName)
#define g_tblDropName           (g_qctx->tblDropName)
#define g_dropIfExists          (g_qctx->dropIfExists)
#define g_lastSelectTable       (g_qctx->lastSelectTable)

/* INSERT/UPDATE data */
#define g_insert                (g_qctx->insert)
#define g_columnNames           (g_qctx->columnNames)
#define g_insertColumns         (g_qctx->insertColumns)
#define g_insertColumnCount     (g_qctx->insertColumnCount)

/* WHERE */
#define g_whereSel              (g_qctx->whereSel)

/* CREATE TABLE */
#define g_columnDefs            (g_qctx->columnDefs)
#define g_columnTypeDefs        (g_qctx->columnTypeDefs)
#define g_columnNullFlags       (g_qctx->columnNullFlags)
#define g_columnUniqueFlags     (g_qctx->columnUniqueFlags)
#define g_columnDefaults        (g_qctx->columnDefaults)
#define g_currentColDefault     (g_qctx->currentColDefault)
#define g_currentColNotNull     (g_qctx->currentColNotNull)
#define g_currentColPrimaryKey  (g_qctx->currentColPrimaryKey)
#define g_currentColUnique      (g_qctx->currentColUnique)
#define g_currentColAutoIncrement (g_qctx->currentColAutoIncrement)
#define g_autoIncColIndex       (g_qctx->autoIncColIndex)
#define g_autoIncStart          (g_qctx->autoIncStart)
#define g_autoIncStep           (g_qctx->autoIncStep)
#define g_primaryKeyIndices     (g_qctx->primaryKeyIndices)
#define g_pkColumnCount         (g_qctx->pkColumnCount)
#define g_pkColumnNames         (g_qctx->pkColumnNames)
#define g_primaryKeyIndex       (g_qctx->primaryKeyIndex)
#define g_columnCount           (g_qctx->columnCount)
#define g_totalColumnSize       (g_qctx->totalColumnSize)
#define g_isTemporary           (g_qctx->isTemporary)
#define g_lastCreatedTableId    (g_qctx->lastCreatedTableId)

/* SELECT */
#define g_selectColumns         (g_qctx->selectColumns)
#define g_selectColumnCount     (g_qctx->selectColumnCount)
#define g_selectDistinct        (g_qctx->selectDistinct)

/* ORDER BY */
#define g_orderByColumn         (g_qctx->orderByColumn)
#define g_orderByDesc           (g_qctx->orderByDesc)
#define g_orderByColumns        (g_qctx->orderByColumns)
#define g_orderByDescs          (g_qctx->orderByDescs)
#define g_orderByCount          (g_qctx->orderByCount)

/* DML counters */
#define g_deleteCount           (g_qctx->deleteCount)
#define g_updateCount           (g_qctx->updateCount)
#define g_insertCount           (g_qctx->insertCount)

/* Scratch */
#define g_temp                  (g_qctx->temp)

/* Index */
#define g_indexName             (g_qctx->indexName)
#define g_indexTableName        (g_qctx->indexTableName)
#define g_indexColumnName       (g_qctx->indexColumnName)
#define g_indexUnique           (g_qctx->indexUnique)
#define g_indexIfNotExists      (g_qctx->indexIfNotExists)
#define g_indexExprDef          (g_qctx->indexExprDef)

/* Error handling */
#define g_gui_jmpbuf            (g_qctx->gui_jmpbuf)
#define g_gui_error             (g_qctx->gui_error)
#define g_gui_error_msg         (g_qctx->gui_error_msg)
#define g_gui_error_sqlstate    (g_qctx->gui_error_sqlstate)

/* Transaction callback */
#define g_tx_undo_callback      (g_qctx->tx_undo_callback)

/* Expression pool */
#define g_exprNodePool          (g_qctx->exprNodePool)
#define g_exprNodePoolUsed      (g_qctx->exprNodePoolUsed)

/* Parsed expressions */
#define g_selectExprs           (g_qctx->selectExprs)
#define g_selectExprCount       (g_qctx->selectExprCount)
#define g_whereExpr             (g_qctx->whereExpr)
#define g_limitExpr             (g_qctx->limitExpr)
#define g_offsetExpr            (g_qctx->offsetExpr)
#define g_havingExpr            (g_qctx->havingExpr)
#define g_groupByExprs          (g_qctx->groupByExprs)
#define g_groupByCount          (g_qctx->groupByCount)
#define g_inListExprs           (g_qctx->inListExprs)
#define g_inListCount           (g_qctx->inListCount)
#define g_caseWhenExprs         (g_qctx->caseWhenExprs)
#define g_caseThenExprs         (g_qctx->caseThenExprs)
#define g_caseWhenCount         (g_qctx->caseWhenCount)

/* CHECK constraints */
#define g_checkSerialized       (g_qctx->checkSerialized)
#define g_checkNames            (g_qctx->checkNames)
#define g_checkCount            (g_qctx->checkCount)

/* FOREIGN KEY constraints */
#define g_fkLocalCols           (g_qctx->fkLocalCols)
#define g_fkRefTable            (g_qctx->fkRefTable)
#define g_fkRefCols             (g_qctx->fkRefCols)
#define g_fkNames               (g_qctx->fkNames)
#define g_fkOnDelete            (g_qctx->fkOnDelete)
#define g_fkOnUpdate            (g_qctx->fkOnUpdate)
#define g_fkMatchType           (g_qctx->fkMatchType)
#define g_fkDeferrable          (g_qctx->fkDeferrable)
#define g_fkRefSchema           (g_qctx->fkRefSchema)
#define g_fkCount               (g_qctx->fkCount)
#define g_fkCurLocalCols        (g_qctx->fkCurLocalCols)
#define g_fkCurRefCols          (g_qctx->fkCurRefCols)

/* Table-level UNIQUE constraints */
#define g_uniqueLocalCols       (g_qctx->uniqueLocalCols)
#define g_uniqueNames           (g_qctx->uniqueNames)
#define g_uniqueCount           (g_qctx->uniqueCount)
#define g_uniqueCurCols         (g_qctx->uniqueCurCols)

/* Constraint naming */
#define g_pendingConstraintName (g_qctx->pendingConstraintName)

/* Database/Schema context (moved from true globals for thread safety) */
#define g_currentDatabase       (g_qctx->currentDatabase)
#define g_currentSchema         (g_qctx->currentSchema)

/* Sort context (for qsort callback in Select.c) */
#define g_sortColIndex          (g_qctx->sortColIndex)
#define g_sortDesc              (g_qctx->sortDesc)

#endif /* QUERY_CONTEXT_H */
