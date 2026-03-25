/*
 * query_context.h — Per-query thread-local context for EvoSQL
 *
 * All query-scoped state is organized into sub-structs by SQL operation:
 *   CreateOpts, InsertOpts, SelectOpts, UpdateOpts, DeleteOpts,
 *   DropOpts, IndexOpts, ExprOpts, ConstraintOpts, ErrorState
 *
 * Access pattern: g_create.tblName, g_ins.data, g_expr.whereExpr, etc.
 */
#ifndef QUERY_CONTEXT_H
#define QUERY_CONTEXT_H

#include <setjmp.h>
#include <stdint.h>
#include "expression.h"   /* ExprNode, constants */

/* Forward declaration — full definition in database.h / slotted.h */
#ifndef ROWID_DEFINED
#define ROWID_DEFINED
typedef struct { uint32_t page_no; uint16_t slot_idx; } RowID;
#endif

#ifndef RECORD_BUF_SIZE
#define RECORD_BUF_SIZE 8192
#endif

/* CTAS mode constants */
#define CTAS_NONE       0   /* normal CREATE TABLE */
#define CTAS_INFER      1   /* CREATE TABLE AS SELECT — infer cols from SELECT */
#define CTAS_EXPLICIT   2   /* CREATE TABLE (cols) AS SELECT — explicit cols */

/* ================================================================
 *  Sub-struct definitions
 * ================================================================ */

/* ---- CREATE TABLE ---- */
typedef struct {
    char     tblName[1024];
    char     columnDefs[1024];
    char     columnTypeDefs[1024];
    char     columnNullFlags[1024];
    char     columnUniqueFlags[1024];
    char     columnDefaults[4096];
    char     currentColDefault[256];
    int      currentColNotNull;
    int      currentColPrimaryKey;
    int      currentColUnique;
    int      currentColAutoIncrement;
    int      autoIncColIndex;
    int      autoIncStart;
    int      autoIncStep;
    char     primaryKeyIndices[256];
    int      pkColumnCount;
    char     pkColumnNames[16][128];
    int      primaryKeyIndex;
    int      columnCount;
    int      totalColumnSize;
    int      isTemporary;           /* TEMP_NONE/TEMP_LOCAL/TEMP_GLOBAL */
    int      onCommitDelete;        /* GTT: 1=ON COMMIT DELETE ROWS */
    uint32_t lastCreatedTableId;
    /* CTAS */
    int      ctasMode;              /* 0=normal, 1=infer cols, 2=explicit cols */
    char     ctasTableName[256];
    int      ctasIfNotExists;
    int      ctasTemporary;
    /* Generated columns */
    int      currentColGeneratedMode;
    char     currentColGeneratedExpr[512];
    int      columnGeneratedModes[64];
    char     columnGeneratedExprs[64][512];
    /* Sharding */
    int      shardType;           /* SHARD_NONE/HASH/RANGE */
    char     shardKey[128];
    int      shardCount;          /* HASH: shard count */
    struct { char name[64]; char bound[256]; int node_id; } shardRanges[7];
    int      shardRangeCount;
} CreateOpts;

/* ---- INSERT ---- */
typedef struct {
    char tblName[1024];             /* was tblInsertionName */
    char data[RECORD_BUF_SIZE];     /* was insert */
    char columnNames[1024];
    char columns[64][128];          /* was insertColumns */
    int  columnCount;               /* was insertColumnCount */
    int  rowCount;                  /* was insertCount */
} InsertOpts;

/* ---- SELECT ---- */
typedef struct {
    char tblName[1024];             /* was tblSelectionName */
    char lastTable[1024];           /* was lastSelectTable */
    char columns[64][128];          /* was selectColumns */
    int  columnCount;               /* was selectColumnCount */
    int  distinct;                  /* was selectDistinct */
    /* ORDER BY */
    char orderByColumn[256];
    int  orderByDesc;
    char orderByColumns[8][256];
    int  orderByDescs[8];
    int  orderByCount;
    /* Sort context (qsort callback) */
    int  sortColIndex;
    int  sortDesc;
    /* FOR UPDATE / FOR SHARE locking */
    int  forUpdate;       /* 0=none, 1=FOR UPDATE, 2=FOR SHARE */
    /* JOIN multi-table tracking */
#define MAX_JOIN_TABLES 8
    int   joinTableCount;
    char  joinTables[MAX_JOIN_TABLES][256];
    char  joinAliases[MAX_JOIN_TABLES][128];
    int   joinTypes[MAX_JOIN_TABLES];  /* 0=FROM, 100+=INNER, 300+=LEFT/RIGHT */
    ExprNode *joinOnExprs[MAX_JOIN_TABLES]; /* ON condition for tables[1..n] */
} SelectOpts;

/* ---- UPDATE ---- */
typedef struct {
    char tblName[1024];             /* was tblUpdateTableName */
    int  rowCount;                  /* was updateCount */
} UpdateOpts;

/* ---- DELETE ---- */
typedef struct {
    char tblName[1024];             /* was tblDelName */
    int  rowCount;                  /* was deleteCount */
} DeleteOpts;

/* ---- DROP ---- */
typedef struct {
    char tblName[1024];             /* was tblDropName */
    int  ifExists;                  /* was dropIfExists */
    /* TRUNCATE options */
    int  truncCascade;              /* 1 = CASCADE, 0 = RESTRICT (default) */
    int  truncContinueIdentity;     /* 1 = CONTINUE IDENTITY, 0 = RESTART (default) */
    /* Multi-table TRUNCATE: extra table names */
    char truncExtraTables[7][256];
    int  truncExtraCount;
} DropOpts;

/* ---- INDEX ---- */
typedef struct {
    char name[256];
    char tableName[256];
    char columnName[256];
    int  unique;
    int  ifNotExists;
    char exprDef[1024];
    int  usingHash;
    int  concurrent;          /* CREATE INDEX CONCURRENTLY */
    uint32_t concTableId;     /* saved by Phase1 for Phase2 */
    uint32_t concRootPage;    /* saved by Phase1 for Phase2 */
} IndexOpts;

/* ---- WHERE / Expressions ---- */
typedef struct {
    char      whereSel[1024];
    ExprNode *whereExpr;
    ExprNode *selectExprs[MAX_SELECT_EXPRS];
    int       selectExprCount;
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
    /* Expression pool */
    ExprNode *nodePool;
    int       nodePoolSize;
    int       nodePoolUsed;
} ExprOpts;

/* ---- Constraints ---- */
typedef struct {
    char checkSerialized[MAX_CHECK_CONSTRAINTS][1024];
    char checkNames[MAX_CHECK_CONSTRAINTS][128];
    int  checkCount;
    /* FK */
    char fkLocalCols[8][256];
    char fkRefTable[8][128];
    char fkRefCols[8][256];
    char fkNames[8][128];
    int  fkOnDelete[8];
    int  fkOnUpdate[8];
    int  fkMatchType[8];
    int  fkDeferrable[8];
    char fkRefSchema[8][128];
    int  fkCount;
    char fkCurLocalCols[256];
    char fkCurRefCols[256];
    /* UNIQUE */
    char uniqueLocalCols[8][256];
    char uniqueNames[8][128];
    int  uniqueCount;
    char uniqueCurCols[256];
    /* Naming */
    char pendingConstraintName[128];
} ConstraintOpts;

/* ---- Error handling ---- */
typedef struct {
    jmp_buf jmpbuf;
    int     error;
    char    errorMsg[512];
    char    sqlstate[6];
} ErrorState;

/* ================================================================
 *  QueryContext — all per-query mutable state
 * ================================================================ */
typedef struct QueryContext {
    char           currentDatabase[256];
    char           currentSchema[256];
    CreateOpts     create;
    InsertOpts     insert;
    SelectOpts     select;
    UpdateOpts     update;
    DeleteOpts     del;
    DropOpts       drop;
    IndexOpts      index;
    ExprOpts       expr;
    ConstraintOpts constraint;
    ErrorState     err;
    char           temp[1024];
    void         (*tx_undo_callback)(int op_type, const char *table,
                                     const char *key, const char *data,
                                     int data_len, RowID old_rid);
    /* MVCC: current transaction ID for DML operations (0 = no MVCC) */
    uint32_t       mvcc_xid;
    /* Distributed: target node for CREATE TABLE ON NODE N */
    uint32_t       create_on_node_id;
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
 *  Struct accessor macros
 *
 *  Usage: g_create.tblName, g_ins.data, g_expr.whereExpr, etc.
 * ================================================================ */
#define g_create      (g_qctx->create)
#define g_ins         (g_qctx->insert)
#define g_sel         (g_qctx->select)
#define g_upd         (g_qctx->update)
#define g_del         (g_qctx->del)
#define g_drop        (g_qctx->drop)
#define g_idx         (g_qctx->index)
#define g_expr        (g_qctx->expr)
#define g_constr      (g_qctx->constraint)
#define g_err         (g_qctx->err)

/* Shared fields */
#define g_currentDatabase  (g_qctx->currentDatabase)
#define g_currentSchema    (g_qctx->currentSchema)
#define g_temp             (g_qctx->temp)
#define g_tx_undo_callback (g_qctx->tx_undo_callback)

#endif /* QUERY_CONTEXT_H */
