/* ----------------------------------------------------------------
 *  Expression AST — node allocation and evaluation
 * ---------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "expression.h"

/* Pool storage */
ExprNode  g_exprNodePool[EXPR_POOL_SIZE];
int       g_exprNodePoolUsed = 0;

/* Parsed SELECT expressions */
ExprNode *g_selectExprs[MAX_SELECT_EXPRS];
int       g_selectExprCount = 0;

/* WHERE filter expression */
ExprNode *g_whereExpr = NULL;

/* LIMIT / OFFSET */
ExprNode *g_limitExpr  = NULL;
ExprNode *g_offsetExpr = NULL;

/* IN list collector */
ExprNode *g_inListExprs[MAX_IN_LIST];
int       g_inListCount = 0;

/* CASE WHEN/THEN collector */
ExprNode *g_caseWhenExprs[MAX_CASE_WHENS];
ExprNode *g_caseThenExprs[MAX_CASE_WHENS];
int       g_caseWhenCount = 0;

/* ---- Pool allocator ---- */
ExprNode *expr_alloc(void)
{
    if (g_exprNodePoolUsed >= EXPR_POOL_SIZE) return NULL;
    ExprNode *e = &g_exprNodePool[g_exprNodePoolUsed++];
    memset(e, 0, sizeof(*e));
    return e;
}

void expr_pool_reset(void)
{
    g_exprNodePoolUsed = 0;
    g_selectExprCount = 0;
    g_inListCount = 0;
    g_caseWhenCount = 0;
    g_whereExpr = NULL;
    g_limitExpr = NULL;
    g_offsetExpr = NULL;
    memset(g_selectExprs, 0, sizeof(g_selectExprs));
}

/* ---- Constructors ---- */
ExprNode *expr_make_column(const char *name)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_COLUMN;
    strncpy(e->val.col_name, name, sizeof(e->val.col_name) - 1);
    strncpy(e->display, name, sizeof(e->display) - 1);
    return e;
}

ExprNode *expr_make_int(int val)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LITERAL_INT;
    e->val.intval = val;
    snprintf(e->display, sizeof(e->display), "%d", val);
    return e;
}

ExprNode *expr_make_float(double val)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LITERAL_FLOAT;
    e->val.floatval = val;
    snprintf(e->display, sizeof(e->display), "%g", val);
    return e;
}

ExprNode *expr_make_string(const char *val)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LITERAL_STR;
    strncpy(e->val.strval, val, sizeof(e->val.strval) - 1);
    snprintf(e->display, sizeof(e->display), "'%.250s'", val);
    return e;
}

ExprNode *expr_make_bool(int val)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LITERAL_BOOL;
    e->val.intval = val;
    strcpy(e->display, val ? "true" : "false");
    return e;
}

ExprNode *expr_make_null(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LITERAL_NULL;
    strcpy(e->display, "NULL");
    return e;
}

ExprNode *expr_make_binop(ExprNodeType op, ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = op;
    e->left = left;
    e->right = right;
    /* Build display string */
    {
        const char *ops = "?";
        switch (op) {
        case EXPR_ADD: ops = "+"; break;
        case EXPR_SUB: ops = "-"; break;
        case EXPR_MUL: ops = "*"; break;
        case EXPR_DIV: ops = "/"; break;
        case EXPR_MOD: ops = "%"; break;
        case EXPR_SHIFT_LEFT:  ops = "<<"; break;
        case EXPR_SHIFT_RIGHT: ops = ">>"; break;
        case EXPR_BITAND: ops = "&"; break;
        case EXPR_BITOR:  ops = "|"; break;
        case EXPR_BITXOR: ops = "^"; break;
        default: break;
        }
        snprintf(e->display, sizeof(e->display), "%s %s %s",
                 left ? left->display : "?",
                 ops,
                 right ? right->display : "?");
    }
    return e;
}

ExprNode *expr_make_neg(ExprNode *operand)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_NEG;
    e->left = operand;
    snprintf(e->display, sizeof(e->display), "-%s",
             operand ? operand->display : "?");
    return e;
}

ExprNode *expr_make_star(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_STAR;
    strcpy(e->display, "*");
    return e;
}

ExprNode *expr_make_current_timestamp(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_CURRENT_TIMESTAMP;
    strcpy(e->display, "CURRENT_TIMESTAMP");
    return e;
}

ExprNode *expr_make_current_date(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_CURRENT_DATE;
    strcpy(e->display, "CURRENT_DATE");
    return e;
}

ExprNode *expr_make_current_time(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_CURRENT_TIME;
    strcpy(e->display, "CURRENT_TIME");
    return e;
}

ExprNode *expr_make_cmp(int subtok, ExprNode *left, ExprNode *right)
{
    ExprNodeType type;
    switch (subtok) {
    case 4:  type = EXPR_CMP_EQ; break;
    case 3:  type = EXPR_CMP_NE; break;
    case 1:  type = EXPR_CMP_LT; break;
    case 2:  type = EXPR_CMP_GT; break;
    case 5:  type = EXPR_CMP_LE; break;
    case 6:  type = EXPR_CMP_GE; break;
    default: type = EXPR_CMP_EQ; break;
    }
    ExprNode *e = expr_make_binop(type, left, right);
    if (e) {
        const char *op_str;
        switch (subtok) {
        case 4:  op_str = "=";  break;
        case 3:  op_str = "<>"; break;
        case 1:  op_str = "<";  break;
        case 2:  op_str = ">";  break;
        case 5:  op_str = "<="; break;
        case 6:  op_str = ">="; break;
        default: op_str = "?";  break;
        }
        snprintf(e->display, sizeof(e->display), "%s %s %s",
                 left ? left->display : "?", op_str,
                 right ? right->display : "?");
    }
    return e;
}

ExprNode *expr_make_is_null(ExprNode *operand)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_IS_NULL;
    e->left = operand;
    snprintf(e->display, sizeof(e->display), "%s IS NULL",
             operand ? operand->display : "?");
    return e;
}

ExprNode *expr_make_is_not_null(ExprNode *operand)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_IS_NOT_NULL;
    e->left = operand;
    snprintf(e->display, sizeof(e->display), "%s IS NOT NULL",
             operand ? operand->display : "?");
    return e;
}

ExprNode *expr_make_and(ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_AND;
    e->left = left;
    e->right = right;
    snprintf(e->display, sizeof(e->display), "%s AND %s",
             left ? left->display : "?",
             right ? right->display : "?");
    return e;
}

ExprNode *expr_make_or(ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_OR;
    e->left = left;
    e->right = right;
    snprintf(e->display, sizeof(e->display), "%s OR %s",
             left ? left->display : "?",
             right ? right->display : "?");
    return e;
}

ExprNode *expr_make_not(ExprNode *operand)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_NOT;
    e->left = operand;
    snprintf(e->display, sizeof(e->display), "NOT %s",
             operand ? operand->display : "?");
    return e;
}

ExprNode *expr_make_xor(ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_XOR;
    e->left = left;
    e->right = right;
    snprintf(e->display, sizeof(e->display), "%s XOR %s",
             left ? left->display : "?",
             right ? right->display : "?");
    return e;
}

ExprNode *expr_make_like(ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LIKE;
    e->left = left;
    e->right = right;
    snprintf(e->display, sizeof(e->display), "%s LIKE %s",
             left ? left->display : "?",
             right ? right->display : "?");
    return e;
}

ExprNode *expr_make_not_like(ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_NOT_LIKE;
    e->left = left;
    e->right = right;
    snprintf(e->display, sizeof(e->display), "%s NOT LIKE %s",
             left ? left->display : "?",
             right ? right->display : "?");
    return e;
}

ExprNode *expr_make_between(ExprNode *expr, ExprNode *low, ExprNode *high)
{
    /* Desugar: expr BETWEEN low AND high  →  (expr >= low) AND (expr <= high) */
    ExprNode *ge = expr_alloc();
    ExprNode *le = expr_alloc();
    if (!ge || !le) return NULL;
    ge->type = EXPR_CMP_GE; ge->left = expr; ge->right = low;
    le->type = EXPR_CMP_LE; le->left = expr; le->right = high;
    ExprNode *result = expr_make_and(ge, le);
    if (result) {
        snprintf(result->display, sizeof(result->display), "%s BETWEEN %s AND %s",
                 expr ? expr->display : "?",
                 low ? low->display : "?",
                 high ? high->display : "?");
    }
    return result;
}

ExprNode *expr_make_not_between(ExprNode *expr, ExprNode *low, ExprNode *high)
{
    /* Desugar: expr NOT BETWEEN low AND high  →  (expr < low) OR (expr > high) */
    ExprNode *lt = expr_alloc();
    ExprNode *gt = expr_alloc();
    if (!lt || !gt) return NULL;
    lt->type = EXPR_CMP_LT; lt->left = expr; lt->right = low;
    gt->type = EXPR_CMP_GT; gt->left = expr; gt->right = high;
    ExprNode *result = expr_make_or(lt, gt);
    if (result) {
        snprintf(result->display, sizeof(result->display), "%s NOT BETWEEN %s AND %s",
                 expr ? expr->display : "?",
                 low ? low->display : "?",
                 high ? high->display : "?");
    }
    return result;
}

ExprNode *expr_make_in(ExprNode *expr, ExprNode **list, int count)
{
    /* Desugar: expr IN (a, b, c) → (expr=a) OR (expr=b) OR (expr=c) */
    if (count <= 0 || !list) return expr_make_bool(0);
    ExprNode *result = NULL;
    int i;
    for (i = 0; i < count; i++) {
        ExprNode *eq = expr_alloc();
        if (!eq) return NULL;
        eq->type = EXPR_CMP_EQ;
        eq->left = expr;
        eq->right = list[i];
        if (!result) {
            result = eq;
        } else {
            result = expr_make_or(result, eq);
        }
    }
    if (result) {
        snprintf(result->display, sizeof(result->display), "%s IN (...)",
                 expr ? expr->display : "?");
    }
    return result;
}

ExprNode *expr_make_not_in(ExprNode *expr, ExprNode **list, int count)
{
    /* Desugar: expr NOT IN (a, b, c) → (expr<>a) AND (expr<>b) AND (expr<>c) */
    if (count <= 0 || !list) return expr_make_bool(1);
    ExprNode *result = NULL;
    int i;
    for (i = 0; i < count; i++) {
        ExprNode *ne = expr_alloc();
        if (!ne) return NULL;
        ne->type = EXPR_CMP_NE;
        ne->left = expr;
        ne->right = list[i];
        if (!result) {
            result = ne;
        } else {
            result = expr_make_and(result, ne);
        }
    }
    if (result) {
        snprintf(result->display, sizeof(result->display), "%s NOT IN (...)",
                 expr ? expr->display : "?");
    }
    return result;
}

/* ---- COUNT constructors ---- */
ExprNode *expr_make_count_star(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_COUNT_STAR;
    strcpy(e->display, "COUNT(*)");
    return e;
}

ExprNode *expr_make_count(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_COUNT;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "COUNT(%s)",
             arg ? arg->display : "?");
    return e;
}

/* ---- CASE WHEN constructors ---- */

/* Searched CASE: CASE WHEN c1 THEN r1 WHEN c2 THEN r2 ... [ELSE e] END
 * Builds a right-nested chain: CASE_WHEN(c1, r1, CASE_WHEN(c2, r2, else_expr))
 * Uses g_caseWhenExprs[] and g_caseThenExprs[] collected during parsing. */
ExprNode *expr_make_case_searched(int count, ExprNode *else_expr)
{
    if (count <= 0) return else_expr;
    /* Build from the last WHEN backwards so the chain is in order */
    ExprNode *chain = else_expr;  /* may be NULL (no ELSE) */
    int i;
    for (i = count - 1; i >= 0; i--) {
        ExprNode *node = expr_alloc();
        if (!node) return NULL;
        node->type = EXPR_CASE_WHEN;
        node->left  = g_caseWhenExprs[i];   /* condition */
        node->right = g_caseThenExprs[i];   /* result */
        node->extra = chain;                /* else/next branch */
        chain = node;
    }
    if (chain) strcpy(chain->display, "CASE");
    return chain;
}

/* Simple CASE: CASE expr WHEN v1 THEN r1 WHEN v2 THEN r2 ... [ELSE e] END
 * Desugars each WHEN into a comparison: (operand = vi)
 * Then builds the same searched CASE chain. */
ExprNode *expr_make_case_simple(ExprNode *operand, int count, ExprNode *else_expr)
{
    int i;
    /* Convert each WHEN value into a comparison: operand = value */
    for (i = 0; i < count && i < MAX_CASE_WHENS; i++) {
        ExprNode *cmp = expr_alloc();
        if (!cmp) return NULL;
        cmp->type = EXPR_CMP_EQ;
        cmp->left = operand;
        cmp->right = g_caseWhenExprs[i];
        g_caseWhenExprs[i] = cmp;
    }
    return expr_make_case_searched(count, else_expr);
}

/* ---- Check if expression is an aggregate ---- */
int expr_is_aggregate(const ExprNode *e)
{
    if (!e) return 0;
    return (e->type == EXPR_COUNT_STAR || e->type == EXPR_COUNT);
}

/* ---- Store a select expression ---- */
void expr_store_select(ExprNode *expr, const char *alias)
{
    if (g_selectExprCount >= MAX_SELECT_EXPRS) return;
    if (expr && alias && alias[0]) {
        strncpy(expr->display, alias, sizeof(expr->display) - 1);
    }
    g_selectExprs[g_selectExprCount++] = expr;
}

/* ---- Check if expression is a plain column ---- */
int expr_is_column(const ExprNode *e)
{
    return (e && e->type == EXPR_COLUMN);
}

int expr_is_boolean(const ExprNode *e)
{
    if (!e) return 0;
    return (e->type == EXPR_IS_NULL ||
            e->type == EXPR_IS_NOT_NULL ||
            e->type == EXPR_LITERAL_BOOL ||
            e->type == EXPR_CMP_EQ ||
            e->type == EXPR_CMP_NE ||
            e->type == EXPR_CMP_LT ||
            e->type == EXPR_CMP_GT ||
            e->type == EXPR_CMP_LE ||
            e->type == EXPR_CMP_GE ||
            e->type == EXPR_AND ||
            e->type == EXPR_OR ||
            e->type == EXPR_NOT ||
            e->type == EXPR_XOR ||
            e->type == EXPR_LIKE ||
            e->type == EXPR_NOT_LIKE);
}

/* ---- Evaluate as double ---- */
double expr_evaluate_num(const ExprNode *e,
                         const char col_names[][128],
                         const char col_values[][256],
                         int num_cols)
{
    if (!e) return 0.0;

    switch (e->type) {
    case EXPR_LITERAL_INT:
        return (double)e->val.intval;

    case EXPR_LITERAL_FLOAT:
        return e->val.floatval;

    case EXPR_LITERAL_BOOL:
        return (double)e->val.intval;

    case EXPR_LITERAL_STR:
        return strtod(e->val.strval, NULL);

    case EXPR_COLUMN: {
        int c;
        for (c = 0; c < num_cols; c++) {
            if (strcasecmp(col_names[c], e->val.col_name) == 0) {
                return strtod(col_values[c], NULL);
            }
        }
        return 0.0;
    }

    case EXPR_NEG:
        return -expr_evaluate_num(e->left, col_names, col_values, num_cols);

    case EXPR_ADD:
        return expr_evaluate_num(e->left, col_names, col_values, num_cols)
             + expr_evaluate_num(e->right, col_names, col_values, num_cols);
    case EXPR_SUB:
        return expr_evaluate_num(e->left, col_names, col_values, num_cols)
             - expr_evaluate_num(e->right, col_names, col_values, num_cols);
    case EXPR_MUL:
        return expr_evaluate_num(e->left, col_names, col_values, num_cols)
             * expr_evaluate_num(e->right, col_names, col_values, num_cols);
    case EXPR_DIV: {
        double rv = expr_evaluate_num(e->right, col_names, col_values, num_cols);
        if (rv == 0.0) return 0.0;
        return expr_evaluate_num(e->left, col_names, col_values, num_cols) / rv;
    }
    case EXPR_MOD: {
        double lv = expr_evaluate_num(e->left, col_names, col_values, num_cols);
        double rv = expr_evaluate_num(e->right, col_names, col_values, num_cols);
        if (rv == 0.0) return 0.0;
        return (double)((long long)lv % (long long)rv);
    }

    case EXPR_SHIFT_LEFT: {
        long long lv = (long long)expr_evaluate_num(e->left, col_names, col_values, num_cols);
        long long rv = (long long)expr_evaluate_num(e->right, col_names, col_values, num_cols);
        return (double)(lv << rv);
    }
    case EXPR_SHIFT_RIGHT: {
        long long lv = (long long)expr_evaluate_num(e->left, col_names, col_values, num_cols);
        long long rv = (long long)expr_evaluate_num(e->right, col_names, col_values, num_cols);
        return (double)(lv >> rv);
    }
    case EXPR_BITAND: {
        long long lv = (long long)expr_evaluate_num(e->left, col_names, col_values, num_cols);
        long long rv = (long long)expr_evaluate_num(e->right, col_names, col_values, num_cols);
        return (double)(lv & rv);
    }
    case EXPR_BITOR: {
        long long lv = (long long)expr_evaluate_num(e->left, col_names, col_values, num_cols);
        long long rv = (long long)expr_evaluate_num(e->right, col_names, col_values, num_cols);
        return (double)(lv | rv);
    }
    case EXPR_BITXOR: {
        long long lv = (long long)expr_evaluate_num(e->left, col_names, col_values, num_cols);
        long long rv = (long long)expr_evaluate_num(e->right, col_names, col_values, num_cols);
        return (double)(lv ^ rv);
    }

    default:
        return 0.0;
    }
}

/* ---- Evaluate to string ---- */
int expr_evaluate(const ExprNode *e,
                  const char col_names[][128],
                  const char col_values[][256],
                  int num_cols,
                  char *out_buf, int buf_size)
{
    if (!e || !out_buf || buf_size <= 0) return 0;

    /* NULL literal */
    if (e->type == EXPR_LITERAL_NULL) {
        out_buf[0] = '\0';
        return 0;  /* returning 0 signals NULL */
    }

    /* For a plain column reference, return the string value directly
     * (preserves formatting: dates, strings, booleans, etc.) */
    if (e->type == EXPR_COLUMN) {
        int c;
        for (c = 0; c < num_cols; c++) {
            if (strcasecmp(col_names[c], e->val.col_name) == 0) {
                /* If the column value is NULL_MARKER, signal NULL */
                if (strcmp(col_values[c], NULL_MARKER) == 0) {
                    out_buf[0] = '\0';
                    return 0;
                }
                strncpy(out_buf, col_values[c], buf_size - 1);
                out_buf[buf_size - 1] = '\0';
                return 1;
            }
        }
        out_buf[0] = '\0';
        return 0;
    }

    /* Comparison operators */
    if (e->type >= EXPR_CMP_EQ && e->type <= EXPR_CMP_GE) {
        char lbuf[512], rbuf[512];
        int l_ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, lbuf, sizeof(lbuf)) : 0;
        int r_ok = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, rbuf, sizeof(rbuf)) : 0;

        /* If either side is NULL, comparison result is NULL */
        if (!l_ok || !r_ok) {
            out_buf[0] = '\0';
            return 0;
        }

        int cmp;
        /* Try numeric comparison first */
        char *endL, *endR;
        double numL = strtod(lbuf, &endL);
        double numR = strtod(rbuf, &endR);
        if (*endL == '\0' && *endR == '\0' && lbuf[0] != '\0' && rbuf[0] != '\0') {
            cmp = (numL > numR) ? 1 : (numL < numR) ? -1 : 0;
        } else {
            cmp = strcmp(lbuf, rbuf);
        }

        int result = 0;
        switch (e->type) {
        case EXPR_CMP_EQ: result = (cmp == 0); break;
        case EXPR_CMP_NE: result = (cmp != 0); break;
        case EXPR_CMP_LT: result = (cmp < 0);  break;
        case EXPR_CMP_GT: result = (cmp > 0);  break;
        case EXPR_CMP_LE: result = (cmp <= 0); break;
        case EXPR_CMP_GE: result = (cmp >= 0); break;
        default: break;
        }
        strncpy(out_buf, result ? "t" : "f", buf_size - 1);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    /* IS NULL / IS NOT NULL */
    if (e->type == EXPR_IS_NULL || e->type == EXPR_IS_NOT_NULL) {
        int is_null = 0;
        if (!e->left) {
            is_null = 1;
        } else if (e->left->type == EXPR_LITERAL_NULL) {
            is_null = 1;
        } else if (e->left->type == EXPR_COLUMN) {
            /* Check if column value is NULL (not found or NULL_MARKER) */
            int found = 0;
            int c;
            for (c = 0; c < num_cols; c++) {
                if (strcasecmp(col_names[c], e->left->val.col_name) == 0) {
                    found = 1;
                    if (strcmp(col_values[c], NULL_MARKER) == 0)
                        is_null = 1;
                    break;
                }
            }
            if (!found) is_null = 1;
        }
        /* Literals (INT, FLOAT, STR, BOOL) are never null */

        int result = (e->type == EXPR_IS_NULL) ? is_null : !is_null;
        strncpy(out_buf, result ? "t" : "f", buf_size - 1);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    /* AND / OR / NOT / XOR logical operators */
    if (e->type == EXPR_AND || e->type == EXPR_OR || e->type == EXPR_XOR) {
        char lbuf[512], rbuf[512];
        int l_ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, lbuf, sizeof(lbuf)) : 0;
        int r_ok = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, rbuf, sizeof(rbuf)) : 0;

        /* Convert left/right to boolean: "t" or "true" or non-zero number → 1 */
        int lval = 0, rval = 0;
        if (l_ok) {
            if (strcmp(lbuf, "t") == 0 || strcasecmp(lbuf, "true") == 0)
                lval = 1;
            else
                lval = (strtod(lbuf, NULL) != 0.0) ? 1 : 0;
        }
        if (r_ok) {
            if (strcmp(rbuf, "t") == 0 || strcasecmp(rbuf, "true") == 0)
                rval = 1;
            else
                rval = (strtod(rbuf, NULL) != 0.0) ? 1 : 0;
        }

        /* SQL three-valued logic for NULL */
        if (e->type == EXPR_AND) {
            /* FALSE AND NULL → FALSE; TRUE AND NULL → NULL; NULL AND NULL → NULL */
            if (!l_ok && !r_ok) { out_buf[0] = '\0'; return 0; }
            if (!l_ok)  { strncpy(out_buf, rval ? "f" : "f", buf_size - 1); /* NULL AND x: if x false→false, else NULL */
                          if (rval) { out_buf[0] = '\0'; return 0; } /* NULL AND TRUE → NULL */
                          strncpy(out_buf, "f", buf_size - 1); out_buf[buf_size - 1] = '\0'; return 1; }
            if (!r_ok)  { if (lval) { out_buf[0] = '\0'; return 0; } /* TRUE AND NULL → NULL */
                          strncpy(out_buf, "f", buf_size - 1); out_buf[buf_size - 1] = '\0'; return 1; }
            strncpy(out_buf, (lval && rval) ? "t" : "f", buf_size - 1);
        } else if (e->type == EXPR_OR) {
            /* TRUE OR NULL → TRUE; FALSE OR NULL → NULL; NULL OR NULL → NULL */
            if (!l_ok && !r_ok) { out_buf[0] = '\0'; return 0; }
            if (!l_ok)  { if (rval) { strncpy(out_buf, "t", buf_size - 1); out_buf[buf_size - 1] = '\0'; return 1; }
                          out_buf[0] = '\0'; return 0; }
            if (!r_ok)  { if (lval) { strncpy(out_buf, "t", buf_size - 1); out_buf[buf_size - 1] = '\0'; return 1; }
                          out_buf[0] = '\0'; return 0; }
            strncpy(out_buf, (lval || rval) ? "t" : "f", buf_size - 1);
        } else { /* EXPR_XOR */
            if (!l_ok || !r_ok) { out_buf[0] = '\0'; return 0; }
            strncpy(out_buf, (lval != rval) ? "t" : "f", buf_size - 1);
        }
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    if (e->type == EXPR_NOT) {
        char lbuf[512];
        int l_ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, lbuf, sizeof(lbuf)) : 0;
        if (!l_ok) { out_buf[0] = '\0'; return 0; } /* NOT NULL → NULL */
        int lval = 0;
        if (strcmp(lbuf, "t") == 0 || strcasecmp(lbuf, "true") == 0)
            lval = 1;
        else
            lval = (strtod(lbuf, NULL) != 0.0) ? 1 : 0;
        strncpy(out_buf, lval ? "f" : "t", buf_size - 1);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    /* LIKE / NOT LIKE — SQL pattern matching with % and _ */
    if (e->type == EXPR_LIKE || e->type == EXPR_NOT_LIKE) {
        char lbuf[512], rbuf[512];
        int l_ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, lbuf, sizeof(lbuf)) : 0;
        int r_ok = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, rbuf, sizeof(rbuf)) : 0;
        if (!l_ok || !r_ok) { out_buf[0] = '\0'; return 0; }  /* NULL → NULL */

        /* Simple LIKE pattern match: % = any sequence, _ = any single char */
        const char *str = lbuf;
        const char *pat = rbuf;
        /* Recursive match helper via iterative approach */
        {
            const char *s = str, *p = pat;
            const char *star_p = NULL, *star_s = NULL;
            while (*s) {
                if (*p == '%') {
                    star_p = p++;
                    star_s = s;
                } else if (*p == '_' || *p == *s) {
                    s++; p++;
                } else if (star_p) {
                    p = star_p + 1;
                    s = ++star_s;
                } else {
                    break;
                }
            }
            while (*p == '%') p++;
            int matched = (*s == '\0' && *p == '\0');
            if (e->type == EXPR_NOT_LIKE) matched = !matched;
            strncpy(out_buf, matched ? "t" : "f", buf_size - 1);
            out_buf[buf_size - 1] = '\0';
            return 1;
        }
    }

    /* CASE WHEN ... THEN ... [ELSE ...] END */
    if (e->type == EXPR_CASE_WHEN) {
        /* Walk the chain: left=condition, right=result, extra=next/else */
        const ExprNode *cur = e;
        while (cur && cur->type == EXPR_CASE_WHEN) {
            char cond_buf[512];
            int cond_ok = cur->left ?
                expr_evaluate(cur->left, col_names, col_values, num_cols,
                              cond_buf, sizeof(cond_buf)) : 0;
            if (cond_ok) {
                int is_true = 0;
                if (strcmp(cond_buf, "t") == 0 || strcasecmp(cond_buf, "true") == 0 ||
                    strcmp(cond_buf, "1") == 0)
                    is_true = 1;
                else {
                    double v = strtod(cond_buf, NULL);
                    if (v != 0.0) is_true = 1;
                }
                if (is_true) {
                    /* Condition matched — evaluate THEN result */
                    return cur->right ?
                        expr_evaluate(cur->right, col_names, col_values, num_cols,
                                      out_buf, buf_size) : 0;
                }
            }
            /* Condition was false or NULL — try next WHEN */
            cur = cur->extra;
        }
        /* No WHEN matched — evaluate ELSE (cur is now the else expr, or NULL) */
        if (cur) {
            return expr_evaluate(cur, col_names, col_values, num_cols,
                                 out_buf, buf_size);
        }
        /* No ELSE — result is NULL */
        out_buf[0] = '\0';
        return 0;
    }

    /* Date/time functions */
    if (e->type == EXPR_CURRENT_TIMESTAMP || e->type == EXPR_CURRENT_DATE ||
        e->type == EXPR_CURRENT_TIME) {
        time_t now = time(NULL);
        struct tm *tm = localtime(&now);
        if (e->type == EXPR_CURRENT_TIMESTAMP)
            strftime(out_buf, buf_size, "%Y-%m-%d %H:%M:%S", tm);
        else if (e->type == EXPR_CURRENT_DATE)
            strftime(out_buf, buf_size, "%Y-%m-%d", tm);
        else
            strftime(out_buf, buf_size, "%H:%M:%S", tm);
        return 1;
    }

    /* For string literals, return the string directly */
    if (e->type == EXPR_LITERAL_STR) {
        strncpy(out_buf, e->val.strval, buf_size - 1);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    /* For everything else, evaluate as number */
    {
        double val = expr_evaluate_num(e, col_names, col_values, num_cols);
        /* Use integer format if the result is an exact integer */
        if (val == (double)(long long)val && val > -1e15 && val < 1e15) {
            snprintf(out_buf, buf_size, "%lld", (long long)val);
        } else {
            snprintf(out_buf, buf_size, "%g", val);
        }
        return 1;
    }
}
