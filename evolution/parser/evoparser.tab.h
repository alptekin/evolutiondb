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
     OFFSET = 370,
     LONGBLOB = 371,
     MATCH = 372,
     MEDIUMTEXT = 373,
     MEDIUMBLOB = 374,
     MEDIUMINT = 375,
     NATURAL = 376,
     NO_ACTION = 377,
     NULLX = 378,
     OUTER = 379,
     ON = 380,
     ORDER = 381,
     ONDUPLICATE = 382,
     PARTIAL = 383,
     PRIMARY = 384,
     QUICK = 385,
     REAL = 386,
     RECLAIM = 387,
     REFERENCES = 388,
     RENAME = 389,
     RESTRICT = 390,
     ROLLUP = 391,
     RIGHT = 392,
     REPLACE = 393,
     SQL_SMALL_RESULT = 394,
     SCHEMA = 395,
     SOME = 396,
     SQL_CALC_FOUND_ROWS = 397,
     SQL_BIG_RESULT = 398,
     SIMPLE = 399,
     STRAIGHT_JOIN = 400,
     SMALLINT = 401,
     SET = 402,
     SELECT = 403,
     TINYTEXT = 404,
     TINYINT = 405,
     TO = 406,
     TEMPORARY = 407,
     GLOBAL = 408,
     PRESERVE = 409,
     TEXT = 410,
     TIMESTAMP = 411,
     TABLE = 412,
     THEN = 413,
     TRAILING = 414,
     TRUNCATE = 415,
     TINYBLOB = 416,
     TIME = 417,
     UPDATE = 418,
     UNSIGNED = 419,
     UNIQUE = 420,
     UUID = 421,
     USING = 422,
     USE = 423,
     HASH = 424,
     VALIDATE = 425,
     VARCHAR = 426,
     VALUES = 427,
     VARBINARY = 428,
     WHERE = 429,
     WHEN = 430,
     WITH = 431,
     YEAR = 432,
     YEAR_MONTH = 433,
     ZEROFILL = 434,
     EXISTS = 435,
     FSUBSTRING = 436,
     FTRIM = 437,
     FDATE_ADD = 438,
     FDATE_SUB = 439,
     FCOUNT = 440,
     FSUM = 441,
     FAVG = 442,
     FMIN = 443,
     FMAX = 444,
     FUPPER = 445,
     FLOWER = 446,
     FLENGTH = 447,
     FCONCAT = 448,
     FREPLACE = 449,
     FCOALESCE = 450,
     FGEN_RANDOM_UUID = 451,
     FGEN_RANDOM_UUID_V7 = 452,
     FSNOWFLAKE_ID = 453,
     FLAST_INSERT_ID = 454
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
#define OFFSET 370
#define LONGBLOB 371
#define MATCH 372
#define MEDIUMTEXT 373
#define MEDIUMBLOB 374
#define MEDIUMINT 375
#define NATURAL 376
#define NO_ACTION 377
#define NULLX 378
#define OUTER 379
#define ON 380
#define ORDER 381
#define ONDUPLICATE 382
#define PARTIAL 383
#define PRIMARY 384
#define QUICK 385
#define REAL 386
#define RECLAIM 387
#define REFERENCES 388
#define RENAME 389
#define RESTRICT 390
#define ROLLUP 391
#define RIGHT 392
#define REPLACE 393
#define SQL_SMALL_RESULT 394
#define SCHEMA 395
#define SOME 396
#define SQL_CALC_FOUND_ROWS 397
#define SQL_BIG_RESULT 398
#define SIMPLE 399
#define STRAIGHT_JOIN 400
#define SMALLINT 401
#define SET 402
#define SELECT 403
#define TINYTEXT 404
#define TINYINT 405
#define TO 406
#define TEMPORARY 407
#define GLOBAL 408
#define PRESERVE 409
#define TEXT 410
#define TIMESTAMP 411
#define TABLE 412
#define THEN 413
#define TRAILING 414
#define TRUNCATE 415
#define TINYBLOB 416
#define TIME 417
#define UPDATE 418
#define UNSIGNED 419
#define UNIQUE 420
#define UUID 421
#define USING 422
#define USE 423
#define HASH 424
#define VALIDATE 425
#define VARCHAR 426
#define VALUES 427
#define VARBINARY 428
#define WHERE 429
#define WHEN 430
#define WITH 431
#define YEAR 432
#define YEAR_MONTH 433
#define ZEROFILL 434
#define EXISTS 435
#define FSUBSTRING 436
#define FTRIM 437
#define FDATE_ADD 438
#define FDATE_SUB 439
#define FCOUNT 440
#define FSUM 441
#define FAVG 442
#define FMIN 443
#define FMAX 444
#define FUPPER 445
#define FLOWER 446
#define FLENGTH 447
#define FCONCAT 448
#define FREPLACE 449
#define FCOALESCE 450
#define FGEN_RANDOM_UUID 451
#define FGEN_RANDOM_UUID_V7 452
#define FSNOWFLAKE_ID 453
#define FLAST_INSERT_ID 454




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
#line 455 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



