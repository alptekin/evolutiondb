#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"

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

static void PrintRecord(const char *data)
{
    char temp[1024];
    char *val;

    strcpy(temp, data);
    val = strtok(temp, ";");
    while (val) {
        printf("%-20s", val);
        val = strtok(NULL, ";");
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

/* Extract the value at column index from a semicolon-separated record */
static void GetFieldValue(const char *data, int colIndex, char *buf, int bufSize)
{
    char temp[1024];
    char *val;
    int i = 0;

    strcpy(temp, data);
    val = strtok(temp, ";");
    while (val) {
        if (i == colIndex) {
            strncpy(buf, val, bufSize - 1);
            buf[bufSize - 1] = '\0';
            return;
        }
        i++;
        val = strtok(NULL, ";");
    }
    buf[0] = '\0';
}

typedef struct {
    char data[1024];
} RecordEntry;

static int CompareRecords(const void *a, const void *b)
{
    const RecordEntry *ra = (const RecordEntry *)a;
    const RecordEntry *rb = (const RecordEntry *)b;
    char valA[256], valB[256];
    int result;
    double numA, numB;
    char *endA, *endB;

    GetFieldValue(ra->data, g_sortColIndex, valA, sizeof(valA));
    GetFieldValue(rb->data, g_sortColIndex, valB, sizeof(valB));

    numA = strtod(valA, &endA);
    numB = strtod(valB, &endB);
    if (*endA == '\0' && *endB == '\0' && valA[0] != '\0' && valB[0] != '\0') {
        if (numA < numB) result = -1;
        else if (numA > numB) result = 1;
        else result = 0;
    } else {
        result = strcmp(valA, valB);
    }

    return g_sortDesc ? -result : result;
}

void SelectAll(void)
{
    char tblName[1024];
    char pkBuf[256];
    char recBuf[RECORD_BUF_SIZE];

    /* Extract table name without .dat extension */
    strcpy(tblName, g_tblSelectionName);
    char *dot = strstr(tblName, ".dat");
    if (dot)
        *dot = '\0';

    /* In GUI mode, save table name for GridView and skip text output */
    if (g_gui_mode) {
        char baseName[128];
        tapi_basename(tblName, baseName, sizeof(baseName));
        strcpy(g_lastSelectTable, baseName);
        TruncateSelect();
        return;
    }

    /* Resolve table */
    TableDesc td;
    if (tapi_resolve(tblName, &td, NULL, NULL) < 0) {
        printf("Error: table not found\n");
        TruncateSelect();
        return;
    }

    PrintColumnHeaders(tblName);

    /* Check if ORDER BY is requested */
    if (g_orderByColumn[0] != '\0') {
        int colIdx = FindColumnIndex(tblName, g_orderByColumn);
        if (colIdx < 0) {
            printf("Error: column '%s' not found\n", g_orderByColumn);
            /* Fall through to unordered scan */
            TableScanCursor cursor;
            if (tapi_scan_begin(&td, &cursor) == 0) {
                while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0)
                    PrintRecord(recBuf);
            }
        } else {
            RecordEntry records[500];
            int count = 0;
            int i;

            TableScanCursor cursor;
            if (tapi_scan_begin(&td, &cursor) == 0) {
                while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0
                       && count < 500) {
                    strncpy(records[count].data, recBuf,
                            sizeof(records[count].data) - 1);
                    records[count].data[sizeof(records[count].data) - 1] = '\0';
                    count++;
                }
            }

            g_sortColIndex = colIdx;
            g_sortDesc = g_orderByDesc;
            qsort(records, count, sizeof(RecordEntry), CompareRecords);

            for (i = 0; i < count; i++)
                PrintRecord(records[i].data);
        }
    } else {
        TableScanCursor cursor;
        if (tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next(&cursor, pkBuf, recBuf, sizeof(recBuf)) == 0)
                PrintRecord(recBuf);
        }
    }

    TruncateSelect();
    g_orderByColumn[0] = '\0';
    g_orderByDesc = 0;
}

int GetSelTableName(char *pname)
{
    db_table_path(pname, g_tblSelectionName, sizeof(g_tblSelectionName));
    strcat(g_tblSelectionName, ".dat");

    return 0;
}

int GetSelection(char *pname)
{
    strcat(g_whereSel, pname);
    return 0;
}

int SelectProcess(void)
{
    char *str2 = NULL;
    char tblName[1024];

    /* Extract table name without .dat extension */
    strcpy(tblName, g_tblSelectionName);
    char *dot = strstr(tblName, ".dat");
    if (dot)
        *dot = '\0';

    /* In GUI mode, save table name for GridView */
    if (g_gui_mode) {
        char baseName[128];
        tapi_basename(tblName, baseName, sizeof(baseName));
        strcpy(g_lastSelectTable, baseName);
        TruncateSelect();
        return 0;
    }

    str2 = strtok(g_insert, ";");

    /* Resolve table */
    TableDesc td;
    if (tapi_resolve(tblName, &td, NULL, NULL) < 0) {
        printf("Error: table not found\n");
        TruncateSelect();
        return -1;
    }

    /* Fetch record by PK */
    BTree2 pk_tree = tapi_pk_tree(&td);
    RowID rid;
    if (str2 && bt2_search(&pk_tree, str2, &rid) == 0) {
        char recBuf[RECORD_BUF_SIZE];
        if (tapi_heap_read(rid, recBuf, sizeof(recBuf)) > 0) {
            PrintColumnHeaders(tblName);
            PrintRecord(recBuf);
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
    strcpy(g_orderByColumn, name);
    return 0;
}

void SetOrderByDirection(int desc)
{
    g_orderByDesc = desc;
}

void AddOrderByColumn(const char *name, int desc)
{
    if (g_orderByCount >= 8) return;
    strncpy(g_orderByColumns[g_orderByCount], name, 255);
    g_orderByColumns[g_orderByCount][255] = '\0';
    g_orderByDescs[g_orderByCount] = desc;
    g_orderByCount++;
    if (g_orderByCount == 1) {
        strcpy(g_orderByColumn, name);
        g_orderByDesc = desc;
    }
}

int TruncateSelect(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_insert[i] = '\0';
        g_tblSelectionName[i] = '\0';
    }

    return 0;
}
