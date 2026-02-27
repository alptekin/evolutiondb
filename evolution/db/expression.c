/* ----------------------------------------------------------------
 *  Expression AST — node allocation and evaluation
 * ---------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "expression.h"

/* Pool storage */
ExprNode  g_exprNodePool[EXPR_POOL_SIZE];
int       g_exprNodePoolUsed = 0;

/* Parsed SELECT expressions */
ExprNode *g_selectExprs[MAX_SELECT_EXPRS];
int       g_selectExprCount = 0;

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

    /* For a plain column reference, return the string value directly
     * (preserves formatting: dates, strings, booleans, etc.) */
    if (e->type == EXPR_COLUMN) {
        int c;
        for (c = 0; c < num_cols; c++) {
            if (strcasecmp(col_names[c], e->val.col_name) == 0) {
                strncpy(out_buf, col_values[c], buf_size - 1);
                out_buf[buf_size - 1] = '\0';
                return 1;
            }
        }
        out_buf[0] = '\0';
        return 0;
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
