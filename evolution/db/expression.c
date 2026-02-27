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

/* GROUP BY expressions */
ExprNode *g_groupByExprs[MAX_GROUP_BY];
int       g_groupByCount = 0;

/* HAVING filter expression */
ExprNode *g_havingExpr = NULL;

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
    g_groupByCount = 0;
    g_havingExpr = NULL;
    memset(g_selectExprs, 0, sizeof(g_selectExprs));
    memset(g_groupByExprs, 0, sizeof(g_groupByExprs));
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

/* ---- SUM/AVG/MIN/MAX constructors ---- */
ExprNode *expr_make_sum(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_SUM;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "SUM(%s)",
             arg ? arg->display : "?");
    return e;
}

ExprNode *expr_make_avg(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_AVG;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "AVG(%s)",
             arg ? arg->display : "?");
    return e;
}

ExprNode *expr_make_min(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_MIN;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "MIN(%s)",
             arg ? arg->display : "?");
    return e;
}

ExprNode *expr_make_max(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_MAX;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "MAX(%s)",
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

/* ---- String function constructors ---- */

ExprNode *expr_make_substring(ExprNode *str, ExprNode *pos, ExprNode *len)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_SUBSTRING;
    e->left  = str;   /* string */
    e->right = pos;   /* start position (1-based) */
    e->extra = len;   /* length (may be NULL) */
    snprintf(e->display, sizeof(e->display), "SUBSTRING(%s,%s,%s)",
             str ? str->display : "?",
             pos ? pos->display : "?",
             len ? len->display : "?");
    return e;
}

ExprNode *expr_make_trim(int mode, ExprNode *chars, ExprNode *str)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_TRIM;
    e->val.intval = mode;  /* 1=LEADING, 2=TRAILING, 3=BOTH */
    e->left  = str;        /* string to trim */
    e->right = chars;      /* characters to trim (NULL → space) */
    snprintf(e->display, sizeof(e->display), "TRIM(%s)",
             str ? str->display : "?");
    return e;
}

ExprNode *expr_make_upper(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_UPPER;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "UPPER(%s)",
             arg ? arg->display : "?");
    return e;
}

ExprNode *expr_make_lower(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LOWER;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "LOWER(%s)",
             arg ? arg->display : "?");
    return e;
}

ExprNode *expr_make_length(ExprNode *arg)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LENGTH;
    e->left = arg;
    snprintf(e->display, sizeof(e->display), "LENGTH(%s)",
             arg ? arg->display : "?");
    return e;
}

ExprNode *expr_make_concat(ExprNode *a, ExprNode *b)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_CONCAT;
    e->left  = a;
    e->right = b;
    snprintf(e->display, sizeof(e->display), "CONCAT(%s,%s)",
             a ? a->display : "?",
             b ? b->display : "?");
    return e;
}

ExprNode *expr_make_replace(ExprNode *str, ExprNode *from, ExprNode *to)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_REPLACE;
    e->left  = str;   /* source string */
    e->right = from;  /* search string */
    e->extra = to;    /* replacement string */
    snprintf(e->display, sizeof(e->display), "REPLACE(%s,%s,%s)",
             str ? str->display : "?",
             from ? from->display : "?",
             to ? to->display : "?");
    return e;
}

ExprNode *expr_make_coalesce(ExprNode *a, ExprNode *b)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_COALESCE;
    e->left  = a;
    e->right = b;
    snprintf(e->display, sizeof(e->display), "COALESCE(%s,%s)",
             a ? a->display : "?",
             b ? b->display : "?");
    return e;
}

/* ---- Check if expression is an aggregate ---- */
int expr_is_aggregate(const ExprNode *e)
{
    if (!e) return 0;
    return (e->type == EXPR_COUNT_STAR || e->type == EXPR_COUNT ||
            e->type == EXPR_SUM || e->type == EXPR_AVG ||
            e->type == EXPR_MIN || e->type == EXPR_MAX);
}

/* ---- Collect aggregate nodes from an expression tree ---- */
void expr_collect_aggregates(const ExprNode *e, const ExprNode **out, int *count, int max)
{
    if (!e || *count >= max) return;
    if (expr_is_aggregate(e)) {
        /* Check for duplicate by display name */
        int i;
        for (i = 0; i < *count; i++) {
            if (strcasecmp(out[i]->display, e->display) == 0)
                return;  /* already collected */
        }
        out[(*count)++] = e;
        return;  /* don't recurse into aggregate arguments */
    }
    expr_collect_aggregates(e->left, out, count, max);
    expr_collect_aggregates(e->right, out, count, max);
    expr_collect_aggregates(e->extra, out, count, max);
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

    /* Aggregate functions inside HAVING: look up the display name
     * (e.g. "COUNT(*)", "SUM(score)") as a column in the provided context.
     * The query executor pre-populates aggregate results as columns. */
    if (expr_is_aggregate(e)) {
        int c;
        for (c = 0; c < num_cols; c++) {
            if (strcasecmp(col_names[c], e->display) == 0) {
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

    /* ---- String functions ---- */

    if (e->type == EXPR_SUBSTRING) {
        char str_buf[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, str_buf, sizeof(str_buf)) : 0;
        if (!ok || strcmp(str_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }

        char pos_buf[64];
        ok = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, pos_buf, sizeof(pos_buf)) : 0;
        int start = ok ? atoi(pos_buf) : 1;  /* 1-based */
        if (start < 1) start = 1;

        int slen = (int)strlen(str_buf);
        int idx = start - 1;  /* 0-based */
        if (idx >= slen) { out_buf[0] = '\0'; return 1; }

        if (e->extra) {
            char len_buf[64];
            ok = expr_evaluate(e->extra, col_names, col_values, num_cols, len_buf, sizeof(len_buf));
            int maxlen = ok ? atoi(len_buf) : slen;
            if (maxlen < 0) maxlen = 0;
            int avail = slen - idx;
            if (maxlen > avail) maxlen = avail;
            if (maxlen >= (int)buf_size) maxlen = (int)buf_size - 1;
            memcpy(out_buf, str_buf + idx, maxlen);
            out_buf[maxlen] = '\0';
        } else {
            strncpy(out_buf, str_buf + idx, buf_size - 1);
            out_buf[buf_size - 1] = '\0';
        }
        return 1;
    }

    if (e->type == EXPR_TRIM) {
        char str_buf[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, str_buf, sizeof(str_buf)) : 0;
        if (!ok || strcmp(str_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }

        const char *trimchars = " ";  /* default: space */
        char chars_buf[64];
        if (e->right) {
            ok = expr_evaluate(e->right, col_names, col_values, num_cols, chars_buf, sizeof(chars_buf));
            if (ok && strcmp(chars_buf, NULL_MARKER) != 0) trimchars = chars_buf;
        }

        int mode = e->val.intval;  /* 1=LEADING, 2=TRAILING, 3=BOTH */
        char *s = str_buf;
        int len = (int)strlen(s);

        /* Leading */
        if (mode == 1 || mode == 3) {
            while (*s && strchr(trimchars, *s)) s++;
        }
        len = (int)strlen(s);
        /* Trailing */
        if (mode == 2 || mode == 3) {
            while (len > 0 && strchr(trimchars, s[len - 1])) len--;
            s[len] = '\0';
        }

        strncpy(out_buf, s, buf_size - 1);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    if (e->type == EXPR_UPPER) {
        char str_buf[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, str_buf, sizeof(str_buf)) : 0;
        if (!ok || strcmp(str_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int i;
        for (i = 0; str_buf[i] && i < (int)buf_size - 1; i++)
            out_buf[i] = toupper((unsigned char)str_buf[i]);
        out_buf[i] = '\0';
        return 1;
    }

    if (e->type == EXPR_LOWER) {
        char str_buf[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, str_buf, sizeof(str_buf)) : 0;
        if (!ok || strcmp(str_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int i;
        for (i = 0; str_buf[i] && i < (int)buf_size - 1; i++)
            out_buf[i] = tolower((unsigned char)str_buf[i]);
        out_buf[i] = '\0';
        return 1;
    }

    if (e->type == EXPR_LENGTH) {
        char str_buf[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, str_buf, sizeof(str_buf)) : 0;
        if (!ok || strcmp(str_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%d", (int)strlen(str_buf));
        return 1;
    }

    if (e->type == EXPR_CONCAT) {
        char buf_a[512], buf_b[512];
        int ok_a = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, buf_a, sizeof(buf_a)) : 0;
        int ok_b = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, buf_b, sizeof(buf_b)) : 0;
        /* NULL propagation: if either arg is NULL, result is NULL (MySQL-style) */
        if ((!ok_a || strcmp(buf_a, NULL_MARKER) == 0) ||
            (!ok_b || strcmp(buf_b, NULL_MARKER) == 0)) {
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        snprintf(out_buf, buf_size, "%s%s", buf_a, buf_b);
        return 1;
    }

    if (e->type == EXPR_REPLACE) {
        char str_buf[1024], from_buf[256], to_buf[256];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, str_buf, sizeof(str_buf)) : 0;
        if (!ok || strcmp(str_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        ok = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, from_buf, sizeof(from_buf)) : 0;
        if (!ok || strcmp(from_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        ok = e->extra ? expr_evaluate(e->extra, col_names, col_values, num_cols, to_buf, sizeof(to_buf)) : 0;
        if (!ok || strcmp(to_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }

        int from_len = (int)strlen(from_buf);
        int to_len = (int)strlen(to_buf);
        if (from_len == 0) {
            strncpy(out_buf, str_buf, buf_size - 1);
            out_buf[buf_size - 1] = '\0';
            return 1;
        }

        char result[2048];
        result[0] = '\0';
        char *p = str_buf;
        char *r = result;
        int rlen = 0;
        while (*p) {
            if (strncmp(p, from_buf, from_len) == 0) {
                if (rlen + to_len < (int)sizeof(result) - 1) {
                    memcpy(r, to_buf, to_len);
                    r += to_len;
                    rlen += to_len;
                }
                p += from_len;
            } else {
                if (rlen < (int)sizeof(result) - 1) {
                    *r++ = *p;
                    rlen++;
                }
                p++;
            }
        }
        *r = '\0';
        strncpy(out_buf, result, buf_size - 1);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    if (e->type == EXPR_COALESCE) {
        char buf_a[512];
        int ok_a = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, buf_a, sizeof(buf_a)) : 0;
        if (ok_a && strcmp(buf_a, NULL_MARKER) != 0) {
            strncpy(out_buf, buf_a, buf_size - 1);
            out_buf[buf_size - 1] = '\0';
            return 1;
        }
        /* First arg is NULL, try second */
        char buf_b[512];
        int ok_b = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, buf_b, sizeof(buf_b)) : 0;
        if (ok_b && strcmp(buf_b, NULL_MARKER) != 0) {
            strncpy(out_buf, buf_b, buf_size - 1);
            out_buf[buf_size - 1] = '\0';
            return 1;
        }
        strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
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
