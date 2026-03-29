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
     AFTER = 280,
     ALL = 281,
     ANALYZE = 282,
     ANY = 283,
     AUTO_INCREMENT = 284,
     ASC = 285,
     AND = 286,
     AS = 287,
     ALWAYS = 288,
     IDENTITY = 289,
     CONTINUE = 290,
     RESTART = 291,
     GENERATED = 292,
     STORED = 293,
     VIRTUAL = 294,
     BLOB = 295,
     BOOLEAN = 296,
     BY = 297,
     BINARY = 298,
     BOTH = 299,
     BIGINT = 300,
     BIT = 301,
     CONSTRAINT = 302,
     CURRENT_TIMESTAMP = 303,
     CREATE = 304,
     CASCADE = 305,
     CHANGE = 306,
     CROSS = 307,
     CASE = 308,
     CHECK = 309,
     COMMENT = 310,
     CURRENT_DATE = 311,
     CURRENT_TIME = 312,
     CHAR = 313,
     COLLATE = 314,
     COLUMN = 315,
     CONCURRENTLY = 316,
     DATABASE = 317,
     DEFERRABLE = 318,
     DEFERRED = 319,
     DISABLE = 320,
     DOMAIN = 321,
     DELAYED = 322,
     DAY_HOUR = 323,
     DAY_MICROSECOND = 324,
     DISTINCT = 325,
     DELETE = 326,
     DROP = 327,
     DAY_MINUTE = 328,
     DISTINCTROW = 329,
     DAY_SECOND = 330,
     DESC = 331,
     DEFAULT = 332,
     DOUBLE = 333,
     DATETIME = 334,
     DECIMAL = 335,
     DATE = 336,
     ENABLE = 337,
     ESCAPED = 338,
     ENUM = 339,
     END = 340,
     ELSE = 341,
     EXPLAIN = 342,
     FIRST = 343,
     FLOAT = 344,
     FORCE = 345,
     FOREIGN = 346,
     FROM = 347,
     FULL = 348,
     FULLTEXT = 349,
     FOR = 350,
     GROUP = 351,
     HOUR_MINUTE = 352,
     HOUR_MICROSECOND = 353,
     HIGH_PRIORITY = 354,
     HOUR_SECOND = 355,
     HAVING = 356,
     IMMEDIATE = 357,
     INITIALLY = 358,
     INTEGER = 359,
     INNER = 360,
     IGNORE = 361,
     INDEX = 362,
     IF = 363,
     INSERT = 364,
     INTO = 365,
     INT = 366,
     INTERVAL = 367,
     JOIN = 368,
     KEY = 369,
     LESS = 370,
     LONGTEXT = 371,
     LOW_PRIORITY = 372,
     LEFT = 373,
     LEADING = 374,
     LIMIT = 375,
     LOCKED = 376,
     OFFSET = 377,
     LONGBLOB = 378,
     MATCH = 379,
     MAXVALUE = 380,
     MEDIUMTEXT = 381,
     MODIFY = 382,
     MEDIUMBLOB = 383,
     MEDIUMINT = 384,
     NATURAL = 385,
     NODE = 386,
     NO_ACTION = 387,
     NULLX = 388,
     OUTER = 389,
     ON = 390,
     ORDER = 391,
     ONDUPLICATE = 392,
     PARTIAL = 393,
     PRIMARY = 394,
     QUICK = 395,
     RANGE = 396,
     REAL = 397,
     RECLAIM = 398,
     REFERENCES = 399,
     RENAME = 400,
     RESTRICT = 401,
     ROLLUP = 402,
     RIGHT = 403,
     REPLACE = 404,
     SQL_SMALL_RESULT = 405,
     SCHEMA = 406,
     SHARD = 407,
     SHARDS = 408,
     SHARE = 409,
     SKIP = 410,
     SOME = 411,
     SQL_CALC_FOUND_ROWS = 412,
     SQL_BIG_RESULT = 413,
     SIMPLE = 414,
     STRAIGHT_JOIN = 415,
     SMALLINT = 416,
     SET = 417,
     SELECT = 418,
     TINYTEXT = 419,
     TINYINT = 420,
     TO = 421,
     TEMPORARY = 422,
     GLOBAL = 423,
     PRESERVE = 424,
     TEXT = 425,
     THAN = 426,
     TIMESTAMP = 427,
     TABLE = 428,
     THEN = 429,
     TRAILING = 430,
     TRUNCATE = 431,
     TINYBLOB = 432,
     TIME = 433,
     UPDATE = 434,
     UNSIGNED = 435,
     UNIQUE = 436,
     UUID = 437,
     USING = 438,
     USE = 439,
     HASH = 440,
     VALIDATE = 441,
     VARCHAR = 442,
     VALUES = 443,
     VARBINARY = 444,
     WHERE = 445,
     WHEN = 446,
     WITH = 447,
     YEAR = 448,
     YEAR_MONTH = 449,
     ZEROFILL = 450,
     EXISTS = 451,
     FSUBSTRING = 452,
     FTRIM = 453,
     FDATE_ADD = 454,
     FDATE_SUB = 455,
     FCOUNT = 456,
     FSUM = 457,
     FAVG = 458,
     FMIN = 459,
     FMAX = 460,
     FUPPER = 461,
     FLOWER = 462,
     FLENGTH = 463,
     FCONCAT = 464,
     FREPLACE = 465,
     FCOALESCE = 466,
     FGEN_RANDOM_UUID = 467,
     FGEN_RANDOM_UUID_V7 = 468,
     FSNOWFLAKE_ID = 469,
     FLAST_INSERT_ID = 470,
     FEVO_SLEEP = 471,
     FEVO_JITTER = 472
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
#define AFTER 280
#define ALL 281
#define ANALYZE 282
#define ANY 283
#define AUTO_INCREMENT 284
#define ASC 285
#define AND 286
#define AS 287
#define ALWAYS 288
#define IDENTITY 289
#define CONTINUE 290
#define RESTART 291
#define GENERATED 292
#define STORED 293
#define VIRTUAL 294
#define BLOB 295
#define BOOLEAN 296
#define BY 297
#define BINARY 298
#define BOTH 299
#define BIGINT 300
#define BIT 301
#define CONSTRAINT 302
#define CURRENT_TIMESTAMP 303
#define CREATE 304
#define CASCADE 305
#define CHANGE 306
#define CROSS 307
#define CASE 308
#define CHECK 309
#define COMMENT 310
#define CURRENT_DATE 311
#define CURRENT_TIME 312
#define CHAR 313
#define COLLATE 314
#define COLUMN 315
#define CONCURRENTLY 316
#define DATABASE 317
#define DEFERRABLE 318
#define DEFERRED 319
#define DISABLE 320
#define DOMAIN 321
#define DELAYED 322
#define DAY_HOUR 323
#define DAY_MICROSECOND 324
#define DISTINCT 325
#define DELETE 326
#define DROP 327
#define DAY_MINUTE 328
#define DISTINCTROW 329
#define DAY_SECOND 330
#define DESC 331
#define DEFAULT 332
#define DOUBLE 333
#define DATETIME 334
#define DECIMAL 335
#define DATE 336
#define ENABLE 337
#define ESCAPED 338
#define ENUM 339
#define END 340
#define ELSE 341
#define EXPLAIN 342
#define FIRST 343
#define FLOAT 344
#define FORCE 345
#define FOREIGN 346
#define FROM 347
#define FULL 348
#define FULLTEXT 349
#define FOR 350
#define GROUP 351
#define HOUR_MINUTE 352
#define HOUR_MICROSECOND 353
#define HIGH_PRIORITY 354
#define HOUR_SECOND 355
#define HAVING 356
#define IMMEDIATE 357
#define INITIALLY 358
#define INTEGER 359
#define INNER 360
#define IGNORE 361
#define INDEX 362
#define IF 363
#define INSERT 364
#define INTO 365
#define INT 366
#define INTERVAL 367
#define JOIN 368
#define KEY 369
#define LESS 370
#define LONGTEXT 371
#define LOW_PRIORITY 372
#define LEFT 373
#define LEADING 374
#define LIMIT 375
#define LOCKED 376
#define OFFSET 377
#define LONGBLOB 378
#define MATCH 379
#define MAXVALUE 380
#define MEDIUMTEXT 381
#define MODIFY 382
#define MEDIUMBLOB 383
#define MEDIUMINT 384
#define NATURAL 385
#define NODE 386
#define NO_ACTION 387
#define NULLX 388
#define OUTER 389
#define ON 390
#define ORDER 391
#define ONDUPLICATE 392
#define PARTIAL 393
#define PRIMARY 394
#define QUICK 395
#define RANGE 396
#define REAL 397
#define RECLAIM 398
#define REFERENCES 399
#define RENAME 400
#define RESTRICT 401
#define ROLLUP 402
#define RIGHT 403
#define REPLACE 404
#define SQL_SMALL_RESULT 405
#define SCHEMA 406
#define SHARD 407
#define SHARDS 408
#define SHARE 409
#define SKIP 410
#define SOME 411
#define SQL_CALC_FOUND_ROWS 412
#define SQL_BIG_RESULT 413
#define SIMPLE 414
#define STRAIGHT_JOIN 415
#define SMALLINT 416
#define SET 417
#define SELECT 418
#define TINYTEXT 419
#define TINYINT 420
#define TO 421
#define TEMPORARY 422
#define GLOBAL 423
#define PRESERVE 424
#define TEXT 425
#define THAN 426
#define TIMESTAMP 427
#define TABLE 428
#define THEN 429
#define TRAILING 430
#define TRUNCATE 431
#define TINYBLOB 432
#define TIME 433
#define UPDATE 434
#define UNSIGNED 435
#define UNIQUE 436
#define UUID 437
#define USING 438
#define USE 439
#define HASH 440
#define VALIDATE 441
#define VARCHAR 442
#define VALUES 443
#define VARBINARY 444
#define WHERE 445
#define WHEN 446
#define WITH 447
#define YEAR 448
#define YEAR_MONTH 449
#define ZEROFILL 450
#define EXISTS 451
#define FSUBSTRING 452
#define FTRIM 453
#define FDATE_ADD 454
#define FDATE_SUB 455
#define FCOUNT 456
#define FSUM 457
#define FAVG 458
#define FMIN 459
#define FMAX 460
#define FUPPER 461
#define FLOWER 462
#define FLENGTH 463
#define FCONCAT 464
#define FREPLACE 465
#define FCOALESCE 466
#define FGEN_RANDOM_UUID 467
#define FGEN_RANDOM_UUID_V7 468
#define FSNOWFLAKE_ID 469
#define FLAST_INSERT_ID 470
#define FEVO_SLEEP 471
#define FEVO_JITTER 472




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
#line 491 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



