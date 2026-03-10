#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "database.h"
#include "expression.h"
#include "catalog_internal.h"
#include "table_api.h"

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
    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(g_tblDelName, &td, cols, &ncols) < 0) {
        printf("Error: table not found\n");
        g_deleteCount = 0;
        TruncateDelete();
        return -1;
    }

    /* Get column names for WHERE evaluation */
    char colNames[64][128];
    int numCols = 0;
    for (int i = 0; i < ncols && i < 64; i++) {
        strncpy(colNames[i], cols[i].col_name, 127);
        colNames[i][127] = '\0';
        numCols++;
    }

    BTree2 pk_tree = tapi_pk_tree(&td);

    if (g_whereExpr != NULL) {
        /* ---------- Expression-based WHERE delete ---------- */

        /* Phase 1: iterate all records, evaluate WHERE, collect matching keys */
        int capacity = 64;
        int matchCount = 0;
        char **matchKeys = (char **)malloc(capacity * sizeof(char *));
        if (!matchKeys) {
            g_deleteCount = 0;
            TruncateDelete();
            return -1;
        }

        TableScanCursor cursor;
        char keyBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next(&cursor, keyBuf, recBuf, sizeof(recBuf)) == 0) {
                char colValues[64][256];
                int c;
                for (c = 0; c < numCols && c < 64; c++) {
                    GetFieldValue(recBuf, c, colValues[c], 256);
                }

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
        }

        /* Phase 2: delete all matched records */
        int deleted = 0;
        int i;
        for (i = 0; i < matchCount; i++) {
            if (matchKeys[i]) {
                RowID rid;
                if (bt2_search(&pk_tree, matchKeys[i], &rid) == 0) {
                    /* Read record for undo log and index cleanup */
                    char rec[RECORD_BUF_SIZE];
                    if (tapi_heap_read(rid, rec, sizeof(rec)) > 0) {
                        /* Log undo entry */
                        if (g_tx_undo_callback)
                            g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                               g_tblDelName, matchKeys[i], rec);

                        /* Remove from secondary B-tree indexes */
                        {
                            char idxN[16][256], idxC[16][256], idxP[16][1024];
                            int nIdx = index_list_for_table(g_tblDelName, idxN, idxC, idxP, 16);
                            if (nIdx > 0) {
                                int ix;
                                for (ix = 0; ix < nIdx; ix++) {
                                    int isComposite = (strchr(idxC[ix], ',') != NULL);
                                    if (isComposite) {
                                        char compKey[512] = "";
                                        char colSpec[256];
                                        strncpy(colSpec, idxC[ix], sizeof(colSpec) - 1);
                                        colSpec[sizeof(colSpec) - 1] = '\0';
                                        char *ct = strtok(colSpec, ",");
                                        int first = 1;
                                        while (ct) {
                                            int ci;
                                            for (ci = 0; ci < numCols; ci++) {
                                                if (strcasecmp(colNames[ci], ct) == 0) {
                                                    char fv[256];
                                                    GetFieldValue(rec, ci, fv, sizeof(fv));
                                                    if (!first) strcat(compKey, "|");
                                                    strcat(compKey, fv);
                                                    first = 0;
                                                    break;
                                                }
                                            }
                                            ct = strtok(NULL, ",");
                                        }
                                        if (compKey[0])
                                            btree_delete(idxP[ix], compKey, matchKeys[i]);
                                    } else {
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
                    }

                    /* Delete from heap and PK B+ tree */
                    tapi_heap_delete(rid);
                    bt2_delete(&pk_tree, matchKeys[i]);
                    td.pk_root_page = pk_tree.root_page;
                    deleted++;
                }
                free(matchKeys[i]);
            }
        }
        free(matchKeys);

        g_deleteCount = deleted;
        printf("%d record(s) deleted.\n", deleted);
    } else {
        /* ---------- Legacy PK-based delete ---------- */
        char *str = strtok(g_insert, ";");
        if (!str) {
            g_deleteCount = 0;
            TruncateDelete();
            return -1;
        }

        RowID rid;
        if (bt2_search(&pk_tree, str, &rid) == 0) {
            char rec[RECORD_BUF_SIZE];
            if (tapi_heap_read(rid, rec, sizeof(rec)) > 0) {
                /* Log undo entry */
                if (g_tx_undo_callback)
                    g_tx_undo_callback(3 /*TX_OP_DELETE*/,
                                       g_tblDelName, str, rec);

                /* Remove from secondary B-tree indexes */
                {
                    char idxN[16][256], idxC[16][256], idxP[16][1024];
                    int nIdx = index_list_for_table(g_tblDelName, idxN, idxC, idxP, 16);
                    if (nIdx > 0) {
                        int ix;
                        for (ix = 0; ix < nIdx; ix++) {
                            int isComposite = (strchr(idxC[ix], ',') != NULL);
                            if (isComposite) {
                                char compKey[512] = "";
                                char colSpec[256];
                                strncpy(colSpec, idxC[ix], sizeof(colSpec) - 1);
                                colSpec[sizeof(colSpec) - 1] = '\0';
                                char *ct = strtok(colSpec, ",");
                                int first = 1;
                                while (ct) {
                                    int ci;
                                    for (ci = 0; ci < numCols; ci++) {
                                        if (strcasecmp(colNames[ci], ct) == 0) {
                                            char fv[256];
                                            GetFieldValue(rec, ci, fv, sizeof(fv));
                                            if (!first) strcat(compKey, "|");
                                            strcat(compKey, fv);
                                            first = 0;
                                            break;
                                        }
                                    }
                                    ct = strtok(NULL, ",");
                                }
                                if (compKey[0])
                                    btree_delete(idxP[ix], compKey, str);
                            } else {
                                char cv[256] = "";
                                int ci;
                                for (ci = 0; ci < numCols; ci++) {
                                    if (strcasecmp(colNames[ci], idxC[ix]) == 0) {
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
            }

            tapi_heap_delete(rid);
            bt2_delete(&pk_tree, str);
            td.pk_root_page = pk_tree.root_page;
            printf("Record deleted successfully.\n");
            g_deleteCount = 1;
        } else {
            printf("Record not found: %s\n", str);
            g_deleteCount = 0;
        }
    }

    TruncateDelete();
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
