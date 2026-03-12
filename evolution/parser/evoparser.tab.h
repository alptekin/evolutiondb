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
     CONSTRAINT = 293,
     CURRENT_TIMESTAMP = 294,
     CREATE = 295,
     CASCADE = 296,
     CROSS = 297,
     CASE = 298,
     CHECK = 299,
     COMMENT = 300,
     CURRENT_DATE = 301,
     CURRENT_TIME = 302,
     CHAR = 303,
     COLLATE = 304,
     DATABASE = 305,
     DEFERRABLE = 306,
     DEFERRED = 307,
     DISABLE = 308,
     DOMAIN = 309,
     DELAYED = 310,
     DAY_HOUR = 311,
     DAY_MICROSECOND = 312,
     DISTINCT = 313,
     DELETE = 314,
     DROP = 315,
     DAY_MINUTE = 316,
     DISTINCTROW = 317,
     DAY_SECOND = 318,
     DESC = 319,
     DEFAULT = 320,
     DOUBLE = 321,
     DATETIME = 322,
     DECIMAL = 323,
     DATE = 324,
     ENABLE = 325,
     ESCAPED = 326,
     ENUM = 327,
     END = 328,
     ELSE = 329,
     EXPLAIN = 330,
     FLOAT = 331,
     FORCE = 332,
     FOREIGN = 333,
     FROM = 334,
     FULL = 335,
     FULLTEXT = 336,
     FOR = 337,
     GROUP = 338,
     HOUR_MINUTE = 339,
     HOUR_MICROSECOND = 340,
     HIGH_PRIORITY = 341,
     HOUR_SECOND = 342,
     HAVING = 343,
     IMMEDIATE = 344,
     INITIALLY = 345,
     INTEGER = 346,
     INNER = 347,
     IGNORE = 348,
     INDEX = 349,
     IF = 350,
     INSERT = 351,
     INTO = 352,
     INT = 353,
     INTERVAL = 354,
     JOIN = 355,
     KEY = 356,
     LONGTEXT = 357,
     LOW_PRIORITY = 358,
     LEFT = 359,
     LEADING = 360,
     LIMIT = 361,
     OFFSET = 362,
     LONGBLOB = 363,
     MATCH = 364,
     MEDIUMTEXT = 365,
     MEDIUMBLOB = 366,
     MEDIUMINT = 367,
     NATURAL = 368,
     NO_ACTION = 369,
     NULLX = 370,
     OUTER = 371,
     ON = 372,
     ORDER = 373,
     ONDUPLICATE = 374,
     PARTIAL = 375,
     PRIMARY = 376,
     QUICK = 377,
     REAL = 378,
     RECLAIM = 379,
     REFERENCES = 380,
     RENAME = 381,
     RESTRICT = 382,
     ROLLUP = 383,
     RIGHT = 384,
     REPLACE = 385,
     SQL_SMALL_RESULT = 386,
     SCHEMA = 387,
     SOME = 388,
     SQL_CALC_FOUND_ROWS = 389,
     SQL_BIG_RESULT = 390,
     SIMPLE = 391,
     STRAIGHT_JOIN = 392,
     SMALLINT = 393,
     SET = 394,
     SELECT = 395,
     TINYTEXT = 396,
     TINYINT = 397,
     TO = 398,
     TEMPORARY = 399,
     TEXT = 400,
     TIMESTAMP = 401,
     TABLE = 402,
     THEN = 403,
     TRAILING = 404,
     TRUNCATE = 405,
     TINYBLOB = 406,
     TIME = 407,
     UPDATE = 408,
     UNSIGNED = 409,
     UNIQUE = 410,
     UUID = 411,
     USING = 412,
     USE = 413,
     VALIDATE = 414,
     VARCHAR = 415,
     VALUES = 416,
     VARBINARY = 417,
     WHERE = 418,
     WHEN = 419,
     WITH = 420,
     YEAR = 421,
     YEAR_MONTH = 422,
     ZEROFILL = 423,
     EXISTS = 424,
     FSUBSTRING = 425,
     FTRIM = 426,
     FDATE_ADD = 427,
     FDATE_SUB = 428,
     FCOUNT = 429,
     FSUM = 430,
     FAVG = 431,
     FMIN = 432,
     FMAX = 433,
     FUPPER = 434,
     FLOWER = 435,
     FLENGTH = 436,
     FCONCAT = 437,
     FREPLACE = 438,
     FCOALESCE = 439,
     FGEN_RANDOM_UUID = 440,
     FGEN_RANDOM_UUID_V7 = 441,
     FSNOWFLAKE_ID = 442
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
#define CONSTRAINT 293
#define CURRENT_TIMESTAMP 294
#define CREATE 295
#define CASCADE 296
#define CROSS 297
#define CASE 298
#define CHECK 299
#define COMMENT 300
#define CURRENT_DATE 301
#define CURRENT_TIME 302
#define CHAR 303
#define COLLATE 304
#define DATABASE 305
#define DEFERRABLE 306
#define DEFERRED 307
#define DISABLE 308
#define DOMAIN 309
#define DELAYED 310
#define DAY_HOUR 311
#define DAY_MICROSECOND 312
#define DISTINCT 313
#define DELETE 314
#define DROP 315
#define DAY_MINUTE 316
#define DISTINCTROW 317
#define DAY_SECOND 318
#define DESC 319
#define DEFAULT 320
#define DOUBLE 321
#define DATETIME 322
#define DECIMAL 323
#define DATE 324
#define ENABLE 325
#define ESCAPED 326
#define ENUM 327
#define END 328
#define ELSE 329
#define EXPLAIN 330
#define FLOAT 331
#define FORCE 332
#define FOREIGN 333
#define FROM 334
#define FULL 335
#define FULLTEXT 336
#define FOR 337
#define GROUP 338
#define HOUR_MINUTE 339
#define HOUR_MICROSECOND 340
#define HIGH_PRIORITY 341
#define HOUR_SECOND 342
#define HAVING 343
#define IMMEDIATE 344
#define INITIALLY 345
#define INTEGER 346
#define INNER 347
#define IGNORE 348
#define INDEX 349
#define IF 350
#define INSERT 351
#define INTO 352
#define INT 353
#define INTERVAL 354
#define JOIN 355
#define KEY 356
#define LONGTEXT 357
#define LOW_PRIORITY 358
#define LEFT 359
#define LEADING 360
#define LIMIT 361
#define OFFSET 362
#define LONGBLOB 363
#define MATCH 364
#define MEDIUMTEXT 365
#define MEDIUMBLOB 366
#define MEDIUMINT 367
#define NATURAL 368
#define NO_ACTION 369
#define NULLX 370
#define OUTER 371
#define ON 372
#define ORDER 373
#define ONDUPLICATE 374
#define PARTIAL 375
#define PRIMARY 376
#define QUICK 377
#define REAL 378
#define RECLAIM 379
#define REFERENCES 380
#define RENAME 381
#define RESTRICT 382
#define ROLLUP 383
#define RIGHT 384
#define REPLACE 385
#define SQL_SMALL_RESULT 386
#define SCHEMA 387
#define SOME 388
#define SQL_CALC_FOUND_ROWS 389
#define SQL_BIG_RESULT 390
#define SIMPLE 391
#define STRAIGHT_JOIN 392
#define SMALLINT 393
#define SET 394
#define SELECT 395
#define TINYTEXT 396
#define TINYINT 397
#define TO 398
#define TEMPORARY 399
#define TEXT 400
#define TIMESTAMP 401
#define TABLE 402
#define THEN 403
#define TRAILING 404
#define TRUNCATE 405
#define TINYBLOB 406
#define TIME 407
#define UPDATE 408
#define UNSIGNED 409
#define UNIQUE 410
#define UUID 411
#define USING 412
#define USE 413
#define VALIDATE 414
#define VARCHAR 415
#define VALUES 416
#define VARBINARY 417
#define WHERE 418
#define WHEN 419
#define WITH 420
#define YEAR 421
#define YEAR_MONTH 422
#define ZEROFILL 423
#define EXISTS 424
#define FSUBSTRING 425
#define FTRIM 426
#define FDATE_ADD 427
#define FDATE_SUB 428
#define FCOUNT 429
#define FSUM 430
#define FAVG 431
#define FMIN 432
#define FMAX 433
#define FUPPER 434
#define FLOWER 435
#define FLENGTH 436
#define FCONCAT 437
#define FREPLACE 438
#define FCOALESCE 439
#define FGEN_RANDOM_UUID 440
#define FGEN_RANDOM_UUID_V7 441
#define FSNOWFLAKE_ID 442




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
#line 431 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

