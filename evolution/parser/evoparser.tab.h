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
     CASCADE = 295,
     CROSS = 296,
     CASE = 297,
     CHECK = 298,
     COMMENT = 299,
     CURRENT_DATE = 300,
     CURRENT_TIME = 301,
     CHAR = 302,
     COLLATE = 303,
     DATABASE = 304,
     DELAYED = 305,
     DAY_HOUR = 306,
     DAY_MICROSECOND = 307,
     DISTINCT = 308,
     DELETE = 309,
     DROP = 310,
     DAY_MINUTE = 311,
     DISTINCTROW = 312,
     DAY_SECOND = 313,
     DESC = 314,
     DEFAULT = 315,
     DOUBLE = 316,
     DATETIME = 317,
     DECIMAL = 318,
     DATE = 319,
     ESCAPED = 320,
     ENUM = 321,
     END = 322,
     ELSE = 323,
     EXPLAIN = 324,
     FLOAT = 325,
     FORCE = 326,
     FOREIGN = 327,
     FROM = 328,
     FULLTEXT = 329,
     FOR = 330,
     GROUP = 331,
     HOUR_MINUTE = 332,
     HOUR_MICROSECOND = 333,
     HIGH_PRIORITY = 334,
     HOUR_SECOND = 335,
     HAVING = 336,
     INTEGER = 337,
     INNER = 338,
     IGNORE = 339,
     INDEX = 340,
     IF = 341,
     INSERT = 342,
     INTO = 343,
     INT = 344,
     INTERVAL = 345,
     JOIN = 346,
     KEY = 347,
     LONGTEXT = 348,
     LOW_PRIORITY = 349,
     LEFT = 350,
     LEADING = 351,
     LIMIT = 352,
     OFFSET = 353,
     LONGBLOB = 354,
     MEDIUMTEXT = 355,
     MEDIUMBLOB = 356,
     MEDIUMINT = 357,
     NATURAL = 358,
     NULLX = 359,
     OUTER = 360,
     ON = 361,
     ORDER = 362,
     ONDUPLICATE = 363,
     PRIMARY = 364,
     QUICK = 365,
     REAL = 366,
     RECLAIM = 367,
     REFERENCES = 368,
     RESTRICT = 369,
     ROLLUP = 370,
     RIGHT = 371,
     REPLACE = 372,
     SQL_SMALL_RESULT = 373,
     SCHEMA = 374,
     SOME = 375,
     SQL_CALC_FOUND_ROWS = 376,
     SQL_BIG_RESULT = 377,
     STRAIGHT_JOIN = 378,
     SMALLINT = 379,
     SET = 380,
     SELECT = 381,
     TINYTEXT = 382,
     TINYINT = 383,
     TEMPORARY = 384,
     TEXT = 385,
     TIMESTAMP = 386,
     TABLE = 387,
     THEN = 388,
     TRAILING = 389,
     TRUNCATE = 390,
     TINYBLOB = 391,
     TIME = 392,
     UPDATE = 393,
     UNSIGNED = 394,
     UNIQUE = 395,
     UUID = 396,
     USING = 397,
     USE = 398,
     VARCHAR = 399,
     VALUES = 400,
     VARBINARY = 401,
     WHERE = 402,
     WHEN = 403,
     WITH = 404,
     YEAR = 405,
     YEAR_MONTH = 406,
     ZEROFILL = 407,
     EXISTS = 408,
     FSUBSTRING = 409,
     FTRIM = 410,
     FDATE_ADD = 411,
     FDATE_SUB = 412,
     FCOUNT = 413,
     FSUM = 414,
     FAVG = 415,
     FMIN = 416,
     FMAX = 417,
     FUPPER = 418,
     FLOWER = 419,
     FLENGTH = 420,
     FCONCAT = 421,
     FREPLACE = 422,
     FCOALESCE = 423,
     FGEN_RANDOM_UUID = 424,
     FGEN_RANDOM_UUID_V7 = 425,
     FSNOWFLAKE_ID = 426
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
#define CASCADE 295
#define CROSS 296
#define CASE 297
#define CHECK 298
#define COMMENT 299
#define CURRENT_DATE 300
#define CURRENT_TIME 301
#define CHAR 302
#define COLLATE 303
#define DATABASE 304
#define DELAYED 305
#define DAY_HOUR 306
#define DAY_MICROSECOND 307
#define DISTINCT 308
#define DELETE 309
#define DROP 310
#define DAY_MINUTE 311
#define DISTINCTROW 312
#define DAY_SECOND 313
#define DESC 314
#define DEFAULT 315
#define DOUBLE 316
#define DATETIME 317
#define DECIMAL 318
#define DATE 319
#define ESCAPED 320
#define ENUM 321
#define END 322
#define ELSE 323
#define EXPLAIN 324
#define FLOAT 325
#define FORCE 326
#define FOREIGN 327
#define FROM 328
#define FULLTEXT 329
#define FOR 330
#define GROUP 331
#define HOUR_MINUTE 332
#define HOUR_MICROSECOND 333
#define HIGH_PRIORITY 334
#define HOUR_SECOND 335
#define HAVING 336
#define INTEGER 337
#define INNER 338
#define IGNORE 339
#define INDEX 340
#define IF 341
#define INSERT 342
#define INTO 343
#define INT 344
#define INTERVAL 345
#define JOIN 346
#define KEY 347
#define LONGTEXT 348
#define LOW_PRIORITY 349
#define LEFT 350
#define LEADING 351
#define LIMIT 352
#define OFFSET 353
#define LONGBLOB 354
#define MEDIUMTEXT 355
#define MEDIUMBLOB 356
#define MEDIUMINT 357
#define NATURAL 358
#define NULLX 359
#define OUTER 360
#define ON 361
#define ORDER 362
#define ONDUPLICATE 363
#define PRIMARY 364
#define QUICK 365
#define REAL 366
#define RECLAIM 367
#define REFERENCES 368
#define RESTRICT 369
#define ROLLUP 370
#define RIGHT 371
#define REPLACE 372
#define SQL_SMALL_RESULT 373
#define SCHEMA 374
#define SOME 375
#define SQL_CALC_FOUND_ROWS 376
#define SQL_BIG_RESULT 377
#define STRAIGHT_JOIN 378
#define SMALLINT 379
#define SET 380
#define SELECT 381
#define TINYTEXT 382
#define TINYINT 383
#define TEMPORARY 384
#define TEXT 385
#define TIMESTAMP 386
#define TABLE 387
#define THEN 388
#define TRAILING 389
#define TRUNCATE 390
#define TINYBLOB 391
#define TIME 392
#define UPDATE 393
#define UNSIGNED 394
#define UNIQUE 395
#define UUID 396
#define USING 397
#define USE 398
#define VARCHAR 399
#define VALUES 400
#define VARBINARY 401
#define WHERE 402
#define WHEN 403
#define WITH 404
#define YEAR 405
#define YEAR_MONTH 406
#define ZEROFILL 407
#define EXISTS 408
#define FSUBSTRING 409
#define FTRIM 410
#define FDATE_ADD 411
#define FDATE_SUB 412
#define FCOUNT 413
#define FSUM 414
#define FAVG 415
#define FMIN 416
#define FMAX 417
#define FUPPER 418
#define FLOWER 419
#define FLENGTH 420
#define FCONCAT 421
#define FREPLACE 422
#define FCOALESCE 423
#define FGEN_RANDOM_UUID 424
#define FGEN_RANDOM_UUID_V7 425
#define FSNOWFLAKE_ID 426




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
#line 399 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

