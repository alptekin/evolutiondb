/*---------------------------------------------------------------------
-                    Scanner for evosql subset                        -
-----------------------------------------------------------------------*/

%option noyywrap nodefault yylineno case-insensitive reentrant bison-bridge
%{
	#define _CRT_SECURE_NO_WARNINGS
	#include "evoparser.tab.h"
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

	void yyerror(void *scanner, const char *s, ...);
	static __thread int t_oldstate;

	/* Subquery SQL extraction: track byte position in input.
	 * YY_USER_ACTION runs before every lexer action; we advance
	 * g_lex_pos by the matched token length so the parser can slice
	 * out subquery text (used by LATERAL rule for correlated re-exec). */
	__thread int g_lex_pos = 0;
	__thread const char *g_lex_input = NULL;
	__thread int g_in_subquery = 0;

	#define YY_USER_ACTION  g_lex_pos += yyleng;
%}
%x COMMENT
%s BTWMODE

%%


ADD						{ return ADD; }					/* keywords */
AFTER					{ return AFTER; }
ALL						{ return ALL; }
ANALYZE					{ return ANALYZE; }
HISTOGRAM				{ return HISTOGRAM; }
BUCKETS					{ return BUCKETS; }
SAMPLE					{ return SAMPLE; }
PERCENT					{ return PERCENT; }
ROWS					{ return ROWS; }



<BTWMODE>AND			{ BEGIN INITIAL; return AND; }	/* Hack for BETWEEN ... AND ... return special AND token if BETWEEN seen */
AND						{ return ANDOP; }
ANY						{ return ANY; }
ALTER					{ return ALTER; }
ALWAYS					{ return ALWAYS; }
ARRAY					{ return ARRAY; }
AS						{ return AS; }
ASC						{ return ASC; }
AUTO_INCREMENT			{ return AUTO_INCREMENT; }

BETWEEN					{ BEGIN BTWMODE; return BETWEEN; }
CHANGE					{ return CHANGE; }
INT8|BIGINT				{ return BIGINT; }
BINARY					{ return BINARY; }
BIT						{ return BIT; }
BEFORE					{ return BEFORE; }
"BEGIN"					{ return BEGINWORK; }
BLOB					{ return BLOB; }
BOOL					{ return BOOLEAN; }
BOOLEAN					{ return BOOLEAN; }
BOTH					{ return BOTH; }
BY						{ return BY; }

CALL					{ return CALL; }
CASCADE					{ return CASCADE; }
CLOSE					{ return CLOSE; }
CURSOR					{ return CURSOR; }
CASE					{ return CASE; }
CAST/"("				{ return FCAST; }
COLUMN					{ return COLUMN; }
CONCURRENTLY			{ return CONCURRENTLY; }
CONVERT/"("				{ return FCONVERT; }
CYCLE					{ return CYCLE; }

CHAR(ACTER)?			{ return CHAR; }

CHECK					{ return CHECK; }

COLLATE					{ return COLLATE; }

CONSTRAINT				{ return CONSTRAINT; }

COMMENT					{ return COMMENT; }




CREATE					{ return CREATE; }
CROSS					{ return CROSS; }
CURRENT_DATE			{ return CURRENT_DATE; }
CURRENT_TIME			{ return CURRENT_TIME; }
CURRENT_TIMESTAMP		{ return CURRENT_TIMESTAMP; }
CURRENT_USER			{ return CURRENT_USER; }




DECLARE					{ return DECLARE; }
DATE					{ return DATE; }
DATETIME				{ return DATETIME; }
DAY_HOUR				{ return DAY_HOUR; }
DAY_MICROSECOND			{ return DAY_MICROSECOND; }
DAY_MINUTE				{ return DAY_MINUTE; }
DAY_SECOND				{ return DAY_SECOND; }
NUMERIC|DEC|DECIMAL		{ return DECIMAL; }

DATABASE				{ return DATABASE; }
DEFAULT					{ return DEFAULT; }
DELAYED					{ return DELAYED; }
DELETE					{ return DELETE; }
DELIMITER				{ return DELIMITER; }
DESC					{ return DESC; }
DROP					{ return DROP; }
COPY					{ return COPY; }
CSV						{ return CSV; }
CONFLICT				{ return CONFLICT; }
EXCLUDED				{ return EXCLUDED; }
NOTHING					{ return NOTHING; }
AGAINST					{ return AGAINST; }
MATERIALIZED			{ return MATERIALIZED; }
REFRESH					{ return REFRESH; }
OF						{ return OF; }


DEFERRABLE				{ return DEFERRABLE; }
DEFERRED				{ return DEFERRED; }
DISABLE					{ return DISABLE; }
DISTINCT				{ return DISTINCT; }
DOMAIN					{ return DOMAIN; }
ON[ \t\n]+DUPLICATE			{ return ONDUPLICATE; }
DISTINCTROW				{ return DISTINCTROW; }
DO						{ return DO; }

FLOAT8|DOUBLE			{ return DOUBLE; }



ELSE					{ return ELSE; }
ELSEIF					{ return ELSEIF; }
EACH					{ return EACH; }
ENABLE					{ return ENABLE; }
EXECUTE					{ return EXECUTE; }
EXPLAIN					{ return EXPLAIN; }

END						{ return END; }
ENUM					{ return ENUM; }
ESCAPED					{ return ESCAPED; }
EXCEPT					{ return EXCEPT; }
EXIT					{ return EXIT; }
EXISTS					{ yylval->subtok = 0; return EXISTS; }
NOT[ \t\n]+EXISTS		{ yylval->subtok = 1; return EXISTS; }



FETCH					{ return FETCH; }
FIRST					{ return FIRST; }
FLOAT4?					{ return FLOAT; }
FOR						{ return FOR; }
FOREACH					{ return FOREACH; }
FORCE					{ return FORCE; }
FOREIGN					{ return FOREIGN; }

FROM					{ return FROM; }
FORMAT					{ return FORMAT; }
FULL					{ return FULL; }
FUNCTION				{ return FUNCTION; }
GROUP_CONCAT/"("		{ return FGROUP_CONCAT; }
FULLTEXT				{ return FULLTEXT; }

GENERATED				{ return GENERATED; }
GROUP					{ return GROUP; }
HANDLER					{ return HANDLER; }
HASH					{ return HASH; }
HAVING					{ return HAVING; }
HEADER					{ return HEADER; }
HIGH_PRIORITY			{ return HIGH_PRIORITY; }
HOUR_MICROSECOND		{ return HOUR_MICROSECOND; }
HOUR_MINUTE				{ return HOUR_MINUTE; }
HOUR_SECOND				{ return HOUR_SECOND; }
IF						{ int c = input(yyscanner); unput(c); if(c == '(') return FIF; return IF; }
IFNULL/"("				{ return FIFNULL; }
NULLIF/"("				{ return FNULLIF; }
IGNORE					{ return IGNORE; }
IMMEDIATE				{ return IMMEDIATE; }
INCREMENT				{ return INCREMENT; }
INITIALLY				{ return INITIALLY; }
IN						{ return IN; }
INOUT					{ return INOUT; }

INNER					{ return INNER; }


INSERT					{ return INSERT; }
INTERSECT				{ return INTERSECT; }
INT4?|INTEGER			{ return INTEGER; }
INTERVAL				{ return INTERVAL; }
INTO					{ return INTO; }
IS						{ return IS; }
ITERATE					{ return ITERATE; }
CONTINUE				{ return CONTINUE; }
RESTART					{ return RESTART; }

JSONB					{ return JSON; }
JSON					{ return JSON; }
JOIN					{ return JOIN; }
IDENTITY				{ return IDENTITY; }
INDEX					{ return INDEX; }
KEY					{ return KEY; }


LATERAL					{ return LATERAL; }
LISTEN					{ return LISTEN; }
NOTIFY					{ return NOTIFY; }
UNLISTEN				{ return UNLISTEN; }
SELF					{ return SELF; }
INHERITS				{ return INHERITS; }
ONLY					{ return ONLY; }
LEADING					{ return LEADING; }
LEAVE					{ return LEAVE; }

LEFT					{ return LEFT; }
LESS					{ return LESS; }
LIKE					{ return LIKE; }
LIMIT					{ return LIMIT; }
LOCKED					{ return LOCKED; }
LOOP					{ return LOOP; }
OFFSET					{ return OFFSET; }






LONGBLOB				{ return LONGBLOB; }
LONGTEXT				{ return LONGTEXT; }

LOW_PRIORITY			{ return LOW_PRIORITY; }

MATCH					{ return MATCH; }
MAXVALUE				{ return MAXVALUE; }
MEDIUMBLOB				{ return MEDIUMBLOB; }
MIDDLEINT|MEDIUMINT		{ return MEDIUMINT; }
MINUS					{ return MINUS; }
MODIFY					{ return MODIFY; }
MEDIUMTEXT				{ return MEDIUMTEXT; }


MINVALUE				{ return MINVALUE; }
MOD						{ int c = input(yyscanner); unput(c); if(c == '(') return FMOD; return MOD; }

NATURAL					{ return NATURAL; }
NODE					{ return NODE; }
NO[ \t]+ACTION				{ return NO_ACTION; }
NOT						{ return NOT; }

NULL					{ return NULLX; }

ON						{ return ON; }
OPEN					{ return OPEN; }
OUT						{ return OUT; }
OVER					{ return OVER; }
PARTIAL					{ return PARTIAL; }
PARTITION				{ return PARTITION; }


OR						{ return OR; }
ORDER					{ return ORDER; }

OUTER					{ return OUTER; }


PRIMARY					{ return PRIMARY; }
PROCEDURE				{ return PROCEDURE; }
POLICY					{ return POLICY; }
PERMISSIVE				{ return PERMISSIVE; }


QUICK					{ return QUICK; }


REAL					{ return REAL; }

REGEXP|RLIKE			{ return REGEXP; }



RANGE					{ return RANGE; }
RECLAIM					{ return RECLAIM; }
REFERENCES				{ return REFERENCES; }
RENAME					{ return RENAME; }
REPLACE					{ int c = input(yyscanner); unput(c); if(c == '(') return FREPLACE; return REPLACE; }
RESIGNAL				{ return RESIGNAL; }
ROW					{ return ROW; }
RESTRICT				{ return RESTRICT; }
RESTRICTIVE				{ return RESTRICTIVE; }
RETURN					{ return RETURN; }
RETURNING				{ return RETURNING; }
RETURNS					{ return RETURNS; }


RIGHT					{ return RIGHT; }
ROLLUP					{ return ROLLUP; }
SCHEMA					{ return SCHEMA; }
SECURITY				{ return SECURITY; }
SEQUENCE				{ return SEQUENCE; }
START					{ return START; }
SHARD					{ return SHARD; }
SHARDS					{ return SHARDS; }
SHARE					{ return SHARE; }
SIGNAL					{ return SIGNAL; }
SKIP					{ return SKIP; }

SELECT					{ return SELECT; }


SEPARATOR				{ return SEPARATOR; }
SET						{ return SET; }
STDIN					{ return STDIN; }
STDOUT					{ return STDOUT; }
QUOTE					{ return QUOTE; }

SIMPLE					{ return SIMPLE; }
INT2|SMALLINT			{ return SMALLINT; }
STORED					{ return STORED; }
STORE					{ return STORE; }
SOME					{ return SOME; }
CHECKPOINT				{ return CHECKPOINT; }
SYSTEM_TIME				{ return SYSTEM_TIME; }
TRANSACTION				{ return TRANSACTION; }
EVO_CURRENT_XID/"("		{ return FEVO_CURRENT_XID; }
MEMORY					{ return MEMORY; }
EMBEDDING_DIM			{ return EMBEDDING_DIM; }
DISTANCE				{ return DISTANCE; }
SEARCH					{ return SEARCH; }
NAMESPACE				{ return NAMESPACE; }
NAMESPACES				{ return NAMESPACES; }
PREFIX					{ return PREFIX; }
NS						{ return NS; }
RETENTION				{ return RETENTION; }
WRITES					{ return WRITES; }
PUT						{ return PUT; }
GET						{ return GET; }
LIST					{ return LIST; }
THREAD					{ return THREAD; }
AT						{ return AT; }






SQL_BIG_RESULT			{ return SQL_BIG_RESULT; }
SQL_CALC_FOUND_ROWS		{ return SQL_CALC_FOUND_ROWS; }
SQL_SMALL_RESULT		{ return SQL_SMALL_RESULT; }


STRAIGHT_JOIN			{ return STRAIGHT_JOIN; }
TABLE					{ return TABLE; }
TEMPORARY				{ return TEMPORARY; }
GLOBAL					{ return GLOBAL; }
PRESERVE				{ return PRESERVE; }

TEXT					{ return TEXT; }
THAN					{ return THAN; }
THEN					{ return THEN; }
TIME					{ return TIME; }
TIMESTAMP				{ return TIMESTAMP; }
INT1|TINYINT			{ return TINYINT; }
TINYTEXT				{ return TINYTEXT; }

TO						{ return TO; }
TRIGGER					{ return TRIGGER; }
TRAILING				{ return TRAILING; }
TRUNCATE				{ return TRUNCATE; }



UNION					{ return UNION; }
UNIQUE					{ return UNIQUE; }
UNKNOWN					{ return UNKNOWN; }
VIEW					{ return VIEW; }
UNTIL					{ return UNTIL; }
UNSIGNED				{ return UNSIGNED; }
UPDATE					{ return UPDATE; }
UUID					{ return UUID; }

USE						{ return USE; }
USING					{ return USING; }

VALIDATE				{ return VALIDATE; }
VALUES					{ return VALUES; }
VIRTUAL					{ return VIRTUAL; }
VALUE					{ yylval->strval = strdup("VALUE"); return NAME; }
VARBINARY				{ return VARBINARY; }
VARCHAR(ACTER)?			{ return VARCHAR; }
VECTOR					{ return VECTOR; }

WHEN					{ return WHEN; }
WHERE					{ return WHERE; }

WHILE					{ return WHILE; }
WITH					{ return WITH; }

XOR						{ return XOR; }
YEAR					{ int c = input(yyscanner); unput(c); if(c == '(') return FYEAR; return YEAR; }
YEAR_MONTH				{ return YEAR_MONTH; }
ZEROFILL				{ return ZEROFILL; }


-?[0-9]+				{ yylval->intval = atoi(yytext); return INTNUM; }			/* numbers */
-?[0-9]+"."[0-9]* |
-?"."[0-9]+ |
-?[0-9]+E[-+]?[0-9]+ |
-?[0-9]+"."[0-9]*E[-+]?[0-9]+ |
-?"."[0-9]+E[-+]?[0-9]+ { yylval->floatval = atof(yytext) ;return APPROXNUM; }


TRUE					{ yylval->intval = 1; return BOOL; }							/* booleans */
UNKNOWN					{ yylval->intval = -1; return BOOL; }
FALSE					{ yylval->intval = 0; return BOOL; }


'(\\.|''|[^'\n])*' |																/* strings */
\"(\\.|\"\"|[^"\n])*\"	{ yylval->strval = strdup(yytext); return STRING; }
'(\\.|[^'\n])*$			{ yyerror(yyscanner, "Unterminated string %s", yytext); }
\"(\\.|[^"\n])*$		{ yyerror(yyscanner, "Unterminated string %s", yytext); }


X'[0-9A-F]+' |																		/* hex strings */
0X[0-9A-F]+				{ yylval->strval = strdup(yytext); return STRING; }


0B[01]+ |																			/* bit strings */
B'[01]+'				{ yylval->strval = strdup(yytext); return STRING; }


"->>"					{ return JSON_ARROW_TEXT; }									/* JSON ->> */
"<->"					{ return VEC_L2_OP; }										/* evovector L2 distance */
"<#>"					{ return VEC_INNER_OP; }									/* evovector negative inner product */
"->"					{ return JSON_ARROW; }										/* JSON -> */
[-+&~|^/%*(),.;!]		{ return yytext[0]; }										/* operators */
"["						{ return yytext[0]; }										/* array subscript / literal */
"]"						{ return yytext[0]; }
"&&"					{ return ANDOP; }
"||"					{ return OR; }
"="						{ yylval->subtok = 4; return COMPARISON; }
"<=>"					{ yylval->subtok = 12; return COMPARISON; }
">="					{ yylval->subtok = 6; return COMPARISON; }
">"						{ yylval->subtok = 2; return COMPARISON; }
"<="					{ yylval->subtok = 5; return COMPARISON; }
"<"						{ yylval->subtok = 1; return COMPARISON; }
"!=" |
"<>"					{ yylval->subtok = 3; return COMPARISON; }
"<<"					{ yylval->subtok = 1; return SHIFT; }
">>"					{ yylval->subtok = 2; return SHIFT; }
":="					{ return ASSIGN; }


SUBSTR(ING)?/"("		{ return FSUBSTRING; }										/* functions */
TRIM/"("				{ return FTRIM; }
UPPER/"("				{ return FUPPER; }
LOWER/"("				{ return FLOWER; }
LENGTH/"("			{ return FLENGTH; }
CHAR_LENGTH/"("		{ return FLENGTH; }
CONCAT/"("			{ return FCONCAT; }
COALESCE/"("			{ return FCOALESCE; }
LAST_INSERT_ID/"("		{ return FLAST_INSERT_ID; }
SCOPE_IDENTITY/"("		{ return FSCOPE_IDENTITY; }
"@@IDENTITY"			{ return FAT_IDENTITY; }
"@@LAST_INSERT_ID"		{ return FAT_LAST_INSERT_ID; }
GEN_RANDOM_UUID_V7/"("	{ return FGEN_RANDOM_UUID_V7; }
GEN_RANDOM_UUID/"("		{ return FGEN_RANDOM_UUID; }
SNOWFLAKE_ID/"("		{ return FSNOWFLAKE_ID; }
EVO_NOTIFY/"("			{ return FEVO_NOTIFY; }
PG_NOTIFY/"("			{ return FEVO_NOTIFY; }          /* PG compat alias */
PG_LISTENING_CHANNELS/"("	{ return FPG_LISTENING_CHANNELS; }
ARRAY_LENGTH/"("		{ return FARRAY_LENGTH; }
HNSW_KNN/"("			{ return FHNSW_KNN; }
HNSW_FILTER_KNN/"("		{ return FHNSW_FILTER_KNN; }
HNSW_HYBRID_EXPLAIN/"("	{ return FHNSW_HYBRID_EXPLAIN; }
HNSW					{ return HNSW; }
COSINE_DISTANCE/"("		{ return FCOSINE_DIST; }
L2_DISTANCE/"("			{ return FL2_DIST; }
INNER_PRODUCT/"("		{ return FINNER_PRODUCT; }
L1_DISTANCE/"("			{ return FL1_DIST; }
VECTOR_DIM/"("			{ return FVECTOR_DIM; }
VECTOR_NORM/"("			{ return FVECTOR_NORM; }
VECTOR_NORMALIZE/"("	{ return FVECTOR_NORMALIZE; }
UNNEST/"("				{ return FUNNEST; }
EVO_SLEEP/"("			{ return FEVO_SLEEP; }
EVO_JITTER/"("			{ return FEVO_JITTER; }
DATE_ADD/"("			{ return FDATE_ADD; }
DATE_SUB/"("			{ return FDATE_SUB; }
DATEDIFF/"("			{ return FDATEDIFF; }
NOW/"("					{ return FNOW; }
LEFT/"("				{ return FLEFT; }
RIGHT/"("				{ return FRIGHT; }
LPAD/"("				{ return FLPAD; }
RPAD/"("				{ return FRPAD; }
REVERSE/"("				{ return FREVERSE; }
REPEAT/"("				{ return FREPEAT; }
INSTR/"("				{ return FINSTR; }
LOCATE/"("				{ return FLOCATE; }
ABS/"("					{ return FABS; }
CEIL/"("				{ return FCEIL; }
CEILING/"("				{ return FCEIL; }
FLOOR/"("				{ return FFLOOR; }
ROUND/"("				{ return FROUND; }
POWER/"("				{ return FPOWER; }
POW/"("					{ return FPOWER; }
SQRT/"("				{ return FSQRT; }
RAND/"("				{ return FRAND; }
LOG/"("					{ return FLOG; }
LOG10/"("				{ return FLOG10; }
SIGN/"("				{ return FSIGN; }
PI/"("					{ return FPI; }

JSON_EXTRACT/"("		{ return FJSON_EXTRACT; }
JSON_UNQUOTE/"("		{ return FJSON_UNQUOTE; }
JSON_TYPE/"("			{ return FJSON_TYPE; }
JSON_LENGTH/"("			{ return FJSON_LENGTH; }
JSON_DEPTH/"("			{ return FJSON_DEPTH; }
JSON_VALID/"("			{ return FJSON_VALID; }
JSON_KEYS/"("			{ return FJSON_KEYS; }
JSON_PRETTY/"("			{ return FJSON_PRETTY; }
JSON_QUOTE/"("			{ return FJSON_QUOTE; }
JSON_SET/"("			{ return FJSON_SET; }
JSON_INSERT/"("			{ return FJSON_INSERT; }
JSON_REPLACE/"("		{ return FJSON_REPLACE; }
JSON_REMOVE/"("			{ return FJSON_REMOVE; }
JSON_CONTAINS/"("		{ return FJSON_CONTAINS; }
JSON_CONTAINS_PATH/"("	{ return FJSON_CONTAINS_PATH; }
JSON_SEARCH/"("			{ return FJSON_SEARCH; }
JSON_OBJECT/"("			{ return FJSON_OBJECT; }
JSON_ARRAY/"("			{ return FJSON_ARRAY; }
JSON_ARRAYAGG/"("		{ return FJSON_ARRAYAGG; }

NEXTVAL/"("				{ return FNEXTVAL; }
CURRVAL/"("				{ return FCURRVAL; }
SETVAL/"("				{ return FSETVAL; }
LASTVAL/"("				{ return FLASTVAL; }

ROW_NUMBER/"("			{ return FROW_NUMBER; }
RANK					{ int c = input(yyscanner); unput(c); if(c == '(') return FRANK; yylval->strval = strdup(yytext); return NAME; }
DENSE_RANK/"("			{ return FDENSE_RANK; }
LEAD/"("				{ return FLEAD; }
LAG/"("					{ return FLAG; }
NTILE/"("				{ return FNTILE; }
PERCENT_RANK/"("		{ return FPERCENT_RANK; }
CUME_DIST/"("			{ return FCUME_DIST; }

COUNT					{ int c = input(yyscanner); unput(c); if(c == '(') return FCOUNT; yylval->strval = strdup(yytext); return NAME; }  /* check trailing context manually */
SUM						{ int c = input(yyscanner); unput(c); if(c == '(') return FSUM; yylval->strval = strdup(yytext); return NAME; }
AVG						{ int c = input(yyscanner); unput(c); if(c == '(') return FAVG; yylval->strval = strdup(yytext); return NAME; }
MIN						{ int c = input(yyscanner); unput(c); if(c == '(') return FMIN; yylval->strval = strdup(yytext); return NAME; }
MAX						{ int c = input(yyscanner); unput(c); if(c == '(') return FMAX; yylval->strval = strdup(yytext); return NAME; }


[A-Za-z][A-Za-z0-9_]*	{ yylval->strval = strdup(yytext); return NAME; }			/* names */
`[^`/\\.\n]+`			{ yylval->strval = strdup(yytext+1); yylval->strval[yyleng-2] = 0; return NAME; }
`[^`\n]*$				{ yyerror(yyscanner, "unterminated quoted name %s", yytext); }


@[0-9a-z_.$]+ |																		/* user variables */
@\"[^"\n]+\" |
@`[^`\n]+` |
@'[^'\n]+'				{ yylval->strval = strdup(yytext+1); return USERVAR; }
@\"[^"\n]*$ |
@`[^`\n]*$ |
@'[^'\n]*$				{ yyerror(yyscanner, "unterminated quoted user variable %s", yytext); }


#.* ;																				/* comments */
"--"[ \t].* ;
"/*"					{ t_oldstate = YY_START; BEGIN COMMENT; }
<COMMENT>"*/"			{ BEGIN(t_oldstate); }
<COMMENT>.|\n ;
<COMMENT><<EOF>>		{ yyerror(yyscanner, "unclosed comment"); }


[ \t\n] /* whitespace */															/* everything else */
.						{ yyerror(yyscanner, "mystery character '%c'", *yytext); }
%%