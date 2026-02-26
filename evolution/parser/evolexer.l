/*---------------------------------------------------------------------
-                    Scanner for evosql subset                        -
-----------------------------------------------------------------------*/

%option noyywrap nodefault yylineno case-insensitive
%{
	#define _CRT_SECURE_NO_WARNINGS
	#include "evoparser.tab.h"
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

	void yyerror(char *s, ...);
	int oldstate;
%}
%x COMMENT
%s BTWMODE

%%


ADD						{ return ADD; }					/* keywords */			
ALL						{ return ALL; }



<BTWMODE>AND			{ BEGIN INITIAL; return AND; }	/* Hack for BETWEEN ... AND ... return special AND token if BETWEEN seen */
AND						{ return ANDOP; }
ANY						{ return ANY; }
AS						{ return AS; }
ASC						{ return ASC; }
AUTO_INCREMENT			{ return AUTO_INCREMENT; }

BETWEEN					{ BEGIN BTWMODE; return BETWEEN; }
INT8|BIGINT				{ return BIGINT; }
BINARY					{ return BINARY; }
BIT						{ return BIT; }
BLOB					{ return BLOB; }
BOOL					{ return BOOLEAN; }
BOOLEAN					{ return BOOLEAN; }
BOTH					{ return BOTH; }
BY						{ return BY; }


CASE					{ return CASE; }

CHAR(ACTER)?			{ return CHAR; }

COLLATE					{ return COLLATE; }

COMMENT					{ return COMMENT; }




CREATE					{ return CREATE; }
CROSS					{ return CROSS; }
CURRENT_DATE			{ return CURRENT_DATE; }
CURRENT_TIME			{ return CURRENT_TIME; }
CURRENT_TIMESTAMP		{ return CURRENT_TIMESTAMP; }




DATE					{ return DATE; }
DATETIME				{ return DATETIME; }
DAY_HOUR				{ return DAY_HOUR; }
DAY_MICROSECOND			{ return DAY_MICROSECOND; }
DAY_MINUTE				{ return DAY_MINUTE; }
DAY_SECOND				{ return DAY_SECOND; }
NUMERIC|DEC|DECIMAL		{ return DECIMAL; }

DEFAULT					{ return DEFAULT; }
DELAYED					{ return DELAYED; }
DELETE					{ return DELETE; }
DESC					{ return DESC; }
DROP					{ return DROP; }


DISTINCT				{ return DISTINCT; }
DISTINCTROW				{ return DISTINCTROW; }

FLOAT8|DOUBLE			{ return DOUBLE; }



ELSE					{ return ELSE; }

END						{ return END; }
ENUM					{ return ENUM; }
ESCAPED					{ return ESCAPED; }
EXISTS					{ yylval.subtok = 0; return EXISTS; }
NOT[ \t\n]+EXISTS		{ yylval.subtok = 1; return EXISTS; }



FLOAT4?					{ return FLOAT; }
FOR						{ return FOR; }
FORCE					{ return FORCE; }

FROM					{ return FROM; }
FULLTEXT				{ return FULLTEXT; }

GROUP					{ return GROUP; }
HAVING					{ return HAVING; }
HIGH_PRIORITY			{ return HIGH_PRIORITY; }
HOUR_MICROSECOND		{ return HOUR_MICROSECOND; }
HOUR_MINUTE				{ return HOUR_MINUTE; }
HOUR_SECOND				{ return HOUR_SECOND; }
IF						{ return IF; }
IGNORE					{ return IGNORE; }
IN						{ return IN; }

INNER					{ return INNER; }


INSERT					{ return INSERT; }
INT4?|INTEGER			{ return INTEGER; }
INTERVAL				{ return INTERVAL; }
INTO					{ return INTO; }
IS						{ return IS; }

JOIN					{ return JOIN; }
INDEX|KEY				{ return KEY; }


LEADING					{ return LEADING; }

LEFT					{ return LEFT; }
LIKE					{ return LIKE; }
LIMIT					{ return LIMIT; }






LONGBLOB				{ return LONGBLOB; }
LONGTEXT				{ return LONGTEXT; }

LOW_PRIORITY			{ return LOW_PRIORITY; }

MEDIUMBLOB				{ return MEDIUMBLOB; }
MIDDLEINT|MEDIUMINT		{ return MEDIUMINT; }
MEDIUMTEXT				{ return MEDIUMTEXT; }


MOD						{ return MOD; }

NATURAL					{ return NATURAL; }
NOT						{ return NOT; }

NULL					{ return NULLX; }

ON						{ return ON; }



OR						{ return OR; }
ORDER					{ return ORDER; }

OUTER					{ return OUTER; }


PRIMARY					{ return PRIMARY; }


QUICK					{ return QUICK; }


REAL					{ return REAL; }

REGEXP|RLIKE			{ return REGEXP; }



REPLACE					{ return REPLACE; }




RIGHT					{ return RIGHT; }
ROLLUP					{ return ROLLUP; }
SCHEMA					{ return SCHEMA; }


SELECT					{ return SELECT; }


SET						{ return SET; }

INT2|SMALLINT			{ return SMALLINT; }
SOME					{ return SOME; }






SQL_BIG_RESULT			{ return SQL_BIG_RESULT; }
SQL_CALC_FOUND_ROWS		{ return SQL_CALC_FOUND_ROWS; }
SQL_SMALL_RESULT		{ return SQL_SMALL_RESULT; }


STRAIGHT_JOIN			{ return STRAIGHT_JOIN; }
TABLE					{ return TABLE; }
TEMPORARY				{ return TEMPORARY; }

TEXT					{ return TEXT; }
THEN					{ return THEN; }
TIME					{ return TIME; }
TIMESTAMP				{ return TIMESTAMP; }
INT1|TINYINT			{ return TINYINT; }
TINYTEXT				{ return TINYTEXT; }

TRAILING				{ return TRAILING; }
TRUNCATE				{ return TRUNCATE; }



UNIQUE					{ return UNIQUE; }

UNSIGNED				{ return UNSIGNED; }
UPDATE					{ return UPDATE; }

USE						{ return USE; }
USING					{ return USING; }

VALUES?					{ return VALUES; }
VARBINARY				{ return VARBINARY; }
VARCHAR(ACTER)?			{ return VARCHAR; }

WHEN					{ return WHEN; }
WHERE					{ return WHERE; }

WITH					{ return WITH; }

XOR						{ return XOR; }
YEAR					{ return YEAR; }
YEAR_MONTH				{ return YEAR_MONTH; }
ZEROFILL				{ return ZEROFILL; }


-?[0-9]+				{ yylval.intval = atoi(yytext); return INTNUM; }			/* numbers */
-?[0-9]+"."[0-9]* |
-?"."[0-9]+ |
-?[0-9]+E[-+]?[0-9]+ |
-?[0-9]+"."[0-9]*E[-+]?[0-9]+ |
-?"."[0-9]+E[-+]?[0-9]+ { yylval.floatval = atof(yytext) ;return APPROXNUM; }


TRUE					{ yylval.intval = 1; return BOOL; }							/* booleans */
UNKNOWN					{ yylval.intval = -1; return BOOL; }
FALSE					{ yylval.intval = 0; return BOOL; }


'(\\.|''|[^'\n])*' |																/* strings */
\"(\\.|\"\"|[^"\n])*\"	{ yylval.strval = strdup(yytext); return STRING; }
'(\\.|[^'\n])*$			{ yyerror("Unterminated string %s", yytext); }
\"(\\.|[^"\n])*$		{ yyerror("Unterminated string %s", yytext); }


X'[0-9A-F]+' |																		/* hex strings */
0X[0-9A-F]+				{ yylval.strval = strdup(yytext); return STRING; }


0B[01]+ |																			/* bit strings */
B'[01]+'				{ yylval.strval = strdup(yytext); return STRING; }


[-+&~|^/%*(),.;!]		{ return yytext[0]; }										/* operators */
"&&"					{ return ANDOP; }
"||"					{ return OR; }
"="						{ yylval.subtok = 4; return COMPARISON; }
"<=>"					{ yylval.subtok = 12; return COMPARISON; }
">="					{ yylval.subtok = 6; return COMPARISON; }
">"						{ yylval.subtok = 2; return COMPARISON; }
"<="					{ yylval.subtok = 5; return COMPARISON; }
"<"						{ yylval.subtok = 1; return COMPARISON; }
"!=" |
"<>"					{ yylval.subtok = 3; return COMPARISON; }
"<<"					{ yylval.subtok = 1; return SHIFT; }
">>"					{ yylval.subtok = 2; return SHIFT; }
":="					{ return ASSIGN; }


SUBSTR(ING)?/"("		{ return FSUBSTRING; }										/* functions */
TRIM/"("				{ return FTRIM; }
DATE_ADD/"("			{ return FDATE_ADD; }
DATE_SUB/"("			{ return FDATE_SUB; }

COUNT					{ int c = input(); unput(c); if(c == '(') return FCOUNT; yylval.strval = strdup(yytext); return NAME; }  /* check trailing context manually */


[A-Za-z][A-Za-z0-9_]*	{ yylval.strval = strdup(yytext); return NAME; }			/* names */
`[^`/\\.\n]+`			{ yylval.strval = strdup(yytext+1); yylval.strval[yyleng-2] = 0; return NAME; }
`[^`\n]*$				{ yyerror("unterminated quoted name %s", yytext); }


@[0-9a-z_.$]+ |																		/* user variables */
@\"[^"\n]+\" |
@`[^`\n]+` |
@'[^'\n]+'				{ yylval.strval = strdup(yytext+1); return USERVAR; }
@\"[^"\n]*$ |
@`[^`\n]*$ |
@'[^'\n]*$				{ yyerror("unterminated quoted user variable %s", yytext); }


#.* ;																				/* comments */
"--"[ \t].* ;
"/*"					{ oldstate = YY_START; BEGIN COMMENT; }
<COMMENT>"*/"			{ BEGIN oldstate; }
<COMMENT>.|\n ;
<COMMENT><<EOF>>		{ yyerror("unclosed comment"); }


[ \t\n] /* whitespace */															/* everything else */
.						{ yyerror("mystery character '%c'", *yytext); }
%%