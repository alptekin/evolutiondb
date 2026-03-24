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
     LESS = 365,
     LONGTEXT = 366,
     LOW_PRIORITY = 367,
     LEFT = 368,
     LEADING = 369,
     LIMIT = 370,
     LOCKED = 371,
     OFFSET = 372,
     LONGBLOB = 373,
     MATCH = 374,
     MAXVALUE = 375,
     MEDIUMTEXT = 376,
     MEDIUMBLOB = 377,
     MEDIUMINT = 378,
     NATURAL = 379,
     NODE = 380,
     NO_ACTION = 381,
     NULLX = 382,
     OUTER = 383,
     ON = 384,
     ORDER = 385,
     ONDUPLICATE = 386,
     PARTIAL = 387,
     PRIMARY = 388,
     QUICK = 389,
     RANGE = 390,
     REAL = 391,
     RECLAIM = 392,
     REFERENCES = 393,
     RENAME = 394,
     RESTRICT = 395,
     ROLLUP = 396,
     RIGHT = 397,
     REPLACE = 398,
     SQL_SMALL_RESULT = 399,
     SCHEMA = 400,
     SHARD = 401,
     SHARDS = 402,
     SHARE = 403,
     SKIP = 404,
     SOME = 405,
     SQL_CALC_FOUND_ROWS = 406,
     SQL_BIG_RESULT = 407,
     SIMPLE = 408,
     STRAIGHT_JOIN = 409,
     SMALLINT = 410,
     SET = 411,
     SELECT = 412,
     TINYTEXT = 413,
     TINYINT = 414,
     TO = 415,
     TEMPORARY = 416,
     GLOBAL = 417,
     PRESERVE = 418,
     TEXT = 419,
     THAN = 420,
     TIMESTAMP = 421,
     TABLE = 422,
     THEN = 423,
     TRAILING = 424,
     TRUNCATE = 425,
     TINYBLOB = 426,
     TIME = 427,
     UPDATE = 428,
     UNSIGNED = 429,
     UNIQUE = 430,
     UUID = 431,
     USING = 432,
     USE = 433,
     HASH = 434,
     VALIDATE = 435,
     VARCHAR = 436,
     VALUES = 437,
     VARBINARY = 438,
     WHERE = 439,
     WHEN = 440,
     WITH = 441,
     YEAR = 442,
     YEAR_MONTH = 443,
     ZEROFILL = 444,
     EXISTS = 445,
     FSUBSTRING = 446,
     FTRIM = 447,
     FDATE_ADD = 448,
     FDATE_SUB = 449,
     FCOUNT = 450,
     FSUM = 451,
     FAVG = 452,
     FMIN = 453,
     FMAX = 454,
     FUPPER = 455,
     FLOWER = 456,
     FLENGTH = 457,
     FCONCAT = 458,
     FREPLACE = 459,
     FCOALESCE = 460,
     FGEN_RANDOM_UUID = 461,
     FGEN_RANDOM_UUID_V7 = 462,
     FSNOWFLAKE_ID = 463,
     FLAST_INSERT_ID = 464
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
#define LESS 365
#define LONGTEXT 366
#define LOW_PRIORITY 367
#define LEFT 368
#define LEADING 369
#define LIMIT 370
#define LOCKED 371
#define OFFSET 372
#define LONGBLOB 373
#define MATCH 374
#define MAXVALUE 375
#define MEDIUMTEXT 376
#define MEDIUMBLOB 377
#define MEDIUMINT 378
#define NATURAL 379
#define NODE 380
#define NO_ACTION 381
#define NULLX 382
#define OUTER 383
#define ON 384
#define ORDER 385
#define ONDUPLICATE 386
#define PARTIAL 387
#define PRIMARY 388
#define QUICK 389
#define RANGE 390
#define REAL 391
#define RECLAIM 392
#define REFERENCES 393
#define RENAME 394
#define RESTRICT 395
#define ROLLUP 396
#define RIGHT 397
#define REPLACE 398
#define SQL_SMALL_RESULT 399
#define SCHEMA 400
#define SHARD 401
#define SHARDS 402
#define SHARE 403
#define SKIP 404
#define SOME 405
#define SQL_CALC_FOUND_ROWS 406
#define SQL_BIG_RESULT 407
#define SIMPLE 408
#define STRAIGHT_JOIN 409
#define SMALLINT 410
#define SET 411
#define SELECT 412
#define TINYTEXT 413
#define TINYINT 414
#define TO 415
#define TEMPORARY 416
#define GLOBAL 417
#define PRESERVE 418
#define TEXT 419
#define THAN 420
#define TIMESTAMP 421
#define TABLE 422
#define THEN 423
#define TRAILING 424
#define TRUNCATE 425
#define TINYBLOB 426
#define TIME 427
#define UPDATE 428
#define UNSIGNED 429
#define UNIQUE 430
#define UUID 431
#define USING 432
#define USE 433
#define HASH 434
#define VALIDATE 435
#define VARCHAR 436
#define VALUES 437
#define VARBINARY 438
#define WHERE 439
#define WHEN 440
#define WITH 441
#define YEAR 442
#define YEAR_MONTH 443
#define ZEROFILL 444
#define EXISTS 445
#define FSUBSTRING 446
#define FTRIM 447
#define FDATE_ADD 448
#define FDATE_SUB 449
#define FCOUNT 450
#define FSUM 451
#define FAVG 452
#define FMIN 453
#define FMAX 454
#define FUPPER 455
#define FLOWER 456
#define FLENGTH 457
#define FCONCAT 458
#define FREPLACE 459
#define FCOALESCE 460
#define FGEN_RANDOM_UUID 461
#define FGEN_RANDOM_UUID_V7 462
#define FSNOWFLAKE_ID 463
#define FLAST_INSERT_ID 464




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
#line 475 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



