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
     IDENTITY = 287,
     BLOB = 288,
     BOOLEAN = 289,
     BY = 290,
     BINARY = 291,
     BOTH = 292,
     BIGINT = 293,
     BIT = 294,
     CONSTRAINT = 295,
     CURRENT_TIMESTAMP = 296,
     CREATE = 297,
     CASCADE = 298,
     CROSS = 299,
     CASE = 300,
     CHECK = 301,
     COMMENT = 302,
     CURRENT_DATE = 303,
     CURRENT_TIME = 304,
     CHAR = 305,
     COLLATE = 306,
     DATABASE = 307,
     DEFERRABLE = 308,
     DEFERRED = 309,
     DISABLE = 310,
     DOMAIN = 311,
     DELAYED = 312,
     DAY_HOUR = 313,
     DAY_MICROSECOND = 314,
     DISTINCT = 315,
     DELETE = 316,
     DROP = 317,
     DAY_MINUTE = 318,
     DISTINCTROW = 319,
     DAY_SECOND = 320,
     DESC = 321,
     DEFAULT = 322,
     DOUBLE = 323,
     DATETIME = 324,
     DECIMAL = 325,
     DATE = 326,
     ENABLE = 327,
     ESCAPED = 328,
     ENUM = 329,
     END = 330,
     ELSE = 331,
     EXPLAIN = 332,
     FLOAT = 333,
     FORCE = 334,
     FOREIGN = 335,
     FROM = 336,
     FULL = 337,
     FULLTEXT = 338,
     FOR = 339,
     GROUP = 340,
     HOUR_MINUTE = 341,
     HOUR_MICROSECOND = 342,
     HIGH_PRIORITY = 343,
     HOUR_SECOND = 344,
     HAVING = 345,
     IMMEDIATE = 346,
     INITIALLY = 347,
     INTEGER = 348,
     INNER = 349,
     IGNORE = 350,
     INDEX = 351,
     IF = 352,
     INSERT = 353,
     INTO = 354,
     INT = 355,
     INTERVAL = 356,
     JOIN = 357,
     KEY = 358,
     LONGTEXT = 359,
     LOW_PRIORITY = 360,
     LEFT = 361,
     LEADING = 362,
     LIMIT = 363,
     OFFSET = 364,
     LONGBLOB = 365,
     MATCH = 366,
     MEDIUMTEXT = 367,
     MEDIUMBLOB = 368,
     MEDIUMINT = 369,
     NATURAL = 370,
     NO_ACTION = 371,
     NULLX = 372,
     OUTER = 373,
     ON = 374,
     ORDER = 375,
     ONDUPLICATE = 376,
     PARTIAL = 377,
     PRIMARY = 378,
     QUICK = 379,
     REAL = 380,
     RECLAIM = 381,
     REFERENCES = 382,
     RENAME = 383,
     RESTRICT = 384,
     ROLLUP = 385,
     RIGHT = 386,
     REPLACE = 387,
     SQL_SMALL_RESULT = 388,
     SCHEMA = 389,
     SOME = 390,
     SQL_CALC_FOUND_ROWS = 391,
     SQL_BIG_RESULT = 392,
     SIMPLE = 393,
     STRAIGHT_JOIN = 394,
     SMALLINT = 395,
     SET = 396,
     SELECT = 397,
     TINYTEXT = 398,
     TINYINT = 399,
     TO = 400,
     TEMPORARY = 401,
     TEXT = 402,
     TIMESTAMP = 403,
     TABLE = 404,
     THEN = 405,
     TRAILING = 406,
     TRUNCATE = 407,
     TINYBLOB = 408,
     TIME = 409,
     UPDATE = 410,
     UNSIGNED = 411,
     UNIQUE = 412,
     UUID = 413,
     USING = 414,
     USE = 415,
     HASH = 416,
     VALIDATE = 417,
     VARCHAR = 418,
     VALUES = 419,
     VARBINARY = 420,
     WHERE = 421,
     WHEN = 422,
     WITH = 423,
     YEAR = 424,
     YEAR_MONTH = 425,
     ZEROFILL = 426,
     EXISTS = 427,
     FSUBSTRING = 428,
     FTRIM = 429,
     FDATE_ADD = 430,
     FDATE_SUB = 431,
     FCOUNT = 432,
     FSUM = 433,
     FAVG = 434,
     FMIN = 435,
     FMAX = 436,
     FUPPER = 437,
     FLOWER = 438,
     FLENGTH = 439,
     FCONCAT = 440,
     FREPLACE = 441,
     FCOALESCE = 442,
     FGEN_RANDOM_UUID = 443,
     FGEN_RANDOM_UUID_V7 = 444,
     FSNOWFLAKE_ID = 445,
     FLAST_INSERT_ID = 446
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
#define IDENTITY 287
#define BLOB 288
#define BOOLEAN 289
#define BY 290
#define BINARY 291
#define BOTH 292
#define BIGINT 293
#define BIT 294
#define CONSTRAINT 295
#define CURRENT_TIMESTAMP 296
#define CREATE 297
#define CASCADE 298
#define CROSS 299
#define CASE 300
#define CHECK 301
#define COMMENT 302
#define CURRENT_DATE 303
#define CURRENT_TIME 304
#define CHAR 305
#define COLLATE 306
#define DATABASE 307
#define DEFERRABLE 308
#define DEFERRED 309
#define DISABLE 310
#define DOMAIN 311
#define DELAYED 312
#define DAY_HOUR 313
#define DAY_MICROSECOND 314
#define DISTINCT 315
#define DELETE 316
#define DROP 317
#define DAY_MINUTE 318
#define DISTINCTROW 319
#define DAY_SECOND 320
#define DESC 321
#define DEFAULT 322
#define DOUBLE 323
#define DATETIME 324
#define DECIMAL 325
#define DATE 326
#define ENABLE 327
#define ESCAPED 328
#define ENUM 329
#define END 330
#define ELSE 331
#define EXPLAIN 332
#define FLOAT 333
#define FORCE 334
#define FOREIGN 335
#define FROM 336
#define FULL 337
#define FULLTEXT 338
#define FOR 339
#define GROUP 340
#define HOUR_MINUTE 341
#define HOUR_MICROSECOND 342
#define HIGH_PRIORITY 343
#define HOUR_SECOND 344
#define HAVING 345
#define IMMEDIATE 346
#define INITIALLY 347
#define INTEGER 348
#define INNER 349
#define IGNORE 350
#define INDEX 351
#define IF 352
#define INSERT 353
#define INTO 354
#define INT 355
#define INTERVAL 356
#define JOIN 357
#define KEY 358
#define LONGTEXT 359
#define LOW_PRIORITY 360
#define LEFT 361
#define LEADING 362
#define LIMIT 363
#define OFFSET 364
#define LONGBLOB 365
#define MATCH 366
#define MEDIUMTEXT 367
#define MEDIUMBLOB 368
#define MEDIUMINT 369
#define NATURAL 370
#define NO_ACTION 371
#define NULLX 372
#define OUTER 373
#define ON 374
#define ORDER 375
#define ONDUPLICATE 376
#define PARTIAL 377
#define PRIMARY 378
#define QUICK 379
#define REAL 380
#define RECLAIM 381
#define REFERENCES 382
#define RENAME 383
#define RESTRICT 384
#define ROLLUP 385
#define RIGHT 386
#define REPLACE 387
#define SQL_SMALL_RESULT 388
#define SCHEMA 389
#define SOME 390
#define SQL_CALC_FOUND_ROWS 391
#define SQL_BIG_RESULT 392
#define SIMPLE 393
#define STRAIGHT_JOIN 394
#define SMALLINT 395
#define SET 396
#define SELECT 397
#define TINYTEXT 398
#define TINYINT 399
#define TO 400
#define TEMPORARY 401
#define TEXT 402
#define TIMESTAMP 403
#define TABLE 404
#define THEN 405
#define TRAILING 406
#define TRUNCATE 407
#define TINYBLOB 408
#define TIME 409
#define UPDATE 410
#define UNSIGNED 411
#define UNIQUE 412
#define UUID 413
#define USING 414
#define USE 415
#define HASH 416
#define VALIDATE 417
#define VARCHAR 418
#define VALUES 419
#define VARBINARY 420
#define WHERE 421
#define WHEN 422
#define WITH 423
#define YEAR 424
#define YEAR_MONTH 425
#define ZEROFILL 426
#define EXISTS 427
#define FSUBSTRING 428
#define FTRIM 429
#define FDATE_ADD 430
#define FDATE_SUB 431
#define FCOUNT 432
#define FSUM 433
#define FAVG 434
#define FMIN 435
#define FMAX 436
#define FUPPER 437
#define FLOWER 438
#define FLENGTH 439
#define FCONCAT 440
#define FREPLACE 441
#define FCOALESCE 442
#define FGEN_RANDOM_UUID 443
#define FGEN_RANDOM_UUID_V7 444
#define FSNOWFLAKE_ID 445
#define FLAST_INSERT_ID 446




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
#line 439 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

