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
#include "../evolution/db/catalog_internal.h"
#include "../evolution/db/table_api.h"
#include "../evolution/db/expression.h"
#include "../evolution/db/tuple_format.h"
#include "../evolution/db/buffer_pool.h"
#include "pg_protocol.h"
#include "join.h"
#include "util.h"

/* Flex/Bison externs (reentrant parser) */
typedef void *yyscan_t;
extern int yyparse(void *scanner);
typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern int yylex_init(yyscan_t *scanner);
extern void yyset_lineno(int lineno, yyscan_t scanner);
extern YY_BUFFER_STATE yy_scan_string(const char *str, yyscan_t scanner);
extern void yy_delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);
extern int yylex_destroy(yyscan_t scanner);

/* Parser mutex from server.c (serializes yyparse, not reentrant) */
#include "platform.h"
extern rwlock_t g_parse_lock;

/* ----------------------------------------------------------------
 *  Engine initialization
 * ---------------------------------------------------------------- */
void query_engine_init(void)
{
    g_gui_mode = 1;   /* Suppress printf output from EvoSQL */
    /* NOTE: g_err.error is now per-query (in QueryContext).
     * At startup g_qctx is NULL, so we skip it here.
     * Each query's qctx_alloc() calloc-zeros gui_error. */
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

static int is_alter_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "ALTER", 5) == 0);
}

/* rwlock adapters for CreateIndexConcurrentlyPhase2 (void* interface) */
static void conc_lock(void *m)   { rwlock_wrlock((rwlock_t *)m); }
static void conc_unlock(void *m) { rwlock_wrunlock((rwlock_t *)m); }

static int is_analyze_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "ANALYZE", 7) == 0);
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

static int is_explain_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "EXPLAIN", 7) == 0 && isspace((unsigned char)sql[7]));
}

/* Map EvoSQL type encoding to PostgreSQL type OID */
int type_encoding_to_pg_oid(int typeEncoding)
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
    case 18: return PG_OID_UUID;    /* UUID */
    case 22: return PG_OID_VARCHAR; /* BOOLEAN — send as VARCHAR to avoid DBeaver JDBC getByte() error */
    default: return PG_OID_TEXT;    /* BLOB, TEXT, ENUM, SET, etc. */
    }
}

/* Reverse mapping: PG type OID → EvoSQL internal type encoding */
static int pg_oid_to_type_encoding(int oid, int type_modifier)
{
    switch (oid) {
    case PG_OID_INT4:    return 40004;    /* INT 4 bytes */
    case PG_OID_INT8:    return 60008;    /* BIGINT 8 bytes */
    case PG_OID_INT2:    return 20002;    /* SMALLINT 2 bytes */
    case PG_OID_FLOAT4:  return 90004;    /* FLOAT 4 bytes */
    case PG_OID_FLOAT8:  return 80008;    /* DOUBLE 8 bytes */
    case PG_OID_VARCHAR:                  /* VARCHAR */
        return 130000 + (type_modifier > 4 ? type_modifier - 4 : 255);
    case PG_OID_BPCHAR:  return 120001;   /* CHAR(1) */
    case PG_OID_TEXT:    return 140000;    /* TEXT */
    case PG_OID_DATE:    return 100010;    /* DATE */
    case PG_OID_UUID:    return 180036;    /* UUID */
    default:             return 130255;    /* VARCHAR(255) fallback */
    }
}

/* ----------------------------------------------------------------
 *  Parse selected column names from a normalized SELECT.
 *  Fills g_sel.columns[], g_sel.columnCount.
 *  If SELECT *, counts remain 0 (= all columns).
 *  NOTE: expression parsing is now handled by the Bison parser
 *  which fills g_expr.selectExprs[] / g_expr.selectExprCount.
 * ---------------------------------------------------------------- */
static void parse_select_columns(const char *sql)
{
    const char *p = sql;
    const char *from_pos;
    char colbuf[4096];
    char *tok;
    int len;

    g_sel.columnCount = 0;

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
    while (tok && g_sel.columnCount < 64) {
        while (*tok && isspace((unsigned char)*tok)) tok++;
        {
            int tlen = (int)strlen(tok);
            while (tlen > 0 && isspace((unsigned char)tok[tlen - 1]))
                tok[--tlen] = '\0';
        }
        if (*tok) {
            strncpy(g_sel.columns[g_sel.columnCount], tok, 127);
            g_sel.columns[g_sel.columnCount][127] = '\0';
            g_sel.columnCount++;
        }
        tok = strtok(NULL, ",");
    }
}

/* ----------------------------------------------------------------
 *  Try to extract a simple "column = literal" from WHERE expression.
 *  Returns 1 if found, fills col_name and literal_val.
 * ---------------------------------------------------------------- */
static int extract_eq_condition(const ExprNode *expr,
                                char *col_name, int col_size,
                                char *literal_val, int val_size)
{
    if (!expr || expr->type != EXPR_CMP_EQ)
        return 0;
    const ExprNode *left = expr->left;
    const ExprNode *right = expr->right;
    if (!left || !right) return 0;

    const ExprNode *col = NULL, *lit = NULL;
    if (left->type == EXPR_COLUMN) { col = left; lit = right; }
    else if (right->type == EXPR_COLUMN) { col = right; lit = left; }
    else return 0;

    if (lit->type == EXPR_LITERAL_INT) {
        snprintf(literal_val, val_size, "%d", lit->val.intval);
    } else if (lit->type == EXPR_LITERAL_FLOAT) {
        snprintf(literal_val, val_size, "%g", lit->val.floatval);
    } else if (lit->type == EXPR_LITERAL_STR) {
        strncpy(literal_val, lit->val.strval, val_size - 1);
        literal_val[val_size - 1] = '\0';
    } else {
        return 0;
    }

    strncpy(col_name, col->val.col_name, col_size - 1);
    col_name[col_size - 1] = '\0';
    return 1;
}

/* ----------------------------------------------------------------
 *  Extract multiple "column = literal" conditions from AND chains.
 *  Walks the WHERE expression tree and collects all col=val pairs
 *  joined by AND. Returns count of extracted conditions.
 * ---------------------------------------------------------------- */
typedef struct {
    char col_name[128];
    char literal_val[256];
} EqCondition;

static int extract_and_eq_conditions(const ExprNode *expr,
                                     EqCondition *out, int maxOut)
{
    if (!expr) return 0;

    /* Single equality */
    if (expr->type == EXPR_CMP_EQ) {
        char col[128], val[256];
        if (extract_eq_condition(expr, col, sizeof(col), val, sizeof(val))) {
            if (maxOut > 0) {
                strncpy(out[0].col_name, col, 127);
                out[0].col_name[127] = '\0';
                strncpy(out[0].literal_val, val, 255);
                out[0].literal_val[255] = '\0';
                return 1;
            }
        }
        return 0;
    }

    /* AND node — recurse left and right */
    if (expr->type == EXPR_AND) {
        int n = 0;
        n += extract_and_eq_conditions(expr->left, out + n, maxOut - n);
        n += extract_and_eq_conditions(expr->right, out + n, maxOut - n);
        return n;
    }

    return 0;
}

/* Try to find a composite index matching a set of eq conditions.
 * Returns 1 if found, fills idxPath and compositeKey (values joined by |).
 * The index must have its leading columns match the given conditions. */
static int find_composite_index_match(const char *tableName,
                                      const EqCondition *conds, int numConds,
                                      char *idxPath, int idxPathSize,
                                      char *compositeKey, int keySize,
                                      char *matchedIdxName, int nameSize)
{
    char tblPath[1024];
    db_table_path(tableName, tblPath, sizeof(tblPath));

    char idxNames[16][256], idxCols[16][256], idxPaths[16][1024];
    char idxTypes[16];
    int nIdx = index_list_with_types(tblPath, idxNames, idxCols, idxPaths, idxTypes, 16);

    for (int ix = 0; ix < nIdx; ix++) {
        /* Only consider composite indexes */
        if (!strchr(idxCols[ix], ',')) continue;

        /* Parse index column list */
        char colsBuf[256];
        strncpy(colsBuf, idxCols[ix], sizeof(colsBuf) - 1);
        colsBuf[sizeof(colsBuf) - 1] = '\0';
        char *idxColArr[16];
        int numIdxCols = 0;
        char *savep = NULL;
        char *c = strtok_r(colsBuf, ",", &savep);
        while (c && numIdxCols < 16) {
            idxColArr[numIdxCols++] = c;
            c = strtok_r(NULL, ",", &savep);
        }

        /* Check if ALL index columns have a matching eq condition */
        int allMatch = 1;
        char keyBuf[1024] = "";
        for (int ci = 0; ci < numIdxCols; ci++) {
            int found = 0;
            for (int ei = 0; ei < numConds; ei++) {
                if (strcasecmp(idxColArr[ci], conds[ei].col_name) == 0) {
                    if (ci > 0) strcat(keyBuf, "|");
                    strcat(keyBuf, conds[ei].literal_val);
                    found = 1;
                    break;
                }
            }
            if (!found) { allMatch = 0; break; }
        }

        if (allMatch) {
            strncpy(idxPath, idxPaths[ix], idxPathSize - 1);
            idxPath[idxPathSize - 1] = '\0';
            strncpy(compositeKey, keyBuf, keySize - 1);
            compositeKey[keySize - 1] = '\0';
            if (matchedIdxName) {
                strncpy(matchedIdxName, idxNames[ix], nameSize - 1);
                matchedIdxName[nameSize - 1] = '\0';
            }
            return 1;
        }

        /* Also check leftmost prefix match (all given conds match leading index cols) */
        if (numConds < numIdxCols) {
            int prefixMatch = 1;
            char prefixKey[1024] = "";
            for (int ci = 0; ci < numIdxCols && ci < numConds; ci++) {
                int found = 0;
                for (int ei = 0; ei < numConds; ei++) {
                    if (strcasecmp(idxColArr[ci], conds[ei].col_name) == 0) {
                        if (ci > 0) strcat(prefixKey, "|");
                        strcat(prefixKey, conds[ei].literal_val);
                        found = 1;
                        break;
                    }
                }
                if (!found) { prefixMatch = 0; break; }
            }

            /* For prefix match, we'd need range scan — skip for now,
             * only exact full match uses the index */
            (void)prefixMatch;
            (void)prefixKey;
        }
    }

    return 0;
}

/* Try to match a WHERE expression against expression indexes.
 * Detects patterns like: UPPER(col) = 'val', LOWER(col) = 'val', etc.
 * Returns 1 if matched, fills idxPath and lookupVal. */
static int find_expr_index_match(const char *tableName, const ExprNode *whereExpr,
                                 char *idxPath, int idxPathSize,
                                 char *lookupVal, int valSize,
                                 char *matchedIdxName, int nameSize)
{
    if (!whereExpr || whereExpr->type != EXPR_CMP_EQ) return 0;

    /* One side must be a literal, the other a function expression */
    const ExprNode *exprSide = NULL;
    const ExprNode *valSide = NULL;

    if (whereExpr->left && (whereExpr->left->type == EXPR_UPPER ||
        whereExpr->left->type == EXPR_LOWER || whereExpr->left->type == EXPR_LENGTH ||
        whereExpr->left->type == EXPR_CONCAT)) {
        exprSide = whereExpr->left;
        valSide = whereExpr->right;
    } else if (whereExpr->right && (whereExpr->right->type == EXPR_UPPER ||
               whereExpr->right->type == EXPR_LOWER || whereExpr->right->type == EXPR_LENGTH ||
               whereExpr->right->type == EXPR_CONCAT)) {
        exprSide = whereExpr->right;
        valSide = whereExpr->left;
    }
    if (!exprSide || !valSide) return 0;

    /* valSide must be a literal */
    if (valSide->type != EXPR_LITERAL_STR && valSide->type != EXPR_LITERAL_INT &&
        valSide->type != EXPR_LITERAL_FLOAT) return 0;

    /* Serialize the expression side */
    char exprBuf[1024];
    expr_serialize(exprSide, exprBuf, sizeof(exprBuf));

    /* Load secondary indexes and check for matching expr_def */
    IndexDesc indexes[16];
    int nIdx = idx_load_secondary(tableName, indexes, 16);
    for (int i = 0; i < nIdx; i++) {
        if (indexes[i].expr_def[0] && strcmp(indexes[i].expr_def, exprBuf) == 0) {
            /* Match found — build index lookup path and value */
            snprintf(idxPath, idxPathSize, "%u:%s:%u:%c",
                     indexes[i].table_id, indexes[i].index_name,
                     indexes[i].root_page, indexes[i].index_type);
            /* Extract literal value */
            if (valSide->type == EXPR_LITERAL_STR)
                strncpy(lookupVal, valSide->val.strval, valSize - 1);
            else if (valSide->type == EXPR_LITERAL_INT)
                snprintf(lookupVal, valSize, "%d", valSide->val.intval);
            else
                snprintf(lookupVal, valSize, "%g", valSide->val.floatval);
            lookupVal[valSize - 1] = '\0';
            if (matchedIdxName) {
                strncpy(matchedIdxName, indexes[i].index_name, nameSize - 1);
                matchedIdxName[nameSize - 1] = '\0';
            }
            return 1;
        }
    }
    return 0;
}

/* Check if query can use streaming (no post-processing needed) */
static int can_stream_results(void)
{
    /* Aggregates in SELECT prevent streaming */
    int i;
    for (i = 0; i < g_expr.selectExprCount; i++) {
        if (!g_expr.selectExprs[i]) continue;
        int t = g_expr.selectExprs[i]->type;
        if (t == EXPR_COUNT_STAR || t == EXPR_COUNT ||
            t == EXPR_SUM || t == EXPR_AVG ||
            t == EXPR_MIN || t == EXPR_MAX)
            return 0;
    }
    if (g_sel.orderByCount > 0 || g_sel.orderByColumn[0] != '\0') return 0;
    if (g_expr.groupByCount > 0) return 0;
    if (g_sel.distinct) return 0;
    if (g_expr.havingExpr) return 0;
    /* Only stream SELECT * — column filtering needs post-processing */
    if (!(g_expr.selectExprCount == 1 && g_expr.selectExprs[0] &&
          g_expr.selectExprs[0]->type == EXPR_STAR))
        return 0;
    return 1;
}

/* Parse a binary tuple record into per-column string values.
 * Returns number of columns parsed. field_ptrs[] will point into thread-local storage. */
static int parse_record_fields(const char *recBuf, int recLen,
                               const ColumnDesc *cols, int ncols,
                               const char *field_ptrs[], int is_null[], int maxCols,
                               const ColumnInfo columns[])
{
    static __thread char s_fields[64][256]; /* thread-local storage for field strings */
    int nullArr[64];
    int nf = tup_extract_fields(recBuf, recLen, cols, ncols,
                                s_fields, nullArr, maxCols < 64 ? maxCols : 64);
    for (int col = 0; col < nf && col < maxCols; col++) {
        if (nullArr[col]) {
            field_ptrs[col] = NULL;
            is_null[col] = 1;
        } else if (columns[col].pg_type_oid == PG_OID_BOOL) {
            if (strncasecmp(s_fields[col], "true", 4) == 0 ||
                strcmp(s_fields[col], "1") == 0 || strcmp(s_fields[col], "t") == 0) {
                field_ptrs[col] = "true";
            } else {
                field_ptrs[col] = "false";
            }
            is_null[col] = 0;
        } else {
            field_ptrs[col] = s_fields[col];
            is_null[col] = 0;
        }
    }
    return nf;
}

/* Populate a ResultSet row from a binary tuple record.
 * Skips dropped columns (is_dropped) when mapping physical → logical. */
static void populate_result_row(ResultSet *rs, int row,
                                const char *recBuf, int recLen,
                                const ColumnDesc *cols, int ncols)
{
    char fields[64][256];
    int nullArr[64];
    int nf = tup_extract_fields(recBuf, recLen, cols, ncols,
                                fields, nullArr, 64);
    int logical = 0;  /* result column index (skips dropped) */
    for (int phys = 0; phys < nf && logical < rs->num_cols; phys++) {
        if (phys < ncols && cols[phys].is_dropped) continue;
        if (nullArr[phys]) {
            result_set_null(rs, row, logical);
        } else if (rs->columns[logical].pg_type_oid == PG_OID_BOOL) {
            if (strncasecmp(fields[phys], "true", 4) == 0 ||
                strcmp(fields[phys], "1") == 0 ||
                strcmp(fields[phys], "t") == 0)
                result_set_field(rs, row, logical, "true");
            else
                result_set_field(rs, row, logical, "false");
        } else {
            result_set_field(rs, row, logical, fields[phys]);
        }
        logical++;
    }
    /* Schema evolution: fill columns added after this record was inserted.
     * Use DEFAULT value if available, otherwise NULL. */
    for (int col = nf; col < rs->num_cols && col < ncols; col++) {
        if (cols[col].default_val[0] != '\0' &&
            strcmp(cols[col].default_val, "\x01NONE\x01") != 0) {
            result_set_field(rs, row, col, cols[col].default_val);
        } else {
            result_set_null(rs, row, col);
        }
    }
}

/* Pre-deserialized virtual column expressions (cached once per SELECT). */
typedef struct {
    ExprNode *exprs[64];   /* NULL for non-virtual columns */
    char      colNames[64][128]; /* column names for expr_evaluate */
    int       ncols;
    int       has_virtual;
} VirtualColCache;

static void vcc_init(VirtualColCache *vc, const ColumnDesc *cols, int ncols)
{
    memset(vc, 0, sizeof(*vc));
    vc->ncols = ncols < 64 ? ncols : 64;
    for (int i = 0; i < vc->ncols; i++) {
        strncpy(vc->colNames[i], cols[i].col_name, 127);
        vc->colNames[i][127] = '\0';
        if (cols[i].generated_mode == GENMODE_VIRTUAL && cols[i].generated_expr[0]) {
            vc->exprs[i] = expr_deserialize(cols[i].generated_expr);
            if (vc->exprs[i]) vc->has_virtual = 1;
        }
    }
}

/* Evaluate VIRTUAL generated columns in a binary tuple record (in-place).
 * Replaces NULL placeholders with computed values.
 * Caller must check vc->has_virtual before calling in hot loops.
 * Returns the new record length. */
static int eval_virtual_columns(char *recBuf, int recBufSize,
                                uint32_t table_id,
                                const ColumnDesc *cols, int ncols,
                                const VirtualColCache *vc)
{
    int recLen = tup_record_len(recBuf, recBufSize);
    if (recLen <= 0) return recLen;

    char colVals[64][256];
    int nf = tup_extract_fields_nm(recBuf, recLen, cols, ncols,
                                    colVals, NULL, 64);
    if (nf <= 0) return recLen;

    int changed = 0;
    for (int i = 0; i < nf && i < vc->ncols; i++) {
        if (vc->exprs[i]) {
            char result[256];
            if (expr_evaluate(vc->exprs[i],
                              (const char (*)[128])vc->colNames,
                              (const char (*)[256])colVals,
                              nf, result, sizeof(result))) {
                strncpy(colVals[i], result, 255);
                colVals[i][255] = '\0';
                changed = 1;
            }
        }
    }

    if (changed) {
        int newLen = tup_build_from_fields((const char (*)[256])colVals, nf,
                                            table_id, cols, ncols,
                                            recBuf, recBufSize);
        return newLen;
    }
    return recLen;
}

/* ----------------------------------------------------------------
 *  Fast-path SELECT: skip yyparse for simple PK/index lookups
 *
 *  Detects: SELECT <cols> FROM <table> WHERE <col> = <value>
 *  Extracts components via string matching, resolves table from catalog,
 *  checks if WHERE column is PK, does direct bt2_search + heap read.
 *  Returns 1 if handled, 0 if not a fast-path candidate.
 * ---------------------------------------------------------------- */
static int try_fast_select(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    /* Quick reject: must contain FROM and WHERE with simple = */
    const char *from_pos = NULL, *where_pos = NULL;
    {
        const char *p = sql;
        while (*p) {
            if (!from_pos && strncasecmp(p, "FROM", 4) == 0 &&
                (p == sql || !isalnum((unsigned char)*(p-1))) &&
                isspace((unsigned char)p[4]))
                from_pos = p;
            if (!where_pos && strncasecmp(p, "WHERE", 5) == 0 &&
                (p == sql || !isalnum((unsigned char)*(p-1))) &&
                isspace((unsigned char)p[5]))
                where_pos = p;
            p++;
        }
    }
    if (!from_pos || !where_pos) return 0;

    /* Parse column list: SELECT * or SELECT col1, col2, ... */
    int has_star = 0;
    char fast_cols[16][128];
    int fast_ncols = 0;
    {
        const char *sel = sql;
        while (*sel && isspace((unsigned char)*sel)) sel++;
        sel += 6; /* skip "SELECT" */
        while (*sel && isspace((unsigned char)*sel)) sel++;
        const char *scan = sel;
        while (scan < from_pos) {
            if (*scan == '*') { has_star = 1; break; }
            scan++;
        }
        if (!has_star) {
            /* Parse comma-separated column names */
            const char *p = sel;
            while (p < from_pos && fast_ncols < 16) {
                while (p < from_pos && isspace((unsigned char)*p)) p++;
                int ci = 0;
                while (p < from_pos && *p != ',' &&
                       !isspace((unsigned char)*p) && ci < 127)
                    fast_cols[fast_ncols][ci++] = *p++;
                fast_cols[fast_ncols][ci] = '\0';
                if (ci > 0) fast_ncols++;
                while (p < from_pos && (isspace((unsigned char)*p) || *p == ',')) p++;
            }
            /* Reject if any "column" contains AS, (, ), or other complex syntax */
            for (int i = 0; i < fast_ncols; i++) {
                if (strchr(fast_cols[i], '(') || strchr(fast_cols[i], ')') ||
                    strcasecmp(fast_cols[i], "AS") == 0 ||
                    strcasecmp(fast_cols[i], "DISTINCT") == 0)
                    return 0;  /* too complex for fast-path */
            }
            if (fast_ncols == 0) return 0;
        }
    }

    /* Reject: GROUP BY, ORDER BY, HAVING, JOIN, LIMIT, OFFSET, subqueries.
     * Uses word-boundary checks to avoid matching inside identifiers (e.g. "orders").
     * Skips single-quoted string literals to avoid false positives. */
    {
        const char *p = where_pos + 5; /* scan only after WHERE — FROM/table already parsed */
        while (*p) {
            if (*p == '\'') { /* skip string literal */
                p++;
                while (*p && *p != '\'') p++;
                if (*p) p++;
                continue;
            }
            if (*p == '(') return 0;
            /* Check keywords with word boundary: prev char not alnum/_, next char not alnum/_ */
            int at_word_start = (p == sql || (!isalnum((unsigned char)*(p-1)) && *(p-1) != '_'));
            if (at_word_start) {
                struct { const char *kw; int len; } kws[] = {
                    {"GROUP",5}, {"ORDER",5}, {"HAVING",6}, {"JOIN",4}, {"LIMIT",5}, {"OFFSET",6}, {NULL,0}
                };
                for (int k = 0; kws[k].kw; k++) {
                    if (strncasecmp(p, kws[k].kw, kws[k].len) == 0) {
                        char after = p[kws[k].len];
                        if (!isalnum((unsigned char)after) && after != '_')
                            return 0; /* real keyword, not part of identifier */
                    }
                }
            }
            p++;
        }
    }

    /* Extract table name from "FROM <table>" */
    char tblName[256];
    {
        const char *t = from_pos + 4;
        while (*t && isspace((unsigned char)*t)) t++;
        int ti = 0;
        while (*t && (isalnum((unsigned char)*t) || *t == '_') && ti < 255)
            tblName[ti++] = *t++;
        tblName[ti] = '\0';
        if (!tblName[0]) return 0;
    }

    /* Extract "WHERE col = value" — only simple equality */
    char whereCol[128], whereVal[256];
    {
        const char *w = where_pos + 5;
        while (*w && isspace((unsigned char)*w)) w++;
        int ci = 0;
        while (*w && (isalnum((unsigned char)*w) || *w == '_') && ci < 127)
            whereCol[ci++] = *w++;
        whereCol[ci] = '\0';
        while (*w && isspace((unsigned char)*w)) w++;
        if (*w != '=') return 0;  /* only = operator */
        w++;
        while (*w && isspace((unsigned char)*w)) w++;
        int vi = 0;
        if (*w == '\'') {
            w++;
            /* Handle SQL escaped quotes: '' → ' */
            while (*w && vi < 255) {
                if (*w == '\'') {
                    if (*(w+1) == '\'') { whereVal[vi++] = '\''; w += 2; }
                    else break;
                } else {
                    whereVal[vi++] = *w++;
                }
            }
        } else {
            while (*w && !isspace((unsigned char)*w) && *w != ';' && vi < 255)
                whereVal[vi++] = *w++;
        }
        whereVal[vi] = '\0';
        if (!whereCol[0] || !whereVal[0]) return 0;
        /* Reject if there's AND/OR after the value (with word boundary) */
        while (*w && (*w == '\'' || isspace((unsigned char)*w) || *w == ';')) w++;
        if (*w && strncasecmp(w, "AND", 3) == 0 &&
            !isalnum((unsigned char)w[3]) && w[3] != '_') return 0;
        if (*w && strncasecmp(w, "OR", 2) == 0 &&
            !isalnum((unsigned char)w[2]) && w[2] != '_') return 0;
    }

    /* Acquire read lock for data access — protects against concurrent DML
     * modifying B+ tree structure or heap pages while we read them. */
    rwlock_rdlock(&g_parse_lock);

    /* Resolve table */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tblName, &td, cols, &ncols) < 0) {
        rwlock_rdunlock(&g_parse_lock);
        return 0;
    }

    /* Reject tables with VIRTUAL generated columns — fast-path can't evaluate them */
    for (int i = 0; i < ncols; i++) {
        if (cols[i].generated_mode == GENMODE_VIRTUAL) {
            rwlock_rdunlock(&g_parse_lock);
            return 0;
        }
    }

    /* Check if WHERE column is the primary key */
    int is_pk = 0, pk_col_idx = -1;
    for (int i = 0; i < ncols; i++) {
        if (cols[i].is_pk && strcasecmp(cols[i].col_name, whereCol) == 0) {
            is_pk = 1;
            pk_col_idx = i;
            break;
        }
    }

    char secIdxPath[1024] = "";
    if (!is_pk) {
        /* Check secondary index */
        if (!index_exists(tblName, whereCol, secIdxPath, sizeof(secIdxPath))) {
            rwlock_rdunlock(&g_parse_lock);
            return 0;  /* no index — fall through to parser for full scan */
        }
    }

    /* ── Fast-path execution ── */
    rs->is_select = 1;

    /* Set up column metadata */
    {
        unsigned int tableOid = 5381;
        { const char *p = tblName; while (*p) { tableOid = ((tableOid << 5) + tableOid) + (unsigned char)*p++; } }
        tableOid = 16384 + (tableOid % 100000);

        if (has_star) {
            /* SELECT * — add all non-dropped columns */
            for (int i = 0; i < ncols; i++) {
                if (cols[i].is_dropped) continue;
                int oid = type_encoding_to_pg_oid(cols[i].type_code);
                result_add_column(rs, cols[i].col_name, oid);
                rs->columns[rs->num_cols - 1].table_oid = (int)tableOid;
                rs->columns[rs->num_cols - 1].attnum = i + 1;
                int family = cols[i].type_code / 10000;
                int size = cols[i].type_code % 10000;
                if ((family == 12 || family == 13) && size > 0)
                    rs->columns[rs->num_cols - 1].type_modifier = size + 4;
            }
        } else {
            /* SELECT col1, col2, ... — add only requested columns */
            for (int fi = 0; fi < fast_ncols; fi++) {
                for (int i = 0; i < ncols; i++) {
                    if (strcasecmp(cols[i].col_name, fast_cols[fi]) == 0) {
                        int oid = type_encoding_to_pg_oid(cols[i].type_code);
                        result_add_column(rs, cols[i].col_name, oid);
                        rs->columns[rs->num_cols - 1].table_oid = (int)tableOid;
                        rs->columns[rs->num_cols - 1].attnum = i + 1;
                        int family = cols[i].type_code / 10000;
                        int size = cols[i].type_code % 10000;
                        if ((family == 12 || family == 13) && size > 0)
                            rs->columns[rs->num_cols - 1].type_modifier = size + 4;
                        break;
                    }
                }
            }
        }
    }

    /* Take MVCC snapshot */
    Snapshot snap;
    memset(&snap, 0, sizeof(snap));
    if (ctx) {
        if (ctx->isolation_level >= 2 && ctx->snapshot_valid) {
            snap = ctx->snapshot;
        } else {
            mvcc_snapshot_take(&snap);
            snap.my_xid = ctx->tx_xid;
        }
    }

    /* PK lookup */
    BTree2 pk_tree = tapi_pk_tree(&td);

    if (is_pk) {
        RowID rid;
        if (bt2_search(&pk_tree, whereVal, &rid) == 0) {
            char recBuf[RECORD_BUF_SIZE];
            int recLen = tapi_heap_read(rid, recBuf, sizeof(recBuf));
            /* Follow HOT chain if PK points to an old HOT_UPDATED version */
            if (recLen > 0 && !mvcc_is_visible(recBuf, recLen, &snap) &&
                tup_is_hot_updated(recBuf, recLen)) {
                RowID hot_rid;
                int hot_len = tapi_follow_hot_chain(rid, recBuf, recLen,
                                                     &snap, recBuf,
                                                     sizeof(recBuf), &hot_rid);
                if (hot_len > 0) recLen = hot_len;
            }
            if (recLen > 0 && mvcc_is_visible(recBuf, recLen, &snap)) {
                /* FOR UPDATE/SHARE: acquire row lock on PK lookup */
                if (g_sel.forUpdate && ctx && ctx->tx_xid > 0) {
                    extern int lock_row_acquire(uint32_t, const char *, uint32_t, int);
                    int lm = (g_sel.forUpdate == 1) ? 2 : 1;
                    if (lock_row_acquire(td.table_id, whereVal, ctx->tx_xid, lm) != 0) {
                        result_set_error(rs, "55P03", "could not obtain lock on row");
                        rwlock_rdunlock(&g_parse_lock);
                        return 0;
                    }
                }
                int row = result_add_row(rs);
                if (row >= 0) {
                    if (has_star) {
                        populate_result_row(rs, row, recBuf, recLen, cols, ncols);
                    } else {
                        /* Column-filtered: extract all then map to selected */
                        char fields[64][256];
                        int nullArr[64];
                        int nf = tup_extract_fields(recBuf, recLen, cols, ncols,
                                                     fields, nullArr, 64);
                        for (int fi = 0; fi < fast_ncols && fi < rs->num_cols; fi++) {
                            for (int ci = 0; ci < ncols && ci < nf; ci++) {
                                if (strcasecmp(cols[ci].col_name, fast_cols[fi]) == 0) {
                                    if (nullArr[ci])
                                        result_set_null(rs, row, fi);
                                    else
                                        result_set_field(rs, row, fi, fields[ci]);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        /* Secondary index lookup — reuse secIdxPath from earlier check */
        char matchPKs[256][256];
        int nMatch = btree_search(secIdxPath, whereVal, matchPKs, 256);
        for (int m = 0; m < nMatch; m++) {
            RowID rid;
            if (bt2_search(&pk_tree, matchPKs[m], &rid) != 0) continue;
            char recBuf[RECORD_BUF_SIZE];
            int recLen = tapi_heap_read(rid, recBuf, sizeof(recBuf));
            if (recLen <= 0) continue;
            /* HOT chain following for secondary index path */
            if (!mvcc_is_visible(recBuf, recLen, &snap) &&
                tup_is_hot_updated(recBuf, recLen)) {
                RowID hot_rid;
                int hot_len = tapi_follow_hot_chain(rid, recBuf, recLen,
                                                     &snap, recBuf,
                                                     sizeof(recBuf), &hot_rid);
                if (hot_len > 0) recLen = hot_len;
            }
            if (!mvcc_is_visible(recBuf, recLen, &snap)) continue;
            /* FOR UPDATE/SHARE: acquire row lock */
            if (g_sel.forUpdate && ctx && ctx->tx_xid > 0) {
                extern int lock_row_acquire(uint32_t, const char *, uint32_t, int);
                int lm = (g_sel.forUpdate == 1) ? 2 : 1;
                if (lock_row_acquire(td.table_id, matchPKs[m], ctx->tx_xid, lm) != 0) {
                    result_set_error(rs, "55P03", "could not obtain lock on row");
                    rwlock_rdunlock(&g_parse_lock);
                    return 0;
                }
            }
            int row = result_add_row(rs);
            if (row < 0) break;
            populate_result_row(rs, row, recBuf, recLen, cols, ncols);
        }
    }

    rwlock_rdunlock(&g_parse_lock);

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);
    return 1;  /* handled */
}

/* ----------------------------------------------------------------
 *  Collect SELECT results into ResultSet
 * ---------------------------------------------------------------- */
static void collect_select_results(const char *tableName, ResultSet *rs,
                                   const Snapshot *snap,
                                   int forUpdate, uint32_t lock_xid)
{
    int count = 0;
    /* Gap lock tracking: first and last PK key seen during scan */
    char gap_first_key[256] = "";
    char gap_last_key[256] = "";

    rs->is_select = 1;

    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc allCols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(tableName, &td, allCols, &ncols) < 0) {
        result_set_error(rs, "42P01", "relation does not exist");
        return;
    }

    /* Set up column metadata from catalog */
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

        int colIdx;
        for (colIdx = 0; colIdx < ncols; colIdx++) {
            if (allCols[colIdx].is_dropped) continue;
            int oid = type_encoding_to_pg_oid(allCols[colIdx].type_code);
            result_add_column(rs, allCols[colIdx].col_name, oid);
            rs->columns[rs->num_cols - 1].table_oid = (int)tableOid;
            rs->columns[rs->num_cols - 1].attnum = colIdx + 1;
            /* Set type modifier for varchar/char */
            int family = allCols[colIdx].type_code / 10000;
            int size = allCols[colIdx].type_code % 10000;
            if ((family == 12 || family == 13) && size > 0)
                rs->columns[rs->num_cols - 1].type_modifier = size + 4;
        }
    }

    BTree2 pk_tree = tapi_pk_tree(&td);

    /* Pre-deserialize VIRTUAL generated column expressions (once per SELECT) */
    VirtualColCache vcc;
    vcc_init(&vcc, allCols, ncols);

    /* --- Try PK direct lookup or index-accelerated lookup --- */
    int used_index = 0;
    if (g_expr.whereExpr) {
        char eq_col[128], eq_val[256];
        if (extract_eq_condition(g_expr.whereExpr, eq_col, sizeof(eq_col),
                                 eq_val, sizeof(eq_val))) {
            /* Check if eq_col is the primary key */
            int is_pk = 0;
            {
                int pkIndices[16];
                int nPK = tapi_get_pk_indices(allCols, ncols, pkIndices, 16);
                if (nPK == 1 && pkIndices[0] < ncols) {
                    if (strcasecmp(allCols[pkIndices[0]].col_name, eq_col) == 0)
                        is_pk = 1;
                }
            }

            if (is_pk) {
                /* PK B+ tree lookup — O(log n) */
                RowID rid;
                if (bt2_search(&pk_tree, eq_val, &rid) == 0) {
                    char recBuf[RECORD_BUF_SIZE];
                    int recLen;
                    if ((recLen = tapi_heap_read(rid, recBuf, sizeof(recBuf))) > 0) {
                        /* Follow HOT chain if PK points to old HOT_UPDATED version */
                        if (snap && !mvcc_is_visible(recBuf, recLen, snap) &&
                            tup_is_hot_updated(recBuf, recLen)) {
                            RowID hot_rid;
                            int hot_len = tapi_follow_hot_chain(rid, recBuf, recLen,
                                                                 snap, recBuf,
                                                                 sizeof(recBuf), &hot_rid);
                            if (hot_len > 0) recLen = hot_len;
                        }
                        /* MVCC visibility check */
                        if (!snap || mvcc_is_visible(recBuf, recLen, snap)) {
                            if (vcc.has_virtual) recLen = eval_virtual_columns(recBuf, sizeof(recBuf), td.table_id, allCols, ncols, &vcc);
                            int row = result_add_row(rs);
                            if (row >= 0) {
                                populate_result_row(rs, row, recBuf, recLen, allCols, ncols);
                                count++;
                            }
                        }
                    }
                }
                used_index = 1;
            }

            /* If not PK, try B-tree nonclustered index (catalog-based) */
            char idxPath[1024];
            if (!used_index && index_exists(tableName, eq_col, idxPath, sizeof(idxPath))) {
                char matchPKs[256][256];
                int nMatch = btree_search(idxPath, eq_val, matchPKs, 256);
                int m;
                for (m = 0; m < nMatch; m++) {
                    RowID rid;
                    if (bt2_search(&pk_tree, matchPKs[m], &rid) != 0)
                        continue;
                    char recBuf[RECORD_BUF_SIZE];
                    int recLen;
                    if ((recLen = tapi_heap_read(rid, recBuf, sizeof(recBuf))) <= 0)
                        continue;
                    /* HOT chain following for secondary index path */
                    if (snap && !mvcc_is_visible(recBuf, recLen, snap) &&
                        tup_is_hot_updated(recBuf, recLen)) {
                        RowID hot_rid;
                        int hot_len = tapi_follow_hot_chain(rid, recBuf, recLen,
                                                             snap, recBuf,
                                                             sizeof(recBuf), &hot_rid);
                        if (hot_len > 0) recLen = hot_len;
                    }
                    if (snap && !mvcc_is_visible(recBuf, recLen, snap))
                        continue;
                    if (vcc.has_virtual) recLen = eval_virtual_columns(recBuf, sizeof(recBuf), td.table_id, allCols, ncols, &vcc);

                    int row = result_add_row(rs);
                    if (row < 0) break;

                    populate_result_row(rs, row, recBuf, recLen, allCols, ncols);
                    count++;
                }
                used_index = 1;
            }
        }

        /* Try expression index: UPPER(col) = 'val', LOWER(col) = 'val', etc. */
        if (!used_index) {
            char exprIdxPath[1024], exprLookupVal[256], exprIdxName[256];
            if (find_expr_index_match(tableName, g_expr.whereExpr,
                    exprIdxPath, sizeof(exprIdxPath),
                    exprLookupVal, sizeof(exprLookupVal),
                    exprIdxName, sizeof(exprIdxName))) {
                char matchPKs[256][256];
                int nMatch = btree_search(exprIdxPath, exprLookupVal, matchPKs, 256);
                int m;
                for (m = 0; m < nMatch; m++) {
                    RowID rid;
                    if (bt2_search(&pk_tree, matchPKs[m], &rid) != 0)
                        continue;
                    char recBuf[RECORD_BUF_SIZE];
                    int recLen;
                    if ((recLen = tapi_heap_read(rid, recBuf, sizeof(recBuf))) <= 0)
                        continue;
                    if (snap && !mvcc_is_visible(recBuf, recLen, snap))
                        continue;
                    if (vcc.has_virtual) recLen = eval_virtual_columns(recBuf, sizeof(recBuf), td.table_id, allCols, ncols, &vcc);

                    int row = result_add_row(rs);
                    if (row < 0) break;

                    populate_result_row(rs, row, recBuf, recLen, allCols, ncols);
                    count++;
                }
                used_index = 1;
            }
        }

        /* Try composite index: extract multiple col=val from AND chain */
        if (!used_index && g_expr.whereExpr && g_expr.whereExpr->type == EXPR_AND) {
            EqCondition conds[16];
            int numConds = extract_and_eq_conditions(g_expr.whereExpr, conds, 16);
            if (numConds >= 2) {
                char compIdxPath[1024], compKey[1024], compIdxName[256];
                if (find_composite_index_match(tableName, conds, numConds,
                        compIdxPath, sizeof(compIdxPath),
                        compKey, sizeof(compKey),
                        compIdxName, sizeof(compIdxName))) {
                    char matchPKs[256][256];
                    int nMatch = btree_search(compIdxPath, compKey, matchPKs, 256);
                    int m;
                    for (m = 0; m < nMatch; m++) {
                        RowID rid;
                        if (bt2_search(&pk_tree, matchPKs[m], &rid) != 0)
                            continue;
                        char recBuf[RECORD_BUF_SIZE];
                        int recLen;
                        if ((recLen = tapi_heap_read(rid, recBuf, sizeof(recBuf))) <= 0)
                            continue;
                        if (snap && !mvcc_is_visible(recBuf, recLen, snap))
                            continue;
                        if (vcc.has_virtual) recLen = eval_virtual_columns(recBuf, sizeof(recBuf), td.table_id, allCols, ncols, &vcc);

                        int row = result_add_row(rs);
                        if (row < 0) break;

                        populate_result_row(rs, row, recBuf, recLen, allCols, ncols);
                        count++;
                    }
                    used_index = 1;
                }
            }
        }
    }

    /* --- Full table scan via PK B+ tree cursor --- */
    if (!used_index) {
        int streaming = (rs->stream_conn != NULL && can_stream_results());

        /* Precompute WHERE / LIMIT / OFFSET for inline evaluation during streaming */
        char streamColNames[MAX_COLUMNS][128];
        int limitVal = -1, offsetVal = 0, skipped = 0;
        if (streaming) {
            int c;
            for (c = 0; c < rs->num_cols && c < MAX_COLUMNS; c++) {
                strncpy(streamColNames[c], rs->columns[c].name, 127);
                streamColNames[c][127] = '\0';
            }
            if (g_expr.limitExpr) {
                char buf[64];
                if (expr_evaluate(g_expr.limitExpr, NULL, NULL, 0, buf, sizeof(buf)))
                    limitVal = atoi(buf);
            }
            if (g_expr.offsetExpr) {
                char buf[64];
                if (expr_evaluate(g_expr.offsetExpr, NULL, NULL, 0, buf, sizeof(buf)))
                    offsetVal = atoi(buf);
            }
            /* Send RowDescription header before first row */
            pg_send_row_description((conn_t *)rs->stream_conn, rs);
        }

        TableScanCursor cursor;
        char keyBuf[256];
        char recBuf[RECORD_BUF_SIZE];

        if (tapi_scan_begin(&td, &cursor) == 0) {
            while (tapi_scan_next_mvcc(&cursor, keyBuf, recBuf, sizeof(recBuf), snap) == 0) {
                /* Check query cancellation (timeout or CancelRequest) */
                {
                    extern __thread volatile int g_query_cancelled;
                    if (g_query_cancelled) {
                        result_set_error(rs, "57014", "canceling statement due to statement timeout");
                        break;
                    }
                }

                int recLen = tup_record_len(recBuf, sizeof(recBuf));
                if (recLen <= 0) continue;

                /* FOR UPDATE/SHARE: acquire row lock before including in result */
                if (forUpdate && lock_xid > 0) {
                    extern int lock_row_acquire(uint32_t, const char *, uint32_t, int);
                    int lock_mode = (forUpdate == 1) ? 2 /*LOCK_EXCLUSIVE*/ : 1 /*LOCK_SHARED*/;
                    if (lock_row_acquire(td.table_id, keyBuf, lock_xid, lock_mode) != 0) {
                        result_set_error(rs, "55P03",
                            "could not obtain lock on row");
                        return;
                    }
                }

                /* Conflict Guard + Gap Lock: for SERIALIZABLE TX */
                if (lock_xid > 0 && !forUpdate) {
                    extern void cg_record_read(uint32_t, uint32_t, const char *);
                    cg_record_read(lock_xid, td.table_id, keyBuf);
                    /* Track scan range for gap lock */
                    if (gap_first_key[0] == '\0')
                        strncpy(gap_first_key, keyBuf, 255);
                    strncpy(gap_last_key, keyBuf, 255);
                }

                if (vcc.has_virtual) recLen = eval_virtual_columns(recBuf, sizeof(recBuf), td.table_id, allCols, ncols, &vcc);
                if (streaming) {
                    /* --- Streaming path: parse, filter, send directly --- */
                    const char *fieldPtrs[MAX_COLUMNS];
                    int  fieldNulls[MAX_COLUMNS];
                    memset(fieldPtrs, 0, sizeof(fieldPtrs));
                    memset(fieldNulls, 0, sizeof(fieldNulls));
                    parse_record_fields(recBuf, recLen, allCols, ncols,
                                        fieldPtrs, fieldNulls, rs->num_cols,
                                        rs->columns);

                    /* Apply WHERE inline */
                    if (g_expr.whereExpr) {
                        char colValues[MAX_COLUMNS][256];
                        int c;
                        for (c = 0; c < rs->num_cols && c < MAX_COLUMNS; c++) {
                            if (fieldNulls[c])
                                strcpy(colValues[c], "\x01NULL\x01");
                            else {
                                strncpy(colValues[c], fieldPtrs[c] ? fieldPtrs[c] : "", 255);
                                colValues[c][255] = '\0';
                            }
                        }
                        char whereResult[512];
                        int ok = expr_evaluate(g_expr.whereExpr,
                                               (const char (*)[128])streamColNames,
                                               (const char (*)[256])colValues,
                                               rs->num_cols,
                                               whereResult, sizeof(whereResult));
                        int keep = 0;
                        if (ok) {
                            if (strcmp(whereResult, "t") == 0 ||
                                strcasecmp(whereResult, "true") == 0 ||
                                strcmp(whereResult, "1") == 0)
                                keep = 1;
                            else {
                                double v = strtod(whereResult, NULL);
                                if (v != 0.0) keep = 1;
                            }
                        }
                        if (!keep) continue;
                    }

                    /* Apply OFFSET: skip first N matching rows */
                    if (offsetVal > 0 && skipped < offsetVal) {
                        skipped++;
                        continue;
                    }

                    /* Apply LIMIT: stop after N rows sent */
                    if (limitVal >= 0 && count >= limitVal)
                        break;

                    /* Send DataRow directly to client */
                    pg_send_data_row((conn_t *)rs->stream_conn,
                                    fieldPtrs, fieldNulls, rs->num_cols);
                    count++;
                } else {
                    /* --- Buffered path: store in ResultSet --- */
                    int row = result_add_row(rs);
                    if (row < 0) break;

                    populate_result_row(rs, row, recBuf, recLen, allCols, ncols);
                    count++;
                }
            }
        }

        if (streaming) {
            /* Mark as streamed — caller must not send result set again */
            rs->streamed_rows = count;
            snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", count);
            pg_send_command_complete((conn_t *)rs->stream_conn, rs->command_tag);
            return;  /* skip all post-processing */
        }
    }

    /* Gap lock: after scan completes, lock the scanned range to prevent
     * phantom inserts. Covers (first_key, last_key] + gap before first
     * and after last (using "" for infinity). */
    if (lock_xid > 0 && !forUpdate && gap_first_key[0]) {
        extern void lock_gap_acquire(uint32_t, const char *, const char *, uint32_t);
        lock_gap_acquire(td.table_id, "", gap_last_key, lock_xid);
        lock_gap_acquire(td.table_id, gap_last_key, "", lock_xid);
    }

    /* Predicate lock: record WHERE expression for UPDATE-based phantom detection.
     * When another TX updates a row to match this predicate → conflict. */
    if (lock_xid > 0 && !forUpdate && g_expr.whereExpr) {
        extern void cg_record_predicate(uint32_t, uint32_t, const char *,
                                         const char *, int, int);
        char serialized_buf[1024];
        int ser_len = expr_serialize(g_expr.whereExpr, serialized_buf,
                                      sizeof(serialized_buf));
        if (ser_len > 0) {
            char *serialized = serialized_buf;
            char predColNames[64][128];
            int predNCols = 0;
            for (int i = 0; i < ncols && i < 64; i++) {
                strncpy(predColNames[i], allCols[i].col_name, 127);
                predColNames[i][127] = '\0';
                predNCols++;
            }
            cg_record_predicate(lock_xid, td.table_id, serialized,
                                 (const char *)predColNames, 128, predNCols);
        }
    }

    /* NOTE: ORDER BY sort is deferred to end of function, after all
     * expression evaluation, GROUP BY, and DISTINCT processing. */

    /* --- WHERE filtering using g_expr.whereExpr --- */
    if (g_expr.whereExpr && rs->num_rows > 0 && !used_index) {
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
                    strncpy(colValues[c], rs->rows[r].fields[c] ? rs->rows[r].fields[c] : "", 255);
                    colValues[c][255] = '\0';
                }
            }

            char result[512];
            int ok = expr_evaluate(g_expr.whereExpr,
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
                    row_move(&rs->rows[dst], &rs->rows[r]);
                dst++;
            } else {
                row_clear(&rs->rows[r]);
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
        for (s = 0; s < g_expr.selectExprCount; s++) {
            if (expr_is_aggregate(g_expr.selectExprs[s])) {
                has_aggregate = 1;
                break;
            }
        }
        if ((has_aggregate || g_expr.groupByCount > 0) && rs->num_cols > 0) {
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
                        const char *_f = rs->rows[rowIdx].fields[_c]; \
                        strncpy((colVals)[_c], _f ? _f : "", 255); \
                        (colVals)[_c][255] = '\0'; \
                    } \
                } \
            } while(0)

            /* Determine group membership:
             * groups[r] = group index for row r
             * groupCount = total number of distinct groups
             * groupFirstRow[g] = first row index of group g  */
            int *groups = (int *)calloc(origNumRows > 0 ? origNumRows : 1, sizeof(int));
            int groupCount = 0;
            int *groupFirstRow = (int *)calloc(origNumRows > 0 ? origNumRows : 1, sizeof(int));
            int *groupSize = (int *)calloc(origNumRows > 0 ? origNumRows : 1, sizeof(int));

            if (g_expr.groupByCount > 0) {
                /* Compute GROUP BY key for each row and assign group index */
                /* groupKeys[g] is a concatenated string key for each group */
                /* Dynamically allocate group keys — one per potential group (worst case = origNumRows) */
                int gkCap = origNumRows > 0 ? origNumRows : 1;
                char (*groupKeys)[1024] = (char (*)[1024])calloc(gkCap, 1024);
                int r;
                for (r = 0; r < origNumRows; r++) {
                    char colValues[MAX_COLUMNS][256];
                    BUILD_COL_VALUES(r, colValues);

                    /* Build key from GROUP BY expressions */
                    char key[1024];
                    key[0] = '\0';
                    int g;
                    for (g = 0; g < g_expr.groupByCount; g++) {
                        char part[MAX_FIELD_LEN];
                        if (expr_evaluate(g_expr.groupByExprs[g],
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
                free(groupKeys);
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
            rs->num_cols = g_expr.selectExprCount;
            for (s = 0; s < g_expr.selectExprCount; s++) {
                memset(&rs->columns[s], 0, sizeof(ColumnInfo));
                if (g_expr.selectExprs[s]) {
                    strncpy(rs->columns[s].name, g_expr.selectExprs[s]->display,
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
            Row *groupRows = (Row *)calloc(groupCount > 0 ? groupCount : 1, sizeof(Row));
            int gi;
            for (gi = 0; gi < groupCount; gi++) {
                Row aggRow;
                memset(&aggRow, 0, sizeof(aggRow));
                aggRow.num_fields = g_expr.selectExprCount;

                for (s = 0; s < g_expr.selectExprCount; s++) {
                    if (!g_expr.selectExprs[s]) {
                        row_set_null(&aggRow, s);
                        continue;
                    }
                    if (g_expr.selectExprs[s]->type == EXPR_COUNT_STAR) {
                        int cnt = 0, r;
                        for (r = 0; r < origNumRows; r++)
                            if (groups[r] == gi) cnt++;
                        char countStr[64];
                        snprintf(countStr, sizeof(countStr), "%d", cnt);
                        row_set(&aggRow, s, countStr);
                    } else if (g_expr.selectExprs[s]->type == EXPR_COUNT) {
                        int cnt = 0, r;
                        for (r = 0; r < origNumRows; r++) {
                            if (groups[r] != gi) continue;
                            char colValues[MAX_COLUMNS][256];
                            BUILD_COL_VALUES(r, colValues);
                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_expr.selectExprs[s]->left,
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result)))
                                cnt++;
                        }
                        char countStr[64];
                        snprintf(countStr, sizeof(countStr), "%d", cnt);
                        row_set(&aggRow, s, countStr);
                    } else if (g_expr.selectExprs[s]->type == EXPR_SUM ||
                               g_expr.selectExprs[s]->type == EXPR_AVG) {
                        double total = 0.0;
                        int cnt = 0, r;
                        for (r = 0; r < origNumRows; r++) {
                            if (groups[r] != gi) continue;
                            char colValues[MAX_COLUMNS][256];
                            BUILD_COL_VALUES(r, colValues);
                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_expr.selectExprs[s]->left,
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result))) {
                                total += strtod(result, NULL);
                                cnt++;
                            }
                        }
                        if (cnt == 0) {
                            row_set_null(&aggRow, s);
                        } else if (g_expr.selectExprs[s]->type == EXPR_AVG) {
                            double avg = total / cnt;
                            char avgStr[64];
                            if (avg == (double)(long long)avg && avg > -1e15 && avg < 1e15)
                                snprintf(avgStr, sizeof(avgStr), "%lld", (long long)avg);
                            else
                                snprintf(avgStr, sizeof(avgStr), "%.4f", avg);
                            row_set(&aggRow, s, avgStr);
                            rs->columns[s].pg_type_oid = PG_OID_FLOAT8;
                        } else {
                            char sumStr[64];
                            if (total == (double)(long long)total && total > -1e15 && total < 1e15)
                                snprintf(sumStr, sizeof(sumStr), "%lld", (long long)total);
                            else
                                snprintf(sumStr, sizeof(sumStr), "%g", total);
                            row_set(&aggRow, s, sumStr);
                        }
                    } else if (g_expr.selectExprs[s]->type == EXPR_MIN ||
                               g_expr.selectExprs[s]->type == EXPR_MAX) {
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
                            if (expr_evaluate(g_expr.selectExprs[s]->left,
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
                                        if (g_expr.selectExprs[s]->type == EXPR_MIN)
                                            take = (numval < best_num);
                                        else
                                            take = (numval > best_num);
                                    } else {
                                        int cmp = strcmp(result, best_str);
                                        if (g_expr.selectExprs[s]->type == EXPR_MIN)
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
                            row_set_null(&aggRow, s);
                        } else {
                            row_set(&aggRow, s, best_str);
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
                            if (expr_evaluate(g_expr.selectExprs[s],
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result)) && strcmp(result, "\x01NULL\x01") != 0) {
                                row_set(&aggRow, s, result);
                                rs->columns[s].pg_type_oid = PG_OID_VARCHAR;
                                rs->columns[s].type_len = -1;
                            } else {
                                row_set_null(&aggRow, s);
                            }
                        } else {
                            row_set_null(&aggRow, s);
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
                if (g_expr.havingExpr) {
                    /* Build combined context: select columns first, then original cols,
                     * then any HAVING aggregates not already in SELECT */
                    char havCols[MAX_COLUMNS][128];
                    char havVals[MAX_COLUMNS][256];
                    int havColCount = 0;
                    int hc;

                    /* First: add SELECT expression results (aggregates + group cols) */
                    for (hc = 0; hc < g_expr.selectExprCount && havColCount < MAX_COLUMNS; hc++) {
                        strncpy(havCols[havColCount], rs->columns[hc].name, 127);
                        havCols[havColCount][127] = '\0';
                        if (aggRow.is_null[hc] || !aggRow.fields[hc])
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
                        expr_collect_aggregates(g_expr.havingExpr, havAggs, &havAggCount, 16);
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
                        else if (origNumRows > 0 && rs->rows[firstRow].fields[hc]) {
                            strncpy(havVals[havColCount], rs->rows[firstRow].fields[hc], 255);
                            havVals[havColCount][255] = '\0';
                        } else {
                            strcpy(havVals[havColCount], NULL_MARKER);
                        }
                        havColCount++;
                    }

                    char hResult[MAX_FIELD_LEN];
                    int hOk = expr_evaluate(g_expr.havingExpr,
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
                    if (!keep) {
                        row_clear(&aggRow);
                        continue;  /* skip this group */
                    }
                }

                groupRows[outRows++] = aggRow;
                /* aggRow pointers transferred to groupRows — don't free aggRow */
            }

            #undef BUILD_COL_VALUES

            /* Free old scan rows, then replace with grouped/aggregated results */
            int r;
            for (r = 0; r < rs->num_rows; r++)
                row_clear(&rs->rows[r]);
            for (r = 0; r < outRows; r++)
                rs->rows[r] = groupRows[r];
            rs->num_rows = outRows;

            free(groupRows);
            free(groups);
            free(groupFirstRow);
            free(groupSize);

            did_aggregate = 1;
            /* DISTINCT, LIMIT/OFFSET will be applied at end of function */
        }
    }

    /* --- ORDER BY (applied after WHERE and GROUP BY, before column filtering) --- */
    if (g_sel.orderByCount > 0 && rs->num_rows > 1) {
        /* Resolve column indices for all ORDER BY columns */
        int orderCols[8];
        int orderDescs[8];
        int numOrderKeys = 0;
        int k;
        for (k = 0; k < g_sel.orderByCount && k < 8; k++) {
            int c;
            orderCols[k] = -1;
            orderDescs[k] = g_sel.orderByDescs[k];
            for (c = 0; c < rs->num_cols; c++) {
                if (strcasecmp(rs->columns[c].name, g_sel.orderByColumns[k]) == 0) {
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
    } else if (g_sel.orderByColumn[0] != '\0' && rs->num_rows > 1) {
        /* Legacy single-column ORDER BY fallback */
        int orderCol = -1;
        int c;
        for (c = 0; c < rs->num_cols; c++) {
            if (strcasecmp(rs->columns[c].name, g_sel.orderByColumn) == 0) {
                orderCol = c;
                break;
            }
        }
        if (orderCol >= 0) {
            int i, j;
            int desc = g_sel.orderByDesc;
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
    g_sel.orderByColumn[0] = '\0';
    g_sel.orderByDesc = 0;
    g_sel.orderByCount = 0;

    /* --- Column filtering / expression evaluation (using parser AST) --- */
    if (!did_aggregate && g_expr.selectExprCount > 0 && rs->num_cols > 0) {
        /* Check if we have a single STAR expression (SELECT *) */
        if (g_expr.selectExprCount == 1 && g_expr.selectExprs[0] &&
            g_expr.selectExprs[0]->type == EXPR_STAR) {
            /* SELECT * — no filtering needed */
        } else {
            /* Check if any expression is non-trivial (has arithmetic) */
            int has_arithmetic = 0;
            int s;
            for (s = 0; s < g_expr.selectExprCount; s++) {
                if (g_expr.selectExprs[s] && !expr_is_column(g_expr.selectExprs[s])) {
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
                rs->num_cols = g_expr.selectExprCount;
                {
                    int c;
                    for (c = 0; c < g_expr.selectExprCount; c++) {
                        memset(&rs->columns[c], 0, sizeof(ColumnInfo));
                        if (g_expr.selectExprs[c]) {
                            strncpy(rs->columns[c].name, g_expr.selectExprs[c]->display,
                                    MAX_COL_NAME - 1);
                        } else {
                            snprintf(rs->columns[c].name, MAX_COL_NAME, "?column?");
                        }
                        /* Expression results are numeric unless plain column */
                        if (g_expr.selectExprs[c] && expr_is_column(g_expr.selectExprs[c])) {
                            int oc;
                            for (oc = 0; oc < origNumCols; oc++) {
                                if (strcasecmp(origCols[oc].name,
                                               g_expr.selectExprs[c]->val.col_name) == 0) {
                                    rs->columns[c] = origCols[oc];
                                    rs->columns[c].attnum = c + 1;
                                    break;
                                }
                            }
                        } else if (g_expr.selectExprs[c] && expr_is_boolean(g_expr.selectExprs[c])) {
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
                        /* Save field values before clearing the row */
                        char colValues[MAX_COLUMNS][256];
                        for (c = 0; c < origNumCols && c < MAX_COLUMNS; c++) {
                            if (rs->rows[r].is_null[c]) {
                                strcpy(colValues[c], "\x01NULL\x01");
                            } else {
                                const char *fieldVal = rs->rows[r].fields[c];
                                strncpy(colValues[c], fieldVal ? fieldVal : "", 255);
                                colValues[c][255] = '\0';
                            }
                        }

                        /* Clear old row (frees heap strings) and prepare for new values */
                        row_clear(&rs->rows[r]);
                        memset(&rs->rows[r], 0, sizeof(Row));
                        rs->rows[r].num_fields = g_expr.selectExprCount;

                        for (c = 0; c < g_expr.selectExprCount; c++) {
                            if (!g_expr.selectExprs[c]) {
                                rs->rows[r].is_null[c] = 1;
                                continue;
                            }

                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_expr.selectExprs[c],
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols,
                                    result, sizeof(result)) && strcmp(result, "\x01NULL\x01") != 0) {
                                if (rs->columns[c].pg_type_oid == PG_OID_BOOL ||
                                    (g_expr.selectExprs[c] && expr_is_boolean(g_expr.selectExprs[c]))) {
                                    if (strncasecmp(result, "true", 4) == 0 ||
                                        strcmp(result, "1") == 0 ||
                                        strcmp(result, "t") == 0)
                                        row_set(&rs->rows[r], c, "true");
                                    else
                                        row_set(&rs->rows[r], c, "false");
                                } else {
                                    row_set(&rs->rows[r], c, result);
                                }
                            } else {
                                row_set_null(&rs->rows[r], c);
                            }
                        }
                    }
                }
            } else {
                /* All expressions are plain columns — use simple column filtering */
                int colMap[64];
                int mapCount = 0;
                int s, c, r;

                for (s = 0; s < g_expr.selectExprCount && mapCount < 64; s++) {
                    if (!g_expr.selectExprs[s] || !expr_is_column(g_expr.selectExprs[s]))
                        continue;
                    for (c = 0; c < rs->num_cols; c++) {
                        if (strcasecmp(rs->columns[c].name,
                                       g_expr.selectExprs[s]->val.col_name) == 0) {
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
                        if (g_expr.selectExprs[s] && g_expr.selectExprs[s]->display[0] &&
                            strcasecmp(g_expr.selectExprs[s]->display,
                                       g_expr.selectExprs[s]->val.col_name) != 0) {
                            strncpy(newCols[s].name, g_expr.selectExprs[s]->display,
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
                            if (rs->rows[r].is_null[colMap[s]]) {
                                row_set_null(&newRow, s);
                            } else {
                                row_set(&newRow, s, rs->rows[r].fields[colMap[s]]);
                            }
                        }
                        row_clear(&rs->rows[r]);
                        rs->rows[r] = newRow;
                    }
                } else if (mapCount > 0) {
                    /* All columns selected — still apply aliases */
                    for (s = 0; s < mapCount; s++) {
                        if (g_expr.selectExprs[s] && g_expr.selectExprs[s]->display[0] &&
                            strcasecmp(g_expr.selectExprs[s]->display,
                                       g_expr.selectExprs[s]->val.col_name) != 0) {
                            strncpy(rs->columns[colMap[s]].name,
                                    g_expr.selectExprs[s]->display,
                                    sizeof(rs->columns[colMap[s]].name) - 1);
                        }
                    }
                }
            }
        }
    }

    /* --- DISTINCT (remove duplicate rows) --- */
    if (g_sel.distinct && rs->num_rows > 1) {
        int dst = 1;
        int r, c;
        for (r = 1; r < rs->num_rows; r++) {
            int duplicate = 0;
            int d;
            for (d = 0; d < dst; d++) {
                int same = 1;
                for (c = 0; c < rs->num_cols; c++) {
                    if (rs->rows[r].is_null[c] != rs->rows[d].is_null[c]) { same = 0; break; }
                    if (!rs->rows[r].is_null[c] && rs->rows[r].fields[c] && rs->rows[d].fields[c] &&
                        strcmp(rs->rows[r].fields[c], rs->rows[d].fields[c]) != 0) { same = 0; break; }
                }
                if (same) { duplicate = 1; break; }
            }
            if (!duplicate) {
                if (dst != r)
                    row_move(&rs->rows[dst], &rs->rows[r]);
                dst++;
            } else {
                row_clear(&rs->rows[r]);
            }
        }
        rs->num_rows = dst;
    }
    g_sel.distinct = 0;

    /* --- LIMIT / OFFSET (applied last) --- */
    if (g_expr.limitExpr) {
        char lbuf[64];
        int limit_val = -1, offset_val = 0;
        if (expr_evaluate(g_expr.limitExpr, NULL, NULL, 0, lbuf, sizeof(lbuf)))
            limit_val = atoi(lbuf);
        if (g_expr.offsetExpr) {
            char obuf[64];
            if (expr_evaluate(g_expr.offsetExpr, NULL, NULL, 0, obuf, sizeof(obuf)))
                offset_val = atoi(obuf);
        }
        if (limit_val >= 0) {
            if (offset_val > 0) {
                if (offset_val >= rs->num_rows) {
                    /* Free all rows — everything is offset past the end */
                    int r;
                    for (r = 0; r < rs->num_rows; r++)
                        row_clear(&rs->rows[r]);
                    rs->num_rows = 0;
                } else {
                    /* Free skipped rows, then shift remaining forward */
                    int r;
                    for (r = 0; r < offset_val; r++)
                        row_clear(&rs->rows[r]);
                    for (r = 0; r < rs->num_rows - offset_val; r++)
                        rs->rows[r] = rs->rows[r + offset_val];
                    /* Zero the vacated tail slots to avoid dangling pointers */
                    for (r = rs->num_rows - offset_val; r < rs->num_rows; r++)
                        memset(&rs->rows[r], 0, sizeof(Row));
                    rs->num_rows -= offset_val;
                }
            }
            if (limit_val < rs->num_rows) {
                /* Free rows beyond limit */
                int r;
                for (r = limit_val; r < rs->num_rows; r++)
                    row_clear(&rs->rows[r]);
                rs->num_rows = limit_val;
            }
        }
    }

    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);
}

/* ----------------------------------------------------------------
 *  Execute SQL through EvoSQL parser
 *
 *  IMPORTANT: Error functions (err_dump/err_sys) do longjmp(g_err.jmpbuf, 1)
 *  in GUI mode.  Therefore ANY code that can trigger errors MUST run inside
 * ---------------------------------------------------------------- */

/* ----------------------------------------------------------------
 *  ctas_insert_rows — bulk insert SELECT results into target table
 *
 *  Resolves the target table, builds binary tuples from ResultSet rows,
 *  and inserts them with synthetic PK keys (CTAS_INFER) or actual
 *  PK values (CTAS_EXPLICIT). Returns number of rows inserted.
 * ---------------------------------------------------------------- */
static int ctas_insert_rows(const char *tableName, const ResultSet *selectRs,
                            int ctasMode, ResultSet *errRs)
{
    TableDesc td;
    ColumnDesc newCols[CAT_MAX_COLUMNS];
    int ncols = 0;

    if (tapi_resolve(tableName, &td, newCols, &ncols) < 0) {
        result_set_error(errRs, "42P01",
                         "CTAS: could not resolve target table");
        return 0;
    }

    /* GTT: ensure session-private storage exists */
    if (td.is_temporary == TEMP_GLOBAL && gtt_ensure_storage(&td) < 0) {
        result_set_error(errRs, "53000",
                         "could not allocate storage for global temporary table");
        return 0;
    }

    /* Find PK column index from column metadata */
    int pkIdx = 0;
    for (int i = 0; i < ncols; i++) {
        if (newCols[i].is_pk) { pkIdx = i; break; }
    }

    BTree2 pk_tree = tapi_pk_tree(&td);
    int inserted = 0;

    for (int r = 0; r < selectRs->num_rows; r++) {
        /* Build fields array from SELECT row */
        char fields[CAT_MAX_COLUMNS][256];
        for (int c = 0; c < ncols; c++) {
            if (c < selectRs->num_cols && selectRs->rows[r].fields[c] &&
                !selectRs->rows[r].is_null[c]) {
                strncpy(fields[c], selectRs->rows[r].fields[c], 255);
                fields[c][255] = '\0';
            } else {
                strcpy(fields[c], "\x01NULL\x01");
            }
        }

        /* Encode to binary tuple */
        char tuple[RECORD_BUF_SIZE];
        int tuple_len = tup_build_from_fields(
            (const char (*)[256])fields, ncols,
            td.table_id, newCols, ncols, tuple, sizeof(tuple));
        if (tuple_len <= 0) continue;

        /* PK key: synthetic row number (CTAS_INFER) or actual PK value */
        char pkKey[256];
        if (ctasMode == CTAS_INFER) {
            snprintf(pkKey, sizeof(pkKey), "%d", r + 1);
        } else {
            if (pkIdx < selectRs->num_cols && selectRs->rows[r].fields[pkIdx])
                strncpy(pkKey, selectRs->rows[r].fields[pkIdx], 255);
            else
                snprintf(pkKey, sizeof(pkKey), "%d", r + 1);
            pkKey[255] = '\0';
        }

        /* Insert into heap + PK index */
        RowID rid = tapi_heap_insert(&td, tuple, (uint16_t)tuple_len);
        if (rid.page_no == 0) continue;
        bt2_insert(&pk_tree, pkKey, rid);
        td.pk_root_page = pk_tree.root_page;
        inserted++;
    }

    /* Persist updated heap_page and pk_root_page */
    cat_update_heap_page(td.table_id, td.table_name,
                         td.schema_id, td.heap_page);
    cat_update_pk_root(td.table_id, td.table_name,
                       td.schema_id, td.pk_root_page);

    return inserted;
}

/* Find the PK column index for a target table in a join result.
 * Checks: alias.pkCol, tableName.pkCol, bare pkCol (single target).
 * Returns column index or -1 if not found. */
static int find_pk_col_in_join_result(const ResultSet *joinRs,
                                       const char *targetName,
                                       const char *pkColName)
{
    for (int c = 0; c < joinRs->num_cols; c++) {
        const char *cn = joinRs->columns[c].name;
        const char *dot = strchr(cn, '.');
        if (dot) {
            char prefix[128];
            int plen = (int)(dot - cn);
            if (plen > 127) plen = 127;
            memcpy(prefix, cn, plen);
            prefix[plen] = '\0';
            const char *colPart = dot + 1;
            if (strcasecmp(prefix, targetName) == 0 &&
                strcasecmp(colPart, pkColName) == 0)
                return c;
            /* Check aliases from join state */
            for (int ji = 0; ji < g_sel.joinTableCount; ji++) {
                if (strcasecmp(g_sel.joinTables[ji], targetName) == 0 &&
                    strcasecmp(prefix, g_sel.joinAliases[ji]) == 0 &&
                    strcasecmp(colPart, pkColName) == 0)
                    return c;
            }
        } else if (strcasecmp(cn, pkColName) == 0 &&
                   g_del.deleteTargetCount == 1) {
            return c;
        }
    }
    /* Fallback: try table_name.pk_col pattern */
    char qualified[256];
    snprintf(qualified, sizeof(qualified), "%s.%s", targetName, pkColName);
    for (int c = 0; c < joinRs->num_cols; c++) {
        if (strcasecmp(joinRs->columns[c].name, qualified) == 0)
            return c;
    }
    return -1;
}

/* Multi-table DELETE: join target tables, then delete matching rows. */
static void execute_multi_delete(ResultSet *rs, SessionCtx *ctx)
{
    if (ctx) {
        for (int t = 0; t < g_del.deleteTargetCount; t++) {
            if (!CheckPrivilege(ctx->username, ctx->database, ctx->schema,
                                g_del.deleteTargets[t], "DELETE")) {
                result_set_error(rs, "42501",
                    "permission denied: DELETE on target table");
                return;
            }
        }
    }

    Snapshot snap;
    memset(&snap, 0, sizeof(snap));
    if (ctx) {
        if (ctx->isolation_level >= 2 && ctx->snapshot_valid) {
            snap = ctx->snapshot;
        } else {
            mvcc_snapshot_take(&snap);
            snap.my_xid = ctx->tx_xid;
            ctx->snapshot = snap;
            ctx->snapshot_valid = 1;
        }
    } else {
        mvcc_snapshot_take(&snap);
    }

    JoinPlan plan;
    memset(&plan, 0, sizeof(plan));
    plan.num_tables = g_sel.joinTableCount;
    for (int ji = 0; ji < g_sel.joinTableCount && ji < 8; ji++) {
        strncpy(plan.tables[ji].name, g_sel.joinTables[ji], 255);
        plan.tables[ji].name[255] = '\0';
        strncpy(plan.tables[ji].alias, g_sel.joinAliases[ji], 127);
        plan.tables[ji].alias[127] = '\0';
        plan.join_types[ji] = g_sel.joinTypes[ji];
        plan.join_conds[ji] = g_sel.joinOnExprs[ji];
    }
    plan.where_expr = g_expr.whereExpr;

    ResultSet joinRs;
    result_init(&joinRs);
    int jrc = join_execute(&plan, &joinRs, ctx, &snap);
    if (jrc < 0 || joinRs.has_error) {
        if (joinRs.has_error)
            result_set_error(rs, joinRs.error_sqlstate, joinRs.error_message);
        else
            result_set_error(rs, "XX000", "multi-table DELETE join failed");
        result_free(&joinRs);
        return;
    }

    int total_deleted = 0;

    /* Ensure XID once for the entire multi-delete operation */
    mvcc_ensure_xid(&g_qctx->mvcc_xid);
    uint32_t xid = g_qctx->mvcc_xid;
    if (ctx && ctx->tx_xid == 0)
        ctx->tx_xid = xid;

    for (int t = 0; t < g_del.deleteTargetCount; t++) {
        const char *targetName = g_del.deleteTargets[t];

        TableDesc td;
        ColumnDesc cols[CAT_MAX_COLUMNS];
        int ncols;
        if (tapi_resolve(targetName, &td, cols, &ncols) < 0) {
            result_set_error(rs, "42P01", "target table not found for DELETE");
            result_free(&joinRs);
            return;
        }

        char pkColName[128] = "";
        for (int c = 0; c < ncols; c++) {
            if (cols[c].is_pk) {
                strncpy(pkColName, cols[c].col_name, 127);
                pkColName[127] = '\0';
                break;
            }
        }
        if (pkColName[0] == '\0') {
            result_set_error(rs, "42E16",
                "target table has no primary key for multi-table DELETE");
            result_free(&joinRs);
            return;
        }

        int pkColIdx = find_pk_col_in_join_result(&joinRs, targetName,
                                                    pkColName);
        if (pkColIdx < 0) {
            result_set_error(rs, "42703",
                "could not find PK column in join result for DELETE target");
            result_free(&joinRs);
            return;
        }

        /* Collect unique PK values (O(n^2) dedup, acceptable for join results) */
        char **pkValues = NULL;
        int pkCount = 0;
        int pkCapacity = 0;
        for (int r = 0; r < joinRs.num_rows; r++) {
            const char *val = joinRs.rows[r].fields[pkColIdx];
            if (!val || joinRs.rows[r].is_null[pkColIdx]) continue;
            int dup = 0;
            for (int d = 0; d < pkCount; d++) {
                if (strcmp(pkValues[d], val) == 0) { dup = 1; break; }
            }
            if (dup) continue;
            if (pkCount >= pkCapacity) {
                pkCapacity = pkCapacity == 0 ? 32 : pkCapacity * 2;
                char **tmp = (char **)realloc(pkValues,
                                               pkCapacity * sizeof(char *));
                if (!tmp) break;
                pkValues = tmp;
            }
            char *dup_val = strdup(val);
            if (!dup_val) break;
            pkValues[pkCount++] = dup_val;
        }

        for (int d = 0; d < pkCount; d++) {
            int rc = evo_delete_row(targetName, pkValues[d], xid);
            if (rc < 0) {
                result_set_error(rs, g_err.sqlstate, g_err.errorMsg);
                for (int f = d; f < pkCount; f++) free(pkValues[f]);
                free(pkValues);
                result_free(&joinRs);
                g_del.rowCount = total_deleted;
                return;
            }
            total_deleted++;
            free(pkValues[d]);
        }
        free(pkValues);
    }

    result_free(&joinRs);
    g_del.rowCount = total_deleted;
    printf("%d record(s) deleted (multi-table).\n", total_deleted);
}

/* ----------------------------------------------------------------
 *  execute_multi_update — Multi-table UPDATE with JOIN
 *
 *  Called post-parse when g_upd.multiUpdate is set.
 *  1) Builds JoinPlan, runs join_execute
 *  2) Resolves SET values from join result columns
 *  3) For each target row, calls evo_update_row()
 * ---------------------------------------------------------------- */
static void execute_multi_update(ResultSet *rs, SessionCtx *ctx)
{
    /* Collect unique target tables from SET assignments.
     * Resolve aliases to real table names via join state. */
    char targetTables[8][256];
    int targetCount = 0;
    for (int s = 0; s < g_upd.setCount; s++) {
        if (g_upd.setTargetTable[s][0] == '\0') continue;
        /* Resolve alias → real name */
        const char *realName = g_upd.setTargetTable[s];
        for (int ji = 0; ji < g_sel.joinTableCount; ji++) {
            if (strcasecmp(g_sel.joinAliases[ji], g_upd.setTargetTable[s]) == 0) {
                realName = g_sel.joinTables[ji];
                break;
            }
        }
        int found = 0;
        for (int t = 0; t < targetCount; t++) {
            if (strcasecmp(targetTables[t], realName) == 0) {
                found = 1; break;
            }
        }
        if (!found && targetCount < 8) {
            strncpy(targetTables[targetCount], realName, 255);
            targetTables[targetCount][255] = '\0';
            targetCount++;
        }
    }

    /* Privilege check */
    if (ctx) {
        for (int t = 0; t < targetCount; t++) {
            if (!CheckPrivilege(ctx->username, ctx->database, ctx->schema,
                                targetTables[t], "UPDATE")) {
                result_set_error(rs, "42501",
                    "permission denied: UPDATE on target table");
                return;
            }
        }
    }

    /* MVCC snapshot */
    Snapshot snap;
    memset(&snap, 0, sizeof(snap));
    if (ctx) {
        if (ctx->isolation_level >= 2 && ctx->snapshot_valid)
            snap = ctx->snapshot;
        else {
            mvcc_snapshot_take(&snap);
            snap.my_xid = ctx->tx_xid;
            ctx->snapshot = snap;
            ctx->snapshot_valid = 1;
        }
    } else {
        mvcc_snapshot_take(&snap);
    }

    /* Build JoinPlan */
    JoinPlan plan;
    memset(&plan, 0, sizeof(plan));
    plan.num_tables = g_sel.joinTableCount;
    for (int ji = 0; ji < g_sel.joinTableCount && ji < 8; ji++) {
        strncpy(plan.tables[ji].name, g_sel.joinTables[ji], 255);
        plan.tables[ji].name[255] = '\0';
        strncpy(plan.tables[ji].alias, g_sel.joinAliases[ji], 127);
        plan.tables[ji].alias[127] = '\0';
        plan.join_types[ji] = g_sel.joinTypes[ji];
        plan.join_conds[ji] = g_sel.joinOnExprs[ji];
    }
    plan.where_expr = g_expr.whereExpr;

    /* Execute JOIN */
    ResultSet joinRs;
    result_init(&joinRs);
    int jrc = join_execute(&plan, &joinRs, ctx, &snap);
    if (jrc < 0 || joinRs.has_error) {
        if (joinRs.has_error)
            result_set_error(rs, joinRs.error_sqlstate, joinRs.error_message);
        else
            result_set_error(rs, "XX000", "multi-table UPDATE join failed");
        result_free(&joinRs);
        return;
    }

    int total_updated = 0;

    /* Ensure XID once */
    mvcc_ensure_xid(&g_qctx->mvcc_xid);
    uint32_t xid = g_qctx->mvcc_xid;
    if (ctx && ctx->tx_xid == 0)
        ctx->tx_xid = xid;

    /* Build column name/value arrays from join result for expr_evaluate */
    char (*joinColNames)[128] = NULL;
    int joinNumCols = joinRs.num_cols;
    if (joinNumCols > 0) {
        joinColNames = (char (*)[128])calloc(joinNumCols, 128);
        if (!joinColNames) {
            result_free(&joinRs);
            return;
        }
        for (int c = 0; c < joinNumCols; c++) {
            strncpy(joinColNames[c], joinRs.columns[c].name, 127);
            joinColNames[c][127] = '\0';
        }
    }

    /* Process each target table */
    for (int t = 0; t < targetCount; t++) {
        const char *targetName = targetTables[t];

        /* Resolve target table PK */
        TableDesc td;
        ColumnDesc cols[CAT_MAX_COLUMNS];
        int ncols;
        if (tapi_resolve(targetName, &td, cols, &ncols) < 0) {
            result_set_error(rs, "42P01", "target table not found for UPDATE");
            free(joinColNames);
            result_free(&joinRs);
            return;
        }

        char pkColName[128] = "";
        for (int c = 0; c < ncols; c++) {
            if (cols[c].is_pk) {
                strncpy(pkColName, cols[c].col_name, 127);
                pkColName[127] = '\0';
                break;
            }
        }
        if (pkColName[0] == '\0') {
            result_set_error(rs, "42E16",
                "target table has no primary key for multi-table UPDATE");
            free(joinColNames);
            result_free(&joinRs);
            return;
        }

        int pkColIdx = find_pk_col_in_join_result(&joinRs, targetName, pkColName);
        if (pkColIdx < 0) {
            result_set_error(rs, "42703",
                "could not find PK column in join result for UPDATE target");
            free(joinColNames);
            result_free(&joinRs);
            return;
        }

        /* Collect SET assignments for this target table */
        int myCols[64];
        int mySetCount = 0;
        for (int s = 0; s < g_upd.setCount; s++) {
            if (strcasecmp(g_upd.setTargetTable[s], targetName) == 0 ||
                /* Match by alias */
                (g_upd.setTargetTable[s][0] != '\0')) {
                /* Verify this SET belongs to targetName */
                int match = (strcasecmp(g_upd.setTargetTable[s], targetName) == 0);
                if (!match) {
                    for (int ji = 0; ji < g_sel.joinTableCount; ji++) {
                        if (strcasecmp(g_sel.joinTables[ji], targetName) == 0 &&
                            strcasecmp(g_upd.setTargetTable[s], g_sel.joinAliases[ji]) == 0) {
                            match = 1; break;
                        }
                    }
                }
                if (match && mySetCount < 64)
                    myCols[mySetCount++] = s;
            }
        }
        if (mySetCount == 0) continue;

        /* For each join row: resolve SET values, collect per-PK updates */
        /* Use dedup: last row wins for same PK (MySQL semantics) */
        char **pkValues = NULL;
        char (**setColArrays)[128] = NULL;
        char (**setValArrays)[256] = NULL;
        int pkCount = 0;
        int pkCapacity = 0;

        for (int r = 0; r < joinRs.num_rows; r++) {
            const char *pk = joinRs.rows[r].fields[pkColIdx];
            if (!pk || joinRs.rows[r].is_null[pkColIdx]) continue;

            /* Resolve SET values from this join row */
            char resolvedCols[64][128];
            char resolvedVals[64][256];
            int nResolved = 0;
            for (int m = 0; m < mySetCount; m++) {
                int si = myCols[m];
                strncpy(resolvedCols[nResolved], g_upd.setTargetCol[si], 127);
                resolvedCols[nResolved][127] = '\0';

                /* Evaluate RHS expression against join row */
                ExprNode *valExpr = g_upd.setValueExprs[si];
                if (valExpr) {
                    /* Build value array from join row */
                    char (*joinVals)[256] = (char (*)[256])calloc(joinNumCols, 256);
                    if (joinVals) {
                        for (int c = 0; c < joinNumCols; c++) {
                            if (joinRs.rows[r].fields[c] && !joinRs.rows[r].is_null[c])
                                strncpy(joinVals[c], joinRs.rows[r].fields[c], 255);
                            else
                                strcpy(joinVals[c], "\x01NULL\x01");
                        }
                        char result[256];
                        int ok = expr_evaluate(valExpr,
                                              (const char (*)[128])joinColNames,
                                              (const char (*)[256])joinVals,
                                              joinNumCols,
                                              result, sizeof(result));
                        if (ok && strcmp(result, "\x01NULL\x01") != 0)
                            strncpy(resolvedVals[nResolved], result, 255);
                        else
                            strcpy(resolvedVals[nResolved], "\x01NULL\x01");
                        free(joinVals);
                    } else {
                        strcpy(resolvedVals[nResolved], "\x01NULL\x01");
                    }
                } else {
                    strcpy(resolvedVals[nResolved], "\x01NULL\x01");
                }
                resolvedVals[nResolved][255] = '\0';
                nResolved++;
            }

            /* Dedup: find existing entry or add new */
            int existing = -1;
            for (int d = 0; d < pkCount; d++) {
                if (strcmp(pkValues[d], pk) == 0) { existing = d; break; }
            }
            if (existing >= 0) {
                /* Overwrite with latest values (last row wins) */
                memcpy(setColArrays[existing], resolvedCols, nResolved * 128);
                memcpy(setValArrays[existing], resolvedVals, nResolved * 256);
            } else {
                /* Add new entry */
                if (pkCount >= pkCapacity) {
                    pkCapacity = pkCapacity == 0 ? 32 : pkCapacity * 2;
                    char **tmpPk = realloc(pkValues, pkCapacity * sizeof(char *));
                    char (**tmpCols)[128] = realloc(setColArrays, pkCapacity * sizeof(*setColArrays));
                    char (**tmpVals)[256] = realloc(setValArrays, pkCapacity * sizeof(*setValArrays));
                    if (!tmpPk || !tmpCols || !tmpVals) break;
                    pkValues = tmpPk;
                    setColArrays = tmpCols;
                    setValArrays = tmpVals;
                }
                char *dupPk = strdup(pk);
                if (!dupPk) break;
                pkValues[pkCount] = dupPk;
                setColArrays[pkCount] = malloc(64 * 128);
                setValArrays[pkCount] = malloc(64 * 256);
                if (!setColArrays[pkCount] || !setValArrays[pkCount]) {
                    free(dupPk); break;
                }
                memcpy(setColArrays[pkCount], resolvedCols, nResolved * 128);
                memcpy(setValArrays[pkCount], resolvedVals, nResolved * 256);
                pkCount++;
            }
        }

        /* Apply updates */
        for (int d = 0; d < pkCount; d++) {
            int rc = evo_update_row(targetName, pkValues[d],
                                    (const char (*)[128])setColArrays[d],
                                    (const char (*)[256])setValArrays[d],
                                    mySetCount, xid);
            if (rc < 0) {
                result_set_error(rs, g_err.sqlstate, g_err.errorMsg);
                for (int f = d; f < pkCount; f++) {
                    free(pkValues[f]);
                    free(setColArrays[f]);
                    free(setValArrays[f]);
                }
                free(pkValues); free(setColArrays); free(setValArrays);
                free(joinColNames);
                result_free(&joinRs);
                g_upd.rowCount = total_updated;
                return;
            }
            total_updated++;
            free(pkValues[d]);
            free(setColArrays[d]);
            free(setValArrays[d]);
        }
        free(pkValues); free(setColArrays); free(setValArrays);
    }

    free(joinColNames);
    result_free(&joinRs);
    g_upd.rowCount = total_updated;
    printf("%d record(s) updated (multi-table).\n", total_updated);
}

/* ----------------------------------------------------------------
 *  execute_insert_select — INSERT INTO ... SELECT execution
 *
 *  Called post-parse when g_ins.insertFromSelect is set.
 *  1) Runs SELECT via collect_select_results (or join_execute) to get rows
 *  2) Validates column count against target table
 *  3) Converts ResultSet rows to g_ins.data format and calls InsertProcess
 * ---------------------------------------------------------------- */
static void execute_insert_select(const char *srcTable, ResultSet *rs, SessionCtx *ctx)
{
    /* Privilege check: needs both SELECT and INSERT */
    if (ctx) {
        if (!CheckPrivilege(ctx->username, ctx->database, ctx->schema,
                            srcTable, "SELECT")) {
            result_set_error(rs, "42501",
                "Permission denied: INSERT...SELECT requires SELECT privilege");
            return;
        }
        if (!CheckPrivilege(ctx->username, ctx->database, ctx->schema,
                            g_ins.tblName, "INSERT")) {
            result_set_error(rs, "42501",
                "Permission denied: INSERT...SELECT requires INSERT privilege");
            return;
        }
    }

    /* A) Execute the SELECT to collect rows */
    ResultSet selectRs;
    memset(&selectRs, 0, sizeof(selectRs));
    result_init(&selectRs);

    /* Take MVCC snapshot */
    if (ctx) {
        if (ctx->isolation_level >= 2 && ctx->snapshot_valid) {
            /* REPEATABLE READ / SERIALIZABLE: reuse TX snapshot */
        } else {
            mvcc_snapshot_take(&ctx->snapshot);
            ctx->snapshot.my_xid = ctx->tx_xid;
            ctx->snapshot_valid = 1;
        }
    }

    if (g_sel.joinTableCount > 1) {
        /* JOIN source */
        JoinPlan plan;
        memset(&plan, 0, sizeof(plan));
        plan.num_tables = g_sel.joinTableCount;
        for (int ji = 0; ji < g_sel.joinTableCount && ji < 8; ji++) {
            strncpy(plan.tables[ji].name, g_sel.joinTables[ji], 255);
            strncpy(plan.tables[ji].alias, g_sel.joinAliases[ji], 127);
            plan.join_types[ji] = g_sel.joinTypes[ji];
            plan.join_conds[ji] = g_sel.joinOnExprs[ji];
            TableDesc jtd;
            const char *jdb = ctx ? ctx->database : "evosql";
            const char *jsch = ctx ? ctx->schema : "default";
            if (cat_resolve_table(jdb, jsch, g_sel.joinTables[ji], &jtd) == 0) {
                plan.tables[ji].owner_node = (int)jtd.owner_node_id;
                plan.tables[ji].table_id = jtd.table_id;
            }
        }
        plan.where_expr = g_expr.whereExpr;
        join_execute(&plan, &selectRs, ctx, ctx ? &ctx->snapshot : NULL);

        /* Column projection for JOIN results: join_execute returns all
         * columns from all tables, so we need to project down. */
        if (!selectRs.has_error && g_sel.columnCount > 0) {
            int col_map[64];
            int map_count = 0;
            for (int ci = 0; ci < g_sel.columnCount && ci < 64; ci++) {
                col_map[ci] = -1;
                for (int ji = 0; ji < selectRs.num_cols; ji++) {
                    if (strcasecmp(selectRs.columns[ji].name, g_sel.columns[ci]) == 0) {
                        col_map[ci] = ji; break;
                    }
                }
                if (col_map[ci] < 0) {
                    for (int ji = 0; ji < selectRs.num_cols; ji++) {
                        const char *dot = strrchr(selectRs.columns[ji].name, '.');
                        const char *bare = dot ? dot + 1 : selectRs.columns[ji].name;
                        if (strcasecmp(bare, g_sel.columns[ci]) == 0) {
                            col_map[ci] = ji; break;
                        }
                    }
                }
                if (col_map[ci] >= 0) map_count++;
            }
            if (map_count > 0) {
                ResultSet projected;
                result_init(&projected);
                projected.is_select = 1;
                for (int ci = 0; ci < g_sel.columnCount; ci++) {
                    if (col_map[ci] >= 0)
                        result_add_column(&projected, g_sel.columns[ci],
                                          selectRs.columns[col_map[ci]].pg_type_oid);
                    else
                        result_add_column(&projected, g_sel.columns[ci], 25);
                }
                for (int ri = 0; ri < selectRs.num_rows; ri++) {
                    int row = result_add_row(&projected);
                    if (row < 0) break;
                    for (int ci = 0; ci < g_sel.columnCount; ci++) {
                        if (col_map[ci] >= 0) {
                            if (selectRs.rows[ri].is_null[col_map[ci]])
                                result_set_null(&projected, row, ci);
                            else if (selectRs.rows[ri].fields[col_map[ci]])
                                result_set_field(&projected, row, ci,
                                                 selectRs.rows[ri].fields[col_map[ci]]);
                        } else {
                            result_set_null(&projected, row, ci);
                        }
                    }
                }
                result_free(&selectRs);
                selectRs = projected;
            }
        }
    } else {
        /* Single-table SELECT: collect_select_results already handles
         * expression evaluation and column filtering internally. */
        collect_select_results(srcTable, &selectRs,
                               ctx ? &ctx->snapshot : NULL, 0, 0);
    }

    if (selectRs.has_error) {
        result_set_error(rs, selectRs.error_sqlstate, selectRs.error_message);
        result_free(&selectRs);
        return;
    }

    /* B) Resolve target table to validate column count */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols = 0;
    char tblName[1024];
    strncpy(tblName, g_ins.tblName, sizeof(tblName) - 1);
    tblName[sizeof(tblName) - 1] = '\0';
    { char *dot = strstr(tblName, ".dat"); if (dot) *dot = '\0'; }

    if (tapi_resolve(tblName, &td, cols, &ncols) < 0) {
        result_set_error(rs, "42P01", "INSERT...SELECT: target table does not exist");
        result_free(&selectRs);
        return;
    }

    /* Column count validation */
    int expectedCols = (g_ins.columnCount > 0) ? g_ins.columnCount : ncols;
    if (selectRs.num_cols != expectedCols) {
        char emsg[256];
        snprintf(emsg, sizeof(emsg),
                 "INSERT...SELECT: SELECT returns %d column(s) but target expects %d",
                 selectRs.num_cols, expectedCols);
        result_set_error(rs, "42601", emsg);
        result_free(&selectRs);
        return;
    }

    /* C) Empty result: success with 0 rows */
    if (selectRs.num_rows == 0) {
        snprintf(rs->command_tag, sizeof(rs->command_tag), "INSERT 0 0");
        result_free(&selectRs);
        return;
    }

    /* D) Convert ResultSet rows to g_ins.data and call InsertProcess in batches.
     * InsertProcess supports up to 256 rows at a time via ROW_SEP.
     * Batch size is dynamically reduced to stay within RECORD_BUF_SIZE. */
    int totalInserted = 0;
    int r = 0;
    const int buf_limit = RECORD_BUF_SIZE - 64; /* leave safety margin */

    while (r < selectRs.num_rows) {
        /* Check query cancellation */
        if (g_query_cancelled) {
            result_set_error(rs, "57014", "canceling statement due to statement timeout");
            break;
        }

        /* Build g_ins.data one row at a time, flushing batch when buffer is near full */
        g_ins.data[0] = '\0';
        int batchCount = 0;
        int pos = 0;

        while (r + batchCount < selectRs.num_rows && batchCount < 256) {
            int bi = r + batchCount;

            /* Estimate row size before appending */
            int rowSize = 1; /* ROW_SEP or terminator */
            for (int c = 0; c < selectRs.num_cols; c++) {
                if (selectRs.rows[bi].is_null[c] || !selectRs.rows[bi].fields[c])
                    rowSize += 7 + 1; /* \x01NULL\x01; */
                else
                    rowSize += (int)strlen(selectRs.rows[bi].fields[c]) + 1;
            }

            /* Stop batch if this row would overflow the buffer */
            if (pos + rowSize >= buf_limit) {
                if (batchCount == 0) {
                    result_set_error(rs, "54000",
                        "INSERT...SELECT: row too large for insert buffer");
                    goto ins_sel_done;
                }
                break;
            }

            /* Add ROW_SEP between rows */
            if (batchCount > 0) {
                if (pos > 0 && g_ins.data[pos - 1] == ';')
                    g_ins.data[pos - 1] = '\x02';
                else
                    g_ins.data[pos++] = '\x02';
            }

            /* Append row fields as semicolon-delimited string */
            for (int c = 0; c < selectRs.num_cols; c++) {
                const char *val;
                if (selectRs.rows[bi].is_null[c] || !selectRs.rows[bi].fields[c])
                    val = "\x01NULL\x01";
                else
                    val = selectRs.rows[bi].fields[c];
                int vlen = (int)strlen(val);
                memcpy(g_ins.data + pos, val, vlen);
                pos += vlen;
                g_ins.data[pos++] = ';';
            }
            g_ins.data[pos] = '\0';
            batchCount++;
        }

        /* Set table name for InsertProcess */
        strncpy(g_ins.tblName, tblName, sizeof(g_ins.tblName) - 1);
        g_ins.tblName[sizeof(g_ins.tblName) - 1] = '\0';

        /* Call InsertProcess — it handles all validation:
         * column reorder, AUTO_INCREMENT, generated columns,
         * type/null/unique/check/FK validation, store, secondary indexes */
        g_err.error = 0;
        g_err.errorMsg[0] = '\0';
        int rc = InsertProcess();

        if (rc != 0 || g_err.error) {
            /* Propagate error */
            result_set_error(rs,
                g_err.sqlstate[0] ? g_err.sqlstate : "42000",
                g_err.errorMsg[0] ? g_err.errorMsg : "INSERT...SELECT failed");
            break;
        }

        totalInserted += g_ins.rowCount;
        r += batchCount;
    }

ins_sel_done:
    if (!rs->has_error) {
        snprintf(rs->command_tag, sizeof(rs->command_tag),
                 "INSERT 0 %d", totalInserted);
    }

    result_free(&selectRs);
}

/* ----------------------------------------------------------------
 *  execute_ctas — CREATE TABLE AS SELECT execution
 *
 *  Called post-parse when g_create.ctasMode > 0.
 *  1) Runs SELECT via collect_select_results to get column metadata + rows
 *  2) For CTAS_INFER: creates table with inferred column types
 *  3) Inserts all SELECT rows into the new table
 * ---------------------------------------------------------------- */
static void execute_ctas(const char *srcTable, ResultSet *rs, SessionCtx *ctx)
{
    /* Privilege check: CTAS needs SELECT in addition to CREATE */
    if (ctx && !CheckPrivilege(ctx->username, ctx->database, ctx->schema,
                               NULL, "SELECT")) {
        result_set_error(rs, "42501",
            "Permission denied: CTAS requires SELECT privilege");
        return;
    }

    /* A) Execute the SELECT to collect column metadata and rows */
    ResultSet selectRs;
    memset(&selectRs, 0, sizeof(selectRs));  /* ensure stream_conn=NULL */
    result_init(&selectRs);
    collect_select_results(srcTable, &selectRs, NULL, 0, 0);

    if (selectRs.has_error) {
        result_set_error(rs, selectRs.error_sqlstate, selectRs.error_message);
        result_free(&selectRs);
        return;
    }

    if (selectRs.num_cols <= 0) {
        result_set_error(rs, "42601", "SELECT returns no columns for CTAS");
        result_free(&selectRs);
        return;
    }

    /* B) For CTAS_INFER: create table with columns inferred from SELECT */
    if (g_create.ctasMode == CTAS_INFER) {
        ColumnDesc cols[64];
        int ncols = selectRs.num_cols < 64 ? selectRs.num_cols : 64;

        for (int i = 0; i < ncols; i++) {
            memset(&cols[i], 0, sizeof(ColumnDesc));
            strncpy(cols[i].col_name, selectRs.columns[i].name,
                    CAT_MAX_NAME_LEN - 1);
            cols[i].type_code = pg_oid_to_type_encoding(
                selectRs.columns[i].pg_type_oid,
                selectRs.columns[i].type_modifier);
            strcpy(cols[i].default_val, "\x01NONE\x01");
        }

        /* Resolve current schema */
        DatabaseDesc dbDesc;
        if (cat_find_database(g_currentDatabase, &dbDesc) < 0) {
            result_set_error(rs, "3D000",
                             "database does not exist");
            result_free(&selectRs);
            return;
        }
        SchemaDesc schDesc;
        if (cat_find_schema(dbDesc.db_id, g_currentSchema, &schDesc) < 0) {
            result_set_error(rs, "3F000",
                             "schema does not exist");
            result_free(&selectRs);
            return;
        }

        int rc = cat_create_table(schDesc.schema_id, g_create.ctasTableName,
                                  cols, ncols, 0, -1, 1, 1,
                                  g_create.ctasTemporary, 0);
        if (rc < 0) {
            if (g_create.ctasIfNotExists) {
                /* Table already exists — silent success, no data insert */
                snprintf(rs->command_tag, sizeof(rs->command_tag),
                         "SELECT 0");
                result_free(&selectRs);
                return;
            }
            result_set_error(rs, "42P07",
                             "table already exists");
            result_free(&selectRs);
            return;
        }
        g_create.lastCreatedTableId = (uint32_t)rc;
    }

    /* C) Insert SELECT rows into the new table */
    int inserted = ctas_insert_rows(g_create.ctasTableName, &selectRs,
                                     g_create.ctasMode, rs);

    /* D) Register temp table if needed */
    if (ctx && g_create.ctasTemporary == TEMP_LOCAL &&
        g_create.lastCreatedTableId > 0) {
        if (ctx->temp_table_count < 64)
            ctx->temp_table_ids[ctx->temp_table_count++] =
                g_create.lastCreatedTableId;
    }

    /* E) Command tag */
    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", inserted);
    result_free(&selectRs);
}

/* ----------------------------------------------------------------
 *  execute_via_parser — execute SQL through Flex/Bison parser
 *
 *  the setjmp scope, and the stdout/stderr restore MUST be guarded
 *  against double-close in case longjmp fires after the first restore.
 * ---------------------------------------------------------------- */
static void execute_via_parser(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    char *sqlCopy;
    /* volatile: values survive longjmp per C standard */
    volatile int saved_stdout = -1;
    volatile int saved_stderr = -1;
    volatile YY_BUFFER_STATE scan_buf = NULL;
    volatile int parse_mutex_held = 0;
    yyscan_t local_scanner = NULL;

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
    g_err.error = 0;
    g_err.errorMsg[0] = '\0';
    g_err.sqlstate[0] = '\0';
    g_sel.lastTable[0] = '\0';
    g_sel.tblName[0] = '\0';
    g_create.tblName[0] = '\0';
    g_ins.tblName[0] = '\0';
    g_upd.tblName[0] = '\0';
    g_upd.multiUpdate = 0;
    g_upd.setCount = 0;
    g_del.tblName[0] = '\0';
    g_del.multiDelete = 0;
    g_del.deleteTargetCount = 0;
    g_drop.tblName[0] = '\0';
    g_drop.truncCascade = 0;
    g_drop.truncContinueIdentity = 0;
    g_drop.truncExtraCount = 0;
    g_idx.name[0] = '\0';
    g_idx.tableName[0] = '\0';
    g_idx.columnName[0] = '\0';
    g_idx.unique = 0;
    g_idx.ifNotExists = 0;
    g_idx.concurrent = 0;
    g_create.isTemporary = 0;
    g_create.onCommitDelete = 1;  /* default: ON COMMIT DELETE ROWS */
    g_create.lastCreatedTableId = 0;
    g_create.ctasMode = CTAS_NONE;
    g_create.ctasTableName[0] = '\0';
    g_create.ctasIfNotExists = 0;
    g_create.ctasTemporary = 0;
    g_ins.data[0] = '\0';
    g_del.rowCount = 0;
    g_upd.rowCount = 0;
    g_ins.rowCount = 0;
    g_ins.columnCount = 0;
    g_ins.insertFromSelect = 0;
    g_expr.whereSel[0] = '\0';
    g_create.columnDefs[0] = '\0';
    g_ins.columnNames[0] = '\0';
    g_sel.orderByColumn[0] = '\0';
    g_sel.orderByDesc = 0;
    g_sel.orderByCount = 0;
    g_sel.distinct = 0;
    g_sel.joinTableCount = 0;
    memset(g_sel.joinOnExprs, 0, sizeof(g_sel.joinOnExprs));
    g_create.totalColumnSize = 0;
    g_create.currentColNotNull = 0;
    g_create.currentColPrimaryKey = 0;
    g_create.currentColUnique = 0;
    g_create.currentColAutoIncrement = 0;
    g_create.currentColDefault[0] = '\0';
    g_create.currentColGeneratedMode = 0;
    g_create.currentColGeneratedExpr[0] = '\0';
    g_create.columnNullFlags[0] = '\0';
    g_create.primaryKeyIndex = -1;
    g_create.columnCount = 0;
    /* NOTE: g_sel.columnCount is NOT reset here — it was set by
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
     * This includes the parser AND collect_select_results. */
    if (setjmp(g_err.jmpbuf) == 0) {
        int parse_result;

        /* Reentrant parser: each call gets its own scanner instance.
         * DML uses g_dml_mutex for serialization (doesn't block readers).
         * SELECT doesn't need any lock for parsing (g_qctx is thread-local). */
        int already_locked = (ctx && ctx->serializable_locked);
        int is_readonly = is_select_query(sql);

        /* DML/DDL: global DML mutex serializes all writes.
         * SELECT uses rdlock (concurrent with DML). DML doesn't block readers.
         * Per-table locks in Process functions provide additional fine-grained
         * serialization (infrastructure for future concurrent DML). */
        if (!already_locked && !is_readonly) {
            /* Replica mode: reject all DML/DDL (read-only hot standby) */
            extern int repl_is_replica(void);
            if (repl_is_replica()) {
                rs->has_error = 1;
                strcpy(rs->error_sqlstate, "25006");
                snprintf(rs->error_message, sizeof(rs->error_message),
                         "cannot execute %s in a read-only transaction (replica mode)",
                         is_insert_query(sql) ? "INSERT" :
                         is_update_query(sql) ? "UPDATE" :
                         is_delete_query(sql) ? "DELETE" : "DDL");
                goto parser_done;
            }
            extern mutex_t g_dml_mutex;
            mutex_lock(&g_dml_mutex);
            parse_mutex_held = 1;
        }

        yylex_init(&local_scanner);
        scan_buf = yy_scan_string(sqlCopy, local_scanner);
        yyset_lineno(1, local_scanner);
        parse_result = yyparse(local_scanner);
        yy_delete_buffer((YY_BUFFER_STATE)scan_buf, local_scanner);
        yylex_destroy(local_scanner);
        scan_buf = NULL;
        local_scanner = NULL;

        if (parse_mutex_held && !already_locked) {
            extern mutex_t g_dml_mutex;
            mutex_unlock(&g_dml_mutex);
            parse_mutex_held = 0;
        }

parser_done:
        /* yyparse returns 0 on success, 1 on syntax error, 2 on OOM */
        if (parse_result != 0) {
            rs->has_error = 1;
            strcpy(rs->error_sqlstate, "42601");
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "Syntax error: %.200s", sql);
        }

        /* Check if engine set a validation/runtime error (e.g. type mismatch) */
        if (!rs->has_error && g_err.error) {
            rs->has_error = 1;
            strcpy(rs->error_sqlstate,
                   g_err.sqlstate[0] ? g_err.sqlstate : "22000");
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "%.500s", g_err.errorMsg[0] ? g_err.errorMsg : "data validation error");
        }

        /* Restore stdout/stderr BEFORE collect_select_results so that
         * any subsequent printf works, and mark fds as consumed. */
        if (saved_stdout >= 0) { dup2(saved_stdout, 1); close(saved_stdout); saved_stdout = -1; }
        if (saved_stderr >= 0) { dup2(saved_stderr, 2); close(saved_stderr); saved_stderr = -1; }

        /* CREATE INDEX CONCURRENTLY — Phase2: batch-unlock populate.
         * Phase1 (inside yyparse) registered the index as IDX_BUILDING.
         * Phase2 runs post-parse WITHOUT holding the mutex continuously,
         * yielding after every CONC_BATCH_SIZE rows. */
        if (!rs->has_error && g_idx.concurrent) {
            struct { void (*lock)(void*); void (*unlock)(void*); void *mtx; } ops
                = { conc_lock, conc_unlock, &g_parse_lock };
            int rc = CreateIndexConcurrentlyPhase2(&ops);
            if (rc < 0) {
                rs->has_error = 1;
                strcpy(rs->error_sqlstate,
                       g_err.sqlstate[0] ? g_err.sqlstate : "XX000");
                snprintf(rs->error_message, sizeof(rs->error_message),
                         "%.500s", g_err.errorMsg[0] ? g_err.errorMsg
                         : "concurrent index build failed");
            } else {
                /* Phase 3: reconcile DML that occurred during Phase 2 */
                rc = CreateIndexConcurrentlyPhase3(&ops);
                if (rc < 0) {
                    rs->has_error = 1;
                    strcpy(rs->error_sqlstate, "XX000");
                    snprintf(rs->error_message, sizeof(rs->error_message),
                             "concurrent index build Phase 3 reconciliation failed");
                } else {
                    strcpy(rs->command_tag, "CREATE INDEX");
                }
            }
        }

        /* CTAS: intercept before normal SELECT collection */
        if (!rs->has_error && g_create.ctasMode != CTAS_NONE &&
            g_sel.lastTable[0] != '\0') {
            execute_ctas(g_sel.lastTable, rs, ctx);
            g_create.ctasMode = CTAS_NONE;
            g_sel.lastTable[0] = '\0';
        }
        /* Multi-table DELETE: join + per-target deletion */
        else if (!rs->has_error && g_del.multiDelete &&
                 g_sel.joinTableCount > 0) {
            {
                extern mutex_t g_dml_mutex;
                mutex_lock(&g_dml_mutex);
            }
            execute_multi_delete(rs, ctx);
            {
                extern mutex_t g_dml_mutex;
                mutex_unlock(&g_dml_mutex);
            }
            if (!rs->has_error)
                snprintf(rs->command_tag, sizeof(rs->command_tag),
                         "DELETE %d", g_del.rowCount);
            g_del.multiDelete = 0;
            g_del.deleteTargetCount = 0;
            g_sel.joinTableCount = 0;
            g_sel.lastTable[0] = '\0';
        }
        /* Multi-table UPDATE: join + per-target update */
        else if (!rs->has_error && g_upd.multiUpdate &&
                 g_sel.joinTableCount > 0) {
            {
                extern mutex_t g_dml_mutex;
                mutex_lock(&g_dml_mutex);
            }
            execute_multi_update(rs, ctx);
            {
                extern mutex_t g_dml_mutex;
                mutex_unlock(&g_dml_mutex);
            }
            if (!rs->has_error)
                snprintf(rs->command_tag, sizeof(rs->command_tag),
                         "UPDATE %d", g_upd.rowCount);
            g_upd.multiUpdate = 0;
            g_upd.setCount = 0;
            g_sel.joinTableCount = 0;
            g_sel.lastTable[0] = '\0';
        }
        /* INSERT...SELECT: intercept before normal SELECT collection.
         * The SELECT part was parsed but not collected yet; we collect
         * it inside execute_insert_select and feed rows to InsertProcess. */
        else if (!rs->has_error && g_ins.insertFromSelect &&
                 (g_sel.lastTable[0] != '\0' || g_sel.joinTableCount > 1)) {
            {
                extern mutex_t g_dml_mutex;
                mutex_lock(&g_dml_mutex);
            }
            execute_insert_select(
                g_sel.lastTable[0] ? g_sel.lastTable : g_sel.joinTables[0],
                rs, ctx);
            {
                extern mutex_t g_dml_mutex;
                mutex_unlock(&g_dml_mutex);
            }
            g_ins.insertFromSelect = 0;
            g_sel.lastTable[0] = '\0';
            g_sel.joinTableCount = 0;
        }
        /* Multi-table JOIN: if parser detected multiple tables, use join engine */
        else if (!rs->has_error && g_sel.joinTableCount > 1) {
            /* Take snapshot for MVCC visibility */
            if (ctx) {
                if (ctx->isolation_level >= 2 && ctx->snapshot_valid) {
                    /* REPEATABLE READ / SERIALIZABLE: reuse TX snapshot */
                } else {
                    mvcc_snapshot_take(&ctx->snapshot);
                    ctx->snapshot.my_xid = ctx->tx_xid;
                    ctx->snapshot_valid = 1;
                }
            }

            /* Build JoinPlan from parsed state (JoinPlan from join.h) */
            JoinPlan plan;
            memset(&plan, 0, sizeof(plan));
            plan.num_tables = g_sel.joinTableCount;
            for (int ji = 0; ji < g_sel.joinTableCount && ji < 8; ji++) {
                strncpy(plan.tables[ji].name, g_sel.joinTables[ji], 255);
                strncpy(plan.tables[ji].alias, g_sel.joinAliases[ji], 127);
                plan.join_types[ji] = g_sel.joinTypes[ji];
                plan.join_conds[ji] = g_sel.joinOnExprs[ji];
                /* Resolve table to get owner_node */
                TableDesc jtd;
                const char *jdb = ctx ? ctx->database : "evosql";
                const char *jsch = ctx ? ctx->schema : "default";
                if (cat_resolve_table(jdb, jsch, g_sel.joinTables[ji], &jtd) == 0) {
                    plan.tables[ji].owner_node = (int)jtd.owner_node_id;
                    plan.tables[ji].table_id = jtd.table_id;
                }
            }
            plan.where_expr = g_expr.whereExpr;

            rwlock_rdlock(&g_parse_lock);
            join_execute(&plan, rs, ctx, ctx ? &ctx->snapshot : NULL);
            rwlock_rdunlock(&g_parse_lock);

            /* Column projection: if SELECT specified columns (not *),
             * filter the join result to only include requested columns. */
            if (!rs->has_error && g_sel.columnCount > 0) {
                /* Map requested columns to join result positions */
                int col_map[64];
                int map_count = 0;
                for (int ci = 0; ci < g_sel.columnCount && ci < 64; ci++) {
                    col_map[ci] = -1;
                    for (int ji = 0; ji < rs->num_cols; ji++) {
                        if (strcasecmp(rs->columns[ji].name, g_sel.columns[ci]) == 0) {
                            col_map[ci] = ji;
                            break;
                        }
                    }
                    /* Fallback: try bare name match (e.g. "name" matches "c.name") */
                    if (col_map[ci] < 0) {
                        for (int ji = 0; ji < rs->num_cols; ji++) {
                            const char *dot = strrchr(rs->columns[ji].name, '.');
                            const char *bare = dot ? dot + 1 : rs->columns[ji].name;
                            if (strcasecmp(bare, g_sel.columns[ci]) == 0) {
                                col_map[ci] = ji;
                                break;
                            }
                        }
                    }
                    if (col_map[ci] >= 0) map_count++;
                }

                if (map_count > 0) {
                    /* Build projected result */
                    ResultSet projected;
                    result_init(&projected);
                    projected.is_select = 1;
                    for (int ci = 0; ci < g_sel.columnCount; ci++) {
                        if (col_map[ci] >= 0)
                            result_add_column(&projected, g_sel.columns[ci],
                                              rs->columns[col_map[ci]].pg_type_oid);
                        else
                            result_add_column(&projected, g_sel.columns[ci], 25);
                    }
                    for (int ri = 0; ri < rs->num_rows; ri++) {
                        int row = result_add_row(&projected);
                        if (row < 0) break;
                        for (int ci = 0; ci < g_sel.columnCount; ci++) {
                            if (col_map[ci] >= 0) {
                                if (rs->rows[ri].is_null[col_map[ci]])
                                    result_set_null(&projected, row, ci);
                                else if (rs->rows[ri].fields[col_map[ci]])
                                    result_set_field(&projected, row, ci,
                                                     rs->rows[ri].fields[col_map[ci]]);
                            } else {
                                result_set_null(&projected, row, ci);
                            }
                        }
                    }
                    /* Swap projected into rs */
                    result_free(rs);
                    *rs = projected;
                    snprintf(rs->command_tag, sizeof(rs->command_tag),
                             "SELECT %d", rs->num_rows);
                }
            }

            g_sel.lastTable[0] = '\0';
        }
        /* Collect SELECT results — runs under read lock, enabling
         * concurrent SELECT queries across different connections.
         * Take a snapshot before collecting for MVCC visibility. */
        else if (!rs->has_error && g_sel.lastTable[0] != '\0') {
            /* Take snapshot for MVCC visibility filtering */
            if (ctx) {
                if (ctx->isolation_level >= 2 && ctx->snapshot_valid) {
                    /* REPEATABLE READ / SERIALIZABLE: reuse TX snapshot */
                } else {
                    /* READ COMMITTED: per-statement snapshot */
                    mvcc_snapshot_take(&ctx->snapshot);
                    ctx->snapshot.my_xid = ctx->tx_xid;
                    ctx->snapshot_valid = 1;
                }
            }

            /* FOR UPDATE requires write lock (DML-level) for row locking.
             * Regular SELECT uses read lock (concurrent). */
            if (g_sel.forUpdate) {
                /* FOR UPDATE needs an XID for lock ownership */
                if (ctx && ctx->tx_xid == 0 && g_sel.forUpdate) {
                    /* Auto-transaction: assign ephemeral XID */
                    extern uint32_t mvcc_ensure_xid(uint32_t *);
                    mvcc_ensure_xid(&g_qctx->mvcc_xid);
                    if (!ctx->in_transaction)
                        ctx->tx_xid = g_qctx->mvcc_xid;
                }
                { extern mutex_t g_dml_mutex; mutex_lock(&g_dml_mutex); }
                collect_select_results(g_sel.lastTable, rs,
                                       ctx ? &ctx->snapshot : NULL,
                                       g_sel.forUpdate,
                                       ctx ? ctx->tx_xid : 0);
                { extern mutex_t g_dml_mutex; mutex_unlock(&g_dml_mutex); }
            } else {
                /* Pass tx_xid for Conflict Guard read tracking in SERIALIZABLE */
                uint32_t cg_xid = (ctx && ctx->serializable_locked) ? ctx->tx_xid : 0;
                rwlock_rdlock(&g_parse_lock);
                collect_select_results(g_sel.lastTable, rs,
                                       ctx ? &ctx->snapshot : NULL,
                                       0, cg_xid);
                rwlock_rdunlock(&g_parse_lock);
            }
            g_sel.lastTable[0] = '\0';
        } else if (!rs->has_error && g_expr.selectExprCount > 0 && is_select_query(sql)) {
            /* Tableless SELECT: SELECT 1+2, SELECT 1=1 AND 2=2, etc.
             * Evaluate expressions without any table context. */
            int s;
            rs->is_select = 1;
            rs->num_cols = g_expr.selectExprCount;
            for (s = 0; s < g_expr.selectExprCount; s++) {
                if (g_expr.selectExprs[s]) {
                    strncpy(rs->columns[s].name, g_expr.selectExprs[s]->display,
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
                for (s = 0; s < g_expr.selectExprCount; s++) {
                    if (g_expr.selectExprs[s]) {
                        char result[512];
                        int ok = expr_evaluate(g_expr.selectExprs[s],
                                               empty_names, empty_vals, 0,
                                               result, sizeof(result));
                        if (ok && strcmp(result, "\x01NULL\x01") != 0) {
                            if (expr_is_boolean(g_expr.selectExprs[s])) {
                                if (strcmp(result, "t") == 0 || strcasecmp(result, "true") == 0 || strcmp(result, "1") == 0)
                                    row_set(&rs->rows[row], s, "true");
                                else
                                    row_set(&rs->rows[row], s, "false");
                            } else {
                                row_set(&rs->rows[row], s, result);
                            }
                        } else {
                            row_set_null(&rs->rows[row], s);
                        }
                    }
                }
            }
            snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT 1");
        } else if (!rs->has_error && rs->command_tag[0] == '\0') {
            /* DDL/DML command — determine appropriate tag
             * Skip if already set (e.g., by execute_ctas) */
            if (is_create_query(sql)) {
                /* Distinguish CREATE TABLE, CREATE DATABASE, CREATE SCHEMA, CREATE INDEX */
                const char *p = sql;
                while (*p && isspace((unsigned char)*p)) p++;
                p += 6; /* skip "CREATE" */
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "DATABASE", 8) == 0)
                    strcpy(rs->command_tag, "CREATE DATABASE");
                else if (strncasecmp(p, "SCHEMA", 6) == 0)
                    strcpy(rs->command_tag, "CREATE SCHEMA");
                else if (strncasecmp(p, "INDEX", 5) == 0)
                    strcpy(rs->command_tag, "CREATE INDEX");
                else if (strncasecmp(p, "UNIQUE", 6) == 0)
                    strcpy(rs->command_tag, "CREATE INDEX");
                else
                    strcpy(rs->command_tag, "CREATE TABLE");
            }
            else if (is_insert_query(sql))
                snprintf(rs->command_tag, sizeof(rs->command_tag), "INSERT 0 %d", g_ins.rowCount > 0 ? g_ins.rowCount : 1);
            else if (is_update_query(sql))
                snprintf(rs->command_tag, sizeof(rs->command_tag), "UPDATE %d", g_upd.rowCount);
            else if (is_delete_query(sql))
                snprintf(rs->command_tag, sizeof(rs->command_tag), "DELETE %d", g_del.rowCount);
            else if (is_drop_query(sql)) {
                const char *p = sql;
                while (*p && isspace((unsigned char)*p)) p++;
                p += 4; /* skip "DROP" */
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "INDEX", 5) == 0)
                    strcpy(rs->command_tag, "DROP INDEX");
                else
                    strcpy(rs->command_tag, "DROP TABLE");
            }
            else if (is_truncate_query(sql))
                strcpy(rs->command_tag, "TRUNCATE TABLE");
            else if (is_analyze_query(sql))
                strcpy(rs->command_tag, "ANALYZE");
            else if (is_use_query(sql))
                strcpy(rs->command_tag, "USE");
            else if (is_set_query(sql))
                strcpy(rs->command_tag, "SET");
            else
                strcpy(rs->command_tag, "OK");
        }
    } else {
        /* Error occurred via longjmp (err_sys/err_quit/err_dump).
         * Clean up Flex scanner and release parser mutex if held.
         * Don't release if SERIALIZABLE transaction owns the lock. */
        /* Clean up scanner on error */
        if (local_scanner) {
            if (scan_buf) {
                yy_delete_buffer((YY_BUFFER_STATE)scan_buf, local_scanner);
                scan_buf = NULL;
            }
            yylex_destroy(local_scanner);
            local_scanner = NULL;
        }
        if (parse_mutex_held) {
            if (!(ctx && ctx->serializable_locked)) {
                extern mutex_t g_dml_mutex;
                mutex_unlock(&g_dml_mutex);
            }
            parse_mutex_held = 0;
        }
        rs->has_error = 1;
        strcpy(rs->error_sqlstate,
               g_err.sqlstate[0] ? g_err.sqlstate : "42000");
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

    /* Detect JOIN keyword once — used by Pass 3 and Pass 4 */
    int has_join = 0;
    {
        const char *j = sql;
        while (*j) {
            if (strncasecmp(j, "JOIN", 4) == 0 &&
                (j == sql || !isalnum((unsigned char)*(j-1))) &&
                !isalnum((unsigned char)j[4])) {
                has_join = 1;
                break;
            }
            j++;
        }
    }

    /* Pass 3: Remove "alias." prefix from qualified references.
     * SKIP for JOIN queries — qualified names needed for ON conditions. */
    {
        if (!has_join) {
            src = sql;
            dst = buf;
            while (*src) {
                if (*src == '.' && dst > buf &&
                    (isalpha((unsigned char)*(src - 1)) || *(src - 1) == '_') &&
                    (src[1] == '*' || isalpha((unsigned char)src[1]) || src[1] == '_')) {
                    char *alias_start = dst - 1;
                    while (alias_start > buf && (isalnum((unsigned char)*(alias_start-1)) || *(alias_start-1) == '_'))
                        alias_start--;
                    dst = alias_start;
                    src++;
                } else {
                    *dst++ = *src++;
                }
            }
            *dst = '\0';
            strcpy(sql, buf);
        }
    }

    /* Pass 4: Remove "AS <alias>" after table name in FROM clause ONLY.
     * DBeaver sends e.g. FROM students AS s — we strip " AS s".
     * SKIP for JOIN queries — aliases are needed by the parser. */
    {
        if (!has_join) {
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
                if (from_start && src >= from_start && src < from_end &&
                    (*src == ' ' || *src == '\t') &&
                    strncasecmp(src + 1, "AS ", 3) == 0 &&
                    (isalpha((unsigned char)src[4]) || src[4] == '_')) {
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

                        /* Check if it's a registered schema via catalog */
                        int is_schema = 0;
                        {
                            DatabaseDesc _dbDesc;
                            SchemaDesc _schDesc;
                            if (cat_find_database(db_get_current_database(), &_dbDesc) == 0 &&
                                cat_find_schema(_dbDesc.db_id, maybe_schema, &_schDesc) == 0) {
                                is_schema = 1;
                            }
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
/* ----------------------------------------------------------------
 *  Drop all temporary tables tracked in a session.
 *  Called on disconnect (pg_handler / evo_protocol cleanup).
 * ---------------------------------------------------------------- */
void session_drop_temp_tables(SessionCtx *ctx)
{
    if (!ctx || ctx->temp_table_count <= 0) return;

    /* Need a QueryContext for catalog/tapi operations */
    QueryContext *qctx = qctx_alloc();
    if (!qctx) return;

    /* Acquire DML mutex — page manager operations need serialization */
    { extern mutex_t g_dml_mutex; mutex_lock(&g_dml_mutex); }

    g_qctx = qctx;
    db_set_current_database(ctx->database);
    db_set_current_schema(ctx->schema);

    for (int i = 0; i < ctx->temp_table_count; i++) {
        uint32_t tid = ctx->temp_table_ids[i];

        /* Find table descriptor by ID */
        TableDesc td;
        if (cat_find_table_by_id(tid, &td) < 0)
            continue;

        fprintf(stderr, "[TEMP] Auto-dropping temporary table '%s' (id=%u)\n",
                td.table_name, tid);

        /* Destroy PK B+ tree */
        BTree2 pk_tree = tapi_pk_tree(&td);
        bt2_destroy(&pk_tree);

        /* Free all heap pages */
        tapi_free_heap_pages(&td);

        /* Destroy secondary index B+ trees */
        IndexDesc indexes[16];
        int nIdx = cat_list_indexes(td.table_id, indexes, 16);
        for (int ix = 0; ix < nIdx; ix++) {
            if (indexes[ix].index_type == 'P') continue;
            BTree2 idx_tree = { .root_page = indexes[ix].root_page };
            bt2_destroy(&idx_tree);
        }

        /* Drop from catalog */
        cat_drop_table(tid);
    }

    ctx->temp_table_count = 0;

    qctx_free(qctx);
    g_qctx = NULL;

    { extern mutex_t g_dml_mutex; mutex_unlock(&g_dml_mutex); }
}

/* Clean up GTT session-private data on disconnect.
 * Unlike local temp tables, the table DEFINITION stays in catalog. */
void session_cleanup_gtt(SessionCtx *ctx)
{
    if (!ctx || ctx->gtt_count <= 0) return;

    QueryContext *qctx = qctx_alloc();
    if (!qctx) return;

    /* Acquire DML mutex — page manager operations need serialization */
    { extern mutex_t g_dml_mutex; mutex_lock(&g_dml_mutex); }

    g_qctx = qctx;
    db_set_current_database(ctx->database);
    db_set_current_schema(ctx->schema);

    for (int i = 0; i < ctx->gtt_count; i++) {
        if (ctx->gtt_data[i].pk_root_page == 0) continue;

        fprintf(stderr, "[GTT] Cleaning up session data for table_id=%u\n",
                ctx->gtt_data[i].table_id);

        BTree2 pk = { .root_page = ctx->gtt_data[i].pk_root_page };
        bt2_destroy(&pk);

        if (ctx->gtt_data[i].heap_page != 0) {
            TableDesc tmpTd = {0};
            tmpTd.heap_page = ctx->gtt_data[i].heap_page;
            tapi_free_heap_pages(&tmpTd);
        }
    }

    ctx->gtt_count = 0;
    qctx_free(qctx);
    g_qctx = NULL;

    { extern mutex_t g_dml_mutex; mutex_unlock(&g_dml_mutex); }
}

void query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    char normalized[8192];
    char saved_db[256] = "";
    char saved_schema[256] = "";
    int qualified = 0;

    result_init(rs);

    /* Reject queries exceeding internal buffer size (prevents stack overflow) */
    size_t sql_len = strlen(sql);
    if (sql_len >= sizeof(normalized) - 4) {
        result_set_error(rs, "54000", "query too long (max 8KB)");
        return;
    }
    /* Reject queries with too many commas (proxy for column/value count) */
    {
        int commas = 0;
        for (size_t ci = 0; ci < sql_len; ci++)
            if (sql[ci] == ',') commas++;
        if (commas > 200) {
            result_set_error(rs, "54011", "too many columns or values (max 200)");
            return;
        }
    }

    /* If transaction is aborted, only allow ROLLBACK/COMMIT/SAVEPOINT/RELEASE */
    if (ctx && ctx->tx_aborted) {
        if (strncasecmp(sql, "ROLLBACK", 8) != 0 &&
            strncasecmp(sql, "COMMIT", 6) != 0 &&
            strncasecmp(sql, "END", 3) != 0 &&
            strncasecmp(sql, "SAVEPOINT", 9) != 0 &&
            strncasecmp(sql, "RELEASE", 7) != 0) {
            result_set_error(rs, "25P02",
                "current transaction is aborted, "
                "commands ignored until end of transaction block");
            return;
        }
    }

    /* ── Load per-connection session state into engine globals ── */
    if (ctx) {
        db_set_current_database(ctx->database);
        db_set_current_schema(ctx->schema);
        strncpy(g_last_insert_id, ctx->last_insert_id, sizeof(g_last_insert_id) - 1);
        g_last_insert_id[sizeof(g_last_insert_id) - 1] = '\0';
        g_gtt_overrides = ctx->gtt_data;
        g_gtt_override_count = ctx->gtt_count;
    }

    /* Distributed routing — forward to remote node if table is remote */
    {
        extern int dist_is_enabled(void);
        extern int dist_try_route(const char *sql, ResultSet *rs, SessionCtx *ctx);
        if (dist_is_enabled()) {
            extern rwlock_t g_parse_lock;
            rwlock_rdlock(&g_parse_lock);
            int routed = dist_try_route(sql, rs, ctx);
            rwlock_rdunlock(&g_parse_lock);
            if (routed) return;
        }
    }

    /* First, try catalog/internal queries (before normalization) */
    if (catalog_try_handle(sql, rs, ctx)) {
        /* ── Write back session state (USE/SET SCHEMA may have run) ── */
        if (ctx) {
            strncpy(ctx->database, db_get_current_database(), sizeof(ctx->database) - 1);
            ctx->database[sizeof(ctx->database) - 1] = '\0';
            strncpy(ctx->schema, db_get_current_schema(), sizeof(ctx->schema) - 1);
            ctx->schema[sizeof(ctx->schema) - 1] = '\0';
        }
        return;
    }

    /* Reset rs — catalog sub-handlers may have modified it before returning 0 */
    result_init(rs);

    /* ── Privilege enforcement ──
     * Determine which privilege is needed for this query type and
     * check it against the grant system.  admin always passes. */
    if (ctx && ctx->username[0] && strcasecmp(ctx->username, "admin") != 0) {
        const char *needed_priv = NULL;

        if (is_select_query(sql))        needed_priv = "SELECT";
        else if (is_insert_query(sql))   needed_priv = "INSERT";
        else if (is_update_query(sql))   needed_priv = "UPDATE";
        else if (is_delete_query(sql))   needed_priv = "DELETE";
        else if (is_create_query(sql))   needed_priv = "CREATE";
        else if (is_drop_query(sql))     needed_priv = "DROP";
        else if (is_truncate_query(sql)) needed_priv = "DELETE";
        else if (is_alter_query(sql))    needed_priv = "CREATE";

        if (needed_priv) {
            /* Extract table name from query for TABLE-level check.
             * For now, use the current database and schema context.
             * Table-level checking happens at DATABASE/SCHEMA scope first. */
            const char *db  = ctx->database;
            const char *sch = ctx->schema;

            if (!CheckPrivilege(ctx->username, db, sch, NULL, needed_priv)) {
                result_set_error(rs, "42501",
                    "Permission denied: insufficient privileges");
                return;
            }
        }
    }

    /* ── EXPLAIN prefix detection ── */
    if (is_explain_query(sql)) {
        const char *inner = sql;
        while (*inner && isspace((unsigned char)*inner)) inner++;
        inner += 7; /* skip "EXPLAIN" */
        while (*inner && isspace((unsigned char)*inner)) inner++;

        /* Build a query plan ResultSet */
        rs->is_select = 1;
        result_add_column(rs, "QUERY PLAN", PG_OID_TEXT);

        /* Determine scan type */
        char planLine[512];
        if (is_select_query(inner)) {
            /* Normalize inner query to extract table and WHERE info */
            char innerNorm[8192];
            strncpy(innerNorm, inner, sizeof(innerNorm) - 1);
            innerNorm[sizeof(innerNorm) - 1] = '\0';
            normalize_sql(innerNorm);

            /* Extract table name from FROM clause */
            char tblName[256] = "";
            {
                const char *f = innerNorm;
                while (*f) {
                    if (strncasecmp(f, "FROM", 4) == 0 &&
                        (f == innerNorm || !isalnum((unsigned char)*(f-1))) &&
                        (f[4] == ' ' || f[4] == '\t')) {
                        f += 4;
                        while (*f && isspace((unsigned char)*f)) f++;
                        int ti = 0;
                        while (*f && (isalnum((unsigned char)*f) || *f == '_') && ti < 255)
                            tblName[ti++] = *f++;
                        tblName[ti] = '\0';
                        break;
                    }
                    f++;
                }
            }

            /* Check if WHERE has a simple col = value or FUNC(col) = value */
            char whereCol[128] = "", whereVal[256] = "";
            int hasWhere = 0;
            int hasExprWhere = 0;
            {
                const char *w = innerNorm;
                while (*w) {
                    if (strncasecmp(w, "WHERE", 5) == 0 &&
                        (w == innerNorm || !isalnum((unsigned char)*(w-1))) &&
                        (w[5] == ' ' || w[5] == '\t')) {
                        w += 5;
                        while (*w && isspace((unsigned char)*w)) w++;
                        /* Simple parse: NAME = VALUE or FUNC(NAME) = VALUE */
                        int ci = 0;
                        while (*w && (isalnum((unsigned char)*w) || *w == '_') && ci < 127)
                            whereCol[ci++] = *w++;
                        whereCol[ci] = '\0';
                        while (*w && isspace((unsigned char)*w)) w++;
                        /* Check if it's a function call: FUNC(col) */
                        if (*w == '(') {
                            hasExprWhere = 1;
                            w++; /* skip ( */
                            /* Skip everything until matching ) */
                            int depth = 1;
                            while (*w && depth > 0) {
                                if (*w == '(') depth++;
                                else if (*w == ')') depth--;
                                w++;
                            }
                            while (*w && isspace((unsigned char)*w)) w++;
                        }
                        if (*w == '=') {
                            w++;
                            while (*w && isspace((unsigned char)*w)) w++;
                            int vi = 0;
                            if (*w == '\'') {
                                w++;
                                while (*w && *w != '\'' && vi < 255)
                                    whereVal[vi++] = *w++;
                            } else {
                                while (*w && !isspace((unsigned char)*w) && *w != ';' && vi < 255)
                                    whereVal[vi++] = *w++;
                            }
                            whereVal[vi] = '\0';
                            hasWhere = (whereCol[0] && whereVal[0]);
                        }
                        break;
                    }
                    w++;
                }
            }

            (void)hasExprWhere; /* used only for EXPLAIN context */

            /* Determine access method */
            const char *scanType = "Seq Scan";
            char indexName[256] = "";
            if (hasWhere && tblName[0]) {
                char tblPath[1024];
                db_table_path(tblName, tblPath, sizeof(tblPath));

                /* Check PK */
                int is_pk = 0;
                {
                    TableDesc _td;
                    ColumnDesc _cols[CAT_MAX_COLUMNS];
                    int _ncols = 0;
                    if (tapi_resolve(tblName, &_td, _cols, &_ncols) == 0) {
                        for (int ci = 0; ci < _ncols; ci++) {
                            if (_cols[ci].is_pk &&
                                strcasecmp(_cols[ci].col_name, whereCol) == 0) {
                                is_pk = 1;
                                break;
                            }
                        }
                    }
                }

                if (is_pk) {
                    scanType = "PK Lookup (Hash)";
                    snprintf(indexName, sizeof(indexName), " using PRIMARY KEY");
                } else {
                    /* Check B-tree index (single or composite) */
                    char idxNames[16][256], idxCols[16][256], idxPaths[16][1024];
                    char idxTypes[16];
                    int nIdx = index_list_with_types(tblPath, idxNames, idxCols,
                                                     idxPaths, idxTypes, 16);
                    int ix;
                    for (ix = 0; ix < nIdx; ix++) {
                        /* Exact single-column match */
                        if (strcasecmp(idxCols[ix], whereCol) == 0) {
                            if (idxTypes[ix] == 'H')
                                scanType = "Index Scan (Hash)";
                            else if (idxTypes[ix] == 'V')
                                scanType = "Index Scan (Unique Hash)";
                            else if (idxTypes[ix] == 'U')
                                scanType = "Index Scan (Unique B-tree)";
                            else
                                scanType = "Index Scan (B-tree)";
                            snprintf(indexName, sizeof(indexName),
                                     " using %s", idxNames[ix]);
                            break;
                        }
                        /* Composite index: check if whereCol is the leading column */
                        if (strchr(idxCols[ix], ',')) {
                            char firstCol[128];
                            strncpy(firstCol, idxCols[ix], sizeof(firstCol) - 1);
                            firstCol[sizeof(firstCol) - 1] = '\0';
                            char *comma = strchr(firstCol, ',');
                            if (comma) *comma = '\0';
                            if (strcasecmp(firstCol, whereCol) == 0) {
                                scanType = (idxTypes[ix] == 'U') ?
                                    "Index Scan (Unique Composite B-tree)" :
                                    "Index Scan (Composite B-tree)";
                                snprintf(indexName, sizeof(indexName),
                                         " using %s", idxNames[ix]);
                                break;
                            }
                        }
                    }

                    /* Check expression indexes if still Seq Scan */
                    if (strcmp(scanType, "Seq Scan") == 0) {
                        IndexDesc exIdxes[16];
                        int nExIdx = idx_load_secondary(tblName, exIdxes, 16);
                        for (int ei = 0; ei < nExIdx; ei++) {
                            if (exIdxes[ei].expr_def[0]) {
                                scanType = (exIdxes[ei].index_type == 'U') ?
                                    "Index Scan (Unique Expression B-tree)" :
                                    "Index Scan (Expression B-tree)";
                                snprintf(indexName, sizeof(indexName),
                                         " using %s", exIdxes[ei].index_name);
                                break;
                            }
                        }
                    }
                }
            }

            /* Add row estimate from ANALYZE stats if available */
            {
                char rowEstimate[64] = "";
                if (tblName[0]) {
                    TableDesc _etd;
                    ColumnDesc _ecols[CAT_MAX_COLUMNS];
                    int _encols = 0;
                    if (tapi_resolve(tblName, &_etd, _ecols, &_encols) == 0) {
                        TableStatsDesc _ets;
                        if (cat_get_table_stats(_etd.table_id, &_ets) == 0) {
                            uint64_t est = _ets.row_count;
                            if (hasWhere && est > 0) {
                                /* For equality on indexed column, estimate selectivity */
                                ColumnStatsDesc _ecs;
                                if (whereCol[0] &&
                                    cat_get_column_stats(_etd.table_id, whereCol, &_ecs) == 0 &&
                                    _ecs.distinct_count > 0) {
                                    est = _ets.row_count / _ecs.distinct_count;
                                    if (est == 0) est = 1;
                                }
                            }
                            snprintf(rowEstimate, sizeof(rowEstimate),
                                     "  (rows=%lu)", (unsigned long)est);
                        }
                    }
                }
                snprintf(planLine, sizeof(planLine), "%s on %s%s%s",
                         scanType, tblName[0] ? tblName : "(unknown)",
                         indexName, rowEstimate);
            }
        } else {
            snprintf(planLine, sizeof(planLine), "Utility Statement");
        }

        int row = result_add_row(rs);
        if (row >= 0)
            result_set_field(rs, row, 0, planLine);
        snprintf(rs->command_tag, sizeof(rs->command_tag), "EXPLAIN");

        if (ctx) {
            strncpy(ctx->database, db_get_current_database(), sizeof(ctx->database) - 1);
            ctx->database[sizeof(ctx->database) - 1] = '\0';
            strncpy(ctx->schema, db_get_current_schema(), sizeof(ctx->schema) - 1);
            ctx->schema[sizeof(ctx->schema) - 1] = '\0';
        }
        return;
    }

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

    {
        char redacted[256];
        sql_redact_password(redacted, sizeof(redacted), normalized);
        printf("[adaptor] Normalized SQL: %.200s%s\n", redacted,
               strlen(redacted) > 200 ? "..." : "");
        fflush(stdout);
    }

    /* ── Fast-path: PK/index lookup without yyparse ──
     * Pattern: SELECT <cols> FROM <table> WHERE <col> = <value>
     * Skips yyparse (~30μs savings) by extracting table/col/value via
     * string matching and calling collect_select_results directly. */
    if (is_select_query(normalized) && !is_explain_query(sql)) {
        if (try_fast_select(normalized, rs, ctx)) {
            /* Fast-path handled the query — skip parser */
            goto writeback_session;
        }
    }

    /* Parse selected columns from SQL for filtering.
     * For INSERT...SELECT, parse from the SELECT keyword. */
    if (is_insert_query(normalized)) {
        const char *sel = normalized;
        while (*sel) {
            if (strncasecmp(sel, "SELECT", 6) == 0 &&
                (sel == normalized || isspace((unsigned char)sel[-1])))
                break;
            sel++;
        }
        if (*sel)
            parse_select_columns(sel);
    } else {
        parse_select_columns(normalized);
    }

    /* Distributed: CREATE TABLE ... ON NODE N — strip suffix, set node ID */
    {
        extern __thread uint32_t g_dist_create_node_id;
        if (g_dist_create_node_id > 0 && is_create_query(normalized)) {
            /* Strip "ON NODE N" from the end of SQL for parser */
            char *on_node_pos = NULL;
            char *scan_node = normalized;
            while (*scan_node) {
                if (strncasecmp(scan_node, "ON NODE", 7) == 0 &&
                    (scan_node == normalized || isspace((unsigned char)scan_node[-1])))
                    on_node_pos = scan_node;
                scan_node++;
            }
            if (on_node_pos) {
                while (on_node_pos > normalized && isspace((unsigned char)on_node_pos[-1]))
                    on_node_pos--;
                *on_node_pos = '\0';
            }
        } else {
            g_dist_create_node_id = 0;
        }
    }

    /* Real EvoSQL query */
    execute_via_parser(normalized, rs, ctx);

    /* Register local temporary table in session context (auto-drop on disconnect) */
    if (ctx && !rs->has_error && g_create.isTemporary == 1 && g_create.lastCreatedTableId > 0) {
        if (ctx->temp_table_count < 64) {
            ctx->temp_table_ids[ctx->temp_table_count++] = g_create.lastCreatedTableId;
            fprintf(stderr, "[TEMP] Registered temporary table (id=%u) for session\n",
                    g_create.lastCreatedTableId);
        }
    }

writeback_session:
    /* Restore original db/schema context if we switched */
    if (qualified) {
        db_set_current_database(saved_db);
        db_set_current_schema(saved_schema);
    }

    /* ── Write back session state to per-connection context ──
     * USE <database> / SET SCHEMA <name> change the globals;
     * capture those changes so they stick for this connection. */
    if (ctx) {
        strncpy(ctx->database, db_get_current_database(), sizeof(ctx->database) - 1);
        ctx->database[sizeof(ctx->database) - 1] = '\0';
        strncpy(ctx->schema, db_get_current_schema(), sizeof(ctx->schema) - 1);
        ctx->schema[sizeof(ctx->schema) - 1] = '\0';
        strncpy(ctx->last_insert_id, g_last_insert_id, sizeof(ctx->last_insert_id) - 1);
        ctx->last_insert_id[sizeof(ctx->last_insert_id) - 1] = '\0';
        ctx->gtt_count = g_gtt_override_count;
        g_gtt_overrides = NULL;
        g_gtt_override_count = 0;
    }
}
