/*----------------------------------------------------------------------
-					Parser for evosql subset						   -
------------------------------------------------------------------------*/
%{
	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"
	#include "../db/expression.h"

	void yyerror(void *scanner, const char *s, ...);
	void emit(const char *s, ...);

	/* Subquery SQL extraction helpers */
	extern __thread int g_lex_pos;
	extern __thread const char *g_lex_input;
	extern __thread int g_in_subquery;
	extern __thread int g_in_array_literal;
	static __thread int g_subq_mark = 0;

	static char *evo_extract_subq_sql(void) {
		if (!g_lex_input) return strdup("");
		int end = g_lex_pos - 1; /* exclude closing ')' */
		int len = end - g_subq_mark;
		if (len <= 0) return strdup("");
		char *sql = (char *)malloc(len + 1);
		if (!sql) return strdup("");
		memcpy(sql, g_lex_input + g_subq_mark, len);
		sql[len] = '\0';
		/* Trim leading/trailing whitespace */
		char *s = sql;
		while (*s && (*s == ' ' || *s == '\t' || *s == '\n')) s++;
		if (s != sql) memmove(sql, s, strlen(s) + 1);
		int sl = (int)strlen(sql);
		while (sl > 0 && (sql[sl-1] == ' ' || sql[sl-1] == '\t' || sql[sl-1] == '\n'))
			sql[--sl] = '\0';
		return sql;
	}

	/* Forward declare yylex for reentrant parser */
	#ifndef YY_DECL
	union YYSTYPE;
	int yylex(union YYSTYPE *lvalp, void *scanner);
	#endif

	/* Track alias for current select_expr — thread-local */
	static __thread char g_currentAlias[128];

	/* LATERAL subquery: captured SQL pending alias binding, plus outer
	 * g_expr slot snapshots that the inner select_stmt parse would
	 * otherwise overwrite. We save every slot an inner select_stmt or
	 * its sub-rules can touch so nested parsing is fully isolated. */
	static __thread char *g_pending_lateral_sql = NULL;
	static __thread struct ExprNode *g_lateral_saved_whereExpr = NULL;
	static __thread struct ExprNode *g_lateral_saved_limitExpr = NULL;
	static __thread struct ExprNode *g_lateral_saved_offsetExpr = NULL;
	static __thread struct ExprNode *g_lateral_saved_havingExpr = NULL;
	static __thread int g_lateral_saved_selectExprCount = 0;
	static __thread struct ExprNode *g_lateral_saved_selectExprs[MAX_SELECT_EXPRS];
	static __thread int g_lateral_saved_groupByCount = 0;
	static __thread struct ExprNode *g_lateral_saved_groupByExprs[MAX_GROUP_BY];
	static __thread int g_lateral_saved_windowSpecCount = 0;
%}

%pure-parser
%parse-param {void *scanner}
%lex-param   {void *scanner}
%union {
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}

/* names and literal values */
%token <strval> NAME
%token <strval> STRING
%token <intval> INTNUM
%token <intval> BOOL
%token <floatval> APPROXNUM
/* user @abc names */
%token <strval> USERVAR
/* operators and precedence levels */
%right ASSIGN
%left OR
%left XOR
%left ANDOP
%nonassoc IN IS LIKE REGEXP
%left NOT '!'
%left BETWEEN
%left <subtok> COMPARISON /* = <> < > <= >= <=> */
%left '|'
%left '&'
%left <subtok> SHIFT /* << >> */
%left '+' '-'
%left '*' '/' '%' MOD
%left '^'
%left JSON_ARROW JSON_ARROW_TEXT
%nonassoc UMINUS
%left '['
%token ALTER
%token ADD
%token AFTER
%token ALL
%token ANALYZE
%token ANY
%token AUTO_INCREMENT
%token ASC
%token AND
%token AS
%token ALWAYS

%token IDENTITY
%token CONTINUE
%token RESTART
%token GENERATED
%token STORED
%token VIRTUAL

%token BEFORE
%token BEGINWORK
%token BLOB
%token BOOLEAN
%token BY
%token BINARY
%token BOTH
%token BIGINT
%token BIT

%token CALL
%token CLOSE
%token CURSOR

%token CONSTRAINT
%token CURRENT_TIMESTAMP
%token CREATE
%token CASCADE
%token CHANGE
%token CROSS
%token CASE
%token CHECK
%token COMMENT
%token CURRENT_DATE
%token CURRENT_TIME
%token CHAR
%token COLLATE
%token COLUMN
%token CONCURRENTLY
%token COPY
%token CSV
%token CONFLICT
%token EXCLUDED
%token NOTHING
%token AGAINST
%token MATERIALIZED
%token REFRESH
%token OF

%token DATABASE
%token DECLARE
%token DEFERRABLE
%token DEFERRED
%token DELIMITER
%token DISABLE
%token DO
%token DOMAIN
%token DELAYED
%token DAY_HOUR
%token DAY_MICROSECOND
%token DISTINCT
%token DELETE
%token DROP
%token DAY_MINUTE
%token DISTINCTROW
%token DAY_SECOND
%token DESC
%token DEFAULT
%token DOUBLE
%token DATETIME
%token DECIMAL
%token DATE

%token EACH
%token ELSEIF
%token ENABLE
%token ESCAPED
%token EXCEPT
%token ENUM
%token END
%token ELSE
%token EXECUTE
%token EXIT
%token EXPLAIN

%token FETCH
%token FIRST
%token FOREACH
%token FLOAT
%token FORCE
%token FOREIGN
%token FORMAT
%token FROM
%token FULL
%token FULLTEXT
%token FUNCTION
%token FOR

%token GROUP

%token HANDLER
%token HEADER
%token HOUR_MINUTE
%token HOUR_MICROSECOND
%token HIGH_PRIORITY
%token HOUR_SECOND
%token HAVING
%token IMMEDIATE
%token INOUT
%token INITIALLY
%token INTEGER
%token INNER
%token IGNORE
%token INDEX
%token IF
%token INSERT
%token INTERSECT
%token INTO
%token INT
%token INTERVAL
%token ITERATE

%token JOIN

%token KEY
%token LEAVE
%token LOOP

%token LATERAL
%token LISTEN
%token NOTIFY
%token UNLISTEN
%token SELF
%token INHERITS
%token ONLY
%token LESS
%token LONGTEXT
%token LOW_PRIORITY
%token LEFT
%token LEADING
%token LIMIT
%token LOCKED
%token OFFSET
%token LONGBLOB

%token MATCH
%token MAXVALUE
%token MEDIUMTEXT
%token MINUS
%token MODIFY
%token MEDIUMBLOB
%token MEDIUMINT

%token NATURAL
%token NODE
%token NO_ACTION
%token NULLX

%token OPEN
%token OUT
%token OUTER
%token ON
%token ORDER
%token ONDUPLICATE

%token PARTIAL
%token PRIMARY
%token PROCEDURE

%token QUICK

%token RANGE
%token REAL
%token RECLAIM
%token REFERENCES
%token RENAME
%token RESIGNAL
%token RESTRICT
%token RETURN
%token RETURNING
%token RETURNS
%token ROLLUP
%token RIGHT
%token REPLACE

%token ROW
%token SIGNAL
%token TRIGGER
%token UNTIL

%token SQL_SMALL_RESULT
%token SCHEMA
%token SHARD
%token SHARDS
%token SHARE
%token SKIP
%token SOME
%token SQL_CALC_FOUND_ROWS
%token SQL_BIG_RESULT
%token SIMPLE
%token STDIN
%token STDOUT
%token STRAIGHT_JOIN
%token SMALLINT
%token SET
%token SELECT
%token QUOTE

%token TINYTEXT
%token <intval> TINYINT
%token TO
%token TEMPORARY
%token GLOBAL
%token PRESERVE
%token TEXT
%token THAN
%token TIMESTAMP
%token TABLE
%token THEN
%token TRAILING
%token TRUNCATE
%token TINYBLOB
%token TIME

%token UPDATE
%token UNSIGNED
%token UNION
%token UNIQUE
%token UUID
%token ARRAY
%token JSON
%token JSON_ARROW
%token JSON_ARROW_TEXT
%token VIEW
%token USING
%token USE
%token HASH

%token VALIDATE
%token VARCHAR
%token VALUES
%token VARBINARY

%token WHERE
%token WHEN
%token WHILE
%token WITH

%token YEAR
%token YEAR_MONTH

%token ZEROFILL

%token <subtok> EXISTS /* NOT EXISTS or EXISTS */


/* functions with special syntax */
%token FSUBSTRING
%token FTRIM
%token FDATE_ADD FDATE_SUB FDATEDIFF FYEAR FMONTH FDAY FHOUR FMINUTE FSECOND FNOW
%token FLEFT FRIGHT FLPAD FRPAD FREVERSE FREPEAT FINSTR FLOCATE
%token FABS FCEIL FFLOOR FROUND FPOWER FSQRT FMOD FRAND FLOG FLOG10 FSIGN FPI
%token FCAST FCONVERT FNULLIF FIFNULL FIF UNKNOWN
%token FGROUP_CONCAT SEPARATOR
%token FCOUNT
%token FSUM
%token FAVG
%token FMIN
%token FMAX
%token FUPPER
%token FLOWER
%token FLENGTH
%token FCONCAT
%token FREPLACE
%token FCOALESCE
%token FGEN_RANDOM_UUID
%token FGEN_RANDOM_UUID_V7
%token FSNOWFLAKE_ID
%token FLAST_INSERT_ID
%token FSCOPE_IDENTITY
%token FAT_IDENTITY
%token FAT_LAST_INSERT_ID
%token FEVO_SLEEP
%token FEVO_JITTER
%token FROW_NUMBER FRANK FDENSE_RANK
%token FLEAD FLAG FNTILE FPERCENT_RANK FCUME_DIST
%token OVER PARTITION
%token FJSON_EXTRACT FJSON_UNQUOTE FJSON_TYPE FJSON_LENGTH FJSON_DEPTH
%token FJSON_VALID FJSON_KEYS FJSON_PRETTY FJSON_QUOTE
%token FJSON_SET FJSON_INSERT FJSON_REPLACE FJSON_REMOVE
%token FJSON_CONTAINS FJSON_CONTAINS_PATH FJSON_SEARCH
%token FJSON_OBJECT FJSON_ARRAY FJSON_ARRAYAGG
%token SEQUENCE FNEXTVAL FCURRVAL FSETVAL FLASTVAL
%token START INCREMENT MINVALUE CYCLE
%token FARRAY_LENGTH FUNNEST
%token FEVO_NOTIFY FPG_LISTENING_CHANNELS

%type <intval> select_opts
%type <intval> select_stmt
%type <intval> select_expr_list
%type <intval> val_list
%type <intval> opt_val_list
%type <intval> case_list
%type <intval> groupby_list
%type <intval> opt_with_rollup
%type <intval> trim_ltb
%type <intval> opt_asc_desc
%type <intval> table_references
%type <intval> opt_inner_cross 
%type <intval> opt_outer
%type <intval> left_or_right 
%type <intval> opt_left_or_right_outer
%type <intval> column_list pk_column_list unique_column_list
%type <intval> index_list
%type <intval> opt_for_join
%type <intval> delete_opts
%type <intval> delete_list
%type <intval> insert_opts
%type <intval> insert_vals
%type <intval> insert_vals_list
%type <intval> insert_col_list
%type <intval> insert_asgn_list
%type <intval> upsert_asgn_list
%type <intval> opt_if_not_exists
%type <intval> update_opts
%type <intval> update_asgn_list
%type <intval> opt_temporary
%type <intval> opt_length
%type <intval> opt_binary
%type <intval> opt_uz enum_list
%type <intval> column_atts
%type <intval> data_type
%type <intval> opt_ignore_replace
%type <intval> create_col_list

%type <exprval> expr
%type <exprval> select_expr
%type <exprval> interval_exp
%type <exprval> any_array_arg
%type <intval>  array_val_list

%start stmt_list
%%

stmt_list: stmt';'
|stmt';'stmt_list
;


/**** expressions ****/
expr: NAME
    {
        emit("NAME %s", $1);
        GetSelection($1);
        $$ = expr_make_column($1);
        free($1);
    }
| NAME '.' NAME									{ emit("FIELDNAME %s.%s", $1, $3); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", $1, $3); $$ = expr_make_column(qn); } free($1); free($3); }
| EXCLUDED '.' NAME                             { emit("EXCLUDEDCOL %s", $3); $$ = expr_make_excluded($3); free($3); }
| MATCH '(' NAME ')' AGAINST '(' STRING ')'
    {
        /* Strip surrounding quotes from the lexer STRING token. */
        char *q = $7;
        size_t qlen = strlen(q);
        if (qlen >= 2 && ((q[0] == '\'' && q[qlen-1] == '\'') ||
                          (q[0] == '"'  && q[qlen-1] == '"'))) {
            q[qlen - 1] = '\0';
            q++;
        }
        emit("MATCH %s AGAINST %s", $3, q);
        $$ = expr_make_match($3, q);
        free($3); free($7);
    }
| USERVAR									{ emit("USERVAR %s", $1); ExprNode *uv = expr_make_func0(EXPR_USERVAR, $1); if(uv) strncpy(uv->val.strval, $1, 255); free($1); $$ = uv; }
| STRING
    {
        char *sv = $1;
        int slen = (int)strlen(sv);
        emit("STRING %s", sv);
        /* Strip surrounding quotes and collapse doubled quotes (SQL-standard
         * '' → ' and ANSI "" → ") before storing the literal value. */
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            char quote = sv[0];
            char stripped[1024];
            int j = 0;
            for (int i = 1; i < slen - 1 && j < (int)sizeof(stripped) - 1; i++) {
                if (sv[i] == quote && i + 1 < slen - 1 && sv[i + 1] == quote) {
                    stripped[j++] = quote;
                    i++;  /* skip the paired quote */
                } else {
                    stripped[j++] = sv[i];
                }
            }
            stripped[j] = '\0';
            GetInsertions(stripped);
            $$ = expr_make_string(stripped);
        } else {
            GetInsertions(sv);
            $$ = expr_make_string(sv);
        }
        free(sv);
    }
| INTNUM
    {
        emit("NUMBER %d", $1);
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", $1);
        GetInsertions(buf);
        $$ = expr_make_int($1);
    }
| APPROXNUM
    {
        emit("FLOAT %g", $1);
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", $1);
        GetInsertions(buf);
        $$ = expr_make_float($1);
    }
| BOOL
    {
        emit("BOOL %d", $1);
        GetInsertions($1 ? "true" : "false");
        $$ = expr_make_bool($1);
    }
| NULLX
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        $$ = expr_make_null();
    }
;

expr: expr '+' expr								{ emit("ADD"); $$ = expr_make_binop(EXPR_ADD, $1, $3); }
| expr '-' expr									{ emit("SUB"); $$ = expr_make_binop(EXPR_SUB, $1, $3); }
| expr '*' expr									{ emit("MUL"); $$ = expr_make_binop(EXPR_MUL, $1, $3); }
| expr '/' expr									{ emit("DIV"); $$ = expr_make_binop(EXPR_DIV, $1, $3); }
| expr '%' expr									{ emit("MOD"); $$ = expr_make_binop(EXPR_MOD, $1, $3); }
| expr MOD expr									{ emit("MOD"); $$ = expr_make_binop(EXPR_MOD, $1, $3); }
| '-' expr %prec UMINUS								{ emit("NEG"); $$ = expr_make_neg($2); }
| '(' expr ')'									{ $$ = $2; }
| expr ANDOP expr								{ emit("AND"); $$ = expr_make_and($1, $3); }
| expr OR expr									{ emit("OR"); $$ = expr_make_or($1, $3); }
| expr XOR expr									{ emit("XOR"); $$ = expr_make_xor($1, $3); }
| expr '|' expr									{ emit("BITOR"); $$ = expr_make_binop(EXPR_BITOR, $1, $3); }
| expr '&' expr									{ emit("BITAND"); $$ = expr_make_binop(EXPR_BITAND, $1, $3); }
| expr '^' expr									{ emit("BITXOR"); $$ = expr_make_binop(EXPR_BITXOR, $1, $3); }
| expr SHIFT expr								{ emit("SHIFT %s", $2==1?"left":"right"); $$ = expr_make_binop($2==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, $1, $3); }
| expr JSON_ARROW expr							{ emit("JSON_ARROW"); $$ = expr_make_json_arrow($1, $3); }
| expr JSON_ARROW_TEXT expr						{ emit("JSON_ARROW_TEXT"); $$ = expr_make_json_arrow_text($1, $3); }
| NOT expr									{ emit("NOT"); $$ = expr_make_not($2); }
| '!' expr									{ emit("NOT"); $$ = expr_make_not($2); }
| expr COMPARISON expr
    {
        emit("CMP %d", $2);
        $$ = expr_make_cmp($2, $1, $3);
    }
/* scalar subquery comparison: expr op (SELECT ...) */
| expr COMPARISON '(' { g_subq_mark = g_lex_pos; g_in_subquery = 1; } select_stmt ')'
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("CMPSELECT %d", $2);
        ExprNode *sub = expr_make_subquery(sql);
        $$ = expr_make_cmp($2, $1, sub);
        free(sql);
    }
| expr COMPARISON ANY '(' { g_subq_mark = g_lex_pos; g_in_subquery = 1; } select_stmt ')'
    { g_in_subquery = 0; emit("CMPANYSELECT %d", $2); $$ = $1; /* TODO: ANY/SOME/ALL */ }
| expr COMPARISON SOME '(' { g_subq_mark = g_lex_pos; g_in_subquery = 1; } select_stmt ')'
    { g_in_subquery = 0; emit("CMPANYSELECT %d", $2); $$ = $1; }
| expr COMPARISON ALL '(' { g_subq_mark = g_lex_pos; g_in_subquery = 1; } select_stmt ')'
    { g_in_subquery = 0; emit("CMPALLSELECT %d", $2); $$ = $1; }
/* ANY(array) / SOME(array) — array path (LALR(1) distinguishes from select
 * by the fact that any_array_arg doesn't start with SELECT).
 * Task 90 — Feature #60. */
| expr COMPARISON ANY '(' any_array_arg ')'
    { emit("CMPANYARRAY %d", $2); $$ = expr_make_any_array($2, $1, $5); }
| expr COMPARISON SOME '(' any_array_arg ')'
    { emit("CMPANYARRAY %d", $2); $$ = expr_make_any_array($2, $1, $5); }
;

expr: expr IS NULLX								{ emit("ISNULL"); $$ = expr_make_is_null($1); }
| expr IS NOT NULLX								{ emit("ISNULL"); emit("NOT"); $$ = expr_make_is_not_null($1); }
| expr IS BOOL									{ emit("ISBOOL %d", $3); $$ = $1; }
| expr IS NOT BOOL								{ emit("ISBOOL %d", $4); emit("NOT"); $$ = $1; }
| USERVAR ASSIGN expr								{ emit("ASSIGN @%s", $1); free($1); $$ = $3; }
;

expr: expr BETWEEN expr AND expr %prec BETWEEN                                  { emit("BETWEEN"); $$ = expr_make_between($1, $3, $5); }
| expr NOT BETWEEN expr AND expr %prec BETWEEN                                  { emit("NOTBETWEEN"); $$ = expr_make_not_between($1, $4, $6); }
;

val_list: expr
    {
        $$ = 1;
        int _n = g_expr.inListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            g_expr.inListExprs[_n] = $1;
            g_expr.inListCount = _n + 1;
        }
    }
| expr ',' val_list
    {
        $$ = 1 + $3;
        /* Shift right and insert at front. The guard uses MAX_IN_LIST-1
         * so writing inListExprs[_n] below is provably in-bounds
         * (0 <= _n < MAX_IN_LIST). */
        int _n = g_expr.inListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            for (int _i = _n; _i > 0; _i--)
                g_expr.inListExprs[_i] = g_expr.inListExprs[_i - 1];
            g_expr.inListExprs[0] = $1;
            g_expr.inListCount = _n + 1;
        }
    }
;

/* Array literal element list — uses dedicated side channel arrListExprs
 * so ARRAY[...] nested inside IN(...) does not clobber inListExprs. */
array_val_list: expr
    {
        $$ = 1;
        int _n = g_expr.arrListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            g_expr.arrListExprs[_n] = $1;
            g_expr.arrListCount = _n + 1;
        }
    }
| expr ',' array_val_list
    {
        $$ = 1 + $3;
        int _n = g_expr.arrListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            for (int _i = _n; _i > 0; _i--)
                g_expr.arrListExprs[_i] = g_expr.arrListExprs[_i - 1];
            g_expr.arrListExprs[0] = $1;
            g_expr.arrListCount = _n + 1;
        }
    }
;

/* Array literal: ARRAY[e1, e2, ...] or ARRAY[]
 *
 * While the inner elements parse, g_in_array_literal > 0 suppresses
 * GetInsertions() so the INSERT-row collector doesn't split each
 * element into its own field. At reduction we synthesize the canonical
 * "{e1,e2,NULL,...}" text from the ExprNode literals and record it
 * as a single field. */
expr: ARRAY '[' { g_expr.arrListCount = 0; g_in_array_literal++; } array_val_list ']'
    {
        g_in_array_literal--;
        char _arrbuf[4096];
        const int _cap = (int)sizeof(_arrbuf);
        int _p = 0;
        /* Safe append macros — bound every write to leave at least one
         * byte for the terminating NUL. snprintf's return value is
         * clamped to the remaining capacity before being added to _p,
         * preventing size-argument underflow on the next call. */
        #define _ARR_ROOM() ( _cap - 1 - _p )
        #define _ARR_PUTC(c) do { if (_ARR_ROOM() > 0) _arrbuf[_p++] = (c); } while (0)
        #define _ARR_PRINTF(...) do {                                    \
            int _r = _ARR_ROOM();                                        \
            if (_r > 0) {                                                \
                int _w = snprintf(_arrbuf + _p, (size_t)_r + 1, __VA_ARGS__); \
                if (_w < 0) break;                                       \
                if (_w > _r) _w = _r;                                    \
                _p += _w;                                                \
            }                                                            \
        } while (0)

        _ARR_PUTC('{');
        for (int _i = 0; _i < g_expr.arrListCount; _i++) {
            if (_i > 0) _ARR_PUTC(',');
            ExprNode *_en = g_expr.arrListExprs[_i];
            if (!_en) continue;
            if (_en->type == EXPR_LITERAL_INT) {
                _ARR_PRINTF("%d", _en->val.intval);
            } else if (_en->type == EXPR_LITERAL_FLOAT) {
                _ARR_PRINTF("%g", _en->val.floatval);
            } else if (_en->type == EXPR_LITERAL_BOOL) {
                _ARR_PRINTF("%s", _en->val.intval ? "true" : "false");
            } else if (_en->type == EXPR_LITERAL_NULL) {
                _ARR_PRINTF("NULL");
            } else if (_en->type == EXPR_LITERAL_STR) {
                _ARR_PUTC('"');
                for (const char *_s = _en->val.strval; *_s && _ARR_ROOM() > 1; _s++) {
                    if (*_s == '"' || *_s == '\\') _ARR_PUTC('\\');
                    _ARR_PUTC(*_s);
                }
                _ARR_PUTC('"');
            } else {
                /* Non-literal element (column ref, func call) — defer to
                 * runtime evaluation via expr_make_array_literal. Emit
                 * display placeholder in the INSERT field text. */
                _ARR_PRINTF("NULL");
            }
        }
        _ARR_PUTC('}');
        _arrbuf[_p] = '\0';

        #undef _ARR_ROOM
        #undef _ARR_PUTC
        #undef _ARR_PRINTF

        GetInsertions(_arrbuf);
        emit("ARRLIT %d", $4);
        $$ = expr_make_array_literal(g_expr.arrListExprs, g_expr.arrListCount);
    }
| ARRAY '[' ']'
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        $$ = expr_make_array_literal(NULL, 0);
    }
;

/* Subscript: col[i] or (expr)[i]. %prec '[' binds subscript tightest. */
expr: expr '[' expr ']' %prec '['
    { emit("SUBSCRIPT"); $$ = expr_make_subscript($1, $3); }
;

/* RHS of ANY(...)/SOME(...) when not a subquery. LALR(1) picks this
 * path whenever the first token after '(' is a valid expr-start (NAME,
 * ARRAY, '(', INTNUM, etc.) — never SELECT. */
any_array_arg: expr                 { $$ = $1; }
;

/* Built-in array functions */
expr: FARRAY_LENGTH '(' expr ')'
    { emit("CALL 1 ARRAY_LENGTH"); $$ = expr_make_array_length($3); }
| FARRAY_LENGTH '(' expr ',' expr ')'
    { emit("CALL 2 ARRAY_LENGTH"); $$ = expr_make_array_length($3); /* dim ignored in v1 */ }
| FUNNEST '(' expr ')'
    { emit("CALL 1 UNNEST"); $$ = expr_make_unnest($3); }
;

/* Built-in LISTEN/NOTIFY helper functions (Task 91 — Feature #62) */
expr: FEVO_NOTIFY '(' expr ',' expr ')'
    {
        emit("CALL 2 EVO_NOTIFY");
        $$ = expr_make_evo_notify($3, $5);
    }
| FPG_LISTENING_CHANNELS '(' ')'
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        $$ = expr_make_pg_listening_channels();
    }
;

opt_val_list: /* nil */								{ $$ = 0; }
| val_list
;

expr: expr IN '(' { g_expr.inListCount = 0; } val_list ')'                           { emit("ISIN %d", $5); $$ = expr_make_in($1, g_expr.inListExprs, g_expr.inListCount); }
| expr NOT IN '(' { g_expr.inListCount = 0; } val_list ')'                           { emit("ISIN %d", $6); emit("NOT"); $$ = expr_make_not_in($1, g_expr.inListExprs, g_expr.inListCount); }
| expr IN '(' { g_subq_mark = g_lex_pos; g_in_subquery = 1; } select_stmt ')'
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        $$ = expr_make_in_subquery($1, sql);
        free(sql);
    }
| expr NOT IN '(' { g_subq_mark = g_lex_pos; g_in_subquery = 1; } select_stmt ')'
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        $$ = expr_make_not_in_subquery($1, sql);
        free(sql);
    }
| EXISTS '(' { g_subq_mark = g_lex_pos; g_in_subquery = 1; } select_stmt ')'
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        $$ = expr_make_exists_subquery(sql, $1);
        free(sql);
    }
;

/* regular functions */
expr: NAME '(' opt_val_list ')'                                                 { emit("CALL %d %s", $3, $1); $$ = expr_make_column($1); free($1); }
;

/* functions with special syntax */
expr: FCOUNT '(' '*' ')'							{ emit("COUNTALL"); $$ = expr_make_count_star(); }
| FCOUNT '(' expr ')'								{ emit(" CALL 1 COUNT"); $$ = expr_make_count($3); }
| FSUM '(' expr ')'									{ emit(" CALL 1 SUM"); $$ = expr_make_sum($3); }
| FAVG '(' expr ')'									{ emit(" CALL 1 AVG"); $$ = expr_make_avg($3); }
| FMIN '(' expr ')'									{ emit(" CALL 1 MIN"); $$ = expr_make_min($3); }
| FMAX '(' expr ')'									{ emit(" CALL 1 MAX"); $$ = expr_make_max($3); }
| FGROUP_CONCAT '(' expr ')'                       { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, $3, "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); $$ = e; }
| FGROUP_CONCAT '(' expr SEPARATOR STRING ')'       { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, $3, "GROUP_CONCAT"); if(e) strncpy(e->val.strval, $5, 255); free($5); $$ = e; }
;

/* window functions — ranking */
expr: FROW_NUMBER '(' ')' OVER '(' { AddWindowSpec(EXPR_ROW_NUMBER, NULL); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW ROW_NUMBER"); $$ = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); }
| FRANK '(' ')' OVER '(' { AddWindowSpec(EXPR_RANK, NULL); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW RANK"); $$ = expr_make_window(EXPR_RANK, NULL, "RANK()"); }
| FDENSE_RANK '(' ')' OVER '(' { AddWindowSpec(EXPR_DENSE_RANK, NULL); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW DENSE_RANK"); $$ = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); }
/* window functions — aggregates */
| FSUM '(' expr ')' OVER '(' { AddWindowSpec(EXPR_WIN_SUM, $3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW SUM"); $$ = expr_make_window(EXPR_WIN_SUM, $3, "SUM"); }
| FCOUNT '(' '*' ')' OVER '(' { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW COUNT_STAR"); $$ = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); }
| FCOUNT '(' expr ')' OVER '(' { AddWindowSpec(EXPR_WIN_COUNT, $3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW COUNT"); $$ = expr_make_window(EXPR_WIN_COUNT, $3, "COUNT"); }
| FAVG '(' expr ')' OVER '(' { AddWindowSpec(EXPR_WIN_AVG, $3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW AVG"); $$ = expr_make_window(EXPR_WIN_AVG, $3, "AVG"); }
| FMIN '(' expr ')' OVER '(' { AddWindowSpec(EXPR_WIN_MIN, $3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW MIN"); $$ = expr_make_window(EXPR_WIN_MIN, $3, "MIN"); }
| FMAX '(' expr ')' OVER '(' { AddWindowSpec(EXPR_WIN_MAX, $3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW MAX"); $$ = expr_make_window(EXPR_WIN_MAX, $3, "MAX"); }
/* LEAD / LAG offset functions */
| FLEAD '(' expr ')' OVER '(' { AddWindowSpec(EXPR_WIN_LEAD, $3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LEAD"); $$ = expr_make_window(EXPR_WIN_LEAD, $3, "LEAD"); }
| FLEAD '(' expr ',' INTNUM ')' OVER '(' { AddWindowSpec(EXPR_WIN_LEAD, $3); SetWindowOffset($5); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LEAD"); $$ = expr_make_window(EXPR_WIN_LEAD, $3, "LEAD"); }
| FLEAD '(' expr ',' INTNUM ',' STRING ')' OVER '(' { AddWindowSpec(EXPR_WIN_LEAD, $3); SetWindowOffset($5); SetWindowDefault($7); free($7); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LEAD"); $$ = expr_make_window(EXPR_WIN_LEAD, $3, "LEAD"); }
| FLEAD '(' expr ',' INTNUM ',' INTNUM ')' OVER '(' { AddWindowSpec(EXPR_WIN_LEAD, $3); SetWindowOffset($5); char _b[32]; snprintf(_b,sizeof(_b),"%d",$7); SetWindowDefault(_b); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LEAD"); $$ = expr_make_window(EXPR_WIN_LEAD, $3, "LEAD"); }
| FLAG '(' expr ')' OVER '(' { AddWindowSpec(EXPR_WIN_LAG, $3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LAG"); $$ = expr_make_window(EXPR_WIN_LAG, $3, "LAG"); }
| FLAG '(' expr ',' INTNUM ')' OVER '(' { AddWindowSpec(EXPR_WIN_LAG, $3); SetWindowOffset($5); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LAG"); $$ = expr_make_window(EXPR_WIN_LAG, $3, "LAG"); }
| FLAG '(' expr ',' INTNUM ',' STRING ')' OVER '(' { AddWindowSpec(EXPR_WIN_LAG, $3); SetWindowOffset($5); SetWindowDefault($7); free($7); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LAG"); $$ = expr_make_window(EXPR_WIN_LAG, $3, "LAG"); }
| FLAG '(' expr ',' INTNUM ',' INTNUM ')' OVER '(' { AddWindowSpec(EXPR_WIN_LAG, $3); SetWindowOffset($5); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",$7); SetWindowDefault(_b2); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW LAG"); $$ = expr_make_window(EXPR_WIN_LAG, $3, "LAG"); }
/* NTILE / PERCENT_RANK / CUME_DIST */
| FNTILE '(' INTNUM ')' OVER '(' { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset($3); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = $3; $$ = e; }
| FPERCENT_RANK '(' ')' OVER '(' { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW PERCENT_RANK"); $$ = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); }
| FCUME_DIST '(' ')' OVER '(' { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); } opt_window_partition opt_window_orderby ')'
    { emit("WINDOW CUME_DIST"); $$ = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); }
;

expr: FSUBSTRING '(' expr ',' expr ',' expr ')'   { emit("CALL 3 SUBSTR"); $$ = expr_make_substring($3, $5, $7); }
| FSUBSTRING '(' expr ',' expr ')'                 { emit("CALL 2 SUBSTR"); $$ = expr_make_substring($3, $5, NULL); }
| FSUBSTRING '(' expr FROM expr ')'                { emit("CALL 2 SUBSTR"); $$ = expr_make_substring($3, $5, NULL); }
| FSUBSTRING '(' expr FROM expr FOR expr ')'       { emit("CALL 3 SUBSTR"); $$ = expr_make_substring($3, $5, $7); }
| FTRIM '(' expr ')'                               { emit("CALL 1 TRIM"); $$ = expr_make_trim(3, NULL, $3); }
| FTRIM '(' trim_ltb expr FROM expr ')'            { emit("CALL 3 TRIM"); $$ = expr_make_trim($3, $4, $6); }
| FTRIM '(' trim_ltb FROM expr ')'                 { emit("CALL 2 TRIM"); $$ = expr_make_trim($3, NULL, $5); }
| FUPPER '(' expr ')'                              { emit("CALL 1 UPPER"); $$ = expr_make_upper($3); }
| FLOWER '(' expr ')'                              { emit("CALL 1 LOWER"); $$ = expr_make_lower($3); }
| FLENGTH '(' expr ')'                             { emit("CALL 1 LENGTH"); $$ = expr_make_length($3); }
| FCONCAT '(' expr ',' expr ')'                    { emit("CALL 2 CONCAT"); $$ = expr_make_concat($3, $5); }
| FREPLACE '(' expr ',' expr ',' expr ')'          { emit("CALL 3 REPLACE"); $$ = expr_make_replace($3, $5, $7); }
| FCOALESCE '(' expr ',' expr ')'                  { emit("CALL 2 COALESCE"); $$ = expr_make_coalesce($3, $5); }
| FLEFT '(' expr ',' expr ')'                      { emit("CALL 2 LEFT"); $$ = expr_make_func2(EXPR_LEFT, $3, $5, "LEFT"); }
| FRIGHT '(' expr ',' expr ')'                     { emit("CALL 2 RIGHT"); $$ = expr_make_func2(EXPR_RIGHT, $3, $5, "RIGHT"); }
| FLPAD '(' expr ',' expr ',' expr ')'             { emit("CALL 3 LPAD"); $$ = expr_make_func3(EXPR_LPAD, $3, $5, $7, "LPAD"); }
| FRPAD '(' expr ',' expr ',' expr ')'             { emit("CALL 3 RPAD"); $$ = expr_make_func3(EXPR_RPAD, $3, $5, $7, "RPAD"); }
| FREVERSE '(' expr ')'                            { emit("CALL 1 REVERSE"); $$ = expr_make_func1(EXPR_REVERSE, $3, "REVERSE"); }
| FREPEAT '(' expr ',' expr ')'                    { emit("CALL 2 REPEAT"); $$ = expr_make_func2(EXPR_REPEAT, $3, $5, "REPEAT"); }
| FINSTR '(' expr ',' expr ')'                     { emit("CALL 2 INSTR"); $$ = expr_make_func2(EXPR_INSTR, $3, $5, "INSTR"); }
| FLOCATE '(' expr ',' expr ')'                    { emit("CALL 2 LOCATE"); $$ = expr_make_func2(EXPR_LOCATE, $3, $5, "LOCATE"); }
| FABS '(' expr ')'                                { emit("CALL 1 ABS"); $$ = expr_make_func1(EXPR_ABS, $3, "ABS"); }
| FCEIL '(' expr ')'                               { emit("CALL 1 CEIL"); $$ = expr_make_func1(EXPR_CEIL, $3, "CEIL"); }
| FFLOOR '(' expr ')'                              { emit("CALL 1 FLOOR"); $$ = expr_make_func1(EXPR_FLOOR, $3, "FLOOR"); }
| FROUND '(' expr ',' expr ')'                     { emit("CALL 2 ROUND"); $$ = expr_make_func2(EXPR_ROUND, $3, $5, "ROUND"); }
| FROUND '(' expr ')'                              { emit("CALL 1 ROUND"); $$ = expr_make_func1(EXPR_ROUND, $3, "ROUND"); }
| FPOWER '(' expr ',' expr ')'                     { emit("CALL 2 POWER"); $$ = expr_make_func2(EXPR_POWER, $3, $5, "POWER"); }
| FSQRT '(' expr ')'                               { emit("CALL 1 SQRT"); $$ = expr_make_func1(EXPR_SQRT, $3, "SQRT"); }
| FMOD '(' expr ',' expr ')'                       { emit("CALL 2 MOD"); $$ = expr_make_func2(EXPR_MODFN, $3, $5, "MOD"); }
| FRAND '(' ')'                                    { emit("CALL 0 RAND"); $$ = expr_make_func0(EXPR_RAND, "RAND"); }
| FLOG '(' expr ')'                                { emit("CALL 1 LOG"); $$ = expr_make_func1(EXPR_LOG, $3, "LOG"); }
| FLOG10 '(' expr ')'                              { emit("CALL 1 LOG10"); $$ = expr_make_func1(EXPR_LOG10, $3, "LOG10"); }
| FSIGN '(' expr ')'                               { emit("CALL 1 SIGN"); $$ = expr_make_func1(EXPR_SIGN, $3, "SIGN"); }
| FPI '(' ')'                                      { emit("CALL 0 PI"); $$ = expr_make_func0(EXPR_PI, "PI"); }
/* Date functions */
| FNOW '(' ')'                                     { emit("CALL 0 NOW"); $$ = expr_make_func0(EXPR_NOW, "NOW"); }
| FDATEDIFF '(' expr ',' expr ')'                  { emit("CALL 2 DATEDIFF"); $$ = expr_make_func2(EXPR_DATEDIFF, $3, $5, "DATEDIFF"); }
| FYEAR '(' expr ')'                               { emit("CALL 1 YEAR"); $$ = expr_make_func1(EXPR_YEAR, $3, "YEAR"); }
| FMONTH '(' expr ')'                              { emit("CALL 1 MONTH"); $$ = expr_make_func1(EXPR_MONTH, $3, "MONTH"); }
| FDAY '(' expr ')'                                { emit("CALL 1 DAY"); $$ = expr_make_func1(EXPR_DAY, $3, "DAY"); }
| FHOUR '(' expr ')'                               { emit("CALL 1 HOUR"); $$ = expr_make_func1(EXPR_HOUR, $3, "HOUR"); }
| FMINUTE '(' expr ')'                             { emit("CALL 1 MINUTE"); $$ = expr_make_func1(EXPR_MINUTE, $3, "MINUTE"); }
| FSECOND '(' expr ')'                             { emit("CALL 1 SECOND"); $$ = expr_make_func1(EXPR_SECOND, $3, "SECOND"); }
/* JSON functions (MySQL-compatible) */
| FJSON_EXTRACT '(' expr ',' expr ')'              { emit("CALL 2 JSON_EXTRACT"); $$ = expr_make_func2(EXPR_JSON_EXTRACT, $3, $5, "JSON_EXTRACT"); }
| FJSON_UNQUOTE '(' expr ')'                       { emit("CALL 1 JSON_UNQUOTE"); $$ = expr_make_func1(EXPR_JSON_UNQUOTE, $3, "JSON_UNQUOTE"); }
| FJSON_TYPE '(' expr ')'                           { emit("CALL 1 JSON_TYPE"); $$ = expr_make_func1(EXPR_JSON_TYPE, $3, "JSON_TYPE"); }
| FJSON_LENGTH '(' expr ')'                         { emit("CALL 1 JSON_LENGTH"); $$ = expr_make_func1(EXPR_JSON_LENGTH, $3, "JSON_LENGTH"); }
| FJSON_DEPTH '(' expr ')'                          { emit("CALL 1 JSON_DEPTH"); $$ = expr_make_func1(EXPR_JSON_DEPTH, $3, "JSON_DEPTH"); }
| FJSON_VALID '(' expr ')'                          { emit("CALL 1 JSON_VALID"); $$ = expr_make_func1(EXPR_JSON_VALID, $3, "JSON_VALID"); }
| FJSON_KEYS '(' expr ')'                           { emit("CALL 1 JSON_KEYS"); $$ = expr_make_func1(EXPR_JSON_KEYS, $3, "JSON_KEYS"); }
| FJSON_PRETTY '(' expr ')'                         { emit("CALL 1 JSON_PRETTY"); $$ = expr_make_func1(EXPR_JSON_PRETTY, $3, "JSON_PRETTY"); }
| FJSON_QUOTE '(' expr ')'                          { emit("CALL 1 JSON_QUOTE"); $$ = expr_make_func1(EXPR_JSON_QUOTE, $3, "JSON_QUOTE"); }
| FJSON_SET '(' expr ',' expr ',' expr ')'          { emit("CALL 3 JSON_SET"); $$ = expr_make_func3(EXPR_JSON_SET, $3, $5, $7, "JSON_SET"); }
| FJSON_INSERT '(' expr ',' expr ',' expr ')'       { emit("CALL 3 JSON_INSERT"); $$ = expr_make_func3(EXPR_JSON_INSERT, $3, $5, $7, "JSON_INSERT"); }
| FJSON_REPLACE '(' expr ',' expr ',' expr ')'      { emit("CALL 3 JSON_REPLACE"); $$ = expr_make_func3(EXPR_JSON_REPLACE, $3, $5, $7, "JSON_REPLACE"); }
| FJSON_REMOVE '(' expr ',' expr ')'                { emit("CALL 2 JSON_REMOVE"); $$ = expr_make_func2(EXPR_JSON_REMOVE, $3, $5, "JSON_REMOVE"); }
| FJSON_CONTAINS '(' expr ',' expr ')'              { emit("CALL 2 JSON_CONTAINS"); $$ = expr_make_func2(EXPR_JSON_CONTAINS, $3, $5, "JSON_CONTAINS"); }
| FJSON_CONTAINS_PATH '(' expr ',' expr ',' expr ')' { emit("CALL 3 JSON_CONTAINS_PATH"); $$ = expr_make_func3(EXPR_JSON_CONTAINS_PATH, $3, $5, $7, "JSON_CONTAINS_PATH"); }
| FJSON_SEARCH '(' expr ',' expr ',' expr ')'       { emit("CALL 3 JSON_SEARCH"); $$ = expr_make_func3(EXPR_JSON_SEARCH, $3, $5, $7, "JSON_SEARCH"); }
| FJSON_OBJECT '(' expr ',' expr ')'                { emit("CALL 2 JSON_OBJECT"); $$ = expr_make_func2(EXPR_JSON_OBJECT, $3, $5, "JSON_OBJECT"); }
| FJSON_OBJECT '(' expr ',' expr ',' expr ',' expr ')' { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, $3, $5, "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, $7, $9, "JSON_OBJECT"); $$ = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); }
| FJSON_ARRAY '(' expr ')'                          { emit("CALL 1 JSON_ARRAY"); $$ = expr_make_func1(EXPR_JSON_ARRAY, $3, "JSON_ARRAY"); }
| FJSON_ARRAY '(' expr ',' expr ')'                 { emit("CALL 2 JSON_ARRAY"); $$ = expr_make_func2(EXPR_JSON_ARRAY, $3, $5, "JSON_ARRAY"); }
| FJSON_ARRAY '(' expr ',' expr ',' expr ')'        { emit("CALL 3 JSON_ARRAY"); $$ = expr_make_func3(EXPR_JSON_ARRAY, $3, $5, $7, "JSON_ARRAY"); }
| FJSON_ARRAYAGG '(' expr ')'                       { emit("CALL 1 JSON_ARRAYAGG"); $$ = expr_make_func1(EXPR_JSON_ARRAYAGG, $3, "JSON_ARRAYAGG"); }
/* Sequence functions */
| FNEXTVAL '(' expr ')'                            { emit("CALL 1 NEXTVAL"); $$ = expr_make_func1(EXPR_NEXTVAL, $3, "NEXTVAL"); }
| FCURRVAL '(' expr ')'                            { emit("CALL 1 CURRVAL"); $$ = expr_make_func1(EXPR_CURRVAL, $3, "CURRVAL"); }
| FSETVAL '(' expr ',' expr ')'                    { emit("CALL 2 SETVAL"); $$ = expr_make_func2(EXPR_SETVAL, $3, $5, "SETVAL"); }
| FSETVAL '(' expr ',' expr ',' expr ')'           { emit("CALL 3 SETVAL"); $$ = expr_make_func3(EXPR_SETVAL, $3, $5, $7, "SETVAL"); }
| FLASTVAL '(' ')'                                 { emit("CALL 0 LASTVAL"); $$ = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); }
/* CAST / CONVERT */
| FCAST '(' expr AS data_type ')'                  { emit("CAST %d", $5); ExprNode *e = expr_make_func1(EXPR_CAST, $3, "CAST"); if(e) e->val.intval = $5; $$ = e; }
| FCONVERT '(' expr ',' data_type ')'              { emit("CONVERT %d", $5); ExprNode *e = expr_make_func1(EXPR_CAST, $3, "CONVERT"); if(e) e->val.intval = $5; $$ = e; }
/* NULLIF / IFNULL / IF */
| FNULLIF '(' expr ',' expr ')'                    { emit("CALL 2 NULLIF"); $$ = expr_make_func2(EXPR_NULLIF, $3, $5, "NULLIF"); }
| FIFNULL '(' expr ',' expr ')'                    { emit("CALL 2 IFNULL"); $$ = expr_make_func2(EXPR_IFNULL, $3, $5, "IFNULL"); }
| FIF '(' expr ',' expr ',' expr ')'               { emit("CALL 3 IF"); $$ = expr_make_func3(EXPR_IF, $3, $5, $7, "IF"); }
/* IS UNKNOWN → alias for IS NULL */
| expr IS UNKNOWN                                   { emit("ISUNKNOWN"); $$ = expr_make_is_null($1); }
| FCONCAT '(' expr ',' expr ',' expr ')'           { emit("CALL 3 CONCAT"); $$ = expr_make_concat(expr_make_concat($3, $5), $7); }
| FCONCAT '(' expr ',' expr ',' expr ',' expr ')'  { emit("CALL 4 CONCAT"); $$ = expr_make_concat(expr_make_concat(expr_make_concat($3, $5), $7), $9); }
| FGEN_RANDOM_UUID '(' ')'                         {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        $$ = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate($$, NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    }
| FGEN_RANDOM_UUID_V7 '(' ')'                      {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        $$ = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate($$, NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    }
| FSNOWFLAKE_ID '(' ')'                            {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        $$ = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate($$, NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    }
| FLAST_INSERT_ID '(' ')'                          {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        $$ = expr_make_last_insert_id();
                                                    }
| FSCOPE_IDENTITY '(' ')'                          {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        $$ = expr_make_last_insert_id();
                                                    }
| FAT_IDENTITY                                     {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        $$ = expr_make_last_insert_id();
                                                    }
| FAT_LAST_INSERT_ID                               {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        $$ = expr_make_last_insert_id();
                                                    }
| FEVO_SLEEP '(' expr ')'                          {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        $$ = expr_make_evo_sleep($3);
                                                    }
| FEVO_JITTER '(' expr ',' expr ')'                {
                                                        emit("CALL 2 EVO_JITTER");
                                                        $$ = expr_make_evo_jitter($3, $5);
                                                    }
;

trim_ltb: LEADING								{ emit("NUMBER 1"); $$ = 1; }
| TRAILING									{ emit("NUMBER 2"); $$ = 2; }
| BOTH										{ emit("NUMBER 3"); $$ = 3; }
;

expr: FDATE_ADD '(' expr ',' interval_exp ')'
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        $$ = expr_make_func3(EXPR_DATE_ADD, $3, $5, NULL, "DATE_ADD");
    }
| FDATE_SUB '(' expr ',' interval_exp ')'
    {
        emit("CALL 3 DATE_SUB");
        $$ = expr_make_func3(EXPR_DATE_SUB, $3, $5, NULL, "DATE_SUB");
    }
;

interval_exp: INTERVAL expr YEAR                      { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "YEAR"); }
| INTERVAL expr DAY_HOUR                              { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "DAY"); }
| INTERVAL expr DAY_MICROSECOND                       { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "DAY"); }
| INTERVAL expr DAY_MINUTE                            { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "DAY"); }
| INTERVAL expr DAY_SECOND                            { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "DAY"); }
| INTERVAL expr YEAR_MONTH                            { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "MONTH"); }
| INTERVAL expr HOUR_MICROSECOND                      { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "HOUR"); }
| INTERVAL expr HOUR_MINUTE                           { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "HOUR"); }
| INTERVAL expr HOUR_SECOND                           { $$ = $2; if ($$) snprintf($$->display, sizeof($$->display), "HOUR"); }
;

expr: CASE expr case_list END
    { emit("CASEVAL %d 0", $3); $$ = expr_make_case_simple($2, g_expr.caseWhenCount, NULL); }
| CASE expr case_list ELSE expr END
    { emit("CASEVAL %d 1", $3); $$ = expr_make_case_simple($2, g_expr.caseWhenCount, $5); }
| CASE case_list END
    { emit("CASE %d 0", $2); $$ = expr_make_case_searched(g_expr.caseWhenCount, NULL); }
| CASE case_list ELSE expr END
    { emit("CASE %d 1", $2); $$ = expr_make_case_searched(g_expr.caseWhenCount, $4); }
;

case_list: WHEN expr THEN expr
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = $2;
        g_expr.caseThenExprs[0] = $4;
        g_expr.caseWhenCount = 1;
        $$ = 1;
    }
| case_list WHEN expr THEN expr
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = $3;
            g_expr.caseThenExprs[g_expr.caseWhenCount] = $5;
            g_expr.caseWhenCount++;
        }
        $$ = $1+1;
    }
;

expr: expr LIKE expr								{ emit("LIKE"); $$ = expr_make_like($1, $3); }
| expr NOT LIKE expr								{ emit("NOTLIKE"); $$ = expr_make_not_like($1, $4); }
;

expr: expr REGEXP expr								{ emit("REGEXP"); $$ = expr_make_func2(EXPR_REGEXP, $1, $3, "REGEXP"); }
| expr NOT REGEXP expr								{ emit("REGEXP NOT"); $$ = expr_make_func2(EXPR_NOT_REGEXP, $1, $4, "NOT REGEXP"); }
;

expr: CURRENT_TIMESTAMP
    {
        emit("NOW");
        $$ = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate($$, NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    }
| CURRENT_DATE
    {
        emit("NOW");
        $$ = expr_make_current_date();
        char _ts[64];
        expr_evaluate($$, NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    }
| CURRENT_TIME
    {
        emit("NOW");
        $$ = expr_make_current_time();
        char _ts[64];
        expr_evaluate($$, NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    }
;

/* statements: select statement */
stmt: select_stmt
    {
        emit("STMT");
        if ($1 == 1)
            SelectAll();
        else
            SelectProcess();
    }
;

select_stmt: SELECT select_opts select_expr_list                                { emit("SELECTNODATA %d %d", $2, $3); g_sel.distinct = ($2 & 02) ? 1 : 0; } ;
| SELECT select_opts select_expr_list
FROM table_references
opt_where opt_groupby opt_having opt_orderby opt_limit
opt_for_update opt_into_list
    {
        emit("SELECT %d %d %d", $2, $3, $5);
        g_sel.distinct = ($2 & 02) ? 1 : 0;
        if ($3 == 3)
            $$ = 1;
        else
            ;
    }
/* SELECT ... INTO table_name FROM ... — PostgreSQL-style SELECT INTO */
| SELECT select_opts select_expr_list
INTO NAME
FROM table_references
opt_where opt_groupby opt_having opt_orderby opt_limit
    {
        emit("SELECTINTO %d %d %s %d", $2, $3, $5, $7);
        g_sel.distinct = ($2 & 02) ? 1 : 0;
        g_create.ctasMode = CTAS_INFER;
        strncpy(g_create.ctasTableName, $5, 255);
        g_create.ctasTableName[255] = '\0';
        g_create.ctasIfNotExists = 0;
        g_create.ctasTemporary = 0;
        free($5);
    }
;

opt_where: /* nil */
| WHERE expr									{ emit("WHERE"); g_expr.whereExpr = $2; };
opt_groupby: /* nil */
| GROUP BY groupby_list opt_with_rollup                                         { emit("GROUPBYLIST %d %d", $3, $4); }
;

groupby_list: expr opt_asc_desc   {
        emit("GROUPBY %d", $2);
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = $1;
        $$ = 1;
    }
| groupby_list ',' expr opt_asc_desc  {
        emit("GROUPBY %d", $4);
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = $3;
        $$ = $1 + 1;
    }
;

opt_asc_desc: /* nil */								{ $$ = 0; }
| ASC										{ $$ = 0; }
| DESC										{ $$ = 1; }
;

opt_with_rollup: /* nil */							{ $$ = 0; }
| WITH ROLLUP									{ $$ = 1; }
;

opt_having: /* nil */
| HAVING expr									{ emit("HAVING"); g_expr.havingExpr = $2; }
;

/* window function clauses */
opt_window_partition: /* nil */
| PARTITION BY window_partition_list
;

window_partition_list: NAME
    { emit("WINDOW PARTITION %s", $1); AddWindowPartitionCol($1); free($1); }
| window_partition_list ',' NAME
    { emit("WINDOW PARTITION %s", $3); AddWindowPartitionCol($3); free($3); }
;

opt_window_orderby: /* nil */
| ORDER BY window_orderby_list
;

window_orderby_list: NAME opt_asc_desc
    { emit("WINDOW ORDER %s %d", $1, $2); AddWindowOrderCol($1, $2); free($1); }
| window_orderby_list ',' NAME opt_asc_desc
    { emit("WINDOW ORDER %s %d", $3, $4); AddWindowOrderCol($3, $4); free($3); }
;

opt_orderby: /* nil */
| ORDER BY orderby_list
;

orderby_list: orderby_item
| orderby_list ',' orderby_item
;

orderby_item: NAME opt_asc_desc
    {
        emit("ORDERBY %s %d", $1, $2);
        AddOrderByColumn($1, $2);
        free($1);
    }
| NAME '.' NAME opt_asc_desc
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", $1, $3);
        emit("ORDERBY %s %d", qn, $4);
        AddOrderByColumn(qn, $4);
        free($1); free($3);
    }
| INTNUM opt_asc_desc
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", $1);
        emit("ORDERBY %s %d", buf, $2);
        AddOrderByColumn(buf, $2);
    }
;

opt_limit: /* nil */ { /* no limit */ }
| LIMIT expr                                               { emit("LIMIT 1"); g_expr.limitExpr = $2; }
| LIMIT expr ',' expr								{ emit("LIMIT 2"); g_expr.offsetExpr = $2; g_expr.limitExpr = $4; }
| LIMIT expr OFFSET expr							{ emit("LIMIT OFFSET"); g_expr.limitExpr = $2; g_expr.offsetExpr = $4; }
;

opt_for_update: /* nil */                                  { /* no locking */ }
| FOR UPDATE                                               { g_sel.forUpdate = 1; emit("FOR UPDATE"); }
| FOR SHARE                                                { g_sel.forUpdate = 2; emit("FOR SHARE"); }
| FOR UPDATE SKIP LOCKED                                   { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); }
| FOR SHARE SKIP LOCKED                                    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); }
;

opt_into_list: /* nil */
| INTO column_list								{ emit("INTO %d", $2); }
;

column_list: NAME								{ emit("COLUMN %s", $1); free($1); $$ = 1; }
| column_list ',' NAME								{ emit("COLUMN %s", $3); free($3); $$ = $1 + 1; }
;

select_opts:									{ $$ = 0; }
| select_opts ALL								{ if($1 & 01) yyerror(scanner, "duplicate ALL option"); $$ = $1 | 01; }
| select_opts DISTINCT								{ if($1 & 02) yyerror(scanner, "duplicate DISTINCT option"); $$ = $1 | 02; }
| select_opts DISTINCTROW							{ if($1 & 04) yyerror(scanner, "duplicate DISTINCTROW option"); $$ = $1 | 04; }
| select_opts HIGH_PRIORITY							{ if($1 & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); $$ = $1 | 010; }
| select_opts STRAIGHT_JOIN							{ if($1 & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); $$ = $1 | 020; }
| select_opts SQL_SMALL_RESULT                                                  { if($1 & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); $$ = $1 | 040; }
| select_opts SQL_BIG_RESULT                                                    { if($1 & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); $$ = $1 | 0100; }
| select_opts SQL_CALC_FOUND_ROWS                                               { if($1 & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); $$ = $1 | 0200; }
;

select_expr_list: select_expr                                                   { $$ = 1; }
| select_expr_list ',' select_expr                                              {$$ = $1 + 1; }
| '*'
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        $$ = 3;
    }
;

select_expr: expr opt_as_alias
    {
        expr_store_select($1, g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    }
;
opt_as_alias: AS NAME								{ emit ("ALIAS %s", $2); strncpy(g_currentAlias, $2, sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free($2); }
| NAME										{ emit ("ALIAS %s", $1); strncpy(g_currentAlias, $1, sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free($1); }
| /* nil */									{ g_currentAlias[0] = '\0'; }
;

table_references: table_reference                                               { $$ = 1; }
| table_references ',' table_reference                                          { $$ = $1 + 1; }
;

table_reference: table_factor
| join_table
;

table_factor:
NAME opt_as_alias index_hint
    {
        emit("TABLE %s", $1);
        GetSelTableName($1);
        if (g_qctx) AddJoinTable($1, g_currentAlias);
        free($1);
    }
/* Task 92 — Feature #63: FROM ONLY parent suppresses inheritance union. */
| ONLY NAME opt_as_alias index_hint
    {
        emit("TABLE ONLY %s", $2);
        GetSelTableName($2);
        if (g_qctx) {
            AddJoinTable($2, g_currentAlias);
            g_sel.onlyParent = 1;
        }
        free($2);
    }
| NAME '.' NAME opt_as_alias index_hint                                         { emit("TABLE %s.%s", $1, $3); if (g_qctx) AddJoinTable($3, g_currentAlias); free($1); free($3); }
| table_subquery opt_as NAME                                                    { emit("SUBQUERYAS %s", $3); free($3); }
| lateral_subquery opt_as NAME
    {
        emit("LATERAL %s", $3);
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, $3);
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free($3);
    }
| FUNNEST '(' expr ')'
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable($3, "unnest");
    }
| FUNNEST '(' expr ')' opt_as NAME
    {
        emit("UNNEST %s", $6);
        if (g_qctx) AddUnnestTable($3, $6);
        free($6);
    }
| FUNNEST '(' expr ')' opt_as NAME '(' NAME ')'
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", $8);
        if (g_qctx) AddUnnestTable($3, $8);
        free($6); free($8);
    }
| '(' table_references ')'							{ emit("TABLEREFERENCES %d", $2); }
;

lateral_subquery:
LATERAL '(' {
        g_subq_mark = g_lex_pos;
        g_in_subquery = 1;
        /* The inner select_stmt parser rules unconditionally write to
         * g_expr.{whereExpr,limitExpr,offsetExpr,havingExpr,selectExprs[],
         * groupByExprs[],windowSpecs[]} with no g_in_subquery guard.
         * Snapshot every slot the inner parse can reach so the outer
         * query's state isn't corrupted. */
        g_lateral_saved_whereExpr  = g_expr.whereExpr;
        g_lateral_saved_limitExpr  = g_expr.limitExpr;
        g_lateral_saved_offsetExpr = g_expr.offsetExpr;
        g_lateral_saved_havingExpr = g_expr.havingExpr;
        g_lateral_saved_selectExprCount = g_expr.selectExprCount;
        g_lateral_saved_groupByCount    = g_expr.groupByCount;
        g_lateral_saved_windowSpecCount = g_expr.windowSpecCount;
        memcpy(g_lateral_saved_selectExprs, g_expr.selectExprs,
               sizeof(g_lateral_saved_selectExprs));
        memcpy(g_lateral_saved_groupByExprs, g_expr.groupByExprs,
               sizeof(g_lateral_saved_groupByExprs));
    } select_stmt ')'
    {
        g_in_subquery = 0;
        /* Restore outer slots; the lateral's SQL text is captured separately
         * and re-parsed at execution time by the join engine. */
        g_expr.whereExpr  = g_lateral_saved_whereExpr;
        g_expr.limitExpr  = g_lateral_saved_limitExpr;
        g_expr.offsetExpr = g_lateral_saved_offsetExpr;
        g_expr.havingExpr = g_lateral_saved_havingExpr;
        g_expr.selectExprCount = g_lateral_saved_selectExprCount;
        g_expr.groupByCount    = g_lateral_saved_groupByCount;
        g_expr.windowSpecCount = g_lateral_saved_windowSpecCount;
        memcpy(g_expr.selectExprs, g_lateral_saved_selectExprs,
               sizeof(g_lateral_saved_selectExprs));
        memcpy(g_expr.groupByExprs, g_lateral_saved_groupByExprs,
               sizeof(g_lateral_saved_groupByExprs));
        if (g_pending_lateral_sql) free(g_pending_lateral_sql);
        g_pending_lateral_sql = evo_extract_subq_sql();
    }
;

opt_as: AS
| /* nil */
;

join_table:
table_reference opt_inner_cross JOIN table_factor opt_join_condition
										{ emit("JOIN %d", 100+$2); SetLastJoinType(100+$2); }
| table_reference STRAIGHT_JOIN table_factor
										{ emit("JOIN %d", 200); SetLastJoinType(200); }
| table_reference STRAIGHT_JOIN table_factor ON expr
										{ emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr($5); }
| table_reference left_or_right opt_outer JOIN table_factor join_condition
										{ emit("JOIN %d", 300+$2+$3); SetLastJoinType(300+$2+$3); }
| table_reference NATURAL opt_left_or_right_outer JOIN table_factor
										{ emit("JOIN %d", 400+$3); SetLastJoinType(400+$3); }
;

opt_inner_cross: /* nil */							{ $$ = 0; }
| INNER										{ $$ = 1; }
| CROSS										{ $$ = 2; }
;

opt_outer: /* nil */								{ $$ = 0; }
| OUTER										{$$ = 4; }
;

left_or_right: LEFT								{ $$ = 1; }
| RIGHT										{ $$ = 2; }
;

opt_left_or_right_outer: LEFT opt_outer                                         { $$ = 1 + $2; }
| RIGHT opt_outer								{ $$ = 2 + $2; }
| /* nil */									{ $$ = 0; }
;

opt_join_condition: /* nil */
| join_condition
;

join_condition: ON expr								{ emit("ONEXPR"); SetJoinOnExpr($2); }
| USING '(' column_list ')'							{ emit("USING %d", $3); }
;

index_hint:
USE KEY opt_for_join '(' index_list ')'
										{ emit("INDEXHINT %d %d", $5, 10+$3); }
| IGNORE KEY opt_for_join '(' index_list ')'
										{ emit("INDEXHINT %d %d", $5, 20+$3); }
| FORCE KEY opt_for_join '(' index_list ')'
										{ emit("INDEXHINT %d %d", $5, 30+$3); }
| /* nil */
;

opt_for_join: FOR JOIN								{ $$ = 1; }
| /* nil */ { $$ = 0; }
;

index_list: NAME								{ emit("INDEX %s", $1); free($1); $$ = 1; }
| index_list ',' NAME								{ emit("INDEX %s", $3); free($3); $$ = $1 + 1; }
;

table_subquery: '(' select_stmt ')'                                             { emit("SUBQUERY"); }
;

/* statements: delete statement */
stmt: delete_stmt
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    }
;

/* single table delete */
delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit opt_returning
    {
        emit("DELETEONE %d %s", $2, $4);
        GetDelTableName($4);
        free($4);
    }
;

delete_opts: delete_opts LOW_PRIORITY                                           { $$ = $1 + 01; }
| delete_opts QUICK								{ $$ = $1 + 02; }
| delete_opts IGNORE								{ $$ = $1 + 04; }
| /* nil */									{ $$ = 0; }
;

/* multitable delete, first version */
delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where
    { emit("DELETEMULTI %d %d %d", $2, $3, $5); if (g_qctx) SetMultiDelete(); }
;

delete_list: NAME opt_dot_star
    { emit("TABLE %s", $1); if (g_qctx) AddDeleteTarget($1); free($1); $$ = 1; }
| delete_list ',' NAME opt_dot_star
    { emit("TABLE %s", $3); if (g_qctx) AddDeleteTarget($3); free($3); $$ = $1 + 1; }
;

opt_dot_star: /* nil */ | '.' '*' ;
/* multitable delete, second version */
delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where
    { emit("DELETEMULTI %d %d %d", $2, $4, $6); if (g_qctx) SetMultiDelete(); }
;

/** drop table **/
stmt: drop_table_stmt
    {
        emit("STMT");
        DropTableProcess();
    }
;

drop_table_stmt: DROP TABLE NAME opt_drop_cascade
    {
        emit("DROPTABLE %s", $3);
        g_drop.ifExists = 0;
        GetDropTableName($3);
        free($3);
    }
| DROP TABLE IF EXISTS NAME opt_drop_cascade
    {
        emit("DROPTABLE IF EXISTS %s", $5);
        g_drop.ifExists = 1;
        GetDropTableName($5);
        free($5);
    }
;

/* Task 92 — Feature #63: DROP TABLE ... CASCADE cascades through the
 * inheritance tree. RESTRICT is the default and errors out if children
 * exist. */
opt_drop_cascade: /* empty */
| CASCADE      { g_drop.dropCascade = 1; }
| RESTRICT     { g_drop.dropCascade = 0; }
;

/** create index **/
stmt: create_index_stmt
    {
        emit("STMT");
        CreateIndexProcess();
    }
;

create_index_stmt: CREATE INDEX NAME ON NAME '(' index_col_list ')'
    {
        emit("CREATEINDEX %s ON %s", $3, $5);
        SetIndexInfo($3, $5, "");
        free($3);
        free($5);
    }
| CREATE FULLTEXT INDEX NAME ON NAME '(' index_col_list ')'
    {
        emit("CREATEINDEX FT %s ON %s", $4, $6);
        SetIndexInfo($4, $6, "");
        SetIndexFulltext();
        free($4);
        free($6);
    }
| CREATE INDEX IF EXISTS NAME ON NAME '(' index_col_list ')'
    {
        /* NOTE: lexer matches "NOT EXISTS" as single EXISTS token (subtok=1),
         * so "IF NOT EXISTS" appears as "IF EXISTS" in grammar */
        emit("CREATEINDEX IF NOT EXISTS %s ON %s", $5, $7);
        SetIndexIfNotExists();
        SetIndexInfo($5, $7, "");
        free($5);
        free($7);
    }
| CREATE UNIQUE INDEX NAME ON NAME '(' index_col_list ')'
    {
        emit("CREATEUNIQUEINDEX %s ON %s", $4, $6);
        SetIndexUnique();
        SetIndexInfo($4, $6, "");
        free($4);
        free($6);
    }
| CREATE UNIQUE INDEX IF EXISTS NAME ON NAME '(' index_col_list ')'
    {
        /* NOTE: lexer matches "NOT EXISTS" as single EXISTS token (subtok=1) */
        emit("CREATEUNIQUEINDEX IF NOT EXISTS %s ON %s", $6, $8);
        SetIndexUnique();
        SetIndexIfNotExists();
        SetIndexInfo($6, $8, "");
        free($6);
        free($8);
    }
| CREATE INDEX NAME ON NAME USING HASH '(' index_col_list ')'
    {
        emit("CREATEHASHINDEX %s ON %s", $3, $5);
        SetIndexUsingHash();
        SetIndexInfo($3, $5, "");
        free($3);
        free($5);
    }
| CREATE INDEX IF EXISTS NAME ON NAME USING HASH '(' index_col_list ')'
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", $5, $7);
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo($5, $7, "");
        free($5);
        free($7);
    }
| CREATE UNIQUE INDEX NAME ON NAME USING HASH '(' index_col_list ')'
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", $4, $6);
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo($4, $6, "");
        free($4);
        free($6);
    }
| CREATE UNIQUE INDEX IF EXISTS NAME ON NAME USING HASH '(' index_col_list ')'
    {
        emit("CREATEUNIQUEHASHINDEX IF NOT EXISTS %s ON %s", $6, $8);
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo($6, $8, "");
        free($6);
        free($8);
    }
| CREATE INDEX CONCURRENTLY NAME ON NAME '(' index_col_list ')'
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", $4, $6);
        SetIndexConcurrent();
        SetIndexInfo($4, $6, "");
        free($4);
        free($6);
    }
| CREATE INDEX CONCURRENTLY IF EXISTS NAME ON NAME '(' index_col_list ')'
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", $6, $8);
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo($6, $8, "");
        free($6);
        free($8);
    }
| CREATE UNIQUE INDEX CONCURRENTLY NAME ON NAME '(' index_col_list ')'
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", $5, $7);
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo($5, $7, "");
        free($5);
        free($7);
    }
| CREATE UNIQUE INDEX CONCURRENTLY IF EXISTS NAME ON NAME '(' index_col_list ')'
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", $7, $9);
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo($7, $9, "");
        free($7);
        free($9);
    }
| CREATE INDEX CONCURRENTLY NAME ON NAME USING HASH '(' index_col_list ')'
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", $4, $6);
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo($4, $6, "");
        free($4);
        free($6);
    }
| CREATE UNIQUE INDEX CONCURRENTLY NAME ON NAME USING HASH '(' index_col_list ')'
    {
        emit("CREATEUNIQUEHASHINDEX CONCURRENTLY %s ON %s", $5, $7);
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo($5, $7, "");
        free($5);
        free($7);
    }
;

index_col_list: NAME
    {
        SetIndexAddColumn($1);
        free($1);
    }
| index_col_list ',' NAME
    {
        SetIndexAddColumn($3);
        free($3);
    }
| index_expr
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    }
;

index_expr: FUPPER '(' NAME ')'
    {
        emit("IDX_EXPR UPPER(%s)", $3);
        SetIndexAddColumn($3);
        SetIndexExpression(expr_make_upper(expr_make_column($3)));
        free($3);
    }
| FLOWER '(' NAME ')'
    {
        emit("IDX_EXPR LOWER(%s)", $3);
        SetIndexAddColumn($3);
        SetIndexExpression(expr_make_lower(expr_make_column($3)));
        free($3);
    }
| FLENGTH '(' NAME ')'
    {
        emit("IDX_EXPR LENGTH(%s)", $3);
        SetIndexAddColumn($3);
        SetIndexExpression(expr_make_length(expr_make_column($3)));
        free($3);
    }
| FCONCAT '(' NAME ',' NAME ')'
    {
        emit("IDX_EXPR CONCAT(%s,%s)", $3, $5);
        SetIndexAddColumn($3);
        SetIndexExpression(expr_make_concat(expr_make_column($3), expr_make_column($5)));
        free($3); free($5);
    }
;

/** drop index **/
stmt: drop_index_stmt
    {
        emit("STMT");
        DropIndexProcess();
    }
;

drop_index_stmt: DROP INDEX NAME
    {
        emit("DROPINDEX %s", $3);
        SetDropIndexName($3);
        free($3);
    }
;

/** truncate table **/
stmt: truncate_table_stmt opt_truncate_options
    {
        emit("STMT");
        TruncateTableProcess();
    }
;

truncate_table_stmt: TRUNCATE TABLE NAME
    {
        emit("TRUNCATETABLE %s", $3);
        GetDropTableName($3);
        free($3);
    }
| TRUNCATE TABLE NAME ',' truncate_extra_tables
    {
        emit("TRUNCATETABLE %s (+multi)", $3);
        GetDropTableName($3);
        free($3);
    }
;

truncate_extra_tables: NAME
    {
        emit("TRUNCATE_EXTRA %s", $1);
        TruncateAddTable($1);
        free($1);
    }
| truncate_extra_tables ',' NAME
    {
        emit("TRUNCATE_EXTRA %s", $3);
        TruncateAddTable($3);
        free($3);
    }
;

opt_truncate_options: /* empty */
| opt_truncate_options CASCADE                  { emit("TRUNCATE CASCADE"); TruncateSetCascade(); }
| opt_truncate_options RESTRICT                 { emit("TRUNCATE RESTRICT"); }
| opt_truncate_options RESTART IDENTITY         { emit("TRUNCATE RESTART IDENTITY"); }
| opt_truncate_options CONTINUE IDENTITY        { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); }
;

/** LISTEN / NOTIFY / UNLISTEN — asynchronous pub/sub (Task 91 — Feature #62)
 *
 *  LISTEN channel
 *  LISTEN channel WITH (self = true|false)
 *  UNLISTEN channel
 *  UNLISTEN *
 *  NOTIFY channel
 *  NOTIFY channel, 'payload'
 *  NOTIFY channel, <expr>       (future: arbitrary expression payload)
 *
 *  The parser stages the command into g_notify; the executor fires it
 *  (immediate for LISTEN/UNLISTEN, commit-gated for NOTIFY).
 */
stmt: listen_stmt     { emit("STMT"); }
    | unlisten_stmt   { emit("STMT"); }
    | notify_stmt     { emit("STMT"); }
;

listen_stmt: LISTEN NAME
    {
        emit("LISTEN %s", $2);
        SetListenChannel($2, 0);
        free($2);
    }
| LISTEN NAME SELF
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", $2);
        SetListenChannel($2, 1);
        free($2);
    }
;

unlisten_stmt: UNLISTEN NAME
    {
        emit("UNLISTEN %s", $2);
        SetUnlistenChannel($2);
        free($2);
    }
| UNLISTEN '*'
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    }
;

notify_stmt: NOTIFY NAME
    {
        emit("NOTIFY %s", $2);
        SetNotifyChannel($2, NULL);
        free($2);
    }
| NOTIFY NAME ',' STRING
    {
        /* Strip surrounding quotes from STRING literal */
        int slen = (int)strlen($4);
        char *payload = $4;
        if (slen >= 2 && (payload[0] == '\'' || payload[0] == '"')) {
            payload[slen - 1] = '\0';
            payload++;
        }
        emit("NOTIFY %s PAYLOAD", $2);
        SetNotifyChannel($2, payload);
        free($2); free($4);
    }
;

/** reclaim table — defragmentation **/
stmt: reclaim_table_stmt
    {
        emit("STMT");
        ReclaimTableProcess();
    }
;

reclaim_table_stmt: RECLAIM TABLE NAME
    {
        emit("RECLAIMTABLE %s", $3);
        GetDropTableName($3);
        free($3);
    }
;

/** analyze table — collect statistics **/
stmt: analyze_table_stmt
    {
        emit("STMT");
        AnalyzeTableProcess();
    }
;

analyze_table_stmt: ANALYZE TABLE NAME
    {
        emit("ANALYZETABLE %s", $3);
        GetDropTableName($3);
        free($3);
    }
  | ANALYZE TABLE NAME '.' NAME
    {
        emit("ANALYZETABLE %s.%s", $3, $5);
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", $3, $5);
        GetDropTableName(full);
        free($3); free($5);
    }
;

/** alter table **/
stmt: alter_table_stmt                                                          { emit("STMT"); }
;

alter_table_stmt: ALTER TABLE NAME ADD CONSTRAINT NAME CHECK '(' expr ')'
    {
        emit("ALTER TABLE ADD CHECK %s %s", $3, $6);
        AlterTableAddCheckConstraint($3, $6, $9);
        free($3); free($6);
    }
| ALTER TABLE NAME ADD CONSTRAINT NAME UNIQUE '(' unique_column_list ')'
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", $3, $6);
        AlterTableAddUniqueConstraint($3, $6);
        free($3); free($6);
    }
| ALTER TABLE NAME ADD CONSTRAINT NAME FOREIGN KEY '(' fk_column_list ')' REFERENCES NAME '(' fk_ref_column_list ')' fk_actions
    {
        emit("ALTER TABLE ADD FK %s %s", $3, $6);
        strncpy(g_constr.pendingConstraintName, $6, 127);
        AlterTableAddForeignKeyConstraint($3, $13);
        free($3); free($6); free($13);
    }
| ALTER TABLE NAME ADD CONSTRAINT NAME CHECK '(' expr ')' NOT VALIDATE
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", $3, $6);
        AlterTableAddCheckConstraintNotValid($3, $6, $9);
        free($3); free($6);
    }
| ALTER TABLE NAME ADD CONSTRAINT NAME FOREIGN KEY '(' fk_column_list ')' REFERENCES NAME '(' fk_ref_column_list ')' fk_actions NOT VALIDATE
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", $3, $6);
        strncpy(g_constr.pendingConstraintName, $6, 127);
        AlterTableAddForeignKeyConstraintNotValid($3, $13);
        free($3); free($6); free($13);
    }
| ALTER TABLE NAME ADD CONSTRAINT NAME PRIMARY KEY '(' pk_column_list ')'
    {
        emit("ALTER TABLE ADD PK %s %s", $3, $6);
        AlterTableAddPrimaryKey($3, $6);
        free($3); free($6);
    }
| ALTER TABLE NAME DROP CONSTRAINT NAME
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", $3, $6);
        AlterTableDropConstraint($3, $6);
        free($3); free($6);
    }
| ALTER TABLE NAME RENAME CONSTRAINT NAME TO NAME
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", $3, $6, $8);
        AlterTableRenameConstraint($3, $6, $8);
        free($3); free($6); free($8);
    }
| ALTER TABLE NAME ENABLE CONSTRAINT NAME
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", $3, $6);
        AlterTableEnableConstraint($3, $6);
        free($3); free($6);
    }
| ALTER TABLE NAME DISABLE CONSTRAINT NAME
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", $3, $6);
        AlterTableDisableConstraint($3, $6);
        free($3); free($6);
    }
| ALTER TABLE NAME VALIDATE CONSTRAINT NAME
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", $3, $6);
        AlterTableValidateConstraint($3, $6);
        free($3); free($6);
    }
| ALTER TABLE NAME ADD COLUMN NAME data_type column_atts opt_col_position
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", $3, $6, $7);
        AlterTableAddColumn($3, $6, $7);
        free($3); free($6);
    }
| ALTER TABLE NAME DROP COLUMN NAME
    {
        emit("ALTER TABLE DROP COLUMN %s %s", $3, $6);
        AlterTableDropColumn($3, $6);
        free($3); free($6);
    }
| ALTER TABLE NAME DROP NAME
    {
        emit("ALTER TABLE DROP COLUMN %s %s", $3, $5);
        AlterTableDropColumn($3, $5);
        free($3); free($5);
    }
| ALTER TABLE NAME RENAME COLUMN NAME TO NAME
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", $3, $6, $8);
        AlterTableRenameColumn($3, $6, $8);
        free($3); free($6); free($8);
    }
| ALTER TABLE NAME RENAME NAME TO NAME
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", $3, $5, $7);
        AlterTableRenameColumn($3, $5, $7);
        free($3); free($5); free($7);
    }
| ALTER TABLE NAME MODIFY COLUMN NAME data_type column_atts opt_col_position
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", $3, $6, $7);
        AlterTableModifyColumn($3, $6, $7);
        free($3); free($6);
    }
| ALTER TABLE NAME MODIFY NAME data_type column_atts opt_col_position
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", $3, $5, $6);
        AlterTableModifyColumn($3, $5, $6);
        free($3); free($5);
    }
| ALTER TABLE NAME CHANGE COLUMN NAME NAME data_type column_atts opt_col_position
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", $3, $6, $7, $8);
        AlterTableChangeColumn($3, $6, $7, $8);
        free($3); free($6); free($7);
    }
| ALTER TABLE NAME CHANGE NAME NAME data_type column_atts opt_col_position
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", $3, $5, $6, $7);
        AlterTableChangeColumn($3, $5, $6, $7);
        free($3); free($5); free($6);
    }
;

opt_col_position: /* nil */                     { }
| FIRST                                         { if (g_qctx) g_upd.colPosition = 1; }
| AFTER NAME                                    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, $2, 127); g_upd.colPositionAfter[127] = '\0'; } free($2); }
;

stmt: insert_stmt
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    }
;

insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate opt_on_conflict opt_returning
    {
        emit("INSERTVALS %d %d %s", $2, $7, $4);
        GetInsertionTableName($4);
        free($4);
    }
| INSERT insert_opts opt_into NAME opt_col_names select_stmt
    {
        emit("INSERTSELECT %d %s", $2, $4);
        GetInsertionTableName($4);
        g_ins.insertFromSelect = 1;
        if ($6 == 1)
            SelectAll();
        else
            SelectProcess();
        free($4);
    }
;

opt_ondupupdate: /* nil */
| ONDUPLICATE KEY UPDATE { SetUpsertMode(); } upsert_asgn_list { emit("DUPUPDATE %d", $5); SetOnDupKeyUpdate(); }
;

/* PostgreSQL ON CONFLICT (Task 84 Feature #57) */
opt_on_conflict: /* nil */
| ON CONFLICT opt_conflict_target conflict_action
;

opt_conflict_target: /* nil */                  { emit("CONFTARGET *"); }
| '(' NAME ')'                                  { emit("CONFTARGET %s", $2); SetOnConflictCol($2); free($2); }
| '(' NAME ',' NAME                             { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free($2); free($4); YYERROR; }
;

conflict_action:
    DO NOTHING                                  { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); }
| DO UPDATE { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); }
  SET upsert_asgn_list                          { emit("CONFACTION UPDATE %d", $5); SetOnDupKeyUpdate(); }
;

upsert_asgn_list: NAME COMPARISON expr
    {
        if ($2 != 4) { yyerror(scanner, "bad upsert assignment to %s", $1); YYERROR; }
        emit("UPSERTSET %s", $1);
        AddUpsertSet($1, $3);
        free($1);
        $$ = 1;
    }
| upsert_asgn_list ',' NAME COMPARISON expr
    {
        if ($4 != 4) { yyerror(scanner, "bad upsert assignment to %s", $3); YYERROR; }
        emit("UPSERTSET %s", $3);
        AddUpsertSet($3, $5);
        free($3);
        $$ = $1 + 1;
    }
;

insert_opts: /* nil */								{ $$ = 0; }
| insert_opts LOW_PRIORITY							{ $$ = $1 | 01 ; }
| insert_opts DELAYED								{ $$ = $1 | 02 ; }
| insert_opts HIGH_PRIORITY							{ $$ = $1 | 04 ; }
| insert_opts IGNORE								{ $$ = $1 | 010 ; }
;

opt_into: INTO | /* nil */
;

opt_col_names: /* nil */
| '(' insert_col_list ')'						{ emit("INSERTCOLS %d", $2); }
;

insert_col_list: NAME
    {
        g_ins.columnCount = 0;
        strncpy(g_ins.columns[g_ins.columnCount], $1, 127);
        g_ins.columns[g_ins.columnCount][127] = '\0';
        g_ins.columnCount++;
        emit("COLUMN %s", $1);
        free($1);
        $$ = 1;
    }
| insert_col_list ',' NAME
    {
        if (g_ins.columnCount < 64) {
            strncpy(g_ins.columns[g_ins.columnCount], $3, 127);
            g_ins.columns[g_ins.columnCount][127] = '\0';
            g_ins.columnCount++;
        }
        emit("COLUMN %s", $3);
        free($3);
        $$ = $1 + 1;
    }
;

insert_vals_list: '(' insert_vals ')'                                           { emit("VALUES %d", $2); $$ = 1; }
| insert_vals_list ',' { InsertRowSeparator(); } '(' insert_vals ')'            { emit("VALUES %d", $5); $$ = $1 + 1; }
;
insert_vals:
expr										{ $$ = 1; }
| DEFAULT									{ emit("DEFAULT"); $$ = 1; }
| insert_vals ',' expr								{ $$ = $1 + 1; }
| insert_vals ',' DEFAULT							{ emit("DEFAULT"); $$ = $1 + 1; }
;

insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate
                                                                                { emit("INSERTASGN %d %d %s", $2, $6, $4); free($4); }
;

insert_asgn_list: NAME COMPARISON expr                                          { if ($2 != 4) { yyerror(scanner, "bad insert assignment to %s", $1); YYERROR; } emit("ASSIGN %s", $1); free($1); $$ = 1; }
| NAME COMPARISON DEFAULT							{ if ($2 != 4) { yyerror(scanner, "bad insert assignment to %s", $1); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", $1); free($1); $$ = 1; }
| insert_asgn_list ',' NAME COMPARISON expr                                     { if ($4 != 4) { yyerror(scanner, "bad insert assignment to %s", $1); YYERROR; } emit("ASSIGN %s", $3); free($3); $$ = $1 + 1; }
| insert_asgn_list ',' NAME COMPARISON DEFAULT                                  { if ($4 != 4) { yyerror(scanner, "bad insert assignment to %s", $1); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", $3); free($3); $$ = $1 + 1; }
;



/** replace just like insert **/
stmt: replace_stmt								{ emit("STMT"); InsertProcess(); }
;

replace_stmt: REPLACE insert_opts opt_into NAME
opt_col_names
VALUES insert_vals_list
opt_ondupupdate									{ emit("REPLACEVALS %d %d %s", $2, $7, $4); GetInsertionTableName($4); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free($4); }
;

replace_stmt: REPLACE insert_opts opt_into NAME
SET insert_asgn_list
opt_ondupupdate									{ emit("REPLACEASGN %d %d %s", $2, $6, $4); free($4); }
;

replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names
select_stmt
opt_ondupupdate									{ emit("REPLACESELECT %d %s", $2, $4); free($4); }
;

/** COPY — Task 85, Feature #61 **/
stmt: copy_stmt                                                                 { emit("STMT"); CopyProcess(); }
;

copy_stmt:
    COPY NAME                                   { CopyBegin($2); free($2); }
    opt_copy_cols copy_direction copy_target opt_copy_options
        { emit("COPY"); }
  ;

opt_copy_cols: /* empty */
  | '(' copy_col_list ')'
  ;
copy_col_list: NAME                             { CopyAddColumn($1); free($1); }
  | copy_col_list ',' NAME                      { CopyAddColumn($3); free($3); }
  ;

copy_direction:
    FROM                                        { CopySetDirection(EVO_COPY_DIR_FROM); }
  | TO                                          { CopySetDirection(EVO_COPY_DIR_TO); }
  ;

copy_target:
    STRING                                      { CopySetSourcePath($1); free($1); }
  | STDIN                                       { CopySetSourceStream(EVO_COPY_SRC_STDIN); }
  | STDOUT                                      { CopySetSourceStream(EVO_COPY_SRC_STDOUT); }
  ;

opt_copy_options: /* empty */
  | copy_option_list
  | WITH '(' copy_option_list ')'
  | '(' copy_option_list ')'
  ;

copy_option_list:
    copy_option
  | copy_option_list ',' copy_option
  ;

copy_option:
    FORMAT CSV                                  { CopySetFormat(EVO_COPY_FMT_CSV); }
  | FORMAT TEXT                                 { CopySetFormat(EVO_COPY_FMT_TEXT); }
  | DELIMITER STRING                            { CopySetDelimiter($2); free($2); }
  | HEADER                                      { CopySetHeader(1); }
  | HEADER BOOL                                 { CopySetHeader($2); }
  | NULLX STRING                                { CopySetNullStr($2); free($2); }
  | QUOTE STRING                                { CopySetQuote($2); free($2); }
  | CSV                                         { CopySetFormat(EVO_COPY_FMT_CSV); }
  ;

/** update **/
stmt: update_stmt
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    }
;
update_stmt: UPDATE update_opts table_references
SET update_asgn_list opt_where opt_orderby opt_limit opt_returning
    {
        emit("UPDATE %d %d %d", $2, $3, $5);
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    }
;

update_opts: /* nil */								{ $$ = 0; }
| insert_opts LOW_PRIORITY							{ $$ = $1 | 01 ; }
| insert_opts IGNORE								{ $$ = $1 | 010 ; }
;

update_asgn_list:
NAME COMPARISON expr
    {
        if ($2 != 4) {
            yyerror(scanner, "bad update assignment to %s", $1);
            YYERROR;
        }
        emit("ASSIGN1 %s", $1);
        GetUpdateColumnName($1); /*for first column name after the SET Terminal symbol*/
        free($1);
        $$ = 1;
    }
| NAME '.' NAME COMPARISON expr
    {
        if ($4 != 4) {
            yyerror(scanner, "bad update assignment to %s", $1);
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", $1, $3);
        if (g_qctx) { AddMultiUpdateSet($1, $3, $5); SetMultiUpdate(); }
        free($1);
        free($3);
        $$ = 1;
    }
| update_asgn_list ',' NAME COMPARISON expr
    {
        if ($4 != 4) {
            yyerror(scanner, "bad update assignment to %s", $3);
            YYERROR;
        }
        emit("ASSIGN3 %s", $3);
        GetUpdateColumnName($3); /*for other column names*/
        free($3);
        $$ = $1 + 1;
    }
| update_asgn_list ',' NAME '.' NAME COMPARISON expr
    {
        if ($6 != 4) {
            yyerror(scanner, "bad update assignment to %s.%s", $3, $5);
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", $3, $5);
        if (g_qctx) { AddMultiUpdateSet($3, $5, $7); SetMultiUpdate(); }
        free($3);
        free($5);
        $$ = $1 + 1;
    }
;

/** rename table **/
stmt: RENAME TABLE NAME TO NAME
    { emit("RENAMETABLE %s %s", $3, $5); RenameTableProcess($3, $5); free($3); free($5); }
;

/** create database **/
stmt: create_database_stmt							{ emit("STMT"); }
;

create_database_stmt:
CREATE DATABASE opt_if_not_exists NAME                                          { emit("CREATEDATABASE %d %s", $3, $4); CreateDatabaseProcess($4, $3); free($4); }
| CREATE SCHEMA opt_if_not_exists NAME                                          { emit("CREATESCHEMA %d %s", $3, $4); CreateSchemaProcess($4, $3); free($4); }
;

/** drop database / schema **/
stmt: DROP DATABASE NAME
    { emit("DROPDATABASE %s", $3); DropDatabaseProcess($3, 0); free($3); }
| DROP DATABASE IF EXISTS NAME
    { emit("DROPDATABASE IF EXISTS %s", $5); DropDatabaseProcess($5, 1); free($5); }
| DROP SCHEMA NAME
    { emit("DROPSCHEMA %s", $3); DropSchemaProcess($3, 0); free($3); }
| DROP SCHEMA IF EXISTS NAME
    { emit("DROPSCHEMA IF EXISTS %s", $5); DropSchemaProcess($5, 1); free($5); }
;

opt_if_not_exists: /* nil */                                                    { $$ = 0; }
| IF EXISTS									{ if(!$2) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } $$ = $2; /* NOT EXISTS hack */ }
;

/* CREATE/DROP VIEW handled in catalog.c pre-parse */

/** create domain **/
stmt: create_domain_stmt                                                        { emit("STMT"); }
;

create_domain_stmt:
  CREATE DOMAIN NAME AS data_type
    { emit("CREATEDOMAIN %s %d", $3); CreateDomainProcess($3, $5, NULL, 0, 0); free($3); }
| CREATE DOMAIN NAME AS data_type DEFAULT expr
    { emit("CREATEDOMAIN %s %d DEFAULT", $3); CreateDomainProcess($3, $5, NULL, 0, 0); free($3); }
| CREATE DOMAIN NAME AS data_type NOT NULLX
    { emit("CREATEDOMAIN %s %d NOTNULL", $3); CreateDomainProcess($3, $5, NULL, 1, 0); free($3); }
| CREATE DOMAIN NAME AS data_type CHECK '(' expr ')'
    { emit("CREATEDOMAIN %s %d CHECK", $3); CreateDomainProcess($3, $5, $8, 0, 1); free($3); }
| CREATE DOMAIN NAME AS data_type NOT NULLX CHECK '(' expr ')'
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", $3); CreateDomainProcess($3, $5, $10, 1, 1); free($3); }
;

/** use database **/
stmt: use_database_stmt                                                         { emit("STMT"); }
;

use_database_stmt:
USE NAME                                                                        { emit("USEDATABASE %s", $2); UseDatabaseProcess($2); free($2); }
| USE DATABASE NAME                                                             { emit("USEDATABASE %s", $3); UseDatabaseProcess($3); free($3); }
;

/** create table **/
stmt: create_table_stmt
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
'(' create_col_list ')' opt_table_options opt_inherits
    {
        emit("CREATE %d %d %d %s", $2, $4, $7, $5);
        g_create.isTemporary = $2;
        GetTableName($5);
        free($5);
    }
;

/* Task 92 — Feature #63: optional INHERITS (parent) clause.
 * Stashes the parent name into g_create.inheritParent; the executor
 * merges parent columns into the child at CreateTableProcess() time. */
opt_inherits: /* empty */
| INHERITS '(' NAME ')'
    {
        emit("INHERITS %s", $3);
        SetInheritParent($3);
        free($3);
    }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
'(' create_col_list ')' opt_table_options               { emit("CREATE %d %d %d %s.%s", $2, $4, $9, $5, $7); g_create.isTemporary = $2; free($5); free($7); }
;

/* Task 88: CREATE TABLE child PARTITION OF parent FOR VALUES FROM (lo) TO (hi).
 * Same prefix as other create_table_stmt alternatives (opt_temporary +
 * opt_if_not_exists + NAME) so the parser disambiguates by 1-token
 * lookahead after NAME — '(' for column list, PARTITION for this rule. */
create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME PARTITION OF NAME FOR VALUES FROM '(' INTNUM ')' TO '(' INTNUM ')'
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", $8, $13, $17, $5);
        CreatePartitionChild($5, $8, $13, $17);
        free($5); free($8);
    }
;

opt_table_options: /* empty */
    | opt_table_options AUTO_INCREMENT COMPARISON INTNUM { emit("TABLE OPT AUTOINC %d", $4); SetTableAutoIncrement($4); }
    | opt_table_options AUTO_INCREMENT INTNUM            { emit("TABLE OPT AUTOINC %d", $3); SetTableAutoIncrement($3); }
    | opt_table_options ON NAME DELETE NAME              { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; }
    | opt_table_options ON NAME PRESERVE NAME            { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; }
    | opt_table_options SHARD BY HASH '(' NAME ')' SHARDS INTNUM
        { emit("SHARD HASH %s %d", $6, $9); SetShardHash($6, $9); free($6); }
    | opt_table_options SHARD BY RANGE '(' NAME ')' '(' shard_range_list ')'
        { emit("SHARD RANGE %s", $6); SetShardRange($6); free($6); }
    | opt_table_options PARTITION BY RANGE '(' NAME ')'
        { emit("PARTITION BY RANGE %s", $6); SetPartitionByRange($6); free($6); }
;

shard_range_list: shard_range_def
    | shard_range_list ',' shard_range_def
;

shard_range_def: SHARD NAME VALUES LESS THAN STRING ON NODE INTNUM
    {
        char *sv = $6;
        int slen = (int)strlen(sv);
        char stripped[256];
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            strncpy(stripped, sv + 1, slen - 2);
            stripped[slen - 2] = '\0';
        } else {
            strncpy(stripped, sv, sizeof(stripped) - 1);
            stripped[sizeof(stripped) - 1] = '\0';
        }
        AddShardRangeDef($2, stripped, $9);
        free($2); free(sv);
    }
    | SHARD NAME VALUES LESS THAN MAXVALUE ON NODE INTNUM
    {
        AddShardRangeDef($2, "", $9);
        free($2);
    }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
'(' create_col_list ')'
create_select_statement {
    emit("CREATESELECT %d %d %d %s", $2, $4, $7, $5);
    g_create.ctasMode = CTAS_EXPLICIT;
    strncpy(g_create.ctasTableName, $5, 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = $4;
    g_create.ctasTemporary = $2;
    g_create.isTemporary = $2;
    GetTableName($5);
    free($5);
}
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
create_select_statement {
    emit("CREATESELECT %d %d 0 %s", $2, $4, $5);
    g_create.ctasMode = CTAS_INFER;
    strncpy(g_create.ctasTableName, $5, 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = $4;
    g_create.ctasTemporary = $2;
    GetTableName($5);
    free($5);
}
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
'(' create_col_list ')'
create_select_statement {
    emit("CREATESELECT %d %d %d %s.%s", $2, $4, $9, $5, $7);
    g_create.ctasMode = CTAS_EXPLICIT;
    strncpy(g_create.ctasTableName, $7, 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = $4;
    g_create.ctasTemporary = $2;
    g_create.isTemporary = $2;
    GetTableName($7);
    free($5); free($7);
}
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
create_select_statement {
    emit("CREATESELECT %d %d 0 %s.%s", $2, $4, $5, $7);
    g_create.ctasMode = CTAS_INFER;
    strncpy(g_create.ctasTableName, $7, 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = $4;
    g_create.ctasTemporary = $2;
    GetTableName($7);
    free($5); free($7);
}
;

opt_temporary: /* nil */							{ $$ = 0; }
| TEMPORARY									{ $$ = 1; }
| GLOBAL TEMPORARY							{ $$ = 2; }
;

create_col_list: create_definition                                              { $$ = 1; }
| create_col_list ',' create_definition                                         { $$ = $1 + 1; }
;

create_definition: PRIMARY KEY '(' pk_column_list ')'                            { emit("PRIKEY %d", $4); }
| CONSTRAINT NAME PRIMARY KEY '(' pk_column_list ')'                            { emit("PRIKEY %d", $6); g_constr.pendingConstraintName[0] = '\0'; free($2); }
| KEY '(' column_list ')'							{ emit("KEY %d", $3); }
| INDEX '(' column_list ')'							{ emit("KEY %d", $3); }
| FULLTEXT INDEX '(' column_list ')'                                            { emit("TEXTINDEX %d", $4); }
| FULLTEXT KEY '(' column_list ')'                                              { emit("TEXTINDEX %d", $4); }
| CHECK '(' expr ')'                                                            { emit("CHECK"); AddCheckConstraint($3); }
| CONSTRAINT NAME CHECK '(' expr ')'                                            { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], $2, 127); AddCheckConstraint($5); free($2); }
| FOREIGN KEY '(' fk_column_list ')' REFERENCES NAME '(' fk_ref_column_list ')' fk_actions
    { emit("FOREIGNKEY"); AddForeignKeyRefTable($7); free($7); }
| FOREIGN KEY '(' fk_column_list ')' REFERENCES NAME '.' NAME '(' fk_ref_column_list ')' fk_actions
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema($7, $9); free($7); free($9); }
| CONSTRAINT NAME FOREIGN KEY '(' fk_column_list ')' REFERENCES NAME '(' fk_ref_column_list ')' fk_actions
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, $2, 127); AddForeignKeyRefTable($9); free($2); free($9); }
| CONSTRAINT NAME FOREIGN KEY '(' fk_column_list ')' REFERENCES NAME '.' NAME '(' fk_ref_column_list ')' fk_actions
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, $2, 127); AddForeignKeyRefTableSchema($9, $11); free($2); free($9); free($11); }
| UNIQUE '(' unique_column_list ')'
    { emit("UNIQUE %d", $3); AddUniqueComplete(); }
| CONSTRAINT NAME UNIQUE '(' unique_column_list ')'
    { emit("UNIQUE %d", $5); strncpy(g_constr.pendingConstraintName, $2, 127); AddUniqueComplete(); free($2); }
;

pk_column_list: NAME                                                            { emit("PRIKEY_COL %s", $1); AddPrimaryKeyColumn($1); free($1); $$ = 1; }
| pk_column_list ',' NAME                                                       { emit("PRIKEY_COL %s", $3); AddPrimaryKeyColumn($3); free($3); $$ = $1 + 1; }
;

fk_column_list: NAME                                                            { AddForeignKeyColumn($1); free($1); }
| fk_column_list ',' NAME                                                       { AddForeignKeyColumn($3); free($3); }
;

fk_ref_column_list: NAME                                                        { AddForeignKeyRefColumn($1); free($1); }
| fk_ref_column_list ',' NAME                                                   { AddForeignKeyRefColumn($3); free($3); }
;

fk_actions: /* nil */
| fk_actions ON DELETE CASCADE                                                  { SetForeignKeyOnDelete(1); }
| fk_actions ON DELETE SET NULLX                                                { SetForeignKeyOnDelete(2); }
| fk_actions ON DELETE RESTRICT                                                 { SetForeignKeyOnDelete(3); }
| fk_actions ON DELETE SET DEFAULT                                              { SetForeignKeyOnDelete(4); }
| fk_actions ON UPDATE CASCADE                                                  { SetForeignKeyOnUpdate(1); }
| fk_actions ON UPDATE SET NULLX                                                { SetForeignKeyOnUpdate(2); }
| fk_actions ON UPDATE RESTRICT                                                 { SetForeignKeyOnUpdate(3); }
| fk_actions ON UPDATE SET DEFAULT                                              { SetForeignKeyOnUpdate(4); }
| fk_actions ON DELETE NO_ACTION                                                { SetForeignKeyOnDelete(5); }
| fk_actions ON UPDATE NO_ACTION                                                { SetForeignKeyOnUpdate(5); }
| fk_actions MATCH FULL                                                         { SetForeignKeyMatchType(1); }
| fk_actions MATCH SIMPLE                                                       { SetForeignKeyMatchType(0); }
| fk_actions MATCH PARTIAL                                                      { SetForeignKeyMatchType(2); }
| fk_actions DEFERRABLE                                                         { SetForeignKeyDeferrable(1); }
| fk_actions NOT DEFERRABLE                                                     { SetForeignKeyDeferrable(0); }
| fk_actions DEFERRABLE INITIALLY DEFERRED                                      { SetForeignKeyDeferrable(2); }
| fk_actions DEFERRABLE INITIALLY IMMEDIATE                                     { SetForeignKeyDeferrable(1); }
;

unique_column_list: NAME                                                        { AddUniqueColumn($1); free($1); $$ = 1; }
| unique_column_list ',' NAME                                                   { AddUniqueColumn($3); free($3); $$ = $1 + 1; }
;

create_definition:								{ emit("STARTCOL"); }
NAME data_type column_atts
    {
        emit("COLUMNDEF %d %s", $3, $2);
        GetColumnNames($2);
        GetColumnSize($3);
        free($2);
    }
;

column_atts: /* nil */								{ $$ = 0; }
| column_atts NOT NULLX								{ emit("ATTR NOTNULL"); SetColumnNotNull(); $$ = $1 + 1; }
| column_atts NULLX
| column_atts DEFAULT STRING                                                    { emit("ATTR DEFAULT STRING %s", $3); SetColumnDefault($3); free($3); $$ = $1 + 1; }
| column_atts DEFAULT INTNUM                                                    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", $3); emit("ATTR DEFAULT NUMBER %d", $3); SetColumnDefault(_buf); $$ = $1 + 1; }
| column_atts DEFAULT APPROXNUM                                                 { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", $3); emit("ATTR DEFAULT FLOAT %g", $3); SetColumnDefault(_buf); $$ = $1 + 1; }
| column_atts DEFAULT BOOL							{ char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", $3 ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", $3); SetColumnDefault(_buf); $$ = $1 + 1; }
| column_atts DEFAULT FGEN_RANDOM_UUID '(' ')'                                   { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); $$ = $1 + 1; }
| column_atts DEFAULT FGEN_RANDOM_UUID_V7 '(' ')'                               { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); $$ = $1 + 1; }
| column_atts DEFAULT FSNOWFLAKE_ID '(' ')'                                     { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); $$ = $1 + 1; }
| column_atts DEFAULT CURRENT_TIMESTAMP                                          { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); $$ = $1 + 1; }
| column_atts DEFAULT '(' expr ')'  {
    char _ser[512]; expr_serialize($4, _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    $$ = $1 + 1;
  }
| column_atts AUTO_INCREMENT                                                    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); $$ = $1 + 1; }
| column_atts AUTO_INCREMENT '(' INTNUM ',' INTNUM ')'                          { emit("ATTR AUTOINC %d %d", $4, $6); SetColumnAutoIncrement($4, $6); $$ = $1 + 1; }
| column_atts AUTO_INCREMENT '(' INTNUM ')'                                     { emit("ATTR AUTOINC %d 1", $4); SetColumnAutoIncrement($4, 1); $$ = $1 + 1; }
| column_atts IDENTITY '(' INTNUM ',' INTNUM ')'                               { emit("ATTR IDENTITY %d %d", $4, $6); SetColumnAutoIncrement($4, $6); $$ = $1 + 1; }
| column_atts IDENTITY '(' INTNUM ')'                                           { emit("ATTR IDENTITY %d 1", $4); SetColumnAutoIncrement($4, 1); $$ = $1 + 1; }
| column_atts IDENTITY                                                          { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); $$ = $1 + 1; }
| column_atts UNIQUE KEY							{ emit("ATTR UNIQUEKEY"); SetColumnUnique(); $$ = $1 + 1; }
| column_atts UNIQUE								{ emit("ATTR UNIQUE"); SetColumnUnique(); $$ = $1 + 1; }
| column_atts PRIMARY KEY							{ emit("ATTR PRIKEY"); SetColumnPrimaryKey(); $$ = $1 + 1; }
| column_atts KEY								{ emit("ATTR PRIKEY"); SetColumnPrimaryKey(); $$ = $1 + 1; }
| column_atts COMMENT STRING                                                    { emit("ATTR COMMENT %s", $3); free($3); $$ = $1 + 1; }
| column_atts CHECK '(' expr ')'                                                { emit("ATTR CHECK"); AddCheckConstraint($4); $$ = $1 + 1; }
| column_atts CONSTRAINT NAME UNIQUE                                            { emit("ATTR UNIQUE"); SetColumnUnique(); free($3); $$ = $1 + 1; }
| column_atts CONSTRAINT NAME PRIMARY KEY                                       { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free($3); $$ = $1 + 1; }
| column_atts CONSTRAINT NAME CHECK '(' expr ')'                               { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], $3, 127); AddCheckConstraint($6); free($3); $$ = $1 + 1; }
| column_atts GENERATED ALWAYS AS '(' expr ')' STORED                          { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, $6); $$ = $1 + 1; }
| column_atts GENERATED ALWAYS AS '(' expr ')' VIRTUAL                         { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, $6); $$ = $1 + 1; }
| column_atts GENERATED ALWAYS AS '(' expr ')'                                 { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, $6); $$ = $1 + 1; }
| column_atts AS '(' expr ')' STORED                                           { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, $4); $$ = $1 + 1; }
| column_atts AS '(' expr ')' VIRTUAL                                          { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, $4); $$ = $1 + 1; }
| column_atts AS '(' expr ')'                                                  { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, $4); $$ = $1 + 1; }
;

opt_length: /* nil */								{ $$ = 0; }
| '(' INTNUM ')'								{ $$ = $2; }
| '(' INTNUM ',' INTNUM ')'							{ $$ = $2 + 1000*$4; }
;

opt_binary: /* nil */								{ $$ = 0; }
| BINARY									{ $$ = 4000; }
;

opt_uz: /* nil */								{ $$ = 0; }
| opt_uz UNSIGNED								{ $$ = $1 | 1000; }
| opt_uz ZEROFILL								{ $$ = $1 | 2000; }
;

opt_csc: /* nil */
| opt_csc CHAR SET STRING							{ emit("COLCHARSET %s", $4); free($4); }
| opt_csc COLLATE STRING							{ emit("COLCOLLATE %s", $3); free($3); }
;

data_type:
BIT opt_length									{ $$ = 10000 + $2; }
| TINYINT opt_length opt_uz							{ $$ = 10000 + $2; }
| SMALLINT opt_length opt_uz                                                    { $$ = 20000 + $2 + $3; }
| MEDIUMINT opt_length opt_uz                                                   { $$ = 30000 + $2 + $3; }
| INT opt_length opt_uz								{ $$ = 40000 + $2 + $3; }
| INTEGER opt_length opt_uz							{ $$ = 50000 + $2 + $3; }
| BIGINT opt_length opt_uz							{ $$ = 60000 + $2 + $3; }
| REAL opt_length opt_uz							{ $$ = 70000 + $2 + $3; }
| DOUBLE opt_length opt_uz							{ $$ = 80000 + $2 + $3; }
| FLOAT opt_length opt_uz							{ $$ = 90000 + $2 + $3; }
| DECIMAL opt_length opt_uz							{ $$ = 110000 + $2 + $3; }
| DATE										{ $$ = 100001; }
| TIME										{ $$ = 100002; }
| TIMESTAMP									{ $$ = 100003; }
| DATETIME									{ $$ = 100004; }
| YEAR										{ $$ = 100005; }
| CHAR opt_length opt_csc							{ $$ = 120000 + $2; }
| VARCHAR '(' INTNUM ')' opt_csc                                                { $$ = 130000 + $3; }
| BINARY opt_length								{ $$ = 140000 + $2; }
| VARBINARY '(' INTNUM ')'							{ $$ = 150000 + $3; }
| TINYBLOB									{ $$ = 160001; }
| BLOB										{ $$ = 160002; }
| MEDIUMBLOB									{ $$ = 160003; }
| LONGBLOB									{ $$ = 160004; }
| TINYTEXT opt_binary opt_csc                                                   { $$ = 170000 + $2; }
| TEXT opt_binary opt_csc							{ $$ = 171000 + $2; }
| MEDIUMTEXT opt_binary opt_csc                                                 { $$ = 172000 + $2; }
| LONGTEXT opt_binary opt_csc                                                   { $$ = 173000 + $2; }
| ENUM '(' enum_list ')' opt_csc                                                { $$ = 200000 + $3; }
| SET '(' enum_list ')' opt_csc                                                 { $$ = 210000 + $3; }
| BOOLEAN                                                                        { $$ = 220001; }
| UUID                                                                           { $$ = 180036; }
| JSON                                                                           { $$ = 230000; }
| data_type '[' ']'                                                              { $$ = 250000 + ($1 / 10000); }
;

enum_list: STRING								{ emit("ENUMVAL %s", $1); free($1); $$ = 1; }
| enum_list ',' STRING								{ emit("ENUMVAL %s", $3); free($3); $$ = $1 + 1; }
;

create_select_statement: opt_ignore_replace opt_as select_stmt
    {
        emit("CREATESELECT %d", $1);
        /* In CTAS context, select_stmt is not a standalone stmt,
         * so SelectProcess() is not called automatically.
         * Call it here to set g_sel.lastTable for post-parse. */
        if ($3 == 1)
            SelectAll();
        else
            SelectProcess();
    }
;

opt_ignore_replace: /* nil */                                                   { $$ = 0; }
| IGNORE									{ $$ = 1; }
| REPLACE									{ $$ = 2; }
;

/**** set user variables ****/
stmt: set_stmt									{ emit("STMT"); }
;

set_stmt: SET SCHEMA NAME                                                       { emit("SETSCHEMA %s", $3); SetSchemaProcess($3); free($3); }
| SET SCHEMA DEFAULT                                                            { emit("SETSCHEMA default"); SetSchemaProcess("default"); }
| SET set_list ;
set_list: set_expr | set_list ',' set_expr ;
set_expr:
USERVAR COMPARISON expr								{ if ($2 != 4) { yyerror(scanner, "bad set to @%s", $1); YYERROR; } emit("SET %s", $1); free($1); }
| USERVAR ASSIGN expr								{ emit("SET %s", $1); free($1); }
;

/* ================================================================
 *  CREATE PROCEDURE / FUNCTION
 *  Body captured from g_lex_input in CreateProcedureProcess()
 * ================================================================ */

stmt: create_procedure_stmt                         { emit("STMT"); CreateProcedureProcess(); }
;

create_procedure_stmt:
  CREATE PROCEDURE NAME '(' opt_proc_params ')' AS BEGINWORK proc_body_skip END
    {
        emit("CREATEPROCEDURE %s", $3);
        evo_set_proc_name($3, 0);
        free($3);
    }
| CREATE PROCEDURE NAME '(' opt_proc_params ')' BEGINWORK proc_body_skip END
    {
        emit("CREATEPROCEDURE %s", $3);
        evo_set_proc_name($3, 0);
        free($3);
    }
| CREATE OR REPLACE PROCEDURE NAME '(' opt_proc_params ')' AS BEGINWORK proc_body_skip END
    {
        emit("CREATEORREPLACEPROCEDURE %s", $5);
        evo_set_proc_name($5, 0);
        evo_set_proc_replace(1);
        free($5);
    }
| CREATE OR REPLACE PROCEDURE NAME '(' opt_proc_params ')' BEGINWORK proc_body_skip END
    {
        emit("CREATEORREPLACEPROCEDURE %s", $5);
        evo_set_proc_name($5, 0);
        evo_set_proc_replace(1);
        free($5);
    }
| CREATE FUNCTION NAME '(' opt_proc_params ')' RETURNS proc_return_type AS BEGINWORK proc_body_skip END
    {
        emit("CREATEFUNCTION %s", $3);
        evo_set_proc_name($3, 1);
        free($3);
    }
| CREATE FUNCTION NAME '(' opt_proc_params ')' RETURNS proc_return_type BEGINWORK proc_body_skip END
    {
        emit("CREATEFUNCTION %s", $3);
        evo_set_proc_name($3, 1);
        free($3);
    }
| CREATE OR REPLACE FUNCTION NAME '(' opt_proc_params ')' RETURNS proc_return_type AS BEGINWORK proc_body_skip END
    {
        emit("CREATEORREPLACEFUNCTION %s", $5);
        evo_set_proc_name($5, 1);
        evo_set_proc_replace(1);
        free($5);
    }
| CREATE OR REPLACE FUNCTION NAME '(' opt_proc_params ')' RETURNS proc_return_type BEGINWORK proc_body_skip END
    {
        emit("CREATEORREPLACEFUNCTION %s", $5);
        evo_set_proc_name($5, 1);
        evo_set_proc_replace(1);
        free($5);
    }
;

opt_proc_params: /* empty */
| proc_param_list
;

proc_param_list: proc_param
| proc_param_list ',' proc_param
;

proc_param: NAME data_type                          { evo_add_proc_param($1, "IN"); free($1); }
| IN NAME data_type                                 { evo_add_proc_param($2, "IN"); free($2); }
| OUT NAME data_type                                { evo_add_proc_param($2, "OUT"); free($2); }
| INOUT NAME data_type                              { evo_add_proc_param($2, "INOUT"); free($2); }
;

proc_return_type: INTEGER                           { evo_set_proc_return_type("INT"); }
| INT                                               { evo_set_proc_return_type("INT"); }
| VARCHAR                                           { evo_set_proc_return_type("VARCHAR"); }
| TEXT                                              { evo_set_proc_return_type("TEXT"); }
| BOOLEAN                                           { evo_set_proc_return_type("BOOLEAN"); }
| FLOAT                                             { evo_set_proc_return_type("FLOAT"); }
| DOUBLE                                            { evo_set_proc_return_type("DOUBLE"); }
| BIGINT                                            { evo_set_proc_return_type("BIGINT"); }
| DATE                                              { evo_set_proc_return_type("DATE"); }
| TIMESTAMP                                         { evo_set_proc_return_type("TIMESTAMP"); }
;

/* Skip over procedure body tokens — the raw text is captured from
 * g_lex_input in CreateProcedureProcess(). Nested BEGIN...END blocks
 * are tracked: each BEGINWORK increments depth, each END decrements.
 * The outer END (depth==0) terminates the rule. */
proc_body_skip: /* empty */
| proc_body_skip proc_body_any
| proc_body_skip BEGINWORK proc_body_skip END       /* nested BEGIN...END */
| proc_body_skip IF proc_body_skip END IF           /* IF...END IF */
| proc_body_skip WHILE proc_body_skip END WHILE     /* WHILE...END WHILE */
| proc_body_skip LOOP proc_body_skip END LOOP       /* LOOP...END LOOP */
| proc_body_skip FOREACH proc_body_skip END FOREACH /* FOREACH...END FOREACH */
| proc_body_skip CASE proc_body_skip END CASE       /* CASE...END CASE */
;

proc_body_any: NAME         { free($1); }
| STRING                    { free($1); }
| INTNUM | APPROXNUM | BOOL
| COMPARISON | NOT | OR | ANDOP | IN | AND
| SELECT | INSERT | UPDATE | DELETE | FROM | WHERE | SET | INTO | VALUES
| CREATE | DROP | TABLE | INDEX | THEN | ELSE | ELSEIF
| DECLARE | DO | CALL | RETURN
| LEAVE | ITERATE | CURSOR | OPEN | FETCH | CLOSE | HANDLER | EXIT | OUT | INOUT | FOR | CONTINUE
| SIGNAL | RESIGNAL | EXECUTE | UNTIL | BEFORE | EACH | ROW | TRIGGER
| AS | ON | ORDER | BY | GROUP | HAVING | LIMIT | OFFSET
| JOIN | LEFT | RIGHT | INNER | OUTER | FULL | CROSS | NATURAL | USING
| NULLX | DEFAULT | PRIMARY | KEY | UNIQUE | CHECK | FOREIGN | REFERENCES
| CASCADE | RESTRICT | NO_ACTION
| INTEGER | INT | VARCHAR | TEXT | BOOLEAN | FLOAT | DOUBLE | BIGINT
| DATE | TIMESTAMP | SMALLINT | DECIMAL | CHAR | UUID | BLOB
| UNION | EXCEPT | INTERSECT | ALL | DISTINCT | EXISTS | WHEN
| WITH | PROCEDURE | FUNCTION | RETURNS
| '(' | ')' | ',' | ';' | '.' | '+' | '-' | '*' | '/' | '%' | '!' | '='
| FCOUNT | FSUM | FAVG | FMIN | FMAX
| USERVAR                   { free($1); }
;

/* ================================================================
 *  DROP PROCEDURE / FUNCTION
 * ================================================================ */

stmt: drop_procedure_stmt                           { emit("STMT"); DropProcedureProcess(); }
;

drop_procedure_stmt:
  DROP PROCEDURE NAME
    {
        emit("DROPPROCEDURE %s", $3);
        evo_set_proc_drop($3, 0);
        free($3);
    }
| DROP PROCEDURE IF EXISTS NAME
    {
        emit("DROPPROCEDURE IF EXISTS %s", $5);
        evo_set_proc_drop($5, 1);
        free($5);
    }
| DROP FUNCTION NAME
    {
        emit("DROPFUNCTION %s", $3);
        evo_set_proc_drop($3, 0);
        free($3);
    }
| DROP FUNCTION IF EXISTS NAME
    {
        emit("DROPFUNCTION IF EXISTS %s", $5);
        evo_set_proc_drop($5, 1);
        free($5);
    }
;

/* ================================================================
 *  CALL procedure
 * ================================================================ */

stmt: call_stmt                                     { emit("STMT"); CallProcedureProcess(); }
;

call_stmt:
  CALL NAME '(' ')'
    {
        emit("CALL %s 0", $2);
        evo_set_call_name($2);
        free($2);
    }
| CALL NAME '(' call_arg_list ')'
    {
        emit("CALL %s", $2);
        evo_set_call_name($2);
        free($2);
    }
;

call_arg_list: call_arg
| call_arg_list ',' call_arg
;

call_arg: INTNUM                                    { char buf[32]; snprintf(buf,sizeof(buf),"%d",$1); evo_add_call_arg(buf); }
| STRING                                            { evo_add_call_arg($1); free($1); }
| APPROXNUM                                         { char buf[64]; snprintf(buf,sizeof(buf),"%g",$1); evo_add_call_arg(buf); }
| NULLX                                             { evo_add_call_arg("NULL"); }
| BOOL                                              { evo_add_call_arg($1 ? "TRUE" : "FALSE"); }
| NAME                                              { evo_add_call_arg($1); free($1); }
| USERVAR                                           { char buf[256]; snprintf(buf,sizeof(buf),"@%s",$1); evo_add_call_arg(buf); free($1); }
;

/* ================================================================
 *  CREATE TRIGGER / DROP TRIGGER
 * ================================================================ */

stmt: create_trigger_stmt                            { emit("STMT"); CreateTriggerProcess(); }
;

create_trigger_stmt:
  CREATE TRIGGER NAME trigger_timing trigger_event ON NAME FOR EACH ROW BEGINWORK proc_body_skip END
    {
        emit("CREATETRIGGER %s ON %s", $3, $7);
        evo_set_trigger_info($3, $7);
        free($3); free($7);
    }
;

trigger_timing: BEFORE                               { evo_set_trigger_timing('B'); }
| AFTER                                              { evo_set_trigger_timing('A'); }
;

trigger_event: INSERT                                { evo_set_trigger_event('I'); }
| UPDATE                                             { evo_set_trigger_event('U'); }
| DELETE                                             { evo_set_trigger_event('D'); }
;

stmt: drop_trigger_stmt                              { emit("STMT"); DropTriggerProcess(); }
;

drop_trigger_stmt:
  DROP TRIGGER NAME
    {
        emit("DROPTRIGGER %s", $3);
        evo_set_trigger_drop($3, 0);
        free($3);
    }
| DROP TRIGGER IF EXISTS NAME
    {
        emit("DROPTRIGGER IF EXISTS %s", $5);
        evo_set_trigger_drop($5, 1);
        free($5);
    }
;

/* ALTER TRIGGER ENABLE / DISABLE */
stmt: ALTER TRIGGER NAME ENABLE
    {
        emit("ALTERTRIGGER %s ENABLE", $3);
        evo_set_trigger_drop($3, 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free($3);
    }
| ALTER TRIGGER NAME DISABLE
    {
        emit("ALTERTRIGGER %s DISABLE", $3);
        evo_set_trigger_drop($3, 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free($3);
    }
;

/* ── CREATE SEQUENCE / DROP SEQUENCE ── */
stmt: create_sequence_stmt                           { emit("STMT"); evo_create_sequence_process(); }
;

create_sequence_stmt:
  CREATE SEQUENCE opt_if_not_exists NAME seq_options
    {
        emit("CREATESEQUENCE %d %s", $3, $4);
        evo_seq_set_name($4);
        if ($3) evo_seq_set_if_not_exists();
        free($4);
    }
;

seq_options: /* empty */
| seq_options seq_option
;

seq_option:
  START WITH INTNUM                                  { evo_seq_set_start($3); }
| START INTNUM                                       { evo_seq_set_start($2); }
| INCREMENT BY INTNUM                                { evo_seq_set_increment($3); }
| INCREMENT INTNUM                                   { evo_seq_set_increment($2); }
| MINVALUE INTNUM                                    { evo_seq_set_minvalue($2); }
| MAXVALUE INTNUM                                    { evo_seq_set_maxvalue($2); }
| CYCLE                                              { evo_seq_set_cycle(1); }
| NOT CYCLE                                          { evo_seq_set_cycle(0); }
;

stmt: drop_sequence_stmt                             { emit("STMT"); evo_drop_sequence_process(); }
;

drop_sequence_stmt:
  DROP SEQUENCE NAME
    {
        emit("DROPSEQUENCE %s", $3);
        evo_seq_set_name($3);
        free($3);
    }
| DROP SEQUENCE IF EXISTS NAME
    {
        emit("DROPSEQUENCE IF EXISTS %s", $5);
        evo_seq_set_name($5);
        evo_seq_set_if_exists();
        free($5);
    }
;

/* ALTER SEQUENCE */
stmt: ALTER SEQUENCE NAME seq_options
    {
        emit("ALTERSEQUENCE %s", $3);
        evo_seq_set_name($3);
        free($3);
        evo_alter_sequence_process();
    }
| ALTER SEQUENCE NAME RESTART
    {
        emit("ALTERSEQUENCE RESTART %s", $3);
        evo_seq_set_name($3);
        free($3);
        evo_restart_sequence_process();
    }
| ALTER SEQUENCE NAME RESTART WITH INTNUM
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", $6, $3);
        evo_seq_set_name($3);
        evo_seq_set_start($6);
        free($3);
        evo_restart_sequence_process();
    }
| ALTER SEQUENCE NAME RENAME TO NAME
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", $3, $6);
        evo_seq_set_name($3);
        evo_rename_sequence_process($6);
        free($3); free($6);
    }
;

/* RETURNING clause for INSERT/UPDATE/DELETE */
opt_returning: /* empty */
| RETURNING '*'                                     { SetReturningAll(); }
| RETURNING returning_col_list
;

returning_col_list: NAME                            { AddReturningCol($1); free($1); }
| returning_col_list ',' NAME                       { AddReturningCol($3); free($3); }
;

%%
void emit(const char *s, ...)
{
	va_list ap;
	if (g_gui_mode) return;
	va_start(ap, s);
	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}
void yyerror(void *scanner, const char *s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "error: ");
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}