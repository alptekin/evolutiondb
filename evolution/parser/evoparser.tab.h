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
     CONTINUE = 289,
     RESTART = 290,
     GENERATED = 291,
     STORED = 292,
     VIRTUAL = 293,
     BLOB = 294,
     BOOLEAN = 295,
     BY = 296,
     BINARY = 297,
     BOTH = 298,
     BIGINT = 299,
     BIT = 300,
     CONSTRAINT = 301,
     CURRENT_TIMESTAMP = 302,
     CREATE = 303,
     CASCADE = 304,
     CROSS = 305,
     CASE = 306,
     CHECK = 307,
     COMMENT = 308,
     CURRENT_DATE = 309,
     CURRENT_TIME = 310,
     CHAR = 311,
     COLLATE = 312,
     COLUMN = 313,
     CONCURRENTLY = 314,
     DATABASE = 315,
     DEFERRABLE = 316,
     DEFERRED = 317,
     DISABLE = 318,
     DOMAIN = 319,
     DELAYED = 320,
     DAY_HOUR = 321,
     DAY_MICROSECOND = 322,
     DISTINCT = 323,
     DELETE = 324,
     DROP = 325,
     DAY_MINUTE = 326,
     DISTINCTROW = 327,
     DAY_SECOND = 328,
     DESC = 329,
     DEFAULT = 330,
     DOUBLE = 331,
     DATETIME = 332,
     DECIMAL = 333,
     DATE = 334,
     ENABLE = 335,
     ESCAPED = 336,
     ENUM = 337,
     END = 338,
     ELSE = 339,
     EXPLAIN = 340,
     FLOAT = 341,
     FORCE = 342,
     FOREIGN = 343,
     FROM = 344,
     FULL = 345,
     FULLTEXT = 346,
     FOR = 347,
     GROUP = 348,
     HOUR_MINUTE = 349,
     HOUR_MICROSECOND = 350,
     HIGH_PRIORITY = 351,
     HOUR_SECOND = 352,
     HAVING = 353,
     IMMEDIATE = 354,
     INITIALLY = 355,
     INTEGER = 356,
     INNER = 357,
     IGNORE = 358,
     INDEX = 359,
     IF = 360,
     INSERT = 361,
     INTO = 362,
     INT = 363,
     INTERVAL = 364,
     JOIN = 365,
     KEY = 366,
     LESS = 367,
     LONGTEXT = 368,
     LOW_PRIORITY = 369,
     LEFT = 370,
     LEADING = 371,
     LIMIT = 372,
     LOCKED = 373,
     OFFSET = 374,
     LONGBLOB = 375,
     MATCH = 376,
     MAXVALUE = 377,
     MEDIUMTEXT = 378,
     MODIFY = 379,
     MEDIUMBLOB = 380,
     MEDIUMINT = 381,
     NATURAL = 382,
     NODE = 383,
     NO_ACTION = 384,
     NULLX = 385,
     OUTER = 386,
     ON = 387,
     ORDER = 388,
     ONDUPLICATE = 389,
     PARTIAL = 390,
     PRIMARY = 391,
     QUICK = 392,
     RANGE = 393,
     REAL = 394,
     RECLAIM = 395,
     REFERENCES = 396,
     RENAME = 397,
     RESTRICT = 398,
     ROLLUP = 399,
     RIGHT = 400,
     REPLACE = 401,
     SQL_SMALL_RESULT = 402,
     SCHEMA = 403,
     SHARD = 404,
     SHARDS = 405,
     SHARE = 406,
     SKIP = 407,
     SOME = 408,
     SQL_CALC_FOUND_ROWS = 409,
     SQL_BIG_RESULT = 410,
     SIMPLE = 411,
     STRAIGHT_JOIN = 412,
     SMALLINT = 413,
     SET = 414,
     SELECT = 415,
     TINYTEXT = 416,
     TINYINT = 417,
     TO = 418,
     TEMPORARY = 419,
     GLOBAL = 420,
     PRESERVE = 421,
     TEXT = 422,
     THAN = 423,
     TIMESTAMP = 424,
     TABLE = 425,
     THEN = 426,
     TRAILING = 427,
     TRUNCATE = 428,
     TINYBLOB = 429,
     TIME = 430,
     UPDATE = 431,
     UNSIGNED = 432,
     UNIQUE = 433,
     UUID = 434,
     USING = 435,
     USE = 436,
     HASH = 437,
     VALIDATE = 438,
     VARCHAR = 439,
     VALUES = 440,
     VARBINARY = 441,
     WHERE = 442,
     WHEN = 443,
     WITH = 444,
     YEAR = 445,
     YEAR_MONTH = 446,
     ZEROFILL = 447,
     EXISTS = 448,
     FSUBSTRING = 449,
     FTRIM = 450,
     FDATE_ADD = 451,
     FDATE_SUB = 452,
     FCOUNT = 453,
     FSUM = 454,
     FAVG = 455,
     FMIN = 456,
     FMAX = 457,
     FUPPER = 458,
     FLOWER = 459,
     FLENGTH = 460,
     FCONCAT = 461,
     FREPLACE = 462,
     FCOALESCE = 463,
     FGEN_RANDOM_UUID = 464,
     FGEN_RANDOM_UUID_V7 = 465,
     FSNOWFLAKE_ID = 466,
     FLAST_INSERT_ID = 467,
     FEVO_SLEEP = 468,
     FEVO_JITTER = 469
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
#define CONTINUE 289
#define RESTART 290
#define GENERATED 291
#define STORED 292
#define VIRTUAL 293
#define BLOB 294
#define BOOLEAN 295
#define BY 296
#define BINARY 297
#define BOTH 298
#define BIGINT 299
#define BIT 300
#define CONSTRAINT 301
#define CURRENT_TIMESTAMP 302
#define CREATE 303
#define CASCADE 304
#define CROSS 305
#define CASE 306
#define CHECK 307
#define COMMENT 308
#define CURRENT_DATE 309
#define CURRENT_TIME 310
#define CHAR 311
#define COLLATE 312
#define COLUMN 313
#define CONCURRENTLY 314
#define DATABASE 315
#define DEFERRABLE 316
#define DEFERRED 317
#define DISABLE 318
#define DOMAIN 319
#define DELAYED 320
#define DAY_HOUR 321
#define DAY_MICROSECOND 322
#define DISTINCT 323
#define DELETE 324
#define DROP 325
#define DAY_MINUTE 326
#define DISTINCTROW 327
#define DAY_SECOND 328
#define DESC 329
#define DEFAULT 330
#define DOUBLE 331
#define DATETIME 332
#define DECIMAL 333
#define DATE 334
#define ENABLE 335
#define ESCAPED 336
#define ENUM 337
#define END 338
#define ELSE 339
#define EXPLAIN 340
#define FLOAT 341
#define FORCE 342
#define FOREIGN 343
#define FROM 344
#define FULL 345
#define FULLTEXT 346
#define FOR 347
#define GROUP 348
#define HOUR_MINUTE 349
#define HOUR_MICROSECOND 350
#define HIGH_PRIORITY 351
#define HOUR_SECOND 352
#define HAVING 353
#define IMMEDIATE 354
#define INITIALLY 355
#define INTEGER 356
#define INNER 357
#define IGNORE 358
#define INDEX 359
#define IF 360
#define INSERT 361
#define INTO 362
#define INT 363
#define INTERVAL 364
#define JOIN 365
#define KEY 366
#define LESS 367
#define LONGTEXT 368
#define LOW_PRIORITY 369
#define LEFT 370
#define LEADING 371
#define LIMIT 372
#define LOCKED 373
#define OFFSET 374
#define LONGBLOB 375
#define MATCH 376
#define MAXVALUE 377
#define MEDIUMTEXT 378
#define MODIFY 379
#define MEDIUMBLOB 380
#define MEDIUMINT 381
#define NATURAL 382
#define NODE 383
#define NO_ACTION 384
#define NULLX 385
#define OUTER 386
#define ON 387
#define ORDER 388
#define ONDUPLICATE 389
#define PARTIAL 390
#define PRIMARY 391
#define QUICK 392
#define RANGE 393
#define REAL 394
#define RECLAIM 395
#define REFERENCES 396
#define RENAME 397
#define RESTRICT 398
#define ROLLUP 399
#define RIGHT 400
#define REPLACE 401
#define SQL_SMALL_RESULT 402
#define SCHEMA 403
#define SHARD 404
#define SHARDS 405
#define SHARE 406
#define SKIP 407
#define SOME 408
#define SQL_CALC_FOUND_ROWS 409
#define SQL_BIG_RESULT 410
#define SIMPLE 411
#define STRAIGHT_JOIN 412
#define SMALLINT 413
#define SET 414
#define SELECT 415
#define TINYTEXT 416
#define TINYINT 417
#define TO 418
#define TEMPORARY 419
#define GLOBAL 420
#define PRESERVE 421
#define TEXT 422
#define THAN 423
#define TIMESTAMP 424
#define TABLE 425
#define THEN 426
#define TRAILING 427
#define TRUNCATE 428
#define TINYBLOB 429
#define TIME 430
#define UPDATE 431
#define UNSIGNED 432
#define UNIQUE 433
#define UUID 434
#define USING 435
#define USE 436
#define HASH 437
#define VALIDATE 438
#define VARCHAR 439
#define VALUES 440
#define VARBINARY 441
#define WHERE 442
#define WHEN 443
#define WITH 444
#define YEAR 445
#define YEAR_MONTH 446
#define ZEROFILL 447
#define EXISTS 448
#define FSUBSTRING 449
#define FTRIM 450
#define FDATE_ADD 451
#define FDATE_SUB 452
#define FCOUNT 453
#define FSUM 454
#define FAVG 455
#define FMIN 456
#define FMAX 457
#define FUPPER 458
#define FLOWER 459
#define FLENGTH 460
#define FCONCAT 461
#define FREPLACE 462
#define FCOALESCE 463
#define FGEN_RANDOM_UUID 464
#define FGEN_RANDOM_UUID_V7 465
#define FSNOWFLAKE_ID 466
#define FLAST_INSERT_ID 467
#define FEVO_SLEEP 468
#define FEVO_JITTER 469




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
#line 485 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



