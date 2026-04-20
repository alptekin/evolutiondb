/* ----------------------------------------------------------------
 *  Expression AST — node allocation and evaluation
 * ---------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <regex.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include "FullText.h"
#include <inttypes.h>
#include "expression.h"
#include "catalog_internal.h"
#include "database.h"   /* query_context.h macros for g_expr.nodePool etc. */
#include "crypto.h"

/* Nested-execution marker (Task 89 — Feature #59).
 * Counter bumped by the join engine around LATERAL subquery re-execution.
 * Kept for future use (e.g., to skip heavy setup during nested calls);
 * expr_pool_reset no longer conditions on this because the lateral driver
 * snapshots and restores ExprOpts explicitly. */
__thread int g_expr_pool_nested = 0;

/* ---- Pool allocator ---- */
ExprNode *expr_alloc(void)
{
    if (g_expr.nodePoolUsed >= EXPR_POOL_SIZE) return NULL;
    ExprNode *e = &g_expr.nodePool[g_expr.nodePoolUsed++];
    memset(e, 0, sizeof(*e));
    return e;
}

void expr_pool_reset(void)
{
    g_expr.nodePoolUsed = 0;
    g_expr.selectExprCount = 0;
    g_expr.inListCount = 0;
    g_expr.caseWhenCount = 0;
    g_expr.whereExpr = NULL;
    g_expr.limitExpr = NULL;
    g_expr.offsetExpr = NULL;
    g_expr.groupByCount = 0;
    g_expr.havingExpr = NULL;
    g_expr.windowSpecCount = 0;
    memset(g_expr.selectExprs, 0, sizeof(g_expr.selectExprs));
    memset(g_expr.groupByExprs, 0, sizeof(g_expr.groupByExprs));
    memset(g_expr.windowSpecs, 0, sizeof(g_expr.windowSpecs));
    g_constr.checkCount = 0;
    memset(g_constr.checkSerialized, 0, sizeof(g_constr.checkSerialized));
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

ExprNode *expr_make_excluded(const char *name)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_EXCLUDED_COL;
    strncpy(e->val.col_name, name, sizeof(e->val.col_name) - 1);
    snprintf(e->display, sizeof(e->display), "EXCLUDED.%s", name);
    return e;
}

ExprNode *expr_make_match(const char *col_name, const char *query_text)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_MATCH;
    strncpy(e->val.col_name, col_name ? col_name : "",
            sizeof(e->val.col_name) - 1);
    /* Stash the AGAINST literal in `left` as a string ExprNode. */
    ExprNode *q = expr_alloc();
    if (!q) return NULL;
    q->type = EXPR_LITERAL_STR;
    strncpy(q->val.strval, query_text ? query_text : "",
            sizeof(q->val.strval) - 1);
    e->left = q;
    snprintf(e->display, sizeof(e->display), "MATCH(%s) AGAINST",
             col_name ? col_name : "");
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
        case EXPR_JSON_ARROW:      ops = "->"; break;
        case EXPR_JSON_ARROW_TEXT: ops = "->>"; break;
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

ExprNode *expr_make_gen_random_uuid(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_GEN_RANDOM_UUID;
    strcpy(e->display, "gen_random_uuid");
    return e;
}

ExprNode *expr_make_gen_random_uuid_v7(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_GEN_RANDOM_UUID_V7;
    strcpy(e->display, "gen_random_uuid_v7");
    return e;
}

ExprNode *expr_make_snowflake_id(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_SNOWFLAKE_ID;
    strcpy(e->display, "snowflake_id");
    return e;
}

ExprNode *expr_make_last_insert_id(void)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_LAST_INSERT_ID;
    strcpy(e->display, "last_insert_id");
    return e;
}

ExprNode *expr_make_evo_sleep(ExprNode *duration)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_EVO_SLEEP;
    e->left = duration;
    strcpy(e->display, "evo_sleep");
    return e;
}

ExprNode *expr_make_evo_jitter(ExprNode *min_ms, ExprNode *max_ms)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_EVO_JITTER;
    e->left = min_ms;
    e->right = max_ms;
    strcpy(e->display, "evo_jitter");
    return e;
}

ExprNode *expr_make_func0(ExprNodeType type, const char *name)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = type;
    snprintf(e->display, sizeof(e->display), "%s()", name);
    return e;
}

ExprNode *expr_make_func1(ExprNodeType type, ExprNode *a, const char *name)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = type;
    e->left = a;
    snprintf(e->display, sizeof(e->display), "%s(%s)", name, a ? a->display : "?");
    return e;
}

ExprNode *expr_make_func2(ExprNodeType type, ExprNode *a, ExprNode *b, const char *name)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = type;
    e->left = a;
    e->right = b;
    snprintf(e->display, sizeof(e->display), "%s(%s,%s)", name,
             a ? a->display : "?", b ? b->display : "?");
    return e;
}

ExprNode *expr_make_func3(ExprNodeType type, ExprNode *a, ExprNode *b, ExprNode *c, const char *name)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = type;
    e->left = a;
    e->right = b;
    e->extra = c;
    snprintf(e->display, sizeof(e->display), "%s(...)", name);
    return e;
}

/* ── Subquery constructors ── */

ExprNode *expr_make_subquery(const char *sql)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_SUBQUERY;
    e->subquery_sql = sql ? strdup(sql) : NULL;
    snprintf(e->display, sizeof(e->display), "(SELECT ...)");
    return e;
}

ExprNode *expr_make_in_subquery(ExprNode *left, const char *sql)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_IN_SUBQUERY;
    e->left = left;
    e->subquery_sql = sql ? strdup(sql) : NULL;
    snprintf(e->display, sizeof(e->display), "IN(SELECT ...)");
    return e;
}

ExprNode *expr_make_not_in_subquery(ExprNode *left, const char *sql)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_NOT_IN_SUBQUERY;
    e->left = left;
    e->subquery_sql = sql ? strdup(sql) : NULL;
    snprintf(e->display, sizeof(e->display), "NOT IN(SELECT ...)");
    return e;
}

ExprNode *expr_make_exists_subquery(const char *sql, int negated)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_EXISTS_SUBQUERY;
    e->val.intval = negated;
    e->subquery_sql = sql ? strdup(sql) : NULL;
    snprintf(e->display, sizeof(e->display), "%sEXISTS(SELECT ...)",
             negated ? "NOT " : "");
    return e;
}

void snowflake_init(void)
{
    char *env = getenv("EVOSQL_MACHINE_ID");
    if (env) {
        g_snowflake_machine_id = (uint16_t)(atoi(env) & 0x3FF);
    } else {
        char hostname[256];
        if (gethostname(hostname, sizeof(hostname)) == 0) {
            unsigned int h = 0;
            for (int i = 0; hostname[i]; i++)
                h = h * 31 + (unsigned char)hostname[i];
            g_snowflake_machine_id = (uint16_t)(h % 1024);
        }
    }
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
 * Uses g_expr.caseWhenExprs[] and g_expr.caseThenExprs[] collected during parsing. */
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
        node->left  = g_expr.caseWhenExprs[i];   /* condition */
        node->right = g_expr.caseThenExprs[i];   /* result */
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
        cmp->right = g_expr.caseWhenExprs[i];
        g_expr.caseWhenExprs[i] = cmp;
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

ExprNode *expr_make_json_arrow(ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_JSON_ARROW;
    e->left  = left;
    e->right = right;
    snprintf(e->display, sizeof(e->display), "%s->'%s'",
             left ? left->display : "?",
             right ? right->display : "?");
    return e;
}

ExprNode *expr_make_json_arrow_text(ExprNode *left, ExprNode *right)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = EXPR_JSON_ARROW_TEXT;
    e->left  = left;
    e->right = right;
    snprintf(e->display, sizeof(e->display), "%s->>'%s'",
             left ? left->display : "?",
             right ? right->display : "?");
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

/* ---- Window function constructor and predicate ---- */
ExprNode *expr_make_window(ExprNodeType type, ExprNode *arg, const char *name)
{
    ExprNode *e = expr_alloc();
    if (!e) return NULL;
    e->type = type;
    e->left = arg;
    if (arg && arg->display[0])
        snprintf(e->display, sizeof(e->display), "%s(%s)", name, arg->display);
    else if (arg)
        snprintf(e->display, sizeof(e->display), "%s(expr)", name);
    else
        snprintf(e->display, sizeof(e->display), "%s", name);
    return e;
}

int expr_is_window(const ExprNode *e)
{
    if (!e) return 0;
    return (e->type >= EXPR_ROW_NUMBER && e->type <= EXPR_WIN_CUME_DIST);
}

/* ---- Check if expression is an aggregate ---- */
int expr_is_aggregate(const ExprNode *e)
{
    if (!e) return 0;
    return (e->type == EXPR_COUNT_STAR || e->type == EXPR_COUNT ||
            e->type == EXPR_SUM || e->type == EXPR_AVG ||
            e->type == EXPR_MIN || e->type == EXPR_MAX ||
            e->type == EXPR_GROUP_CONCAT);
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
    if (g_expr.selectExprCount >= MAX_SELECT_EXPRS) return;
    if (expr && alias && alias[0]) {
        strncpy(expr->display, alias, sizeof(expr->display) - 1);
    }
    g_expr.selectExprs[g_expr.selectExprCount++] = expr;
}

/* ---- Check if expression is a plain column ---- */
int expr_is_column(const ExprNode *e)
{
    return (e && e->type == EXPR_COLUMN);
}

/* Detect a simple `pk_col <op> literal` (or `literal <op> pk_col`) pattern.
 * Used by Delete/Update fast path to skip full heap scan when the WHERE
 * clause is a single comparison against the primary key column. */
int expr_is_simple_pk_range(const ExprNode *node,
                            const char *pk_col_name,
                            PkRangePattern *out)
{
    if (!node || !pk_col_name || !out) return 0;

    int op = node->type;
    if (op != EXPR_CMP_EQ && op != EXPR_CMP_LT && op != EXPR_CMP_LE &&
        op != EXPR_CMP_GT && op != EXPR_CMP_GE)
        return 0;

    if (!node->left || !node->right) return 0;

    const ExprNode *col = NULL;
    const ExprNode *lit = NULL;
    int swapped = 0;

    if (node->left->type == EXPR_COLUMN &&
        (node->right->type == EXPR_LITERAL_INT ||
         node->right->type == EXPR_LITERAL_FLOAT ||
         node->right->type == EXPR_LITERAL_STR)) {
        col = node->left;
        lit = node->right;
    } else if (node->right->type == EXPR_COLUMN &&
               (node->left->type == EXPR_LITERAL_INT ||
                node->left->type == EXPR_LITERAL_FLOAT ||
                node->left->type == EXPR_LITERAL_STR)) {
        col = node->right;
        lit = node->left;
        swapped = 1;
    } else {
        return 0;
    }

    if (strcasecmp(col->val.col_name, pk_col_name) != 0) return 0;

    /* If swapped (literal <op> col), we need to flip the comparison:
     *   5 < col   ⇒  col > 5
     *   5 <= col  ⇒  col >= 5
     *   5 > col   ⇒  col < 5
     *   5 >= col  ⇒  col <= 5
     *   5 = col   ⇒  col = 5 */
    int eff_op = op;
    if (swapped) {
        switch (op) {
            case EXPR_CMP_LT: eff_op = EXPR_CMP_GT; break;
            case EXPR_CMP_LE: eff_op = EXPR_CMP_GE; break;
            case EXPR_CMP_GT: eff_op = EXPR_CMP_LT; break;
            case EXPR_CMP_GE: eff_op = EXPR_CMP_LE; break;
            default: /* EQ stays */ break;
        }
    }

    out->op = eff_op;
    out->value_type = lit->type;
    if (lit->type == EXPR_LITERAL_INT) {
        snprintf(out->value, sizeof(out->value), "%d", lit->val.intval);
    } else if (lit->type == EXPR_LITERAL_FLOAT) {
        snprintf(out->value, sizeof(out->value), "%g", lit->val.floatval);
    } else {
        strncpy(out->value, lit->val.strval, sizeof(out->value) - 1);
        out->value[sizeof(out->value) - 1] = '\0';
    }
    return 1;
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
            if (strcasecmp(col_names[c], e->val.col_name) == 0)
                return strtod(col_values[c], NULL);
        }
        /* Qualified fallback */
        {
            const char *dot = strchr(e->val.col_name, '.');
            const char *bare = dot ? dot + 1 : e->val.col_name;
            for (c = 0; c < num_cols; c++) {
                const char *cn_bare = strrchr(col_names[c], '.');
                cn_bare = cn_bare ? cn_bare + 1 : col_names[c];
                if (strcasecmp(cn_bare, bare) == 0)
                    return strtod(col_values[c], NULL);
            }
        }
        return 0.0;
    }

    case EXPR_EXCLUDED_COL: {
        /* Resolve via the INSERT column order cached into g_ins.excludedValues[]. */
        for (int c = 0; c < g_ins.excludedCount; c++) {
            if (c < g_ins.columnCount &&
                strcasecmp(g_ins.columns[c], e->val.col_name) == 0) {
                if (g_ins.excludedNull[c]) return 0.0;
                return strtod(g_ins.excludedValues[c], NULL);
            }
        }
        return 0.0;
    }

    case EXPR_MATCH: {
        /* Full-text match: tokenize the row column value + the AGAINST
         * literal, return 1.0 if any row token equals any query token. */
        if (!e->left) return 0.0;
        const char *col_val = NULL;
        for (int c = 0; c < num_cols; c++) {
            if (strcasecmp(col_names[c], e->val.col_name) == 0) {
                col_val = col_values[c];
                break;
            }
        }
        if (!col_val || !col_val[0]) return 0.0;

        /* Stack buffers sized from the FT tokenizer limits. A 500-word row
         * against a 32-term query uses 500*64 + 32*64 = 34 KB stack — OK on
         * glibc default 8 MB, documented for small-stack builds. */
        char row_tokens[FT_MAX_TOKENS][FT_MAX_TOKEN_LEN];
        int  n_row = ft_tokenize(col_val, row_tokens, FT_MAX_TOKENS);
        char q_tokens[32][FT_MAX_TOKEN_LEN];
        int  n_q = ft_tokenize(e->left->val.strval, q_tokens, 32);
        int hits = 0;
        for (int qi = 0; qi < n_q; qi++) {
            for (int ri = 0; ri < n_row; ri++) {
                if (strcmp(q_tokens[qi], row_tokens[ri]) == 0) { hits++; break; }
            }
        }
        /* Simple "any-term" match — hits>0 -> true. Ranking returns the hit
         * count so ORDER BY MATCH(...) AGAINST(...) works. */
        return (double)hits;
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

    /* MATCH(col) AGAINST('query') — defer to the numeric evaluator which
     * returns the per-row hit count; stringify the integer result. */
    if (e->type == EXPR_MATCH) {
        double n = expr_evaluate_num(e, col_names, col_values, num_cols);
        snprintf(out_buf, (size_t)buf_size, "%d", (int)n);
        return 1;
    }

    /* EXCLUDED.col — resolve from the pseudo-row populated by InsertProcess
     * during ON CONFLICT DO UPDATE. Matched by position through g_ins.columns. */
    if (e->type == EXPR_EXCLUDED_COL) {
        for (int c = 0; c < g_ins.excludedCount && c < g_ins.columnCount; c++) {
            if (strcasecmp(g_ins.columns[c], e->val.col_name) == 0) {
                if (g_ins.excludedNull[c]) { out_buf[0] = '\0'; return 0; }
                strncpy(out_buf, g_ins.excludedValues[c], buf_size - 1);
                out_buf[buf_size - 1] = '\0';
                return 1;
            }
        }
        out_buf[0] = '\0';
        return 0;
    }

    /* For a plain column reference, return the string value directly
     * (preserves formatting: dates, strings, booleans, etc.) */
    if (e->type == EXPR_COLUMN) {
        int c;
        const char *dot = strchr(e->val.col_name, '.');
        const char *bare = dot ? dot + 1 : e->val.col_name;

        /* 1) Exact match in local scope */
        for (c = 0; c < num_cols; c++) {
            if (strcasecmp(col_names[c], e->val.col_name) == 0) {
                if (strcmp(col_values[c], NULL_MARKER) == 0) { out_buf[0] = '\0'; return 0; }
                strncpy(out_buf, col_values[c], buf_size - 1);
                out_buf[buf_size - 1] = '\0';
                return 1;
            }
        }

        /* 2) LATERAL outer-scope exact match (Task 89 — Feature #59).
         * Checked BEFORE local bare-name fallback: a qualified reference like
         * `t1.id` inside a lateral subquery must resolve to the outer table,
         * not accidentally match a same-named inner column via qualifier
         * stripping. */
        if (g_qctx && g_qctx->outer_col_names && g_qctx->outer_col_count > 0) {
            const char (*ocn)[128] = g_qctx->outer_col_names;
            const char (*ocv)[256] = g_qctx->outer_col_values;
            const int   *ocnull    = g_qctx->outer_col_null;
            int ocnt = g_qctx->outer_col_count;
            for (c = 0; c < ocnt; c++) {
                if (strcasecmp(ocn[c], e->val.col_name) == 0) {
                    if (ocnull && ocnull[c]) { out_buf[0] = '\0'; return 0; }
                    strncpy(out_buf, ocv[c], buf_size - 1);
                    out_buf[buf_size - 1] = '\0';
                    return 1;
                }
            }
            /* Qualified ref, no exact match: try bare name in outer too.
             * Unqualified refs fall through to local bare-name below first. */
            if (dot) {
                for (c = 0; c < ocnt; c++) {
                    const char *cn_bare = strrchr(ocn[c], '.');
                    cn_bare = cn_bare ? cn_bare + 1 : ocn[c];
                    if (strcasecmp(cn_bare, bare) == 0) {
                        if (ocnull && ocnull[c]) { out_buf[0] = '\0'; return 0; }
                        strncpy(out_buf, ocv[c], buf_size - 1);
                        out_buf[buf_size - 1] = '\0';
                        return 1;
                    }
                }
            }
        }

        /* 3) Local bare-name fallback (strip qualifier) */
        for (c = 0; c < num_cols; c++) {
            const char *cn_bare = strrchr(col_names[c], '.');
            cn_bare = cn_bare ? cn_bare + 1 : col_names[c];
            if (strcasecmp(cn_bare, bare) == 0) {
                if (strcmp(col_values[c], NULL_MARKER) == 0) { out_buf[0] = '\0'; return 0; }
                strncpy(out_buf, col_values[c], buf_size - 1);
                out_buf[buf_size - 1] = '\0';
                return 1;
            }
        }

        /* 4) Outer bare-name fallback for unqualified refs */
        if (!dot && g_qctx && g_qctx->outer_col_names &&
            g_qctx->outer_col_count > 0) {
            const char (*ocn)[128] = g_qctx->outer_col_names;
            const char (*ocv)[256] = g_qctx->outer_col_values;
            const int   *ocnull    = g_qctx->outer_col_null;
            int ocnt = g_qctx->outer_col_count;
            for (c = 0; c < ocnt; c++) {
                const char *cn_bare = strrchr(ocn[c], '.');
                cn_bare = cn_bare ? cn_bare + 1 : ocn[c];
                if (strcasecmp(cn_bare, bare) == 0) {
                    if (ocnull && ocnull[c]) { out_buf[0] = '\0'; return 0; }
                    strncpy(out_buf, ocv[c], buf_size - 1);
                    out_buf[buf_size - 1] = '\0';
                    return 1;
                }
            }
        }

        out_buf[0] = '\0';
        return 0;
    }

    /* Window functions: look up pre-computed value by display name */
    if (expr_is_window(e)) {
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

    if (e->type == EXPR_JSON_ARROW || e->type == EXPR_JSON_ARROW_TEXT) {
        char json_buf[4096], key_buf[256];
        int ok_j = e->left ? expr_evaluate(e->left, col_names, col_values,
                                           num_cols, json_buf, sizeof(json_buf)) : 0;
        int ok_k = e->right ? expr_evaluate(e->right, col_names, col_values,
                                            num_cols, key_buf, sizeof(key_buf)) : 0;
        if (!ok_j || strcmp(json_buf, NULL_MARKER) == 0 ||
            !ok_k || strcmp(key_buf, NULL_MARKER) == 0) {
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        int as_text = (e->type == EXPR_JSON_ARROW_TEXT) ? 1 : 0;
        int rc = evo_json_extract(json_buf, key_buf, out_buf, buf_size, as_text);
        if (rc <= 0)
            strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
    }

    /* ── JSON functions (MySQL-compatible) ── */
    if (e->type == EXPR_JSON_EXTRACT) {
        char jbuf[4096], pbuf[256];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, pbuf, sizeof(pbuf)) : 0;
        if (!ok1 || !ok2 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int rc = evo_json_extract(jbuf, pbuf, out_buf, buf_size, 0);
        if (rc <= 0) strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_UNQUOTE) {
        char jbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        evo_json_unquote(jbuf, out_buf, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_TYPE) {
        char jbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        if (evo_json_type(jbuf, out_buf, buf_size) != 0) strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_LENGTH) {
        char jbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int n = evo_json_length(jbuf);
        if (n < 0) strncpy(out_buf, NULL_MARKER, buf_size);
        else snprintf(out_buf, buf_size, "%d", n);
        return 1;
    }
    if (e->type == EXPR_JSON_DEPTH) {
        char jbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int d = evo_json_depth(jbuf);
        if (d < 0) strncpy(out_buf, NULL_MARKER, buf_size);
        else snprintf(out_buf, buf_size, "%d", d);
        return 1;
    }
    if (e->type == EXPR_JSON_VALID) {
        char jbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { snprintf(out_buf, buf_size, "0"); return 1; }
        snprintf(out_buf, buf_size, "%d", evo_json_validate(jbuf) == 0 ? 1 : 0);
        return 1;
    }
    if (e->type == EXPR_JSON_KEYS) {
        char jbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        if (evo_json_keys(jbuf, out_buf, buf_size) != 0) strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_PRETTY) {
        char jbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        if (evo_json_pretty(jbuf, out_buf, buf_size) != 0) strncpy(out_buf, jbuf, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_QUOTE) {
        char sbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, sbuf, sizeof(sbuf)) : 0;
        if (!ok1 || strcmp(sbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        evo_json_quote(sbuf, out_buf, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_SET || e->type == EXPR_JSON_INSERT ||
        e->type == EXPR_JSON_REPLACE) {
        char jbuf[4096], pbuf[256], vbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, pbuf, sizeof(pbuf)) : 0;
        int ok3 = e->extra ? expr_evaluate(e->extra, col_names, col_values, num_cols, vbuf, sizeof(vbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int mode = (e->type == EXPR_JSON_SET) ? 0 :
                   (e->type == EXPR_JSON_INSERT) ? 1 : 2;
        evo_json_set(jbuf, pbuf, vbuf, out_buf, buf_size, mode);
        return 1;
    }
    if (e->type == EXPR_JSON_REMOVE) {
        char jbuf[4096], pbuf[256];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, pbuf, sizeof(pbuf)) : 0;
        if (!ok1 || strcmp(jbuf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        evo_json_set(jbuf, pbuf, NULL, out_buf, buf_size, 3); /* mode 3 = REMOVE */
        return 1;
    }
    if (e->type == EXPR_JSON_CONTAINS) {
        char tbuf[4096], cbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, tbuf, sizeof(tbuf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, cbuf, sizeof(cbuf)) : 0;
        if (!ok1 || !ok2) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%d", evo_json_contains(tbuf, cbuf));
        return 1;
    }
    if (e->type == EXPR_JSON_CONTAINS_PATH) {
        char jbuf[4096], mbuf[32], pbuf[256];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, mbuf, sizeof(mbuf)) : 0;
        int ok3 = e->extra ? expr_evaluate(e->extra, col_names, col_values, num_cols, pbuf, sizeof(pbuf)) : 0;
        if (!ok1 || !ok2 || !ok3) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int mode_all = (strcasecmp(mbuf, "all") == 0) ? 1 : 0;
        const char *paths[1] = { pbuf };
        snprintf(out_buf, buf_size, "%d", evo_json_contains_path(jbuf, mode_all, paths, 1));
        return 1;
    }
    if (e->type == EXPR_JSON_SEARCH) {
        char jbuf[4096], mbuf[32], sbuf[256];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, jbuf, sizeof(jbuf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, mbuf, sizeof(mbuf)) : 0;
        int ok3 = e->extra ? expr_evaluate(e->extra, col_names, col_values, num_cols, sbuf, sizeof(sbuf)) : 0;
        if (!ok1 || !ok2 || !ok3) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int find_all = (strcasecmp(mbuf, "all") == 0) ? 1 : 0;
        if (evo_json_search(jbuf, find_all, sbuf, out_buf, buf_size) <= 0)
            strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_OBJECT) {
        char kbuf[256], vbuf[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, kbuf, sizeof(kbuf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, vbuf, sizeof(vbuf)) : 0;
        if (!ok1 || !ok2) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        /* Check if value is numeric/boolean/null — use as-is; otherwise quote */
        char qval[4096];
        if (evo_json_validate(vbuf) == 0) {
            strncpy(qval, vbuf, sizeof(qval) - 1);
        } else {
            evo_json_quote(vbuf, qval, sizeof(qval));
        }
        const char *keys[1] = { kbuf };
        const char *vals[1] = { qval };
        evo_json_object(keys, vals, 1, out_buf, buf_size);
        return 1;
    }
    if (e->type == EXPR_JSON_ARRAY) {
        char v1[4096];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v1, sizeof(v1)) : 0;
        if (!ok1) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        char qv1[4096];
        if (evo_json_validate(v1) == 0) strncpy(qv1, v1, sizeof(qv1) - 1);
        else evo_json_quote(v1, qv1, sizeof(qv1));
        if (e->right) {
            char v2[4096], qv2[4096];
            expr_evaluate(e->right, col_names, col_values, num_cols, v2, sizeof(v2));
            if (evo_json_validate(v2) == 0) strncpy(qv2, v2, sizeof(qv2) - 1);
            else evo_json_quote(v2, qv2, sizeof(qv2));
            if (e->extra) {
                char v3[4096], qv3[4096];
                expr_evaluate(e->extra, col_names, col_values, num_cols, v3, sizeof(v3));
                if (evo_json_validate(v3) == 0) strncpy(qv3, v3, sizeof(qv3) - 1);
                else evo_json_quote(v3, qv3, sizeof(qv3));
                const char *arr[3] = { qv1, qv2, qv3 };
                evo_json_array(arr, 3, out_buf, buf_size);
            } else {
                const char *arr[2] = { qv1, qv2 };
                evo_json_array(arr, 2, out_buf, buf_size);
            }
        } else {
            const char *arr[1] = { qv1 };
            evo_json_array(arr, 1, out_buf, buf_size);
        }
        return 1;
    }
    if (e->type == EXPR_JSON_ARRAYAGG) {
        strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
    }

    /* ── Sequence functions ── */
    if (e->type == EXPR_NEXTVAL) {
        extern __thread uint32_t g_current_schema_id;
        char name_buf[256];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, name_buf, sizeof(name_buf)) : 0;
        if (!ok || strcmp(name_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int64_t val = evo_sequence_nextval(name_buf, g_current_schema_id);
        if (g_err.error) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        /* Update LASTVAL tracking */
        {
            extern __thread int64_t g_last_seq_value;
            extern __thread int g_last_seq_valid;
            g_last_seq_value = val;
            g_last_seq_valid = 1;
        }
        snprintf(out_buf, buf_size, "%" PRId64, val);
        return 1;
    }
    if (e->type == EXPR_CURRVAL) {
        extern __thread uint32_t g_current_schema_id;
        extern __thread int64_t g_last_seq_value;
        extern __thread char g_last_seq_name[256];
        char name_buf[256];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, name_buf, sizeof(name_buf)) : 0;
        if (!ok || strcmp(name_buf, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        /* CURRVAL: just read current value from catalog without incrementing */
        SequenceDesc sd;
        if (cat_find_sequence(g_current_schema_id, name_buf, &sd) != 0) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "sequence \"%s\" does not exist", name_buf);
            g_err.error = 1;
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        if (!sd.is_called) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "currval of sequence \"%s\" is not yet defined in this session", name_buf);
            g_err.error = 1;
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        snprintf(out_buf, buf_size, "%" PRId64, sd.current_value);
        return 1;
    }
    if (e->type == EXPR_SETVAL) {
        extern __thread uint32_t g_current_schema_id;
        char name_buf[256], val_buf[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, name_buf, sizeof(name_buf)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, val_buf, sizeof(val_buf)) : 0;
        if (!ok1 || !ok2) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int64_t val = strtoll(val_buf, NULL, 10);
        int is_called = 1;
        if (e->extra) {
            char ic_buf[32];
            expr_evaluate(e->extra, col_names, col_values, num_cols, ic_buf, sizeof(ic_buf));
            if (strcasecmp(ic_buf, "false") == 0 || strcmp(ic_buf, "0") == 0)
                is_called = 0;
        }
        int64_t result = evo_sequence_setval(name_buf, g_current_schema_id, val, is_called);
        if (g_err.error) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%" PRId64, result);
        return 1;
    }
    if (e->type == EXPR_LASTVAL) {
        extern __thread int64_t g_last_seq_value;
        extern __thread int g_last_seq_valid;
        if (!g_last_seq_valid) {
            snprintf(g_err.errorMsg, sizeof(g_err.errorMsg),
                     "lastval is not yet defined in this session");
            g_err.error = 1;
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        snprintf(out_buf, buf_size, "%" PRId64, g_last_seq_value);
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

    /* gen_random_uuid() */
    if (e->type == EXPR_GEN_RANDOM_UUID) {
        uint8_t bytes[16];
        if (crypto_random_bytes(bytes, 16) < 0) return 0;
        bytes[6] = (bytes[6] & 0x0F) | 0x40;  /* version 4 */
        bytes[8] = (bytes[8] & 0x3F) | 0x80;  /* variant RFC 4122 */
        snprintf(out_buf, buf_size,
            "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
            bytes[0], bytes[1], bytes[2], bytes[3],
            bytes[4], bytes[5], bytes[6], bytes[7],
            bytes[8], bytes[9], bytes[10], bytes[11],
            bytes[12], bytes[13], bytes[14], bytes[15]);
        return 1;
    }

    /* gen_random_uuid_v7() — RFC 9562 UUID v7 (time-ordered) */
    if (e->type == EXPR_GEN_RANDOM_UUID_V7) {
        uint8_t bytes[16];
        if (crypto_random_bytes(bytes, 16) < 0) return 0;

        /* Get Unix timestamp in milliseconds */
        struct timeval tv;
        gettimeofday(&tv, NULL);
        uint64_t ms = (uint64_t)tv.tv_sec * 1000 + (uint64_t)tv.tv_usec / 1000;

        /* Bits 0-47: timestamp (big-endian) */
        bytes[0] = (uint8_t)(ms >> 40);
        bytes[1] = (uint8_t)(ms >> 32);
        bytes[2] = (uint8_t)(ms >> 24);
        bytes[3] = (uint8_t)(ms >> 16);
        bytes[4] = (uint8_t)(ms >> 8);
        bytes[5] = (uint8_t)(ms);
        /* Bits 48-51: version = 0111 (7) */
        bytes[6] = (bytes[6] & 0x0F) | 0x70;
        /* Bits 64-65: variant = 10 */
        bytes[8] = (bytes[8] & 0x3F) | 0x80;

        snprintf(out_buf, buf_size,
            "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
            bytes[0], bytes[1], bytes[2], bytes[3],
            bytes[4], bytes[5], bytes[6], bytes[7],
            bytes[8], bytes[9], bytes[10], bytes[11],
            bytes[12], bytes[13], bytes[14], bytes[15]);
        return 1;
    }

    /* snowflake_id() — 41-bit ms timestamp + 10-bit machine ID + 12-bit sequence
     * Custom epoch: 2024-01-01 00:00:00 UTC (extends range to ~2093) */
    if (e->type == EXPR_SNOWFLAKE_ID) {
        /* 2026-01-01T00:00:00Z in milliseconds since Unix epoch */
        static const uint64_t SNOWFLAKE_EPOCH_MS = 1735689600000ULL;

        struct timeval tv;
        gettimeofday(&tv, NULL);
        uint64_t now_ms = (uint64_t)tv.tv_sec * 1000 + (uint64_t)tv.tv_usec / 1000;
        uint64_t ms = now_ms - SNOWFLAKE_EPOCH_MS;

        if (ms > g_snowflake_last_ms) {
            g_snowflake_last_ms = ms;
            g_snowflake_sequence = 0;
        } else if (g_snowflake_sequence >= 4095) {
            /* Exhausted 12-bit counter in this ms — spin to next ms */
            while (ms <= g_snowflake_last_ms) {
                gettimeofday(&tv, NULL);
                now_ms = (uint64_t)tv.tv_sec * 1000 + (uint64_t)tv.tv_usec / 1000;
                ms = now_ms - SNOWFLAKE_EPOCH_MS;
            }
            g_snowflake_last_ms = ms;
            g_snowflake_sequence = 0;
        }

        uint64_t id = (ms << 22)
                     | ((uint64_t)(g_snowflake_machine_id & 0x3FF) << 12)
                     | (g_snowflake_sequence & 0xFFF);
        g_snowflake_sequence++;

        snprintf(out_buf, buf_size, "%llu", (unsigned long long)id);
        return 1;
    }

    if (e->type == EXPR_LAST_INSERT_ID) {
        if (g_last_insert_id[0] == '\0') {
            snprintf(out_buf, buf_size, "0");
        } else {
            snprintf(out_buf, buf_size, "%s", g_last_insert_id);
        }
        return 1;
    }

    /* evo_sleep(ms) — interruptible delay, returns 0 */
    if (e->type == EXPR_EVO_SLEEP) {
        char dur_str[64];
        int dur_ok = e->left ? expr_evaluate(e->left, col_names, col_values,
                                              num_cols, dur_str, sizeof(dur_str)) : 0;
        int ms = dur_ok ? atoi(dur_str) : 0;
        if (ms > 0) {
            /* Sleep in 50ms chunks so timeout/cancel can interrupt */
            int remaining = ms;
            while (remaining > 0) {
                int chunk = remaining > 50 ? 50 : remaining;
                usleep((unsigned)chunk * 1000);
                remaining -= chunk;
                /* Check cancellation via thread-local global */
                extern volatile __thread int g_query_cancelled;
                if (g_query_cancelled) {
                    snprintf(out_buf, buf_size, "0");
                    return 0;  /* signal interruption */
                }
            }
        }
        snprintf(out_buf, buf_size, "0");
        return 1;
    }

    /* evo_jitter(min_ms, max_ms) — random delay, returns actual ms */
    if (e->type == EXPR_EVO_JITTER) {
        char min_str[64], max_str[64];
        int min_ok = e->left ? expr_evaluate(e->left, col_names, col_values,
                                              num_cols, min_str, sizeof(min_str)) : 0;
        int max_ok = e->right ? expr_evaluate(e->right, col_names, col_values,
                                               num_cols, max_str, sizeof(max_str)) : 0;
        int min_ms = min_ok ? atoi(min_str) : 0;
        int max_ms = max_ok ? atoi(max_str) : 0;
        if (max_ms < min_ms) max_ms = min_ms;
        int delay = min_ms;
        if (max_ms > min_ms)
            delay = min_ms + (rand() % (max_ms - min_ms + 1));
        if (delay > 0) {
            int remaining = delay;
            while (remaining > 0) {
                int chunk = remaining > 50 ? 50 : remaining;
                usleep((unsigned)chunk * 1000);
                remaining -= chunk;
                extern volatile __thread int g_query_cancelled;
                if (g_query_cancelled) {
                    snprintf(out_buf, buf_size, "%d", delay - remaining);
                    return 0;
                }
            }
        }
        snprintf(out_buf, buf_size, "%d", delay);
        return 1;
    }

    /* ── String functions ── */
    if (e->type == EXPR_LEFT) {
        char s[512], n[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, s, sizeof(s)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, n, sizeof(n)) : 0;
        if (!ok1 || strcmp(s, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int len = ok2 ? atoi(n) : 0;
        if (len < 0) len = 0;
        if (len > (int)strlen(s)) len = (int)strlen(s);
        strncpy(out_buf, s, len);
        out_buf[len] = '\0';
        return 1;
    }
    if (e->type == EXPR_RIGHT) {
        char s[512], n[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, s, sizeof(s)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, n, sizeof(n)) : 0;
        if (!ok1 || strcmp(s, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int len = ok2 ? atoi(n) : 0;
        int slen = (int)strlen(s);
        if (len < 0) len = 0;
        if (len > slen) len = slen;
        strncpy(out_buf, s + slen - len, len);
        out_buf[len] = '\0';
        return 1;
    }
    if (e->type == EXPR_LPAD) {
        char s[512], nstr[64], pad[64];
        expr_evaluate(e->left, col_names, col_values, num_cols, s, sizeof(s));
        expr_evaluate(e->right, col_names, col_values, num_cols, nstr, sizeof(nstr));
        int padok = e->extra ? expr_evaluate(e->extra, col_names, col_values, num_cols, pad, sizeof(pad)) : 0;
        if (!padok) strcpy(pad, " ");
        int target = atoi(nstr);
        int slen = (int)strlen(s);
        int plen = (int)strlen(pad);
        if (plen == 0) plen = 1;
        out_buf[0] = '\0';
        int pos = 0;
        for (int i = 0; i < target - slen && pos < (int)buf_size - 1; i++)
            out_buf[pos++] = pad[i % plen];
        out_buf[pos] = '\0';
        strncat(out_buf, s, buf_size - pos - 1);
        return 1;
    }
    if (e->type == EXPR_RPAD) {
        char s[512], nstr[64], pad[64];
        expr_evaluate(e->left, col_names, col_values, num_cols, s, sizeof(s));
        expr_evaluate(e->right, col_names, col_values, num_cols, nstr, sizeof(nstr));
        int padok = e->extra ? expr_evaluate(e->extra, col_names, col_values, num_cols, pad, sizeof(pad)) : 0;
        if (!padok) strcpy(pad, " ");
        int target = atoi(nstr);
        int slen = (int)strlen(s);
        int plen = (int)strlen(pad);
        if (plen == 0) plen = 1;
        strncpy(out_buf, s, buf_size - 1);
        out_buf[buf_size - 1] = '\0';
        int pos = slen;
        for (int i = 0; i < target - slen && pos < (int)buf_size - 1; i++)
            out_buf[pos++] = pad[i % plen];
        out_buf[pos] = '\0';
        return 1;
    }
    if (e->type == EXPR_REVERSE) {
        char s[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, s, sizeof(s)) : 0;
        if (!ok || strcmp(s, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int slen = (int)strlen(s);
        int i;
        for (i = 0; i < slen && i < (int)buf_size - 1; i++)
            out_buf[i] = s[slen - 1 - i];
        out_buf[i] = '\0';
        return 1;
    }
    if (e->type == EXPR_REPEAT) {
        char s[512], n[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, s, sizeof(s)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, n, sizeof(n)) : 0;
        if (!ok1 || strcmp(s, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int cnt = ok2 ? atoi(n) : 0;
        out_buf[0] = '\0';
        for (int i = 0; i < cnt; i++)
            strncat(out_buf, s, buf_size - strlen(out_buf) - 1);
        return 1;
    }
    if (e->type == EXPR_INSTR) {
        char s[512], sub[256];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, s, sizeof(s)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, sub, sizeof(sub)) : 0;
        if (!ok1 || !ok2) { snprintf(out_buf, buf_size, "0"); return 1; }
        char *p = strstr(s, sub);
        snprintf(out_buf, buf_size, "%d", p ? (int)(p - s) + 1 : 0);
        return 1;
    }
    if (e->type == EXPR_LOCATE) {
        /* LOCATE(substr, str) — same as INSTR but args reversed */
        char sub[256], s[512];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, sub, sizeof(sub)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, s, sizeof(s)) : 0;
        if (!ok1 || !ok2) { snprintf(out_buf, buf_size, "0"); return 1; }
        char *p = strstr(s, sub);
        snprintf(out_buf, buf_size, "%d", p ? (int)(p - s) + 1 : 0);
        return 1;
    }

    /* ── Math functions ── */
    if (e->type == EXPR_ABS) {
        char v[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        double d = strtod(v, NULL);
        snprintf(out_buf, buf_size, "%g", fabs(d));
        return 1;
    }
    if (e->type == EXPR_CEIL) {
        char v[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%g", ceil(strtod(v, NULL)));
        return 1;
    }
    if (e->type == EXPR_FLOOR) {
        char v[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%g", floor(strtod(v, NULL)));
        return 1;
    }
    if (e->type == EXPR_ROUND) {
        char v[64], d[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int digits = 0;
        if (e->right) {
            expr_evaluate(e->right, col_names, col_values, num_cols, d, sizeof(d));
            digits = atoi(d);
        }
        double val = strtod(v, NULL);
        double factor = pow(10.0, digits);
        snprintf(out_buf, buf_size, "%g", round(val * factor) / factor);
        return 1;
    }
    if (e->type == EXPR_POWER) {
        char a[64], b[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, a, sizeof(a)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, b, sizeof(b)) : 0;
        if (!ok1 || !ok2) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%g", pow(strtod(a, NULL), strtod(b, NULL)));
        return 1;
    }
    if (e->type == EXPR_SQRT) {
        char v[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%g", sqrt(strtod(v, NULL)));
        return 1;
    }
    if (e->type == EXPR_MODFN) {
        char a[64], b[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, a, sizeof(a)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, b, sizeof(b)) : 0;
        if (!ok1 || !ok2) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        double db = strtod(b, NULL);
        if (db == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%g", fmod(strtod(a, NULL), db));
        return 1;
    }
    if (e->type == EXPR_RAND) {
        snprintf(out_buf, buf_size, "%.17g", (double)rand() / RAND_MAX);
        return 1;
    }
    if (e->type == EXPR_LOG) {
        char v[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%g", log(strtod(v, NULL)));
        return 1;
    }
    if (e->type == EXPR_LOG10) {
        char v[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        snprintf(out_buf, buf_size, "%g", log10(strtod(v, NULL)));
        return 1;
    }
    if (e->type == EXPR_SIGN) {
        char v[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        double d = strtod(v, NULL);
        snprintf(out_buf, buf_size, "%d", d > 0 ? 1 : d < 0 ? -1 : 0);
        return 1;
    }
    if (e->type == EXPR_PI) {
        snprintf(out_buf, buf_size, "%.15g", 3.141592653589793);
        return 1;
    }

    /* ── User variables ── */
    if (e->type == EXPR_USERVAR) {
        if (g_qctx && g_qctx->uservar_fn) {
            if (g_qctx->uservar_fn(e->val.strval, out_buf, buf_size, g_qctx->uservar_ctx) == 0)
                return 1;
        }
        strncpy(out_buf, NULL_MARKER, buf_size);
        return 1;
    }

    /* ── REGEXP ── */
    if (e->type == EXPR_REGEXP || e->type == EXPR_NOT_REGEXP) {
        char str[512], pat[256];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, str, sizeof(str)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, pat, sizeof(pat)) : 0;
        if (!ok1 || !ok2 || strcmp(str, NULL_MARKER) == 0 || strcmp(pat, NULL_MARKER) == 0) {
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        regex_t regex;
        int rc = regcomp(&regex, pat, REG_EXTENDED | REG_NOSUB);
        if (rc != 0) {
            strncpy(out_buf, "f", buf_size);
            return 1;
        }
        int match = (regexec(&regex, str, 0, NULL, 0) == 0);
        regfree(&regex);
        if (e->type == EXPR_NOT_REGEXP) match = !match;
        strncpy(out_buf, match ? "t" : "f", buf_size);
        return 1;
    }

    /* ── CAST / NULLIF / IF / IS TRUE ── */
    if (e->type == EXPR_CAST) {
        char v[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        if (!ok || strcmp(v, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int target_family = e->val.intval / 10000;
        if (target_family >= 1 && target_family <= 6) {
            /* INT types */
            long lv = strtol(v, NULL, 10);
            snprintf(out_buf, buf_size, "%ld", lv);
        } else if (target_family == 7 || target_family == 8 || target_family == 9) {
            /* FLOAT/DOUBLE types */
            double dv = strtod(v, NULL);
            snprintf(out_buf, buf_size, "%g", dv);
        } else if (target_family == 22) {
            /* BOOLEAN */
            double dv = strtod(v, NULL);
            strncpy(out_buf, dv != 0 ? "true" : "false", buf_size);
        } else {
            /* VARCHAR/CHAR/TEXT/DATE — string passthrough */
            strncpy(out_buf, v, buf_size - 1);
            out_buf[buf_size - 1] = '\0';
        }
        return 1;
    }
    if (e->type == EXPR_NULLIF) {
        char a[512], b[512];
        int ok_a = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, a, sizeof(a)) : 0;
        int ok_b = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, b, sizeof(b)) : 0;
        if (ok_a && ok_b && strcmp(a, b) == 0)
            strncpy(out_buf, NULL_MARKER, buf_size);
        else if (ok_a)
            strncpy(out_buf, a, buf_size);
        else
            strncpy(out_buf, NULL_MARKER, buf_size);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }
    if (e->type == EXPR_IFNULL) {
        char a[512];
        int ok_a = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, a, sizeof(a)) : 0;
        if (ok_a && strcmp(a, NULL_MARKER) != 0) {
            strncpy(out_buf, a, buf_size);
        } else {
            char b[512];
            e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, b, sizeof(b)) : 0;
            strncpy(out_buf, b, buf_size);
        }
        out_buf[buf_size - 1] = '\0';
        return 1;
    }
    if (e->type == EXPR_IF) {
        char cond[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, cond, sizeof(cond)) : 0;
        int truthy = 0;
        if (ok && strcmp(cond, NULL_MARKER) != 0) {
            if (strcmp(cond, "t") == 0 || strcasecmp(cond, "true") == 0 || strcmp(cond, "1") == 0)
                truthy = 1;
            else {
                double v = strtod(cond, NULL);
                if (v != 0.0) truthy = 1;
            }
        }
        ExprNode *branch = truthy ? e->right : e->extra;
        if (branch)
            expr_evaluate(branch, col_names, col_values, num_cols, out_buf, buf_size);
        else
            strncpy(out_buf, NULL_MARKER, buf_size);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }
    if (e->type == EXPR_IS_TRUE) {
        char v[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        int is_true = 0;
        if (ok && strcmp(v, NULL_MARKER) != 0) {
            if (strcmp(v, "t") == 0 || strcasecmp(v, "true") == 0 || strcmp(v, "1") == 0)
                is_true = 1;
        }
        strncpy(out_buf, is_true ? "t" : "f", buf_size);
        return 1;
    }
    if (e->type == EXPR_IS_FALSE) {
        char v[512];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, v, sizeof(v)) : 0;
        int is_false = 0;
        if (ok && strcmp(v, NULL_MARKER) != 0) {
            if (strcmp(v, "f") == 0 || strcasecmp(v, "false") == 0 || strcmp(v, "0") == 0)
                is_false = 1;
        }
        strncpy(out_buf, is_false ? "t" : "f", buf_size);
        return 1;
    }

    /* ── Date functions ── */
    if (e->type == EXPR_NOW) {
        time_t t = time(NULL);
        struct tm *tm = localtime(&t);
        snprintf(out_buf, buf_size, "%04d-%02d-%02d %02d:%02d:%02d",
                 tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday,
                 tm->tm_hour, tm->tm_min, tm->tm_sec);
        return 1;
    }
    if (e->type == EXPR_DATEDIFF) {
        char d1[64], d2[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, d1, sizeof(d1)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, d2, sizeof(d2)) : 0;
        if (!ok1 || !ok2) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        struct tm t1 = {0}, t2 = {0};
        sscanf(d1, "%d-%d-%d", &t1.tm_year, &t1.tm_mon, &t1.tm_mday);
        sscanf(d2, "%d-%d-%d", &t2.tm_year, &t2.tm_mon, &t2.tm_mday);
        t1.tm_year -= 1900; t1.tm_mon -= 1;
        t2.tm_year -= 1900; t2.tm_mon -= 1;
        time_t tt1 = mktime(&t1), tt2 = mktime(&t2);
        snprintf(out_buf, buf_size, "%d", (int)(difftime(tt1, tt2) / 86400));
        return 1;
    }
    if (e->type == EXPR_DATE_ADD || e->type == EXPR_DATE_SUB) {
        char dt[64], nstr[64];
        int ok1 = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, dt, sizeof(dt)) : 0;
        int ok2 = e->right ? expr_evaluate(e->right, col_names, col_values, num_cols, nstr, sizeof(nstr)) : 0;
        if (!ok1 || !ok2) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int n = atoi(nstr);
        if (e->type == EXPR_DATE_SUB) n = -n;
        struct tm tm = {0};
        sscanf(dt, "%d-%d-%d", &tm.tm_year, &tm.tm_mon, &tm.tm_mday);
        tm.tm_year -= 1900; tm.tm_mon -= 1;
        const char *unit = e->right ? e->right->display : "DAY";
        if (strcasecmp(unit, "YEAR") == 0) tm.tm_year += n;
        else if (strcasecmp(unit, "MONTH") == 0) tm.tm_mon += n;
        else if (strcasecmp(unit, "HOUR") == 0) tm.tm_hour += n;
        else tm.tm_mday += n;
        mktime(&tm);
        snprintf(out_buf, buf_size, "%04d-%02d-%02d",
                 tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
        return 1;
    }
    if (e->type == EXPR_YEAR || e->type == EXPR_MONTH || e->type == EXPR_DAY ||
        e->type == EXPR_HOUR || e->type == EXPR_MINUTE || e->type == EXPR_SECOND) {
        char dt[64];
        int ok = e->left ? expr_evaluate(e->left, col_names, col_values, num_cols, dt, sizeof(dt)) : 0;
        if (!ok || strcmp(dt, NULL_MARKER) == 0) { strncpy(out_buf, NULL_MARKER, buf_size); return 1; }
        int yr = 0, mo = 0, dy = 0, hr = 0, mi = 0, se = 0;
        sscanf(dt, "%d-%d-%d %d:%d:%d", &yr, &mo, &dy, &hr, &mi, &se);
        int val = 0;
        if (e->type == EXPR_YEAR) val = yr;
        else if (e->type == EXPR_MONTH) val = mo;
        else if (e->type == EXPR_DAY) val = dy;
        else if (e->type == EXPR_HOUR) val = hr;
        else if (e->type == EXPR_MINUTE) val = mi;
        else if (e->type == EXPR_SECOND) val = se;
        snprintf(out_buf, buf_size, "%d", val);
        return 1;
    }

    /* ── Subquery evaluation ── */
    if (e->type == EXPR_SUBQUERY) {
        if (!e->subquery_sql || !g_qctx || !g_qctx->subquery_fn) {
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        char vals[1][256];
        int cnt = 0;
        g_qctx->subquery_fn(e->subquery_sql, vals, &cnt, 1, g_qctx->subquery_ctx);
        if (cnt > 0)
            strncpy(out_buf, vals[0], buf_size);
        else
            strncpy(out_buf, NULL_MARKER, buf_size);
        out_buf[buf_size - 1] = '\0';
        return 1;
    }

    if (e->type == EXPR_IN_SUBQUERY || e->type == EXPR_NOT_IN_SUBQUERY) {
        if (!e->subquery_sql || !g_qctx || !g_qctx->subquery_fn) {
            strncpy(out_buf, "f", buf_size);
            return 1;
        }
        char lhs[512];
        int lhs_ok = e->left ? expr_evaluate(e->left, col_names, col_values,
                                              num_cols, lhs, sizeof(lhs)) : 0;
        if (!lhs_ok || strcmp(lhs, NULL_MARKER) == 0) {
            strncpy(out_buf, NULL_MARKER, buf_size);
            return 1;
        }
        char vals[256][256];
        int cnt = 0;
        g_qctx->subquery_fn(e->subquery_sql, vals, &cnt, 256, g_qctx->subquery_ctx);
        int found = 0;
        for (int i = 0; i < cnt; i++) {
            if (strcmp(lhs, vals[i]) == 0) { found = 1; break; }
        }
        if (e->type == EXPR_NOT_IN_SUBQUERY) found = !found;
        strncpy(out_buf, found ? "t" : "f", buf_size);
        return 1;
    }

    if (e->type == EXPR_EXISTS_SUBQUERY) {
        if (!e->subquery_sql || !g_qctx || !g_qctx->subquery_fn) {
            strncpy(out_buf, "f", buf_size);
            return 1;
        }
        char vals[1][256];
        int cnt = 0;
        g_qctx->subquery_fn(e->subquery_sql, vals, &cnt, 1, g_qctx->subquery_ctx);
        int exists = (cnt > 0);
        if (e->val.intval) exists = !exists; /* NOT EXISTS */
        strncpy(out_buf, exists ? "t" : "f", buf_size);
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

/* ----------------------------------------------------------------
 *  CHECK constraint support — serialize / deserialize ExprNode
 *
 *  Serialization uses RPN (postfix) with \x03 as token separator.
 *  Token formats:
 *    C:name      column reference
 *    I:42        integer literal
 *    F:3.14      float literal
 *    S:hello     string literal
 *    B:1         boolean literal (1=true, 0=false)
 *    N           NULL literal
 *    EQ NE LT GT LE GE   comparison operators
 *    AND OR NOT XOR       logical operators
 *    ISNULL ISNN          IS NULL / IS NOT NULL
 *    LIKE NLIKE           LIKE / NOT LIKE
 *    ADD SUB MUL DIV MOD  arithmetic
 *    NEG                  unary minus
 * ---------------------------------------------------------------- */

#define SER_SEP '\x03'

static int ser_append(char *buf, int pos, int bufSize, const char *tok)
{
    int len = (int)strlen(tok);
    if (pos > 0 && pos < bufSize) buf[pos++] = SER_SEP;
    if (pos + len < bufSize) {
        memcpy(buf + pos, tok, len);
        pos += len;
    }
    if (pos < bufSize) buf[pos] = '\0';
    return pos;
}

static int expr_serialize_r(const ExprNode *e, char *buf, int pos, int bufSize)
{
    char tok[512];

    if (!e) return pos;

    switch (e->type) {
    case EXPR_COLUMN:
        snprintf(tok, sizeof(tok), "C:%s", e->val.col_name);
        return ser_append(buf, pos, bufSize, tok);
    case EXPR_EXCLUDED_COL:
        snprintf(tok, sizeof(tok), "X:%s", e->val.col_name);
        return ser_append(buf, pos, bufSize, tok);
    case EXPR_MATCH:
        snprintf(tok, sizeof(tok), "M:%s:%s",
                 e->val.col_name,
                 (e->left && e->left->val.strval[0]) ? e->left->val.strval : "");
        return ser_append(buf, pos, bufSize, tok);
    case EXPR_LITERAL_INT:
        snprintf(tok, sizeof(tok), "I:%d", e->val.intval);
        return ser_append(buf, pos, bufSize, tok);
    case EXPR_LITERAL_FLOAT:
        snprintf(tok, sizeof(tok), "F:%g", e->val.floatval);
        return ser_append(buf, pos, bufSize, tok);
    case EXPR_LITERAL_STR:
        snprintf(tok, sizeof(tok), "S:%s", e->val.strval);
        return ser_append(buf, pos, bufSize, tok);
    case EXPR_LITERAL_BOOL:
        snprintf(tok, sizeof(tok), "B:%d", e->val.intval);
        return ser_append(buf, pos, bufSize, tok);
    case EXPR_LITERAL_NULL:
        return ser_append(buf, pos, bufSize, "N");
    /* Binary operators */
    case EXPR_CMP_EQ: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "EQ");
    case EXPR_CMP_NE: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "NE");
    case EXPR_CMP_LT: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "LT");
    case EXPR_CMP_GT: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "GT");
    case EXPR_CMP_LE: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "LE");
    case EXPR_CMP_GE: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "GE");
    case EXPR_AND:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "AND");
    case EXPR_OR:     pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "OR");
    case EXPR_XOR:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "XOR");
    case EXPR_ADD:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "ADD");
    case EXPR_SUB:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "SUB");
    case EXPR_MUL:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "MUL");
    case EXPR_DIV:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "DIV");
    case EXPR_MOD:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "MOD");
    case EXPR_LIKE:   pos = expr_serialize_r(e->left, buf, pos, bufSize);
                      pos = expr_serialize_r(e->right, buf, pos, bufSize);
                      return ser_append(buf, pos, bufSize, "LIKE");
    case EXPR_NOT_LIKE: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                        pos = expr_serialize_r(e->right, buf, pos, bufSize);
                        return ser_append(buf, pos, bufSize, "NLIKE");
    /* Unary operators */
    case EXPR_NOT:        pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "NOT");
    case EXPR_NEG:        pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "NEG");
    case EXPR_IS_NULL:    pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "ISNULL");
    case EXPR_IS_NOT_NULL: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                           return ser_append(buf, pos, bufSize, "ISNN");
    /* Unary functions */
    case EXPR_UPPER:      pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "UPR");
    case EXPR_LOWER:      pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "LWR");
    case EXPR_LENGTH:     pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "LEN");
    /* Binary functions */
    case EXPR_CONCAT:     pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          pos = expr_serialize_r(e->right, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "CAT");
    case EXPR_COALESCE:   pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          pos = expr_serialize_r(e->right, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "COA");
    case EXPR_JSON_ARROW: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                          pos = expr_serialize_r(e->right, buf, pos, bufSize);
                          return ser_append(buf, pos, bufSize, "JA");
    case EXPR_JSON_ARROW_TEXT: pos = expr_serialize_r(e->left, buf, pos, bufSize);
                               pos = expr_serialize_r(e->right, buf, pos, bufSize);
                               return ser_append(buf, pos, bufSize, "JAT");
    default:
        return pos; /* unsupported node type — skip */
    }
}

int expr_serialize(const ExprNode *e, char *buf, int bufSize)
{
    buf[0] = '\0';
    return expr_serialize_r(e, buf, 0, bufSize);
}

ExprNode *expr_deserialize(const char *buf)
{
    ExprNode *stack[64];
    int sp = 0;
    char copy[1024];
    char *tok, *saveptr;

    if (!buf || !buf[0]) return NULL;

    strncpy(copy, buf, sizeof(copy) - 1);
    copy[sizeof(copy) - 1] = '\0';

    tok = strtok_r(copy, "\x03", &saveptr);
    while (tok) {
        if (tok[0] == 'C' && tok[1] == ':') {
            if (sp < 64) stack[sp++] = expr_make_column(tok + 2);
        } else if (tok[0] == 'I' && tok[1] == ':') {
            if (sp < 64) stack[sp++] = expr_make_int(atoi(tok + 2));
        } else if (tok[0] == 'F' && tok[1] == ':') {
            if (sp < 64) stack[sp++] = expr_make_float(atof(tok + 2));
        } else if (tok[0] == 'S' && tok[1] == ':') {
            if (sp < 64) stack[sp++] = expr_make_string(tok + 2);
        } else if (tok[0] == 'B' && tok[1] == ':') {
            if (sp < 64) stack[sp++] = expr_make_bool(atoi(tok + 2));
        } else if (tok[0] == 'N' && tok[1] == '\0') {
            if (sp < 64) stack[sp++] = expr_make_null();
        }
        /* Unary operators (check first — before binary) */
        else if ((strcmp(tok, "NOT") == 0 || strcmp(tok, "NEG") == 0 ||
                  strcmp(tok, "ISNULL") == 0 || strcmp(tok, "ISNN") == 0 ||
                  strcmp(tok, "UPR") == 0 || strcmp(tok, "LWR") == 0 ||
                  strcmp(tok, "LEN") == 0) && sp >= 1) {
            ExprNode *operand = stack[--sp];
            ExprNode *node = NULL;
            if      (strcmp(tok, "NOT") == 0)    node = expr_make_not(operand);
            else if (strcmp(tok, "NEG") == 0)    node = expr_make_neg(operand);
            else if (strcmp(tok, "ISNULL") == 0) node = expr_make_is_null(operand);
            else if (strcmp(tok, "ISNN") == 0)   node = expr_make_is_not_null(operand);
            else if (strcmp(tok, "UPR") == 0)    node = expr_make_upper(operand);
            else if (strcmp(tok, "LWR") == 0)    node = expr_make_lower(operand);
            else if (strcmp(tok, "LEN") == 0)    node = expr_make_length(operand);
            if (node && sp < 64) stack[sp++] = node;
        }
        /* Binary operators — pop two operands */
        else if (sp >= 2) {
            ExprNode *right = stack[--sp];
            ExprNode *left  = stack[--sp];
            ExprNode *node = NULL;

            if      (strcmp(tok, "EQ") == 0)    node = expr_make_binop(EXPR_CMP_EQ, left, right);
            else if (strcmp(tok, "NE") == 0)    node = expr_make_binop(EXPR_CMP_NE, left, right);
            else if (strcmp(tok, "LT") == 0)    node = expr_make_binop(EXPR_CMP_LT, left, right);
            else if (strcmp(tok, "GT") == 0)    node = expr_make_binop(EXPR_CMP_GT, left, right);
            else if (strcmp(tok, "LE") == 0)    node = expr_make_binop(EXPR_CMP_LE, left, right);
            else if (strcmp(tok, "GE") == 0)    node = expr_make_binop(EXPR_CMP_GE, left, right);
            else if (strcmp(tok, "AND") == 0)   node = expr_make_and(left, right);
            else if (strcmp(tok, "OR") == 0)    node = expr_make_or(left, right);
            else if (strcmp(tok, "XOR") == 0)   node = expr_make_xor(left, right);
            else if (strcmp(tok, "ADD") == 0)   node = expr_make_binop(EXPR_ADD, left, right);
            else if (strcmp(tok, "SUB") == 0)   node = expr_make_binop(EXPR_SUB, left, right);
            else if (strcmp(tok, "MUL") == 0)   node = expr_make_binop(EXPR_MUL, left, right);
            else if (strcmp(tok, "DIV") == 0)   node = expr_make_binop(EXPR_DIV, left, right);
            else if (strcmp(tok, "MOD") == 0)   node = expr_make_binop(EXPR_MOD, left, right);
            else if (strcmp(tok, "LIKE") == 0)  node = expr_make_like(left, right);
            else if (strcmp(tok, "NLIKE") == 0) node = expr_make_not_like(left, right);
            else if (strcmp(tok, "CAT") == 0)   node = expr_make_concat(left, right);
            else if (strcmp(tok, "COA") == 0)   node = expr_make_coalesce(left, right);
            else if (strcmp(tok, "JA") == 0)    node = expr_make_json_arrow(left, right);
            else if (strcmp(tok, "JAT") == 0)   node = expr_make_json_arrow_text(left, right);
            else {
                /* Unknown op — push operands back and skip */
                stack[sp++] = left;
                stack[sp++] = right;
                tok = strtok_r(NULL, "\x03", &saveptr);
                continue;
            }
            if (node && sp < 64) stack[sp++] = node;
        }

        tok = strtok_r(NULL, "\x03", &saveptr);
    }

    return (sp > 0) ? stack[0] : NULL;
}

void AddCheckConstraint(ExprNode *expr)
{
    if (!expr || g_constr.checkCount >= MAX_CHECK_CONSTRAINTS) return;
    expr_serialize(expr, g_constr.checkSerialized[g_constr.checkCount], 1024);
    g_constr.checkCount++;
}

/* ---- LIMIT/OFFSET range helper ---- */

int expr_eval_limit_range(int match_count, int *start, int *end)
{
    *start = 0;
    *end = match_count;
    if (!g_expr.limitExpr) return 0;

    char lbuf[64];
    if (!expr_evaluate(g_expr.limitExpr, NULL, NULL, 0, lbuf, sizeof(lbuf)))
        return 0;

    int lim = atoi(lbuf);
    if (lim < 0) lim = 0;
    int off = 0;
    if (g_expr.offsetExpr) {
        char obuf[64];
        if (expr_evaluate(g_expr.offsetExpr, NULL, NULL, 0, obuf, sizeof(obuf)))
            off = atoi(obuf);
        if (off < 0) off = 0;
    }

    *start = off < match_count ? off : match_count;
    *end = (*start + lim) < match_count ? (*start + lim) : match_count;
    return 1;
}
