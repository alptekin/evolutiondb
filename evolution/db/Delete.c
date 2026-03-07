#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"
#include "expression.h"

/* Read column names from .meta file line 1 into arrays.
 * Returns the number of columns. */
static int ReadColumnNames(const char *tableName,
                           char colNames[][128], int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[2048];
    int count = 0;
    char *tok;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tableName);
    FILE *fp = fopen(metaFile, "r");
    if (!fp) return 0;

    if (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n")] = '\0';
        tok = strtok(line, ";");
        while (tok && count < maxCols) {
            strncpy(colNames[count], tok, 127);
            colNames[count][127] = '\0';
            count++;
            tok = strtok(NULL, ";");
        }
    }
    fclose(fp);
    return count;
}

/* Extract field at colIndex from semicolon-separated record */
static void GetFieldValue(const char *data, int colIndex,
                          char *buf, int bufSize)
{
    char temp[2048];
    char *tok;
    int i = 0;

    strncpy(temp, data, sizeof(temp) - 1);
    temp[sizeof(temp) - 1] = '\0';
    tok = strtok(temp, ";");
    while (tok) {
        if (i == colIndex) {
            strncpy(buf, tok, bufSize - 1);
            buf[bufSize - 1] = '\0';
            return;
        }
        i++;
        tok = strtok(NULL, ";");
    }
    buf[0] = '\0';
}

int DeleteProcess(void)
{
    DBHANDLE db;
    char *str = NULL;

    if ((db = db_open(g_tblDelName, O_RDWR, FILE_MODE)) == NULL)
        err_sys("db_open error");

    if (g_whereExpr != NULL) {
        /* ---------- Expression-based WHERE delete ---------- */
        char colNames[64][128];
        int numCols;
        int pkIndex;

        numCols = ReadColumnNames(g_tblDelName, colNames, 64);
        pkIndex = ReadPrimaryKey(g_tblDelName);
        if (pkIndex < 0) pkIndex = 0; /* fallback: first column is key */

        /* Phase 1: iterate all records, evaluate WHERE, collect matching keys */
        int capacity = 64;
        int matchCount = 0;
        char **matchKeys = (char **)malloc(capacity * sizeof(char *));
        if (!matchKeys) {
            db_close(db);
            g_deleteCount = 0;
            TruncateDelete();
            return -1;
        }

        char keyBuf[1024];
        db_rewind(db);
        while ((str = db_nextrec(db, keyBuf)) != NULL) {
            /* Build column values array from record */
            char colValues[64][256];
            int c;
            for (c = 0; c < numCols && c < 64; c++) {
                GetFieldValue(str, c, colValues[c], 256);
            }

            /* Evaluate WHERE expression */
            char result[512];
            int ok = expr_evaluate(g_whereExpr,
                                   (const char (*)[128])colNames,
                                   (const char (*)[256])colValues,
                                   numCols,
                                   result, sizeof(result));
            int keep = 0;
            if (ok) {
                if (strcmp(result, "t") == 0 ||
                    strcasecmp(result, "true") == 0 ||
                    strcmp(result, "1") == 0)
                    keep = 1;
                else {
                    double v = strtod(result, NULL);
                    if (v != 0.0) keep = 1;
                }
            }

            if (keep) {
                /* Grow array if needed */
                if (matchCount >= capacity) {
                    capacity *= 2;
                    char **tmp = (char **)realloc(matchKeys,
                                                  capacity * sizeof(char *));
                    if (!tmp) break;
                    matchKeys = tmp;
                }
                matchKeys[matchCount] = strdup(keyBuf);
                matchCount++;
            }
        }

        /* Phase 2: delete all matched records by key */
        int deleted = 0;
        int i;
        for (i = 0; i < matchCount; i++) {
            if (matchKeys[i]) {
                /* Log undo entry before delete (for transaction rollback) */
                if (g_tx_undo_callback) {
                    char *old = db_fetch(db, matchKeys[i]);
                    if (old)
                        g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                           g_tblDelName, matchKeys[i], old);
                }
                /* Remove from B-tree indexes before deleting record */
                {
                    char idxN[16][256], idxC[16][256], idxP[16][1024];
                    int nIdx = index_list_for_table(g_tblDelName, idxN, idxC, idxP, 16);
                    if (nIdx > 0) {
                        char *rec = db_fetch(db, matchKeys[i]);
                        if (rec) {
                            int ix;
                            for (ix = 0; ix < nIdx; ix++) {
                                char cv[256] = "";
                                int ci;
                                for (ci = 0; ci < numCols; ci++) {
                                    if (strcasecmp(colNames[ci], idxC[ix]) == 0) {
                                        GetFieldValue(rec, ci, cv, sizeof(cv));
                                        break;
                                    }
                                }
                                if (cv[0])
                                    btree_delete(idxP[ix], cv, matchKeys[i]);
                            }
                        }
                    }
                }
                if (db_delete(db, matchKeys[i]) == 0)
                    deleted++;
                free(matchKeys[i]);
            }
        }
        free(matchKeys);

        g_deleteCount = deleted;
        printf("%d record(s) deleted.\n", deleted);
    } else {
        /* ---------- Legacy PK-based delete ---------- */
        str = strtok(g_insert, ";");

        /* Log undo entry before delete (for transaction rollback) */
        if (g_tx_undo_callback) {
            char *old = db_fetch(db, str);
            if (old)
                g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                   g_tblDelName, str, old);
        }

        /* Remove from B-tree indexes before deleting record (legacy path) */
        {
            char idxN[16][256], idxC[16][256], idxP[16][1024];
            int nIdx = index_list_for_table(g_tblDelName, idxN, idxC, idxP, 16);
            if (nIdx > 0) {
                char *rec = db_fetch(db, str);
                if (rec) {
                    char legacyCols[64][128];
                    int legacyNumCols = ReadColumnNames(g_tblDelName, legacyCols, 64);
                    int ix;
                    for (ix = 0; ix < nIdx; ix++) {
                        char cv[256] = "";
                        int ci;
                        for (ci = 0; ci < legacyNumCols; ci++) {
                            if (strcasecmp(legacyCols[ci], idxC[ix]) == 0) {
                                GetFieldValue(rec, ci, cv, sizeof(cv));
                                break;
                            }
                        }
                        if (cv[0])
                            btree_delete(idxP[ix], cv, str);
                    }
                }
            }
        }

        if (db_delete(db, str) != 0) {
            printf("Record not found: %s\n", str);
            g_deleteCount = 0;
        } else {
            printf("Record deleted successfully.\n");
            g_deleteCount = 1;
        }
    }

    TruncateDelete();
    db_close(db);

    return 0;
}

int TruncateDelete(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_insert[i] = '\0';
        g_tblDelName[i] = '\0';
    }

    return 0;
}

int GetDelTableName(char *pname)
{
    db_table_path(pname, g_tblDelName, sizeof(g_tblDelName));

    return 0;
}
