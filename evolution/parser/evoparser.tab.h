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
     FLOAT = 323,
     FORCE = 324,
     FROM = 325,
     FULLTEXT = 326,
     FOR = 327,
     GROUP = 328,
     HOUR_MINUTE = 329,
     HOUR_MICROSECOND = 330,
     HIGH_PRIORITY = 331,
     HOUR_SECOND = 332,
     HAVING = 333,
     INTEGER = 334,
     INNER = 335,
     IGNORE = 336,
     INDEX = 337,
     IF = 338,
     INSERT = 339,
     INTO = 340,
     INT = 341,
     INTERVAL = 342,
     JOIN = 343,
     KEY = 344,
     LONGTEXT = 345,
     LOW_PRIORITY = 346,
     LEFT = 347,
     LEADING = 348,
     LIMIT = 349,
     OFFSET = 350,
     LONGBLOB = 351,
     MEDIUMTEXT = 352,
     MEDIUMBLOB = 353,
     MEDIUMINT = 354,
     NATURAL = 355,
     NULLX = 356,
     OUTER = 357,
     ON = 358,
     ORDER = 359,
     ONDUPLICATE = 360,
     PRIMARY = 361,
     QUICK = 362,
     REAL = 363,
     ROLLUP = 364,
     RIGHT = 365,
     REPLACE = 366,
     SQL_SMALL_RESULT = 367,
     SCHEMA = 368,
     SOME = 369,
     SQL_CALC_FOUND_ROWS = 370,
     SQL_BIG_RESULT = 371,
     STRAIGHT_JOIN = 372,
     SMALLINT = 373,
     SET = 374,
     SELECT = 375,
     TINYTEXT = 376,
     TINYINT = 377,
     TEMPORARY = 378,
     TEXT = 379,
     TIMESTAMP = 380,
     TABLE = 381,
     THEN = 382,
     TRAILING = 383,
     TRUNCATE = 384,
     TINYBLOB = 385,
     TIME = 386,
     UPDATE = 387,
     UNSIGNED = 388,
     UNIQUE = 389,
     USING = 390,
     USE = 391,
     VARCHAR = 392,
     VALUES = 393,
     VARBINARY = 394,
     WHERE = 395,
     WHEN = 396,
     WITH = 397,
     YEAR = 398,
     YEAR_MONTH = 399,
     ZEROFILL = 400,
     EXISTS = 401,
     FSUBSTRING = 402,
     FTRIM = 403,
     FDATE_ADD = 404,
     FDATE_SUB = 405,
     FCOUNT = 406,
     FSUM = 407,
     FAVG = 408,
     FMIN = 409,
     FMAX = 410,
     FUPPER = 411,
     FLOWER = 412,
     FLENGTH = 413,
     FCONCAT = 414,
     FREPLACE = 415,
     FCOALESCE = 416
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
#define FLOAT 323
#define FORCE 324
#define FROM 325
#define FULLTEXT 326
#define FOR 327
#define GROUP 328
#define HOUR_MINUTE 329
#define HOUR_MICROSECOND 330
#define HIGH_PRIORITY 331
#define HOUR_SECOND 332
#define HAVING 333
#define INTEGER 334
#define INNER 335
#define IGNORE 336
#define INDEX 337
#define IF 338
#define INSERT 339
#define INTO 340
#define INT 341
#define INTERVAL 342
#define JOIN 343
#define KEY 344
#define LONGTEXT 345
#define LOW_PRIORITY 346
#define LEFT 347
#define LEADING 348
#define LIMIT 349
#define OFFSET 350
#define LONGBLOB 351
#define MEDIUMTEXT 352
#define MEDIUMBLOB 353
#define MEDIUMINT 354
#define NATURAL 355
#define NULLX 356
#define OUTER 357
#define ON 358
#define ORDER 359
#define ONDUPLICATE 360
#define PRIMARY 361
#define QUICK 362
#define REAL 363
#define ROLLUP 364
#define RIGHT 365
#define REPLACE 366
#define SQL_SMALL_RESULT 367
#define SCHEMA 368
#define SOME 369
#define SQL_CALC_FOUND_ROWS 370
#define SQL_BIG_RESULT 371
#define STRAIGHT_JOIN 372
#define SMALLINT 373
#define SET 374
#define SELECT 375
#define TINYTEXT 376
#define TINYINT 377
#define TEMPORARY 378
#define TEXT 379
#define TIMESTAMP 380
#define TABLE 381
#define THEN 382
#define TRAILING 383
#define TRUNCATE 384
#define TINYBLOB 385
#define TIME 386
#define UPDATE 387
#define UNSIGNED 388
#define UNIQUE 389
#define USING 390
#define USE 391
#define VARCHAR 392
#define VALUES 393
#define VARBINARY 394
#define WHERE 395
#define WHEN 396
#define WITH 397
#define YEAR 398
#define YEAR_MONTH 399
#define ZEROFILL 400
#define EXISTS 401
#define FSUBSTRING 402
#define FTRIM 403
#define FDATE_ADD 404
#define FDATE_SUB 405
#define FCOUNT 406
#define FSUM 407
#define FAVG 408
#define FMIN 409
#define FMAX 410
#define FUPPER 411
#define FLOWER 412
#define FLENGTH 413
#define FCONCAT 414
#define FREPLACE 415
#define FCOALESCE 416




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
#line 379 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

