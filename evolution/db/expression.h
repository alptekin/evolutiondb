#ifndef EXPRESSION_H
#define EXPRESSION_H

/* ----------------------------------------------------------------
 *  Expression AST for SELECT computed columns
 *
 *  The Bison parser builds ExprNode trees for each select_expr.
 *  The adaptor evaluates them row-by-row to produce computed results.
 * ---------------------------------------------------------------- */

#define EXPR_POOL_SIZE 512
#define MAX_SELECT_EXPRS 64
#define NULL_MARKER "\x01NULL\x01"

typedef enum {
    EXPR_COLUMN,          /* column reference: col_name */
    EXPR_LITERAL_INT,     /* integer literal: intval */
    EXPR_LITERAL_FLOAT,   /* floating-point literal: floatval */
    EXPR_LITERAL_STR,     /* string literal: strval */
    EXPR_LITERAL_BOOL,    /* boolean literal: intval (1/0/-1) */
    EXPR_LITERAL_NULL,    /* NULL literal */
    EXPR_ADD,             /* left + right */
    EXPR_SUB,             /* left - right */
    EXPR_MUL,             /* left * right */
    EXPR_DIV,             /* left / right */
    EXPR_MOD,             /* left % right */
    EXPR_NEG,             /* unary minus: -left */
    EXPR_SHIFT_LEFT,      /* left << right */
    EXPR_SHIFT_RIGHT,     /* left >> right */
    EXPR_BITAND,          /* left & right */
    EXPR_BITOR,           /* left | right */
    EXPR_BITXOR,          /* left ^ right */
    EXPR_CMP_EQ,          /* left = right */
    EXPR_CMP_NE,          /* left <> right */
    EXPR_CMP_LT,          /* left < right */
    EXPR_CMP_GT,          /* left > right */
    EXPR_CMP_LE,          /* left <= right */
    EXPR_CMP_GE,          /* left >= right */
    EXPR_IS_NULL,         /* expr IS NULL */
    EXPR_IS_NOT_NULL,     /* expr IS NOT NULL */
    EXPR_CURRENT_TIMESTAMP, /* CURRENT_TIMESTAMP */
    EXPR_CURRENT_DATE,    /* CURRENT_DATE */
    EXPR_CURRENT_TIME,    /* CURRENT_TIME */
    EXPR_FUNC_CALL,       /* function call (future) */
    EXPR_STAR             /* SELECT * (sentinel) */
} ExprNodeType;

typedef struct ExprNode {
    ExprNodeType type;
    union {
        char   col_name[128];   /* EXPR_COLUMN */
        int    intval;          /* EXPR_LITERAL_INT, EXPR_LITERAL_BOOL */
        double floatval;        /* EXPR_LITERAL_FLOAT */
        char   strval[256];     /* EXPR_LITERAL_STR */
    } val;
    struct ExprNode *left;      /* left operand (binary ops) or sole operand (NEG) */
    struct ExprNode *right;     /* right operand (binary ops) */
    char display[256];          /* display label / alias */
} ExprNode;

/* Pool allocator — avoids per-node malloc/free */
extern ExprNode  g_exprNodePool[EXPR_POOL_SIZE];
extern int       g_exprNodePoolUsed;

/* Parsed SELECT expressions from parser */
extern ExprNode *g_selectExprs[MAX_SELECT_EXPRS];
extern int       g_selectExprCount;

/* Node allocation */
ExprNode *expr_alloc(void);

/* Node constructors */
ExprNode *expr_make_column(const char *name);
ExprNode *expr_make_int(int val);
ExprNode *expr_make_float(double val);
ExprNode *expr_make_string(const char *val);
ExprNode *expr_make_bool(int val);
ExprNode *expr_make_null(void);
ExprNode *expr_make_binop(ExprNodeType op, ExprNode *left, ExprNode *right);
ExprNode *expr_make_neg(ExprNode *operand);
ExprNode *expr_make_star(void);
ExprNode *expr_make_current_timestamp(void);
ExprNode *expr_make_current_date(void);
ExprNode *expr_make_current_time(void);
ExprNode *expr_make_cmp(int subtok, ExprNode *left, ExprNode *right);
ExprNode *expr_make_is_null(ExprNode *operand);
ExprNode *expr_make_is_not_null(ExprNode *operand);

/* Reset expression pool (call before each query) */
void expr_pool_reset(void);

/* Store a select expression with optional alias */
void expr_store_select(ExprNode *expr, const char *alias);

/* Check if an expression is a plain column reference */
int expr_is_column(const ExprNode *e);

/* Check if an expression returns a boolean result */
int expr_is_boolean(const ExprNode *e);

/* Evaluate an expression against a row.
 * col_names/col_values/num_cols describe the row's columns.
 * result is written to out_buf (as string), returns 1 on success. */
int expr_evaluate(const ExprNode *e,
                  const char col_names[][128],
                  const char col_values[][256],
                  int num_cols,
                  char *out_buf, int buf_size);

/* Evaluate expression as double (for arithmetic) */
double expr_evaluate_num(const ExprNode *e,
                         const char col_names[][128],
                         const char col_values[][256],
                         int num_cols);

#endif /* EXPRESSION_H */
