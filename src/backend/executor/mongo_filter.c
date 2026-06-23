/*
 * mongo_filter.c — JSON filter DSL → ExprNode tree.
 *
 * Hand-rolled recursive descent parser. We don't pull in a full JSON
 * library because the surface is small: object, array, string,
 * number, boolean, null. The parser is forgiving about whitespace,
 * strict about quoting (double-quote only — JSON spec).
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "expression.h"
#include "mongo_filter.h"

/* ----------------------------------------------------------------
 *  Parser state
 * ---------------------------------------------------------------- */
typedef struct {
    const char *src;
    int         pos;
    int         len;
    char       *err;
    int         err_size;
} MFParser;

static void mf_set_err(MFParser *p, const char *msg)
{
    if (p->err && p->err_size > 0) snprintf(p->err, p->err_size, "%s", msg);
}

static void mf_skip_ws(MFParser *p)
{
    while (p->pos < p->len && isspace((unsigned char)p->src[p->pos]))
        p->pos++;
}

static int mf_peek(MFParser *p)
{
    return (p->pos < p->len) ? (unsigned char)p->src[p->pos] : -1;
}

static int mf_eat(MFParser *p, char c)
{
    mf_skip_ws(p);
    if (p->pos < p->len && p->src[p->pos] == c) { p->pos++; return 1; }
    return 0;
}

/* ----------------------------------------------------------------
 *  Primitive parsers
 * ---------------------------------------------------------------- */
static int mf_parse_string(MFParser *p, char *out, int out_size)
{
    mf_skip_ws(p);
    if (mf_peek(p) != '"') { mf_set_err(p, "expected string"); return -1; }
    p->pos++;
    int oi = 0;
    while (p->pos < p->len && p->src[p->pos] != '"') {
        char c = p->src[p->pos++];
        if (c == '\\' && p->pos < p->len) {
            char esc = p->src[p->pos++];
            if      (esc == 'n')  c = '\n';
            else if (esc == 't')  c = '\t';
            else if (esc == 'r')  c = '\r';
            else if (esc == '"')  c = '"';
            else if (esc == '\\') c = '\\';
            else                  c = esc;
        }
        if (oi < out_size - 1) out[oi++] = c;
    }
    if (mf_peek(p) != '"') { mf_set_err(p, "unterminated string"); return -1; }
    p->pos++;
    out[oi] = '\0';
    return 0;
}

/* Returns ExprNode literal — int/float/string/bool/null. */
static ExprNode *mf_parse_value(MFParser *p)
{
    mf_skip_ws(p);
    int c = mf_peek(p);
    if (c == '"') {
        char buf[4096];
        if (mf_parse_string(p, buf, sizeof(buf)) < 0) return NULL;
        return expr_make_string(buf);
    }
    if (c == 't' || c == 'f') {
        if (p->pos + 4 <= p->len && strncmp(p->src + p->pos, "true", 4) == 0) {
            p->pos += 4; return expr_make_bool(1);
        }
        if (p->pos + 5 <= p->len && strncmp(p->src + p->pos, "false", 5) == 0) {
            p->pos += 5; return expr_make_bool(0);
        }
        mf_set_err(p, "expected true/false");
        return NULL;
    }
    if (c == 'n') {
        if (p->pos + 4 <= p->len && strncmp(p->src + p->pos, "null", 4) == 0) {
            p->pos += 4; return expr_make_null();
        }
        mf_set_err(p, "expected null");
        return NULL;
    }
    /* Numeric literal */
    if (c == '-' || (c >= '0' && c <= '9')) {
        char numbuf[64];
        int ni = 0;
        if (c == '-') { numbuf[ni++] = '-'; p->pos++; }
        int saw_dot = 0, saw_exp = 0;
        while (p->pos < p->len && ni < 63) {
            char d = p->src[p->pos];
            if (isdigit((unsigned char)d)) { numbuf[ni++] = d; p->pos++; }
            else if (d == '.' && !saw_dot) { saw_dot = 1; numbuf[ni++] = d; p->pos++; }
            else if ((d == 'e' || d == 'E') && !saw_exp) {
                saw_exp = 1; numbuf[ni++] = d; p->pos++;
                if (p->pos < p->len && (p->src[p->pos] == '+' || p->src[p->pos] == '-')) {
                    numbuf[ni++] = p->src[p->pos++];
                }
            }
            else break;
        }
        numbuf[ni] = '\0';
        if (ni == 0) { mf_set_err(p, "bad number"); return NULL; }
        if (saw_dot || saw_exp) return expr_make_float(strtod(numbuf, NULL));
        return expr_make_int((int)strtol(numbuf, NULL, 10));
    }
    mf_set_err(p, "expected JSON value");
    return NULL;
}

/* ----------------------------------------------------------------
 *  Operator handlers
 * ---------------------------------------------------------------- */
static ExprNode *mf_parse_filter(MFParser *p);

/* Build the comparison node for {"$op": value} given a column name. */
static ExprNode *mf_build_cmp(const char *col, const char *op, ExprNode *value,
                               MFParser *p)
{
    ExprNode *col_node = expr_make_column(col);
    if (strcmp(op, "$eq") == 0)  return expr_make_cmp(4 /* EQ */, col_node, value);
    if (strcmp(op, "$ne") == 0)  return expr_make_cmp(3 /* NE */, col_node, value);
    if (strcmp(op, "$gt") == 0)  return expr_make_cmp(2 /* GT */, col_node, value);
    if (strcmp(op, "$gte") == 0) return expr_make_cmp(6 /* GE */, col_node, value);
    if (strcmp(op, "$lt") == 0)  return expr_make_cmp(1 /* LT */, col_node, value);
    if (strcmp(op, "$lte") == 0) return expr_make_cmp(5 /* LE */, col_node, value);
    mf_set_err(p, "unknown comparison op");
    return NULL;
}

/* Parse {"$in": [a, b, c]} into (col = a OR col = b OR col = c).
 * Negate flag flips the chain to AND (col != a AND col != b ...). */
static ExprNode *mf_parse_in_array(const char *col, MFParser *p, int negate)
{
    if (!mf_eat(p, '[')) { mf_set_err(p, "$in expects array"); return NULL; }
    ExprNode *acc = NULL;
    while (1) {
        mf_skip_ws(p);
        if (mf_peek(p) == ']') { p->pos++; break; }
        ExprNode *val = mf_parse_value(p);
        if (!val) return NULL;
        ExprNode *cmp = expr_make_cmp(negate ? 3 /* NE */ : 4 /* EQ */,
                                       expr_make_column(col), val);
        acc = acc ? (negate ? expr_make_and(acc, cmp) : expr_make_or(acc, cmp))
                  : cmp;
        mf_skip_ws(p);
        if (mf_peek(p) == ',') { p->pos++; continue; }
        if (mf_peek(p) == ']') { p->pos++; break; }
        mf_set_err(p, "$in array malformed");
        return NULL;
    }
    if (!acc) {
        /* Empty $in — Mongo treats {field: {$in: []}} as "always
         * false" (no value matches). 1=2 emits false at evaluation
         * without needing a special EXPR_BOOL_FALSE node. */
        return expr_make_cmp(4, expr_make_int(1), expr_make_int(2));
    }
    return acc;
}

/* Parse a {"$op": value} object given the column it applies to. */
static ExprNode *mf_parse_field_ops(const char *col, MFParser *p)
{
    if (!mf_eat(p, '{')) { mf_set_err(p, "expected {"); return NULL; }
    ExprNode *acc = NULL;
    while (1) {
        mf_skip_ws(p);
        if (mf_peek(p) == '}') { p->pos++; break; }
        char op[64];
        if (mf_parse_string(p, op, sizeof(op)) < 0) return NULL;
        if (!mf_eat(p, ':')) { mf_set_err(p, "expected :"); return NULL; }

        ExprNode *node = NULL;
        if (strcmp(op, "$in") == 0)  node = mf_parse_in_array(col, p, 0);
        else if (strcmp(op, "$nin") == 0) node = mf_parse_in_array(col, p, 1);
        else if (strcmp(op, "$exists") == 0) {
            ExprNode *bv = mf_parse_value(p);
            if (!bv) return NULL;
            int truthy = (bv->type == EXPR_LITERAL_BOOL && bv->val.intval) ||
                         (bv->type == EXPR_LITERAL_INT && bv->val.intval);
            node = truthy ? expr_make_is_not_null(expr_make_column(col))
                          : expr_make_is_null(expr_make_column(col));
        }
        else if (op[0] == '$') {
            ExprNode *val = mf_parse_value(p);
            if (!val) return NULL;
            node = mf_build_cmp(col, op, val, p);
        }
        else {
            mf_set_err(p, "field-level keys must start with $");
            return NULL;
        }
        if (!node) return NULL;

        acc = acc ? expr_make_and(acc, node) : node;

        mf_skip_ws(p);
        if (mf_peek(p) == ',') { p->pos++; continue; }
        if (mf_peek(p) == '}') { p->pos++; break; }
        mf_set_err(p, "field-ops object malformed");
        return NULL;
    }
    return acc;
}

/* Parse one {"$and":[...]} or {"$or":[...]} array-of-filters. */
static ExprNode *mf_parse_logical(MFParser *p, int is_and)
{
    if (!mf_eat(p, '[')) { mf_set_err(p, "$and/$or expects array"); return NULL; }
    ExprNode *acc = NULL;
    while (1) {
        mf_skip_ws(p);
        if (mf_peek(p) == ']') { p->pos++; break; }
        ExprNode *clause = mf_parse_filter(p);
        if (!clause) return NULL;
        acc = acc ? (is_and ? expr_make_and(acc, clause) : expr_make_or(acc, clause))
                  : clause;
        mf_skip_ws(p);
        if (mf_peek(p) == ',') { p->pos++; continue; }
        if (mf_peek(p) == ']') { p->pos++; break; }
        mf_set_err(p, "$and/$or array malformed");
        return NULL;
    }
    return acc;
}

/* Parse one filter object — {"$and":[...]}, {"$or":[...]}, {"$not":{...}},
 * or {"field":val, "field2":{"$op":val}, ...}. */
static ExprNode *mf_parse_filter(MFParser *p)
{
    if (!mf_eat(p, '{')) { mf_set_err(p, "expected {"); return NULL; }
    ExprNode *acc = NULL;
    while (1) {
        mf_skip_ws(p);
        if (mf_peek(p) == '}') { p->pos++; break; }
        char key[256];
        if (mf_parse_string(p, key, sizeof(key)) < 0) return NULL;
        if (!mf_eat(p, ':')) { mf_set_err(p, "expected :"); return NULL; }

        ExprNode *node = NULL;
        if (strcmp(key, "$and") == 0)      node = mf_parse_logical(p, 1);
        else if (strcmp(key, "$or") == 0)  node = mf_parse_logical(p, 0);
        else if (strcmp(key, "$not") == 0) {
            ExprNode *inner = mf_parse_filter(p);
            if (!inner) return NULL;
            node = expr_make_not(inner);
        }
        else if (key[0] == '$') {
            mf_set_err(p, "unknown logical op");
            return NULL;
        }
        else {
            /* Plain field — value is either a primitive (eq) or
             * a {"$op":...} object (range/in/exists). */
            mf_skip_ws(p);
            if (mf_peek(p) == '{') {
                node = mf_parse_field_ops(key, p);
            } else {
                ExprNode *val = mf_parse_value(p);
                if (!val) return NULL;
                node = expr_make_cmp(4 /* EQ */, expr_make_column(key), val);
            }
        }
        if (!node) return NULL;
        acc = acc ? expr_make_and(acc, node) : node;

        mf_skip_ws(p);
        if (mf_peek(p) == ',') { p->pos++; continue; }
        if (mf_peek(p) == '}') { p->pos++; break; }
        mf_set_err(p, "filter object malformed");
        return NULL;
    }
    return acc;
}

ExprNode *mongo_filter_parse(const char *json, char *err_buf, int err_size)
{
    if (!json || !*json) {
        if (err_buf && err_size > 0) snprintf(err_buf, err_size, "empty filter");
        return NULL;
    }
    MFParser p;
    p.src = json;
    p.pos = 0;
    p.len = (int)strlen(json);
    p.err = err_buf;
    p.err_size = err_size;
    return mf_parse_filter(&p);
}
