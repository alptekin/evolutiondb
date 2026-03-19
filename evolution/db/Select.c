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
    char fields[64][256];
    int is_null[64];
    int nf = tup_extract_fields(data, dataLen, cols, ncols, fields, is_null, 64);
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
    char fields[64][256];
    int is_null[64];
    int nf = tup_extract_fields(data, dataLen, cols, ncols, fields, is_null, 64);
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
    db_table_path(pname, g_sel.tblName, sizeof(g_sel.tblName));
    strcat(g_sel.tblName, ".dat");

    return 0;
}

int GetSelection(char *pname)
{
    strcat(g_expr.whereSel, pname);
    return 0;
}

int SelectProcess(void)
{
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

    str2 = strtok(g_ins.data, ";");

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

int TruncateSelect(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_ins.data[i] = '\0';
        g_sel.tblName[i] = '\0';
    }

    return 0;
}
