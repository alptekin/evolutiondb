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
#include "../evolution/db/mvcc.h"

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

static int is_copy_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "COPY", 4) == 0 &&
            (sql[4] == '\0' || isspace((unsigned char)sql[4]) || sql[4] == '('));
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

static int is_call_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "CALL", 4) == 0 && isspace((unsigned char)sql[4]));
}

static int is_create_procedure_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    if (strncasecmp(sql, "CREATE", 6) != 0) return 0;
    sql += 6;
    while (*sql && isspace((unsigned char)*sql)) sql++;
    if (strncasecmp(sql, "OR", 2) == 0 && isspace((unsigned char)sql[2])) {
        sql += 2;
        while (*sql && isspace((unsigned char)*sql)) sql++;
        if (strncasecmp(sql, "REPLACE", 7) == 0) { sql += 7; while (*sql && isspace((unsigned char)*sql)) sql++; }
    }
    return (strncasecmp(sql, "PROCEDURE", 9) == 0 || strncasecmp(sql, "FUNCTION", 8) == 0);
}

static int is_drop_procedure_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    if (strncasecmp(sql, "DROP", 4) != 0) return 0;
    sql += 4;
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "PROCEDURE", 9) == 0 || strncasecmp(sql, "FUNCTION", 8) == 0);
}

static int is_create_trigger_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    if (strncasecmp(sql, "CREATE", 6) != 0) return 0;
    sql += 6;
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "TRIGGER", 7) == 0);
}

static int is_drop_trigger_query(const char *sql)
{
    while (*sql && isspace((unsigned char)*sql)) sql++;
    if (strncasecmp(sql, "DROP", 4) != 0) return 0;
    sql += 4;
    while (*sql && isspace((unsigned char)*sql)) sql++;
    return (strncasecmp(sql, "TRIGGER", 7) == 0);
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
    case 23: return PG_OID_JSON;    /* JSON */
    default: return PG_OID_TEXT;    /* BLOB, TEXT, ENUM, SET, etc. */
    }
}

/* Infer PG type OID from expression AST node type.
 * Used for tableless SELECT (e.g. SELECT 1, SELECT 'abc') where there is
 * no table column to derive the type from. */
static int expr_infer_pg_oid(const ExprNode *e)
{
    if (!e) return PG_OID_TEXT;
    switch (e->type) {
    case EXPR_LITERAL_INT:
    case EXPR_COUNT_STAR:
    case EXPR_COUNT:
        return PG_OID_INT4;
    case EXPR_LITERAL_FLOAT:
    case EXPR_SUM:
    case EXPR_AVG:
        return PG_OID_FLOAT8;
    case EXPR_LITERAL_BOOL:
        return PG_OID_BOOL;
    case EXPR_LITERAL_STR:
        return PG_OID_TEXT;
    case EXPR_ADD:
    case EXPR_SUB:
    case EXPR_MUL:
    case EXPR_DIV:
    case EXPR_MOD:
    case EXPR_NEG:
        /* Arithmetic: int if both children are int, else float */
        if (e->left && e->left->type == EXPR_LITERAL_INT &&
            (!e->right || e->right->type == EXPR_LITERAL_INT))
            return PG_OID_INT4;
        return PG_OID_FLOAT8;
    case EXPR_CMP_EQ: case EXPR_CMP_NE:
    case EXPR_CMP_LT: case EXPR_CMP_GT:
    case EXPR_CMP_LE: case EXPR_CMP_GE:
    case EXPR_AND: case EXPR_OR: case EXPR_NOT: case EXPR_XOR:
    case EXPR_IS_NULL: case EXPR_IS_NOT_NULL:
    case EXPR_LIKE: case EXPR_NOT_LIKE:
        return PG_OID_BOOL;
    case EXPR_CURRENT_TIMESTAMP:
    case EXPR_CURRENT_DATE:
    case EXPR_CURRENT_TIME:
        return PG_OID_TEXT;  /* timestamp as text */
    default:
        return PG_OID_TEXT;
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
    case PG_OID_JSON:    return 230000;    /* JSON */
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
    /* Aggregates and window functions in SELECT prevent streaming */
    int i;
    for (i = 0; i < g_expr.selectExprCount; i++) {
        if (!g_expr.selectExprs[i]) continue;
        int t = g_expr.selectExprs[i]->type;
        if (t == EXPR_COUNT_STAR || t == EXPR_COUNT ||
            t == EXPR_SUM || t == EXPR_AVG ||
            t == EXPR_MIN || t == EXPR_MAX)
            return 0;
        if (expr_is_window(g_expr.selectExprs[i]))
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
    static __thread char s_fields[CAT_MAX_COLUMNS][256]; /* thread-local storage for field strings */
    int nullArr[CAT_MAX_COLUMNS];
    int nf = tup_extract_fields(recBuf, recLen, cols, ncols,
                                s_fields, nullArr, maxCols < CAT_MAX_COLUMNS ? maxCols : CAT_MAX_COLUMNS);
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
    char fields[CAT_MAX_COLUMNS][256];
    int nullArr[CAT_MAX_COLUMNS];
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
    ExprNode *exprs[CAT_MAX_COLUMNS];   /* NULL for non-virtual columns */
    char      colNames[CAT_MAX_COLUMNS][128]; /* column names for expr_evaluate */
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

    char colVals[CAT_MAX_COLUMNS][256];
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
                        char fields[CAT_MAX_COLUMNS][256];
                        int nullArr[CAT_MAX_COLUMNS];
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
 *  Window function post-processing — qsort comparator context
 * ---------------------------------------------------------------- */
static __thread ResultSet *g_win_rs;
static __thread int g_win_part_cols[8];
static __thread int g_win_part_col_count;
static __thread int g_win_ord_cols[8];
static __thread int g_win_ord_descs[8];
static __thread int g_win_ord_col_count;

static int win_col_cmp(ResultSet *rs, int ra, int rb, int col) {
    int na = rs->rows[ra].is_null[col];
    int nb = rs->rows[rb].is_null[col];
    if (na && nb) return 0;
    if (na) return 1;
    if (nb) return -1;
    const char *va = rs->rows[ra].fields[col];
    const char *vb = rs->rows[rb].fields[col];
    char *ea, *eb;
    double da = strtod(va ? va : "", &ea);
    double db = strtod(vb ? vb : "", &eb);
    if (*ea == '\0' && *eb == '\0' && va && vb && va[0] && vb[0])
        return (da > db) ? 1 : (da < db) ? -1 : 0;
    return strcasecmp(va ? va : "", vb ? vb : "");
}

static int win_sort_cmp(const void *a, const void *b) {
    int ia = *(const int *)a, ib = *(const int *)b;
    int cmp = 0, k;
    for (k = 0; k < g_win_part_col_count && cmp == 0; k++)
        cmp = win_col_cmp(g_win_rs, ia, ib, g_win_part_cols[k]);
    for (k = 0; k < g_win_ord_col_count && cmp == 0; k++) {
        cmp = win_col_cmp(g_win_rs, ia, ib, g_win_ord_cols[k]);
        if (g_win_ord_descs[k]) cmp = -cmp;
    }
    return cmp;
}

static int win_same_partition(ResultSet *rs, int ra, int rb,
                              int *pcols, int pcnt) {
    int k;
    for (k = 0; k < pcnt; k++) {
        if (win_col_cmp(rs, ra, rb, pcols[k]) != 0) return 0;
    }
    return 1;
}

static int win_same_order(ResultSet *rs, int ra, int rb,
                          int *ocols, int ocnt) {
    int k;
    for (k = 0; k < ocnt; k++) {
        if (win_col_cmp(rs, ra, rb, ocols[k]) != 0) return 0;
    }
    return 1;
}

/* ----------------------------------------------------------------
 *  Window function post-processing
 * ---------------------------------------------------------------- */
static void apply_window_functions(ResultSet *rs)
{
    if (g_expr.windowSpecCount == 0 || rs->num_rows == 0 || rs->num_cols == 0)
        return;

    int nrows = rs->num_rows;
    int w;

    for (w = 0; w < g_expr.windowSpecCount; w++) {
        WindowSpec *ws = &g_expr.windowSpecs[w];

        /* Resolve multi-column partition indices */
        int part_cols[8], part_cnt = 0;
        { int k, c;
          for (k = 0; k < ws->partition_col_count && k < 8; k++) {
            for (c = 0; c < rs->num_cols; c++) {
                if (strcasecmp(rs->columns[c].name, ws->partition_cols[k]) == 0) {
                    part_cols[part_cnt++] = c; break;
                }
            }
          }
        }

        /* Resolve multi-column order indices */
        int ord_cols[8], ord_descs[8], ord_cnt = 0;
        { int k, c;
          for (k = 0; k < ws->order_col_count && k < 8; k++) {
            for (c = 0; c < rs->num_cols; c++) {
                if (strcasecmp(rs->columns[c].name, ws->order_cols[k]) == 0) {
                    ord_cols[ord_cnt] = c;
                    ord_descs[ord_cnt] = ws->order_descs[k];
                    ord_cnt++; break;
                }
            }
          }
        }

        /* Resolve argument column index */
        int arg_col = -1;
        if (ws->arg_expr && ws->arg_expr->type == EXPR_COLUMN) {
            int c;
            for (c = 0; c < rs->num_cols; c++) {
                if (strcasecmp(rs->columns[c].name, ws->arg_expr->val.col_name) == 0) {
                    arg_col = c; break;
                }
            }
        }

        /* Build sorted index array + qsort */
        int *sorted = malloc(nrows * sizeof(int));
        if (!sorted) continue;
        int i;
        for (i = 0; i < nrows; i++) sorted[i] = i;

        g_win_rs = rs;
        memcpy(g_win_part_cols, part_cols, sizeof(int) * part_cnt);
        g_win_part_col_count = part_cnt;
        memcpy(g_win_ord_cols, ord_cols, sizeof(int) * ord_cnt);
        memcpy(g_win_ord_descs, ord_descs, sizeof(int) * ord_cnt);
        g_win_ord_col_count = ord_cnt;
        qsort(sorted, nrows, sizeof(int), win_sort_cmp);

        /* Allocate per-original-row result values */
        char **win_vals = calloc(nrows, sizeof(char *));
        if (!win_vals) { free(sorted); continue; }

        /* Walk sorted rows, compute per-partition */
        int part_start = 0;
        while (part_start < nrows) {
            int part_end = part_start + 1;
            if (part_cnt == 0) {
                part_end = nrows;
            } else {
                while (part_end < nrows &&
                       win_same_partition(rs, sorted[part_start], sorted[part_end],
                                          part_cols, part_cnt))
                    part_end++;
            }

            int ft = ws->func_type;
            int part_size = part_end - part_start;

            if (ft == EXPR_WIN_SUM || ft == EXPR_WIN_COUNT || ft == EXPR_WIN_COUNT_STAR ||
                ft == EXPR_WIN_AVG || ft == EXPR_WIN_MIN || ft == EXPR_WIN_MAX) {
                /* Window aggregates: compute over entire partition */
                double sum = 0; int count = 0;
                double min_v = 0, max_v = 0;
                int min_init = 0, max_init = 0;
                for (i = part_start; i < part_end; i++) {
                    int row_idx = sorted[i];
                    if (ft == EXPR_WIN_COUNT_STAR) { count++; continue; }
                    if (arg_col < 0) continue;
                    if (rs->rows[row_idx].is_null[arg_col]) continue;
                    const char *v = rs->rows[row_idx].fields[arg_col];
                    if (!v || !v[0]) continue;
                    double dv = atof(v);
                    count++; sum += dv;
                    if (!min_init || dv < min_v) { min_v = dv; min_init = 1; }
                    if (!max_init || dv > max_v) { max_v = dv; max_init = 1; }
                }
                char buf[64];
                for (i = part_start; i < part_end; i++) {
                    int row_idx = sorted[i];
                    switch (ft) {
                    case EXPR_WIN_SUM:
                        if (sum == (int)sum) snprintf(buf, sizeof(buf), "%d", (int)sum);
                        else snprintf(buf, sizeof(buf), "%.6g", sum);
                        break;
                    case EXPR_WIN_COUNT: case EXPR_WIN_COUNT_STAR:
                        snprintf(buf, sizeof(buf), "%d", count); break;
                    case EXPR_WIN_AVG:
                        if (count > 0) snprintf(buf, sizeof(buf), "%.6g", sum / count);
                        else snprintf(buf, sizeof(buf), "0");
                        break;
                    case EXPR_WIN_MIN:
                        if (min_init) { if (min_v == (int)min_v) snprintf(buf, sizeof(buf), "%d", (int)min_v);
                        else snprintf(buf, sizeof(buf), "%.6g", min_v); }
                        else buf[0] = '\0';
                        break;
                    case EXPR_WIN_MAX:
                        if (max_init) { if (max_v == (int)max_v) snprintf(buf, sizeof(buf), "%d", (int)max_v);
                        else snprintf(buf, sizeof(buf), "%.6g", max_v); }
                        else buf[0] = '\0';
                        break;
                    default: buf[0] = '\0'; break;
                    }
                    win_vals[row_idx] = strdup(buf);
                }
            } else {
                /* Ranking + offset + statistical functions */
                int rank = 1, dense_rank = 1;
                for (i = part_start; i < part_end; i++) {
                    int row_idx = sorted[i];
                    char buf[256];
                    buf[0] = '\0';

                    /* Check if order values changed from previous row */
                    int same_ord = 0;
                    if (i > part_start && ord_cnt > 0)
                        same_ord = win_same_order(rs, sorted[i-1], sorted[i],
                                                  ord_cols, ord_cnt);

                    switch (ft) {
                    case EXPR_ROW_NUMBER:
                        snprintf(buf, sizeof(buf), "%d", i - part_start + 1);
                        break;
                    case EXPR_RANK:
                        if (i > part_start && !same_ord)
                            rank = i - part_start + 1;
                        snprintf(buf, sizeof(buf), "%d", rank);
                        break;
                    case EXPR_DENSE_RANK:
                        if (i > part_start && !same_ord)
                            dense_rank++;
                        snprintf(buf, sizeof(buf), "%d", dense_rank);
                        break;
                    case EXPR_WIN_LEAD: {
                        int off = (ws->offset > 0) ? ws->offset : 1;
                        int target = i + off;
                        if (target < part_end && arg_col >= 0) {
                            int tr = sorted[target];
                            if (!rs->rows[tr].is_null[arg_col]) {
                                const char *v = rs->rows[tr].fields[arg_col];
                                snprintf(buf, sizeof(buf), "%s", v ? v : "");
                            } else if (ws->default_val[0])
                                snprintf(buf, sizeof(buf), "%s", ws->default_val);
                            else { win_vals[row_idx] = NULL; continue; }
                        } else if (ws->default_val[0])
                            snprintf(buf, sizeof(buf), "%s", ws->default_val);
                        else { win_vals[row_idx] = NULL; continue; }
                        break;
                    }
                    case EXPR_WIN_LAG: {
                        int off = (ws->offset > 0) ? ws->offset : 1;
                        int target = i - off;
                        if (target >= part_start && arg_col >= 0) {
                            int tr = sorted[target];
                            if (!rs->rows[tr].is_null[arg_col]) {
                                const char *v = rs->rows[tr].fields[arg_col];
                                snprintf(buf, sizeof(buf), "%s", v ? v : "");
                            } else if (ws->default_val[0])
                                snprintf(buf, sizeof(buf), "%s", ws->default_val);
                            else { win_vals[row_idx] = NULL; continue; }
                        } else if (ws->default_val[0])
                            snprintf(buf, sizeof(buf), "%s", ws->default_val);
                        else { win_vals[row_idx] = NULL; continue; }
                        break;
                    }
                    case EXPR_WIN_NTILE: {
                        int n = ws->offset;
                        if (n <= 0) n = 1;
                        int bucket = ((i - part_start) * n / part_size) + 1;
                        if (bucket > n) bucket = n;
                        snprintf(buf, sizeof(buf), "%d", bucket);
                        break;
                    }
                    case EXPR_WIN_PERCENT_RANK: {
                        if (i > part_start && !same_ord)
                            rank = i - part_start + 1;
                        double pr = (part_size <= 1) ? 0.0 :
                            (double)(rank - 1) / (double)(part_size - 1);
                        snprintf(buf, sizeof(buf), "%.6g", pr);
                        break;
                    }
                    case EXPR_WIN_CUME_DIST: {
                        /* Count how many rows have order value <= current */
                        int le = 0, j;
                        for (j = part_start; j < part_end; j++) {
                            int c = win_col_cmp(rs, sorted[j], sorted[i],
                                                ord_cnt > 0 ? ord_cols[0] : 0);
                            if (ord_cnt > 0 && g_win_ord_descs[0]) c = -c;
                            if (c <= 0) le++;
                        }
                        double cd = (double)le / (double)part_size;
                        snprintf(buf, sizeof(buf), "%.6g", cd);
                        break;
                    }
                    default: buf[0] = '\0'; break;
                    }
                    win_vals[row_idx] = strdup(buf);
                }
            }
            part_start = part_end;
        }

        /* Add synthetic column to ResultSet */
        int new_col = rs->num_cols;
        if (new_col < CAT_MAX_COLUMNS) {
            const char *col_name = "?window?";
            int idx = ws->expr_idx;
            if (idx >= 0 && idx < g_expr.selectExprCount && g_expr.selectExprs[idx])
                col_name = g_expr.selectExprs[idx]->display;
            result_add_column(rs, col_name, 20);
            for (i = 0; i < nrows; i++) {
                if (win_vals[i]) {
                    row_set(&rs->rows[i], new_col, win_vals[i]);
                    rs->rows[i].num_fields = rs->num_cols;
                } else {
                    row_set_null(&rs->rows[i], new_col);
                    rs->rows[i].num_fields = rs->num_cols;
                }
            }
        }

        for (i = 0; i < nrows; i++) free(win_vals[i]);
        free(win_vals);
        free(sorted);
    }
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
        char streamColNames[CAT_MAX_COLUMNS][128];
        int limitVal = -1, offsetVal = 0, skipped = 0;
        if (streaming) {
            int c;
            for (c = 0; c < rs->num_cols && c < CAT_MAX_COLUMNS; c++) {
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
                    const char *fieldPtrs[CAT_MAX_COLUMNS];
                    int  fieldNulls[CAT_MAX_COLUMNS];
                    memset(fieldPtrs, 0, sizeof(fieldPtrs));
                    memset(fieldNulls, 0, sizeof(fieldNulls));
                    parse_record_fields(recBuf, recLen, allCols, ncols,
                                        fieldPtrs, fieldNulls, rs->num_cols,
                                        rs->columns);

                    /* Apply WHERE inline */
                    if (g_expr.whereExpr) {
                        char colValues[CAT_MAX_COLUMNS][256];
                        int c;
                        for (c = 0; c < rs->num_cols && c < CAT_MAX_COLUMNS; c++) {
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
            char predColNames[CAT_MAX_COLUMNS][128];
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
        char colNames[CAT_MAX_COLUMNS][128];
        int c;
        for (c = 0; c < rs->num_cols && c < CAT_MAX_COLUMNS; c++) {
            strncpy(colNames[c], rs->columns[c].name, 127);
            colNames[c][127] = '\0';
        }

        int dst = 0;
        int r;
        for (r = 0; r < rs->num_rows; r++) {
            char colValues[CAT_MAX_COLUMNS][256];
            for (c = 0; c < rs->num_cols && c < CAT_MAX_COLUMNS; c++) {
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
            char colNames[CAT_MAX_COLUMNS][128];
            int origNumCols = rs->num_cols;
            int origNumRows = rs->num_rows;
            {
                int c;
                for (c = 0; c < origNumCols && c < CAT_MAX_COLUMNS; c++) {
                    strncpy(colNames[c], rs->columns[c].name, 127);
                    colNames[c][127] = '\0';
                }
            }

            /* --- Helper: build colValues for a given row index --- */
            #define BUILD_COL_VALUES(rowIdx, colVals) do { \
                int _c; \
                for (_c = 0; _c < origNumCols && _c < CAT_MAX_COLUMNS; _c++) { \
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
                    char colValues[CAT_MAX_COLUMNS][256];
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
                            char colValues[CAT_MAX_COLUMNS][256];
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
                            char colValues[CAT_MAX_COLUMNS][256];
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
                            char colValues[CAT_MAX_COLUMNS][256];
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
                    } else if (g_expr.selectExprs[s]->type == EXPR_GROUP_CONCAT) {
                        char concat_buf[4096] = "";
                        const char *sep = g_expr.selectExprs[s]->val.strval[0]
                                          ? g_expr.selectExprs[s]->val.strval : ",";
                        int first = 1, r;
                        for (r = 0; r < origNumRows; r++) {
                            if (groups[r] != gi) continue;
                            char colValues[CAT_MAX_COLUMNS][256];
                            BUILD_COL_VALUES(r, colValues);
                            char result[MAX_FIELD_LEN];
                            if (expr_evaluate(g_expr.selectExprs[s]->left,
                                    (const char (*)[128])colNames,
                                    (const char (*)[256])colValues,
                                    origNumCols, result, sizeof(result)) &&
                                strcmp(result, NULL_MARKER) != 0) {
                                if (!first) strncat(concat_buf, sep,
                                    sizeof(concat_buf) - strlen(concat_buf) - 1);
                                strncat(concat_buf, result,
                                    sizeof(concat_buf) - strlen(concat_buf) - 1);
                                first = 0;
                            }
                        }
                        if (first)
                            row_set_null(&aggRow, s);
                        else
                            row_set(&aggRow, s, concat_buf);
                    } else {
                        /* Non-aggregate expression — evaluate against first row of group */
                        int firstRow = groupFirstRow[gi];
                        if (origNumRows > 0) {
                            char colValues[CAT_MAX_COLUMNS][256];
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
                    char havCols[CAT_MAX_COLUMNS][128];
                    char havVals[CAT_MAX_COLUMNS][256];
                    int havColCount = 0;
                    int hc;

                    /* First: add SELECT expression results (aggregates + group cols) */
                    for (hc = 0; hc < g_expr.selectExprCount && havColCount < CAT_MAX_COLUMNS; hc++) {
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
                                    char cv[CAT_MAX_COLUMNS][256];
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
                                    char cv[CAT_MAX_COLUMNS][256];
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
                                    char cv[CAT_MAX_COLUMNS][256];
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
                    for (hc = 0; hc < origNumCols && havColCount < CAT_MAX_COLUMNS; hc++) {
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

    /* --- Window function post-processing (after GROUP BY, before ORDER BY) --- */
    apply_window_functions(rs);

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
            /* Ordinal position: ORDER BY 1, 2, ... */
            char *endp;
            long ord = strtol(g_sel.orderByColumns[k], &endp, 10);
            if (*endp == '\0' && g_sel.orderByColumns[k][0] != '\0' &&
                ord >= 1 && ord <= rs->num_cols) {
                orderCols[k] = (int)(ord - 1);
            } else {
                /* Column name matching */
                for (c = 0; c < rs->num_cols; c++) {
                    if (strcasecmp(rs->columns[c].name, g_sel.orderByColumns[k]) == 0) {
                        orderCols[k] = c;
                        break;
                    }
                }
            }
            if (orderCols[k] >= 0)
                numOrderKeys = k + 1;
        }
        if (numOrderKeys > 0) {
            /* qsort with multi-key comparison (reuse window sort context) */
            g_win_rs = rs;
            g_win_part_col_count = 0; /* no partition keys for ORDER BY */
            memcpy(g_win_ord_cols, orderCols, sizeof(int) * numOrderKeys);
            memcpy(g_win_ord_descs, orderDescs, sizeof(int) * numOrderKeys);
            g_win_ord_col_count = numOrderKeys;

            /* Build index array, sort, then reorder rows */
            int *idx = malloc(rs->num_rows * sizeof(int));
            if (idx) {
                int i;
                for (i = 0; i < rs->num_rows; i++) idx[i] = i;
                qsort(idx, rs->num_rows, sizeof(int), win_sort_cmp);

                /* Reorder rows in-place using sorted index */
                Row *tmp = malloc(rs->num_rows * sizeof(Row));
                if (tmp) {
                    for (i = 0; i < rs->num_rows; i++)
                        tmp[i] = rs->rows[idx[i]];
                    memcpy(rs->rows, tmp, rs->num_rows * sizeof(Row));
                    free(tmp);
                }
                free(idx);
            }
        }
    } else if (g_sel.orderByColumn[0] != '\0' && rs->num_rows > 1) {
        /* Legacy single-column ORDER BY fallback — also via qsort */
        int orderCol = -1;
        int c;
        for (c = 0; c < rs->num_cols; c++) {
            if (strcasecmp(rs->columns[c].name, g_sel.orderByColumn) == 0) {
                orderCol = c;
                break;
            }
        }
        if (orderCol >= 0) {
            g_win_rs = rs;
            g_win_part_col_count = 0;
            g_win_ord_cols[0] = orderCol;
            g_win_ord_descs[0] = g_sel.orderByDesc;
            g_win_ord_col_count = 1;

            int *idx = malloc(rs->num_rows * sizeof(int));
            if (idx) {
                int i;
                for (i = 0; i < rs->num_rows; i++) idx[i] = i;
                qsort(idx, rs->num_rows, sizeof(int), win_sort_cmp);

                Row *tmp = malloc(rs->num_rows * sizeof(Row));
                if (tmp) {
                    for (i = 0; i < rs->num_rows; i++)
                        tmp[i] = rs->rows[idx[i]];
                    memcpy(rs->rows, tmp, rs->num_rows * sizeof(Row));
                    free(tmp);
                }
                free(idx);
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
            char colNames[CAT_MAX_COLUMNS][128];
            int origNumCols = rs->num_cols;
            {
                int c;
                for (c = 0; c < origNumCols && c < CAT_MAX_COLUMNS; c++) {
                    strncpy(colNames[c], rs->columns[c].name, 127);
                    colNames[c][127] = '\0';
                }
            }

            if (has_arithmetic) {
                /* Build new column definitions for the result */
                ColumnInfo *origCols = (ColumnInfo *)malloc(sizeof(ColumnInfo) * (origNumCols > 0 ? origNumCols : 1));
                if (origCols)
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
                        char colValues[CAT_MAX_COLUMNS][256];
                        for (c = 0; c < origNumCols && c < CAT_MAX_COLUMNS; c++) {
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
                        row_init(&rs->rows[r], g_expr.selectExprCount);

                        for (c = 0; c < g_expr.selectExprCount; c++) {
                            if (!g_expr.selectExprs[c]) {
                                row_set_null(&rs->rows[r], c);
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
                free(origCols);
            } else {
                /* All expressions are plain columns — use simple column filtering */
                int colMap[CAT_MAX_COLUMNS];
                int mapCount = 0;
                int s, c, r;

                for (s = 0; s < g_expr.selectExprCount && mapCount < CAT_MAX_COLUMNS; s++) {
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
                    ColumnInfo *newCols = (ColumnInfo *)malloc(sizeof(ColumnInfo) * mapCount);
                    if (newCols) {
                        for (s = 0; s < mapCount; s++) {
                            newCols[s] = rs->columns[colMap[s]];
                            newCols[s].attnum = s + 1;
                            if (g_expr.selectExprs[s] && g_expr.selectExprs[s]->display[0] &&
                                strcasecmp(g_expr.selectExprs[s]->display,
                                           g_expr.selectExprs[s]->val.col_name) != 0) {
                                strncpy(newCols[s].name, g_expr.selectExprs[s]->display,
                                        sizeof(newCols[s].name) - 1);
                            }
                        }
                        memcpy(rs->columns, newCols, sizeof(ColumnInfo) * mapCount);
                        free(newCols);
                        rs->num_cols = mapCount;

                        for (r = 0; r < rs->num_rows; r++) {
                            Row newRow;
                            memset(&newRow, 0, sizeof(Row));
                            row_init(&newRow, mapCount);
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
        int myCols[CAT_MAX_COLUMNS];
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
            char resolvedCols[CAT_MAX_COLUMNS][128];
            char resolvedVals[CAT_MAX_COLUMNS][256];
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
            int col_map[CAT_MAX_COLUMNS];
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
        ColumnDesc cols[CAT_MAX_COLUMNS];
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
/* User variable lookup callback */
static int evo_uservar_lookup(const char *name, char *out, int out_size, void *ctx)
{
    SessionCtx *session = (SessionCtx *)ctx;
    if (!session) return -1;
    for (int i = 0; i < session->user_var_count; i++) {
        if (strcasecmp(session->user_var_names[i], name) == 0) {
            strncpy(out, session->user_var_values[i], out_size - 1);
            out[out_size - 1] = '\0';
            return 0;
        }
    }
    return -1; /* not found */
}

/* Subquery execution callback — called from expr_evaluate via function pointer.
 * Executes inner SELECT via recursive query_execute, returns first column values. */
static int evo_subquery_exec(const char *sql, char out_values[][256],
                              int *out_count, int max_values, void *ctx)
{
    SessionCtx *session = (SessionCtx *)ctx;
    ResultSet rs;
    memset(&rs, 0, sizeof(rs));
    result_init(&rs);
    query_execute(sql, &rs, session);
    *out_count = 0;
    for (int r = 0; r < rs.num_rows && *out_count < max_values; r++) {
        if (rs.rows[r].fields[0] && !rs.rows[r].is_null[0]) {
            strncpy(out_values[*out_count], rs.rows[r].fields[0], 255);
            out_values[*out_count][255] = '\0';
            (*out_count)++;
        }
    }
    int err = rs.has_error;
    result_free(&rs);
    return err ? -1 : 0;
}

/* Trigger body execution callback — called from evo_fire_triggers in engine layer.
 * Executes SQL (DML, CALL proc, etc.) via query_execute with mutex skip. */
static int evo_trigger_exec(const char *sql, char *err_msg, int err_size,
                            char *err_state, void *ctx)
{
    extern __thread int g_trigger_exec_active;
    SessionCtx *session = (SessionCtx *)ctx;
    int prev_active = g_trigger_exec_active;
    g_trigger_exec_active = 1;
    ResultSet trs;
    memset(&trs, 0, sizeof(trs));
    result_init(&trs);
    query_execute(sql, &trs, session);
    int terr = trs.has_error;
    if (terr) {
        if (err_msg) strncpy(err_msg, trs.error_message, err_size - 1);
        if (err_state) strncpy(err_state, trs.error_sqlstate, 5);
    }
    result_free(&trs);
    g_trigger_exec_active = prev_active;
    return terr ? -1 : 0;
}

/* ================================================================
 *  CALL procedure execution — runs after yyparse() sets g_proc.callName
 *  Looks up procedure in catalog, binds args, executes body statements.
 * ================================================================ */
/* ================================================================
 *  Procedure execution helpers
 * ================================================================ */

/* Build combined param + local variable name/value arrays */
static void proc_build_all_names(
    const char *pnames[], const char *pvals[], int param_count,
    char local_names[][128], char local_vals[][256], int local_count,
    const char *out_names[], const char *out_vals[], int *out_count)
{
    *out_count = 0;
    for (int k = 0; k < param_count && *out_count < 48; k++) {
        out_names[*out_count] = pnames[k];
        out_vals[*out_count] = pvals[k];
        (*out_count)++;
    }
    for (int k = 0; k < local_count && *out_count < 48; k++) {
        out_names[*out_count] = local_names[k];
        out_vals[*out_count] = local_vals[k];
        (*out_count)++;
    }
}

/* Evaluate a boolean condition via SELECT (condition).
 * Returns 1=true, 0=false, -1=error */
static int proc_eval_condition(const char *condition, SessionCtx *ctx,
                               const char *names[], const char *vals[], int count)
{
    extern void substitute_params(const char *sql, char *out, int out_size,
                                  const char *param_names[], const char *arg_vals[],
                                  int param_count);
    char sub_cond[2048];
    substitute_params(condition, sub_cond, sizeof(sub_cond), names, vals, count);

    char sql[2048];
    snprintf(sql, sizeof(sql), "SELECT (%s)", sub_cond);

    ResultSet crs;
    memset(&crs, 0, sizeof(crs));
    result_init(&crs);
    query_execute(sql, &crs, ctx);

    int result = 0;
    if (!crs.has_error && crs.num_rows > 0 && crs.rows[0].fields[0]) {
        const char *v = crs.rows[0].fields[0];
        result = (atoi(v) != 0) || strcasecmp(v, "true") == 0 || strcasecmp(v, "t") == 0;
    }
    int err = crs.has_error;
    result_free(&crs);
    return err ? -1 : result;
}

/* Execute a SQL statement, substitute params, return ResultSet */
static int proc_exec_sql(const char *raw, SessionCtx *ctx,
                         const char *names[], const char *vals[], int count,
                         ResultSet *sub_rs)
{
    extern void substitute_params(const char *sql, char *out, int out_size,
                                  const char *param_names[], const char *arg_vals[],
                                  int param_count);
    char substituted[4096];
    substitute_params(raw, substituted, sizeof(substituted), names, vals, count);
    memset(sub_rs, 0, sizeof(*sub_rs));
    result_init(sub_rs);
    query_execute(substituted, sub_rs, ctx);
    return sub_rs->has_error ? -1 : 0;
}

/* Transfer ResultSet columns+rows from src to dst */
static void proc_transfer_result(ResultSet *dst, ResultSet *src)
{
    for (int c = 0; c < src->num_cols; c++)
        result_add_column(dst, src->columns[c].name, src->columns[c].pg_type_oid);
    for (int r = 0; r < src->num_rows; r++) {
        result_add_row(dst);
        for (int c = 0; c < src->num_cols; c++) {
            if (src->rows[r].is_null[c])
                result_set_null(dst, r, c);
            else if (src->rows[r].fields[c])
                result_set_field(dst, r, c, src->rows[r].fields[c]);
        }
    }
    dst->is_select = src->is_select;
}

/* Extract condition from "IF cond THEN" or "WHILE cond DO" or "ELSEIF cond THEN" */
static int proc_extract_condition(const char *stmt, const char *start_kw,
                                  const char *end_kw, char *cond, int cond_size)
{
    const char *p = stmt;
    while (*p && isspace((unsigned char)*p)) p++;
    int kwlen = (int)strlen(start_kw);
    if (strncasecmp(p, start_kw, kwlen) != 0) return -1;
    p += kwlen;
    while (*p && isspace((unsigned char)*p)) p++;

    /* Find end keyword */
    const char *end = NULL;
    const char *q = p;
    while (*q) {
        if (*q == '\'') { q++; while (*q && *q != '\'') q++; if (*q) q++; continue; }
        if (strncasecmp(q, end_kw, strlen(end_kw)) == 0 &&
            (q == p || !isalnum((unsigned char)q[-1])) &&
            !isalnum((unsigned char)q[strlen(end_kw)])) {
            end = q; break;
        }
        q++;
    }
    if (!end) return -1;

    int len = (int)(end - p);
    while (len > 0 && isspace((unsigned char)p[len-1])) len--;
    if (len >= cond_size) len = cond_size - 1;
    memcpy(cond, p, len);
    cond[len] = '\0';
    return 0;
}

/* Find or create a local variable, return index */
static int proc_find_or_create_var(const char *name, char names[][128],
                                   char vals[][256], int *count, int max)
{
    for (int k = 0; k < *count; k++)
        if (strcasecmp(names[k], name) == 0) return k;
    if (*count >= max) return -1;
    int idx = *count;
    strncpy(names[idx], name, 127);
    vals[idx][0] = '\0';
    (*count)++;
    return idx;
}

/* Find a local variable, return index or -1 */
static int proc_find_var(const char *name, char names[][128], int count)
{
    for (int k = 0; k < count; k++)
        if (strcasecmp(names[k], name) == 0) return k;
    return -1;
}

/* ================================================================
 *  CALL procedure execution — full control flow engine
 * ================================================================ */
static void execute_call_procedure(ResultSet *rs, SessionCtx *ctx)
{
    /* Resolve current database and schema */
    DatabaseDesc dbDesc;
    if (cat_find_database(ctx->database, &dbDesc) < 0) {
        result_set_error(rs, "3D000", "database not found");
        return;
    }
    SchemaDesc schDesc;
    if (cat_find_schema(dbDesc.db_id, ctx->schema, &schDesc) < 0) {
        result_set_error(rs, "3F000", "schema not found");
        return;
    }

    /* Look up procedure */
    ProcedureDesc proc;
    if (cat_find_procedure(dbDesc.db_id, schDesc.schema_id,
                           g_proc.callName, &proc) < 0) {
        char msg[512];
        snprintf(msg, sizeof(msg), "procedure \"%s\" does not exist", g_proc.callName);
        result_set_error(rs, "42883", msg);
        return;
    }

    /* Parse parameter definitions */
    char param_names[16][128];
    char param_types[16][64];
    memset(param_names, 0, sizeof(param_names));
    memset(param_types, 0, sizeof(param_types));
    char param_modes[16][8];
    memset(param_modes, 0, sizeof(param_modes));
    extern int parse_param_defs(const char *param_list,
                                char names[][128], char types[][64],
                                char modes[][8], int max);
    int param_count = parse_param_defs(proc.param_list, param_names, param_types,
                                        param_modes, 16);

    /* Validate arg count (OUT params don't require an arg for now, but we count all) */
    if (g_proc.argCount != param_count) {
        char msg[512];
        snprintf(msg, sizeof(msg), "procedure \"%s\" expects %d arguments, got %d",
                 g_proc.callName, param_count, g_proc.argCount);
        result_set_error(rs, "42883", msg);
        return;
    }

    /* Split body into control-flow-aware statements */
    char (*stmts)[4096] = malloc(128 * 4096);
    if (!stmts) { result_set_error(rs, "53200", "out of memory"); return; }
    int stmt_count = split_proc_statements(proc.body, stmts, 128);

    /* Build block map for control flow */
    BlockEntry *bmap = calloc(128, sizeof(BlockEntry));
    if (!bmap) { free(stmts); result_set_error(rs, "53200", "out of memory"); return; }
    proc_build_block_map(stmts, stmt_count, bmap, 128);

    /* Copy args to local storage — g_proc gets zeroed by recursive query_execute */
    char arg_copies[16][256];
    char arg_caller_refs[16][256]; /* Original caller refs for OUT writeback */
    memset(arg_copies, 0, sizeof(arg_copies));
    memset(arg_caller_refs, 0, sizeof(arg_caller_refs));
    for (int i = 0; i < param_count && i < 16; i++) {
        strncpy(arg_copies[i], g_proc.args[i], sizeof(arg_copies[0]) - 1);
        strncpy(arg_caller_refs[i], g_proc.args[i], sizeof(arg_caller_refs[0]) - 1);
        /* For INOUT params: resolve @var to its current value */
        if (strcasecmp(param_modes[i], "INOUT") == 0 &&
            arg_copies[i][0] == '@' && ctx) {
            const char *vname = arg_copies[i] + 1;
            for (int uv = 0; uv < ctx->user_var_count; uv++) {
                if (strcasecmp(ctx->user_var_names[uv], vname) == 0) {
                    strncpy(arg_copies[i], ctx->user_var_values[uv], 255);
                    break;
                }
            }
        }
    }

    const char *pnames[16];
    const char *pvals[16];
    for (int i = 0; i < param_count; i++) {
        pnames[i] = param_names[i];
        pvals[i] = arg_copies[i];
    }

    extern void substitute_params(const char *sql, char *out, int out_size,
                                  const char *param_names[], const char *arg_vals[],
                                  int param_count);

    /* Local variable storage */
    char local_var_names[32][128];
    char local_var_values[32][256];
    int local_var_count = 0;
    memset(local_var_names, 0, sizeof(local_var_names));
    memset(local_var_values, 0, sizeof(local_var_values));

    /* Cursor storage */
    typedef struct { char name[128]; char query[4096]; ResultSet crs; int pos; int is_open; } PCursor;
    PCursor cursors[8];
    int cursor_count = 0;
    memset(cursors, 0, sizeof(cursors));

    /* Handler storage */
    typedef struct { int type; /* 0=CONTINUE,1=EXIT */ char cond[64]; char action[4096]; } PHandler;
    PHandler handlers[8];
    int handler_count = 0;
    memset(handlers, 0, sizeof(handlers));

    int not_found_flag = 0; /* set to 1 when FETCH hits end */
    int max_iterations = 10000;
    int total_iterations = 0;

    /* Build combined name/value arrays — refreshed in loop */
    const char *all_names[48];
    const char *all_vals[48];
    int all_count = 0;

    #define REFRESH_ALL() proc_build_all_names(pnames, pvals, param_count, \
        local_var_names, local_var_values, local_var_count, \
        all_names, all_vals, &all_count)

    /* Skip-to stack: when IF/CASE branch is taken, skip to end when hitting ELSEIF/ELSE/WHEN */
    int skip_to_end[16]; /* end_idx values for active IF/CASE chains */
    int skip_depth = 0;

    int i = 0;
    while (i < stmt_count) {
        if (++total_iterations > max_iterations) {
            result_set_error(rs, "54001", "procedure exceeded maximum iterations (10000)");
            goto cleanup;
        }

        char *raw = stmts[i];
        while (*raw && isspace((unsigned char)*raw)) raw++;
        if (!*raw) { i++; continue; }

        /* Check skip-to: if we hit an ELSEIF/ELSE/WHEN for a taken branch, skip to end */
        if (skip_depth > 0) {
            int matched_skip = 0;
            for (int sd = 0; sd < skip_depth; sd++) {
                if (i >= skip_to_end[sd]) {
                    /* Past this end — remove from stack */
                    for (int k = sd; k < skip_depth - 1; k++)
                        skip_to_end[k] = skip_to_end[k+1];
                    skip_depth--;
                    sd--;
                    continue;
                }
                if ((bmap[i].type == BLOCK_ELSEIF || bmap[i].type == BLOCK_ELSE ||
                     bmap[i].type == BLOCK_WHEN) &&
                    bmap[i].end_idx == skip_to_end[sd]) {
                    i = skip_to_end[sd] + 1; /* jump past END IF/CASE */
                    matched_skip = 1;
                    break;
                }
            }
            if (matched_skip) continue;
        }

        REFRESH_ALL();

        /* ---- DECLARE variable ---- */
        if (strncasecmp(raw, "DECLARE", 7) == 0 && isspace((unsigned char)raw[7])) {
            char *p = raw + 7;
            while (*p && isspace((unsigned char)*p)) p++;

            /* DECLARE ... CURSOR FOR ... */
            {
                const char *ctest = p;
                while (*ctest && !isspace((unsigned char)*ctest)) ctest++;
                while (*ctest && isspace((unsigned char)*ctest)) ctest++;
                if (strncasecmp(ctest, "CURSOR", 6) == 0 && cursor_count < 8) {
                    char cname[128] = "";
                    int ni = 0;
                    while (*p && !isspace((unsigned char)*p) && ni < 127) cname[ni++] = *p++;
                    cname[ni] = '\0';
                    /* Skip "CURSOR FOR" */
                    while (*p && isspace((unsigned char)*p)) p++;
                    if (strncasecmp(p, "CURSOR", 6) == 0) p += 6;
                    while (*p && isspace((unsigned char)*p)) p++;
                    if (strncasecmp(p, "FOR", 3) == 0) p += 3;
                    while (*p && isspace((unsigned char)*p)) p++;
                    strncpy(cursors[cursor_count].name, cname, 127);
                    strncpy(cursors[cursor_count].query, p, 4095);
                    cursors[cursor_count].pos = -1;
                    cursors[cursor_count].is_open = 0;
                    cursor_count++;
                    i++; continue;
                }
            }

            /* DECLARE ... HANDLER ... */
            if (strncasecmp(p, "CONTINUE", 8) == 0 || strncasecmp(p, "EXIT", 4) == 0) {
                int htype = (strncasecmp(p, "EXIT", 4) == 0) ? 1 : 0;
                while (*p && !isspace((unsigned char)*p)) p++;
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "HANDLER", 7) == 0 && handler_count < 8) {
                    p += 7;
                    while (*p && isspace((unsigned char)*p)) p++;
                    if (strncasecmp(p, "FOR", 3) == 0) p += 3;
                    while (*p && isspace((unsigned char)*p)) p++;
                    /* Extract condition: NOT FOUND, SQLEXCEPTION, etc. */
                    char hcond[64] = "";
                    if (strncasecmp(p, "NOT FOUND", 9) == 0) {
                        strcpy(hcond, "NOT FOUND"); p += 9;
                    } else if (strncasecmp(p, "SQLEXCEPTION", 12) == 0) {
                        strcpy(hcond, "SQLEXCEPTION"); p += 12;
                    } else if (strncasecmp(p, "SQLWARNING", 10) == 0) {
                        strcpy(hcond, "SQLWARNING"); p += 10;
                    }
                    while (*p && isspace((unsigned char)*p)) p++;
                    handlers[handler_count].type = htype;
                    strncpy(handlers[handler_count].cond, hcond, 63);
                    strncpy(handlers[handler_count].action, p, 4095);
                    handler_count++;
                    i++; continue;
                }
            }

            /* DECLARE variable TYPE [DEFAULT value] */
            if (local_var_count < 32) {
                char *vn = local_var_names[local_var_count];
                int vni = 0;
                while (*p && !isspace((unsigned char)*p) && vni < 127) vn[vni++] = *p++;
                vn[vni] = '\0';
                while (*p && isspace((unsigned char)*p)) p++;
                while (*p && !isspace((unsigned char)*p)) p++; /* skip type */
                while (*p && isspace((unsigned char)*p)) p++;
                if (*p == '(') { while (*p && *p != ')') p++; if (*p) p++; }
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "DEFAULT", 7) == 0) {
                    p += 7;
                    while (*p && isspace((unsigned char)*p)) p++;
                    strncpy(local_var_values[local_var_count], p,
                            sizeof(local_var_values[0]) - 1);
                } else {
                    local_var_values[local_var_count][0] = '\0';
                }
                local_var_count++;
            }
            i++; continue;
        }

        /* ---- SET varname = expr ---- */
        if (strncasecmp(raw, "SET", 3) == 0 && isspace((unsigned char)raw[3])) {
            char *p = raw + 3;
            while (*p && isspace((unsigned char)*p)) p++;
            char varname[128] = "";
            int vni = 0;
            while (*p && !isspace((unsigned char)*p) && *p != '=' && vni < 127)
                varname[vni++] = *p++;
            varname[vni] = '\0';
            while (*p && (isspace((unsigned char)*p) || *p == '=')) p++;

            /* Evaluate expression via SELECT */
            char sub_expr[1024];
            substitute_params(p, sub_expr, sizeof(sub_expr), all_names, all_vals, all_count);
            char eval_sql[2048];
            snprintf(eval_sql, sizeof(eval_sql), "SELECT %s", sub_expr);
            ResultSet evrs;
            memset(&evrs, 0, sizeof(evrs));
            result_init(&evrs);
            query_execute(eval_sql, &evrs, ctx);
            if (!evrs.has_error && evrs.num_rows > 0 && evrs.rows[0].fields[0]) {
                const char *result_val = evrs.rows[0].fields[0];
                int vi = proc_find_var(varname, local_var_names, local_var_count);
                if (vi >= 0) {
                    strncpy(local_var_values[vi], result_val, 255);
                } else {
                    /* Also check procedure parameters (for OUT/INOUT writeback) */
                    for (int pi = 0; pi < param_count; pi++) {
                        if (strcasecmp(param_names[pi], varname) == 0) {
                            strncpy(arg_copies[pi], result_val, 255);
                            break;
                        }
                    }
                }
            }
            result_free(&evrs);
            i++; continue;
        }

        /* ---- IF...THEN ---- */
        if (strncasecmp(raw, "IF", 2) == 0 && isspace((unsigned char)raw[2]) &&
            bmap[i].type == BLOCK_IF) {
            char cond[1024];
            if (proc_extract_condition(raw, "IF", "THEN", cond, sizeof(cond)) == 0) {
                int cv = proc_eval_condition(cond, ctx, all_names, all_vals, all_count);
                if (cv > 0) {
                    /* Push skip-to for this IF chain — when we hit ELSEIF/ELSE, skip to end */
                    if (skip_depth < 16 && bmap[i].end_idx >= 0)
                        skip_to_end[skip_depth++] = bmap[i].end_idx;
                    i++; /* execute body */
                } else {
                    /* Jump to ELSEIF/ELSE/END IF */
                    i = bmap[i].match_idx;
                }
            } else {
                i++;
            }
            continue;
        }

        /* ---- ELSEIF...THEN ---- */
        if (strncasecmp(raw, "ELSEIF", 6) == 0 && bmap[i].type == BLOCK_ELSEIF) {
            char cond[1024];
            if (proc_extract_condition(raw, "ELSEIF", "THEN", cond, sizeof(cond)) == 0) {
                int cv = proc_eval_condition(cond, ctx, all_names, all_vals, all_count);
                if (cv > 0) {
                    if (skip_depth < 16 && bmap[i].end_idx >= 0)
                        skip_to_end[skip_depth++] = bmap[i].end_idx;
                    i++;
                } else {
                    i = bmap[i].match_idx;
                }
            } else {
                i++;
            }
            continue;
        }

        /* ---- ELSE ---- */
        if (strncasecmp(raw, "ELSE", 4) == 0 && !isalnum((unsigned char)raw[4]) &&
            bmap[i].type == BLOCK_ELSE) {
            i++; /* enter else body */
            continue;
        }

        /* ---- END IF / END WHILE / END LOOP / END FOR / END FOREACH / END CASE ---- */
        if (strncasecmp(raw, "END", 3) == 0 && isspace((unsigned char)raw[3])) {
            const char *ep = raw + 3;
            while (*ep && isspace((unsigned char)*ep)) ep++;

            if (strncasecmp(ep, "IF", 2) == 0 && !isalnum((unsigned char)ep[2])) {
                i++; continue;
            }
            if (strncasecmp(ep, "WHILE", 5) == 0 && !isalnum((unsigned char)ep[5])) {
                /* Jump back to WHILE */
                if (bmap[i].start_idx >= 0) i = bmap[i].start_idx;
                else i++;
                continue;
            }
            if (strncasecmp(ep, "LOOP", 4) == 0 && !isalnum((unsigned char)ep[4])) {
                if (bmap[i].start_idx >= 0) i = bmap[i].start_idx;
                else i++;
                continue;
            }
            if (strncasecmp(ep, "FOR", 3) == 0 && !isalnum((unsigned char)ep[3])) {
                if (bmap[i].start_idx >= 0) i = bmap[i].start_idx;
                else i++;
                continue;
            }
            if (strncasecmp(ep, "FOREACH", 7) == 0 && !isalnum((unsigned char)ep[7])) {
                if (bmap[i].start_idx >= 0) i = bmap[i].start_idx;
                else i++;
                continue;
            }
            if (strncasecmp(ep, "CASE", 4) == 0) {
                i++; continue;
            }
            i++; continue;
        }

        /* ---- WHILE...DO ---- */
        if (strncasecmp(raw, "WHILE", 5) == 0 && isspace((unsigned char)raw[5]) &&
            bmap[i].type == BLOCK_WHILE) {
            char cond[1024];
            if (proc_extract_condition(raw, "WHILE", "DO", cond, sizeof(cond)) == 0) {
                int cv = proc_eval_condition(cond, ctx, all_names, all_vals, all_count);
                if (cv > 0) {
                    i++;
                } else {
                    i = bmap[i].end_idx + 1;
                }
            } else {
                i = bmap[i].end_idx + 1;
            }
            continue;
        }

        /* ---- LOOP ---- */
        if (bmap[i].type == BLOCK_LOOP) {
            i++; continue;
        }

        /* ---- LEAVE [label] ---- */
        if (strncasecmp(raw, "LEAVE", 5) == 0) {
            /* Find enclosing LOOP/WHILE/FOR/FOREACH and jump past its END */
            char label[64] = "";
            const char *lp = raw + 5;
            while (*lp && isspace((unsigned char)*lp)) lp++;
            if (*lp) { strncpy(label, lp, 63); }
            /* Search block map for enclosing loop */
            for (int b = i - 1; b >= 0; b--) {
                if (bmap[b].type == BLOCK_LOOP || bmap[b].type == BLOCK_WHILE ||
                    bmap[b].type == BLOCK_FOR || bmap[b].type == BLOCK_FOREACH) {
                    if (label[0] == '\0' || strcasecmp(bmap[b].label, label) == 0) {
                        i = bmap[b].end_idx + 1;
                        break;
                    }
                }
            }
            continue;
        }

        /* ---- ITERATE [label] ---- */
        if (strncasecmp(raw, "ITERATE", 7) == 0) {
            char label[64] = "";
            const char *lp = raw + 7;
            while (*lp && isspace((unsigned char)*lp)) lp++;
            if (*lp) strncpy(label, lp, 63);
            for (int b = i - 1; b >= 0; b--) {
                if (bmap[b].type == BLOCK_LOOP || bmap[b].type == BLOCK_WHILE ||
                    bmap[b].type == BLOCK_FOR || bmap[b].type == BLOCK_FOREACH) {
                    if (label[0] == '\0' || strcasecmp(bmap[b].label, label) == 0) {
                        i = b; break;
                    }
                }
            }
            continue;
        }

        /* ---- FOR var IN start..end DO ---- */
        if (strncasecmp(raw, "FOR", 3) == 0 && isspace((unsigned char)raw[3]) &&
            bmap[i].type == BLOCK_FOR) {
            char *p = raw + 3;
            while (*p && isspace((unsigned char)*p)) p++;
            char varname[128] = "";
            int vni = 0;
            while (*p && !isspace((unsigned char)*p) && vni < 127) varname[vni++] = *p++;
            varname[vni] = '\0';
            while (*p && isspace((unsigned char)*p)) p++;
            if (strncasecmp(p, "IN", 2) == 0) p += 2;
            while (*p && isspace((unsigned char)*p)) p++;

            /* Parse start..end, substitute params */
            char range_buf[256];
            substitute_params(p, range_buf, sizeof(range_buf), all_names, all_vals, all_count);
            /* Remove trailing DO */
            { char *dp = range_buf + strlen(range_buf);
              /* Find last "DO" (case-insensitive) */
              while (dp > range_buf + 1) {
                  dp--;
                  if ((dp[0] == 'D' || dp[0] == 'd') && (dp[1] == 'O' || dp[1] == 'o') &&
                      (dp == range_buf || !isalnum((unsigned char)dp[-1])) &&
                      (!dp[2] || !isalnum((unsigned char)dp[2]))) {
                      while (dp > range_buf && isspace((unsigned char)dp[-1])) dp--;
                      *dp = '\0';
                      break;
                  }
              }
            }

            int start_val = 0, end_val = 0;
            char *dots = strstr(range_buf, "..");
            if (dots) {
                *dots = '\0';
                start_val = atoi(range_buf);
                end_val = atoi(dots + 2);
            }

            int vi = proc_find_or_create_var(varname, local_var_names,
                                              local_var_values, &local_var_count, 32);
            if (vi >= 0) {
                if (local_var_values[vi][0] == '\0') {
                    /* First entry: initialize to start */
                    snprintf(local_var_values[vi], 256, "%d", start_val);
                } else {
                    /* Re-entry from END FOR: increment */
                    int cur = atoi(local_var_values[vi]);
                    snprintf(local_var_values[vi], 256, "%d", cur + 1);
                }
                int cur = atoi(local_var_values[vi]);
                if (cur <= end_val) {
                    i++;
                } else {
                    /* Reset for potential re-entry */
                    local_var_values[vi][0] = '\0';
                    i = bmap[i].end_idx + 1;
                }
            } else {
                i = bmap[i].end_idx + 1;
            }
            continue;
        }

        /* Handle END FOR jump-back: increment counter */
        /* (handled in END section above — jumps to FOR which re-evaluates) */

        /* ---- FOREACH vars IN (query) DO ---- */
        if (strncasecmp(raw, "FOREACH", 7) == 0 && isspace((unsigned char)raw[7]) &&
            bmap[i].type == BLOCK_FOREACH) {
            char *p = raw + 7;
            while (*p && isspace((unsigned char)*p)) p++;

            /* Parse variable names (comma-separated) before IN */
            char varnames[16][128];
            int vcount = 0;
            memset(varnames, 0, sizeof(varnames));
            while (*p && strncasecmp(p, "IN", 2) != 0 && vcount < 16) {
                while (*p && isspace((unsigned char)*p)) p++;
                int vni2 = 0;
                while (*p && *p != ',' && !isspace((unsigned char)*p) && vni2 < 127)
                    varnames[vcount][vni2++] = *p++;
                varnames[vcount][vni2] = '\0';
                if (vni2 > 0) vcount++;
                while (*p && (*p == ',' || isspace((unsigned char)*p))) p++;
                if (strncasecmp(p, "IN", 2) == 0 && isspace((unsigned char)p[2])) break;
            }
            if (strncasecmp(p, "IN", 2) == 0) p += 2;
            while (*p && isspace((unsigned char)*p)) p++;

            /* Extract query (may be in parentheses) */
            char query[4096] = "";
            if (*p == '(') {
                p++;
                int depth = 1;
                int qi = 0;
                while (*p && depth > 0 && qi < 4095) {
                    if (*p == '(') depth++;
                    else if (*p == ')') { depth--; if (depth == 0) break; }
                    query[qi++] = *p++;
                }
                query[qi] = '\0';
            }

            /* Remove trailing DO */
            /* Execute query */
            char sub_query[4096];
            substitute_params(query, sub_query, sizeof(sub_query), all_names, all_vals, all_count);
            ResultSet frs;
            memset(&frs, 0, sizeof(frs));
            result_init(&frs);
            query_execute(sub_query, &frs, ctx);

            if (frs.has_error || frs.num_rows == 0) {
                result_free(&frs);
                i = bmap[i].end_idx + 1;
                continue;
            }

            /* Execute body for each row */
            int body_start = i + 1;
            int body_end = bmap[i].end_idx;

            for (int row = 0; row < frs.num_rows && !rs->has_error; row++) {
                if (++total_iterations > max_iterations) {
                    result_set_error(rs, "54001", "FOREACH exceeded maximum iterations");
                    result_free(&frs);
                    goto cleanup;
                }
                /* Bind row values to variables */
                for (int v = 0; v < vcount && v < frs.num_cols; v++) {
                    int vi2 = proc_find_or_create_var(varnames[v], local_var_names,
                                                       local_var_values, &local_var_count, 32);
                    if (vi2 >= 0 && frs.rows[row].fields[v])
                        strncpy(local_var_values[vi2], frs.rows[row].fields[v], 255);
                }
                /* Execute body statements */
                for (int bi = body_start; bi < body_end && !rs->has_error; bi++) {
                    char *braw = stmts[bi];
                    while (*braw && isspace((unsigned char)*braw)) braw++;
                    if (!*braw) continue;
                    REFRESH_ALL();
                    ResultSet brs;
                    if (proc_exec_sql(braw, ctx, all_names, all_vals, all_count, &brs) < 0) {
                        rs->has_error = 1;
                        strncpy(rs->error_message, brs.error_message, sizeof(rs->error_message)-1);
                        strncpy(rs->error_sqlstate, brs.error_sqlstate, sizeof(rs->error_sqlstate)-1);
                    }
                    result_free(&brs);
                }
            }
            result_free(&frs);
            i = body_end + 1;
            continue;
        }

        /* ---- CASE ---- */
        if (strncasecmp(raw, "CASE", 4) == 0 && bmap[i].type == BLOCK_CASE) {
            /* Extract expression after CASE (if any) */
            char *p = raw + 4;
            while (*p && isspace((unsigned char)*p)) p++;
            char case_expr[512] = "";
            if (*p) strncpy(case_expr, p, sizeof(case_expr) - 1);

            /* Evaluate CASE expression if present */
            char case_val[256] = "";
            if (case_expr[0]) {
                char sub_ce[512];
                substitute_params(case_expr, sub_ce, sizeof(sub_ce), all_names, all_vals, all_count);
                char eval_sql2[1024];
                snprintf(eval_sql2, sizeof(eval_sql2), "SELECT %s", sub_ce);
                ResultSet evr2;
                memset(&evr2, 0, sizeof(evr2));
                result_init(&evr2);
                query_execute(eval_sql2, &evr2, ctx);
                if (!evr2.has_error && evr2.num_rows > 0 && evr2.rows[0].fields[0])
                    strncpy(case_val, evr2.rows[0].fields[0], 255);
                result_free(&evr2);
            }

            /* Scan WHEN clauses via block map */
            int found_branch = 0;
            int j = i + 1;
            while (j < stmt_count && j < bmap[i].end_idx) {
                char *wraw = stmts[j];
                while (*wraw && isspace((unsigned char)*wraw)) wraw++;

                if (strncasecmp(wraw, "WHEN", 4) == 0 && isspace((unsigned char)wraw[4])) {
                    char wcond[1024];
                    if (proc_extract_condition(wraw, "WHEN", "THEN", wcond, sizeof(wcond)) == 0) {
                        REFRESH_ALL();
                        int match = 0;
                        if (case_val[0]) {
                            /* Simple CASE: compare values */
                            char sub_wv[256];
                            substitute_params(wcond, sub_wv, sizeof(sub_wv), all_names, all_vals, all_count);
                            match = (strcmp(case_val, sub_wv) == 0);
                        } else {
                            /* Searched CASE: evaluate condition */
                            match = proc_eval_condition(wcond, ctx, all_names, all_vals, all_count);
                        }
                        if (match > 0) {
                            /* Push skip-to for CASE — skip other WHEN/ELSE branches */
                            if (skip_depth < 16 && bmap[i].end_idx >= 0)
                                skip_to_end[skip_depth++] = bmap[i].end_idx;
                            i = j + 1; /* execute WHEN body */
                            found_branch = 1;
                            break;
                        }
                    }
                    /* Skip to next WHEN */
                    if (bmap[j].match_idx > 0) j = bmap[j].match_idx;
                    else j++;
                } else if (strncasecmp(wraw, "ELSE", 4) == 0 && bmap[j].type == BLOCK_ELSE) {
                    if (skip_depth < 16 && bmap[i].end_idx >= 0)
                        skip_to_end[skip_depth++] = bmap[i].end_idx;
                    i = j + 1;
                    found_branch = 1;
                    break;
                } else {
                    j++;
                }
            }
            if (!found_branch) i = bmap[i].end_idx + 1;
            continue;
        }

        /* ---- WHEN (inside CASE) — if we reach here, we already executed the body.
         *      Jump to END CASE ---- */
        if (strncasecmp(raw, "WHEN", 4) == 0 && bmap[i].type == BLOCK_WHEN) {
            i = bmap[i].end_idx + 1;
            continue;
        }

        /* ---- OPEN cursor ---- */
        if (strncasecmp(raw, "OPEN", 4) == 0 && isspace((unsigned char)raw[4])) {
            char cname[128] = "";
            const char *cp = raw + 4;
            while (*cp && isspace((unsigned char)*cp)) cp++;
            int cni = 0;
            while (*cp && !isspace((unsigned char)*cp) && cni < 127) cname[cni++] = *cp++;
            cname[cni] = '\0';
            for (int c = 0; c < cursor_count; c++) {
                if (strcasecmp(cursors[c].name, cname) == 0) {
                    REFRESH_ALL();
                    char sub_q[4096];
                    substitute_params(cursors[c].query, sub_q, sizeof(sub_q), all_names, all_vals, all_count);
                    if (cursors[c].is_open) result_free(&cursors[c].crs);
                    memset(&cursors[c].crs, 0, sizeof(ResultSet));
                    result_init(&cursors[c].crs);
                    query_execute(sub_q, &cursors[c].crs, ctx);
                    cursors[c].pos = 0;
                    cursors[c].is_open = 1;
                    break;
                }
            }
            i++; continue;
        }

        /* ---- FETCH cursor INTO vars ---- */
        if (strncasecmp(raw, "FETCH", 5) == 0 && isspace((unsigned char)raw[5])) {
            char cname[128] = "";
            const char *cp = raw + 5;
            while (*cp && isspace((unsigned char)*cp)) cp++;
            int cni = 0;
            while (*cp && !isspace((unsigned char)*cp) && cni < 127) cname[cni++] = *cp++;
            cname[cni] = '\0';
            while (*cp && isspace((unsigned char)*cp)) cp++;
            if (strncasecmp(cp, "INTO", 4) == 0) cp += 4;
            while (*cp && isspace((unsigned char)*cp)) cp++;

            /* Parse INTO variable list */
            char fvars[16][128];
            int fvc = 0;
            memset(fvars, 0, sizeof(fvars));
            while (*cp && fvc < 16) {
                while (*cp && isspace((unsigned char)*cp)) cp++;
                int fni = 0;
                while (*cp && *cp != ',' && !isspace((unsigned char)*cp) && fni < 127)
                    fvars[fvc][fni++] = *cp++;
                fvars[fvc][fni] = '\0';
                if (fni > 0) fvc++;
                while (*cp && (*cp == ',' || isspace((unsigned char)*cp))) cp++;
            }

            not_found_flag = 0;
            for (int c = 0; c < cursor_count; c++) {
                if (strcasecmp(cursors[c].name, cname) == 0 && cursors[c].is_open) {
                    if (cursors[c].pos < cursors[c].crs.num_rows) {
                        for (int v = 0; v < fvc && v < cursors[c].crs.num_cols; v++) {
                            int vi3 = proc_find_or_create_var(fvars[v], local_var_names,
                                                               local_var_values, &local_var_count, 32);
                            if (vi3 >= 0 && cursors[c].crs.rows[cursors[c].pos].fields[v])
                                strncpy(local_var_values[vi3],
                                        cursors[c].crs.rows[cursors[c].pos].fields[v], 255);
                        }
                        cursors[c].pos++;
                    } else {
                        not_found_flag = 1;
                        /* Check NOT FOUND handler */
                        for (int h = 0; h < handler_count; h++) {
                            if (strcasecmp(handlers[h].cond, "NOT FOUND") == 0) {
                                /* Execute handler action — if SET, update local variable */
                                const char *act = handlers[h].action;
                                while (*act && isspace((unsigned char)*act)) act++;
                                if (strncasecmp(act, "SET", 3) == 0 && isspace((unsigned char)act[3])) {
                                    char *hp = (char *)act + 3;
                                    while (*hp && isspace((unsigned char)*hp)) hp++;
                                    char hvar[128] = "";
                                    int hvi = 0;
                                    while (*hp && !isspace((unsigned char)*hp) && *hp != '=' && hvi < 127)
                                        hvar[hvi++] = *hp++;
                                    hvar[hvi] = '\0';
                                    while (*hp && (isspace((unsigned char)*hp) || *hp == '=')) hp++;
                                    REFRESH_ALL();
                                    char hval[256];
                                    substitute_params(hp, hval, sizeof(hval), all_names, all_vals, all_count);
                                    int hvidx = proc_find_var(hvar, local_var_names, local_var_count);
                                    if (hvidx >= 0) strncpy(local_var_values[hvidx], hval, 255);
                                } else {
                                    REFRESH_ALL();
                                    ResultSet hrs;
                                    proc_exec_sql(act, ctx, all_names, all_vals, all_count, &hrs);
                                    result_free(&hrs);
                                }
                                break;
                            }
                        }
                    }
                    break;
                }
            }
            i++; continue;
        }

        /* ---- CLOSE cursor ---- */
        if (strncasecmp(raw, "CLOSE", 5) == 0 && isspace((unsigned char)raw[5])) {
            char cname[128] = "";
            const char *cp = raw + 5;
            while (*cp && isspace((unsigned char)*cp)) cp++;
            int cni = 0;
            while (*cp && !isspace((unsigned char)*cp) && cni < 127) cname[cni++] = *cp++;
            cname[cni] = '\0';
            for (int c = 0; c < cursor_count; c++) {
                if (strcasecmp(cursors[c].name, cname) == 0 && cursors[c].is_open) {
                    result_free(&cursors[c].crs);
                    cursors[c].is_open = 0;
                    cursors[c].pos = -1;
                    break;
                }
            }
            i++; continue;
        }

        /* ---- RETURN expr ---- */
        if (strncasecmp(raw, "RETURN", 6) == 0 &&
            (raw[6] == '\0' || isspace((unsigned char)raw[6]))) {
            char *p = raw + 6;
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p) {
                char sub_expr[1024];
                substitute_params(p, sub_expr, sizeof(sub_expr), all_names, all_vals, all_count);
                char ret_sql[2048];
                snprintf(ret_sql, sizeof(ret_sql), "SELECT %s", sub_expr);
                ResultSet sub_rs;
                memset(&sub_rs, 0, sizeof(sub_rs));
                result_init(&sub_rs);
                query_execute(ret_sql, &sub_rs, ctx);
                if (sub_rs.has_error) {
                    rs->has_error = 1;
                    strncpy(rs->error_message, sub_rs.error_message, sizeof(rs->error_message)-1);
                    strncpy(rs->error_sqlstate, sub_rs.error_sqlstate, sizeof(rs->error_sqlstate)-1);
                } else {
                    proc_transfer_result(rs, &sub_rs);
                }
                result_free(&sub_rs);
            }
            goto cleanup;
        }

        /* ---- SELECT...INTO var ---- */
        if (strncasecmp(raw, "SELECT", 6) == 0 && isspace((unsigned char)raw[6])) {
            /* Check for INTO keyword */
            const char *into_pos = NULL;
            const char *sq = raw + 6;
            while (*sq) {
                if (*sq == '\'') { sq++; while (*sq && *sq != '\'') sq++; if (*sq) sq++; continue; }
                if (strncasecmp(sq, "INTO", 4) == 0 && (sq == raw+6 || !isalnum((unsigned char)sq[-1])) &&
                    isspace((unsigned char)sq[4])) {
                    into_pos = sq; break;
                }
                sq++;
            }

            if (into_pos) {
                /* Parse INTO var list */
                char into_vars[16][128];
                int ivc = 0;
                memset(into_vars, 0, sizeof(into_vars));
                const char *ip = into_pos + 4;
                while (*ip && isspace((unsigned char)*ip)) ip++;
                while (*ip && strncasecmp(ip, "FROM", 4) != 0 && ivc < 16) {
                    int ini = 0;
                    while (*ip && *ip != ',' && !isspace((unsigned char)*ip) && ini < 127)
                        into_vars[ivc][ini++] = *ip++;
                    into_vars[ivc][ini] = '\0';
                    if (ini > 0) ivc++;
                    while (*ip && (*ip == ',' || isspace((unsigned char)*ip))) ip++;
                }

                /* Rewrite SQL: remove INTO...vars, keep SELECT cols FROM ... */
                char rewritten[4096];
                int rlen = (int)(into_pos - raw);
                memcpy(rewritten, raw, rlen);
                /* Skip to FROM */
                const char *from_pos = ip;
                while (*from_pos && isspace((unsigned char)*from_pos)) from_pos++;
                int flen = (int)strlen(from_pos);
                memcpy(rewritten + rlen, from_pos, flen);
                rewritten[rlen + flen] = '\0';

                ResultSet sub_rs;
                if (proc_exec_sql(rewritten, ctx, all_names, all_vals, all_count, &sub_rs) == 0) {
                    if (sub_rs.num_rows > 0) {
                        for (int v = 0; v < ivc && v < sub_rs.num_cols; v++) {
                            int vi4 = proc_find_or_create_var(into_vars[v], local_var_names,
                                                               local_var_values, &local_var_count, 32);
                            if (vi4 >= 0 && sub_rs.rows[0].fields[v])
                                strncpy(local_var_values[vi4], sub_rs.rows[0].fields[v], 255);
                        }
                    }
                } else {
                    rs->has_error = 1;
                    strncpy(rs->error_message, sub_rs.error_message, sizeof(rs->error_message)-1);
                    strncpy(rs->error_sqlstate, sub_rs.error_sqlstate, sizeof(rs->error_sqlstate)-1);
                    result_free(&sub_rs);
                    goto cleanup;
                }
                result_free(&sub_rs);
                i++; continue;
            }
            /* Fall through to normal SQL execution */
        }

        /* ---- EXECUTE dynamic SQL ---- */
        if (strncasecmp(raw, "EXECUTE", 7) == 0 && isspace((unsigned char)raw[7])) {
            char *ep = raw + 7;
            while (*ep && isspace((unsigned char)*ep)) ep++;
            char exec_var[128] = "";
            int evi = 0;
            while (*ep && !isspace((unsigned char)*ep) && evi < 127) exec_var[evi++] = *ep++;
            exec_var[evi] = '\0';
            /* Look up variable to get SQL string */
            REFRESH_ALL();
            char exec_sql[4096] = "";
            int vidx = proc_find_var(exec_var, local_var_names, local_var_count);
            if (vidx >= 0) {
                strncpy(exec_sql, local_var_values[vidx], sizeof(exec_sql) - 1);
            } else {
                /* Try param names */
                for (int pi2 = 0; pi2 < param_count; pi2++) {
                    if (strcasecmp(param_names[pi2], exec_var) == 0) {
                        strncpy(exec_sql, arg_copies[pi2], sizeof(exec_sql) - 1);
                        break;
                    }
                }
            }
            if (exec_sql[0]) {
                /* Strip surrounding quotes if present */
                int elen = (int)strlen(exec_sql);
                if (elen >= 2 && exec_sql[0] == '\'' && exec_sql[elen-1] == '\'') {
                    memmove(exec_sql, exec_sql + 1, elen - 2);
                    exec_sql[elen - 2] = '\0';
                    /* Unescape '' → ' */
                    char *rp = exec_sql, *wp = exec_sql;
                    while (*rp) {
                        if (*rp == '\'' && rp[1] == '\'') { *wp++ = '\''; rp += 2; }
                        else *wp++ = *rp++;
                    }
                    *wp = '\0';
                }
                char sub_exec[4096];
                substitute_params(exec_sql, sub_exec, sizeof(sub_exec), all_names, all_vals, all_count);
                ResultSet ers;
                memset(&ers, 0, sizeof(ers));
                result_init(&ers);
                query_execute(sub_exec, &ers, ctx);
                if (ers.has_error) {
                    rs->has_error = 1;
                    strncpy(rs->error_message, ers.error_message, sizeof(rs->error_message)-1);
                    strncpy(rs->error_sqlstate, ers.error_sqlstate, sizeof(rs->error_sqlstate)-1);
                    result_free(&ers);
                    goto cleanup;
                }
                result_free(&ers);
            }
            i++; continue;
        }

        /* ---- SIGNAL SQLSTATE 'xxxxx' SET MESSAGE_TEXT = 'msg' ---- */
        if (strncasecmp(raw, "SIGNAL", 6) == 0 && isspace((unsigned char)raw[6])) {
            char *sp2 = raw + 6;
            while (*sp2 && isspace((unsigned char)*sp2)) sp2++;
            char sqlstate[6] = "45000"; /* default */
            char message[512] = "Unhandled user-defined exception";
            if (strncasecmp(sp2, "SQLSTATE", 8) == 0) {
                sp2 += 8;
                while (*sp2 && isspace((unsigned char)*sp2)) sp2++;
                if (*sp2 == '\'') {
                    sp2++;
                    int si = 0;
                    while (*sp2 && *sp2 != '\'' && si < 5) sqlstate[si++] = *sp2++;
                    sqlstate[si] = '\0';
                    if (*sp2 == '\'') sp2++;
                }
            }
            /* Parse SET MESSAGE_TEXT = '...' */
            while (*sp2 && isspace((unsigned char)*sp2)) sp2++;
            if (strncasecmp(sp2, "SET", 3) == 0) {
                sp2 += 3;
                while (*sp2 && isspace((unsigned char)*sp2)) sp2++;
                if (strncasecmp(sp2, "MESSAGE_TEXT", 12) == 0) {
                    sp2 += 12;
                    while (*sp2 && (isspace((unsigned char)*sp2) || *sp2 == '=')) sp2++;
                    if (*sp2 == '\'') {
                        sp2++;
                        int mi = 0;
                        while (*sp2 && *sp2 != '\'' && mi < (int)sizeof(message) - 1)
                            message[mi++] = *sp2++;
                        message[mi] = '\0';
                    }
                }
            }
            /* Check for SQLEXCEPTION handler */
            int sig_handled = 0;
            for (int h = 0; h < handler_count; h++) {
                if (strcasecmp(handlers[h].cond, "SQLEXCEPTION") == 0) {
                    const char *act = handlers[h].action;
                    while (*act && isspace((unsigned char)*act)) act++;
                    if (strncasecmp(act, "SET", 3) == 0 && isspace((unsigned char)act[3])) {
                        char *hp = (char *)act + 3;
                        while (*hp && isspace((unsigned char)*hp)) hp++;
                        char hvar[128] = "";
                        int hvi3 = 0;
                        while (*hp && !isspace((unsigned char)*hp) && *hp != '=' && hvi3 < 127)
                            hvar[hvi3++] = *hp++;
                        hvar[hvi3] = '\0';
                        while (*hp && (isspace((unsigned char)*hp) || *hp == '=')) hp++;
                        REFRESH_ALL();
                        char hval2[256];
                        substitute_params(hp, hval2, sizeof(hval2), all_names, all_vals, all_count);
                        int hvidx3 = proc_find_var(hvar, local_var_names, local_var_count);
                        if (hvidx3 >= 0) strncpy(local_var_values[hvidx3], hval2, 255);
                    }
                    sig_handled = 1;
                    if (handlers[h].type == 1) goto cleanup; /* EXIT handler */
                    break;
                }
            }
            if (!sig_handled) {
                result_set_error(rs, sqlstate, message);
                goto cleanup;
            }
            i++; continue;
        }

        /* ---- Normal SQL statement ---- */
        {
            ResultSet sub_rs;
            if (proc_exec_sql(raw, ctx, all_names, all_vals, all_count, &sub_rs) < 0) {
                /* Check SQLEXCEPTION handler */
                int handled = 0;
                for (int h = 0; h < handler_count; h++) {
                    if (strcasecmp(handlers[h].cond, "SQLEXCEPTION") == 0) {
                        /* Execute handler action — if SET, update local variable */
                        const char *act = handlers[h].action;
                        while (*act && isspace((unsigned char)*act)) act++;
                        if (strncasecmp(act, "SET", 3) == 0 && isspace((unsigned char)act[3])) {
                            char *hp = (char *)act + 3;
                            while (*hp && isspace((unsigned char)*hp)) hp++;
                            char hvar[128] = "";
                            int hvi2 = 0;
                            while (*hp && !isspace((unsigned char)*hp) && *hp != '=' && hvi2 < 127)
                                hvar[hvi2++] = *hp++;
                            hvar[hvi2] = '\0';
                            while (*hp && (isspace((unsigned char)*hp) || *hp == '=')) hp++;
                            REFRESH_ALL();
                            char hval[256];
                            substitute_params(hp, hval, sizeof(hval), all_names, all_vals, all_count);
                            int hvidx2 = proc_find_var(hvar, local_var_names, local_var_count);
                            if (hvidx2 >= 0) strncpy(local_var_values[hvidx2], hval, 255);
                        } else {
                            REFRESH_ALL();
                            ResultSet hrs;
                            proc_exec_sql(act, ctx, all_names, all_vals, all_count, &hrs);
                            result_free(&hrs);
                        }
                        handled = 1;
                        if (handlers[h].type == 1) { /* EXIT */
                            result_free(&sub_rs);
                            goto cleanup;
                        }
                        break;
                    }
                }
                if (!handled) {
                    rs->has_error = 1;
                    strncpy(rs->error_message, sub_rs.error_message, sizeof(rs->error_message)-1);
                    strncpy(rs->error_sqlstate, sub_rs.error_sqlstate, sizeof(rs->error_sqlstate)-1);
                    result_free(&sub_rs);
                    goto cleanup;
                }
            }

            /* If last statement is SELECT, transfer results */
            if (i == stmt_count - 1 && sub_rs.num_cols > 0)
                proc_transfer_result(rs, &sub_rs);
            result_free(&sub_rs);
        }
        i++;
    }

    /* Handle END FOR increment: when END FOR jumps back to FOR,
     * the FOR handler checks current value and increments */

cleanup:
    /* OUT/INOUT parameter writeback to caller's @variables */
    for (int p = 0; p < param_count; p++) {
        if (strcasecmp(param_modes[p], "OUT") == 0 ||
            strcasecmp(param_modes[p], "INOUT") == 0) {
            const char *caller_ref = arg_caller_refs[p];
            if (caller_ref[0] == '@' && ctx) {
                const char *vname = caller_ref + 1;
                int found_uv = 0;
                for (int uv = 0; uv < ctx->user_var_count; uv++) {
                    if (strcasecmp(ctx->user_var_names[uv], vname) == 0) {
                        strncpy(ctx->user_var_values[uv], pvals[p], 255);
                        found_uv = 1;
                        break;
                    }
                }
                if (!found_uv && ctx->user_var_count < 64) {
                    strncpy(ctx->user_var_names[ctx->user_var_count], vname, 127);
                    strncpy(ctx->user_var_values[ctx->user_var_count], pvals[p], 255);
                    ctx->user_var_count++;
                }
            }
        }
    }

    /* Free open cursors */
    for (int c = 0; c < cursor_count; c++)
        if (cursors[c].is_open) result_free(&cursors[c].crs);

    free(bmap);
    free(stmts);
    if (!rs->has_error && rs->command_tag[0] == '\0')
        strcpy(rs->command_tag, "CALL");

    #undef REFRESH_ALL
}

static void execute_via_parser(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    char *sqlCopy;
    /* volatile: values survive longjmp per C standard */
    volatile int saved_stdout = -1;
    volatile int saved_stderr = -1;
    volatile YY_BUFFER_STATE scan_buf = NULL;
    volatile int parse_mutex_held = 0;
    yyscan_t local_scanner = NULL;

    /* Set subquery callback for recursive execution */
    if (g_qctx) {
        g_qctx->subquery_fn = evo_subquery_exec;
        g_qctx->subquery_ctx = ctx;
        g_qctx->uservar_fn = evo_uservar_lookup;
        g_qctx->uservar_ctx = ctx;
        g_qctx->trigger_exec_fn = evo_trigger_exec;
        g_qctx->trigger_exec_ctx = ctx;
    }

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
    g_upd.colPosition = 0;
    g_upd.colPositionAfter[0] = '\0';
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
    evo_seq_reset_params();
    g_ins.data[0] = '\0';
    g_del.rowCount = 0;
    g_upd.rowCount = 0;
    g_ins.rowCount = 0;
    g_ins.columnCount = 0;
    g_ins.insertFromSelect = 0;
    g_ins.onDupKeyUpdate = 0;
    g_ins.onDupSetCount = 0;
    memset(g_ins.onDupSetExprs, 0, sizeof(g_ins.onDupSetExprs));
    { extern __thread int g_ins_upsert_mode; g_ins_upsert_mode = 0; }
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

    /* Reset procedure state */
    memset(&g_proc, 0, sizeof(g_proc));
    memset(&g_trig, 0, sizeof(g_trig));
    memset(&g_returning, 0, sizeof(g_returning));
    g_returning_row_count = 0;
    g_returning_col_count = 0;

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
        extern __thread int g_trigger_exec_active;
        int already_locked = (ctx && ctx->serializable_locked) || g_trigger_exec_active;
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
        /* Set lexer position tracking for subquery SQL extraction */
        { extern __thread int g_lex_pos;
          extern __thread const char *g_lex_input;
          g_lex_pos = 0;
          g_lex_input = sqlCopy; }
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

        /* CALL procedure — execute body after successful parse */
        if (!rs->has_error && is_call_query(sql) && g_proc.callName[0]) {
            execute_call_procedure(rs, ctx);
            goto post_collect;
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
             * filter the join result to only include requested columns.
             * Skip if selectExprs has expressions — handled by expr eval below. */
            int has_join_expr = 0;
            if (g_expr.selectExprCount > 0) {
                for (int si = 0; si < g_expr.selectExprCount; si++) {
                    if (g_expr.selectExprs[si] && !expr_is_column(g_expr.selectExprs[si])) {
                        has_join_expr = 1; break;
                    }
                }
            }
            if (!rs->has_error && g_sel.columnCount > 0 && !has_join_expr) {
                /* Map requested columns to join result positions */
                int col_map[CAT_MAX_COLUMNS];
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

            /* Expression evaluation for JOIN results (e.g., p.id + 1) */
            if (!rs->has_error && g_expr.selectExprCount > 0 && rs->num_cols > 0) {
                int has_expr = 0;
                for (int si = 0; si < g_expr.selectExprCount; si++) {
                    if (g_expr.selectExprs[si] && !expr_is_column(g_expr.selectExprs[si])) {
                        has_expr = 1; break;
                    }
                }
                if (has_expr) {
                    /* Build column context from JOIN result */
                    char cn[CAT_MAX_COLUMNS][128];
                    int nc = rs->num_cols;
                    for (int c = 0; c < nc && c < CAT_MAX_COLUMNS; c++) {
                        strncpy(cn[c], rs->columns[c].name, 127);
                        cn[c][127] = '\0';
                    }

                    /* Set up new column headers from selectExprs */
                    int new_nc = g_expr.selectExprCount;
                    ColumnInfo *origCols = (ColumnInfo *)malloc(sizeof(ColumnInfo) * (nc > 0 ? nc : 1));
                    if (origCols)
                        memcpy(origCols, rs->columns, sizeof(ColumnInfo) * nc);
                    rs->num_cols = new_nc;
                    for (int c = 0; c < new_nc; c++) {
                        memset(&rs->columns[c], 0, sizeof(ColumnInfo));
                        if (g_expr.selectExprs[c])
                            strncpy(rs->columns[c].name, g_expr.selectExprs[c]->display,
                                    MAX_COL_NAME - 1);
                        else
                            strncpy(rs->columns[c].name, "?column?", MAX_COL_NAME - 1);
                        /* Infer type from original column if plain column */
                        if (g_expr.selectExprs[c] && expr_is_column(g_expr.selectExprs[c])) {
                            for (int oc = 0; oc < nc; oc++) {
                                if (strcasecmp(origCols[oc].name,
                                               g_expr.selectExprs[c]->val.col_name) == 0) {
                                    rs->columns[c].pg_type_oid = origCols[oc].pg_type_oid;
                                    break;
                                }
                            }
                        }
                    }

                    /* Evaluate expressions for each row */
                    for (int r = 0; r < rs->num_rows; r++) {
                        char cv[CAT_MAX_COLUMNS][256];
                        for (int c = 0; c < nc && c < CAT_MAX_COLUMNS; c++) {
                            if (rs->rows[r].is_null[c])
                                strcpy(cv[c], "\x01NULL\x01");
                            else {
                                const char *fv = rs->rows[r].fields[c];
                                strncpy(cv[c], fv ? fv : "", 255);
                                cv[c][255] = '\0';
                            }
                        }

                        row_clear(&rs->rows[r]);
                        memset(&rs->rows[r], 0, sizeof(Row));
                        rs->rows[r].num_fields = new_nc;

                        for (int c = 0; c < new_nc; c++) {
                            if (!g_expr.selectExprs[c]) {
                                row_set_null(&rs->rows[r], c); continue;
                            }
                            char result[4096];
                            if (expr_evaluate(g_expr.selectExprs[c],
                                    (const char (*)[128])cn,
                                    (const char (*)[256])cv, nc,
                                    result, sizeof(result)) &&
                                strcmp(result, "\x01NULL\x01") != 0) {
                                row_set(&rs->rows[r], c, result);
                            } else {
                                row_set_null(&rs->rows[r], c);
                            }
                        }
                    }
                    free(origCols);
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
                rs->columns[s].pg_type_oid = expr_infer_pg_oid(g_expr.selectExprs[s]);
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
                /* Check for OR REPLACE before PROCEDURE/FUNCTION */
                const char *pp = p;
                if (strncasecmp(pp, "OR", 2) == 0 && isspace((unsigned char)pp[2])) {
                    pp += 2; while (*pp && isspace((unsigned char)*pp)) pp++;
                    if (strncasecmp(pp, "REPLACE", 7) == 0) {
                        pp += 7; while (*pp && isspace((unsigned char)*pp)) pp++;
                    }
                }
                if (strncasecmp(pp, "PROCEDURE", 9) == 0)
                    strcpy(rs->command_tag, "CREATE PROCEDURE");
                else if (strncasecmp(pp, "FUNCTION", 8) == 0)
                    strcpy(rs->command_tag, "CREATE FUNCTION");
                else if (strncasecmp(p, "TRIGGER", 7) == 0)
                    strcpy(rs->command_tag, "CREATE TRIGGER");
                else if (strncasecmp(p, "DATABASE", 8) == 0)
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
            else if (is_copy_query(sql)) {
                /* If the COPY targets STDIN/STDOUT, hand off to pg_handler via
                 * rs->copy_stream_mode; the final COPY N tag is written after
                 * the stream completes. */
                if (g_copy.active && (g_copy.source == EVO_COPY_SRC_STDIN ||
                                      g_copy.source == EVO_COPY_SRC_STDOUT)) {
                    rs->copy_stream_mode = (g_copy.source == EVO_COPY_SRC_STDIN) ? 1 : 2;
                    strncpy(rs->copy_table, g_copy.tblName, sizeof(rs->copy_table) - 1);
                    rs->copy_format    = g_copy.format;
                    rs->copy_delimiter = g_copy.delimiter ? g_copy.delimiter :
                                         (g_copy.format == EVO_COPY_FMT_CSV ? ',' : '\t');
                    rs->copy_quote     = g_copy.quote ? g_copy.quote : '"';
                    strncpy(rs->copy_null_str, g_copy.nullStr,
                            sizeof(rs->copy_null_str) - 1);
                    rs->copy_header    = g_copy.header;
                    rs->copy_column_count = g_copy.columnCount;
                    for (int cc = 0; cc < g_copy.columnCount && cc < 64; cc++) {
                        strncpy(rs->copy_columns[cc], g_copy.columns[cc],
                                sizeof(rs->copy_columns[cc]) - 1);
                    }
                    /* Tag finalized by pg_handler after stream ends. */
                    rs->command_tag[0] = '\0';
                } else {
                    snprintf(rs->command_tag, sizeof(rs->command_tag),
                             "COPY %d", g_copy.rowCount);
                }
            }
            else if (is_drop_query(sql)) {
                const char *p = sql;
                while (*p && isspace((unsigned char)*p)) p++;
                p += 4; /* skip "DROP" */
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "PROCEDURE", 9) == 0)
                    strcpy(rs->command_tag, "DROP PROCEDURE");
                else if (strncasecmp(p, "FUNCTION", 8) == 0)
                    strcpy(rs->command_tag, "DROP FUNCTION");
                else if (strncasecmp(p, "TRIGGER", 7) == 0)
                    strcpy(rs->command_tag, "DROP TRIGGER");
                else if (strncasecmp(p, "INDEX", 5) == 0)
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
            else if (is_call_query(sql))
                strcpy(rs->command_tag, "CALL");
            else
                strcpy(rs->command_tag, "OK");
        }

post_collect: ;

        /* RETURNING clause — transfer captured rows to ResultSet */
        if (!rs->has_error && g_returning.active && g_returning_row_count > 0) {
            rs->is_select = 1;
            for (int c = 0; c < g_returning_col_count; c++) {
                int oid = type_encoding_to_pg_oid(g_returning_col_types[c]);
                result_add_column(rs, g_returning_col_names[c], oid);
            }
            for (int r = 0; r < g_returning_row_count; r++) {
                int row = result_add_row(rs);
                for (int c = 0; c < g_returning_col_count; c++) {
                    if (g_returning_null[r][c])
                        result_set_null(rs, row, c);
                    else
                        result_set_field(rs, row, c, g_returning_buf[r][c]);
                }
            }
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

    /* Pass 1: Remove double quotes around identifiers (skip single-quoted strings) */
    src = sql;
    dst = buf;
    while (*src) {
        if (*src == '\'') {
            /* Inside single-quoted string — copy verbatim */
            *dst++ = *src++;
            while (*src) {
                if (*src == '\'' && *(src + 1) == '\'') {
                    *dst++ = *src++; *dst++ = *src++;
                } else if (*src == '\'') {
                    *dst++ = *src++; break;
                } else {
                    *dst++ = *src++;
                }
            }
        } else if (*src == '"') {
            src++;  /* skip opening double quote */
            while (*src && *src != '"') {
                *dst++ = *src++;
            }
            if (*src == '"') src++;  /* skip closing double quote */
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Pass 2: Remove "public." and "pg_catalog." prefixes (skip single-quoted strings) */
    src = sql;
    dst = buf;
    while (*src) {
        if (*src == '\'') {
            *dst++ = *src++;
            while (*src) {
                if (*src == '\'' && *(src + 1) == '\'') {
                    *dst++ = *src++; *dst++ = *src++;
                } else if (*src == '\'') {
                    *dst++ = *src++; break;
                } else {
                    *dst++ = *src++;
                }
            }
        } else if (strncasecmp(src, "public.", 7) == 0) {
            src += 7;
        } else if (strncasecmp(src, "pg_catalog.", 11) == 0) {
            src += 11;
        } else {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
    strcpy(sql, buf);

    /* Detect JOIN keyword or implicit cross join (FROM t1, t2)
     * — used by Pass 3 and Pass 4 to preserve alias qualifiers */
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
        /* Also detect implicit cross join: comma in FROM clause */
        if (!has_join) {
            const char *from = NULL;
            { const char *s = sql;
              while (*s) {
                  if (strncasecmp(s, "FROM ", 5) == 0 &&
                      (s == sql || !isalnum((unsigned char)*(s-1)))) {
                      from = s; break;
                  }
                  s++;
              }
            }
            if (from) {
                const char *p = from + 5;
                int depth = 0, in_str = 0;
                while (*p) {
                    if (*p == '\'') in_str = !in_str;
                    if (in_str) { p++; continue; }
                    if (*p == '(') depth++;
                    else if (*p == ')') depth--;
                    /* Stop at WHERE/ORDER/GROUP/LIMIT/HAVING */
                    if (depth == 0 && (strncasecmp(p, "WHERE", 5) == 0 ||
                        strncasecmp(p, "ORDER", 5) == 0 ||
                        strncasecmp(p, "GROUP", 5) == 0 ||
                        strncasecmp(p, "LIMIT", 5) == 0 ||
                        strncasecmp(p, "HAVING", 6) == 0))
                        break;
                    if (depth == 0 && *p == ',') {
                        has_join = 1; break;
                    }
                    p++;
                }
            }
        }
    }

    /* Pass 3: Remove "alias." prefix from qualified references.
     * SKIP for JOIN queries — qualified names needed for ON conditions.
     * SKIP content inside single-quoted strings (JSON paths etc.). */
    {
        if (!has_join) {
            src = sql;
            dst = buf;
            int in_sq = 0;
            while (*src) {
                if (*src == '\'') {
                    in_sq = !in_sq;
                    *dst++ = *src++;
                } else if (in_sq) {
                    if (*src == '\\' && *(src + 1)) { *dst++ = *src++; }
                    *dst++ = *src++;
                } else if (*src == '.' && dst > buf &&
                    (isalpha((unsigned char)*(src - 1)) || *(src - 1) == '_') &&
                    (src[1] == '*' || isalpha((unsigned char)src[1]) || src[1] == '_')) {
                    char *alias_start = dst - 1;
                    while (alias_start > buf && (isalnum((unsigned char)*(alias_start-1)) || *(alias_start-1) == '_'))
                        alias_start--;
                    /* Preserve EXCLUDED qualifier — pseudo-table in ON CONFLICT DO UPDATE.
                     * Unlike table aliases, EXCLUDED.<col> semantics differ from <col>. */
                    int alias_len = (int)(dst - alias_start);
                    if (alias_len == 8 && strncasecmp(alias_start, "EXCLUDED", 8) == 0) {
                        *dst++ = *src++;   /* keep the '.' */
                    } else {
                        dst = alias_start;
                        src++;
                    }
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
                    (isalpha((unsigned char)src[4]) || src[4] == '_') &&
                    src > sql && *(src - 1) != ')') {  /* preserve AS after derived tables */
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

/* ================================================================
 *  Set Operations: UNION / UNION ALL / INTERSECT / EXCEPT / MINUS
 * ================================================================ */

#define EVO_SETOP_UNION         1
#define EVO_SETOP_UNION_ALL     2
#define EVO_SETOP_INTERSECT     3
#define EVO_SETOP_INTERSECT_ALL 4
#define EVO_SETOP_EXCEPT        5
#define EVO_SETOP_EXCEPT_ALL    6

/* Detect top-level set operation keyword in SQL.
 * Returns operation type and split position, or 0 if none found.
 * Splits at last UNION/EXCEPT/MINUS (INTERSECT binds tighter). */
static int evo_detect_set_op(const char *sql, int *split_pos)
{
    int len = (int)strlen(sql);
    int depth = 0;       /* parenthesis depth */
    int in_str = 0;      /* inside single-quoted string */
    int last_union = -1, last_except = -1, last_intersect = -1;
    int last_union_type = 0, last_except_type = 0, last_intersect_type = 0;

    for (int i = 0; i < len; i++) {
        char c = sql[i];
        if (in_str) {
            if (c == '\'' && (i + 1 >= len || sql[i + 1] != '\''))
                in_str = 0;
            else if (c == '\'' && i + 1 < len && sql[i + 1] == '\'')
                i++; /* escaped quote */
            continue;
        }
        if (c == '\'') { in_str = 1; continue; }
        if (c == '(') { depth++; continue; }
        if (c == ')') { depth--; continue; }
        if (depth != 0) continue;

        /* Check keywords at word boundary */
        if (i > 0 && !isspace((unsigned char)sql[i - 1]) && sql[i - 1] != ')') continue;

        if (strncasecmp(sql + i, "UNION", 5) == 0 &&
            (i + 5 >= len || !isalnum((unsigned char)sql[i + 5]))) {
            /* Check for UNION ALL */
            int j = i + 5;
            while (j < len && isspace((unsigned char)sql[j])) j++;
            if (strncasecmp(sql + j, "ALL", 3) == 0 &&
                (j + 3 >= len || !isalnum((unsigned char)sql[j + 3]))) {
                last_union = i;
                last_union_type = EVO_SETOP_UNION_ALL;
            } else {
                last_union = i;
                last_union_type = EVO_SETOP_UNION;
            }
        }
        else if (strncasecmp(sql + i, "EXCEPT", 6) == 0 &&
                 (i + 6 >= len || !isalnum((unsigned char)sql[i + 6]))) {
            int j = i + 6;
            while (j < len && isspace((unsigned char)sql[j])) j++;
            if (strncasecmp(sql + j, "ALL", 3) == 0 &&
                (j + 3 >= len || !isalnum((unsigned char)sql[j + 3]))) {
                last_except = i;
                last_except_type = EVO_SETOP_EXCEPT_ALL;
            } else {
                last_except = i;
                last_except_type = EVO_SETOP_EXCEPT;
            }
        }
        else if (strncasecmp(sql + i, "MINUS", 5) == 0 &&
                 (i + 5 >= len || !isalnum((unsigned char)sql[i + 5]))) {
            last_except = i;
            last_except_type = EVO_SETOP_EXCEPT; /* MINUS = EXCEPT */
        }
        else if (strncasecmp(sql + i, "INTERSECT", 9) == 0 &&
                 (i + 9 >= len || !isalnum((unsigned char)sql[i + 9]))) {
            int j = i + 9;
            while (j < len && isspace((unsigned char)sql[j])) j++;
            if (strncasecmp(sql + j, "ALL", 3) == 0 &&
                (j + 3 >= len || !isalnum((unsigned char)sql[j + 3]))) {
                last_intersect = i;
                last_intersect_type = EVO_SETOP_INTERSECT_ALL;
            } else {
                last_intersect = i;
                last_intersect_type = EVO_SETOP_INTERSECT;
            }
        }
    }

    /* UNION/EXCEPT/MINUS have lower precedence than INTERSECT.
     * Split at last UNION/EXCEPT first; if none, split at last INTERSECT. */
    if (last_union >= 0 || last_except >= 0) {
        if (last_union >= last_except) {
            *split_pos = last_union;
            return last_union_type;
        } else {
            *split_pos = last_except;
            return last_except_type;
        }
    }
    if (last_intersect >= 0) {
        *split_pos = last_intersect;
        return last_intersect_type;
    }
    return 0;
}

/* Compare two result rows for equality (NULL == NULL for set operations). */
static int evo_rows_equal(const ResultSet *rs, int r1, int r2)
{
    for (int c = 0; c < rs->num_cols; c++) {
        int n1 = rs->rows[r1].is_null[c];
        int n2 = rs->rows[r2].is_null[c];
        if (n1 && n2) continue;
        if (n1 != n2) return 0;
        const char *v1 = rs->rows[r1].fields[c];
        const char *v2 = rs->rows[r2].fields[c];
        if (!v1 || !v2) return 0;
        if (strcmp(v1, v2) != 0) return 0;
    }
    return 1;
}

/* Compare a row from rs1 with a row from rs2 */
static int evo_rows_equal_cross(const ResultSet *rs1, int r1,
                                 const ResultSet *rs2, int r2)
{
    int nc = rs1->num_cols < rs2->num_cols ? rs1->num_cols : rs2->num_cols;
    for (int c = 0; c < nc; c++) {
        int n1 = rs1->rows[r1].is_null[c];
        int n2 = rs2->rows[r2].is_null[c];
        if (n1 && n2) continue;
        if (n1 != n2) return 0;
        const char *v1 = rs1->rows[r1].fields[c];
        const char *v2 = rs2->rows[r2].fields[c];
        if (!v1 || !v2) return 0;
        if (strcmp(v1, v2) != 0) return 0;
    }
    return 1;
}

/* Copy a row from src to dst ResultSet */
static void evo_copy_row(ResultSet *dst, const ResultSet *src, int src_row)
{
    int row = result_add_row(dst);
    if (row < 0) return;
    for (int c = 0; c < dst->num_cols && c < src->num_cols; c++) {
        if (src->rows[src_row].is_null[c])
            result_set_null(dst, row, c);
        else if (src->rows[src_row].fields[c])
            result_set_field(dst, row, c, src->rows[src_row].fields[c]);
    }
}

/* Check if row exists in result set (for dedup) */
static int evo_row_exists(const ResultSet *rs, int check_row, int up_to)
{
    for (int r = 0; r < up_to; r++) {
        if (evo_rows_equal(rs, r, check_row)) return 1;
    }
    return 0;
}

/* Combine two result sets based on set operation type */
static void evo_combine_results(const ResultSet *left, const ResultSet *right,
                                 int op_type, ResultSet *out)
{
    result_init(out);
    /* Copy column metadata from left */
    for (int c = 0; c < left->num_cols; c++) {
        result_add_column(out, left->columns[c].name,
                          left->columns[c].pg_type_oid);
    }

    switch (op_type) {
    case EVO_SETOP_UNION_ALL:
        for (int r = 0; r < left->num_rows; r++) evo_copy_row(out, left, r);
        for (int r = 0; r < right->num_rows; r++) evo_copy_row(out, right, r);
        break;

    case EVO_SETOP_UNION:
        for (int r = 0; r < left->num_rows; r++) evo_copy_row(out, left, r);
        for (int r = 0; r < right->num_rows; r++) evo_copy_row(out, right, r);
        /* Dedup */
        for (int r = out->num_rows - 1; r > 0; r--) {
            if (evo_row_exists(out, r, r)) {
                /* Mark as removed by setting all fields NULL + a flag.
                 * Simpler: compact array by shifting. */
                for (int s = r; s < out->num_rows - 1; s++)
                    out->rows[s] = out->rows[s + 1];
                out->num_rows--;
            }
        }
        break;

    case EVO_SETOP_INTERSECT:
        for (int lr = 0; lr < left->num_rows; lr++) {
            int found = 0;
            for (int rr = 0; rr < right->num_rows; rr++) {
                if (evo_rows_equal_cross(left, lr, right, rr)) {
                    found = 1; break;
                }
            }
            if (found) {
                evo_copy_row(out, left, lr);
                /* Dedup: check if already in output */
                if (out->num_rows > 1 &&
                    evo_row_exists(out, out->num_rows - 1, out->num_rows - 1)) {
                    out->num_rows--;
                }
            }
        }
        break;

    case EVO_SETOP_INTERSECT_ALL: {
        /* Track how many times each right row has been matched */
        int *right_used = (int *)calloc(right->num_rows, sizeof(int));
        for (int lr = 0; lr < left->num_rows; lr++) {
            for (int rr = 0; rr < right->num_rows; rr++) {
                if (!right_used[rr] &&
                    evo_rows_equal_cross(left, lr, right, rr)) {
                    evo_copy_row(out, left, lr);
                    right_used[rr] = 1;
                    break;
                }
            }
        }
        free(right_used);
        break;
    }

    case EVO_SETOP_EXCEPT:
        for (int lr = 0; lr < left->num_rows; lr++) {
            int found = 0;
            for (int rr = 0; rr < right->num_rows; rr++) {
                if (evo_rows_equal_cross(left, lr, right, rr)) {
                    found = 1; break;
                }
            }
            if (!found) {
                evo_copy_row(out, left, lr);
                if (out->num_rows > 1 &&
                    evo_row_exists(out, out->num_rows - 1, out->num_rows - 1)) {
                    out->num_rows--;
                }
            }
        }
        break;

    case EVO_SETOP_EXCEPT_ALL: {
        int *right_used = (int *)calloc(right->num_rows, sizeof(int));
        for (int lr = 0; lr < left->num_rows; lr++) {
            int found = 0;
            for (int rr = 0; rr < right->num_rows; rr++) {
                if (!right_used[rr] &&
                    evo_rows_equal_cross(left, lr, right, rr)) {
                    right_used[rr] = 1;
                    found = 1;
                    break;
                }
            }
            if (!found) evo_copy_row(out, left, lr);
        }
        free(right_used);
        break;
    }
    }
}

/* Get keyword length for splitting */
static int evo_setop_keyword_len(int op_type)
{
    switch (op_type) {
    case EVO_SETOP_UNION:         return 5;  /* "UNION" */
    case EVO_SETOP_UNION_ALL:     return 9;  /* "UNION ALL" (approx) */
    case EVO_SETOP_INTERSECT:     return 9;  /* "INTERSECT" */
    case EVO_SETOP_INTERSECT_ALL: return 13; /* "INTERSECT ALL" */
    case EVO_SETOP_EXCEPT:        return 6;  /* "EXCEPT" or "MINUS"(5) */
    case EVO_SETOP_EXCEPT_ALL:    return 10; /* "EXCEPT ALL" */
    default: return 5;
    }
}

/* Execute a set operation by splitting SQL, running each part, combining */
static void execute_set_operation(const char *sql, ResultSet *rs,
                                   SessionCtx *ctx, int op_type, int split_pos)
{
    int sql_len = (int)strlen(sql);

    /* Split into left and right SQL */
    char *left_sql = (char *)malloc(split_pos + 1);
    if (!left_sql) { result_set_error(rs, "XX000", "out of memory"); return; }
    memcpy(left_sql, sql, split_pos);
    left_sql[split_pos] = '\0';
    /* Trim trailing whitespace */
    int lt = split_pos - 1;
    while (lt >= 0 && isspace((unsigned char)left_sql[lt])) left_sql[lt--] = '\0';

    /* Skip keyword */
    int right_start = split_pos;
    /* Skip the keyword itself */
    while (right_start < sql_len && isspace((unsigned char)sql[right_start])) right_start++;
    /* Skip UNION/INTERSECT/EXCEPT/MINUS */
    if (strncasecmp(sql + right_start, "UNION", 5) == 0) right_start += 5;
    else if (strncasecmp(sql + right_start, "INTERSECT", 9) == 0) right_start += 9;
    else if (strncasecmp(sql + right_start, "EXCEPT", 6) == 0) right_start += 6;
    else if (strncasecmp(sql + right_start, "MINUS", 5) == 0) right_start += 5;
    /* Skip optional ALL */
    while (right_start < sql_len && isspace((unsigned char)sql[right_start])) right_start++;
    if (strncasecmp(sql + right_start, "ALL", 3) == 0 &&
        (right_start + 3 >= sql_len || !isalnum((unsigned char)sql[right_start + 3])))
        right_start += 3;
    while (right_start < sql_len && isspace((unsigned char)sql[right_start])) right_start++;

    char *right_sql = strdup(sql + right_start);
    if (!right_sql) { free(left_sql); result_set_error(rs, "XX000", "out of memory"); return; }

    /* Extract trailing LIMIT/ORDER BY from right_sql (applies to combined result) */
    int combined_limit = -1;
    int combined_offset = 0;
    {
        /* Scan for top-level LIMIT at end of right_sql */
        int rlen = (int)strlen(right_sql);
        int depth = 0, in_s = 0;
        int last_limit = -1, last_order = -1;
        for (int i = 0; i < rlen; i++) {
            if (in_s) { if (right_sql[i] == '\'') in_s = 0; continue; }
            if (right_sql[i] == '\'') { in_s = 1; continue; }
            if (right_sql[i] == '(') depth++;
            if (right_sql[i] == ')') depth--;
            if (depth != 0) continue;
            if (i > 0 && !isspace((unsigned char)right_sql[i-1]) && right_sql[i-1] != ')') continue;
            if (strncasecmp(right_sql + i, "LIMIT", 5) == 0 &&
                (i + 5 >= rlen || !isalnum((unsigned char)right_sql[i+5])))
                last_limit = i;
            if (strncasecmp(right_sql + i, "ORDER", 5) == 0 &&
                (i + 5 >= rlen || !isalnum((unsigned char)right_sql[i+5])))
                last_order = i;
        }
        if (last_limit >= 0) {
            combined_limit = atoi(right_sql + last_limit + 5);
            /* Check for OFFSET */
            char *off = strcasestr(right_sql + last_limit, "OFFSET");
            if (off) combined_offset = atoi(off + 6);
            right_sql[last_limit] = '\0';
            /* Trim */
            int t = last_limit - 1;
            while (t >= 0 && isspace((unsigned char)right_sql[t])) right_sql[t--] = '\0';
        }
        /* ORDER BY extraction — strip from right, apply after combine */
        /* For simplicity, leave ORDER BY in right_sql for now (handled per-query) */
    }

    /* Execute left sub-query */
    ResultSet left_rs;
    memset(&left_rs, 0, sizeof(left_rs));
    result_init(&left_rs);
    query_execute(left_sql, &left_rs, ctx);
    free(left_sql);

    if (left_rs.has_error) {
        result_set_error(rs, left_rs.error_sqlstate, left_rs.error_message);
        result_free(&left_rs);
        free(right_sql);
        return;
    }

    /* Execute right sub-query */
    ResultSet right_rs;
    memset(&right_rs, 0, sizeof(right_rs));
    result_init(&right_rs);
    query_execute(right_sql, &right_rs, ctx);
    free(right_sql);

    if (right_rs.has_error) {
        result_set_error(rs, right_rs.error_sqlstate, right_rs.error_message);
        result_free(&left_rs);
        result_free(&right_rs);
        return;
    }

    /* Validate column count match */
    if (left_rs.num_cols != right_rs.num_cols) {
        result_set_error(rs, "42601",
            "each UNION/INTERSECT/EXCEPT query must have the same number of columns");
        result_free(&left_rs);
        result_free(&right_rs);
        return;
    }

    /* Combine results */
    evo_combine_results(&left_rs, &right_rs, op_type, rs);
    result_free(&left_rs);
    result_free(&right_rs);

    /* Apply combined LIMIT/OFFSET if extracted */
    if (combined_limit >= 0) {
        int start = combined_offset;
        int end = start + combined_limit;
        if (start > rs->num_rows) start = rs->num_rows;
        if (end > rs->num_rows) end = rs->num_rows;
        /* Shift rows to remove offset, then truncate */
        if (start > 0) {
            for (int r = 0; r < end - start; r++)
                rs->rows[r] = rs->rows[r + start];
        }
        rs->num_rows = end - start;
    }

    rs->is_select = 1;
    snprintf(rs->command_tag, sizeof(rs->command_tag), "SELECT %d", rs->num_rows);
}

/* ----------------------------------------------------------------
 *  CTE (Common Table Expressions) — WITH ... AS pre-parse handler
 * ---------------------------------------------------------------- */
#define MAX_CTE 16

typedef struct {
    char  name[128];
    char *sql;            /* heap-allocated */
    char  col_aliases[32][128]; /* optional column list: WITH t(a,b) AS ... */
    int   col_alias_count;
    int   is_recursive;   /* WITH RECURSIVE */
} CteDef;

/* Extract CTE definitions from WITH ... AS (...) prefix.
 * Returns 1 on success, 0 if not a CTE query. */
static int evo_extract_ctes(const char *sql, CteDef *ctes, int *cte_count,
                            const char **main_query)
{
    const char *p = sql;
    /* Skip whitespace */
    while (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r') p++;
    if (strncasecmp(p, "WITH ", 5) != 0) return 0;
    p += 5;
    while (*p == ' ' || *p == '\t' || *p == '\n') p++;

    /* Detect RECURSIVE keyword */
    int is_recursive = 0;
    if (strncasecmp(p, "RECURSIVE ", 10) == 0) {
        is_recursive = 1;
        p += 10;
        while (*p == ' ' || *p == '\t' || *p == '\n') p++;
    }

    *cte_count = 0;

    while (*cte_count < MAX_CTE) {
        /* Parse CTE name */
        const char *name_start = p;
        while (*p && ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z') ||
               (*p >= '0' && *p <= '9') || *p == '_'))
            p++;
        int name_len = (int)(p - name_start);
        if (name_len == 0 || name_len >= 128) return 0;

        strncpy(ctes[*cte_count].name, name_start, name_len);
        ctes[*cte_count].name[name_len] = '\0';
        ctes[*cte_count].col_alias_count = 0;
        ctes[*cte_count].is_recursive = is_recursive;

        /* Optional column list: WITH t(a, b, c) AS (...) */
        while (*p == ' ' || *p == '\t' || *p == '\n') p++;
        if (*p == '(' && strncasecmp(p, "(SELECT", 7) != 0 &&
            strncasecmp(p, "( SELECT", 8) != 0) {
            /* This is a column alias list, not the CTE body */
            p++; /* skip ( */
            while (*p && *p != ')' && ctes[*cte_count].col_alias_count < 32) {
                while (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',') p++;
                if (*p == ')') break;
                const char *cs = p;
                while (*p && *p != ',' && *p != ')' && *p != ' ' && *p != '\t') p++;
                int cl = (int)(p - cs);
                if (cl > 0 && cl < 128) {
                    int ci = ctes[*cte_count].col_alias_count;
                    strncpy(ctes[*cte_count].col_aliases[ci], cs, cl);
                    ctes[*cte_count].col_aliases[ci][cl] = '\0';
                    ctes[*cte_count].col_alias_count++;
                }
            }
            if (*p == ')') p++;
        }

        /* Skip whitespace + AS */
        while (*p == ' ' || *p == '\t' || *p == '\n') p++;
        if (strncasecmp(p, "AS", 2) != 0) return 0;
        p += 2;
        while (*p == ' ' || *p == '\t' || *p == '\n') p++;

        /* Extract parenthesized SQL with balanced parens */
        if (*p != '(') return 0;
        p++; /* skip opening ( */
        int depth = 1;
        const char *sql_start = p;
        int in_string = 0;
        while (*p && depth > 0) {
            if (*p == '\'' && !in_string) { in_string = 1; p++; continue; }
            if (*p == '\'' && in_string) { in_string = 0; p++; continue; }
            if (in_string) { p++; continue; }
            if (*p == '(') depth++;
            else if (*p == ')') { depth--; if (depth == 0) break; }
            p++;
        }
        if (depth != 0) return 0;

        int sql_len = (int)(p - sql_start);
        ctes[*cte_count].sql = malloc(sql_len + 1);
        if (!ctes[*cte_count].sql) return 0;
        memcpy(ctes[*cte_count].sql, sql_start, sql_len);
        ctes[*cte_count].sql[sql_len] = '\0';

        p++; /* skip closing ) */
        (*cte_count)++;

        /* Skip whitespace, check for comma (more CTEs) or end */
        while (*p == ' ' || *p == '\t' || *p == '\n') p++;
        if (*p == ',') {
            p++;
            while (*p == ' ' || *p == '\t' || *p == '\n') p++;
            continue;
        }
        break;
    }

    if (*cte_count == 0) return 0;
    *main_query = p;
    return 1;
}

/* Replace all occurrences of 'from' with 'to' in sql (case-insensitive, word boundary) */
static void evo_cte_replace_name(char *buf, int bufsz, const char *from, const char *to)
{
    int flen = (int)strlen(from);
    int tlen = (int)strlen(to);
    char *tmp = malloc(bufsz);
    if (!tmp) return;
    char *dst = tmp;
    const char *src = buf;

    while (*src) {
        if (strncasecmp(src, from, flen) == 0) {
            /* Check word boundary — must not be part of a larger identifier */
            char before = (src > buf) ? *(src - 1) : ' ';
            char after = *(src + flen);
            int before_ok = !(before >= 'A' && before <= 'Z') &&
                            !(before >= 'a' && before <= 'z') &&
                            !(before >= '0' && before <= '9') && before != '_';
            int after_ok = !(after >= 'A' && after <= 'Z') &&
                           !(after >= 'a' && after <= 'z') &&
                           !(after >= '0' && after <= '9') && after != '_';
            if (before_ok && after_ok) {
                if ((dst - tmp) + tlen >= bufsz - 1) break;
                memcpy(dst, to, tlen);
                dst += tlen;
                src += flen;
                continue;
            }
        }
        if ((dst - tmp) >= bufsz - 2) break;
        *dst++ = *src++;
    }
    *dst = '\0';
    strncpy(buf, tmp, bufsz - 1);
    buf[bufsz - 1] = '\0';
    free(tmp);
}

/* Map PG type OID to SQL type name for CREATE TABLE */
static const char *evo_pg_oid_to_type(int oid) {
    switch (oid) {
    case 20: case 21: case 23: return "INT";
    case 700: case 701: return "FLOAT";
    case 1043: return "VARCHAR(256)";
    case 25: return "VARCHAR(256)";
    case 1082: return "DATE";
    case 1114: return "TIMESTAMP";
    case 2950: return "UUID";
    default: return "VARCHAR(256)";
    }
}

static int evo_handle_cte(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    CteDef ctes[MAX_CTE];
    memset(ctes, 0, sizeof(ctes));
    int cte_count = 0;
    const char *main_query = NULL;

    if (!evo_extract_ctes(sql, ctes, &cte_count, &main_query))
        return 0;
    if (cte_count == 0 || !main_query || !main_query[0])
        return 0;

    char temp_names[MAX_CTE][128];
    int materialized = 0;

    for (int i = 0; i < cte_count; i++) {
        /* Resolve previous CTE names in this CTE's SQL */
        int res_sz = (int)strlen(ctes[i].sql) + 2048;
        char *resolved = malloc(res_sz);
        if (!resolved) goto cleanup;
        strncpy(resolved, ctes[i].sql, res_sz - 1);
        resolved[res_sz - 1] = '\0';
        for (int j = 0; j < materialized; j++)
            evo_cte_replace_name(resolved, res_sz,
                                 ctes[j].name, temp_names[j]);

        /* Build temp table name */
        snprintf(temp_names[i], sizeof(temp_names[i]), "__cte_%s", ctes[i].name);

        if (ctes[i].is_recursive) {
            /* ---- RECURSIVE CTE: anchor UNION ALL recursive ---- */
            /* Split on UNION ALL */
            char *union_pos = NULL;
            { const char *s = resolved;
              int in_str = 0, depth = 0;
              while (*s) {
                  if (*s == '\'' && !in_str) in_str = 1;
                  else if (*s == '\'' && in_str) in_str = 0;
                  if (!in_str) {
                      if (*s == '(') depth++;
                      else if (*s == ')') depth--;
                      if (depth == 0 && strncasecmp(s, "UNION ALL", 9) == 0 &&
                          (s[9] == ' ' || s[9] == '\n' || s[9] == '\t' || s[9] == '\r')) {
                          union_pos = (char *)s; break;
                      }
                  }
                  s++;
              }
            }
            if (!union_pos) {
                result_set_error(rs, "42601", "RECURSIVE CTE requires UNION ALL");
                free(resolved); goto cleanup;
            }

            /* Anchor = before UNION ALL, Recursive = after */
            int anchor_len = (int)(union_pos - resolved);
            char *anchor_sql = malloc(anchor_len + 1);
            memcpy(anchor_sql, resolved, anchor_len);
            anchor_sql[anchor_len] = '\0';

            const char *recur_sql = union_pos + 9; /* skip "UNION ALL" */
            while (*recur_sql == ' ' || *recur_sql == '\t' || *recur_sql == '\n' || *recur_sql == '\r')
                recur_sql++;

            /* 1. Execute anchor query */
            ResultSet anchor_rs;
            memset(&anchor_rs, 0, sizeof(anchor_rs));
            result_init(&anchor_rs);
            query_execute(anchor_sql, &anchor_rs, ctx);

            if (anchor_rs.has_error) {
                snprintf(rs->error_message, sizeof(rs->error_message),
                         "RECURSIVE CTE '%s' anchor: %s", ctes[i].name, anchor_rs.error_message);
                strncpy(rs->error_sqlstate, anchor_rs.error_sqlstate, 5);
                rs->has_error = 1;
                result_free(&anchor_rs); free(anchor_sql); free(resolved);
                goto cleanup;
            }

            /* 2. Create temp table from anchor result using DDL+INSERT */
            if (anchor_rs.num_cols > 0) {
                int ddl_sz = anchor_rs.num_cols * 300 + 256;
                char *ddl = malloc(ddl_sz);
                int off = snprintf(ddl, ddl_sz, "CREATE TEMPORARY TABLE %s (", temp_names[i]);
                for (int c = 0; c < anchor_rs.num_cols && off < ddl_sz - 100; c++) {
                    if (c > 0) off += snprintf(ddl + off, ddl_sz - off, ", ");
                    off += snprintf(ddl + off, ddl_sz - off, "%s %s",
                                    anchor_rs.columns[c].name,
                                    evo_pg_oid_to_type(anchor_rs.columns[c].pg_type_oid));
                }
                snprintf(ddl + off, ddl_sz - off, ")");
                ResultSet dr; memset(&dr, 0, sizeof(dr)); result_init(&dr);
                query_execute(ddl, &dr, ctx);
                result_free(&dr); free(ddl);

                /* Insert anchor rows */
                for (int r = 0; r < anchor_rs.num_rows; r++) {
                    int isz = anchor_rs.num_cols * 300 + 256;
                    char *ins = malloc(isz);
                    int ioff = snprintf(ins, isz, "INSERT INTO %s VALUES (", temp_names[i]);
                    for (int c = 0; c < anchor_rs.num_cols && ioff < isz - 100; c++) {
                        if (c > 0) ioff += snprintf(ins + ioff, isz - ioff, ", ");
                        if (anchor_rs.rows[r].is_null[c])
                            ioff += snprintf(ins + ioff, isz - ioff, "NULL");
                        else {
                            const char *v = anchor_rs.rows[r].fields[c];
                            ioff += snprintf(ins + ioff, isz - ioff, "'");
                            for (const char *vp = v; vp && *vp && ioff < isz - 10; vp++) {
                                if (*vp == '\'') ioff += snprintf(ins + ioff, isz - ioff, "''");
                                else ins[ioff++] = *vp;
                            }
                            ins[ioff] = '\0';
                            ioff += snprintf(ins + ioff, isz - ioff, "'");
                        }
                    }
                    snprintf(ins + ioff, isz - ioff, ")");
                    ResultSet ir; memset(&ir, 0, sizeof(ir)); result_init(&ir);
                    query_execute(ins, &ir, ctx);
                    { extern __thread QueryContext *g_qctx;
                      if (g_qctx && g_qctx->mvcc_xid > 0) {
                          uint32_t csn = pgm_next_csn();
                          clog_set_committed_csn(g_qctx->mvcc_xid, csn);
                          g_qctx->mvcc_xid = 0;
                      }
                    }
                    result_free(&ir); free(ins);
                }
            }

            /* 3. Create working table (holds only last iteration's rows) */
            char work_name[160];
            snprintf(work_name, sizeof(work_name), "%s_work", temp_names[i]);
            {
                /* Clone table structure for working table */
                int wddl_sz = anchor_rs.num_cols * 300 + 256;
                char *wddl = malloc(wddl_sz);
                int woff = snprintf(wddl, wddl_sz, "CREATE TEMPORARY TABLE %s (", work_name);
                for (int c = 0; c < anchor_rs.num_cols && woff < wddl_sz - 100; c++) {
                    if (c > 0) woff += snprintf(wddl + woff, wddl_sz - woff, ", ");
                    woff += snprintf(wddl + woff, wddl_sz - woff, "%s %s",
                                     anchor_rs.columns[c].name,
                                     evo_pg_oid_to_type(anchor_rs.columns[c].pg_type_oid));
                }
                snprintf(wddl + woff, wddl_sz - woff, ")");
                ResultSet wr; memset(&wr, 0, sizeof(wr)); result_init(&wr);
                query_execute(wddl, &wr, ctx);
                result_free(&wr); free(wddl);

                /* Populate working table with anchor rows */
                for (int r = 0; r < anchor_rs.num_rows; r++) {
                    int isz = anchor_rs.num_cols * 300 + 256;
                    char *ins = malloc(isz);
                    int ioff = snprintf(ins, isz, "INSERT INTO %s VALUES (", work_name);
                    for (int c = 0; c < anchor_rs.num_cols && ioff < isz - 100; c++) {
                        if (c > 0) ioff += snprintf(ins + ioff, isz - ioff, ", ");
                        if (anchor_rs.rows[r].is_null[c])
                            ioff += snprintf(ins + ioff, isz - ioff, "NULL");
                        else {
                            const char *v = anchor_rs.rows[r].fields[c];
                            ioff += snprintf(ins + ioff, isz - ioff, "'");
                            for (const char *vp = v; vp && *vp && ioff < isz - 10; vp++) {
                                if (*vp == '\'') ioff += snprintf(ins + ioff, isz - ioff, "''");
                                else ins[ioff++] = *vp;
                            }
                            ins[ioff] = '\0';
                            ioff += snprintf(ins + ioff, isz - ioff, "'");
                        }
                    }
                    snprintf(ins + ioff, isz - ioff, ")");
                    ResultSet ir; memset(&ir, 0, sizeof(ir)); result_init(&ir);
                    query_execute(ins, &ir, ctx);
                    { extern __thread QueryContext *g_qctx;
                      if (g_qctx && g_qctx->mvcc_xid > 0) {
                          clog_set_committed_csn(g_qctx->mvcc_xid, pgm_next_csn());
                          g_qctx->mvcc_xid = 0;
                      }
                    }
                    result_free(&ir); free(ins);
                }
            }

            /* 4. Iterative recursive execution using working table */
            #define RECURSIVE_MAX_ITER 100
            for (int iter = 0; iter < RECURSIVE_MAX_ITER; iter++) {
                /* Build recursive SQL: CTE name → working table */
                int rsz = (int)strlen(recur_sql) + 2048;
                char *iter_sql = malloc(rsz);
                strncpy(iter_sql, recur_sql, rsz - 1);
                iter_sql[rsz - 1] = '\0';
                evo_cte_replace_name(iter_sql, rsz, ctes[i].name, work_name);
                for (int j = 0; j < materialized; j++)
                    evo_cte_replace_name(iter_sql, rsz, ctes[j].name, temp_names[j]);

                ResultSet iter_rs;
                memset(&iter_rs, 0, sizeof(iter_rs));
                result_init(&iter_rs);
                query_execute(iter_sql, &iter_rs, ctx);
                free(iter_sql);

                if (iter_rs.has_error || iter_rs.num_rows == 0) {
                    result_free(&iter_rs);
                    break;
                }

                /* Clear working table for next iteration */
                { char trunc[256];
                  snprintf(trunc, sizeof(trunc), "DELETE FROM %s WHERE 1=1", work_name);
                  ResultSet tr; memset(&tr, 0, sizeof(tr)); result_init(&tr);
                  query_execute(trunc, &tr, ctx);
                  { extern __thread QueryContext *g_qctx;
                    if (g_qctx && g_qctx->mvcc_xid > 0) {
                        clog_set_committed_csn(g_qctx->mvcc_xid, pgm_next_csn());
                        g_qctx->mvcc_xid = 0;
                    }
                  }
                  result_free(&tr);
                }

                /* Insert new rows into BOTH accumulated and working tables */
                for (int r = 0; r < iter_rs.num_rows; r++) {
                    int isz = iter_rs.num_cols * 300 + 256;
                    char *vals = malloc(isz);
                    int ioff = snprintf(vals, isz, "(");
                    for (int c = 0; c < iter_rs.num_cols && ioff < isz - 100; c++) {
                        if (c > 0) ioff += snprintf(vals + ioff, isz - ioff, ", ");
                        if (iter_rs.rows[r].is_null[c])
                            ioff += snprintf(vals + ioff, isz - ioff, "NULL");
                        else {
                            const char *v = iter_rs.rows[r].fields[c];
                            ioff += snprintf(vals + ioff, isz - ioff, "'");
                            for (const char *vp = v; vp && *vp && ioff < isz - 10; vp++) {
                                if (*vp == '\'') ioff += snprintf(vals + ioff, isz - ioff, "''");
                                else vals[ioff++] = *vp;
                            }
                            vals[ioff] = '\0';
                            ioff += snprintf(vals + ioff, isz - ioff, "'");
                        }
                    }
                    snprintf(vals + ioff, isz - ioff, ")");

                    /* Insert into accumulated table */
                    char *ins1 = malloc(isz + 256);
                    snprintf(ins1, isz + 256, "INSERT INTO %s VALUES %s", temp_names[i], vals);
                    ResultSet ir1; memset(&ir1, 0, sizeof(ir1)); result_init(&ir1);
                    query_execute(ins1, &ir1, ctx);
                    { extern __thread QueryContext *g_qctx;
                      if (g_qctx && g_qctx->mvcc_xid > 0) {
                          clog_set_committed_csn(g_qctx->mvcc_xid, pgm_next_csn());
                          g_qctx->mvcc_xid = 0;
                      }
                    }
                    result_free(&ir1); free(ins1);

                    /* Insert into working table */
                    char *ins2 = malloc(isz + 256);
                    snprintf(ins2, isz + 256, "INSERT INTO %s VALUES %s", work_name, vals);
                    ResultSet ir2; memset(&ir2, 0, sizeof(ir2)); result_init(&ir2);
                    query_execute(ins2, &ir2, ctx);
                    { extern __thread QueryContext *g_qctx;
                      if (g_qctx && g_qctx->mvcc_xid > 0) {
                          clog_set_committed_csn(g_qctx->mvcc_xid, pgm_next_csn());
                          g_qctx->mvcc_xid = 0;
                      }
                    }
                    result_free(&ir2); free(ins2);
                    free(vals);
                }
                result_free(&iter_rs);
            }

            /* Drop working table */
            { char drop_work[256];
              snprintf(drop_work, sizeof(drop_work), "DROP TABLE IF EXISTS %s", work_name);
              ResultSet dw; memset(&dw, 0, sizeof(dw)); result_init(&dw);
              query_execute(drop_work, &dw, ctx);
              result_free(&dw);
            }

            result_free(&anchor_rs);
            free(anchor_sql);
            free(resolved);
            materialized++;
            continue; /* skip normal CTE path below */
        }

        /* Execute CTE query (non-recursive) */
        ResultSet cte_rs;
        memset(&cte_rs, 0, sizeof(cte_rs));
        result_init(&cte_rs);
        query_execute(resolved, &cte_rs, ctx);

        if (cte_rs.has_error) {
            snprintf(rs->error_message, sizeof(rs->error_message),
                     "CTE '%s': %s", ctes[i].name, cte_rs.error_message);
            strncpy(rs->error_sqlstate, cte_rs.error_sqlstate, 5);
            rs->has_error = 1;
            result_free(&cte_rs);
            free(resolved);
            goto cleanup;
        }

        /* Create temp table — CTAS for simple queries, DDL+INSERT for UNION */
        if (cte_rs.num_cols > 0) {
            int use_ctas = 1;
            /* CTAS doesn't support UNION source — detect and use fallback */
            { int _sp = 0; if (evo_detect_set_op(resolved, &_sp)) use_ctas = 0; }

            int ctas_sz = (int)strlen(resolved) + 256;
            char *ctas = malloc(ctas_sz);
            if (!ctas) { free(resolved); goto cleanup; }

            if (use_ctas) {
                snprintf(ctas, ctas_sz,
                         "CREATE TEMPORARY TABLE %s AS %s", temp_names[i], resolved);
            } else {
                /* Fallback: CREATE TABLE with column defs + INSERT rows */
                int off = snprintf(ctas, ctas_sz,
                                   "CREATE TEMPORARY TABLE %s (", temp_names[i]);
                for (int c = 0; c < cte_rs.num_cols && off < ctas_sz - 100; c++) {
                    if (c > 0) off += snprintf(ctas + off, ctas_sz - off, ", ");
                    off += snprintf(ctas + off, ctas_sz - off, "%s %s",
                                    cte_rs.columns[c].name,
                                    evo_pg_oid_to_type(cte_rs.columns[c].pg_type_oid));
                }
                snprintf(ctas + off, ctas_sz - off, ")");
            }

            ResultSet tmp_rs;
            memset(&tmp_rs, 0, sizeof(tmp_rs));
            result_init(&tmp_rs);
            query_execute(ctas, &tmp_rs, ctx);
            if (tmp_rs.has_error) {
                snprintf(rs->error_message, sizeof(rs->error_message),
                         "CTE '%s': %s", ctes[i].name, tmp_rs.error_message);
                strncpy(rs->error_sqlstate, tmp_rs.error_sqlstate, 5);
                rs->has_error = 1;
                result_free(&tmp_rs);
                result_free(&cte_rs);
                free(ctas);
                free(resolved);
                goto cleanup;
            }
            result_free(&tmp_rs);
            free(ctas);

            /* Fallback path: INSERT rows for UNION-based CTEs */
            if (!use_ctas && cte_rs.num_rows > 0) {
                for (int r = 0; r < cte_rs.num_rows; r++) {
                    int isz = cte_rs.num_cols * 300 + 256;
                    char *ins = malloc(isz);
                    if (!ins) break;
                    int ioff = snprintf(ins, isz, "INSERT INTO %s VALUES (", temp_names[i]);
                    for (int c = 0; c < cte_rs.num_cols && ioff < isz - 100; c++) {
                        if (c > 0) ioff += snprintf(ins + ioff, isz - ioff, ", ");
                        if (cte_rs.rows[r].is_null[c])
                            ioff += snprintf(ins + ioff, isz - ioff, "NULL");
                        else {
                            const char *v = cte_rs.rows[r].fields[c];
                            ioff += snprintf(ins + ioff, isz - ioff, "'");
                            for (const char *vp = v; vp && *vp && ioff < isz - 10; vp++) {
                                if (*vp == '\'') ioff += snprintf(ins + ioff, isz - ioff, "''");
                                else ins[ioff++] = *vp;
                            }
                            ins[ioff] = '\0';
                            ioff += snprintf(ins + ioff, isz - ioff, "'");
                        }
                    }
                    snprintf(ins + ioff, isz - ioff, ")");
                    ResultSet ir;
                    memset(&ir, 0, sizeof(ir));
                    result_init(&ir);
                    query_execute(ins, &ir, ctx);
                    /* Manually commit INSERT XID so subsequent SELECT sees it */
                    {
                        extern __thread QueryContext *g_qctx;
                        if (g_qctx && g_qctx->mvcc_xid > 0) {
                            uint32_t csn = pgm_next_csn();
                            clog_set_committed_csn(g_qctx->mvcc_xid, csn);
                            g_qctx->mvcc_xid = 0;
                        }
                    }
                    result_free(&ir);
                    free(ins);
                }
            }

            /* Apply column aliases if specified: WITH t(a,b) AS (...) */
            if (ctes[i].col_alias_count > 0 && cte_rs.num_cols > 0) {
                int ac = ctes[i].col_alias_count;
                if (ac > cte_rs.num_cols) ac = cte_rs.num_cols;
                for (int c = 0; c < ac; c++) {
                    if (strcasecmp(cte_rs.columns[c].name, ctes[i].col_aliases[c]) == 0)
                        continue; /* already same name */
                    char rename_sql[512];
                    snprintf(rename_sql, sizeof(rename_sql),
                             "ALTER TABLE %s RENAME COLUMN %s TO %s",
                             temp_names[i], cte_rs.columns[c].name,
                             ctes[i].col_aliases[c]);
                    ResultSet rn;
                    memset(&rn, 0, sizeof(rn));
                    result_init(&rn);
                    query_execute(rename_sql, &rn, ctx);
                    result_free(&rn);
                }
            }
        }
        result_free(&cte_rs);
        free(resolved);
        materialized++;
    }

    {
        /* Build main query with CTE names replaced by temp table names */
        int fsz = (int)strlen(main_query) + cte_count * 256 + 512;
        char *final_sql = malloc(fsz);
        if (final_sql) {
            strncpy(final_sql, main_query, fsz - 1);
            final_sql[fsz - 1] = '\0';
            for (int i = 0; i < cte_count; i++)
                evo_cte_replace_name(final_sql, fsz,
                                     ctes[i].name, temp_names[i]);

            /* Execute main query */
            query_execute(final_sql, rs, ctx);
            free(final_sql);
        }
    }

cleanup:
    /* Drop all temp tables */
    for (int i = 0; i < materialized; i++) {
        char drop_sql[256];
        snprintf(drop_sql, sizeof(drop_sql),
                 "DROP TABLE IF EXISTS %s", temp_names[i]);
        ResultSet tmp_rs;
        memset(&tmp_rs, 0, sizeof(tmp_rs));
        result_init(&tmp_rs);
        query_execute(drop_sql, &tmp_rs, ctx);
        result_free(&tmp_rs);
    }
    /* Free heap-allocated CTE SQL strings */
    for (int i = 0; i < cte_count; i++)
        free(ctes[i].sql);

    return 1;
}

void query_execute(const char *sql, ResultSet *rs, SessionCtx *ctx)
{
    char normalized[8192];
    char *view_rewritten = NULL;
    char saved_db[256] = "";
    char saved_schema[256] = "";
    int qualified = 0;

    /* PROFILE: timing */
    struct timespec __prof_start;
    clock_gettime(CLOCK_MONOTONIC, &__prof_start);

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

    /* CTE — WITH ... AS (...) pre-parse handling */
    if (evo_handle_cte(sql, rs, ctx))
        return;

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
        else if (is_copy_query(sql))     needed_priv =
            (strcasestr(sql, " FROM ") && !strcasestr(sql, " FROM STDOUT "))
                ? "INSERT" : "SELECT";

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

            /* ON DUPLICATE KEY UPDATE also requires UPDATE privilege */
            if (is_insert_query(sql) && strcasestr(sql, "ON DUPLICATE")) {
                if (!CheckPrivilege(ctx->username, db, sch, NULL, "UPDATE")) {
                    result_set_error(rs, "42501",
                        "Permission denied: ON DUPLICATE KEY UPDATE requires UPDATE privilege");
                    return;
                }
            }
        }
    }

    /* ── View resolution: SQL merge (iterative for nested views) ── */
    for (int _vr = 0; _vr < 5; _vr++) {
        if (!ctx) break;
        if (!is_select_query(sql)) break;
        {   DatabaseDesc vdb;
            SchemaDesc vsch;
            if (cat_find_database(ctx->database, &vdb) == 0 &&
                cat_find_schema(vdb.db_id, ctx->schema, &vsch) == 0) {
                /* Parse outer query: extract table name from FROM */
                const char *p = sql;
                while (*p && isspace((unsigned char)*p)) p++;
                if (strncasecmp(p, "SELECT", 6) == 0) {
                    /* Find FROM clause */
                    const char *from_kw = NULL;
                    int depth = 0, in_str = 0;
                    for (const char *s = p; *s; s++) {
                        if (in_str) { if (*s == '\'') in_str = 0; continue; }
                        if (*s == '\'') { in_str = 1; continue; }
                        if (*s == '(') depth++;
                        if (*s == ')') depth--;
                        if (depth == 0 && strncasecmp(s, "FROM ", 5) == 0 &&
                            (s == p || !isalnum((unsigned char)*(s-1)))) {
                            from_kw = s;
                            break;
                        }
                    }
                    if (from_kw) {
                        const char *tstart = from_kw + 5;
                        while (*tstart && isspace((unsigned char)*tstart)) tstart++;
                        if (*tstart && isalpha((unsigned char)*tstart)) {
                            const char *tend = tstart;
                            while (*tend && (isalnum((unsigned char)*tend) || *tend == '_')) tend++;
                            char tname[128];
                            int tl = (int)(tend - tstart);
                            if (tl < 128 && tl > 0) {
                                memcpy(tname, tstart, tl);
                                tname[tl] = '\0';
                                ViewDesc vd;
                                if (cat_find_view(vdb.db_id, vsch.schema_id, tname, &vd) == 0 &&
                                    !vd.is_materialized) {
                                    /* Found a view! Merge outer clauses into view SQL */
                                    char merged[8192];

                                    /* Extract outer SELECT columns */
                                    char outer_cols[1024] = "*";
                                    {
                                        const char *sel_start = p + 6;
                                        while (*sel_start && isspace((unsigned char)*sel_start)) sel_start++;
                                        int col_len = (int)(from_kw - sel_start);
                                        if (col_len > 0 && col_len < 1024) {
                                            memcpy(outer_cols, sel_start, col_len);
                                            outer_cols[col_len] = '\0';
                                            /* Trim trailing whitespace */
                                            int cl = col_len - 1;
                                            while (cl >= 0 && isspace((unsigned char)outer_cols[cl]))
                                                outer_cols[cl--] = '\0';
                                        }
                                    }

                                    /* Extract outer WHERE, ORDER BY, LIMIT */
                                    const char *after_table = tend;
                                    while (*after_table && isspace((unsigned char)*after_table)) after_table++;
                                    /* Skip optional alias */
                                    if (strncasecmp(after_table, "AS ", 3) == 0) {
                                        after_table += 3;
                                        while (*after_table && (isalnum((unsigned char)*after_table) || *after_table == '_'))
                                            after_table++;
                                        while (*after_table && isspace((unsigned char)*after_table)) after_table++;
                                    }

                                    char outer_where[2048] = "";
                                    char outer_orderby[512] = "";
                                    char outer_limit[128] = "";
                                    {
                                        const char *s = after_table;
                                        /* Find WHERE */
                                        const char *w = NULL;
                                        for (const char *k = s; *k; k++) {
                                            if (strncasecmp(k, "WHERE ", 6) == 0 &&
                                                (k == s || !isalnum((unsigned char)*(k-1)))) {
                                                w = k + 6;
                                                break;
                                            }
                                        }
                                        if (w) {
                                            /* WHERE extends until ORDER BY / LIMIT / end */
                                            const char *we = w + strlen(w);
                                            for (const char *k = w; *k; k++) {
                                                if ((strncasecmp(k, "ORDER ", 6) == 0 ||
                                                     strncasecmp(k, "LIMIT ", 6) == 0) &&
                                                    (k == w || !isalnum((unsigned char)*(k-1)))) {
                                                    we = k;
                                                    break;
                                                }
                                            }
                                            int wl = (int)(we - w);
                                            if (wl > 0 && wl < 2048) {
                                                memcpy(outer_where, w, wl);
                                                outer_where[wl] = '\0';
                                                int wt = wl - 1;
                                                while (wt >= 0 && isspace((unsigned char)outer_where[wt]))
                                                    outer_where[wt--] = '\0';
                                            }
                                        }
                                        /* Find ORDER BY */
                                        for (const char *k = s; *k; k++) {
                                            if (strncasecmp(k, "ORDER BY ", 9) == 0) {
                                                const char *ob = k + 9;
                                                const char *obe = ob + strlen(ob);
                                                for (const char *j = ob; *j; j++) {
                                                    if (strncasecmp(j, "LIMIT ", 6) == 0) { obe = j; break; }
                                                }
                                                int ol = (int)(obe - ob);
                                                if (ol > 0 && ol < 512) {
                                                    memcpy(outer_orderby, ob, ol);
                                                    outer_orderby[ol] = '\0';
                                                    int ot = ol - 1;
                                                    while (ot >= 0 && isspace((unsigned char)outer_orderby[ot]))
                                                        outer_orderby[ot--] = '\0';
                                                }
                                                break;
                                            }
                                        }
                                        /* Find LIMIT */
                                        for (const char *k = s; *k; k++) {
                                            if (strncasecmp(k, "LIMIT ", 6) == 0) {
                                                strncpy(outer_limit, k + 6, 127);
                                                outer_limit[127] = '\0';
                                                int lt = (int)strlen(outer_limit) - 1;
                                                while (lt >= 0 && (outer_limit[lt] == ';' || isspace((unsigned char)outer_limit[lt])))
                                                    outer_limit[lt--] = '\0';
                                                break;
                                            }
                                        }
                                    }

                                    /* Build merged SQL */
                                    /* Start with view SQL */
                                    strncpy(merged, vd.view_sql, sizeof(merged) - 1);
                                    merged[sizeof(merged) - 1] = '\0';
                                    /* Trim trailing ; */
                                    int ml = (int)strlen(merged);
                                    while (ml > 0 && (merged[ml-1] == ';' || isspace((unsigned char)merged[ml-1])))
                                        merged[--ml] = '\0';

                                    /* Column projection deferred */

                                    /* Append outer WHERE */
                                    if (outer_where[0]) {
                                        if (strcasestr(merged, " WHERE ")) {
                                            /* View has WHERE — append with AND */
                                            snprintf(merged + ml, sizeof(merged) - ml,
                                                     " AND %s", outer_where);
                                        } else {
                                            snprintf(merged + ml, sizeof(merged) - ml,
                                                     " WHERE %s", outer_where);
                                        }
                                        ml = (int)strlen(merged);
                                    }

                                    /* Append outer ORDER BY */
                                    if (outer_orderby[0]) {
                                        snprintf(merged + ml, sizeof(merged) - ml,
                                                 " ORDER BY %s", outer_orderby);
                                        ml = (int)strlen(merged);
                                    }

                                    /* Append outer LIMIT */
                                    if (outer_limit[0]) {
                                        snprintf(merged + ml, sizeof(merged) - ml,
                                                 " LIMIT %s", outer_limit);
                                    }

                                    if (view_rewritten) free(view_rewritten);
                                    view_rewritten = strdup(merged);
                                    sql = view_rewritten;
                                    continue; /* re-check for nested views */
                                }
                            }
                        }
                    }
                }
            }
            /* DML on view: simple table name substitution */
            if (0) { /* DML on view — deferred: crashes, needs investigation */
                /* Extract table name from DML */
                const char *q = sql;
                while (*q && isspace((unsigned char)*q)) q++;
                char tname[128] = "";
                if (strncasecmp(q, "UPDATE", 6) == 0) {
                    const char *t = q + 6;
                    while (*t && isspace((unsigned char)*t)) t++;
                    int ti = 0;
                    while (*t && (isalnum((unsigned char)*t) || *t == '_') && ti < 127)
                        tname[ti++] = *t++;
                    tname[ti] = '\0';
                } else if (strncasecmp(q, "DELETE", 6) == 0) {
                    const char *t = q + 6;
                    while (*t && isspace((unsigned char)*t)) t++;
                    if (strncasecmp(t, "FROM", 4) == 0) t += 4;
                    while (*t && isspace((unsigned char)*t)) t++;
                    int ti = 0;
                    while (*t && (isalnum((unsigned char)*t) || *t == '_') && ti < 127)
                        tname[ti++] = *t++;
                    tname[ti] = '\0';
                } else if (strncasecmp(q, "INSERT", 6) == 0) {
                    const char *t = q + 6;
                    while (*t && isspace((unsigned char)*t)) t++;
                    if (strncasecmp(t, "INTO", 4) == 0) t += 4;
                    while (*t && isspace((unsigned char)*t)) t++;
                    int ti = 0;
                    while (*t && (isalnum((unsigned char)*t) || *t == '_') && ti < 127)
                        tname[ti++] = *t++;
                    tname[ti] = '\0';
                }
                if (tname[0]) {
                    ViewDesc vd;
                    if (cat_find_view(vdb.db_id, vsch.schema_id, tname, &vd) == 0) {
                        /* Extract underlying table name from view SQL */
                        const char *vf = strcasestr(vd.view_sql, " FROM ");
                        if (vf) {
                            vf += 6;
                            while (*vf && isspace((unsigned char)*vf)) vf++;
                            char underlying[128] = "";
                            int ui = 0;
                            while (*vf && (isalnum((unsigned char)*vf) || *vf == '_') && ui < 127)
                                underlying[ui++] = *vf++;
                            underlying[ui] = '\0';
                            if (underlying[0]) {
                                /* Replace view name with underlying table in SQL */
                                char merged[8192];
                                strncpy(merged, sql, sizeof(merged) - 1);
                                merged[sizeof(merged) - 1] = '\0';
                                char *pos = strcasestr(merged, tname);
                                if (pos) {
                                    int tn = (int)strlen(tname);
                                    int un = (int)strlen(underlying);
                                    memmove(pos + un, pos + tn, strlen(pos + tn) + 1);
                                    memcpy(pos, underlying, un);
                                }
                                if (view_rewritten) free(view_rewritten);
                                view_rewritten = strdup(merged);
                                sql = view_rewritten;
                                continue;
                            }
                        }
                    }
                }
            }
        }
        break; /* no view found, exit loop */
    }

    /* ── Pre-parse subquery materialization ── */
    /* Scan for (SELECT ...) patterns, execute inner SELECT, replace with result.
     * Skip for CREATE PROCEDURE/FUNCTION — body subqueries must not be materialized. */
    if (!is_create_procedure_query(sql) && !is_create_trigger_query(sql)) {
        char mat[8192];
        strncpy(mat, sql, sizeof(mat) - 1);
        mat[sizeof(mat) - 1] = '\0';
        int changed = 1;
        int iterations = 0;
        while (changed && iterations < 10) {
            changed = 0;
            iterations++;
            int len = (int)strlen(mat);
            /* Scan for IN (SELECT, NOT IN (SELECT, op (SELECT, EXISTS (SELECT */
            for (int i = 0; i < len - 8; i++) {
                /* Skip string literals */
                if (mat[i] == '\'') {
                    i++;
                    while (i < len && mat[i] != '\'') i++;
                    continue;
                }
                /* Look for (SELECT at this position */
                if (mat[i] != '(' || strncasecmp(mat + i + 1, "SELECT", 6) != 0)
                    continue;
                if (i + 7 < len && isalnum((unsigned char)mat[i + 7]))
                    continue; /* not a keyword boundary */
                /* Skip derived tables and view subqueries: only process
                 * (SELECT if preceded by operator, IN, EXISTS — not FROM/JOIN/AS */
                {
                    int j = i - 1;
                    while (j >= 0 && isspace((unsigned char)mat[j])) j--;
                    if (j >= 0) {
                        /* Check what precedes the '(' */
                        if (j >= 3 && strncasecmp(mat + j - 3, "FROM", 4) == 0) continue;
                        if (j >= 3 && strncasecmp(mat + j - 3, "JOIN", 4) == 0) continue;
                        if (j >= 1 && strncasecmp(mat + j - 1, "AS", 2) == 0) continue;
                        /* Also skip if preceded by comma (select list or value list) */
                        if (mat[j] == ',') continue;
                        /* Skip if at start of SQL (standalone subquery) */
                        if (j < 0) continue;
                    }
                }

                /* Find balanced closing ')' */
                int depth = 1, end = i + 1;
                int in_str = 0;
                while (end < len && depth > 0) {
                    if (in_str) {
                        if (mat[end] == '\'') in_str = 0;
                        end++; continue;
                    }
                    if (mat[end] == '\'') { in_str = 1; end++; continue; }
                    if (mat[end] == '(') depth++;
                    else if (mat[end] == ')') depth--;
                    if (depth > 0) end++;
                }
                if (depth != 0) break; /* unbalanced */

                /* Extract inner SQL: mat[i+1 .. end-1] */
                char inner[4096];
                int ilen = end - i - 1;
                if (ilen >= (int)sizeof(inner)) break;
                memcpy(inner, mat + i + 1, ilen);
                inner[ilen] = '\0';

                /* Determine subquery type from context before '(' */
                /* 0=scalar, 1=IN, 2=NOT IN, 3=EXISTS, 4=NOT EXISTS, 5=ANY, 6=ALL */
                int subq_type = 0;
                int replace_start = i;
                int cmp_op = 0; /* comparison operator char for ANY/ALL */
                {
                    int j = i - 1;
                    while (j >= 0 && isspace((unsigned char)mat[j])) j--;
                    if (j >= 1 && strncasecmp(mat + j - 1, "IN", 2) == 0 &&
                        (j - 2 < 0 || !isalnum((unsigned char)mat[j - 2]))) {
                        int k = j - 2;
                        while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                        if (k >= 2 && strncasecmp(mat + k - 2, "NOT", 3) == 0 &&
                            (k - 3 < 0 || !isalnum((unsigned char)mat[k - 3]))) {
                            subq_type = 2;
                            replace_start = k - 2;
                        } else {
                            subq_type = 1;
                            replace_start = j - 1;
                        }
                    } else if (j >= 5 && strncasecmp(mat + j - 5, "EXISTS", 6) == 0 &&
                               (j - 6 < 0 || !isalnum((unsigned char)mat[j - 6]))) {
                        int k = j - 6;
                        while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                        if (k >= 2 && strncasecmp(mat + k - 2, "NOT", 3) == 0) {
                            subq_type = 4;
                            replace_start = k - 2;
                        } else {
                            subq_type = 3;
                            replace_start = j - 5;
                        }
                    } else if ((j >= 2 && strncasecmp(mat + j - 2, "ANY", 3) == 0 &&
                               (j - 3 < 0 || !isalnum((unsigned char)mat[j - 3]))) ||
                              (j >= 3 && strncasecmp(mat + j - 3, "SOME", 4) == 0 &&
                               (j - 4 < 0 || !isalnum((unsigned char)mat[j - 4])))) {
                        /* expr op ANY/SOME (SELECT ...) */
                        int kw_len = (j >= 3 && strncasecmp(mat + j - 3, "SOME", 4) == 0) ? 4 : 3;
                        int k = j - kw_len;
                        while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                        if (k >= 0 && (mat[k] == '>' || mat[k] == '<' || mat[k] == '='))
                            cmp_op = mat[k];
                        subq_type = 5;
                        replace_start = i; /* replace from '(' only, keep op expr */
                    } else if (j >= 2 && strncasecmp(mat + j - 2, "ALL", 3) == 0 &&
                               (j - 3 < 0 || !isalnum((unsigned char)mat[j - 3]))) {
                        int k = j - 3;
                        while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                        if (k >= 0 && (mat[k] == '>' || mat[k] == '<' || mat[k] == '='))
                            cmp_op = mat[k];
                        subq_type = 6;
                        replace_start = i;
                    }
                }

                /* Execute inner SELECT */
                ResultSet sub_rs;
                memset(&sub_rs, 0, sizeof(sub_rs));
                result_init(&sub_rs);
                query_execute(inner, &sub_rs, ctx);

                /* Build replacement string */
                char replacement[4096];
                replacement[0] = '\0';

                if (subq_type == 1 || subq_type == 2) {
                    /* IN / NOT IN → replace "IN (SELECT ...)" with "IN (v1, v2, ...)" */
                    const char *prefix = (subq_type == 2) ? "NOT IN " : "IN ";
                    strcpy(replacement, prefix);
                    strcat(replacement, "(");
                    if (sub_rs.num_rows == 0) {
                        strcat(replacement, "NULL");
                    } else {
                        for (int r = 0; r < sub_rs.num_rows && r < 500; r++) {
                            if (r > 0) strcat(replacement, ",");
                            strcat(replacement, "'");
                            if (sub_rs.rows[r].fields[0] && !sub_rs.rows[r].is_null[0])
                                strncat(replacement, sub_rs.rows[r].fields[0],
                                        sizeof(replacement) - strlen(replacement) - 10);
                            strcat(replacement, "'");
                        }
                    }
                    strcat(replacement, ")");
                } else if (subq_type == 3 || subq_type == 4) {
                    /* EXISTS / NOT EXISTS → replace with 1 or 0 */
                    int exists = (sub_rs.num_rows > 0);
                    if (subq_type == 4) exists = !exists;
                    strcpy(replacement, exists ? "1" : "0");
                } else if (subq_type == 5) {
                    /* ANY/SOME → replace "ANY (SELECT ...)" with IN (...) for =,
                     * or with single aggregate value for >/</< */
                    if (cmp_op == '=') {
                        /* = ANY → same as IN */
                        /* Replace: op ANY (SELECT...) → IN (v1,v2,...) */
                        /* Back up replace_start to include "= ANY " */
                        int k = replace_start - 1;
                        while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                        /* Skip ANY/SOME keyword */
                        while (k >= 0 && isalpha((unsigned char)mat[k])) k--;
                        while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                        /* Skip '=' */
                        if (k >= 0 && mat[k] == '=') replace_start = k;
                        strcpy(replacement, "IN (");
                        if (sub_rs.num_rows == 0) strcat(replacement, "NULL");
                        else for (int r = 0; r < sub_rs.num_rows && r < 500; r++) {
                            if (r > 0) strcat(replacement, ",");
                            strcat(replacement, "'");
                            if (sub_rs.rows[r].fields[0] && !sub_rs.rows[r].is_null[0])
                                strncat(replacement, sub_rs.rows[r].fields[0],
                                        sizeof(replacement) - strlen(replacement) - 10);
                            strcat(replacement, "'");
                        }
                        strcat(replacement, ")");
                    } else {
                        /* >/< ANY → compare with MIN (for >) or MAX (for <) */
                        /* Find min/max from results */
                        double extreme = 0;
                        int has_val = 0;
                        for (int r = 0; r < sub_rs.num_rows; r++) {
                            if (sub_rs.rows[r].fields[0] && !sub_rs.rows[r].is_null[0]) {
                                double v = strtod(sub_rs.rows[r].fields[0], NULL);
                                if (!has_val) { extreme = v; has_val = 1; }
                                else if (cmp_op == '>' && v < extreme) extreme = v; /* MIN for > ANY */
                                else if (cmp_op == '<' && v > extreme) extreme = v; /* MAX for < ANY */
                            }
                        }
                        /* Replace ANY(...) with literal */
                        int k = replace_start - 1;
                        while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                        while (k >= 0 && isalpha((unsigned char)mat[k])) k--;
                        replace_start = k + 1;
                        if (has_val) snprintf(replacement, sizeof(replacement), "%g", extreme);
                        else strcpy(replacement, "NULL");
                    }
                } else if (subq_type == 6) {
                    /* ALL → for = ALL: true only if all values equal (rare, replace with single check)
                     * for > ALL: compare with MAX, for < ALL: compare with MIN */
                    double extreme = 0;
                    int has_val = 0;
                    for (int r = 0; r < sub_rs.num_rows; r++) {
                        if (sub_rs.rows[r].fields[0] && !sub_rs.rows[r].is_null[0]) {
                            double v = strtod(sub_rs.rows[r].fields[0], NULL);
                            if (!has_val) { extreme = v; has_val = 1; }
                            else if (cmp_op == '>' && v > extreme) extreme = v; /* MAX for > ALL */
                            else if (cmp_op == '<' && v < extreme) extreme = v; /* MIN for < ALL */
                            else if (cmp_op == '=' && v != extreme) { has_val = 0; break; } /* not all equal */
                        }
                    }
                    int k = replace_start - 1;
                    while (k >= 0 && isspace((unsigned char)mat[k])) k--;
                    while (k >= 0 && isalpha((unsigned char)mat[k])) k--;
                    replace_start = k + 1;
                    if (has_val) snprintf(replacement, sizeof(replacement), "%g", extreme);
                    else strcpy(replacement, "NULL");
                } else {
                    /* Scalar → replace (SELECT ...) with 'value' */
                    if (sub_rs.num_rows > 0 && sub_rs.rows[0].fields[0] &&
                        !sub_rs.rows[0].is_null[0]) {
                        snprintf(replacement, sizeof(replacement), "'%s'",
                                 sub_rs.rows[0].fields[0]);
                    } else {
                        strcpy(replacement, "NULL");
                    }
                }
                result_free(&sub_rs);

                /* Replace in mat: mat[replace_start .. end] → replacement */
                int replace_len = end + 1 - replace_start;
                int repl_len = (int)strlen(replacement);
                int new_len = len - replace_len + repl_len;
                if (new_len >= (int)sizeof(mat)) break;
                memmove(mat + replace_start + repl_len,
                        mat + replace_start + replace_len,
                        len - replace_start - replace_len + 1);
                memcpy(mat + replace_start, replacement, repl_len);
                changed = 1;
                break; /* restart scan from beginning */
            }
        }
        if (strcmp(mat, sql) != 0) {
            /* SQL was rewritten — use materialized version */
            sql = mat;
        }
    }

    /* ── Set operations: UNION / INTERSECT / EXCEPT / MINUS ── */
    {
        int setop_type = 0, setop_split = 0;
        setop_type = evo_detect_set_op(sql, &setop_split);
        if (setop_type != 0) {
            execute_set_operation(sql, rs, ctx, setop_type, setop_split);
            goto writeback_session;
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

    /* Normalize SQL for DBeaver compatibility (quote removal, pg_catalog removal)
     * Skip for CREATE TRIGGER/PROCEDURE — body contains OLD./NEW. refs and subqueries */
    strncpy(normalized, sql, sizeof(normalized) - 1);
    normalized[sizeof(normalized) - 1] = '\0';
    if (!is_create_trigger_query(sql) && !is_create_procedure_query(sql))
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
    if (view_rewritten) { free(view_rewritten); view_rewritten = NULL; }
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

    /* PROFILE: log slow queries (>0.5 ms) */
    {
        struct timespec __prof_end;
        clock_gettime(CLOCK_MONOTONIC, &__prof_end);
        long __prof_us = (__prof_end.tv_sec - __prof_start.tv_sec) * 1000000L
                       + (__prof_end.tv_nsec - __prof_start.tv_nsec) / 1000L;
        if (getenv("EVOSQL_PROFILE")) {
            char __prof_sql[80];
            strncpy(__prof_sql, sql, 79);
            __prof_sql[79] = '\0';
            for (char *p = __prof_sql; *p; p++) if (*p == '\n') *p = ' ';
            fprintf(stderr, "[PROF] %ld us : %s\n", __prof_us, __prof_sql);
        }
    }
}
