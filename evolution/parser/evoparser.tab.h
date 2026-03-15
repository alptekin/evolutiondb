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
     DATABASE = 311,
     DEFERRABLE = 312,
     DEFERRED = 313,
     DISABLE = 314,
     DOMAIN = 315,
     DELAYED = 316,
     DAY_HOUR = 317,
     DAY_MICROSECOND = 318,
     DISTINCT = 319,
     DELETE = 320,
     DROP = 321,
     DAY_MINUTE = 322,
     DISTINCTROW = 323,
     DAY_SECOND = 324,
     DESC = 325,
     DEFAULT = 326,
     DOUBLE = 327,
     DATETIME = 328,
     DECIMAL = 329,
     DATE = 330,
     ENABLE = 331,
     ESCAPED = 332,
     ENUM = 333,
     END = 334,
     ELSE = 335,
     EXPLAIN = 336,
     FLOAT = 337,
     FORCE = 338,
     FOREIGN = 339,
     FROM = 340,
     FULL = 341,
     FULLTEXT = 342,
     FOR = 343,
     GROUP = 344,
     HOUR_MINUTE = 345,
     HOUR_MICROSECOND = 346,
     HIGH_PRIORITY = 347,
     HOUR_SECOND = 348,
     HAVING = 349,
     IMMEDIATE = 350,
     INITIALLY = 351,
     INTEGER = 352,
     INNER = 353,
     IGNORE = 354,
     INDEX = 355,
     IF = 356,
     INSERT = 357,
     INTO = 358,
     INT = 359,
     INTERVAL = 360,
     JOIN = 361,
     KEY = 362,
     LONGTEXT = 363,
     LOW_PRIORITY = 364,
     LEFT = 365,
     LEADING = 366,
     LIMIT = 367,
     OFFSET = 368,
     LONGBLOB = 369,
     MATCH = 370,
     MEDIUMTEXT = 371,
     MEDIUMBLOB = 372,
     MEDIUMINT = 373,
     NATURAL = 374,
     NO_ACTION = 375,
     NULLX = 376,
     OUTER = 377,
     ON = 378,
     ORDER = 379,
     ONDUPLICATE = 380,
     PARTIAL = 381,
     PRIMARY = 382,
     QUICK = 383,
     REAL = 384,
     RECLAIM = 385,
     REFERENCES = 386,
     RENAME = 387,
     RESTRICT = 388,
     ROLLUP = 389,
     RIGHT = 390,
     REPLACE = 391,
     SQL_SMALL_RESULT = 392,
     SCHEMA = 393,
     SOME = 394,
     SQL_CALC_FOUND_ROWS = 395,
     SQL_BIG_RESULT = 396,
     SIMPLE = 397,
     STRAIGHT_JOIN = 398,
     SMALLINT = 399,
     SET = 400,
     SELECT = 401,
     TINYTEXT = 402,
     TINYINT = 403,
     TO = 404,
     TEMPORARY = 405,
     TEXT = 406,
     TIMESTAMP = 407,
     TABLE = 408,
     THEN = 409,
     TRAILING = 410,
     TRUNCATE = 411,
     TINYBLOB = 412,
     TIME = 413,
     UPDATE = 414,
     UNSIGNED = 415,
     UNIQUE = 416,
     UUID = 417,
     USING = 418,
     USE = 419,
     HASH = 420,
     VALIDATE = 421,
     VARCHAR = 422,
     VALUES = 423,
     VARBINARY = 424,
     WHERE = 425,
     WHEN = 426,
     WITH = 427,
     YEAR = 428,
     YEAR_MONTH = 429,
     ZEROFILL = 430,
     EXISTS = 431,
     FSUBSTRING = 432,
     FTRIM = 433,
     FDATE_ADD = 434,
     FDATE_SUB = 435,
     FCOUNT = 436,
     FSUM = 437,
     FAVG = 438,
     FMIN = 439,
     FMAX = 440,
     FUPPER = 441,
     FLOWER = 442,
     FLENGTH = 443,
     FCONCAT = 444,
     FREPLACE = 445,
     FCOALESCE = 446,
     FGEN_RANDOM_UUID = 447,
     FGEN_RANDOM_UUID_V7 = 448,
     FSNOWFLAKE_ID = 449,
     FLAST_INSERT_ID = 450
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
#define DATABASE 311
#define DEFERRABLE 312
#define DEFERRED 313
#define DISABLE 314
#define DOMAIN 315
#define DELAYED 316
#define DAY_HOUR 317
#define DAY_MICROSECOND 318
#define DISTINCT 319
#define DELETE 320
#define DROP 321
#define DAY_MINUTE 322
#define DISTINCTROW 323
#define DAY_SECOND 324
#define DESC 325
#define DEFAULT 326
#define DOUBLE 327
#define DATETIME 328
#define DECIMAL 329
#define DATE 330
#define ENABLE 331
#define ESCAPED 332
#define ENUM 333
#define END 334
#define ELSE 335
#define EXPLAIN 336
#define FLOAT 337
#define FORCE 338
#define FOREIGN 339
#define FROM 340
#define FULL 341
#define FULLTEXT 342
#define FOR 343
#define GROUP 344
#define HOUR_MINUTE 345
#define HOUR_MICROSECOND 346
#define HIGH_PRIORITY 347
#define HOUR_SECOND 348
#define HAVING 349
#define IMMEDIATE 350
#define INITIALLY 351
#define INTEGER 352
#define INNER 353
#define IGNORE 354
#define INDEX 355
#define IF 356
#define INSERT 357
#define INTO 358
#define INT 359
#define INTERVAL 360
#define JOIN 361
#define KEY 362
#define LONGTEXT 363
#define LOW_PRIORITY 364
#define LEFT 365
#define LEADING 366
#define LIMIT 367
#define OFFSET 368
#define LONGBLOB 369
#define MATCH 370
#define MEDIUMTEXT 371
#define MEDIUMBLOB 372
#define MEDIUMINT 373
#define NATURAL 374
#define NO_ACTION 375
#define NULLX 376
#define OUTER 377
#define ON 378
#define ORDER 379
#define ONDUPLICATE 380
#define PARTIAL 381
#define PRIMARY 382
#define QUICK 383
#define REAL 384
#define RECLAIM 385
#define REFERENCES 386
#define RENAME 387
#define RESTRICT 388
#define ROLLUP 389
#define RIGHT 390
#define REPLACE 391
#define SQL_SMALL_RESULT 392
#define SCHEMA 393
#define SOME 394
#define SQL_CALC_FOUND_ROWS 395
#define SQL_BIG_RESULT 396
#define SIMPLE 397
#define STRAIGHT_JOIN 398
#define SMALLINT 399
#define SET 400
#define SELECT 401
#define TINYTEXT 402
#define TINYINT 403
#define TO 404
#define TEMPORARY 405
#define TEXT 406
#define TIMESTAMP 407
#define TABLE 408
#define THEN 409
#define TRAILING 410
#define TRUNCATE 411
#define TINYBLOB 412
#define TIME 413
#define UPDATE 414
#define UNSIGNED 415
#define UNIQUE 416
#define UUID 417
#define USING 418
#define USE 419
#define HASH 420
#define VALIDATE 421
#define VARCHAR 422
#define VALUES 423
#define VARBINARY 424
#define WHERE 425
#define WHEN 426
#define WITH 427
#define YEAR 428
#define YEAR_MONTH 429
#define ZEROFILL 430
#define EXISTS 431
#define FSUBSTRING 432
#define FTRIM 433
#define FDATE_ADD 434
#define FDATE_SUB 435
#define FCOUNT 436
#define FSUM 437
#define FAVG 438
#define FMIN 439
#define FMAX 440
#define FUPPER 441
#define FLOWER 442
#define FLENGTH 443
#define FCONCAT 444
#define FREPLACE 445
#define FCOALESCE 446
#define FGEN_RANDOM_UUID 447
#define FGEN_RANDOM_UUID_V7 448
#define FSNOWFLAKE_ID 449
#define FLAST_INSERT_ID 450




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
#line 447 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

