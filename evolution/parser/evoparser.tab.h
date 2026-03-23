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
     ANALYZE = 281,
     ANY = 282,
     AUTO_INCREMENT = 283,
     ASC = 284,
     AND = 285,
     AS = 286,
     ALWAYS = 287,
     IDENTITY = 288,
     GENERATED = 289,
     STORED = 290,
     VIRTUAL = 291,
     BLOB = 292,
     BOOLEAN = 293,
     BY = 294,
     BINARY = 295,
     BOTH = 296,
     BIGINT = 297,
     BIT = 298,
     CONSTRAINT = 299,
     CURRENT_TIMESTAMP = 300,
     CREATE = 301,
     CASCADE = 302,
     CROSS = 303,
     CASE = 304,
     CHECK = 305,
     COMMENT = 306,
     CURRENT_DATE = 307,
     CURRENT_TIME = 308,
     CHAR = 309,
     COLLATE = 310,
     COLUMN = 311,
     CONCURRENTLY = 312,
     DATABASE = 313,
     DEFERRABLE = 314,
     DEFERRED = 315,
     DISABLE = 316,
     DOMAIN = 317,
     DELAYED = 318,
     DAY_HOUR = 319,
     DAY_MICROSECOND = 320,
     DISTINCT = 321,
     DELETE = 322,
     DROP = 323,
     DAY_MINUTE = 324,
     DISTINCTROW = 325,
     DAY_SECOND = 326,
     DESC = 327,
     DEFAULT = 328,
     DOUBLE = 329,
     DATETIME = 330,
     DECIMAL = 331,
     DATE = 332,
     ENABLE = 333,
     ESCAPED = 334,
     ENUM = 335,
     END = 336,
     ELSE = 337,
     EXPLAIN = 338,
     FLOAT = 339,
     FORCE = 340,
     FOREIGN = 341,
     FROM = 342,
     FULL = 343,
     FULLTEXT = 344,
     FOR = 345,
     GROUP = 346,
     HOUR_MINUTE = 347,
     HOUR_MICROSECOND = 348,
     HIGH_PRIORITY = 349,
     HOUR_SECOND = 350,
     HAVING = 351,
     IMMEDIATE = 352,
     INITIALLY = 353,
     INTEGER = 354,
     INNER = 355,
     IGNORE = 356,
     INDEX = 357,
     IF = 358,
     INSERT = 359,
     INTO = 360,
     INT = 361,
     INTERVAL = 362,
     JOIN = 363,
     KEY = 364,
     LONGTEXT = 365,
     LOW_PRIORITY = 366,
     LEFT = 367,
     LEADING = 368,
     LIMIT = 369,
     LOCKED = 370,
     OFFSET = 371,
     LONGBLOB = 372,
     MATCH = 373,
     MEDIUMTEXT = 374,
     MEDIUMBLOB = 375,
     MEDIUMINT = 376,
     NATURAL = 377,
     NO_ACTION = 378,
     NULLX = 379,
     OUTER = 380,
     ON = 381,
     ORDER = 382,
     ONDUPLICATE = 383,
     PARTIAL = 384,
     PRIMARY = 385,
     QUICK = 386,
     REAL = 387,
     RECLAIM = 388,
     REFERENCES = 389,
     RENAME = 390,
     RESTRICT = 391,
     ROLLUP = 392,
     RIGHT = 393,
     REPLACE = 394,
     SQL_SMALL_RESULT = 395,
     SCHEMA = 396,
     SHARE = 397,
     SKIP = 398,
     SOME = 399,
     SQL_CALC_FOUND_ROWS = 400,
     SQL_BIG_RESULT = 401,
     SIMPLE = 402,
     STRAIGHT_JOIN = 403,
     SMALLINT = 404,
     SET = 405,
     SELECT = 406,
     TINYTEXT = 407,
     TINYINT = 408,
     TO = 409,
     TEMPORARY = 410,
     GLOBAL = 411,
     PRESERVE = 412,
     TEXT = 413,
     TIMESTAMP = 414,
     TABLE = 415,
     THEN = 416,
     TRAILING = 417,
     TRUNCATE = 418,
     TINYBLOB = 419,
     TIME = 420,
     UPDATE = 421,
     UNSIGNED = 422,
     UNIQUE = 423,
     UUID = 424,
     USING = 425,
     USE = 426,
     HASH = 427,
     VALIDATE = 428,
     VARCHAR = 429,
     VALUES = 430,
     VARBINARY = 431,
     WHERE = 432,
     WHEN = 433,
     WITH = 434,
     YEAR = 435,
     YEAR_MONTH = 436,
     ZEROFILL = 437,
     EXISTS = 438,
     FSUBSTRING = 439,
     FTRIM = 440,
     FDATE_ADD = 441,
     FDATE_SUB = 442,
     FCOUNT = 443,
     FSUM = 444,
     FAVG = 445,
     FMIN = 446,
     FMAX = 447,
     FUPPER = 448,
     FLOWER = 449,
     FLENGTH = 450,
     FCONCAT = 451,
     FREPLACE = 452,
     FCOALESCE = 453,
     FGEN_RANDOM_UUID = 454,
     FGEN_RANDOM_UUID_V7 = 455,
     FSNOWFLAKE_ID = 456,
     FLAST_INSERT_ID = 457
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
#define ANALYZE 281
#define ANY 282
#define AUTO_INCREMENT 283
#define ASC 284
#define AND 285
#define AS 286
#define ALWAYS 287
#define IDENTITY 288
#define GENERATED 289
#define STORED 290
#define VIRTUAL 291
#define BLOB 292
#define BOOLEAN 293
#define BY 294
#define BINARY 295
#define BOTH 296
#define BIGINT 297
#define BIT 298
#define CONSTRAINT 299
#define CURRENT_TIMESTAMP 300
#define CREATE 301
#define CASCADE 302
#define CROSS 303
#define CASE 304
#define CHECK 305
#define COMMENT 306
#define CURRENT_DATE 307
#define CURRENT_TIME 308
#define CHAR 309
#define COLLATE 310
#define COLUMN 311
#define CONCURRENTLY 312
#define DATABASE 313
#define DEFERRABLE 314
#define DEFERRED 315
#define DISABLE 316
#define DOMAIN 317
#define DELAYED 318
#define DAY_HOUR 319
#define DAY_MICROSECOND 320
#define DISTINCT 321
#define DELETE 322
#define DROP 323
#define DAY_MINUTE 324
#define DISTINCTROW 325
#define DAY_SECOND 326
#define DESC 327
#define DEFAULT 328
#define DOUBLE 329
#define DATETIME 330
#define DECIMAL 331
#define DATE 332
#define ENABLE 333
#define ESCAPED 334
#define ENUM 335
#define END 336
#define ELSE 337
#define EXPLAIN 338
#define FLOAT 339
#define FORCE 340
#define FOREIGN 341
#define FROM 342
#define FULL 343
#define FULLTEXT 344
#define FOR 345
#define GROUP 346
#define HOUR_MINUTE 347
#define HOUR_MICROSECOND 348
#define HIGH_PRIORITY 349
#define HOUR_SECOND 350
#define HAVING 351
#define IMMEDIATE 352
#define INITIALLY 353
#define INTEGER 354
#define INNER 355
#define IGNORE 356
#define INDEX 357
#define IF 358
#define INSERT 359
#define INTO 360
#define INT 361
#define INTERVAL 362
#define JOIN 363
#define KEY 364
#define LONGTEXT 365
#define LOW_PRIORITY 366
#define LEFT 367
#define LEADING 368
#define LIMIT 369
#define LOCKED 370
#define OFFSET 371
#define LONGBLOB 372
#define MATCH 373
#define MEDIUMTEXT 374
#define MEDIUMBLOB 375
#define MEDIUMINT 376
#define NATURAL 377
#define NO_ACTION 378
#define NULLX 379
#define OUTER 380
#define ON 381
#define ORDER 382
#define ONDUPLICATE 383
#define PARTIAL 384
#define PRIMARY 385
#define QUICK 386
#define REAL 387
#define RECLAIM 388
#define REFERENCES 389
#define RENAME 390
#define RESTRICT 391
#define ROLLUP 392
#define RIGHT 393
#define REPLACE 394
#define SQL_SMALL_RESULT 395
#define SCHEMA 396
#define SHARE 397
#define SKIP 398
#define SOME 399
#define SQL_CALC_FOUND_ROWS 400
#define SQL_BIG_RESULT 401
#define SIMPLE 402
#define STRAIGHT_JOIN 403
#define SMALLINT 404
#define SET 405
#define SELECT 406
#define TINYTEXT 407
#define TINYINT 408
#define TO 409
#define TEMPORARY 410
#define GLOBAL 411
#define PRESERVE 412
#define TEXT 413
#define TIMESTAMP 414
#define TABLE 415
#define THEN 416
#define TRAILING 417
#define TRUNCATE 418
#define TINYBLOB 419
#define TIME 420
#define UPDATE 421
#define UNSIGNED 422
#define UNIQUE 423
#define UUID 424
#define USING 425
#define USE 426
#define HASH 427
#define VALIDATE 428
#define VARCHAR 429
#define VALUES 430
#define VARBINARY 431
#define WHERE 432
#define WHEN 433
#define WITH 434
#define YEAR 435
#define YEAR_MONTH 436
#define ZEROFILL 437
#define EXISTS 438
#define FSUBSTRING 439
#define FTRIM 440
#define FDATE_ADD 441
#define FDATE_SUB 442
#define FCOUNT 443
#define FSUM 444
#define FAVG 445
#define FMIN 446
#define FMAX 447
#define FUPPER 448
#define FLOWER 449
#define FLENGTH 450
#define FCONCAT 451
#define FREPLACE 452
#define FCOALESCE 453
#define FGEN_RANDOM_UUID 454
#define FGEN_RANDOM_UUID_V7 455
#define FSNOWFLAKE_ID 456
#define FLAST_INSERT_ID 457




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 29 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 1529 of yacc.c.  */
#line 461 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



