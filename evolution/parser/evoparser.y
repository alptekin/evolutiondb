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

	void yyerror(char *s, ...);
	void emit(char *s, ...);
	int yylex(void);

	/* Track alias for current select_expr */
	static char g_currentAlias[128];
%}
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
%nonassoc UMINUS
%token ALTER
%token ADD
%token ALL
%token ANY
%token AUTO_INCREMENT
%token ASC
%token AND
%token AS

%token BLOB
%token BOOLEAN
%token BY
%token BINARY
%token BOTH
%token BIGINT
%token BIT

%token CURRENT_TIMESTAMP
%token CREATE
%token CROSS
%token CASE
%token COMMENT
%token CURRENT_DATE
%token CURRENT_TIME
%token CHAR
%token COLLATE

%token DATABASE
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

%token ESCAPED
%token ENUM
%token END
%token ELSE

%token FLOAT
%token FORCE
%token FROM
%token FULLTEXT
%token FOR

%token GROUP

%token HOUR_MINUTE
%token HOUR_MICROSECOND
%token HIGH_PRIORITY
%token HOUR_SECOND
%token HAVING

%token INTEGER
%token INNER
%token IGNORE
%token INDEX
%token IF
%token INSERT
%token INTO
%token INT
%token INTERVAL

%token JOIN

%token KEY

%token LONGTEXT
%token LOW_PRIORITY
%token LEFT
%token LEADING
%token LIMIT
%token LONGBLOB

%token MEDIUMTEXT
%token MEDIUMBLOB
%token MEDIUMINT

%token NATURAL
%token NULLX

%token OUTER
%token ON
%token ORDER
%token ONDUPLICATE

%token PRIMARY

%token QUICK

%token REAL
%token ROLLUP
%token RIGHT
%token REPLACE

%token SQL_SMALL_RESULT
%token SCHEMA
%token SOME
%token SQL_CALC_FOUND_ROWS
%token SQL_BIG_RESULT
%token STRAIGHT_JOIN
%token SMALLINT
%token SET
%token SELECT

%token TINYTEXT
%token <intval> TINYINT
%token TEMPORARY
%token TEXT
%token TIMESTAMP
%token TABLE
%token THEN 
%token TRAILING
%token TRUNCATE
%token TINYBLOB
%token TIME

%token UPDATE
%token UNSIGNED
%token UNIQUE
%token USING
%token USE

%token VARCHAR
%token VALUES
%token VARBINARY

%token WHERE
%token WHEN
%token WITH

%token YEAR
%token YEAR_MONTH

%token ZEROFILL

%token <subtok> EXISTS /* NOT EXISTS or EXISTS */


/* functions with special syntax */
%token FSUBSTRING
%token FTRIM
%token FDATE_ADD FDATE_SUB
%token FCOUNT

%type <intval> select_opts
%type <intval> select_stmt
%type <intval> select_expr_list
%type <intval> val_list
%type <intval> opt_val_list
%type <intval> case_list
%type <intval> groupby_list
%type <intval> opt_with_rollup 
%type <intval> opt_asc_desc
%type <intval> table_references
%type <intval> opt_inner_cross 
%type <intval> opt_outer
%type <intval> left_or_right 
%type <intval> opt_left_or_right_outer
%type <intval> column_list
%type <intval> index_list
%type <intval> opt_for_join
%type <intval> delete_opts
%type <intval> delete_list
%type <intval> insert_opts
%type <intval> insert_vals
%type <intval> insert_vals_list
%type <intval> insert_asgn_list
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
| NAME '.' NAME									{ emit("FIELDNAME %s.%s", $1, $3); $$ = expr_make_column($3); free($1); free($3); }
| USERVAR									{ emit("USERVAR %s", $1); $$ = expr_make_string($1); free($1); }
| STRING
    {
        char *sv = $1;
        int slen = (int)strlen(sv);
        emit("STRING %s", sv);
        /* Strip surrounding quotes before insertion */
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            char stripped[1024];
            strncpy(stripped, sv + 1, slen - 2);
            stripped[slen - 2] = '\0';
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
        sprintf(buf, "%d", $1);
        GetInsertions(buf);
        $$ = expr_make_int($1);
    }
| APPROXNUM
    {
        emit("FLOAT %g", $1);
        char buf[64];
        sprintf(buf, "%g", $1);
        GetInsertions(buf);
        $$ = expr_make_float($1);
    }
| BOOL
    {
        emit("BOOL %d", $1);
        GetInsertions($1 ? "true" : "false");
        $$ = expr_make_bool($1);
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
| expr ANDOP expr								{ emit("AND"); $$ = $1; }
| expr OR expr									{ emit("OR"); $$ = $1; }
| expr XOR expr									{ emit("XOR"); $$ = $1; }
| expr '|' expr									{ emit("BITOR"); $$ = expr_make_binop(EXPR_BITOR, $1, $3); }
| expr '&' expr									{ emit("BITAND"); $$ = expr_make_binop(EXPR_BITAND, $1, $3); }
| expr '^' expr									{ emit("BITXOR"); $$ = expr_make_binop(EXPR_BITXOR, $1, $3); }
| expr SHIFT expr								{ emit("SHIFT %s", $2==1?"left":"right"); $$ = expr_make_binop($2==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, $1, $3); }
| NOT expr									{ emit("NOT"); $$ = $2; }
| '!' expr									{ emit("NOT"); $$ = $2; }
| expr COMPARISON expr
    {
        emit("CMP %d", $2);
        $$ = $1;
    }
/* recursive selects and comparisons thereto */
| expr COMPARISON '(' select_stmt ')'                                           { emit("CMPSELECT %d", $2); $$ = $1; }
| expr COMPARISON ANY '(' select_stmt ')'                                       { emit("CMPANYSELECT %d", $2); $$ = $1; }
| expr COMPARISON SOME '(' select_stmt ')'                                      { emit("CMPANYSELECT %d", $2); $$ = $1; }
| expr COMPARISON ALL '(' select_stmt ')'                                       { emit("CMPALLSELECT %d", $2); $$ = $1; }
;

expr: expr IS NULLX								{ emit("ISNULL"); $$ = $1; }
| expr IS NOT NULLX								{ emit("ISNULL"); emit("NOT"); $$ = $1; }
| expr IS BOOL									{ emit("ISBOOL %d", $3); $$ = $1; }
| expr IS NOT BOOL								{ emit("ISBOOL %d", $4); emit("NOT"); $$ = $1; }
| USERVAR ASSIGN expr								{ emit("ASSIGN @%s", $1); free($1); $$ = $3; }
;

expr: expr BETWEEN expr AND expr %prec BETWEEN                                  { emit("BETWEEN"); $$ = $1; }
;

val_list: expr									{ $$ = 1; }
| expr ',' val_list								{ $$ = 1 + $3; }
;

opt_val_list: /* nil */								{ $$ = 0; }
| val_list
;

expr: expr IN '(' val_list ')'                                                  { emit("ISIN %d", $4); $$ = $1; }
| expr NOT IN '(' val_list ')'                                                  { emit("ISIN %d", $5); emit("NOT"); $$ = $1; }
| expr IN '(' select_stmt ')'                                                   { emit("CMPANYSELECT 4"); $$ = $1; }
| expr NOT IN '(' select_stmt ')'                                               { emit("CMPALLSELECT 3"); $$ = $1; }
| EXISTS '(' select_stmt ')'                                                    { emit("EXISTSSELECT"); if($1)emit("NOT"); $$ = NULL; }
;

/* regular functions */
expr: NAME '(' opt_val_list ')'                                                 { emit("CALL %d %s", $3, $1); $$ = expr_make_column($1); free($1); }
;

/* functions with special syntax */
expr: FCOUNT '(' '*' ')'							{ emit("COUNTALL"); $$ = expr_make_column("COUNT"); }
| FCOUNT '(' expr ')'								{ emit(" CALL 1 COUNT"); $$ = expr_make_column("COUNT"); }
;
expr: FSUBSTRING '(' val_list ')'                                               { emit("CALL %d SUBSTR", $3); $$ = expr_make_column("SUBSTR"); }
| FSUBSTRING '(' expr FROM expr ')'                                             { emit("CALL 2 SUBSTR"); $$ = expr_make_column("SUBSTR"); }
| FSUBSTRING '(' expr FROM expr FOR expr ')'                                    { emit("CALL 3 SUBSTR"); $$ = expr_make_column("SUBSTR"); }
| FTRIM '(' val_list ')'							{ emit("CALL %d TRIM", $3); $$ = expr_make_column("TRIM"); }
| FTRIM '(' trim_ltb expr FROM val_list ')'                                     { emit("CALL 3 TRIM"); $$ = expr_make_column("TRIM"); }
;

trim_ltb: LEADING								{ emit("NUMBER 1"); }
| TRAILING									{ emit("NUMBER 2"); }
| BOTH										{ emit("NUMBER 3"); }
;

expr: FDATE_ADD '(' expr ',' interval_exp ')'                                   { emit("CALL 3 DATE_ADD"); $$ = expr_make_column("DATE_ADD"); }
| FDATE_SUB '(' expr ',' interval_exp ')'                                       { emit("CALL 3 DATE_SUB"); $$ = expr_make_column("DATE_SUB"); }
;

interval_exp: INTERVAL expr DAY_HOUR                                            { emit("NUMBER 1"); }
| INTERVAL expr DAY_MICROSECOND                                                 { emit("NUMBER 2"); }
| INTERVAL expr DAY_MINUTE							{ emit("NUMBER 3"); }
| INTERVAL expr DAY_SECOND							{ emit("NUMBER 4"); }
| INTERVAL expr YEAR_MONTH							{ emit("NUMBER 5"); }
| INTERVAL expr YEAR								{ emit("NUMBER 6"); }
| INTERVAL expr HOUR_MICROSECOND                                                { emit("NUMBER 7"); }
| INTERVAL expr HOUR_MINUTE							{ emit("NUMBER 8"); }
| INTERVAL expr HOUR_SECOND							{ emit("NUMBER 9"); }
;

expr: CASE expr case_list END                                                   { emit("CASEVAL %d 0", $3); $$ = $2; }
| CASE expr case_list ELSE expr END                                             { emit("CASEVAL %d 1", $3); $$ = $2; }
| CASE case_list END								{ emit("CASE %d 0", $2); $$ = NULL; }
| CASE case_list ELSE expr END                                                  { emit("CASE %d 1", $2); $$ = $4; }
;

case_list: WHEN expr THEN expr                                                  { $$ = 1; }
| case_list WHEN expr THEN expr                                                 { $$ = $1+1; }
;

expr: expr LIKE expr								{ emit("LIKE"); $$ = $1; }
| expr NOT LIKE expr								{ emit("LIKE"); emit("NOT"); $$ = $1; }
;

expr: expr REGEXP expr								{ emit("REGEXP"); $$ = $1; }
| expr NOT REGEXP expr								{ emit("REGEXP"); emit("NOT"); $$ = $1; }
;

expr: CURRENT_TIMESTAMP								{ emit("NOW"); $$ = expr_make_current_timestamp(); }
| CURRENT_DATE									{ emit("NOW"); $$ = expr_make_current_date(); }
| CURRENT_TIME									{ emit("NOW"); $$ = expr_make_current_time(); }
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

select_stmt: SELECT select_opts select_expr_list                                { emit("SELECTNODATA %d %d", $2, $3); } ;
| SELECT select_opts select_expr_list 
FROM table_references
opt_where opt_groupby opt_having opt_orderby opt_limit
opt_into_list
    {
        emit("SELECT %d %d %d", $2, $3, $5);
        if ($3 == 3)
            $$ = 1;
        else
            ;
    }
;

opt_where: /* nil */
| WHERE expr									{ emit("WHERE"); };
opt_groupby: /* nil */
| GROUP BY groupby_list opt_with_rollup                                         { emit("GROUPBYLIST %d %d", $3, $4); }
;

groupby_list: expr opt_asc_desc                                                 { emit("GROUPBY %d", $2); $$ = 1; }
| groupby_list ',' expr opt_asc_desc                                            { emit("GROUPBY %d", $4); $$ = $1 + 1; }
;

opt_asc_desc: /* nil */								{ $$ = 0; }
| ASC										{ $$ = 0; }
| DESC										{ $$ = 1; }
;

opt_with_rollup: /* nil */							{ $$ = 0; }
| WITH ROLLUP									{ $$ = 1; }
;

opt_having: /* nil */
| HAVING expr									{ emit("HAVING"); }
;

opt_orderby: /* nil */
| ORDER BY NAME opt_asc_desc
    {
        emit("ORDERBY %s %d", $3, $4);
        GetOrderByColumn($3);
        SetOrderByDirection($4);
        free($3);
    }
;

opt_limit: /* nil */ | LIMIT expr                                               { emit("LIMIT 1"); }
| LIMIT expr ',' expr								{ emit("LIMIT 2"); }
;

opt_into_list: /* nil */
| INTO column_list								{ emit("INTO %d", $2); }
;

column_list: NAME								{ emit("COLUMN %s", $1); free($1); $$ = 1; }
| column_list ',' NAME								{ emit("COLUMN %s", $3); free($3); $$ = $1 + 1; }
;

select_opts:									{ $$ = 0; }
| select_opts ALL								{ if($1 & 01) yyerror("duplicate ALL option"); $$ = $1 | 01; }
| select_opts DISTINCT								{ if($1 & 02) yyerror("duplicate DISTINCT option"); $$ = $1 | 02; }
| select_opts DISTINCTROW							{ if($1 & 04) yyerror("duplicate DISTINCTROW option"); $$ = $1 | 04; }
| select_opts HIGH_PRIORITY							{ if($1 & 010) yyerror("duplicate HIGH_PRIORITY option"); $$ = $1 | 010; }
| select_opts STRAIGHT_JOIN							{ if($1 & 020) yyerror("duplicate STRAIGHT_JOIN option"); $$ = $1 | 020; }
| select_opts SQL_SMALL_RESULT                                                  { if($1 & 040) yyerror("duplicate SQL_SMALL_RESULT option"); $$ = $1 | 040; }
| select_opts SQL_BIG_RESULT                                                    { if($1 & 0100) yyerror("duplicate SQL_BIG_RESULT option"); $$ = $1 | 0100; }
| select_opts SQL_CALC_FOUND_ROWS                                               { if($1 & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); $$ = $1 | 0200; }
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
        free($1);
    }
| NAME '.' NAME opt_as_alias index_hint                                         { emit("TABLE %s.%s", $1, $3); free($1); free($3); }
| table_subquery opt_as NAME                                                    { emit("SUBQUERYAS %s", $3); free($3); }
| '(' table_references ')'							{ emit("TABLEREFERENCES %d", $2); }
;

opt_as: AS
| /* nil */
;

join_table:
table_reference opt_inner_cross JOIN table_factor opt_join_condition
										{ emit("JOIN %d", 100+$2); }
| table_reference STRAIGHT_JOIN table_factor
										{ emit("JOIN %d", 200); }
| table_reference STRAIGHT_JOIN table_factor ON expr
										{ emit("JOIN %d", 200); }
| table_reference left_or_right opt_outer JOIN table_factor join_condition
										{ emit("JOIN %d", 300+$2+$3); }
| table_reference NATURAL opt_left_or_right_outer JOIN table_factor
										{ emit("JOIN %d", 400+$3); }
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

join_condition: ON expr								{ emit("ONEXPR"); }
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
        DeleteProcess();
    }
;

/* single table delete */
delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit	
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
delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where	{ emit("DELETEMULTI %d %d %d", $2, $3, $5); }
;

delete_list: NAME opt_dot_star                                                  { emit("TABLE %s", $1); free($1); $$ = 1; }
| delete_list ',' NAME opt_dot_star                                             { emit("TABLE %s", $3); free($3); $$ = $1 + 1; }
;

opt_dot_star: /* nil */ | '.' '*' ;
/* multitable delete, second version */
delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where	{ emit("DELETEMULTI %d %d %d", $2, $4, $6); }
;

/** drop table **/
stmt: drop_table_stmt
    {
        emit("STMT");
        DropTableProcess();
    }
;

drop_table_stmt: DROP TABLE NAME
    {
        emit("DROPTABLE %s", $3);
        GetDropTableName($3);
        free($3);
    }
;

/** truncate table **/
stmt: truncate_table_stmt
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
;

stmt: insert_stmt
    {
        emit("STMT");
        InsertProcess();
    }
;

insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate 
    {
        emit("INSERTVALS %d %d %s", $2, $7, $4);
        GetInsertionTableName($4);
        free($4);
    }
;

opt_ondupupdate: /* nil */
| ONDUPLICATE KEY UPDATE insert_asgn_list { emit("DUPUPDATE %d", $4); }
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
| '(' column_list ')'								{ emit("INSERTCOLS %d", $2); }
;

insert_vals_list: '(' insert_vals ')'                                           { emit("VALUES %d", $2); $$ = 1; }
| insert_vals_list ',' '(' insert_vals ')'                                      { emit("VALUES %d", $4); $$ = $1 + 1; }
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

insert_asgn_list: NAME COMPARISON expr                                          { if ($2 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; } emit("ASSIGN %s", $1); free($1); $$ = 1; }
| NAME COMPARISON DEFAULT							{ if ($2 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", $1); free($1); $$ = 1; }
| insert_asgn_list ',' NAME COMPARISON expr                                     { if ($4 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; } emit("ASSIGN %s", $3); free($3); $$ = $1 + 1; }
| insert_asgn_list ',' NAME COMPARISON DEFAULT                                  { if ($4 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", $3); free($3); $$ = $1 + 1; }
;



/** replace just like insert **/
stmt: replace_stmt								{ emit("STMT"); }
;

replace_stmt: REPLACE insert_opts opt_into NAME
opt_col_names
VALUES insert_vals_list
opt_ondupupdate									{ emit("REPLACEVALS %d %d %s", $2, $7, $4); free($4); }
;

replace_stmt: REPLACE insert_opts opt_into NAME
SET insert_asgn_list
opt_ondupupdate									{ emit("REPLACEASGN %d %d %s", $2, $6, $4); free($4); }
;

replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names
select_stmt
opt_ondupupdate									{ emit("REPLACESELECT %d %s", $2, $4); free($4); }
;

/** update **/
stmt: update_stmt                                                               
    {
        emit("STMT");
        UpdateProcess();
    }
;
update_stmt: UPDATE update_opts table_references
SET update_asgn_list opt_where opt_orderby opt_limit
    {
        emit("UPDATE %d %d %d", $2, $3, $5);
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
            yyerror("bad update assignment to %s", $1);
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
            yyerror("bad update assignment to %s", $1);
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", $1, $3);
        free($1);
        free($3);
        $$ = 1;
    }
| update_asgn_list ',' NAME COMPARISON expr
    {
        if ($4 != 4) {
            yyerror("bad update assignment to %s", $3);
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
            yyerror("bad update assignment to %s.$s", $3, $5);
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", $3, $5);
        free($3);
        free($5);
        $$ = 1;
    }
;

/** create database **/
stmt: create_database_stmt							{ emit("STMT"); }
;

create_database_stmt:
CREATE DATABASE opt_if_not_exists NAME                                          { emit("CREATEDATABASE %d %s", $3, $4); free($4); }
| CREATE SCHEMA opt_if_not_exists NAME                                          { emit("CREATEDATABASE %d %s", $3, $4); free($4); }
;

opt_if_not_exists: /* nil */                                                    { $$ = 0; }
| IF EXISTS									{ if(!$2) { yyerror("IF EXISTS doesn't exist"); YYERROR; } $$ = $2; /* NOT EXISTS hack */ }
;

/** create table **/
stmt: create_table_stmt
    {
        emit("STMT");
        CreateTableProcess();
    }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
'(' create_col_list ')'
    {
        emit("CREATE %d %d %d %s", $2, $4, $7, $5);
        GetTableName($5);
        free($5);
    }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
'(' create_col_list ')'								{ emit("CREATE %d %d %d %s.%s", $2, $4, $9, $5, $7); free($5); free($7); }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
'(' create_col_list ')'
create_select_statement								{ emit("CREATESELECT %d %d %d %s", $2, $4, $7, $5); free($5); }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
create_select_statement								{ emit("CREATESELECT %d %d 0 %s", $2, $4, $5); free($5); }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
'(' create_col_list ')'
create_select_statement								{ emit("CREATESELECT %d %d 0 %s.%s", $2, $4, $5, $7); free($5); free($7); }
;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
create_select_statement								{ emit("CREATESELECT %d %d 0 %s.%s", $2, $4, $5, $7); free($5); free($7); }
;

opt_temporary: /* nil */							{ $$ = 0; }
| TEMPORARY									{ $$ = 1;}
;

create_col_list: create_definition                                              { $$ = 1; }
| create_col_list ',' create_definition                                         { $$ = $1 + 1; }
;

create_definition: PRIMARY KEY '(' column_list ')'                              { emit("PRIKEY %d", $4); }
| KEY '(' column_list ')'							{ emit("KEY %d", $3); }
| INDEX '(' column_list ')'							{ emit("KEY %d", $3); }
| FULLTEXT INDEX '(' column_list ')'                                            { emit("TEXTINDEX %d", $4); }
| FULLTEXT KEY '(' column_list ')'                                              { emit("TEXTINDEX %d", $4); }
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
| column_atts DEFAULT STRING                                                    { emit("ATTR DEFAULT STRING %s", $3); free($3); $$ = $1 + 1; }
| column_atts DEFAULT INTNUM                                                    { emit("ATTR DEFAULT NUMBER %d", $3); $$ = $1 + 1; }
| column_atts DEFAULT APPROXNUM                                                 { emit("ATTR DEFAULT FLOAT %g", $3); $$ = $1 + 1; }
| column_atts DEFAULT BOOL							{ emit("ATTR DEFAULT BOOL %d", $3); $$ = $1 + 1; }
| column_atts AUTO_INCREMENT                                                    { emit("ATTR AUTOINC"); $$ = $1 + 1; }
| column_atts UNIQUE '(' column_list ')'                                        { emit("ATTR UNIQUEKEY %d", $4); $$ = $1 + 1; }
| column_atts UNIQUE KEY							{ emit("ATTR UNIQUEKEY"); $$ = $1 + 1; }
| column_atts PRIMARY KEY							{ emit("ATTR PRIKEY"); SetColumnPrimaryKey(); $$ = $1 + 1; }
| column_atts KEY								{ emit("ATTR PRIKEY"); SetColumnPrimaryKey(); $$ = $1 + 1; }
| column_atts COMMENT STRING                                                    { emit("ATTR COMMENT %s", $3); free($3); $$ = $1 + 1; }
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
;

enum_list: STRING								{ emit("ENUMVAL %s", $1); free($1); $$ = 1; }
| enum_list ',' STRING								{ emit("ENUMVAL %s", $3); free($3); $$ = $1 + 1; }
;

create_select_statement: opt_ignore_replace opt_as select_stmt 
										{ emit("CREATESELECT %d", $1); }
;

opt_ignore_replace: /* nil */                                                   { $$ = 0; }
| IGNORE									{ $$ = 1; }
| REPLACE									{ $$ = 2; }
;

/**** set user variables ****/
stmt: set_stmt									{ emit("STMT"); }
;

set_stmt: SET set_list ;
set_list: set_expr | set_list ',' set_expr ;
set_expr:
USERVAR COMPARISON expr								{ if ($2 != 4) { yyerror("bad set to @%s", $1); YYERROR; } emit("SET %s", $1); free($1); }
| USERVAR ASSIGN expr								{ emit("SET %s", $1); free($1); }
;

%%
void emit(char *s, ...)
{
	extern int yylineno;
	va_list ap;
	if (g_gui_mode) return;
	va_start(ap, s);
	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}
void yyerror(char *s, ...)
{
	extern int yylineno;
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "%d: error: ", yylineno);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}