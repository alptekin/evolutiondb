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
    EXPR_AND,             /* left AND right */
    EXPR_OR,              /* left OR right */
    EXPR_NOT,             /* NOT expr */
    EXPR_XOR,             /* left XOR right */
    EXPR_LIKE,            /* left LIKE right */
    EXPR_NOT_LIKE,        /* left NOT LIKE right */
    EXPR_IS_NULL,         /* expr IS NULL */
    EXPR_IS_NOT_NULL,     /* expr IS NOT NULL */
    EXPR_CURRENT_TIMESTAMP, /* CURRENT_TIMESTAMP */
    EXPR_CURRENT_DATE,    /* CURRENT_DATE */
    EXPR_CURRENT_TIME,    /* CURRENT_TIME */
    EXPR_COUNT_STAR,       /* COUNT(*) — aggregate */
    EXPR_COUNT,            /* COUNT(expr) — aggregate */
    EXPR_SUM,              /* SUM(expr) — aggregate */
    EXPR_AVG,              /* AVG(expr) — aggregate */
    EXPR_MIN,              /* MIN(expr) — aggregate */
    EXPR_MAX,              /* MAX(expr) — aggregate */
    EXPR_CASE_WHEN,        /* CASE WHEN cond THEN result [ELSE ...] END */
    EXPR_SUBSTRING,       /* SUBSTRING(str, pos [, len]) */
    EXPR_TRIM,            /* TRIM([LEADING|TRAILING|BOTH] [chars] FROM str) */
    EXPR_UPPER,           /* UPPER(str) */
    EXPR_LOWER,           /* LOWER(str) */
    EXPR_LENGTH,          /* LENGTH(str) / CHAR_LENGTH(str) */
    EXPR_CONCAT,          /* CONCAT(a, b) — left || right */
    EXPR_REPLACE,         /* REPLACE(str, from, to) */
    EXPR_COALESCE,        /* COALESCE(a, b) */
    EXPR_GEN_RANDOM_UUID,    /* gen_random_uuid() — v4 */
    EXPR_GEN_RANDOM_UUID_V7, /* gen_random_uuid_v7() — v7 time-ordered */
    EXPR_SNOWFLAKE_ID,       /* snowflake_id() — 64-bit time-ordered ID */
    EXPR_LAST_INSERT_ID,     /* last_insert_id() — per-session last generated value */
    EXPR_EVO_SLEEP,          /* evo_sleep(ms) — delay function */
    EXPR_EVO_JITTER,         /* evo_jitter(min_ms, max_ms) — random delay */
    EXPR_FUNC_CALL,       /* function call (future) */
    EXPR_STAR,            /* SELECT * (sentinel) */
    /* String functions */
    EXPR_LEFT,            /* LEFT(str, n) */
    EXPR_RIGHT,           /* RIGHT(str, n) */
    EXPR_LPAD,            /* LPAD(str, len, pad) */
    EXPR_RPAD,            /* RPAD(str, len, pad) */
    EXPR_REVERSE,         /* REVERSE(str) */
    EXPR_REPEAT,          /* REPEAT(str, n) */
    EXPR_INSTR,           /* INSTR(str, substr) */
    EXPR_LOCATE,          /* LOCATE(substr, str) */
    /* Math functions */
    EXPR_ABS,             /* ABS(x) */
    EXPR_CEIL,            /* CEIL(x) / CEILING(x) */
    EXPR_FLOOR,           /* FLOOR(x) */
    EXPR_ROUND,           /* ROUND(x [, d]) */
    EXPR_POWER,           /* POWER(x, y) / POW(x, y) */
    EXPR_SQRT,            /* SQRT(x) */
    EXPR_MODFN,           /* MOD(x, y) — function form */
    EXPR_RAND,            /* RAND() */
    EXPR_LOG,             /* LOG(x) — natural log */
    EXPR_LOG10,           /* LOG10(x) */
    EXPR_SIGN,            /* SIGN(x) — -1, 0, 1 */
    EXPR_PI,              /* PI() — 3.14159... */
    EXPR_CONCAT_MULTI,    /* CONCAT(a, b, c, ...) — 3+ args */
    /* REGEXP */
    EXPR_REGEXP,          /* expr REGEXP pattern */
    EXPR_NOT_REGEXP,      /* expr NOT REGEXP pattern */
    /* GROUP_CONCAT aggregate */
    EXPR_GROUP_CONCAT,    /* GROUP_CONCAT(expr [SEPARATOR str]) */
    /* CAST / type conversion / conditionals */
    EXPR_CAST,            /* CAST(expr AS type) / CONVERT(expr, type) */
    EXPR_NULLIF,          /* NULLIF(a, b) — NULL if equal */
    EXPR_IFNULL,          /* IFNULL(a, b) — b if a is NULL */
    EXPR_IF,              /* IF(cond, then, else) */
    EXPR_IS_TRUE,         /* expr IS TRUE */
    EXPR_IS_FALSE,        /* expr IS FALSE */
    EXPR_NULL_SAFE_EQ,    /* a <=> b — NULL-safe equality */
    /* Date functions */
    EXPR_NOW,             /* NOW() */
    EXPR_DATE_ADD,        /* DATE_ADD(date, interval) */
    EXPR_DATE_SUB,        /* DATE_SUB(date, interval) */
    EXPR_DATEDIFF,        /* DATEDIFF(date1, date2) */
    EXPR_YEAR,            /* YEAR(date) */
    EXPR_MONTH,           /* MONTH(date) */
    EXPR_DAY,             /* DAY(date) */
    EXPR_HOUR,            /* HOUR(datetime) */
    EXPR_MINUTE,          /* MINUTE(datetime) */
    EXPR_SECOND,          /* SECOND(datetime) */
    /* Subqueries */
    EXPR_SUBQUERY,        /* (SELECT ...) — scalar, returns single value */
    EXPR_IN_SUBQUERY,     /* expr IN (SELECT ...) */
    EXPR_NOT_IN_SUBQUERY, /* expr NOT IN (SELECT ...) */
    EXPR_EXISTS_SUBQUERY  /* EXISTS (SELECT ...) / NOT EXISTS */
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
    struct ExprNode *extra;     /* CASE_WHEN: else/next branch */
    char *subquery_sql;         /* heap-allocated subquery SQL (EXPR_*_SUBQUERY) */
    char display[256];          /* display label / alias */
} ExprNode;

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
ExprNode *expr_make_and(ExprNode *left, ExprNode *right);
ExprNode *expr_make_or(ExprNode *left, ExprNode *right);
ExprNode *expr_make_not(ExprNode *operand);
ExprNode *expr_make_xor(ExprNode *left, ExprNode *right);
ExprNode *expr_make_like(ExprNode *left, ExprNode *right);
ExprNode *expr_make_not_like(ExprNode *left, ExprNode *right);
ExprNode *expr_make_between(ExprNode *expr, ExprNode *low, ExprNode *high);
ExprNode *expr_make_not_between(ExprNode *expr, ExprNode *low, ExprNode *high);
ExprNode *expr_make_in(ExprNode *expr, ExprNode **list, int count);
ExprNode *expr_make_not_in(ExprNode *expr, ExprNode **list, int count);
ExprNode *expr_make_count_star(void);
ExprNode *expr_make_count(ExprNode *arg);
ExprNode *expr_make_sum(ExprNode *arg);
ExprNode *expr_make_avg(ExprNode *arg);
ExprNode *expr_make_min(ExprNode *arg);
ExprNode *expr_make_max(ExprNode *arg);
ExprNode *expr_make_case_searched(int count, ExprNode *else_expr);
ExprNode *expr_make_case_simple(ExprNode *operand, int count, ExprNode *else_expr);
ExprNode *expr_make_substring(ExprNode *str, ExprNode *pos, ExprNode *len);
ExprNode *expr_make_trim(int mode, ExprNode *chars, ExprNode *str);
ExprNode *expr_make_upper(ExprNode *arg);
ExprNode *expr_make_lower(ExprNode *arg);
ExprNode *expr_make_length(ExprNode *arg);
ExprNode *expr_make_concat(ExprNode *left, ExprNode *right);
ExprNode *expr_make_replace(ExprNode *str, ExprNode *from, ExprNode *to);
ExprNode *expr_make_coalesce(ExprNode *left, ExprNode *right);
ExprNode *expr_make_gen_random_uuid(void);
ExprNode *expr_make_gen_random_uuid_v7(void);
ExprNode *expr_make_snowflake_id(void);
ExprNode *expr_make_last_insert_id(void);
ExprNode *expr_make_evo_sleep(ExprNode *duration);
ExprNode *expr_make_evo_jitter(ExprNode *min_ms, ExprNode *max_ms);

/* Generic function constructors */
ExprNode *expr_make_func0(ExprNodeType type, const char *name);
ExprNode *expr_make_func1(ExprNodeType type, ExprNode *a, const char *name);
ExprNode *expr_make_func2(ExprNodeType type, ExprNode *a, ExprNode *b, const char *name);
ExprNode *expr_make_func3(ExprNodeType type, ExprNode *a, ExprNode *b, ExprNode *c, const char *name);

/* Subquery constructors */
ExprNode *expr_make_subquery(const char *sql);
ExprNode *expr_make_in_subquery(ExprNode *left, const char *sql);
ExprNode *expr_make_not_in_subquery(ExprNode *left, const char *sql);
ExprNode *expr_make_exists_subquery(const char *sql, int negated);

/* Constants for expression array sizes */
#define MAX_CASE_WHENS 32
#define MAX_GROUP_BY 16

/* Check if any select expression is an aggregate function */
int expr_is_aggregate(const ExprNode *e);

/* Collect all aggregate nodes from an expression tree */
void expr_collect_aggregates(const ExprNode *e, const ExprNode **out, int *count, int max);

/* Constants for collector array sizes */
#define MAX_IN_LIST 64
#define MAX_CHECK_CONSTRAINTS 16

/* Add a CHECK constraint expression during parsing */
void AddCheckConstraint(ExprNode *expr);

/* Serialize an ExprNode tree to RPN text format.
 * Returns number of chars written. */
int expr_serialize(const ExprNode *e, char *buf, int bufSize);

/* Deserialize RPN text back into an ExprNode tree.
 * Returns NULL on failure. */
ExprNode *expr_deserialize(const char *buf);

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

/* Evaluate g_expr.limitExpr/g_expr.offsetExpr into [start, end) range for a match array.
 * Sets *start and *end (clamped to match_count). Returns 1 if LIMIT active. */
int expr_eval_limit_range(int match_count, int *start, int *end);

#endif /* EXPRESSION_H */
