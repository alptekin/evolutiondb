/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     BOOLEAN = 287,
     BY = 288,
     BINARY = 289,
     BOTH = 290,
     BIGINT = 291,
     BIT = 292,
     CURRENT_TIMESTAMP = 293,
     CREATE = 294,
     CROSS = 295,
     CASE = 296,
     CHECK = 297,
     COMMENT = 298,
     CURRENT_DATE = 299,
     CURRENT_TIME = 300,
     CHAR = 301,
     COLLATE = 302,
     DATABASE = 303,
     DELAYED = 304,
     DAY_HOUR = 305,
     DAY_MICROSECOND = 306,
     DISTINCT = 307,
     DELETE = 308,
     DROP = 309,
     DAY_MINUTE = 310,
     DISTINCTROW = 311,
     DAY_SECOND = 312,
     DESC = 313,
     DEFAULT = 314,
     DOUBLE = 315,
     DATETIME = 316,
     DECIMAL = 317,
     DATE = 318,
     ESCAPED = 319,
     ENUM = 320,
     END = 321,
     ELSE = 322,
     EXPLAIN = 323,
     FLOAT = 324,
     FORCE = 325,
     FROM = 326,
     FULLTEXT = 327,
     FOR = 328,
     GROUP = 329,
     HOUR_MINUTE = 330,
     HOUR_MICROSECOND = 331,
     HIGH_PRIORITY = 332,
     HOUR_SECOND = 333,
     HAVING = 334,
     INTEGER = 335,
     INNER = 336,
     IGNORE = 337,
     INDEX = 338,
     IF = 339,
     INSERT = 340,
     INTO = 341,
     INT = 342,
     INTERVAL = 343,
     JOIN = 344,
     KEY = 345,
     LONGTEXT = 346,
     LOW_PRIORITY = 347,
     LEFT = 348,
     LEADING = 349,
     LIMIT = 350,
     OFFSET = 351,
     LONGBLOB = 352,
     MEDIUMTEXT = 353,
     MEDIUMBLOB = 354,
     MEDIUMINT = 355,
     NATURAL = 356,
     NULLX = 357,
     OUTER = 358,
     ON = 359,
     ORDER = 360,
     ONDUPLICATE = 361,
     PRIMARY = 362,
     QUICK = 363,
     REAL = 364,
     ROLLUP = 365,
     RIGHT = 366,
     REPLACE = 367,
     SQL_SMALL_RESULT = 368,
     SCHEMA = 369,
     SOME = 370,
     SQL_CALC_FOUND_ROWS = 371,
     SQL_BIG_RESULT = 372,
     STRAIGHT_JOIN = 373,
     SMALLINT = 374,
     SET = 375,
     SELECT = 376,
     TINYTEXT = 377,
     TINYINT = 378,
     TEMPORARY = 379,
     TEXT = 380,
     TIMESTAMP = 381,
     TABLE = 382,
     THEN = 383,
     TRAILING = 384,
     TRUNCATE = 385,
     TINYBLOB = 386,
     TIME = 387,
     UPDATE = 388,
     UNSIGNED = 389,
     UNIQUE = 390,
     USING = 391,
     USE = 392,
     VARCHAR = 393,
     VALUES = 394,
     VARBINARY = 395,
     WHERE = 396,
     WHEN = 397,
     WITH = 398,
     YEAR = 399,
     YEAR_MONTH = 400,
     ZEROFILL = 401,
     EXISTS = 402,
     FSUBSTRING = 403,
     FTRIM = 404,
     FDATE_ADD = 405,
     FDATE_SUB = 406,
     FCOUNT = 407,
     FSUM = 408,
     FAVG = 409,
     FMIN = 410,
     FMAX = 411,
     FUPPER = 412,
     FLOWER = 413,
     FLENGTH = 414,
     FCONCAT = 415,
     FREPLACE = 416,
     FCOALESCE = 417
   };
#endif
/* Tokens.  */
#define NAME 258
#define STRING 259
#define INTNUM 260
#define BOOL 261
#define APPROXNUM 262
#define USERVAR 263
#define ASSIGN 264
#define OR 265
#define XOR 266
#define ANDOP 267
#define REGEXP 268
#define LIKE 269
#define IS 270
#define IN 271
#define NOT 272
#define BETWEEN 273
#define COMPARISON 274
#define SHIFT 275
#define MOD 276
#define UMINUS 277
#define ALTER 278
#define ADD 279
#define ALL 280
#define ANY 281
#define AUTO_INCREMENT 282
#define ASC 283
#define AND 284
#define AS 285
#define BLOB 286
#define BOOLEAN 287
#define BY 288
#define BINARY 289
#define BOTH 290
#define BIGINT 291
#define BIT 292
#define CURRENT_TIMESTAMP 293
#define CREATE 294
#define CROSS 295
#define CASE 296
#define CHECK 297
#define COMMENT 298
#define CURRENT_DATE 299
#define CURRENT_TIME 300
#define CHAR 301
#define COLLATE 302
#define DATABASE 303
#define DELAYED 304
#define DAY_HOUR 305
#define DAY_MICROSECOND 306
#define DISTINCT 307
#define DELETE 308
#define DROP 309
#define DAY_MINUTE 310
#define DISTINCTROW 311
#define DAY_SECOND 312
#define DESC 313
#define DEFAULT 314
#define DOUBLE 315
#define DATETIME 316
#define DECIMAL 317
#define DATE 318
#define ESCAPED 319
#define ENUM 320
#define END 321
#define ELSE 322
#define EXPLAIN 323
#define FLOAT 324
#define FORCE 325
#define FROM 326
#define FULLTEXT 327
#define FOR 328
#define GROUP 329
#define HOUR_MINUTE 330
#define HOUR_MICROSECOND 331
#define HIGH_PRIORITY 332
#define HOUR_SECOND 333
#define HAVING 334
#define INTEGER 335
#define INNER 336
#define IGNORE 337
#define INDEX 338
#define IF 339
#define INSERT 340
#define INTO 341
#define INT 342
#define INTERVAL 343
#define JOIN 344
#define KEY 345
#define LONGTEXT 346
#define LOW_PRIORITY 347
#define LEFT 348
#define LEADING 349
#define LIMIT 350
#define OFFSET 351
#define LONGBLOB 352
#define MEDIUMTEXT 353
#define MEDIUMBLOB 354
#define MEDIUMINT 355
#define NATURAL 356
#define NULLX 357
#define OUTER 358
#define ON 359
#define ORDER 360
#define ONDUPLICATE 361
#define PRIMARY 362
#define QUICK 363
#define REAL 364
#define ROLLUP 365
#define RIGHT 366
#define REPLACE 367
#define SQL_SMALL_RESULT 368
#define SCHEMA 369
#define SOME 370
#define SQL_CALC_FOUND_ROWS 371
#define SQL_BIG_RESULT 372
#define STRAIGHT_JOIN 373
#define SMALLINT 374
#define SET 375
#define SELECT 376
#define TINYTEXT 377
#define TINYINT 378
#define TEMPORARY 379
#define TEXT 380
#define TIMESTAMP 381
#define TABLE 382
#define THEN 383
#define TRAILING 384
#define TRUNCATE 385
#define TINYBLOB 386
#define TIME 387
#define UPDATE 388
#define UNSIGNED 389
#define UNIQUE 390
#define USING 391
#define USE 392
#define VARCHAR 393
#define VALUES 394
#define VARBINARY 395
#define WHERE 396
#define WHEN 397
#define WITH 398
#define YEAR 399
#define YEAR_MONTH 400
#define ZEROFILL 401
#define EXISTS 402
#define FSUBSTRING 403
#define FTRIM 404
#define FDATE_ADD 405
#define FDATE_SUB 406
#define FCOUNT 407
#define FSUM 408
#define FAVG 409
#define FMIN 410
#define FMAX 411
#define FUPPER 412
#define FLOWER 413
#define FLENGTH 414
#define FCONCAT 415
#define FREPLACE 416
#define FCOALESCE 417




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 1529 of yacc.c.  */
#line 381 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

