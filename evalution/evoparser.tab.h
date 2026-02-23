
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     STRING = 259,
     INTNUM = 260,
     BOOL = 261,
     APPROXNUM = 262,
     USERVAR = 263,
     ASSIGN = 264,
     OR = 265,
     XOR = 266,
     ANDOP = 267,
     REGEXP = 268,
     LIKE = 269,
     IS = 270,
     IN = 271,
     NOT = 272,
     BETWEEN = 273,
     COMPARISON = 274,
     SHIFT = 275,
     MOD = 276,
     UMINUS = 277,
     ALTER = 278,
     ADD = 279,
     ALL = 280,
     ANY = 281,
     AUTO_INCREMENT = 282,
     ASC = 283,
     AND = 284,
     AS = 285,
     BLOB = 286,
     BY = 287,
     BINARY = 288,
     BOTH = 289,
     BIGINT = 290,
     BIT = 291,
     CURRENT_TIMESTAMP = 292,
     CREATE = 293,
     CROSS = 294,
     CASE = 295,
     COMMENT = 296,
     CURRENT_DATE = 297,
     CURRENT_TIME = 298,
     CHAR = 299,
     COLLATE = 300,
     DATABASE = 301,
     DELAYED = 302,
     DAY_HOUR = 303,
     DAY_MICROSECOND = 304,
     DISTINCT = 305,
     DELETE = 306,
     DAY_MINUTE = 307,
     DISTINCTROW = 308,
     DAY_SECOND = 309,
     DESC = 310,
     DEFAULT = 311,
     DOUBLE = 312,
     DATETIME = 313,
     DECIMAL = 314,
     DATE = 315,
     ESCAPED = 316,
     ENUM = 317,
     END = 318,
     ELSE = 319,
     FLOAT = 320,
     FORCE = 321,
     FROM = 322,
     FULLTEXT = 323,
     FOR = 324,
     GROUP = 325,
     HOUR_MINUTE = 326,
     HOUR_MICROSECOND = 327,
     HIGH_PRIORITY = 328,
     HOUR_SECOND = 329,
     HAVING = 330,
     INTEGER = 331,
     INNER = 332,
     IGNORE = 333,
     INDEX = 334,
     IF = 335,
     INSERT = 336,
     INTO = 337,
     INT = 338,
     INTERVAL = 339,
     JOIN = 340,
     KEY = 341,
     LONGTEXT = 342,
     LOW_PRIORITY = 343,
     LEFT = 344,
     LEADING = 345,
     LIMIT = 346,
     LONGBLOB = 347,
     MEDIUMTEXT = 348,
     MEDIUMBLOB = 349,
     MEDIUMINT = 350,
     NATURAL = 351,
     NULLX = 352,
     OUTER = 353,
     ON = 354,
     ORDER = 355,
     ONDUPLICATE = 356,
     PRIMARY = 357,
     QUICK = 358,
     REAL = 359,
     ROLLUP = 360,
     RIGHT = 361,
     REPLACE = 362,
     SQL_SMALL_RESULT = 363,
     SCHEMA = 364,
     SOME = 365,
     SQL_CALC_FOUND_ROWS = 366,
     SQL_BIG_RESULT = 367,
     STRAIGHT_JOIN = 368,
     SMALLINT = 369,
     SET = 370,
     SELECT = 371,
     TINYTEXT = 372,
     TINYINT = 373,
     TEMPORARY = 374,
     TEXT = 375,
     TIMESTAMP = 376,
     TABLE = 377,
     THEN = 378,
     TRAILING = 379,
     TINYBLOB = 380,
     TIME = 381,
     UPDATE = 382,
     UNSIGNED = 383,
     UNIQUE = 384,
     USING = 385,
     USE = 386,
     VARCHAR = 387,
     VALUES = 388,
     VARBINARY = 389,
     WHERE = 390,
     WHEN = 391,
     WITH = 392,
     YEAR = 393,
     YEAR_MONTH = 394,
     ZEROFILL = 395,
     EXISTS = 396,
     FSUBSTRING = 397,
     FTRIM = 398,
     FDATE_ADD = 399,
     FDATE_SUB = 400,
     FCOUNT = 401
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 15 "evoparser.y"

	int intval;
	double floatval;
	char *strval;
	int subtok;



/* Line 1676 of yacc.c  */
#line 207 "evoparser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


