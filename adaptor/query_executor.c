#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>
#include "platform.h"
#include "query_executor.h"
#include "catalog.h"
#include "../evolution/db/database.h"
#include "../evolution/db/apue.h"
#include "../evolution/db/apue_db.h"
#include "../evolution/db/expression.h"

/* Flex/Bison externs */
extern int yyparse(void);
typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE yy_scan_string(const char *str);
extern void yy_delete_buffer(YY_BUFFER_STATE buf);
extern int yylex_destroy(void);
extern int yylineno;

/* ----------------------------------------------------------------
 *  Engine initialization
 * ---------------------------------------------------------------- */
void query_engine_init(void)
{
    g_gui_mode = 1;   /* Suppress printf output from EvoSQL */
    g_gui_error = 0;
    db_ensure_root(); /* Create root/ directory structure and set default database */
}

/* ----------------------------------------------------------------
 *  Helpers: strip SQL whitespace/semicolons, detect statement type
 * ---------------------------------------------------------------- */
static void strip_trailing(char *sql)
{
    int len = (int)strlen(sql);
    while (len > 0 && (sql[len-1] == ';' || sql[len-1] == ' ' ||
           sql[len-1] == '\n' || sql[len-1] == '\r' || sql[len-1] == '\t'))
        sql[--len] = '\0';
}

static int is_select_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "SELECT", 6) == 0);
}

static int is_insert_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "INSERT", 6) == 0);
}

static int is_create_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "CREATE", 6) == 0);
}

static int is_update_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "UPDATE", 6) == 0);
}

static int is_delete_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "DELETE", 6) == 0);
}

static int is_drop_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "DROP", 4) == 0);
}

static int is_truncate_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "TRUNCATE", 8) == 0);
}

static int is_use_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "USE", 3) == 0 && isspace((unsigned char)sql[3]));
}

static int is_set_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "SET", 3) == 0 && isspace((unsigned char)sql[3]));
}

/* Map EvoSQL type encoding to PostgreSQL type OID */
static int type_encoding_to_pg_oid(int typeEncoding)
{
    int family = typeEncoding / 10000;
    switch (family) {
    case 1:  return PG_OID_INT4;    /* BIT/TINYINT → int4 */
    case 2:  return PG_OID_INT2;    /* SMALLINT */
    case 3:  return PG_OID_INT4;    /* MEDIUMINT → int4 */
    case 4:  return PG_OID_INT4;    /* INT */
    case 5:  return PG_OID_INT4;    /* INTEGER */
    case 6:  return PG_OID_INT8;    /* BIGINT */
    case 7:  return PG_OID_FLOAT8;  /* REAL → float8 */
    case 8:  return PG_OID_FLOAT8;  /* DOUBLE */
    case 9:  return PG_OID_FLOAT4;  /* FLOAT */
    case 10: return PG_OID_DATE;    /* DATE/TIME/TIMESTAMP */
    case 11: return PG_OID_FLOAT8;  /* DECIMAL → float8 */
    case 12: return PG_OID_BPCHAR;  /* CHAR */
    case 13: return PG_OID_VARCHAR; /* VARCHAR */
    case 22: return PG_OID_VARCHAR; /* BOOLEAN — send as VARCHAR to avoid DBeaver JDBC getByte() error */
    default: return PG_OID_TEXT;    /* BLOB, TEXT, ENUM, SET, etc. */
    }
}

/* ----------------------------------------------------------------
 *  Parse selected column names from a normalized SELECT.
 *  Fills g_selectColumns[], g_selectColumnCount.
 *  If SELECT *, counts remain 0 (= all columns).
 *  NOTE: expression parsing is now handled by the Bison parser
 *  which fills g_selectExprs[] / g_selectExprCount.
 * ---------------------------------------------------------------- */
static void parse_select_columns(const char *sql)
{
    const char *p = sql;
    const char *from_pos;
    char colbuf[4096];
    char *tok;
    int len;

    g_selectColumnCount = 0;

    /* Skip leading whitespace */
    while (*p && isspace((unsigned char)*p)) p++;

    /* Must start with SELECT */
    if (strncasecmp(p, "SELECT", 6) != 0) return;
    p += 6;

    /* Skip select options (ALL, DISTINCT, etc.) */
    while (*p && isspace((unsigned char)*p)) p++;

    /* Find FROM keyword to know where column list ends */
    {
        const char *search = p;
        from_pos = NULL;
        while (*search) {
            if (isspace((unsigned char)*(search > sql ? search - 1 : search)) &&
                strncasecmp(search, "FROM", 4) == 0 &&
                (search[4] == ' ' || search[4] == '\t' || search[4] == '\n' || search[4] == '\0')) {
                from_pos = search;
                break;
            }
            search++;
        }
    }
    if (!from_pos) return;

    /* Extract column list between SELECT and FROM */
    len = (int)(from_pos - p);
    if (len <= 0 || len >= (int)sizeof(colbuf)) return;
    strncpy(colbuf, p, len);
    colbuf[len] = '\0';

    /* Trim whitespace */
    {
        int clen = (int)strlen(colbuf);
        while (clen > 0 && isspace((unsigned char)colbuf[clen - 1]))
            colbuf[--clen] = '\0';
    }

    /* If it's *, select all columns */
    if (strcmp(colbuf, "*") == 0) return;

    /* Split by comma */
    tok = strtok(colbuf, ",");
    while (tok && g_selectColumnCount < 64) {
        while (*tok && isspace((unsigned char)*tok)) tok++;
        {
            int tlen = (int)strlen(tok);
            while (tlen > 0 && isspace((unsigned char)tok[tlen - 1]))
                tok[--tlen] = '\0';
        }
        if (*tok) {
            strncpy(g_selectColumns[g_selectColumnCount], tok, 127);
            g_selectColumns[g_selectColumnCount][127] = '\0';
            g_selectColumnCount++;
        }
        tok = strtok(NULL, ",");
    }
}

/* ----------------------------------------------------------------
 *  Collect SELECT results into ResultSet
 * ---------------------------------------------------------------- */
static void collect_select_results(const char *tableName, ResultSet *rs)
{
    DBHANDLE db;
    char metaFile[1024], line[1024];
    char keyBuf[1024];
    char *data;
    FILE *fp;
    int count = 0;
    int colTypes[64];
    int numTypes = 0;

    rs->is_select = 1;

    /* Read type encodings from .meta line 3 */
    numTypes = ReadColumnTypes(tableName, colTypes, 64);

    /* Read column metadata from .meta file */
    sprintf(metaFile, "%s.meta", tableName);
    fp = fopen(metaFile, "r");
    if (!fp) {
        result_set_error(rs, "42P01",
            "relation does not exist");
        return;
    }

    {
        unsigned int tableOid = 0;
        /* Compute stable table OID (djb2 hash) */
        {
            unsigned int h = 5381;
            const char *p = tableName;
            while (*p) {
                h = ((h << 5) + h) + (unsigned char)*p;
                p++;
            }
            tableOid = 16384 + (h % 100000);
        }

        if (fgets(line, sizeof(line), fp)) {
            char *col;
            int colIdx = 0;
            line[strcspn(line, "\n")] = '\0';
            col = strtok(line, ";");
            while (col) {
                int oid = (colIdx < numTypes)
                          ? type_encoding_to_pg_oid(colTypes[colIdx])
                          : PG_OID_TEXT;
                result_add_column(rs, col, oid);
                /* Set table OID and attnum so DBeaver can resolve columns */
                rs->columns[rs->num_cols - 1].table_oid = (int)tableOid;
                rs->columns[rs->num_cols - 1].attnum = colIdx + 1; /* 1-based */
                /* Set type modifier for varchar/char */
                if (colIdx < numTypes) {
                    int family = colTypes[colIdx] / 10000;
                    int size = colTypes[colIdx] % 10000;
                    if ((family == 12 || family == 13) && size > 0)
                        rs->columns[rs->num_cols - 1].type_modifier = size + 4;
                }
                colIdx++;
                col = strtok(NULL, ";");
            }
        }
    }
    fclose(fp);

    /* Open database and read records */
    db = db_open(tableName, O_RDWR, FILE_MODE);
    if (!db) {
        result_set_error(rs, "42P01",
            "could not open table");
        return;
    }

    db_rewind(db);
    while ((data = db_nextrec(db, keyBuf)) != NULL && count < MAX_ROWS) {
        int row = result_add_row(rs);
        if (row < 0) break;

        /* Parse semicolon-separated fields */
        char temp[1024];
        int col = 0;
        strncpy(temp, data, sizeof(temp) - 1);
        temp[sizeof(temp) - 1] = '\0';

        char *val = strtok(temp, ";");
        while (val && col < rs->num_cols) {
            /* Check for NULL marker */
            if (strcmp(val, "\x01NULL\x01") == 0) {
                result_set_null(rs, row, col);
            } else if (rs->columns[col].pg_type_oid == PG_OID_BOOL) {
                if (strncasecmp(val, "true", 4) == 0 ||
                    strcmp(val, "1") == 0 ||
                    strcmp(val, "t") == 0)
                    result_set_field(rs, row, col, "true");
                else
                    result_set_field(rs, row, col, "false");
            } else {
                result_set_field(rs, row, col, val);
            }
            col++;
            val = strtok(NULL, ";");
        }
        count++;
    }

    db_close(db);

    /* NOTE: ORDER BY sort is deferred to end of function, after all
     * expression evaluation, GROUP BY, and DISTINCT processing. */

    /* --- WHERE filtering using g_whereExpr --- */
    if (g_whereExpr && rs->num_rows > 0) {
        char colNames[MAX_COLUMNS][128];
        int c;
        for (c = 0; c < rs->num_cols && c < MAX_COLUMNS; c++) {
            strncpy(colNames[c], rs->columns[c].name, 127);
            colNames[c][127] = '\0';
        }

        int dst = 0;
        int r;
        for (r = 0; r < rs->num_rows; r++) {
            char colValues[MAX_COLUMNS][256];
            for (c = 0; c < rs->num_cols && c < MAX_COLUMNS; c++) {
                if (rs->rows[r].is_null[c]) {
                    strcpy(colValues[c], "\x01NULL\x01");
                } else {
                    strncpy(colValues[c], rs->rows[r].fields[c], 255);
                    colValues[c][255] = '\0';
                }
            }

            char result[512];
            int ok = expr_evaluate(g_whereExpr,
                                   (const char (*)[128])colNames,
                                   (const char (*)[256])colValues,
                                   rs->num_cols,
                                   result, sizeof(result));
            /* Keep row if WHERE evaluates to true (non-zero / "t" / "true") */
            int keep = 0;
            if (ok) {
                if (strcmp(result, "t") == 0 || strcasecmp(result, "true") == 0 ||
                    strcmp(result, "1") == 0)
                    keep = 1;
                else {
                    double v = strtod(result, NULL);
                    if (v != 0.0) keep = 1;
                }
            }
            if (keep) {
                if (dst != r)
                    rs->rows[dst] = rs->rows[r];
                dst++;
            }
        }
        rs->num_rows = dst;
        count = dst;
    }

    /* NOTE: LIMIT/OFFSET is deferred to end of function, after
     * ORDER BY, DISTINCT, GROUP BY, and expression evaluation. */

    /* --- GROUP BY / Aggregate detection & evaluation --- */
    int did_aggregate = 0;
    {
        int has_aggregate = 0;
        int s;
        for (s = 0; s < g_selectExprCount; s++) {
            if (expr_is_aggregate(g_selectExprs[s])) {
                has_aggregate = 1;
                break;
            }
        }
        if ((has_aggregate || g_groupByCount > 0) && rs->num_cols > 0) {
            /* Build column name arrays for evaluation */
            char colNames[MAX_COLUMNS][128];
            int origNumCols = rs->num_cols;
            int origNumRows = rs->num_rows;
            {
                int c;
                for (c = 0; c < origNumCols && c < MAX_COLUMNS; c++) {
                    strncpy(colNames[c], rs->columns[c].name, 127);
                    colNames[c][127] = '\0';
                }
            }

            /* --- Helper: build colValues for a given row index --- */
            #define BUILD_COL_VALUES(rowIdx, colVals) do { \
                int _c; \
                for (_c = 0; _c < origNumCols && _c < MAX_COLUMNS; _c++) { \
                    if (rs->rows[rowIdx].is_null[_c]) \
                        strcpy((colVals)[_c], NULL_MARKER); \
                    else { \
                        strncpy((colVals)[_c], rs->rows[rowIdx].fields[_c], 255); \
                        (colVals)[_c][255] = '\0'; \
                    } \
                } \
            } while(0)

            /* Determine group membership:
             * groups[r] = group index for row r
             * groupCount = total number of distinct groups
             * groupFirstRow[g] = first row index of group g  */
            int groups[MAX_ROWS];
            int groupCount = 0;
            int groupFirstRow[MAX_ROWS];
            int groupSize[MAX_ROWS];
            memset(groups, 0, sizeof(groups));
            memset(groupSize, 0, sizeof(groupSize));

            if (g_groupByCount > 0) {
                /* Compute GROUP BY key for each row and assign group index */
                /* groupKeys[g] is a concatenated string key for each group */
                char groupKeys[MAX_ROWS][1024];
                int r;
                for (r = 0; r < origNumRows; r++) {
                    char colValues[MAX_COLUMNS][256];
                    BUILD_COL_VALUES(r, colValues);

                    /* Build key from GROUP BY expressions */
                    char key[1024];
                    key[0] = '\0';
                    int g;
                    for (g = 0; g < g_groupByCount; g++) {
                        char part[MAX_FIELD_LEN];
                        if (expr_evaluate(g_groupByExprs[g],
                                (const char (*)[128])colNames,
                                (const char (*)[256])colValues,
                                origNumCols, part, sizeof(part))) {
                            if (g > 0) strcat(key, "\x01");
                            strcat(key, part);
                        } else {
                            if (g > 0) strcat(key, "\x01");
                            strcat(key, NULL_MARKER);
                        }
                    }

                    /* Find or create group */
                    int found = -1, gi;
                    for (gi = 0; gi < groupCount; gi++) {
                        if (strcmp(groupKeys[gi], key) == 0) {
                            found = gi;
                            break;
                        }
                    }
                    if (found >= 0) {
                        groups[r] = found;
                        groupSize[found]++;
                    } else {
                        strncpy(groupKeys[groupCount], key, 1023);
                        groupKeys[groupCount][1023] = '\0';
                        groupFirstRow[groupCount] = r;
                        groups[r] = groupCount;
                        groupSize[groupCount] = 1;
                        groupCount++;
                    }
                }
            } else {
                /* No GROUP BY — all rows form one group */
                groupCount = 1;
                groupFirstRow[0] = 0;
                groupSize[0] = origNumRows;
                int r;
                for (r = 0; r < origNumRows; r++)
                    groups[r] = 0;
            }

            /* Set up result columns */
            rs->num_cols = g_selectExprCount;
            for (s = 0; s < g_selectExprCount; s++) {
                memset(&rs->columns[s], 0, sizeof(ColumnInfo));
                if (g_selectExprs[s]) {
                    strncpy(rs->columns[s].name, g_selectExprs[s]->display,
                            MAX_COL_NAME - 1);
                } else {
                    strcpy(rs->columns[s].name, "?column?");
                }
                rs->columns[s].pg_type_oid = PG_OID_INT8;
                rs->columns[s].type_len = 8;
                rs->columns[s].type_modifier = -1;
                rs->columns[s].attnum = s + 1;
            }

            /* Compute aggregate/expression values for each group */
            int outRows = 0;
            Row groupRows[MAX_ROWS];
            int gi;
            for (gi = 0; gi < groupCount && outRows < MAX_ROWS; gi++) {
                Row aggRow;
                memset(&aggRow, 0, sizeof(aggRow));
                aggRow.num_fields = g_selectExprCount;

                for (s = 0; s < g_selectExprCount; s++) {
                    if (!g_selectExprs[s]) {
                        aggRow.is_null[s] = 1;
                        continue;
                    }
                    if (g_selectExprs[s]->type == EXPR_COUNT_STAR) {
                        int cnt = 0, r;
                        for (r = 0; r < origNumRows; r++)
                            if (groups[r] == gi) cnt++;
                        snprintf(aggRow.fields[s], MAX_FIELD_LEN, "%d", cnt);
                    } else if (g_selectExprs[s]->type == EXPR_COUNT) {
                        int cnt = 0, r;
                        for (r = 0; r < origNumRows; r++) {
                            if (groups[r] != gi) continue;
                            char colValues[MAX_COLUMNS][256];
                            BUILD_COL_VALUES(r, colValues);
                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_selectExprs[s]->left,
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result)))
                                cnt++;
                        }
                        snprintf(aggRow.fields[s], MAX_FIELD_LEN, "%d", cnt);
                    } else if (g_selectExprs[s]->type == EXPR_SUM ||
                               g_selectExprs[s]->type == EXPR_AVG) {
                        double total = 0.0;
                        int cnt = 0, r;
                        for (r = 0; r < origNumRows; r++) {
                            if (groups[r] != gi) continue;
                            char colValues[MAX_COLUMNS][256];
                            BUILD_COL_VALUES(r, colValues);
                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_selectExprs[s]->left,
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result))) {
                                total += strtod(result, NULL);
                                cnt++;
                            }
                        }
                        if (cnt == 0) {
                            aggRow.is_null[s] = 1;
                        } else if (g_selectExprs[s]->type == EXPR_AVG) {
                            double avg = total / cnt;
                            if (avg == (double)(long long)avg && avg > -1e15 && avg < 1e15)
                                snprintf(aggRow.fields[s], MAX_FIELD_LEN, "%lld", (long long)avg);
                            else
                                snprintf(aggRow.fields[s], MAX_FIELD_LEN, "%.4f", avg);
                            rs->columns[s].pg_type_oid = PG_OID_FLOAT8;
                        } else {
                            if (total == (double)(long long)total && total > -1e15 && total < 1e15)
                                snprintf(aggRow.fields[s], MAX_FIELD_LEN, "%lld", (long long)total);
                            else
                                snprintf(aggRow.fields[s], MAX_FIELD_LEN, "%g", total);
                        }
                    } else if (g_selectExprs[s]->type == EXPR_MIN ||
                               g_selectExprs[s]->type == EXPR_MAX) {
                        int found = 0, r;
                        double best_num = 0.0;
                        char best_str[MAX_FIELD_LEN];
                        int is_numeric = 1;
                        best_str[0] = '\0';
                        for (r = 0; r < origNumRows; r++) {
                            if (groups[r] != gi) continue;
                            char colValues[MAX_COLUMNS][256];
                            BUILD_COL_VALUES(r, colValues);
                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_selectExprs[s]->left,
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result))) {
                                char *endp;
                                double numval = strtod(result, &endp);
                                if (*endp != '\0' || result[0] == '\0') is_numeric = 0;
                                if (!found) {
                                    strncpy(best_str, result, MAX_FIELD_LEN - 1);
                                    best_num = numval;
                                    found = 1;
                                } else {
                                    int take = 0;
                                    if (is_numeric) {
                                        if (g_selectExprs[s]->type == EXPR_MIN)
                                            take = (numval < best_num);
                                        else
                                            take = (numval > best_num);
                                    } else {
                                        int cmp = strcmp(result, best_str);
                                        if (g_selectExprs[s]->type == EXPR_MIN)
                                            take = (cmp < 0);
                                        else
                                            take = (cmp > 0);
                                    }
                                    if (take) {
                                        strncpy(best_str, result, MAX_FIELD_LEN - 1);
                                        best_num = numval;
                                    }
                                }
                            }
                        }
                        if (!found) {
                            aggRow.is_null[s] = 1;
                        } else {
                            strncpy(aggRow.fields[s], best_str, MAX_FIELD_LEN - 1);
                            rs->columns[s].pg_type_oid = PG_OID_VARCHAR;
                            rs->columns[s].type_len = -1;
                        }
                    } else {
                        /* Non-aggregate expression — evaluate against first row of group */
                        int firstRow = groupFirstRow[gi];
                        if (origNumRows > 0) {
                            char colValues[MAX_COLUMNS][256];
                            BUILD_COL_VALUES(firstRow, colValues);
                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_selectExprs[s],
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result)) && strcmp(result, "\x01NULL\x01") != 0) {
                                strncpy(aggRow.fields[s], result, MAX_FIELD_LEN - 1);
                                rs->columns[s].pg_type_oid = PG_OID_VARCHAR;
                                rs->columns[s].type_len = -1;
                            } else {
                                aggRow.is_null[s] = 1;
                            }
                        } else {
                            aggRow.is_null[s] = 1;
                        }
                    }
                }

                /* HAVING filter: evaluate HAVING expression against this group.
                 * Problem: HAVING may contain aggregates (COUNT(*), SUM(x), etc.)
                 * that expr_evaluate can't directly compute. Solution: pre-compute
                 * any aggregates in HAVING and expose them as named columns. We build
                 * a column context with both the SELECT result columns AND the
                 * original table columns, plus we handle the case where HAVING
                 * directly references an aggregate by matching it to a SELECT column.
                 *
                 * Strategy: Build a combined column context:
                 *   - SELECT expression display names → aggRow values
                 *   - Original table columns → first row of group values
                 * Then if HAVING references COUNT(*), it matches SELECT's COUNT(*) column.
                 * For HAVING aggregates NOT in SELECT, we compute them on-the-fly. */
                if (g_havingExpr) {
                    /* Build combined context: select columns first, then original cols,
                     * then any HAVING aggregates not already in SELECT */
                    char havCols[MAX_COLUMNS][128];
                    char havVals[MAX_COLUMNS][256];
                    int havColCount = 0;
                    int hc;

                    /* First: add SELECT expression results (aggregates + group cols) */
                    for (hc = 0; hc < g_selectExprCount && havColCount < MAX_COLUMNS; hc++) {
                        strncpy(havCols[havColCount], rs->columns[hc].name, 127);
                        havCols[havColCount][127] = '\0';
                        if (aggRow.is_null[hc])
                            strcpy(havVals[havColCount], NULL_MARKER);
                        else {
                            strncpy(havVals[havColCount], aggRow.fields[hc], 255);
                            havVals[havColCount][255] = '\0';
                        }
                        havColCount++;
                    }

                    /* Second: collect aggregates from HAVING expression and compute
                     * any that aren't already in the context */
                    {
                        const ExprNode *havAggs[16];
                        int havAggCount = 0;
                        expr_collect_aggregates(g_havingExpr, havAggs, &havAggCount, 16);
                        int ha;
                        for (ha = 0; ha < havAggCount; ha++) {
                            /* Check if already in context by display name */
                            int dup = 0, dc;
                            for (dc = 0; dc < havColCount; dc++) {
                                if (strcasecmp(havCols[dc], havAggs[ha]->display) == 0) {
                                    dup = 1; break;
                                }
                            }
                            if (dup || havColCount >= MAX_COLUMNS) continue;

                            /* Compute this aggregate for the current group */
                            strncpy(havCols[havColCount], havAggs[ha]->display, 127);
                            havCols[havColCount][127] = '\0';

                            if (havAggs[ha]->type == EXPR_COUNT_STAR) {
                                int cnt = 0, r;
                                for (r = 0; r < origNumRows; r++)
                                    if (groups[r] == gi) cnt++;
                                snprintf(havVals[havColCount], 256, "%d", cnt);
                            } else if (havAggs[ha]->type == EXPR_COUNT) {
                                int cnt = 0, r;
                                for (r = 0; r < origNumRows; r++) {
                                    if (groups[r] != gi) continue;
                                    char cv[MAX_COLUMNS][256];
                                    BUILD_COL_VALUES(r, cv);
                                    char res[MAX_FIELD_LEN];
                                    if (expr_evaluate(havAggs[ha]->left,
                                            (const char (*)[128])colNames,
                                            (const char (*)[256])cv,
                                            origNumCols, res, sizeof(res)))
                                        cnt++;
                                }
                                snprintf(havVals[havColCount], 256, "%d", cnt);
                            } else if (havAggs[ha]->type == EXPR_SUM ||
                                       havAggs[ha]->type == EXPR_AVG) {
                                double total = 0.0;
                                int cnt = 0, r;
                                for (r = 0; r < origNumRows; r++) {
                                    if (groups[r] != gi) continue;
                                    char cv[MAX_COLUMNS][256];
                                    BUILD_COL_VALUES(r, cv);
                                    char res[MAX_FIELD_LEN];
                                    if (expr_evaluate(havAggs[ha]->left,
                                            (const char (*)[128])colNames,
                                            (const char (*)[256])cv,
                                            origNumCols, res, sizeof(res))) {
                                        total += strtod(res, NULL);
                                        cnt++;
                                    }
                                }
                                if (cnt == 0) {
                                    strcpy(havVals[havColCount], NULL_MARKER);
                                } else if (havAggs[ha]->type == EXPR_AVG) {
                                    double avg = total / cnt;
                                    if (avg == (double)(long long)avg)
                                        snprintf(havVals[havColCount], 256, "%lld", (long long)avg);
                                    else
                                        snprintf(havVals[havColCount], 256, "%.4f", avg);
                                } else {
                                    if (total == (double)(long long)total)
                                        snprintf(havVals[havColCount], 256, "%lld", (long long)total);
                                    else
                                        snprintf(havVals[havColCount], 256, "%g", total);
                                }
                            } else if (havAggs[ha]->type == EXPR_MIN ||
                                       havAggs[ha]->type == EXPR_MAX) {
                                int found = 0, r, is_numeric = 1;
                                double best_num = 0.0;
                                char best_str[MAX_FIELD_LEN];
                                best_str[0] = '\0';
                                for (r = 0; r < origNumRows; r++) {
                                    if (groups[r] != gi) continue;
                                    char cv[MAX_COLUMNS][256];
                                    BUILD_COL_VALUES(r, cv);
                                    char res[MAX_FIELD_LEN];
                                    if (expr_evaluate(havAggs[ha]->left,
                                            (const char (*)[128])colNames,
                                            (const char (*)[256])cv,
                                            origNumCols, res, sizeof(res))) {
                                        char *endp;
                                        double nv = strtod(res, &endp);
                                        if (*endp != '\0' || res[0] == '\0') is_numeric = 0;
                                        if (!found) {
                                            strncpy(best_str, res, MAX_FIELD_LEN - 1);
                                            best_num = nv;
                                            found = 1;
                                        } else {
                                            int take = 0;
                                            if (is_numeric)
                                                take = (havAggs[ha]->type == EXPR_MIN) ? (nv < best_num) : (nv > best_num);
                                            else {
                                                int cmp = strcmp(res, best_str);
                                                take = (havAggs[ha]->type == EXPR_MIN) ? (cmp < 0) : (cmp > 0);
                                            }
                                            if (take) { strncpy(best_str, res, MAX_FIELD_LEN - 1); best_num = nv; }
                                        }
                                    }
                                }
                                if (!found)
                                    strcpy(havVals[havColCount], NULL_MARKER);
                                else
                                    strncpy(havVals[havColCount], best_str, 255);
                            }
                            havColCount++;
                        }
                    }

                    /* Third: add original table columns from first row of group */
                    int firstRow = groupFirstRow[gi];
                    for (hc = 0; hc < origNumCols && havColCount < MAX_COLUMNS; hc++) {
                        /* Avoid duplicate column names */
                        int dup = 0, dc;
                        for (dc = 0; dc < havColCount; dc++) {
                            if (strcasecmp(havCols[dc], colNames[hc]) == 0) {
                                dup = 1; break;
                            }
                        }
                        if (dup) continue;
                        strncpy(havCols[havColCount], colNames[hc], 127);
                        havCols[havColCount][127] = '\0';
                        if (origNumRows > 0 && rs->rows[firstRow].is_null[hc])
                            strcpy(havVals[havColCount], NULL_MARKER);
                        else if (origNumRows > 0) {
                            strncpy(havVals[havColCount], rs->rows[firstRow].fields[hc], 255);
                            havVals[havColCount][255] = '\0';
                        } else {
                            strcpy(havVals[havColCount], NULL_MARKER);
                        }
                        havColCount++;
                    }

                    char hResult[MAX_FIELD_LEN];
                    int hOk = expr_evaluate(g_havingExpr,
                            (const char (*)[128])havCols,
                            (const char (*)[256])havVals,
                            havColCount,
                            hResult, sizeof(hResult));
                    int keep = 0;
                    if (hOk) {
                        if (strcmp(hResult, "t") == 0 || strcasecmp(hResult, "true") == 0 ||
                            strcmp(hResult, "1") == 0)
                            keep = 1;
                        else {
                            double v = strtod(hResult, NULL);
                            if (v != 0.0) keep = 1;
                        }
                    }
                    if (!keep) continue;  /* skip this group */
                }

                groupRows[outRows++] = aggRow;
            }

            #undef BUILD_COL_VALUES

            /* Replace rows with grouped/aggregated result rows */
            int r;
            for (r = 0; r < outRows; r++)
                rs->rows[r] = groupRows[r];
            rs->num_rows = outRows;

            did_aggregate = 1;
            /* DISTINCT, LIMIT/OFFSET will be applied at end of function */
        }
    }

    /* --- ORDER BY (applied after WHERE and GROUP BY, before column filtering) --- */
    if (g_orderByCount > 0 && rs->num_rows > 1) {
        /* Resolve column indices for all ORDER BY columns */
        int orderCols[8];
        int orderDescs[8];
        int numOrderKeys = 0;
        int k;
        for (k = 0; k < g_orderByCount && k < 8; k++) {
            int c;
            orderCols[k] = -1;
            orderDescs[k] = g_orderByDescs[k];
            for (c = 0; c < rs->num_cols; c++) {
                if (strcasecmp(rs->columns[c].name, g_orderByColumns[k]) == 0) {
                    orderCols[k] = c;
                    break;
                }
            }
            if (orderCols[k] >= 0)
                numOrderKeys = k + 1;
        }
        if (numOrderKeys > 0) {
            /* Bubble sort with multi-key comparison */
            int i, j;
            for (i = 0; i < rs->num_rows - 1; i++) {
                for (j = 0; j < rs->num_rows - 1 - i; j++) {
                    int cmp = 0;
                    for (k = 0; k < numOrderKeys && cmp == 0; k++) {
                        int col = orderCols[k];
                        int null_a = rs->rows[j].is_null[col];
                        int null_b = rs->rows[j+1].is_null[col];
                        if (null_a && null_b) cmp = 0;
                        else if (null_a) cmp = 1;
                        else if (null_b) cmp = -1;
                        else {
                            char *a = rs->rows[j].fields[col];
                            char *b = rs->rows[j+1].fields[col];
                            char *endA, *endB;
                            double numA = strtod(a, &endA);
                            double numB = strtod(b, &endB);
                            if (*endA == '\0' && *endB == '\0' &&
                                a[0] != '\0' && b[0] != '\0') {
                                cmp = (numA > numB) ? 1 : (numA < numB) ? -1 : 0;
                            } else {
                                cmp = strcmp(a, b);
                            }
                        }
                        if (orderDescs[k]) cmp = -cmp;
                    }
                    if (cmp > 0) {
                        Row tmp = rs->rows[j];
                        rs->rows[j] = rs->rows[j+1];
                        rs->rows[j+1] = tmp;
                    }
                }
            }
        }
    } else if (g_orderByColumn[0] != '\0' && rs->num_rows > 1) {
        /* Legacy single-column ORDER BY fallback */
        int orderCol = -1;
        int c;
        for (c = 0; c < rs->num_cols; c++) {
            if (strcasecmp(rs->columns[c].name, g_orderByColumn) == 0) {
                orderCol = c;
                break;
            }
        }
        if (orderCol >= 0) {
            int i, j;
            int desc = g_orderByDesc;
            for (i = 0; i < rs->num_rows - 1; i++) {
                for (j = 0; j < rs->num_rows - 1 - i; j++) {
                    int null_a = rs->rows[j].is_null[orderCol];
                    int null_b = rs->rows[j+1].is_null[orderCol];
                    int cmp;
                    if (null_a && null_b) cmp = 0;
                    else if (null_a) cmp = 1;
                    else if (null_b) cmp = -1;
                    else {
                        char *a = rs->rows[j].fields[orderCol];
                        char *b = rs->rows[j+1].fields[orderCol];
                        char *endA, *endB;
                        double numA = strtod(a, &endA);
                        double numB = strtod(b, &endB);
                        if (*endA == '\0' && *endB == '\0' &&
                            a[0] != '\0' && b[0] != '\0') {
                            cmp = (numA > numB) ? 1 : (numA < numB) ? -1 : 0;
                        } else {
                            cmp = strcmp(a, b);
                        }
                    }
                    if (desc) cmp = -cmp;
                    if (cmp > 0) {
                        Row tmp = rs->rows[j];
                        rs->rows[j] = rs->rows[j+1];
                        rs->rows[j+1] = tmp;
                    }
                }
            }
        }
    }
    g_orderByColumn[0] = '\0';
    g_orderByDesc = 0;
    g_orderByCount = 0;

    /* --- Column filtering / expression evaluation (using parser AST) --- */
    if (!did_aggregate && g_selectExprCount > 0 && rs->num_cols > 0) {
        /* Check if we have a single STAR expression (SELECT *) */
        if (g_selectExprCount == 1 && g_selectExprs[0] &&
            g_selectExprs[0]->type == EXPR_STAR) {
            /* SELECT * — no filtering needed */
        } else {
            /* Check if any expression is non-trivial (has arithmetic) */
            int has_arithmetic = 0;
            int s;
            for (s = 0; s < g_selectExprCount; s++) {
                if (g_selectExprs[s] && !expr_is_column(g_selectExprs[s])) {
                    has_arithmetic = 1;
                    break;
                }
            }

            /* Build column name/value arrays for expr_evaluate */
            char colNames[MAX_COLUMNS][128];
            int origNumCols = rs->num_cols;
            {
                int c;
                for (c = 0; c < origNumCols && c < MAX_COLUMNS; c++) {
                    strncpy(colNames[c], rs->columns[c].name, 127);
                    colNames[c][127] = '\0';
                }
            }

            if (has_arithmetic) {
                /* Build new column definitions for the result */
                ColumnInfo origCols[MAX_COLUMNS];
                memcpy(origCols, rs->columns, sizeof(ColumnInfo) * origNumCols);

                /* Set up new columns */
                rs->num_cols = g_selectExprCount;
                {
                    int c;
                    for (c = 0; c < g_selectExprCount; c++) {
                        memset(&rs->columns[c], 0, sizeof(ColumnInfo));
                        if (g_selectExprs[c]) {
                            strncpy(rs->columns[c].name, g_selectExprs[c]->display,
                                    MAX_COL_NAME - 1);
                        } else {
                            snprintf(rs->columns[c].name, MAX_COL_NAME, "?column?");
                        }
                        /* Expression results are numeric unless plain column */
                        if (g_selectExprs[c] && expr_is_column(g_selectExprs[c])) {
                            int oc;
                            for (oc = 0; oc < origNumCols; oc++) {
                                if (strcasecmp(origCols[oc].name,
                                               g_selectExprs[c]->val.col_name) == 0) {
                                    rs->columns[c] = origCols[oc];
                                    rs->columns[c].attnum = c + 1;
                                    break;
                                }
                            }
                        } else if (g_selectExprs[c] && expr_is_boolean(g_selectExprs[c])) {
                            rs->columns[c].pg_type_oid = PG_OID_VARCHAR;
                            rs->columns[c].type_len = -1;
                            rs->columns[c].type_modifier = -1;
                            rs->columns[c].table_oid = 0;
                            rs->columns[c].attnum = 0;
                        } else {
                            rs->columns[c].pg_type_oid = PG_OID_FLOAT8;
                            rs->columns[c].type_len = 8;
                            rs->columns[c].type_modifier = -1;
                            rs->columns[c].table_oid = 0;
                            rs->columns[c].attnum = 0;
                        }
                    }
                }

                /* Evaluate expressions for each row */
                {
                    int r, c;
                    for (r = 0; r < rs->num_rows; r++) {
                        Row origRow = rs->rows[r];
                        char colValues[MAX_COLUMNS][256];
                        /* Copy field values for evaluation */
                        for (c = 0; c < origNumCols && c < MAX_COLUMNS; c++) {
                            if (origRow.is_null[c]) {
                                /* Restore NULL_MARKER so expr_evaluate can detect it */
                                strcpy(colValues[c], "\x01NULL\x01");
                            } else {
                                strncpy(colValues[c], origRow.fields[c], 255);
                                colValues[c][255] = '\0';
                            }
                        }

                        memset(&rs->rows[r], 0, sizeof(Row));
                        rs->rows[r].num_fields = g_selectExprCount;

                        for (c = 0; c < g_selectExprCount; c++) {
                            if (!g_selectExprs[c]) {
                                rs->rows[r].is_null[c] = 1;
                                continue;
                            }

                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_selectExprs[c],
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols,
                                    result, sizeof(result)) && strcmp(result, "\x01NULL\x01") != 0) {
                                /* Handle boolean conversion for wire protocol */
                                if (rs->columns[c].pg_type_oid == PG_OID_BOOL ||
                                    (g_selectExprs[c] && expr_is_boolean(g_selectExprs[c]))) {
                                    if (strncasecmp(result, "true", 4) == 0 ||
                                        strcmp(result, "1") == 0 ||
                                        strcmp(result, "t") == 0)
                                        strcpy(rs->rows[r].fields[c], "true");
                                    else
                                        strcpy(rs->rows[r].fields[c], "false");
                                } else {
                                    strncpy(rs->rows[r].fields[c], result, MAX_FIELD_LEN - 1);
                                }
                            } else {
                                rs->rows[r].is_null[c] = 1;
                            }
                        }
                    }
                }
            } else {
                /* All expressions are plain columns — use simple column filtering */
                int colMap[64];
                int mapCount = 0;
                int s, c, r;

                for (s = 0; s < g_selectExprCount && mapCount < 64; s++) {
                    if (!g_selectExprs[s] || !expr_is_column(g_selectExprs[s]))
                        continue;
                    for (c = 0; c < rs->num_cols; c++) {
                        if (strcasecmp(rs->columns[c].name,
                                       g_selectExprs[s]->val.col_name) == 0) {
                            colMap[mapCount++] = c;
                            break;
                        }
                    }
                }

                if (mapCount > 0 && mapCount < rs->num_cols) {
                    ColumnInfo newCols[MAX_COLUMNS];
                    for (s = 0; s < mapCount; s++) {
                        newCols[s] = rs->columns[colMap[s]];
                        newCols[s].attnum = s + 1;
                        /* Apply column alias if set */
                        if (g_selectExprs[s] && g_selectExprs[s]->display[0] &&
                            strcasecmp(g_selectExprs[s]->display,
                                       g_selectExprs[s]->val.col_name) != 0) {
                            strncpy(newCols[s].name, g_selectExprs[s]->display,
                                    sizeof(newCols[s].name) - 1);
                        }
                    }
                    memcpy(rs->columns, newCols, sizeof(ColumnInfo) * mapCount);
                    rs->num_cols = mapCount;

                    for (r = 0; r < rs->num_rows; r++) {
                        Row newRow;
                        memset(&newRow, 0, sizeof(Row));
                        newRow.num_fields = mapCount;
                        for (s = 0; s < mapCount; s++) {
                            strcpy(newRow.fields[s],
                                   rs->rows[r].fields[colMap[s]]);
                            newRow.is_null[s] = rs->rows[r].is_null[colMap[s]];
                        }
                        rs->rows[r] = newRow;
                    }
                } else if (mapCount > 0) {
                    /* All columns selected — still apply aliases */
                    for (s = 0; s < mapCount; s++) {
                        if (g_selectExprs[s] && g_selectExprs[s]->display[0] &&
                            strcasecmp(g_selectExprs[s]->display,
                                       g_selectExprs[s]->val.col_name) != 0) {
                            strncpy(rs->columns[colMap[s]].name,
                                    g_selectExprs[s]->display,
                                    sizeof(rs->columns[colMap[s]].name) - 1);
                        }
                    }
                }
            }
        }
    }

    /* --- DISTINCT (remove duplicate rows) --- */
    if (g_selectDistinct && rs->num_rows > 1) {
        int dst = 1;
        int r, c;
        for (r = 1; r < rs->num_rows; r++) {
            int duplicate = 0;
            int d;
            for (d = 0; d < dst; d++) {
                int same = 1;
                for (c = 0; c < rs->num_cols; c++) {
                    if (rs->rows[r].is_null[c] != rs->rows[d].is_null[c]) { same = 0; break; }
                    if (!rs->rows[r].is_null[c] &&
                        strcmp(rs->rows[r].fields[c], rs->rows[d].fields[c]) != 0) { same = 0; break; }
                }
                if (same) { duplicate = 1; break; }
            }
            if (!duplicate) {
                if (dst != r)
                    rs->rows[dst] = rs->rows[r];
                dst++;
            }
        }
        rs->num_rows = dst;
    }
    g_selectDistinct = 0;

    /* --- LIMIT / OFFSET (applied last) --- */
    if (g_limitExpr) {
        char lbuf[64];
        int limit_val = -1, offset_val = 0;
        if (expr_evaluate(g_limitExpr, NULL, NULL, 0, lbuf, sizeof(lbuf)))
            limit_val = atoi(lbuf);
        if (g_offsetExpr) {
            char obuf[64];
            if (expr_evaluate(g_offsetExpr, NULL, NULL, 0, obuf, sizeof(obuf)))
                offset_val = atoi(obuf);
        }
        if (limit_val >= 0) {
            if (offset_val > 0) {
                if (offset_val >= rs->num_rows) {
                    rs->num_rows = 0;
                } else {
                    int r;
                    for (r = 0; r < rs->num_rows - offset_val; r++)
                        rs->rows[r] = rs->rows[r + offset_val];
                    rs->num_rows -= offset_val;
                }
            }
            if (limit_val < rs->num_rows)
                rs->num_rows = limit_val;
        }
    }

    sprintf(rs->command_tag, "SELECT %d", rs->num_rows);
}

/* ----------------------------------------------------------------
 *  Execute SQL through EvoSQL parser
 *
 *  IMPORTANT: The APUE db library (db.c) calls err_dump/err_sys on
 *  many internal errors (lseek, read, invalid index, etc.).  In GUI
 *  mode these do longjmp(g_gui_jmpbuf, 1).  Therefore ANY code that
 *  touches the db library (db_open, db_nextrec, …) MUST run inside
 *  the setjmp scope, and the stdout/stderr restore MUST be guarded
 *  against double-close in case longjmp fires after the first restore.
 * ---------------------------------------------------------------- */
static void execute_via_parser(const char *sql, ResultSet *rs)
{
    char *sqlCopy;
    /* volatile: values survive longjmp per C standard */
    volatile int saved_stdout = -1;
    volatile int saved_stderr = -1;
    volatile YY_BUFFER_STATE scan_buf = NULL;

    /* Make a mutable copy, strip \r */
    sqlCopy = strdup(sql);
    if (!sqlCopy) {
        result_set_error(rs, "53000", "out of memory");
        return;
    }

    /* Remove \r characters (lexer doesn't like them) */
    {
        char *src = sqlCopy, *dst = sqlCopy;
        while (*src) {
            if (*src != '\r')
                *dst++ = *src;
            src++;
        }
        *dst = '\0';
    }

    /* Ensure SQL ends with semicolon and newline for parser */
    {
        int len = (int)strlen(sqlCopy);
        char *withSemicolon = (char *)malloc(len + 4);
        if (!withSemicolon) {
            free(sqlCopy);
            result_set_error(rs, "53000", "out of memory");
            return;
        }
        strcpy(withSemicolon, sqlCopy);
        /* Strip trailing whitespace/semicolons */
        strip_trailing(withSemicolon);
        strcat(withSemicolon, "\n;\n");
        free(sqlCopy);
        sqlCopy = withSemicolon;
    }

    /* Reset global state — clear ALL parser globals to prevent stale
     * values from a previous query from interfering with this one. */
    g_gui_mode = 1;
    g_gui_error = 0;
    g_gui_error_msg[0] = '\0';
    g_lastSelectTable[0] = '\0';
    g_tblSelectionName[0] = '\0';
    g_tblName[0] = '\0';
    g_tblInsertionName[0] = '\0';
    g_tblUpdateTableName[0] = '\0';
    g_tblDelName[0] = '\0';
    g_tblDropName[0] = '\0';
    g_insert[0] = '\0';
    g_whereSel[0] = '\0';
    g_columnDefs[0] = '\0';
    g_columnNames[0] = '\0';
    g_orderByColumn[0] = '\0';
    g_orderByDesc = 0;
    g_orderByCount = 0;
    g_selectDistinct = 0;
    g_totalColumnSize = 0;
    g_currentColNotNull = 0;
    g_currentColPrimaryKey = 0;
    g_columnNullFlags[0] = '\0';
    g_primaryKeyIndex = -1;
    g_columnCount = 0;
    /* NOTE: g_selectColumnCount is NOT reset here — it was set by
     * parse_select_columns() which runs before execute_via_parser() */

    /* Reset expression pool for parser AST */
    expr_pool_reset();

    /* Redirect stdout/stderr to NUL to suppress parser output */
    saved_stdout = dup(1);
    saved_stderr = dup(2);
    {
        FILE *fnul = fopen(NULL_DEVICE, "w");
        if (fnul) {
            dup2(fileno(fnul), 1);
            dup2(fileno(fnul), 2);
            fclose(fnul);
        }
    }

    /* ----- setjmp scope -----
     * Everything that can call err_sys / err_dump / err_quit (which
     * longjmp back here in GUI mode) MUST be inside this block.
     * This includes the parser AND collect_select_results (which
     * calls db_open / db_nextrec that use err_dump internally). */
    if (setjmp(g_gui_jmpbuf) == 0) {
        int parse_result;
        yylineno = 1;
        scan_buf = yy_scan_string(sqlCopy);
        parse_result = yyparse();
        yy_delete_buffer((YY_BUFFER_STATE)scan_buf);
        yylex_destroy();
        scan_buf = NULL;

        /* yyparse returns 0 on success, 1 on syntax error, 2 on OOM */
        if (parse_result != 0) {
            rs->has_error = 1;
            strcpy(rs->error_sqlstate, "42601");
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "Syntax error: %.200s", sql);
        }

        /* Check if engine set a validation/runtime error (e.g. type mismatch) */
        if (!rs->has_error && g_gui_error) {
            rs->has_error = 1;
            strcpy(rs->error_sqlstate, "22000");
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "%.500s", g_gui_error_msg[0] ? g_gui_error_msg : "data validation error");
        }

        /* Restore stdout/stderr BEFORE collect_select_results so that
         * any subsequent printf works, and mark fds as consumed. */
        if (saved_stdout >= 0) { dup2(saved_stdout, 1); close(saved_stdout); saved_stdout = -1; }
        if (saved_stderr >= 0) { dup2(saved_stderr, 2); close(saved_stderr); saved_stderr = -1; }

        /* Collect SELECT results (calls db_open/db_nextrec which may
         * longjmp on corrupted data — now safely inside setjmp scope) */
        if (!rs->has_error && g_lastSelectTable[0] != '\0') {
            collect_select_results(g_lastSelectTable, rs);
            g_lastSelectTable[0] = '\0';
        } else if (!rs->has_error && g_selectExprCount > 0 && is_select_query(sql)) {
            /* Tableless SELECT: SELECT 1+2, SELECT 1=1 AND 2=2, etc.
             * Evaluate expressions without any table context. */
            int s;
            rs->is_select = 1;
            rs->num_cols = g_selectExprCount;
            for (s = 0; s < g_selectExprCount; s++) {
                if (g_selectExprs[s]) {
                    strncpy(rs->columns[s].name, g_selectExprs[s]->display,
                            sizeof(rs->columns[s].name) - 1);
                } else {
                    strcpy(rs->columns[s].name, "?column?");
                }
                rs->columns[s].attnum = s + 1;
                rs->columns[s].pg_type_oid = PG_OID_VARCHAR;
                rs->columns[s].type_len = -1;
                rs->columns[s].type_modifier = -1;
            }
            int row = result_add_row(rs);
            if (row >= 0) {
                char empty_names[1][128];
                char empty_vals[1][256];
                memset(empty_names, 0, sizeof(empty_names));
                memset(empty_vals, 0, sizeof(empty_vals));
                for (s = 0; s < g_selectExprCount; s++) {
                    if (g_selectExprs[s]) {
                        char result[512];
                        int ok = expr_evaluate(g_selectExprs[s],
                                               empty_names, empty_vals, 0,
                                               result, sizeof(result));
                        if (ok && strcmp(result, "\x01NULL\x01") != 0) {
                            /* Boolean conversion */
                            if (expr_is_boolean(g_selectExprs[s])) {
                                if (strcmp(result, "t") == 0 || strcasecmp(result, "true") == 0 || strcmp(result, "1") == 0)
                                    strcpy(rs->rows[row].fields[s], "true");
                                else
                                    strcpy(rs->rows[row].fields[s], "false");
                            } else {
                                strncpy(rs->rows[row].fields[s], result, MAX_FIELD_LEN - 1);
                            }
                        } else {
                            rs->rows[row].is_null[s] = 1;
                        }
                    }
                }
            }
            sprintf(rs->command_tag, "SELECT 1");
        } else if (!rs->has_error) {
            /* DDL/DML command — determine appropriate tag */
            if (is_create_query(sql)) {
                /* Distinguish CREATE TABLE, CREATE DATABASE, CREATE SCHEMA */
                const char *p = sql;
                while (*p && isspace((unsigned char)*p)) p++;
                p += 6; /* skip "CREATE" */
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "DATABASE", 8) == 0)
                    strcpy(rs->command_tag, "CREATE DATABASE");
                else if (strncasecmp(p, "SCHEMA", 6) == 0)
                    strcpy(rs->command_tag, "CREATE SCHEMA");
                else
                    strcpy(rs->command_tag, "CREATE TABLE");
            }
            else if (is_insert_query(sql))
                strcpy(rs->command_tag, "INSERT 0 1");
            else if (is_update_query(sql))
                strcpy(rs->command_tag, "UPDATE 1");
            else if (is_delete_query(sql))
                strcpy(rs->command_tag, "DELETE 1");
            else if (is_drop_query(sql))
                strcpy(rs->command_tag, "DROP TABLE");
            else if (is_truncate_query(sql))
                strcpy(rs->command_tag, "TRUNCATE TABLE");
            else if (is_use_query(sql))
                strcpy(rs->command_tag, "USE");
            else if (is_set_query(sql))
                strcpy(rs->command_tag, "SET");
            else
                strcpy(rs->command_tag, "OK");
        }
    } else {
        /* Error occurred via longjmp (err_sys/err_quit/err_dump).
         * Clean up Flex scanner if it was still active. */
        if (scan_buf) {
            yy_delete_buffer((YY_BUFFER_STATE)scan_buf);
            yylex_destroy();
            scan_buf = NULL;
        }
        rs->has_error = 1;
        strcpy(rs->error_sqlstate, "42000");
        snprintf(rs->error_message, sizeof(rs->error_message),
                 "SQL execution error: %.200s", sql);
    }

    /* Restore stdout/stderr if not already done (longjmp path) */
    if (saved_stdout >= 0) { dup2(saved_stdout, 1); close(saved_stdout); }
    if (saved_stderr >= 0) { dup2(saved_stderr, 2); close(saved_stderr); }

    free(sqlCopy);
}

/* ----------------------------------------------------------------
 *  Normalize SQL for DBeaver compatibility
 *  - Remove double quotes around identifiers: "Stok" → Stok
 *  - Strip schema prefix: public.Foo → Foo
 *  - Replace alias.* with *: s.* → *
 *  - Remove table aliases: FROM Stok AS s → FROM Stok
 *  - Remove LIMIT/OFFSET clauses (not supported by parser)
 *
 *  IMPORTANT: Quote removal MUST happen before schema prefix
 *  removal, because DBeaver sends "public"."Stok" — the quotes
 *  around "public" prevent the public. prefix match.
 * ---------------------------------------------------------------- */
static void normalize_sql(char *sql)
{
    char buf[8192];
    char *src, *dst;
    int len;

    /* Pass 1: Remove double quotes around identifiers */
    src = sql;
    dst = buf;
    while (*src) {
        if (*src == '"') {
            src++;  /* skip opening quote */
            while (*src && *src != '"') {
                *dst++ = *src++;
            }
            if (*src == '"') src++;  /* skip closing quote */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 2: Remove "public." and "pg_catalog." prefixes (case-insensitive) */
    src = sql;
    dst = buf;
    while (*src) {
        if (strncasecmp(src, "public.", 7) == 0) {
            src += 7;  /* skip "public." */
        } else if (strncasecmp(src, "pg_catalog.", 11) == 0) {
            src += 11;  /* skip "pg_catalog." */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 3: Remove "alias." prefix from qualified references
     *   alias.*       → *       (e.g. s.* → *)
     *   alias.column  → column  (e.g. x.id → id)
     * Only triggers when char before dot is a letter/underscore (not digit,
     * so 3.14 is left alone) and char after dot is letter/underscore or '*'. */
    src = sql;
    dst = buf;
    while (*src) {
        if (*src == '.' && dst > buf &&
            (isalpha((unsigned char)*(src - 1)) || *(src - 1) == '_') &&
            (src[1] == '*' || isalpha((unsigned char)src[1]) || src[1] == '_')) {
            /* Walk backwards in dst to erase the alias word */
            char *alias_start = dst - 1;
            while (alias_start > buf && (isalnum((unsigned char)*(alias_start-1)) || *(alias_start-1) == '_'))
                alias_start--;
            dst = alias_start;
            src++;  /* skip the dot, next char (*|column) will be copied normally */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 4: Remove "AS <alias>" after table name in FROM clause ONLY.
     * We locate the FROM clause boundaries, then only strip aliases there.
     * DBeaver sends e.g. FROM students AS s — we strip " AS s". */
    {
        /* Find FROM keyword (case-insensitive, word boundary) */
        const char *from_start = NULL;
        const char *from_end = NULL;
        const char *scan = sql;
        while (*scan) {
            if (strncasecmp(scan, "FROM", 4) == 0 &&
                (scan == sql || !isalnum((unsigned char)*(scan-1))) &&
                (scan[4] == ' ' || scan[4] == '\t' || scan[4] == '\n')) {
                from_start = scan + 4;
                break;
            }
            scan++;
        }
        if (from_start) {
            /* FROM clause ends at WHERE/GROUP/HAVING/ORDER/LIMIT/UNION or end */
            const char *kw;
            from_end = from_start + strlen(from_start);
            for (kw = from_start; *kw; kw++) {
                if ((strncasecmp(kw, "WHERE", 5) == 0 ||
                     strncasecmp(kw, "GROUP", 5) == 0 ||
                     strncasecmp(kw, "ORDER", 5) == 0 ||
                     strncasecmp(kw, "LIMIT", 5) == 0 ||
                     strncasecmp(kw, "UNION", 5) == 0) &&
                    (kw == from_start || !isalnum((unsigned char)*(kw-1))) &&
                    !isalnum((unsigned char)kw[5])) {
                    from_end = kw;
                    break;
                }
                if (strncasecmp(kw, "HAVING", 6) == 0 &&
                    (kw == from_start || !isalnum((unsigned char)*(kw-1))) &&
                    !isalnum((unsigned char)kw[6])) {
                    from_end = kw;
                    break;
                }
            }
        }

        src = sql;
        dst = buf;
        while (*src) {
            /* Only strip " AS alias" when src is within the FROM clause region */
            if (from_start && src >= from_start && src < from_end &&
                (*src == ' ' || *src == '\t') &&
                strncasecmp(src + 1, "AS ", 3) == 0 &&
                (isalpha((unsigned char)src[4]) || src[4] == '_')) {
                /* Skip " AS alias" */
                char *p = (char *)src + 4;
                while (*p && (isalnum((unsigned char)*p) || *p == '_'))
                    p++;
                src = p;
            } else {
                *dst++ = *src++;
            }
        }
        *dst = '\0';
        strcpy(sql, buf);
    }

    /* Clean up: strip trailing whitespace */
    len = (int)strlen(sql);
    while (len > 0 && isspace((unsigned char)sql[len-1]))
        sql[--len] = '\0';
}

/* ----------------------------------------------------------------
 *  Resolve qualified table names: schema.table or db.schema.table
 *
 *  Scans the SQL for dotted identifiers (a.b or a.b.c) and:
 *    - Temporarily switches the active db/schema context
 *    - Strips the prefix from the SQL so the parser sees plain table
 *    - Saves the original db/schema so the caller can restore later
 *
 *  Supports: FROM schema.tbl, INSERT INTO schema.tbl,
 *            UPDATE schema.tbl, DELETE FROM schema.tbl,
 *            CREATE TABLE schema.tbl, DROP TABLE schema.tbl
 *
 *  Returns 1 if a qualified name was resolved, 0 otherwise.
 * ---------------------------------------------------------------- */
static int resolve_qualified_table(char *sql,
                                   char *saved_db, int saved_db_size,
                                   char *saved_schema, int saved_schema_size)
{
    /* Save current context */
    strncpy(saved_db, db_get_current_database(), saved_db_size - 1);
    saved_db[saved_db_size - 1] = '\0';
    strncpy(saved_schema, db_get_current_schema(), saved_schema_size - 1);
    saved_schema[saved_schema_size - 1] = '\0';

    /* Scan for patterns: identifier.identifier or identifier.identifier.identifier
     * We look for NAME.NAME or NAME.NAME.NAME where NAME is [A-Za-z_][A-Za-z0-9_]*
     * We skip known non-table prefixes and only match after table-context keywords. */
    char *p = sql;
    while (*p) {
        /* Skip string literals */
        if (*p == '\'') {
            p++;
            while (*p && *p != '\'') {
                if (*p == '\\') p++;  /* skip escaped char */
                if (*p) p++;
            }
            if (*p) p++;
            continue;
        }

        /* Look for a.b.c or a.b pattern — an identifier followed by dot(s) */
        if ((isalpha((unsigned char)*p) || *p == '_') && (p == sql || !isalnum((unsigned char)*(p-1)))) {
            /* Capture first segment */
            char *seg1_start = p;
            while (*p && (isalnum((unsigned char)*p) || *p == '_')) p++;
            int seg1_len = (int)(p - seg1_start);

            if (*p == '.') {
                char *dot1 = p;
                p++;  /* skip dot */

                /* Capture second segment */
                if (isalpha((unsigned char)*p) || *p == '_') {
                    char *seg2_start = p;
                    while (*p && (isalnum((unsigned char)*p) || *p == '_')) p++;
                    int seg2_len = (int)(p - seg2_start);

                    if (*p == '.') {
                        char *dot2 = p;
                        p++;  /* skip second dot */

                        /* Capture third segment: db.schema.table */
                        if (isalpha((unsigned char)*p) || *p == '_') {
                            char *seg3_start = p;
                            while (*p && (isalnum((unsigned char)*p) || *p == '_')) p++;
                            int seg3_len = (int)(p - seg3_start);

                            char db_name[256], schema_name[256];
                            snprintf(db_name, sizeof(db_name), "%.*s", seg1_len, seg1_start);
                            snprintf(schema_name, sizeof(schema_name), "%.*s", seg2_len, seg2_start);

                            /* Switch db + schema context */
                            db_set_current_database(db_name);
                            db_set_current_schema(schema_name);

                            /* Remove "db.schema." prefix — shift SQL left */
                            int prefix_len = (int)(seg3_start - seg1_start);
                            memmove(seg1_start, seg3_start, strlen(seg3_start) + 1);
                            /* Adjust p pointer */
                            p = seg1_start + seg3_len;
                            return 1;
                        }
                    } else {
                        /* Two segments: could be schema.table or alias.column
                         * We treat it as schema.table ONLY if seg1 is a known schema
                         * in the current database */
                        char maybe_schema[256];
                        snprintf(maybe_schema, sizeof(maybe_schema), "%.*s", seg1_len, seg1_start);

                        /* Skip common non-schema prefixes */
                        if (strcasecmp(maybe_schema, "pg_catalog") == 0 ||
                            strcasecmp(maybe_schema, "public") == 0) {
                            continue;  /* already handled by normalize_sql */
                        }

                        /* Check if it's a registered schema */
                        char regFile[1024];
                        snprintf(regFile, sizeof(regFile), "%s/%s/schemas",
                                 db_get_root(), db_get_current_database());
                        FILE *fp = fopen(regFile, "r");
                        int is_schema = 0;
                        if (fp) {
                            char line[256];
                            while (fgets(line, sizeof(line), fp)) {
                                /* Strip newline */
                                int ll = (int)strlen(line);
                                while (ll > 0 && (line[ll-1] == '\n' || line[ll-1] == '\r'))
                                    line[--ll] = '\0';
                                if (strcasecmp(line, maybe_schema) == 0) {
                                    is_schema = 1;
                                    break;
                                }
                            }
                            fclose(fp);
                        }

                        if (is_schema) {
                            /* Switch schema context */
                            db_set_current_schema(maybe_schema);

                            /* Remove "schema." prefix */
                            memmove(seg1_start, seg2_start, strlen(seg2_start) + 1);
                            p = seg1_start + seg2_len;
                            return 1;
                        }
                        /* else: not a schema, leave as-is (alias.column) */
                    }
                } else {
                    /* dot followed by non-identifier — skip */
                }
            }
            continue;
        }
        p++;
    }
    return 0;
}

/* ----------------------------------------------------------------
 *  Main entry point
 * ---------------------------------------------------------------- */
void query_execute(const char *sql, ResultSet *rs)
{
    char normalized[8192];
    char saved_db[256] = "";
    char saved_schema[256] = "";
    int qualified = 0;

    result_init(rs);

    /* First, try catalog/internal queries (before normalization) */
    if (catalog_try_handle(sql, rs)) {
        return;
    }

    /* Reset rs — catalog sub-handlers may have modified it before returning 0 */
    result_init(rs);

    /* Normalize SQL for DBeaver compatibility (quote removal, pg_catalog removal) */
    strncpy(normalized, sql, sizeof(normalized) - 1);
    normalized[sizeof(normalized) - 1] = '\0';
    normalize_sql(normalized);

    /* Resolve qualified table names AFTER normalization removes quotes
     * but the schema prefix is still intact because normalize_sql
     * only removes "public." and "pg_catalog.", not arbitrary schemas.
     * However, Pass 3 (alias removal) can strip schema.table too,
     * so we must resolve BEFORE alias removal.
     * Solution: resolve on a pre-normalized copy, then re-normalize. */

    /* Actually, let's resolve on the quote-stripped SQL before full normalize.
     * We re-do normalize on the original to get just quote removal + known prefixes,
     * then resolve, then do the alias/AS passes. */

    /* Simpler approach: resolve on the raw (quote-stripped) SQL first */
    {
        char raw[8192];
        strncpy(raw, sql, sizeof(raw) - 1);
        raw[sizeof(raw) - 1] = '\0';
        /* Strip quotes only (Pass 1 of normalize) */
        {
            char buf2[8192];
            char *s2 = raw, *d2 = buf2;
            while (*s2) {
                if (*s2 == '"') {
                    s2++;
                    while (*s2 && *s2 != '"') *d2++ = *s2++;
                    if (*s2 == '"') s2++;
                } else {
                    *d2++ = *s2++;
                }
            }
            *d2 = '\0';
            strcpy(raw, buf2);
        }
        qualified = resolve_qualified_table(raw,
                                            saved_db, sizeof(saved_db),
                                            saved_schema, sizeof(saved_schema));
        if (qualified) {
            /* Use the resolved (prefix-stripped) SQL and re-normalize */
            strncpy(normalized, raw, sizeof(normalized) - 1);
            normalized[sizeof(normalized) - 1] = '\0';
            normalize_sql(normalized);
        }
    }

    printf("[adaptor] Normalized SQL: %.200s%s\n", normalized,
           strlen(normalized) > 200 ? "..." : "");
    fflush(stdout);

    /* Parse selected columns from SQL for filtering */
    parse_select_columns(normalized);

    /* Real EvoSQL query */
    execute_via_parser(normalized, rs);

    /* Restore original db/schema context if we switched */
    if (qualified) {
        db_set_current_database(saved_db);
        db_set_current_schema(saved_schema);
    }
}
