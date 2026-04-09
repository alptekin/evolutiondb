#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"
#include "tuple_format.h"

static void PrintColumnHeaders(const char *tableName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tableName, &td, cols, &ncols) < 0)
        return;

    /* Print column names */
    for (int i = 0; i < ncols; i++)
        printf("%-20s", cols[i].col_name);
    printf("\n");

    /* Print separator line */
    for (int i = 0; i < ncols; i++)
        printf("--------------------");
    printf("\n");
}

static void PrintRecord(const char *data, int dataLen,
                        const ColumnDesc *cols, int ncols)
{
    char fields[CAT_MAX_COLUMNS][256];
    int is_null[CAT_MAX_COLUMNS];
    int nf = tup_extract_fields(data, dataLen, cols, ncols, fields, is_null, CAT_MAX_COLUMNS);
    for (int i = 0; i < nf; i++) {
        if (is_null[i])
            printf("%-20s", "NULL");
        else
            printf("%-20s", fields[i]);
    }
    printf("\n");
}

/* Find column index by name from catalog. Returns -1 if not found. */
static int FindColumnIndex(const char *tableName, const char *colName)
{
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;

    if (tapi_resolve(tableName, &td, cols, &ncols) < 0)
        return -1;

    for (int i = 0; i < ncols; i++) {
        if (strcmp(cols[i].col_name, colName) == 0)
            return i;
    }
    return -1;
}

/* Extract the value at column index from a binary tuple record */
static void GetFieldValue(const char *data, int dataLen,
                          const ColumnDesc *cols, int ncols,
                          int colIndex, char *buf, int bufSize)
{
    char fields[CAT_MAX_COLUMNS][256];
    int is_null[CAT_MAX_COLUMNS];
    int nf = tup_extract_fields(data, dataLen, cols, ncols, fields, is_null, CAT_MAX_COLUMNS);
    if (colIndex < nf && !is_null[colIndex]) {
        strncpy(buf, fields[colIndex], bufSize - 1);
        buf[bufSize - 1] = '\0';
    } else {
        buf[0] = '\0';
    }
}

typedef struct {
    char data[RECORD_BUF_SIZE];
    int  dataLen;
} RecordEntry;

static __thread const ColumnDesc *s_sortCols;
static __thread int s_sortNCols;

static int CompareRecords(const void *a, const void *b)
{
    const RecordEntry *ra = (const RecordEntry *)a;
    const RecordEntry *rb = (const RecordEntry *)b;
    char valA[256], valB[256];
    int result;
    double numA, numB;
    char *endA, *endB;

    GetFieldValue(ra->data, ra->dataLen, s_sortCols, s_sortNCols,
                  g_sel.sortColIndex, valA, sizeof(valA));
    GetFieldValue(rb->data, rb->dataLen, s_sortCols, s_sortNCols,
                  g_sel.sortColIndex, valB, sizeof(valB));

    numA = strtod(valA, &endA);
    numB = strtod(valB, &endB);
    if (*endA == '\0' && *endB == '\0' && valA[0] != '\0' && valB[0] != '\0') {
        if (numA < numB) result = -1;
        else if (numA > numB) result = 1;
        else result = 0;
    } else {
        result = strcmp(valA, valB);
    }

    return g_sel.sortDesc ? -result : result;
}

void SelectAll(void)
{
    char tblName[1024];
    char pkBuf[256];
    char recBuf[RECORD_BUF_SIZE];

    /* Extract table name without .dat extension */
    strcpy(tblName, g_sel.tblName);
    char *dot = strstr(tblName, ".dat");
    if (dot)
        *dot = '\0';

    /* In GUI mode, save table name for GridView and skip text output */
    if (g_gui_mode) {
        char baseName[128];
        tapi_basename(tblName, baseName, sizeof(baseName));
        strcpy(g_sel.lastTable, baseName);
        TruncateSelect();
        return;
    }

    /* Resolve table with column metadata */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tblName, &td, cols, &ncols) < 0) {
        printf("Error: table not found\n");
        TruncateSelect();
        return;
    }

    PrintColumnHeaders(tblName);

    /* Check if ORDER BY is requested */
    if (g_sel.orderByColumn[0] != '\0') {
        int colIdx = FindColumnIndex(tblName, g_sel.orderByColumn);
        if (colIdx < 0) {
            printf("Error: column '%s' not found\n", g_sel.orderByColumn);
            /* Fall through to unordered scan */
            TableScanCursor cursor;
            if (tapi_scan_begin(&td, &cursor) == 0) {
                while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0) {
                    int recLen = tup_record_len(recBuf, sizeof(recBuf));
                    PrintRecord(recBuf, recLen, cols, ncols);
                }
            }
        } else {
            RecordEntry records[500];
            int count = 0;
            int i;

            TableScanCursor cursor;
            if (tapi_scan_begin(&td, &cursor) == 0) {
                while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0
                       && count < 500) {
                    int recLen = tup_record_len(recBuf, sizeof(recBuf));
                    memcpy(records[count].data, recBuf, recLen);
                    records[count].dataLen = recLen;
                    count++;
                }
            }

            g_sel.sortColIndex = colIdx;
            g_sel.sortDesc = g_sel.orderByDesc;
            s_sortCols = cols;
            s_sortNCols = ncols;
            qsort(records, count, sizeof(RecordEntry), CompareRecords);

            for (i = 0; i < count; i++)
                PrintRecord(records[i].data, records[i].dataLen, cols, ncols);
        }
    } else {
        TableScanCursor cursor;
        if (tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0) {
                int recLen = tup_record_len(recBuf, sizeof(recBuf));
                PrintRecord(recBuf, recLen, cols, ncols);
            }
        }
    }

    TruncateSelect();
    g_sel.orderByColumn[0] = '\0';
    g_sel.orderByDesc = 0;
}

int GetSelTableName(char *pname)
{
    /* Skip if inside subquery parse — don't clobber outer query state */
    extern __thread int g_in_subquery;
    if (g_in_subquery) return 0;

    db_table_path(pname, g_sel.tblName, sizeof(g_sel.tblName));
    strcat(g_sel.tblName, ".dat");

    return 0;
}

int GetSelection(char *pname)
{
    /* Guard against buffer overflow */
    size_t cur = strlen(g_expr.whereSel);
    size_t add = strlen(pname);
    if (cur + add < sizeof(g_expr.whereSel) - 1)
        strcat(g_expr.whereSel, pname);
    return 0;
}

/* ================================================================
 *  JOIN parser helpers
 * ================================================================ */

void AddJoinTable(const char *name, const char *alias)
{
    extern __thread int g_in_subquery;
    if (g_in_subquery) return;
    int i = g_sel.joinTableCount;
    if (i >= MAX_JOIN_TABLES) return;
    strncpy(g_sel.joinTables[i], name, 255);
    g_sel.joinTables[i][255] = '\0';
    if (alias && alias[0]) {
        strncpy(g_sel.joinAliases[i], alias, 127);
        g_sel.joinAliases[i][127] = '\0';
    } else {
        strncpy(g_sel.joinAliases[i], name, 127);
        g_sel.joinAliases[i][127] = '\0';
    }
    g_sel.joinTypes[i] = (i == 0) ? 0 : 100; /* first table = FROM, rest default INNER */
    g_sel.joinOnExprs[i] = NULL;
    g_sel.joinTableCount++;
}

void SetLastJoinType(int type)
{
    int i = g_sel.joinTableCount - 1;
    if (i < 0) return;
    g_sel.joinTypes[i] = type;
}

void SetJoinOnExpr(struct ExprNode *expr)
{
    int i = g_sel.joinTableCount - 1;
    if (i < 0) return;
    g_sel.joinOnExprs[i] = expr;
}

int SelectProcess(void)
{
    /* Skip if inside subquery parse */
    extern __thread int g_in_subquery;
    if (g_in_subquery) return 0;

    char *str2 = NULL;
    char tblName[1024];

    /* Extract table name without .dat extension */
    strcpy(tblName, g_sel.tblName);
    char *dot = strstr(tblName, ".dat");
    if (dot)
        *dot = '\0';

    /* In GUI mode, save table name for GridView */
    if (g_gui_mode) {
        char baseName[128];
        tapi_basename(tblName, baseName, sizeof(baseName));
        strcpy(g_sel.lastTable, baseName);
        TruncateSelect();
        return 0;
    }

    str2 = strtok(g_ins.data, FIELD_SEP);

    /* Resolve table with column metadata */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tblName, &td, cols, &ncols) < 0) {
        printf("Error: table not found\n");
        TruncateSelect();
        return -1;
    }

    /* Fetch record by PK */
    BTree2 pk_tree = tapi_pk_tree(&td);
    RowID rid;
    if (str2 && bt2_search(&pk_tree, str2, &rid) == 0) {
        char recBuf[RECORD_BUF_SIZE];
        int recLen = tapi_heap_read(rid, recBuf, sizeof(recBuf));
        if (recLen > 0) {
            PrintColumnHeaders(tblName);
            PrintRecord(recBuf, recLen, cols, ncols);
        } else {
            printf("Record not found: %s\n", str2);
        }
    } else {
        printf("Record not found: %s\n", str2 ? str2 : "(null)");
    }

    TruncateSelect();
    return 0;
}

int GetOrderByColumn(char *name)
{
    strcpy(g_sel.orderByColumn, name);
    return 0;
}

void SetOrderByDirection(int desc)
{
    g_sel.orderByDesc = desc;
}

void AddOrderByColumn(const char *name, int desc)
{
    if (g_sel.orderByCount >= 8) return;
    strncpy(g_sel.orderByColumns[g_sel.orderByCount], name, 255);
    g_sel.orderByColumns[g_sel.orderByCount][255] = '\0';
    g_sel.orderByDescs[g_sel.orderByCount] = desc;
    g_sel.orderByCount++;
    if (g_sel.orderByCount == 1) {
        strcpy(g_sel.orderByColumn, name);
        g_sel.orderByDesc = desc;
    }
}

/* ================================================================
 *  Window function parser helpers
 * ================================================================ */

void AddWindowSpec(int funcType, ExprNode *arg)
{
    extern __thread int g_in_subquery;
    if (g_in_subquery) return;
    if (g_expr.windowSpecCount >= MAX_WINDOW_FUNCS) return;
    WindowSpec *ws = &g_expr.windowSpecs[g_expr.windowSpecCount];
    memset(ws, 0, sizeof(WindowSpec));
    ws->expr_idx = g_expr.selectExprCount;
    ws->func_type = funcType;
    ws->arg_expr = arg;
    g_expr.windowSpecCount++;
}

void AddWindowPartitionCol(const char *col)
{
    if (g_expr.windowSpecCount <= 0) return;
    WindowSpec *ws = &g_expr.windowSpecs[g_expr.windowSpecCount - 1];
    int i = ws->partition_col_count;
    if (i >= 8) return;
    strncpy(ws->partition_cols[i], col, 127);
    ws->partition_cols[i][127] = '\0';
    ws->partition_col_count++;
}

void AddWindowOrderCol(const char *col, int desc)
{
    if (g_expr.windowSpecCount <= 0) return;
    WindowSpec *ws = &g_expr.windowSpecs[g_expr.windowSpecCount - 1];
    int i = ws->order_col_count;
    if (i >= 8) return;
    strncpy(ws->order_cols[i], col, 127);
    ws->order_cols[i][127] = '\0';
    ws->order_descs[i] = desc;
    ws->order_col_count++;
}

void SetWindowOffset(int offset)
{
    if (g_expr.windowSpecCount <= 0) return;
    g_expr.windowSpecs[g_expr.windowSpecCount - 1].offset = offset;
}

void SetWindowDefault(const char *val)
{
    if (g_expr.windowSpecCount <= 0) return;
    WindowSpec *ws = &g_expr.windowSpecs[g_expr.windowSpecCount - 1];
    strncpy(ws->default_val, val, 255);
    ws->default_val[255] = '\0';
}

int TruncateSelect(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_ins.data[i] = '\0';
        g_sel.tblName[i] = '\0';
    }

    /* NOTE: Do NOT reset JOIN state here — it's needed post-parse
     * for join execution in query_executor.c. JOIN state is reset
     * in execute_via_parser after use. */

    return 0;
}
