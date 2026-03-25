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
     MEDIUMBLOB = 379,
     MEDIUMINT = 380,
     NATURAL = 381,
     NODE = 382,
     NO_ACTION = 383,
     NULLX = 384,
     OUTER = 385,
     ON = 386,
     ORDER = 387,
     ONDUPLICATE = 388,
     PARTIAL = 389,
     PRIMARY = 390,
     QUICK = 391,
     RANGE = 392,
     REAL = 393,
     RECLAIM = 394,
     REFERENCES = 395,
     RENAME = 396,
     RESTRICT = 397,
     ROLLUP = 398,
     RIGHT = 399,
     REPLACE = 400,
     SQL_SMALL_RESULT = 401,
     SCHEMA = 402,
     SHARD = 403,
     SHARDS = 404,
     SHARE = 405,
     SKIP = 406,
     SOME = 407,
     SQL_CALC_FOUND_ROWS = 408,
     SQL_BIG_RESULT = 409,
     SIMPLE = 410,
     STRAIGHT_JOIN = 411,
     SMALLINT = 412,
     SET = 413,
     SELECT = 414,
     TINYTEXT = 415,
     TINYINT = 416,
     TO = 417,
     TEMPORARY = 418,
     GLOBAL = 419,
     PRESERVE = 420,
     TEXT = 421,
     THAN = 422,
     TIMESTAMP = 423,
     TABLE = 424,
     THEN = 425,
     TRAILING = 426,
     TRUNCATE = 427,
     TINYBLOB = 428,
     TIME = 429,
     UPDATE = 430,
     UNSIGNED = 431,
     UNIQUE = 432,
     UUID = 433,
     USING = 434,
     USE = 435,
     HASH = 436,
     VALIDATE = 437,
     VARCHAR = 438,
     VALUES = 439,
     VARBINARY = 440,
     WHERE = 441,
     WHEN = 442,
     WITH = 443,
     YEAR = 444,
     YEAR_MONTH = 445,
     ZEROFILL = 446,
     EXISTS = 447,
     FSUBSTRING = 448,
     FTRIM = 449,
     FDATE_ADD = 450,
     FDATE_SUB = 451,
     FCOUNT = 452,
     FSUM = 453,
     FAVG = 454,
     FMIN = 455,
     FMAX = 456,
     FUPPER = 457,
     FLOWER = 458,
     FLENGTH = 459,
     FCONCAT = 460,
     FREPLACE = 461,
     FCOALESCE = 462,
     FGEN_RANDOM_UUID = 463,
     FGEN_RANDOM_UUID_V7 = 464,
     FSNOWFLAKE_ID = 465,
     FLAST_INSERT_ID = 466,
     FEVO_SLEEP = 467,
     FEVO_JITTER = 468
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
#define MEDIUMBLOB 379
#define MEDIUMINT 380
#define NATURAL 381
#define NODE 382
#define NO_ACTION 383
#define NULLX 384
#define OUTER 385
#define ON 386
#define ORDER 387
#define ONDUPLICATE 388
#define PARTIAL 389
#define PRIMARY 390
#define QUICK 391
#define RANGE 392
#define REAL 393
#define RECLAIM 394
#define REFERENCES 395
#define RENAME 396
#define RESTRICT 397
#define ROLLUP 398
#define RIGHT 399
#define REPLACE 400
#define SQL_SMALL_RESULT 401
#define SCHEMA 402
#define SHARD 403
#define SHARDS 404
#define SHARE 405
#define SKIP 406
#define SOME 407
#define SQL_CALC_FOUND_ROWS 408
#define SQL_BIG_RESULT 409
#define SIMPLE 410
#define STRAIGHT_JOIN 411
#define SMALLINT 412
#define SET 413
#define SELECT 414
#define TINYTEXT 415
#define TINYINT 416
#define TO 417
#define TEMPORARY 418
#define GLOBAL 419
#define PRESERVE 420
#define TEXT 421
#define THAN 422
#define TIMESTAMP 423
#define TABLE 424
#define THEN 425
#define TRAILING 426
#define TRUNCATE 427
#define TINYBLOB 428
#define TIME 429
#define UPDATE 430
#define UNSIGNED 431
#define UNIQUE 432
#define UUID 433
#define USING 434
#define USE 435
#define HASH 436
#define VALIDATE 437
#define VARCHAR 438
#define VALUES 439
#define VARBINARY 440
#define WHERE 441
#define WHEN 442
#define WITH 443
#define YEAR 444
#define YEAR_MONTH 445
#define ZEROFILL 446
#define EXISTS 447
#define FSUBSTRING 448
#define FTRIM 449
#define FDATE_ADD 450
#define FDATE_SUB 451
#define FCOUNT 452
#define FSUM 453
#define FAVG 454
#define FMIN 455
#define FMAX 456
#define FUPPER 457
#define FLOWER 458
#define FLENGTH 459
#define FCONCAT 460
#define FREPLACE 461
#define FCOALESCE 462
#define FGEN_RANDOM_UUID 463
#define FGEN_RANDOM_UUID_V7 464
#define FSNOWFLAKE_ID 465
#define FLAST_INSERT_ID 466
#define FEVO_SLEEP 467
#define FEVO_JITTER 468




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
#line 483 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



