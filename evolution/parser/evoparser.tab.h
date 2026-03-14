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
     BLOB = 287,
     BOOLEAN = 288,
     BY = 289,
     BINARY = 290,
     BOTH = 291,
     BIGINT = 292,
     BIT = 293,
     CONSTRAINT = 294,
     CURRENT_TIMESTAMP = 295,
     CREATE = 296,
     CASCADE = 297,
     CROSS = 298,
     CASE = 299,
     CHECK = 300,
     COMMENT = 301,
     CURRENT_DATE = 302,
     CURRENT_TIME = 303,
     CHAR = 304,
     COLLATE = 305,
     DATABASE = 306,
     DEFERRABLE = 307,
     DEFERRED = 308,
     DISABLE = 309,
     DOMAIN = 310,
     DELAYED = 311,
     DAY_HOUR = 312,
     DAY_MICROSECOND = 313,
     DISTINCT = 314,
     DELETE = 315,
     DROP = 316,
     DAY_MINUTE = 317,
     DISTINCTROW = 318,
     DAY_SECOND = 319,
     DESC = 320,
     DEFAULT = 321,
     DOUBLE = 322,
     DATETIME = 323,
     DECIMAL = 324,
     DATE = 325,
     ENABLE = 326,
     ESCAPED = 327,
     ENUM = 328,
     END = 329,
     ELSE = 330,
     EXPLAIN = 331,
     FLOAT = 332,
     FORCE = 333,
     FOREIGN = 334,
     FROM = 335,
     FULL = 336,
     FULLTEXT = 337,
     FOR = 338,
     GROUP = 339,
     HOUR_MINUTE = 340,
     HOUR_MICROSECOND = 341,
     HIGH_PRIORITY = 342,
     HOUR_SECOND = 343,
     HAVING = 344,
     IMMEDIATE = 345,
     INITIALLY = 346,
     INTEGER = 347,
     INNER = 348,
     IGNORE = 349,
     INDEX = 350,
     IF = 351,
     INSERT = 352,
     INTO = 353,
     INT = 354,
     INTERVAL = 355,
     JOIN = 356,
     KEY = 357,
     LONGTEXT = 358,
     LOW_PRIORITY = 359,
     LEFT = 360,
     LEADING = 361,
     LIMIT = 362,
     OFFSET = 363,
     LONGBLOB = 364,
     MATCH = 365,
     MEDIUMTEXT = 366,
     MEDIUMBLOB = 367,
     MEDIUMINT = 368,
     NATURAL = 369,
     NO_ACTION = 370,
     NULLX = 371,
     OUTER = 372,
     ON = 373,
     ORDER = 374,
     ONDUPLICATE = 375,
     PARTIAL = 376,
     PRIMARY = 377,
     QUICK = 378,
     REAL = 379,
     RECLAIM = 380,
     REFERENCES = 381,
     RENAME = 382,
     RESTRICT = 383,
     ROLLUP = 384,
     RIGHT = 385,
     REPLACE = 386,
     SQL_SMALL_RESULT = 387,
     SCHEMA = 388,
     SOME = 389,
     SQL_CALC_FOUND_ROWS = 390,
     SQL_BIG_RESULT = 391,
     SIMPLE = 392,
     STRAIGHT_JOIN = 393,
     SMALLINT = 394,
     SET = 395,
     SELECT = 396,
     TINYTEXT = 397,
     TINYINT = 398,
     TO = 399,
     TEMPORARY = 400,
     TEXT = 401,
     TIMESTAMP = 402,
     TABLE = 403,
     THEN = 404,
     TRAILING = 405,
     TRUNCATE = 406,
     TINYBLOB = 407,
     TIME = 408,
     UPDATE = 409,
     UNSIGNED = 410,
     UNIQUE = 411,
     UUID = 412,
     USING = 413,
     USE = 414,
     HASH = 415,
     VALIDATE = 416,
     VARCHAR = 417,
     VALUES = 418,
     VARBINARY = 419,
     WHERE = 420,
     WHEN = 421,
     WITH = 422,
     YEAR = 423,
     YEAR_MONTH = 424,
     ZEROFILL = 425,
     EXISTS = 426,
     FSUBSTRING = 427,
     FTRIM = 428,
     FDATE_ADD = 429,
     FDATE_SUB = 430,
     FCOUNT = 431,
     FSUM = 432,
     FAVG = 433,
     FMIN = 434,
     FMAX = 435,
     FUPPER = 436,
     FLOWER = 437,
     FLENGTH = 438,
     FCONCAT = 439,
     FREPLACE = 440,
     FCOALESCE = 441,
     FGEN_RANDOM_UUID = 442,
     FGEN_RANDOM_UUID_V7 = 443,
     FSNOWFLAKE_ID = 444,
     FLAST_INSERT_ID = 445
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
#define BLOB 287
#define BOOLEAN 288
#define BY 289
#define BINARY 290
#define BOTH 291
#define BIGINT 292
#define BIT 293
#define CONSTRAINT 294
#define CURRENT_TIMESTAMP 295
#define CREATE 296
#define CASCADE 297
#define CROSS 298
#define CASE 299
#define CHECK 300
#define COMMENT 301
#define CURRENT_DATE 302
#define CURRENT_TIME 303
#define CHAR 304
#define COLLATE 305
#define DATABASE 306
#define DEFERRABLE 307
#define DEFERRED 308
#define DISABLE 309
#define DOMAIN 310
#define DELAYED 311
#define DAY_HOUR 312
#define DAY_MICROSECOND 313
#define DISTINCT 314
#define DELETE 315
#define DROP 316
#define DAY_MINUTE 317
#define DISTINCTROW 318
#define DAY_SECOND 319
#define DESC 320
#define DEFAULT 321
#define DOUBLE 322
#define DATETIME 323
#define DECIMAL 324
#define DATE 325
#define ENABLE 326
#define ESCAPED 327
#define ENUM 328
#define END 329
#define ELSE 330
#define EXPLAIN 331
#define FLOAT 332
#define FORCE 333
#define FOREIGN 334
#define FROM 335
#define FULL 336
#define FULLTEXT 337
#define FOR 338
#define GROUP 339
#define HOUR_MINUTE 340
#define HOUR_MICROSECOND 341
#define HIGH_PRIORITY 342
#define HOUR_SECOND 343
#define HAVING 344
#define IMMEDIATE 345
#define INITIALLY 346
#define INTEGER 347
#define INNER 348
#define IGNORE 349
#define INDEX 350
#define IF 351
#define INSERT 352
#define INTO 353
#define INT 354
#define INTERVAL 355
#define JOIN 356
#define KEY 357
#define LONGTEXT 358
#define LOW_PRIORITY 359
#define LEFT 360
#define LEADING 361
#define LIMIT 362
#define OFFSET 363
#define LONGBLOB 364
#define MATCH 365
#define MEDIUMTEXT 366
#define MEDIUMBLOB 367
#define MEDIUMINT 368
#define NATURAL 369
#define NO_ACTION 370
#define NULLX 371
#define OUTER 372
#define ON 373
#define ORDER 374
#define ONDUPLICATE 375
#define PARTIAL 376
#define PRIMARY 377
#define QUICK 378
#define REAL 379
#define RECLAIM 380
#define REFERENCES 381
#define RENAME 382
#define RESTRICT 383
#define ROLLUP 384
#define RIGHT 385
#define REPLACE 386
#define SQL_SMALL_RESULT 387
#define SCHEMA 388
#define SOME 389
#define SQL_CALC_FOUND_ROWS 390
#define SQL_BIG_RESULT 391
#define SIMPLE 392
#define STRAIGHT_JOIN 393
#define SMALLINT 394
#define SET 395
#define SELECT 396
#define TINYTEXT 397
#define TINYINT 398
#define TO 399
#define TEMPORARY 400
#define TEXT 401
#define TIMESTAMP 402
#define TABLE 403
#define THEN 404
#define TRAILING 405
#define TRUNCATE 406
#define TINYBLOB 407
#define TIME 408
#define UPDATE 409
#define UNSIGNED 410
#define UNIQUE 411
#define UUID 412
#define USING 413
#define USE 414
#define HASH 415
#define VALIDATE 416
#define VARCHAR 417
#define VALUES 418
#define VARBINARY 419
#define WHERE 420
#define WHEN 421
#define WITH 422
#define YEAR 423
#define YEAR_MONTH 424
#define ZEROFILL 425
#define EXISTS 426
#define FSUBSTRING 427
#define FTRIM 428
#define FDATE_ADD 429
#define FDATE_SUB 430
#define FCOUNT 431
#define FSUM 432
#define FAVG 433
#define FMIN 434
#define FMAX 435
#define FUPPER 436
#define FLOWER 437
#define FLENGTH 438
#define FCONCAT 439
#define FREPLACE 440
#define FCOALESCE 441
#define FGEN_RANDOM_UUID 442
#define FGEN_RANDOM_UUID_V7 443
#define FSNOWFLAKE_ID 444
#define FLAST_INSERT_ID 445




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
#line 437 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

