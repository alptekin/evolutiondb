/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     JSON_ARROW_TEXT = 277,
     JSON_ARROW = 278,
     UMINUS = 279,
     ALTER = 280,
     ADD = 281,
     AFTER = 282,
     ALL = 283,
     ANALYZE = 284,
     ANY = 285,
     AUTO_INCREMENT = 286,
     ASC = 287,
     AND = 288,
     AS = 289,
     ALWAYS = 290,
     IDENTITY = 291,
     CONTINUE = 292,
     RESTART = 293,
     GENERATED = 294,
     STORED = 295,
     VIRTUAL = 296,
     BEFORE = 297,
     BEGINWORK = 298,
     BLOB = 299,
     BOOLEAN = 300,
     BY = 301,
     BINARY = 302,
     BOTH = 303,
     BIGINT = 304,
     BIT = 305,
     CALL = 306,
     CLOSE = 307,
     CURSOR = 308,
     CONSTRAINT = 309,
     CURRENT_TIMESTAMP = 310,
     CREATE = 311,
     CASCADE = 312,
     CHANGE = 313,
     CROSS = 314,
     CASE = 315,
     CHECK = 316,
     COMMENT = 317,
     CURRENT_DATE = 318,
     CURRENT_TIME = 319,
     CHAR = 320,
     COLLATE = 321,
     COLUMN = 322,
     CONCURRENTLY = 323,
     COPY = 324,
     CSV = 325,
     CONFLICT = 326,
     EXCLUDED = 327,
     NOTHING = 328,
     AGAINST = 329,
     MATERIALIZED = 330,
     REFRESH = 331,
     OF = 332,
     DATABASE = 333,
     DECLARE = 334,
     DEFERRABLE = 335,
     DEFERRED = 336,
     DELIMITER = 337,
     DISABLE = 338,
     DO = 339,
     DOMAIN = 340,
     DELAYED = 341,
     DAY_HOUR = 342,
     DAY_MICROSECOND = 343,
     DISTINCT = 344,
     DELETE = 345,
     DROP = 346,
     DAY_MINUTE = 347,
     DISTINCTROW = 348,
     DAY_SECOND = 349,
     DESC = 350,
     DEFAULT = 351,
     DOUBLE = 352,
     DATETIME = 353,
     DECIMAL = 354,
     DATE = 355,
     EACH = 356,
     ELSEIF = 357,
     ENABLE = 358,
     ESCAPED = 359,
     EXCEPT = 360,
     ENUM = 361,
     END = 362,
     ELSE = 363,
     EXECUTE = 364,
     EXIT = 365,
     EXPLAIN = 366,
     FETCH = 367,
     FIRST = 368,
     FOREACH = 369,
     FLOAT = 370,
     FORCE = 371,
     FOREIGN = 372,
     FORMAT = 373,
     FROM = 374,
     FULL = 375,
     FULLTEXT = 376,
     FUNCTION = 377,
     FOR = 378,
     GROUP = 379,
     HANDLER = 380,
     HEADER = 381,
     HOUR_MINUTE = 382,
     HOUR_MICROSECOND = 383,
     HIGH_PRIORITY = 384,
     HOUR_SECOND = 385,
     HAVING = 386,
     IMMEDIATE = 387,
     INOUT = 388,
     INITIALLY = 389,
     INTEGER = 390,
     INNER = 391,
     IGNORE = 392,
     INDEX = 393,
     IF = 394,
     INSERT = 395,
     INTERSECT = 396,
     INTO = 397,
     INT = 398,
     INTERVAL = 399,
     ITERATE = 400,
     JOIN = 401,
     KEY = 402,
     LEAVE = 403,
     LOOP = 404,
     LATERAL = 405,
     LISTEN = 406,
     NOTIFY = 407,
     UNLISTEN = 408,
     SELF = 409,
     LESS = 410,
     LONGTEXT = 411,
     LOW_PRIORITY = 412,
     LEFT = 413,
     LEADING = 414,
     LIMIT = 415,
     LOCKED = 416,
     OFFSET = 417,
     LONGBLOB = 418,
     MATCH = 419,
     MAXVALUE = 420,
     MEDIUMTEXT = 421,
     MINUS = 422,
     MODIFY = 423,
     MEDIUMBLOB = 424,
     MEDIUMINT = 425,
     NATURAL = 426,
     NODE = 427,
     NO_ACTION = 428,
     NULLX = 429,
     OPEN = 430,
     OUT = 431,
     OUTER = 432,
     ON = 433,
     ORDER = 434,
     ONDUPLICATE = 435,
     PARTIAL = 436,
     PRIMARY = 437,
     PROCEDURE = 438,
     QUICK = 439,
     RANGE = 440,
     REAL = 441,
     RECLAIM = 442,
     REFERENCES = 443,
     RENAME = 444,
     RESIGNAL = 445,
     RESTRICT = 446,
     RETURN = 447,
     RETURNING = 448,
     RETURNS = 449,
     ROLLUP = 450,
     RIGHT = 451,
     REPLACE = 452,
     ROW = 453,
     SIGNAL = 454,
     TRIGGER = 455,
     UNTIL = 456,
     SQL_SMALL_RESULT = 457,
     SCHEMA = 458,
     SHARD = 459,
     SHARDS = 460,
     SHARE = 461,
     SKIP = 462,
     SOME = 463,
     SQL_CALC_FOUND_ROWS = 464,
     SQL_BIG_RESULT = 465,
     SIMPLE = 466,
     STDIN = 467,
     STDOUT = 468,
     STRAIGHT_JOIN = 469,
     SMALLINT = 470,
     SET = 471,
     SELECT = 472,
     QUOTE = 473,
     TINYTEXT = 474,
     TINYINT = 475,
     TO = 476,
     TEMPORARY = 477,
     GLOBAL = 478,
     PRESERVE = 479,
     TEXT = 480,
     THAN = 481,
     TIMESTAMP = 482,
     TABLE = 483,
     THEN = 484,
     TRAILING = 485,
     TRUNCATE = 486,
     TINYBLOB = 487,
     TIME = 488,
     UPDATE = 489,
     UNSIGNED = 490,
     UNION = 491,
     UNIQUE = 492,
     UUID = 493,
     ARRAY = 494,
     JSON = 495,
     VIEW = 496,
     USING = 497,
     USE = 498,
     HASH = 499,
     VALIDATE = 500,
     VARCHAR = 501,
     VALUES = 502,
     VARBINARY = 503,
     WHERE = 504,
     WHEN = 505,
     WHILE = 506,
     WITH = 507,
     YEAR = 508,
     YEAR_MONTH = 509,
     ZEROFILL = 510,
     EXISTS = 511,
     FSUBSTRING = 512,
     FTRIM = 513,
     FDATE_ADD = 514,
     FDATE_SUB = 515,
     FDATEDIFF = 516,
     FYEAR = 517,
     FMONTH = 518,
     FDAY = 519,
     FHOUR = 520,
     FMINUTE = 521,
     FSECOND = 522,
     FNOW = 523,
     FLEFT = 524,
     FRIGHT = 525,
     FLPAD = 526,
     FRPAD = 527,
     FREVERSE = 528,
     FREPEAT = 529,
     FINSTR = 530,
     FLOCATE = 531,
     FABS = 532,
     FCEIL = 533,
     FFLOOR = 534,
     FROUND = 535,
     FPOWER = 536,
     FSQRT = 537,
     FMOD = 538,
     FRAND = 539,
     FLOG = 540,
     FLOG10 = 541,
     FSIGN = 542,
     FPI = 543,
     FCAST = 544,
     FCONVERT = 545,
     FNULLIF = 546,
     FIFNULL = 547,
     FIF = 548,
     UNKNOWN = 549,
     FGROUP_CONCAT = 550,
     SEPARATOR = 551,
     FCOUNT = 552,
     FSUM = 553,
     FAVG = 554,
     FMIN = 555,
     FMAX = 556,
     FUPPER = 557,
     FLOWER = 558,
     FLENGTH = 559,
     FCONCAT = 560,
     FREPLACE = 561,
     FCOALESCE = 562,
     FGEN_RANDOM_UUID = 563,
     FGEN_RANDOM_UUID_V7 = 564,
     FSNOWFLAKE_ID = 565,
     FLAST_INSERT_ID = 566,
     FSCOPE_IDENTITY = 567,
     FAT_IDENTITY = 568,
     FAT_LAST_INSERT_ID = 569,
     FEVO_SLEEP = 570,
     FEVO_JITTER = 571,
     FROW_NUMBER = 572,
     FRANK = 573,
     FDENSE_RANK = 574,
     FLEAD = 575,
     FLAG = 576,
     FNTILE = 577,
     FPERCENT_RANK = 578,
     FCUME_DIST = 579,
     OVER = 580,
     PARTITION = 581,
     FJSON_EXTRACT = 582,
     FJSON_UNQUOTE = 583,
     FJSON_TYPE = 584,
     FJSON_LENGTH = 585,
     FJSON_DEPTH = 586,
     FJSON_VALID = 587,
     FJSON_KEYS = 588,
     FJSON_PRETTY = 589,
     FJSON_QUOTE = 590,
     FJSON_SET = 591,
     FJSON_INSERT = 592,
     FJSON_REPLACE = 593,
     FJSON_REMOVE = 594,
     FJSON_CONTAINS = 595,
     FJSON_CONTAINS_PATH = 596,
     FJSON_SEARCH = 597,
     FJSON_OBJECT = 598,
     FJSON_ARRAY = 599,
     FJSON_ARRAYAGG = 600,
     SEQUENCE = 601,
     FNEXTVAL = 602,
     FCURRVAL = 603,
     FSETVAL = 604,
     FLASTVAL = 605,
     START = 606,
     INCREMENT = 607,
     MINVALUE = 608,
     CYCLE = 609,
     FARRAY_LENGTH = 610,
     FUNNEST = 611,
     FEVO_NOTIFY = 612,
     FPG_LISTENING_CHANNELS = 613
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
#define JSON_ARROW_TEXT 277
#define JSON_ARROW 278
#define UMINUS 279
#define ALTER 280
#define ADD 281
#define AFTER 282
#define ALL 283
#define ANALYZE 284
#define ANY 285
#define AUTO_INCREMENT 286
#define ASC 287
#define AND 288
#define AS 289
#define ALWAYS 290
#define IDENTITY 291
#define CONTINUE 292
#define RESTART 293
#define GENERATED 294
#define STORED 295
#define VIRTUAL 296
#define BEFORE 297
#define BEGINWORK 298
#define BLOB 299
#define BOOLEAN 300
#define BY 301
#define BINARY 302
#define BOTH 303
#define BIGINT 304
#define BIT 305
#define CALL 306
#define CLOSE 307
#define CURSOR 308
#define CONSTRAINT 309
#define CURRENT_TIMESTAMP 310
#define CREATE 311
#define CASCADE 312
#define CHANGE 313
#define CROSS 314
#define CASE 315
#define CHECK 316
#define COMMENT 317
#define CURRENT_DATE 318
#define CURRENT_TIME 319
#define CHAR 320
#define COLLATE 321
#define COLUMN 322
#define CONCURRENTLY 323
#define COPY 324
#define CSV 325
#define CONFLICT 326
#define EXCLUDED 327
#define NOTHING 328
#define AGAINST 329
#define MATERIALIZED 330
#define REFRESH 331
#define OF 332
#define DATABASE 333
#define DECLARE 334
#define DEFERRABLE 335
#define DEFERRED 336
#define DELIMITER 337
#define DISABLE 338
#define DO 339
#define DOMAIN 340
#define DELAYED 341
#define DAY_HOUR 342
#define DAY_MICROSECOND 343
#define DISTINCT 344
#define DELETE 345
#define DROP 346
#define DAY_MINUTE 347
#define DISTINCTROW 348
#define DAY_SECOND 349
#define DESC 350
#define DEFAULT 351
#define DOUBLE 352
#define DATETIME 353
#define DECIMAL 354
#define DATE 355
#define EACH 356
#define ELSEIF 357
#define ENABLE 358
#define ESCAPED 359
#define EXCEPT 360
#define ENUM 361
#define END 362
#define ELSE 363
#define EXECUTE 364
#define EXIT 365
#define EXPLAIN 366
#define FETCH 367
#define FIRST 368
#define FOREACH 369
#define FLOAT 370
#define FORCE 371
#define FOREIGN 372
#define FORMAT 373
#define FROM 374
#define FULL 375
#define FULLTEXT 376
#define FUNCTION 377
#define FOR 378
#define GROUP 379
#define HANDLER 380
#define HEADER 381
#define HOUR_MINUTE 382
#define HOUR_MICROSECOND 383
#define HIGH_PRIORITY 384
#define HOUR_SECOND 385
#define HAVING 386
#define IMMEDIATE 387
#define INOUT 388
#define INITIALLY 389
#define INTEGER 390
#define INNER 391
#define IGNORE 392
#define INDEX 393
#define IF 394
#define INSERT 395
#define INTERSECT 396
#define INTO 397
#define INT 398
#define INTERVAL 399
#define ITERATE 400
#define JOIN 401
#define KEY 402
#define LEAVE 403
#define LOOP 404
#define LATERAL 405
#define LISTEN 406
#define NOTIFY 407
#define UNLISTEN 408
#define SELF 409
#define LESS 410
#define LONGTEXT 411
#define LOW_PRIORITY 412
#define LEFT 413
#define LEADING 414
#define LIMIT 415
#define LOCKED 416
#define OFFSET 417
#define LONGBLOB 418
#define MATCH 419
#define MAXVALUE 420
#define MEDIUMTEXT 421
#define MINUS 422
#define MODIFY 423
#define MEDIUMBLOB 424
#define MEDIUMINT 425
#define NATURAL 426
#define NODE 427
#define NO_ACTION 428
#define NULLX 429
#define OPEN 430
#define OUT 431
#define OUTER 432
#define ON 433
#define ORDER 434
#define ONDUPLICATE 435
#define PARTIAL 436
#define PRIMARY 437
#define PROCEDURE 438
#define QUICK 439
#define RANGE 440
#define REAL 441
#define RECLAIM 442
#define REFERENCES 443
#define RENAME 444
#define RESIGNAL 445
#define RESTRICT 446
#define RETURN 447
#define RETURNING 448
#define RETURNS 449
#define ROLLUP 450
#define RIGHT 451
#define REPLACE 452
#define ROW 453
#define SIGNAL 454
#define TRIGGER 455
#define UNTIL 456
#define SQL_SMALL_RESULT 457
#define SCHEMA 458
#define SHARD 459
#define SHARDS 460
#define SHARE 461
#define SKIP 462
#define SOME 463
#define SQL_CALC_FOUND_ROWS 464
#define SQL_BIG_RESULT 465
#define SIMPLE 466
#define STDIN 467
#define STDOUT 468
#define STRAIGHT_JOIN 469
#define SMALLINT 470
#define SET 471
#define SELECT 472
#define QUOTE 473
#define TINYTEXT 474
#define TINYINT 475
#define TO 476
#define TEMPORARY 477
#define GLOBAL 478
#define PRESERVE 479
#define TEXT 480
#define THAN 481
#define TIMESTAMP 482
#define TABLE 483
#define THEN 484
#define TRAILING 485
#define TRUNCATE 486
#define TINYBLOB 487
#define TIME 488
#define UPDATE 489
#define UNSIGNED 490
#define UNION 491
#define UNIQUE 492
#define UUID 493
#define ARRAY 494
#define JSON 495
#define VIEW 496
#define USING 497
#define USE 498
#define HASH 499
#define VALIDATE 500
#define VARCHAR 501
#define VALUES 502
#define VARBINARY 503
#define WHERE 504
#define WHEN 505
#define WHILE 506
#define WITH 507
#define YEAR 508
#define YEAR_MONTH 509
#define ZEROFILL 510
#define EXISTS 511
#define FSUBSTRING 512
#define FTRIM 513
#define FDATE_ADD 514
#define FDATE_SUB 515
#define FDATEDIFF 516
#define FYEAR 517
#define FMONTH 518
#define FDAY 519
#define FHOUR 520
#define FMINUTE 521
#define FSECOND 522
#define FNOW 523
#define FLEFT 524
#define FRIGHT 525
#define FLPAD 526
#define FRPAD 527
#define FREVERSE 528
#define FREPEAT 529
#define FINSTR 530
#define FLOCATE 531
#define FABS 532
#define FCEIL 533
#define FFLOOR 534
#define FROUND 535
#define FPOWER 536
#define FSQRT 537
#define FMOD 538
#define FRAND 539
#define FLOG 540
#define FLOG10 541
#define FSIGN 542
#define FPI 543
#define FCAST 544
#define FCONVERT 545
#define FNULLIF 546
#define FIFNULL 547
#define FIF 548
#define UNKNOWN 549
#define FGROUP_CONCAT 550
#define SEPARATOR 551
#define FCOUNT 552
#define FSUM 553
#define FAVG 554
#define FMIN 555
#define FMAX 556
#define FUPPER 557
#define FLOWER 558
#define FLENGTH 559
#define FCONCAT 560
#define FREPLACE 561
#define FCOALESCE 562
#define FGEN_RANDOM_UUID 563
#define FGEN_RANDOM_UUID_V7 564
#define FSNOWFLAKE_ID 565
#define FLAST_INSERT_ID 566
#define FSCOPE_IDENTITY 567
#define FAT_IDENTITY 568
#define FAT_LAST_INSERT_ID 569
#define FEVO_SLEEP 570
#define FEVO_JITTER 571
#define FROW_NUMBER 572
#define FRANK 573
#define FDENSE_RANK 574
#define FLEAD 575
#define FLAG 576
#define FNTILE 577
#define FPERCENT_RANK 578
#define FCUME_DIST 579
#define OVER 580
#define PARTITION 581
#define FJSON_EXTRACT 582
#define FJSON_UNQUOTE 583
#define FJSON_TYPE 584
#define FJSON_LENGTH 585
#define FJSON_DEPTH 586
#define FJSON_VALID 587
#define FJSON_KEYS 588
#define FJSON_PRETTY 589
#define FJSON_QUOTE 590
#define FJSON_SET 591
#define FJSON_INSERT 592
#define FJSON_REPLACE 593
#define FJSON_REMOVE 594
#define FJSON_CONTAINS 595
#define FJSON_CONTAINS_PATH 596
#define FJSON_SEARCH 597
#define FJSON_OBJECT 598
#define FJSON_ARRAY 599
#define FJSON_ARRAYAGG 600
#define SEQUENCE 601
#define FNEXTVAL 602
#define FCURRVAL 603
#define FSETVAL 604
#define FLASTVAL 605
#define START 606
#define INCREMENT 607
#define MINVALUE 608
#define CYCLE 609
#define FARRAY_LENGTH 610
#define FUNNEST 611
#define FEVO_NOTIFY 612
#define FPG_LISTENING_CHANNELS 613




/* Copy the first part of user declarations.  */
#line 4 "parser/evoparser.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"
	#include "../db/expression.h"

	void yyerror(void *scanner, const char *s, ...);
	void emit(const char *s, ...);

	/* Subquery SQL extraction helpers */
	extern __thread int g_lex_pos;
	extern __thread const char *g_lex_input;
	extern __thread int g_in_subquery;
	extern __thread int g_in_array_literal;
	static __thread int g_subq_mark = 0;

	static char *evo_extract_subq_sql(void) {
		if (!g_lex_input) return strdup("");
		int end = g_lex_pos - 1; /* exclude closing ')' */
		int len = end - g_subq_mark;
		if (len <= 0) return strdup("");
		char *sql = (char *)malloc(len + 1);
		if (!sql) return strdup("");
		memcpy(sql, g_lex_input + g_subq_mark, len);
		sql[len] = '\0';
		/* Trim leading/trailing whitespace */
		char *s = sql;
		while (*s && (*s == ' ' || *s == '\t' || *s == '\n')) s++;
		if (s != sql) memmove(sql, s, strlen(s) + 1);
		int sl = (int)strlen(sql);
		while (sl > 0 && (sql[sl-1] == ' ' || sql[sl-1] == '\t' || sql[sl-1] == '\n'))
			sql[--sl] = '\0';
		return sql;
	}

	/* Forward declare yylex for reentrant parser */
	#ifndef YY_DECL
	union YYSTYPE;
	int yylex(union YYSTYPE *lvalp, void *scanner);
	#endif

	/* Track alias for current select_expr — thread-local */
	static __thread char g_currentAlias[128];

	/* LATERAL subquery: captured SQL pending alias binding, plus outer
	 * g_expr slot snapshots that the inner select_stmt parse would
	 * otherwise overwrite. We save every slot an inner select_stmt or
	 * its sub-rules can touch so nested parsing is fully isolated. */
	static __thread char *g_pending_lateral_sql = NULL;
	static __thread struct ExprNode *g_lateral_saved_whereExpr = NULL;
	static __thread struct ExprNode *g_lateral_saved_limitExpr = NULL;
	static __thread struct ExprNode *g_lateral_saved_offsetExpr = NULL;
	static __thread struct ExprNode *g_lateral_saved_havingExpr = NULL;
	static __thread int g_lateral_saved_selectExprCount = 0;
	static __thread struct ExprNode *g_lateral_saved_selectExprs[MAX_SELECT_EXPRS];
	static __thread int g_lateral_saved_groupByCount = 0;
	static __thread struct ExprNode *g_lateral_saved_groupByExprs[MAX_GROUP_BY];
	static __thread int g_lateral_saved_windowSpecCount = 0;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 70 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 883 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 896 "parser/evoparser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  97
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  376
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  178
/* YYNRULES -- Number of rules.  */
#define YYNRULES  898
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2221

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   613

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     371,   372,    26,    24,   373,    25,   370,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   369,
       2,   375,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   374,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    23,    29,    31,    32,    33,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    20,    29,    31,
      33,    35,    37,    39,    41,    45,    49,    53,    57,    61,
      65,    68,    72,    76,    80,    84,    88,    92,    96,   100,
     104,   108,   111,   114,   118,   119,   126,   127,   135,   136,
     144,   145,   153,   160,   167,   171,   176,   180,   185,   189,
     195,   202,   204,   208,   210,   214,   215,   221,   225,   230,
     232,   237,   244,   249,   256,   260,   261,   263,   264,   271,
     272,   280,   281,   288,   289,   297,   298,   304,   309,   314,
     319,   324,   329,   334,   339,   344,   351,   352,   362,   363,
     373,   374,   384,   385,   396,   397,   408,   409,   420,   421,
     432,   433,   444,   445,   456,   457,   468,   469,   482,   483,
     498,   499,   514,   515,   526,   527,   540,   541,   556,   557,
     572,   573,   584,   585,   595,   596,   606,   615,   622,   629,
     638,   643,   651,   658,   663,   668,   673,   680,   689,   696,
     703,   710,   719,   728,   733,   740,   747,   754,   759,   764,
     769,   776,   781,   788,   793,   800,   804,   809,   814,   819,
     823,   827,   834,   839,   844,   849,   854,   859,   864,   871,
     876,   881,   886,   891,   896,   901,   906,   911,   920,   929,
     938,   945,   952,   961,   970,   977,   988,   993,  1000,  1009,
    1014,  1019,  1024,  1031,  1040,  1044,  1051,  1058,  1065,  1072,
    1081,  1085,  1094,  1105,  1109,  1113,  1117,  1121,  1125,  1127,
    1129,  1134,  1141,  1143,  1145,  1147,  1154,  1161,  1165,  1169,
    1173,  1177,  1181,  1185,  1189,  1193,  1197,  1202,  1209,  1213,
    1219,  1224,  1230,  1234,  1239,  1243,  1248,  1250,  1252,  1254,
    1256,  1260,  1273,  1286,  1287,  1290,  1291,  1296,  1299,  1304,
    1305,  1307,  1309,  1310,  1313,  1314,  1317,  1318,  1322,  1324,
    1328,  1329,  1333,  1336,  1341,  1342,  1346,  1348,  1352,  1355,
    1360,  1363,  1364,  1367,  1372,  1377,  1378,  1381,  1384,  1389,
    1394,  1395,  1398,  1400,  1404,  1405,  1408,  1411,  1414,  1417,
    1420,  1423,  1426,  1429,  1431,  1435,  1437,  1440,  1443,  1445,
    1446,  1448,  1452,  1454,  1456,  1460,  1466,  1470,  1474,  1479,
    1486,  1496,  1500,  1501,  1507,  1509,  1510,  1516,  1520,  1526,
    1533,  1539,  1540,  1542,  1544,  1545,  1547,  1549,  1551,  1554,
    1557,  1558,  1559,  1561,  1564,  1569,  1576,  1583,  1590,  1591,
    1594,  1595,  1597,  1601,  1605,  1607,  1616,  1619,  1622,  1625,
    1626,  1633,  1636,  1641,  1642,  1645,  1653,  1655,  1659,  1665,
    1667,  1676,  1686,  1697,  1707,  1719,  1730,  1743,  1755,  1769,
    1779,  1791,  1802,  1815,  1827,  1840,  1842,  1846,  1848,  1853,
    1858,  1863,  1870,  1872,  1876,  1879,  1883,  1889,  1891,  1895,
    1896,  1899,  1902,  1906,  1910,  1912,  1914,  1916,  1919,  1923,
    1926,  1929,  1932,  1937,  1939,  1943,  1945,  1949,  1955,  1957,
    1968,  1979,  1997,  2010,  2030,  2042,  2049,  2058,  2065,  2072,
    2079,  2089,  2096,  2102,  2111,  2119,  2129,  2138,  2149,  2159,
    2160,  2162,  2165,  2167,  2178,  2185,  2186,  2187,  2193,  2194,
    2199,  2200,  2204,  2209,  2212,  2213,  2219,  2223,  2229,  2230,
    2233,  2236,  2239,  2242,  2244,  2245,  2246,  2250,  2252,  2256,
    2260,  2261,  2268,  2270,  2272,  2276,  2280,  2288,  2292,  2296,
    2302,  2308,  2310,  2319,  2327,  2335,  2337,  2338,  2346,  2347,
    2351,  2353,  2357,  2359,  2361,  2363,  2365,  2367,  2368,  2370,
    2375,  2379,  2381,  2385,  2388,  2391,  2394,  2396,  2399,  2402,
    2405,  2407,  2409,  2419,  2420,  2423,  2426,  2430,  2436,  2442,
    2450,  2456,  2458,  2463,  2468,  2472,  2478,  2482,  2488,  2489,
    2492,  2494,  2500,  2508,  2516,  2526,  2538,  2540,  2543,  2547,
    2549,  2559,  2571,  2590,  2591,  2596,  2600,  2606,  2612,  2622,
    2633,  2641,  2643,  2647,  2657,  2667,  2677,  2684,  2696,  2705,
    2706,  2708,  2711,  2713,  2717,  2723,  2731,  2736,  2741,  2747,
    2753,  2758,  2765,  2777,  2791,  2805,  2821,  2826,  2833,  2835,
    2839,  2841,  2845,  2847,  2851,  2852,  2857,  2863,  2868,  2874,
    2879,  2885,  2890,  2896,  2901,  2906,  2910,  2914,  2918,  2921,
    2925,  2930,  2935,  2937,  2941,  2942,  2947,  2948,  2952,  2955,
    2959,  2963,  2967,  2971,  2977,  2983,  2989,  2993,  2999,  3002,
    3010,  3016,  3024,  3030,  3033,  3037,  3040,  3044,  3047,  3051,
    3057,  3062,  3068,  3076,  3085,  3094,  3102,  3109,  3116,  3122,
    3123,  3127,  3133,  3134,  3136,  3137,  3140,  3143,  3144,  3149,
    3153,  3156,  3160,  3164,  3168,  3172,  3176,  3180,  3184,  3188,
    3192,  3196,  3198,  3200,  3202,  3204,  3206,  3210,  3216,  3219,
    3224,  3226,  3228,  3230,  3232,  3236,  3240,  3244,  3248,  3254,
    3260,  3262,  3264,  3266,  3270,  3272,  3276,  3280,  3281,  3283,
    3285,  3287,  3291,  3295,  3298,  3300,  3304,  3308,  3312,  3314,
    3325,  3335,  3348,  3360,  3373,  3385,  3400,  3414,  3415,  3417,
    3419,  3423,  3426,  3430,  3434,  3438,  3440,  3442,  3444,  3446,
    3448,  3450,  3452,  3454,  3456,  3458,  3459,  3462,  3467,  3473,
    3479,  3485,  3491,  3497,  3499,  3501,  3503,  3505,  3507,  3509,
    3511,  3513,  3515,  3517,  3519,  3521,  3523,  3525,  3527,  3529,
    3531,  3533,  3535,  3537,  3539,  3541,  3543,  3545,  3547,  3549,
    3551,  3553,  3555,  3557,  3559,  3561,  3563,  3565,  3567,  3569,
    3571,  3573,  3575,  3577,  3579,  3581,  3583,  3585,  3587,  3589,
    3591,  3593,  3595,  3597,  3599,  3601,  3603,  3605,  3607,  3609,
    3611,  3613,  3615,  3617,  3619,  3621,  3623,  3625,  3627,  3629,
    3631,  3633,  3635,  3637,  3639,  3641,  3643,  3645,  3647,  3649,
    3651,  3653,  3655,  3657,  3659,  3661,  3663,  3665,  3667,  3669,
    3671,  3673,  3675,  3677,  3679,  3681,  3683,  3685,  3687,  3689,
    3691,  3693,  3695,  3697,  3699,  3701,  3703,  3705,  3707,  3709,
    3711,  3713,  3715,  3717,  3719,  3721,  3723,  3725,  3727,  3729,
    3731,  3733,  3735,  3737,  3739,  3741,  3743,  3745,  3749,  3755,
    3759,  3765,  3767,  3772,  3778,  3780,  3784,  3786,  3788,  3790,
    3792,  3794,  3796,  3798,  3800,  3814,  3816,  3818,  3820,  3822,
    3824,  3826,  3830,  3836,  3841,  3846,  3848,  3854,  3855,  3858,
    3862,  3865,  3869,  3872,  3875,  3878,  3880,  3883,  3885,  3889,
    3895,  3900,  3905,  3912,  3919,  3920,  3923,  3926,  3928
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     377,     0,    -1,   416,   369,    -1,   416,   369,   377,    -1,
       3,    -1,     3,   370,     3,    -1,    82,   370,     3,    -1,
     174,   371,     3,   372,    84,   371,     4,   372,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   184,
      -1,   378,    24,   378,    -1,   378,    25,   378,    -1,   378,
      26,   378,    -1,   378,    27,   378,    -1,   378,    28,   378,
      -1,   378,    29,   378,    -1,    25,   378,    -1,   371,   378,
     372,    -1,   378,    12,   378,    -1,   378,    10,   378,    -1,
     378,    11,   378,    -1,   378,    21,   378,    -1,   378,    22,
     378,    -1,   378,    30,   378,    -1,   378,    23,   378,    -1,
     378,    32,   378,    -1,   378,    31,   378,    -1,    18,   378,
      -1,    17,   378,    -1,   378,    20,   378,    -1,    -1,   378,
      20,   371,   379,   417,   372,    -1,    -1,   378,    20,    40,
     371,   380,   417,   372,    -1,    -1,   378,    20,   218,   371,
     381,   417,   372,    -1,    -1,   378,    20,    38,   371,   382,
     417,   372,    -1,   378,    20,    40,   371,   386,   372,    -1,
     378,    20,   218,   371,   386,   372,    -1,   378,    15,   184,
      -1,   378,    15,    18,   184,    -1,   378,    15,     6,    -1,
     378,    15,    18,     6,    -1,     8,     9,   378,    -1,   378,
      19,   378,    43,   378,    -1,   378,    18,    19,   378,    43,
     378,    -1,   378,    -1,   378,   373,   383,    -1,   378,    -1,
     378,   373,   384,    -1,    -1,   249,    34,   385,   384,   374,
      -1,   249,    34,   374,    -1,   378,    34,   378,   374,    -1,
     378,    -1,   365,   371,   378,   372,    -1,   365,   371,   378,
     373,   378,   372,    -1,   366,   371,   378,   372,    -1,   367,
     371,   378,   373,   378,   372,    -1,   368,   371,   372,    -1,
      -1,   383,    -1,    -1,   378,    16,   371,   388,   383,   372,
      -1,    -1,   378,    18,    16,   371,   389,   383,   372,    -1,
      -1,   378,    16,   371,   390,   417,   372,    -1,    -1,   378,
      18,    16,   371,   391,   417,   372,    -1,    -1,   266,   371,
     392,   417,   372,    -1,     3,   371,   387,   372,    -1,   307,
     371,    26,   372,    -1,   307,   371,   378,   372,    -1,   308,
     371,   378,   372,    -1,   309,   371,   378,   372,    -1,   310,
     371,   378,   372,    -1,   311,   371,   378,   372,    -1,   305,
     371,   378,   372,    -1,   305,   371,   378,   306,     4,   372,
      -1,    -1,   327,   371,   372,   335,   371,   393,   424,   426,
     372,    -1,    -1,   328,   371,   372,   335,   371,   394,   424,
     426,   372,    -1,    -1,   329,   371,   372,   335,   371,   395,
     424,   426,   372,    -1,    -1,   308,   371,   378,   372,   335,
     371,   396,   424,   426,   372,    -1,    -1,   307,   371,    26,
     372,   335,   371,   397,   424,   426,   372,    -1,    -1,   307,
     371,   378,   372,   335,   371,   398,   424,   426,   372,    -1,
      -1,   309,   371,   378,   372,   335,   371,   399,   424,   426,
     372,    -1,    -1,   310,   371,   378,   372,   335,   371,   400,
     424,   426,   372,    -1,    -1,   311,   371,   378,   372,   335,
     371,   401,   424,   426,   372,    -1,    -1,   330,   371,   378,
     372,   335,   371,   402,   424,   426,   372,    -1,    -1,   330,
     371,   378,   373,     5,   372,   335,   371,   403,   424,   426,
     372,    -1,    -1,   330,   371,   378,   373,     5,   373,     4,
     372,   335,   371,   404,   424,   426,   372,    -1,    -1,   330,
     371,   378,   373,     5,   373,     5,   372,   335,   371,   405,
     424,   426,   372,    -1,    -1,   331,   371,   378,   372,   335,
     371,   406,   424,   426,   372,    -1,    -1,   331,   371,   378,
     373,     5,   372,   335,   371,   407,   424,   426,   372,    -1,
      -1,   331,   371,   378,   373,     5,   373,     4,   372,   335,
     371,   408,   424,   426,   372,    -1,    -1,   331,   371,   378,
     373,     5,   373,     5,   372,   335,   371,   409,   424,   426,
     372,    -1,    -1,   332,   371,     5,   372,   335,   371,   410,
     424,   426,   372,    -1,    -1,   333,   371,   372,   335,   371,
     411,   424,   426,   372,    -1,    -1,   334,   371,   372,   335,
     371,   412,   424,   426,   372,    -1,   267,   371,   378,   373,
     378,   373,   378,   372,    -1,   267,   371,   378,   373,   378,
     372,    -1,   267,   371,   378,   129,   378,   372,    -1,   267,
     371,   378,   129,   378,   133,   378,   372,    -1,   268,   371,
     378,   372,    -1,   268,   371,   413,   378,   129,   378,   372,
      -1,   268,   371,   413,   129,   378,   372,    -1,   312,   371,
     378,   372,    -1,   313,   371,   378,   372,    -1,   314,   371,
     378,   372,    -1,   315,   371,   378,   373,   378,   372,    -1,
     316,   371,   378,   373,   378,   373,   378,   372,    -1,   317,
     371,   378,   373,   378,   372,    -1,   279,   371,   378,   373,
     378,   372,    -1,   280,   371,   378,   373,   378,   372,    -1,
     281,   371,   378,   373,   378,   373,   378,   372,    -1,   282,
     371,   378,   373,   378,   373,   378,   372,    -1,   283,   371,
     378,   372,    -1,   284,   371,   378,   373,   378,   372,    -1,
     285,   371,   378,   373,   378,   372,    -1,   286,   371,   378,
     373,   378,   372,    -1,   287,   371,   378,   372,    -1,   288,
     371,   378,   372,    -1,   289,   371,   378,   372,    -1,   290,
     371,   378,   373,   378,   372,    -1,   290,   371,   378,   372,
      -1,   291,   371,   378,   373,   378,   372,    -1,   292,   371,
     378,   372,    -1,   293,   371,   378,   373,   378,   372,    -1,
     294,   371,   372,    -1,   295,   371,   378,   372,    -1,   296,
     371,   378,   372,    -1,   297,   371,   378,   372,    -1,   298,
     371,   372,    -1,   278,   371,   372,    -1,   271,   371,   378,
     373,   378,   372,    -1,   272,   371,   378,   372,    -1,   273,
     371,   378,   372,    -1,   274,   371,   378,   372,    -1,   275,
     371,   378,   372,    -1,   276,   371,   378,   372,    -1,   277,
     371,   378,   372,    -1,   337,   371,   378,   373,   378,   372,
      -1,   338,   371,   378,   372,    -1,   339,   371,   378,   372,
      -1,   340,   371,   378,   372,    -1,   341,   371,   378,   372,
      -1,   342,   371,   378,   372,    -1,   343,   371,   378,   372,
      -1,   344,   371,   378,   372,    -1,   345,   371,   378,   372,
      -1,   346,   371,   378,   373,   378,   373,   378,   372,    -1,
     347,   371,   378,   373,   378,   373,   378,   372,    -1,   348,
     371,   378,   373,   378,   373,   378,   372,    -1,   349,   371,
     378,   373,   378,   372,    -1,   350,   371,   378,   373,   378,
     372,    -1,   351,   371,   378,   373,   378,   373,   378,   372,
      -1,   352,   371,   378,   373,   378,   373,   378,   372,    -1,
     353,   371,   378,   373,   378,   372,    -1,   353,   371,   378,
     373,   378,   373,   378,   373,   378,   372,    -1,   354,   371,
     378,   372,    -1,   354,   371,   378,   373,   378,   372,    -1,
     354,   371,   378,   373,   378,   373,   378,   372,    -1,   355,
     371,   378,   372,    -1,   357,   371,   378,   372,    -1,   358,
     371,   378,   372,    -1,   359,   371,   378,   373,   378,   372,
      -1,   359,   371,   378,   373,   378,   373,   378,   372,    -1,
     360,   371,   372,    -1,   299,   371,   378,    44,   526,   372,
      -1,   300,   371,   378,   373,   526,   372,    -1,   301,   371,
     378,   373,   378,   372,    -1,   302,   371,   378,   373,   378,
     372,    -1,   303,   371,   378,   373,   378,   373,   378,   372,
      -1,   378,    15,   304,    -1,   315,   371,   378,   373,   378,
     373,   378,   372,    -1,   315,   371,   378,   373,   378,   373,
     378,   373,   378,   372,    -1,   318,   371,   372,    -1,   319,
     371,   372,    -1,   320,   371,   372,    -1,   321,   371,   372,
      -1,   322,   371,   372,    -1,   323,    -1,   324,    -1,   325,
     371,   378,   372,    -1,   326,   371,   378,   373,   378,   372,
      -1,   169,    -1,   240,    -1,    58,    -1,   269,   371,   378,
     373,   414,   372,    -1,   270,   371,   378,   373,   414,   372,
      -1,   154,   378,   263,    -1,   154,   378,    97,    -1,   154,
     378,    98,    -1,   154,   378,   102,    -1,   154,   378,   104,
      -1,   154,   378,   264,    -1,   154,   378,   138,    -1,   154,
     378,   137,    -1,   154,   378,   140,    -1,    70,   378,   415,
     117,    -1,    70,   378,   415,   118,   378,   117,    -1,    70,
     415,   117,    -1,    70,   415,   118,   378,   117,    -1,   260,
     378,   239,   378,    -1,   415,   260,   378,   239,   378,    -1,
     378,    14,   378,    -1,   378,    18,    14,   378,    -1,   378,
      13,   378,    -1,   378,    18,    13,   378,    -1,    65,    -1,
      73,    -1,    74,    -1,   417,    -1,   227,   435,   436,    -1,
     227,   435,   436,   129,   439,   418,   419,   423,   428,   431,
     432,   433,    -1,   227,   435,   436,   152,     3,   129,   439,
     418,   419,   423,   428,   431,    -1,    -1,   259,   378,    -1,
      -1,   134,    56,   420,   422,    -1,   378,   421,    -1,   420,
     373,   378,   421,    -1,    -1,    42,    -1,   105,    -1,    -1,
     262,   205,    -1,    -1,   141,   378,    -1,    -1,   336,    56,
     425,    -1,     3,    -1,   425,   373,     3,    -1,    -1,   189,
      56,   427,    -1,     3,   421,    -1,   427,   373,     3,   421,
      -1,    -1,   189,    56,   429,    -1,   430,    -1,   429,   373,
     430,    -1,     3,   421,    -1,     3,   370,     3,   421,    -1,
       5,   421,    -1,    -1,   170,   378,    -1,   170,   378,   373,
     378,    -1,   170,   378,   172,   378,    -1,    -1,   133,   244,
      -1,   133,   216,    -1,   133,   244,   217,   171,    -1,   133,
     216,   217,   171,    -1,    -1,   152,   434,    -1,     3,    -1,
     434,   373,     3,    -1,    -1,   435,    38,    -1,   435,    99,
      -1,   435,   103,    -1,   435,   139,    -1,   435,   224,    -1,
     435,   212,    -1,   435,   220,    -1,   435,   219,    -1,   437,
      -1,   436,   373,   437,    -1,    26,    -1,   378,   438,    -1,
      44,     3,    -1,     3,    -1,    -1,   440,    -1,   439,   373,
     440,    -1,   441,    -1,   445,    -1,     3,   438,   452,    -1,
       3,   370,     3,   438,   452,    -1,   455,   444,     3,    -1,
     442,   444,     3,    -1,   366,   371,   378,   372,    -1,   366,
     371,   378,   372,   444,     3,    -1,   366,   371,   378,   372,
     444,     3,   371,     3,   372,    -1,   371,   439,   372,    -1,
      -1,   160,   371,   443,   417,   372,    -1,    44,    -1,    -1,
     440,   446,   156,   441,   450,    -1,   440,   224,   441,    -1,
     440,   224,   441,   188,   378,    -1,   440,   448,   447,   156,
     441,   451,    -1,   440,   181,   449,   156,   441,    -1,    -1,
     146,    -1,    69,    -1,    -1,   187,    -1,   168,    -1,   206,
      -1,   168,   447,    -1,   206,   447,    -1,    -1,    -1,   451,
      -1,   188,   378,    -1,   252,   371,   434,   372,    -1,   253,
     157,   453,   371,   454,   372,    -1,   147,   157,   453,   371,
     454,   372,    -1,   126,   157,   453,   371,   454,   372,    -1,
      -1,   133,   156,    -1,    -1,     3,    -1,   454,   373,     3,
      -1,   371,   417,   372,    -1,   456,    -1,   100,   457,   129,
       3,   418,   428,   431,   552,    -1,   457,   167,    -1,   457,
     194,    -1,   457,   147,    -1,    -1,   100,   457,   458,   129,
     439,   418,    -1,     3,   459,    -1,   458,   373,     3,   459,
      -1,    -1,   370,    26,    -1,   100,   457,   129,   458,   252,
     439,   418,    -1,   460,    -1,   101,   238,     3,    -1,   101,
     238,   149,   266,     3,    -1,   461,    -1,    66,   148,     3,
     188,     3,   371,   462,   372,    -1,    66,   131,   148,     3,
     188,     3,   371,   462,   372,    -1,    66,   148,   149,   266,
       3,   188,     3,   371,   462,   372,    -1,    66,   247,   148,
       3,   188,     3,   371,   462,   372,    -1,    66,   247,   148,
     149,   266,     3,   188,     3,   371,   462,   372,    -1,    66,
     148,     3,   188,     3,   252,   254,   371,   462,   372,    -1,
      66,   148,   149,   266,     3,   188,     3,   252,   254,   371,
     462,   372,    -1,    66,   247,   148,     3,   188,     3,   252,
     254,   371,   462,   372,    -1,    66,   247,   148,   149,   266,
       3,   188,     3,   252,   254,   371,   462,   372,    -1,    66,
     148,    78,     3,   188,     3,   371,   462,   372,    -1,    66,
     148,    78,   149,   266,     3,   188,     3,   371,   462,   372,
      -1,    66,   247,   148,    78,     3,   188,     3,   371,   462,
     372,    -1,    66,   247,   148,    78,   149,   266,     3,   188,
       3,   371,   462,   372,    -1,    66,   148,    78,     3,   188,
       3,   252,   254,   371,   462,   372,    -1,    66,   247,   148,
      78,     3,   188,     3,   252,   254,   371,   462,   372,    -1,
       3,    -1,   462,   373,     3,    -1,   463,    -1,   312,   371,
       3,   372,    -1,   313,   371,     3,   372,    -1,   314,   371,
       3,   372,    -1,   315,   371,     3,   373,     3,   372,    -1,
     464,    -1,   101,   148,     3,    -1,   465,   467,    -1,   241,
     238,     3,    -1,   241,   238,     3,   373,   466,    -1,     3,
      -1,   466,   373,     3,    -1,    -1,   467,    67,    -1,   467,
     201,    -1,   467,    48,    46,    -1,   467,    47,    46,    -1,
     468,    -1,   469,    -1,   470,    -1,   161,     3,    -1,   161,
       3,   164,    -1,   163,     3,    -1,   163,    26,    -1,   162,
       3,    -1,   162,     3,   373,     4,    -1,   471,    -1,   197,
     238,     3,    -1,   472,    -1,    39,   238,     3,    -1,    39,
     238,     3,   370,     3,    -1,   473,    -1,    35,   238,     3,
      36,    64,     3,    71,   371,   378,   372,    -1,    35,   238,
       3,    36,    64,     3,   247,   371,   519,   372,    -1,    35,
     238,     3,    36,    64,     3,   127,   157,   371,   516,   372,
     198,     3,   371,   517,   372,   518,    -1,    35,   238,     3,
      36,    64,     3,    71,   371,   378,   372,    18,   255,    -1,
      35,   238,     3,    36,    64,     3,   127,   157,   371,   516,
     372,   198,     3,   371,   517,   372,   518,    18,   255,    -1,
      35,   238,     3,    36,    64,     3,   192,   157,   371,   515,
     372,    -1,    35,   238,     3,   101,    64,     3,    -1,    35,
     238,     3,   199,    64,     3,   231,     3,    -1,    35,   238,
       3,   113,    64,     3,    -1,    35,   238,     3,    93,    64,
       3,    -1,    35,   238,     3,   255,    64,     3,    -1,    35,
     238,     3,    36,    77,     3,   526,   521,   474,    -1,    35,
     238,     3,   101,    77,     3,    -1,    35,   238,     3,   101,
       3,    -1,    35,   238,     3,   199,    77,     3,   231,     3,
      -1,    35,   238,     3,   199,     3,   231,     3,    -1,    35,
     238,     3,   178,    77,     3,   526,   521,   474,    -1,    35,
     238,     3,   178,     3,   526,   521,   474,    -1,    35,   238,
       3,    68,    77,     3,     3,   526,   521,   474,    -1,    35,
     238,     3,    68,     3,     3,   526,   521,   474,    -1,    -1,
     123,    -1,    37,     3,    -1,   475,    -1,   150,   483,   484,
       3,   485,   257,   487,   476,   478,   552,    -1,   150,   483,
     484,     3,   485,   417,    -1,    -1,    -1,   190,   157,   244,
     477,   482,    -1,    -1,   188,    81,   479,   480,    -1,    -1,
     371,     3,   372,    -1,   371,     3,   373,     3,    -1,    94,
      83,    -1,    -1,    94,   244,   481,   226,   482,    -1,     3,
      20,   378,    -1,   482,   373,     3,    20,   378,    -1,    -1,
     483,   167,    -1,   483,    96,    -1,   483,   139,    -1,   483,
     147,    -1,   152,    -1,    -1,    -1,   371,   486,   372,    -1,
       3,    -1,   486,   373,     3,    -1,   371,   489,   372,    -1,
      -1,   487,   373,   488,   371,   489,   372,    -1,   378,    -1,
     106,    -1,   489,   373,   378,    -1,   489,   373,   106,    -1,
     150,   483,   484,     3,   226,   490,   476,    -1,     3,    20,
     378,    -1,     3,    20,   106,    -1,   490,   373,     3,    20,
     378,    -1,   490,   373,     3,    20,   106,    -1,   491,    -1,
     207,   483,   484,     3,   485,   257,   487,   476,    -1,   207,
     483,   484,     3,   226,   490,   476,    -1,   207,   483,   484,
       3,   485,   417,   476,    -1,   492,    -1,    -1,    79,     3,
     493,   494,   496,   497,   498,    -1,    -1,   371,   495,   372,
      -1,     3,    -1,   495,   373,     3,    -1,   129,    -1,   231,
      -1,     4,    -1,   222,    -1,   223,    -1,    -1,   499,    -1,
     262,   371,   499,   372,    -1,   371,   499,   372,    -1,   500,
      -1,   499,   373,   500,    -1,   128,    80,    -1,   128,   235,
      -1,    92,     4,    -1,   136,    -1,   136,     6,    -1,   184,
       4,    -1,   228,     4,    -1,    80,    -1,   501,    -1,   244,
     502,   439,   226,   503,   418,   428,   431,   552,    -1,    -1,
     483,   167,    -1,   483,   147,    -1,     3,    20,   378,    -1,
       3,   370,     3,    20,   378,    -1,   503,   373,     3,    20,
     378,    -1,   503,   373,     3,   370,     3,    20,   378,    -1,
     199,   238,     3,   231,     3,    -1,   504,    -1,    66,    88,
     505,     3,    -1,    66,   213,   505,     3,    -1,   101,    88,
       3,    -1,   101,    88,   149,   266,     3,    -1,   101,   213,
       3,    -1,   101,   213,   149,   266,     3,    -1,    -1,   149,
     266,    -1,   506,    -1,    66,    95,     3,    44,   526,    -1,
      66,    95,     3,    44,   526,   106,   378,    -1,    66,    95,
       3,    44,   526,    18,   184,    -1,    66,    95,     3,    44,
     526,    71,   371,   378,   372,    -1,    66,    95,     3,    44,
     526,    18,   184,    71,   371,   378,   372,    -1,   507,    -1,
     253,     3,    -1,   253,    88,     3,    -1,   508,    -1,    66,
     512,   238,   505,     3,   371,   513,   372,   509,    -1,    66,
     512,   238,   505,     3,   370,     3,   371,   513,   372,   509,
      -1,    66,   512,   238,   505,     3,   336,    87,     3,   133,
     257,   129,   371,     5,   372,   231,   371,     5,   372,    -1,
      -1,   509,    41,    20,     5,    -1,   509,    41,     5,    -1,
     509,   188,     3,   100,     3,    -1,   509,   188,     3,   234,
       3,    -1,   509,   214,    56,   254,   371,     3,   372,   215,
       5,    -1,   509,   214,    56,   195,   371,     3,   372,   371,
     510,   372,    -1,   509,   336,    56,   195,   371,     3,   372,
      -1,   511,    -1,   510,   373,   511,    -1,   214,     3,   257,
     165,   236,     4,   188,   182,     5,    -1,   214,     3,   257,
     165,   236,   175,   188,   182,     5,    -1,    66,   512,   238,
     505,     3,   371,   513,   372,   528,    -1,    66,   512,   238,
     505,     3,   528,    -1,    66,   512,   238,   505,     3,   370,
       3,   371,   513,   372,   528,    -1,    66,   512,   238,   505,
       3,   370,     3,   528,    -1,    -1,   232,    -1,   233,   232,
      -1,   514,    -1,   513,   373,   514,    -1,   192,   157,   371,
     515,   372,    -1,    64,     3,   192,   157,   371,   515,   372,
      -1,   157,   371,   434,   372,    -1,   148,   371,   434,   372,
      -1,   131,   148,   371,   434,   372,    -1,   131,   157,   371,
     434,   372,    -1,    71,   371,   378,   372,    -1,    64,     3,
      71,   371,   378,   372,    -1,   127,   157,   371,   516,   372,
     198,     3,   371,   517,   372,   518,    -1,   127,   157,   371,
     516,   372,   198,     3,   370,     3,   371,   517,   372,   518,
      -1,    64,     3,   127,   157,   371,   516,   372,   198,     3,
     371,   517,   372,   518,    -1,    64,     3,   127,   157,   371,
     516,   372,   198,     3,   370,     3,   371,   517,   372,   518,
      -1,   247,   371,   519,   372,    -1,    64,     3,   247,   371,
     519,   372,    -1,     3,    -1,   515,   373,     3,    -1,     3,
      -1,   516,   373,     3,    -1,     3,    -1,   517,   373,     3,
      -1,    -1,   518,   188,   100,    67,    -1,   518,   188,   100,
     226,   184,    -1,   518,   188,   100,   201,    -1,   518,   188,
     100,   226,   106,    -1,   518,   188,   244,    67,    -1,   518,
     188,   244,   226,   184,    -1,   518,   188,   244,   201,    -1,
     518,   188,   244,   226,   106,    -1,   518,   188,   100,   183,
      -1,   518,   188,   244,   183,    -1,   518,   174,   130,    -1,
     518,   174,   221,    -1,   518,   174,   191,    -1,   518,    90,
      -1,   518,    18,    90,    -1,   518,    90,   144,    91,    -1,
     518,    90,   144,   142,    -1,     3,    -1,   519,   373,     3,
      -1,    -1,   520,     3,   526,   521,    -1,    -1,   521,    18,
     184,    -1,   521,   184,    -1,   521,   106,     4,    -1,   521,
     106,     5,    -1,   521,   106,     7,    -1,   521,   106,     6,
      -1,   521,   106,   318,   371,   372,    -1,   521,   106,   319,
     371,   372,    -1,   521,   106,   320,   371,   372,    -1,   521,
     106,    65,    -1,   521,   106,   371,   378,   372,    -1,   521,
      41,    -1,   521,    41,   371,     5,   373,     5,   372,    -1,
     521,    41,   371,     5,   372,    -1,   521,    46,   371,     5,
     373,     5,   372,    -1,   521,    46,   371,     5,   372,    -1,
     521,    46,    -1,   521,   247,   157,    -1,   521,   247,    -1,
     521,   192,   157,    -1,   521,   157,    -1,   521,    72,     4,
      -1,   521,    71,   371,   378,   372,    -1,   521,    64,     3,
     247,    -1,   521,    64,     3,   192,   157,    -1,   521,    64,
       3,    71,   371,   378,   372,    -1,   521,    49,    45,    44,
     371,   378,   372,    50,    -1,   521,    49,    45,    44,   371,
     378,   372,    51,    -1,   521,    49,    45,    44,   371,   378,
     372,    -1,   521,    44,   371,   378,   372,    50,    -1,   521,
      44,   371,   378,   372,    51,    -1,   521,    44,   371,   378,
     372,    -1,    -1,   371,     5,   372,    -1,   371,     5,   373,
       5,   372,    -1,    -1,    57,    -1,    -1,   524,   245,    -1,
     524,   265,    -1,    -1,   525,    75,   226,     4,    -1,   525,
      76,     4,    -1,    60,   522,    -1,   230,   522,   524,    -1,
     225,   522,   524,    -1,   180,   522,   524,    -1,   153,   522,
     524,    -1,   145,   522,   524,    -1,    59,   522,   524,    -1,
     196,   522,   524,    -1,   107,   522,   524,    -1,   125,   522,
     524,    -1,   109,   522,   524,    -1,   110,    -1,   243,    -1,
     237,    -1,   108,    -1,   263,    -1,    75,   522,   525,    -1,
     256,   371,     5,   372,   525,    -1,    57,   522,    -1,   258,
     371,     5,   372,    -1,   242,    -1,    54,    -1,   179,    -1,
     173,    -1,   229,   523,   525,    -1,   235,   523,   525,    -1,
     176,   523,   525,    -1,   166,   523,   525,    -1,   116,   371,
     527,   372,   525,    -1,   226,   371,   527,   372,   525,    -1,
      55,    -1,   248,    -1,   250,    -1,   526,    34,   374,    -1,
       4,    -1,   527,   373,     4,    -1,   529,   444,   417,    -1,
      -1,   147,    -1,   207,    -1,   530,    -1,   226,   213,     3,
      -1,   226,   213,   106,    -1,   226,   531,    -1,   532,    -1,
     531,   373,   532,    -1,     8,    20,   378,    -1,     8,     9,
     378,    -1,   533,    -1,    66,   193,     3,   371,   534,   372,
      44,    53,   538,   117,    -1,    66,   193,     3,   371,   534,
     372,    53,   538,   117,    -1,    66,    10,   207,   193,     3,
     371,   534,   372,    44,    53,   538,   117,    -1,    66,    10,
     207,   193,     3,   371,   534,   372,    53,   538,   117,    -1,
      66,   132,     3,   371,   534,   372,   204,   537,    44,    53,
     538,   117,    -1,    66,   132,     3,   371,   534,   372,   204,
     537,    53,   538,   117,    -1,    66,    10,   207,   132,     3,
     371,   534,   372,   204,   537,    44,    53,   538,   117,    -1,
      66,    10,   207,   132,     3,   371,   534,   372,   204,   537,
      53,   538,   117,    -1,    -1,   535,    -1,   536,    -1,   535,
     373,   536,    -1,     3,   526,    -1,    16,     3,   526,    -1,
     186,     3,   526,    -1,   143,     3,   526,    -1,   145,    -1,
     153,    -1,   256,    -1,   235,    -1,    55,    -1,   125,    -1,
     107,    -1,    59,    -1,   110,    -1,   237,    -1,    -1,   538,
     539,    -1,   538,    53,   538,   117,    -1,   538,   149,   538,
     117,   149,    -1,   538,   261,   538,   117,   261,    -1,   538,
     159,   538,   117,   159,    -1,   538,   124,   538,   117,   124,
      -1,   538,    70,   538,   117,    70,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,
      -1,    10,    -1,    12,    -1,    16,    -1,    43,    -1,   227,
      -1,   150,    -1,   244,    -1,   100,    -1,   129,    -1,   259,
      -1,   226,    -1,   152,    -1,   257,    -1,    66,    -1,   101,
      -1,   238,    -1,   148,    -1,   239,    -1,   118,    -1,   112,
      -1,    89,    -1,    94,    -1,    61,    -1,   202,    -1,   158,
      -1,   155,    -1,    63,    -1,   185,    -1,   122,    -1,    62,
      -1,   135,    -1,   120,    -1,   186,    -1,   143,    -1,   133,
      -1,    47,    -1,   209,    -1,   200,    -1,   119,    -1,   211,
      -1,    52,    -1,   111,    -1,   208,    -1,   210,    -1,    44,
      -1,   188,    -1,   189,    -1,    56,    -1,   134,    -1,   141,
      -1,   170,    -1,   172,    -1,   156,    -1,   168,    -1,   206,
      -1,   146,    -1,   187,    -1,   130,    -1,    69,    -1,   181,
      -1,   252,    -1,   184,    -1,   106,    -1,   192,    -1,   157,
      -1,   247,    -1,    71,    -1,   127,    -1,   198,    -1,    67,
      -1,   201,    -1,   183,    -1,   145,    -1,   153,    -1,   256,
      -1,   235,    -1,    55,    -1,   125,    -1,   107,    -1,    59,
      -1,   110,    -1,   237,    -1,   225,    -1,   109,    -1,    75,
      -1,   248,    -1,    54,    -1,   246,    -1,   115,    -1,   151,
      -1,    38,    -1,    99,    -1,   266,    -1,   260,    -1,   262,
      -1,   193,    -1,   132,    -1,   204,    -1,   371,    -1,   372,
      -1,   373,    -1,   369,    -1,   370,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    17,    -1,   375,
      -1,   307,    -1,   308,    -1,   309,    -1,   310,    -1,   311,
      -1,     8,    -1,   540,    -1,   101,   193,     3,    -1,   101,
     193,   149,   266,     3,    -1,   101,   132,     3,    -1,   101,
     132,   149,   266,     3,    -1,   541,    -1,    61,     3,   371,
     372,    -1,    61,     3,   371,   542,   372,    -1,   543,    -1,
     542,   373,   543,    -1,     5,    -1,     4,    -1,     7,    -1,
     184,    -1,     6,    -1,     3,    -1,     8,    -1,   544,    -1,
      66,   210,     3,   545,   546,   188,     3,   133,   111,   208,
      53,   538,   117,    -1,    52,    -1,    37,    -1,   150,    -1,
     244,    -1,   100,    -1,   547,    -1,   101,   210,     3,    -1,
     101,   210,   149,   266,     3,    -1,    35,   210,     3,   113,
      -1,    35,   210,     3,    93,    -1,   548,    -1,    66,   356,
     505,     3,   549,    -1,    -1,   549,   550,    -1,   361,   262,
       5,    -1,   361,     5,    -1,   362,    56,     5,    -1,   362,
       5,    -1,   363,     5,    -1,   175,     5,    -1,   364,    -1,
      18,   364,    -1,   551,    -1,   101,   356,     3,    -1,   101,
     356,   149,   266,     3,    -1,    35,   356,     3,   549,    -1,
      35,   356,     3,    48,    -1,    35,   356,     3,    48,   262,
       5,    -1,    35,   356,     3,   199,   231,     3,    -1,    -1,
     203,    26,    -1,   203,   553,    -1,     3,    -1,   553,   373,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   455,   455,   456,   461,   468,   469,   470,   484,   485,
     503,   511,   519,   525,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   558,   558,   567,   567,   569,   569,
     571,   571,   576,   578,   582,   583,   584,   585,   586,   589,
     590,   593,   602,   620,   629,   649,   649,   688,   697,   704,
     708,   710,   712,   717,   722,   729,   730,   733,   733,   734,
     734,   735,   735,   743,   743,   751,   751,   762,   766,   767,
     768,   769,   770,   771,   772,   773,   777,   777,   779,   779,
     781,   781,   784,   784,   786,   786,   788,   788,   790,   790,
     792,   792,   794,   794,   797,   797,   799,   799,   801,   801,
     803,   803,   805,   805,   807,   807,   809,   809,   811,   811,
     814,   814,   816,   816,   818,   818,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     857,   858,   859,   860,   861,   862,   863,   864,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
     889,   890,   891,   892,   893,   895,   896,   898,   899,   900,
     902,   903,   904,   905,   912,   919,   926,   930,   934,   938,
     942,   946,   952,   953,   954,   957,   963,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   981,   983,   985,   987,
     991,   999,  1010,  1011,  1014,  1015,  1018,  1026,  1034,  1045,
    1055,  1056,  1069,  1085,  1086,  1087,  1088,  1091,  1098,  1106,
    1107,  1108,  1111,  1112,  1115,  1116,  1120,  1121,  1124,  1126,
    1130,  1131,  1134,  1136,  1140,  1141,  1144,  1145,  1148,  1154,
    1161,  1170,  1171,  1172,  1173,  1176,  1177,  1178,  1179,  1180,
    1183,  1184,  1187,  1188,  1191,  1192,  1193,  1194,  1195,  1196,
    1197,  1198,  1199,  1202,  1203,  1204,  1212,  1218,  1219,  1220,
    1223,  1224,  1227,  1228,  1232,  1239,  1240,  1241,  1250,  1255,
    1261,  1269,  1273,  1273,  1313,  1314,  1318,  1320,  1322,  1324,
    1326,  1330,  1331,  1332,  1335,  1336,  1339,  1340,  1343,  1344,
    1345,  1348,  1349,  1352,  1353,  1357,  1359,  1361,  1363,  1366,
    1367,  1370,  1371,  1374,  1378,  1388,  1396,  1397,  1398,  1399,
    1403,  1407,  1409,  1413,  1413,  1415,  1420,  1427,  1434,  1444,
    1451,  1458,  1466,  1476,  1484,  1494,  1502,  1511,  1520,  1530,
    1538,  1547,  1556,  1566,  1575,  1587,  1592,  1597,  1603,  1610,
    1617,  1624,  1634,  1641,  1650,  1657,  1663,  1671,  1677,  1685,
    1686,  1687,  1688,  1689,  1705,  1706,  1707,  1710,  1716,  1727,
    1733,  1740,  1746,  1762,  1769,  1778,  1785,  1791,  1802,  1805,
    1811,  1817,  1824,  1830,  1837,  1843,  1849,  1855,  1861,  1867,
    1873,  1879,  1885,  1891,  1897,  1903,  1909,  1915,  1921,  1929,
    1930,  1931,  1934,  1942,  1948,  1961,  1962,  1962,  1966,  1967,
    1970,  1971,  1972,  1976,  1977,  1977,  1981,  1989,  1999,  2000,
    2001,  2002,  2003,  2006,  2006,  2009,  2010,  2013,  2023,  2036,
    2037,  2037,  2040,  2041,  2042,  2043,  2046,  2050,  2051,  2052,
    2053,  2059,  2062,  2068,  2073,  2079,  2083,  2083,  2088,  2089,
    2091,  2092,  2096,  2097,  2101,  2102,  2103,  2106,  2107,  2108,
    2109,  2113,  2114,  2118,  2119,  2120,  2121,  2122,  2123,  2124,
    2125,  2129,  2137,  2146,  2147,  2148,  2152,  2163,  2175,  2186,
    2201,  2206,  2210,  2211,  2215,  2217,  2219,  2221,  2225,  2226,
    2232,  2236,  2238,  2240,  2242,  2244,  2249,  2253,  2254,  2258,
    2267,  2277,  2285,  2293,  2294,  2295,  2296,  2297,  2298,  2300,
    2302,  2306,  2307,  2310,  2325,  2332,  2347,  2360,  2375,  2388,
    2389,  2390,  2393,  2394,  2397,  2398,  2399,  2400,  2401,  2402,
    2403,  2404,  2405,  2407,  2409,  2411,  2413,  2415,  2419,  2420,
    2423,  2424,  2427,  2428,  2431,  2432,  2433,  2434,  2435,  2436,
    2437,  2438,  2439,  2440,  2441,  2442,  2443,  2444,  2445,  2446,
    2447,  2448,  2451,  2452,  2455,  2455,  2465,  2466,  2467,  2468,
    2469,  2470,  2471,  2472,  2473,  2474,  2475,  2476,  2483,  2484,
    2485,  2486,  2487,  2488,  2489,  2490,  2491,  2492,  2493,  2494,
    2495,  2496,  2497,  2498,  2499,  2500,  2501,  2502,  2503,  2506,
    2507,  2508,  2511,  2512,  2515,  2516,  2517,  2520,  2521,  2522,
    2526,  2527,  2528,  2529,  2530,  2531,  2532,  2533,  2534,  2535,
    2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,  2544,  2545,
    2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,
    2556,  2557,  2558,  2559,  2562,  2563,  2566,  2579,  2580,  2581,
    2585,  2588,  2589,  2590,  2591,  2591,  2593,  2594,  2602,  2606,
    2612,  2618,  2625,  2632,  2638,  2644,  2651,  2660,  2661,  2664,
    2665,  2668,  2669,  2670,  2671,  2674,  2675,  2676,  2677,  2678,
    2679,  2680,  2681,  2682,  2683,  2690,  2691,  2692,  2693,  2694,
    2695,  2696,  2697,  2700,  2701,  2702,  2702,  2702,  2703,  2703,
    2703,  2703,  2703,  2703,  2704,  2704,  2704,  2704,  2704,  2704,
    2704,  2704,  2704,  2705,  2705,  2705,  2705,  2705,  2705,  2705,
    2706,  2706,  2706,  2706,  2707,  2707,  2707,  2707,  2707,  2707,
    2707,  2707,  2707,  2707,  2707,  2707,  2708,  2708,  2708,  2708,
    2708,  2708,  2708,  2708,  2709,  2709,  2709,  2709,  2709,  2709,
    2709,  2709,  2710,  2710,  2710,  2710,  2710,  2710,  2710,  2710,
    2710,  2711,  2711,  2711,  2711,  2711,  2711,  2711,  2711,  2712,
    2712,  2712,  2713,  2713,  2713,  2713,  2713,  2713,  2713,  2713,
    2714,  2714,  2714,  2714,  2714,  2714,  2714,  2715,  2715,  2715,
    2715,  2715,  2715,  2715,  2716,  2716,  2716,  2716,  2717,  2717,
    2717,  2717,  2717,  2717,  2717,  2717,  2717,  2717,  2717,  2717,
    2718,  2718,  2718,  2718,  2718,  2719,  2726,  2730,  2736,  2742,
    2748,  2760,  2764,  2770,  2778,  2779,  2782,  2783,  2784,  2785,
    2786,  2787,  2788,  2795,  2799,  2807,  2808,  2811,  2812,  2813,
    2816,  2820,  2826,  2835,  2843,  2854,  2858,  2867,  2868,  2872,
    2873,  2874,  2875,  2876,  2877,  2878,  2879,  2882,  2886,  2892,
    2902,  2909,  2916,  2924,  2934,  2935,  2936,  2939,  2940
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "REGEXP", "LIKE",
  "IS", "IN", "'!'", "NOT", "BETWEEN", "COMPARISON", "'|'", "'&'", "SHIFT",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "JSON_ARROW_TEXT",
  "JSON_ARROW", "UMINUS", "'['", "ALTER", "ADD", "AFTER", "ALL", "ANALYZE",
  "ANY", "AUTO_INCREMENT", "ASC", "AND", "AS", "ALWAYS", "IDENTITY",
  "CONTINUE", "RESTART", "GENERATED", "STORED", "VIRTUAL", "BEFORE",
  "BEGINWORK", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
  "CALL", "CLOSE", "CURSOR", "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE",
  "CASCADE", "CHANGE", "CROSS", "CASE", "CHECK", "COMMENT", "CURRENT_DATE",
  "CURRENT_TIME", "CHAR", "COLLATE", "COLUMN", "CONCURRENTLY", "COPY",
  "CSV", "CONFLICT", "EXCLUDED", "NOTHING", "AGAINST", "MATERIALIZED",
  "REFRESH", "OF", "DATABASE", "DECLARE", "DEFERRABLE", "DEFERRED",
  "DELIMITER", "DISABLE", "DO", "DOMAIN", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "EACH", "ELSEIF", "ENABLE", "ESCAPED", "EXCEPT",
  "ENUM", "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN", "FETCH", "FIRST",
  "FOREACH", "FLOAT", "FORCE", "FOREIGN", "FORMAT", "FROM", "FULL",
  "FULLTEXT", "FUNCTION", "FOR", "GROUP", "HANDLER", "HEADER",
  "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND",
  "HAVING", "IMMEDIATE", "INOUT", "INITIALLY", "INTEGER", "INNER",
  "IGNORE", "INDEX", "IF", "INSERT", "INTERSECT", "INTO", "INT",
  "INTERVAL", "ITERATE", "JOIN", "KEY", "LEAVE", "LOOP", "LATERAL",
  "LISTEN", "NOTIFY", "UNLISTEN", "SELF", "LESS", "LONGTEXT",
  "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED", "OFFSET",
  "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MINUS", "MODIFY",
  "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION", "NULLX",
  "OPEN", "OUT", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL",
  "PRIMARY", "PROCEDURE", "QUICK", "RANGE", "REAL", "RECLAIM",
  "REFERENCES", "RENAME", "RESIGNAL", "RESTRICT", "RETURN", "RETURNING",
  "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "ROW", "SIGNAL", "TRIGGER",
  "UNTIL", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS", "SHARE",
  "SKIP", "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE",
  "STDIN", "STDOUT", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "QUOTE",
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT",
  "THAN", "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB",
  "TIME", "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "ARRAY", "JSON",
  "VIEW", "USING", "USE", "HASH", "VALIDATE", "VARCHAR", "VALUES",
  "VARBINARY", "WHERE", "WHEN", "WHILE", "WITH", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FDATEDIFF", "FYEAR", "FMONTH", "FDAY", "FHOUR", "FMINUTE", "FSECOND",
  "FNOW", "FLEFT", "FRIGHT", "FLPAD", "FRPAD", "FREVERSE", "FREPEAT",
  "FINSTR", "FLOCATE", "FABS", "FCEIL", "FFLOOR", "FROUND", "FPOWER",
  "FSQRT", "FMOD", "FRAND", "FLOG", "FLOG10", "FSIGN", "FPI", "FCAST",
  "FCONVERT", "FNULLIF", "FIFNULL", "FIF", "UNKNOWN", "FGROUP_CONCAT",
  "SEPARATOR", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER",
  "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
  "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "FLAST_INSERT_ID", "FSCOPE_IDENTITY", "FAT_IDENTITY",
  "FAT_LAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "FROW_NUMBER",
  "FRANK", "FDENSE_RANK", "FLEAD", "FLAG", "FNTILE", "FPERCENT_RANK",
  "FCUME_DIST", "OVER", "PARTITION", "FJSON_EXTRACT", "FJSON_UNQUOTE",
  "FJSON_TYPE", "FJSON_LENGTH", "FJSON_DEPTH", "FJSON_VALID", "FJSON_KEYS",
  "FJSON_PRETTY", "FJSON_QUOTE", "FJSON_SET", "FJSON_INSERT",
  "FJSON_REPLACE", "FJSON_REMOVE", "FJSON_CONTAINS", "FJSON_CONTAINS_PATH",
  "FJSON_SEARCH", "FJSON_OBJECT", "FJSON_ARRAY", "FJSON_ARRAYAGG",
  "SEQUENCE", "FNEXTVAL", "FCURRVAL", "FSETVAL", "FLASTVAL", "START",
  "INCREMENT", "MINVALUE", "CYCLE", "FARRAY_LENGTH", "FUNNEST",
  "FEVO_NOTIFY", "FPG_LISTENING_CHANNELS", "';'", "'.'", "'('", "')'",
  "','", "']'", "'='", "$accept", "stmt_list", "expr", "@1", "@2", "@3",
  "@4", "val_list", "array_val_list", "@5", "any_array_arg",
  "opt_val_list", "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13",
  "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21", "@22", "@23",
  "@24", "@25", "@26", "@27", "@28", "@29", "@30", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_window_partition", "window_partition_list",
  "opt_window_orderby", "window_orderby_list", "opt_orderby",
  "orderby_list", "orderby_item", "opt_limit", "opt_for_update",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "lateral_subquery", "@31", "opt_as", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "create_index_stmt", "index_col_list", "index_expr",
  "drop_index_stmt", "truncate_table_stmt", "truncate_extra_tables",
  "opt_truncate_options", "listen_stmt", "unlisten_stmt", "notify_stmt",
  "reclaim_table_stmt", "analyze_table_stmt", "alter_table_stmt",
  "opt_col_position", "insert_stmt", "opt_ondupupdate", "@32",
  "opt_on_conflict", "opt_conflict_target", "conflict_action", "@33",
  "upsert_asgn_list", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@34", "insert_vals",
  "insert_asgn_list", "replace_stmt", "copy_stmt", "@35", "opt_copy_cols",
  "copy_col_list", "copy_direction", "copy_target", "opt_copy_options",
  "copy_option_list", "copy_option", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
  "opt_table_options", "shard_range_list", "shard_range_def",
  "opt_temporary", "create_col_list", "create_definition",
  "pk_column_list", "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@36", "column_atts", "opt_length", "opt_binary",
  "opt_uz", "opt_csc", "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr",
  "create_procedure_stmt", "opt_proc_params", "proc_param_list",
  "proc_param", "proc_return_type", "proc_body_skip", "proc_body_any",
  "drop_procedure_stmt", "call_stmt", "call_arg_list", "call_arg",
  "create_trigger_stmt", "trigger_timing", "trigger_event",
  "drop_trigger_stmt", "create_sequence_stmt", "seq_options", "seq_option",
  "drop_sequence_stmt", "opt_returning", "returning_col_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    33,   272,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,    91,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,    59,
      46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   376,   377,   377,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   379,   378,   380,   378,   381,   378,
     382,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   383,   383,   384,   384,   385,   378,   378,   378,   386,
     378,   378,   378,   378,   378,   387,   387,   388,   378,   389,
     378,   390,   378,   391,   378,   392,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   393,   378,   394,   378,
     395,   378,   396,   378,   397,   378,   398,   378,   399,   378,
     400,   378,   401,   378,   402,   378,   403,   378,   404,   378,
     405,   378,   406,   378,   407,   378,   408,   378,   409,   378,
     410,   378,   411,   378,   412,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   413,   413,   413,   378,   378,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   378,   378,   378,   378,
     415,   415,   378,   378,   378,   378,   378,   378,   378,   416,
     417,   417,   417,   418,   418,   419,   419,   420,   420,   421,
     421,   421,   422,   422,   423,   423,   424,   424,   425,   425,
     426,   426,   427,   427,   428,   428,   429,   429,   430,   430,
     430,   431,   431,   431,   431,   432,   432,   432,   432,   432,
     433,   433,   434,   434,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   436,   436,   436,   437,   438,   438,   438,
     439,   439,   440,   440,   441,   441,   441,   441,   441,   441,
     441,   441,   443,   442,   444,   444,   445,   445,   445,   445,
     445,   446,   446,   446,   447,   447,   448,   448,   449,   449,
     449,   450,   450,   451,   451,   452,   452,   452,   452,   453,
     453,   454,   454,   455,   416,   456,   457,   457,   457,   457,
     456,   458,   458,   459,   459,   456,   416,   460,   460,   416,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   462,   462,   462,   463,   463,
     463,   463,   416,   464,   416,   465,   465,   466,   466,   467,
     467,   467,   467,   467,   416,   416,   416,   468,   468,   469,
     469,   470,   470,   416,   471,   416,   472,   472,   416,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   474,
     474,   474,   416,   475,   475,   476,   477,   476,   478,   478,
     479,   479,   479,   480,   481,   480,   482,   482,   483,   483,
     483,   483,   483,   484,   484,   485,   485,   486,   486,   487,
     488,   487,   489,   489,   489,   489,   475,   490,   490,   490,
     490,   416,   491,   491,   491,   416,   493,   492,   494,   494,
     495,   495,   496,   496,   497,   497,   497,   498,   498,   498,
     498,   499,   499,   500,   500,   500,   500,   500,   500,   500,
     500,   416,   501,   502,   502,   502,   503,   503,   503,   503,
     416,   416,   504,   504,   416,   416,   416,   416,   505,   505,
     416,   506,   506,   506,   506,   506,   416,   507,   507,   416,
     508,   508,   508,   509,   509,   509,   509,   509,   509,   509,
     509,   510,   510,   511,   511,   508,   508,   508,   508,   512,
     512,   512,   513,   513,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   515,   515,
     516,   516,   517,   517,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   519,   519,   520,   514,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   522,
     522,   522,   523,   523,   524,   524,   524,   525,   525,   525,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   527,   527,   528,   529,   529,   529,
     416,   530,   530,   530,   531,   531,   532,   532,   416,   533,
     533,   533,   533,   533,   533,   533,   533,   534,   534,   535,
     535,   536,   536,   536,   536,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   538,   538,   538,   538,   538,
     538,   538,   538,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   416,   540,   540,   540,
     540,   416,   541,   541,   542,   542,   543,   543,   543,   543,
     543,   543,   543,   416,   544,   545,   545,   546,   546,   546,
     416,   547,   547,   416,   416,   416,   548,   549,   549,   550,
     550,   550,   550,   550,   550,   550,   550,   416,   551,   551,
     416,   416,   416,   416,   552,   552,   552,   553,   553
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     3,     8,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     0,     6,     0,     7,     0,     7,
       0,     7,     6,     6,     3,     4,     3,     4,     3,     5,
       6,     1,     3,     1,     3,     0,     5,     3,     4,     1,
       4,     6,     4,     6,     3,     0,     1,     0,     6,     0,
       7,     0,     6,     0,     7,     0,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     0,     9,     0,     9,
       0,     9,     0,    10,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    12,     0,    14,
       0,    14,     0,    10,     0,    12,     0,    14,     0,    14,
       0,    10,     0,     9,     0,     9,     8,     6,     6,     8,
       4,     7,     6,     4,     4,     4,     6,     8,     6,     6,
       6,     8,     8,     4,     6,     6,     6,     4,     4,     4,
       6,     4,     6,     4,     6,     3,     4,     4,     4,     3,
       3,     6,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     4,     4,     4,     4,     4,     4,     8,     8,     8,
       6,     6,     8,     8,     6,    10,     4,     6,     8,     4,
       4,     4,     6,     8,     3,     6,     6,     6,     6,     8,
       3,     8,    10,     3,     3,     3,     3,     3,     1,     1,
       4,     6,     1,     1,     1,     6,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     6,     3,     5,
       4,     5,     3,     4,     3,     4,     1,     1,     1,     1,
       3,    12,    12,     0,     2,     0,     4,     2,     4,     0,
       1,     1,     0,     2,     0,     2,     0,     3,     1,     3,
       0,     3,     2,     4,     0,     3,     1,     3,     2,     4,
       2,     0,     2,     4,     4,     0,     2,     2,     4,     4,
       0,     2,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     1,     2,     2,     1,     0,
       1,     3,     1,     1,     3,     5,     3,     3,     4,     6,
       9,     3,     0,     5,     1,     0,     5,     3,     5,     6,
       5,     0,     1,     1,     0,     1,     1,     1,     2,     2,
       0,     0,     1,     2,     4,     6,     6,     6,     0,     2,
       0,     1,     3,     3,     1,     8,     2,     2,     2,     0,
       6,     2,     4,     0,     2,     7,     1,     3,     5,     1,
       8,     9,    10,     9,    11,    10,    12,    11,    13,     9,
      11,    10,    12,    11,    12,     1,     3,     1,     4,     4,
       4,     6,     1,     3,     2,     3,     5,     1,     3,     0,
       2,     2,     3,     3,     1,     1,     1,     2,     3,     2,
       2,     2,     4,     1,     3,     1,     3,     5,     1,    10,
      10,    17,    12,    19,    11,     6,     8,     6,     6,     6,
       9,     6,     5,     8,     7,     9,     8,    10,     9,     0,
       1,     2,     1,    10,     6,     0,     0,     5,     0,     4,
       0,     3,     4,     2,     0,     5,     3,     5,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     1,     3,     3,
       0,     6,     1,     1,     3,     3,     7,     3,     3,     5,
       5,     1,     8,     7,     7,     1,     0,     7,     0,     3,
       1,     3,     1,     1,     1,     1,     1,     0,     1,     4,
       3,     1,     3,     2,     2,     2,     1,     2,     2,     2,
       1,     1,     9,     0,     2,     2,     3,     5,     5,     7,
       5,     1,     4,     4,     3,     5,     3,     5,     0,     2,
       1,     5,     7,     7,     9,    11,     1,     2,     3,     1,
       9,    11,    18,     0,     4,     3,     5,     5,     9,    10,
       7,     1,     3,     9,     9,     9,     6,    11,     8,     0,
       1,     2,     1,     3,     5,     7,     4,     4,     5,     5,
       4,     6,    11,    13,    13,    15,     4,     6,     1,     3,
       1,     3,     1,     3,     0,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     4,     3,     3,     3,     2,     3,
       4,     4,     1,     3,     0,     4,     0,     3,     2,     3,
       3,     3,     3,     5,     5,     5,     3,     5,     2,     7,
       5,     7,     5,     2,     3,     2,     3,     2,     3,     5,
       4,     5,     7,     8,     8,     7,     6,     6,     5,     0,
       3,     5,     0,     1,     0,     2,     2,     0,     4,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     3,     5,     2,     4,
       1,     1,     1,     1,     3,     3,     3,     3,     5,     5,
       1,     1,     1,     3,     1,     3,     3,     0,     1,     1,
       1,     3,     3,     2,     1,     3,     3,     3,     1,    10,
       9,    12,    11,    12,    11,    14,    13,     0,     1,     1,
       3,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     4,     5,     5,
       5,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     3,
       5,     1,     4,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,    13,     1,     1,     1,     1,     1,
       1,     3,     5,     4,     4,     1,     5,     0,     2,     3,
       2,     3,     2,     2,     2,     1,     2,     1,     3,     5,
       4,     4,     6,     6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   549,     0,   349,     0,   448,     0,
       0,     0,     0,     0,   448,     0,   284,     0,   448,     0,
       0,     0,   239,   344,   356,   359,   382,   389,   394,   395,
     396,   403,   405,   408,   432,   471,   475,   501,   511,   520,
     526,   529,   680,   688,   846,   851,   863,   870,   875,   887,
       0,     0,     0,     0,     0,     0,   518,     0,     0,     0,
       0,     0,     0,   518,   550,     0,     0,   518,     0,   476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   454,
     397,   401,   399,   400,     0,     0,   454,     0,     0,   683,
     684,     0,     0,     0,     0,   527,     0,     1,     2,   384,
       0,     0,   877,   406,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   551,     0,     0,
     518,   478,   353,     0,   348,   346,   347,     0,   514,     0,
     849,     0,   383,   847,     0,   871,     0,   516,     0,   357,
       0,   888,     0,   450,   451,   452,   453,   449,     0,   398,
       0,   404,     0,     0,     0,     0,   681,   682,     0,     4,
       9,    10,    12,    11,     8,     0,     0,     0,   295,   285,
     236,     0,   237,   238,     0,   286,   287,   288,     0,    13,
     290,   292,   291,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     208,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     299,   240,   293,   385,   452,   449,   299,     0,     0,     0,
       0,   300,   302,   315,   303,   315,   528,     3,     0,     0,
     390,   391,   874,   873,     0,     0,     0,     0,     0,     0,
       0,     0,   891,     0,   890,     0,   861,   857,   856,   860,
     858,   862,   859,   852,     0,   854,     0,     0,   519,   512,
       0,     0,   697,     0,     0,     0,     0,   697,   866,   865,
       0,   513,     0,     0,     0,   877,     0,     0,     0,     0,
     351,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   455,   402,     0,   455,   687,   686,   685,     0,
      65,     0,    32,    31,    20,     0,     0,     0,     0,     0,
      55,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   296,
       0,     0,     0,     0,     0,   338,   312,     0,     0,     0,
       0,     0,   323,   322,   326,   330,   327,     0,     0,   324,
     314,     0,     0,   393,   392,     0,     0,     0,     0,     0,
     422,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   885,   878,   407,
     853,     0,     0,     0,   661,   670,   629,   629,   629,   629,
     629,   654,   629,   651,     0,   629,   629,   629,   632,   663,
     632,   662,   629,   629,   629,     0,   632,   629,   632,   653,
     660,   652,   671,   672,     0,     0,   655,   521,     0,     0,
       0,     0,     0,     0,   698,   699,     0,     0,     0,     0,
       0,   869,   867,   868,     0,     0,     0,     0,     0,   876,
     677,   480,     0,   482,   483,     0,   354,     0,   264,     0,
     243,   353,   515,   850,   848,   872,   517,   358,   889,     0,
       0,     0,   510,     0,     0,     5,    51,    66,     0,    48,
       0,     0,   228,     0,     0,     6,     0,    57,     0,     0,
       0,   214,   212,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,     0,   159,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   203,   204,   205,   206,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   194,     0,     0,     0,    64,    21,    23,    24,    22,
     234,   232,    46,     0,    44,   200,    67,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    33,    25,    26,    28,
      14,    15,    16,    17,    18,    19,    27,    30,    29,     0,
     297,   243,     0,   294,   387,   386,   299,     0,     0,     0,
     304,     0,     0,   343,   311,     0,   243,   301,   324,   324,
       0,   317,     0,   325,     0,   307,   306,     0,     0,     0,
       0,   418,   415,   421,   417,   596,     0,     0,     0,     0,
     419,   892,   893,   886,   884,   880,     0,   882,     0,   883,
     855,   697,   697,     0,   658,   634,   640,   637,   634,   634,
       0,   634,   634,   634,   633,   637,   637,   634,   634,   634,
       0,   637,   634,   637,     0,     0,     0,     0,     0,     0,
       0,   701,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   678,   679,
       0,     0,   594,   546,   315,   479,     0,   484,   485,   486,
     487,   244,     0,   271,   243,   350,   352,     0,   435,   457,
       0,     0,   434,   435,     0,   435,     0,    77,     0,   226,
       0,     0,     0,     0,    53,     0,     0,     0,     0,   130,
       0,     0,     0,     0,     0,   162,   163,   164,   165,   166,
     167,     0,     0,     0,     0,   143,     0,     0,     0,   147,
     148,   149,   151,     0,     0,   153,     0,   156,   157,   158,
       0,     0,     0,     0,     0,     0,    84,    78,    79,    80,
      81,    82,    83,   133,   134,   135,     0,     0,     0,   210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
       0,     0,     0,     0,     0,     0,     0,     0,   186,     0,
     189,   190,   191,     0,    60,     0,    62,     0,    47,    45,
       0,     0,   235,   233,    69,     0,     0,    40,    36,    38,
       0,    58,   245,     0,     0,   338,   340,   340,   340,     0,
     308,     0,     0,     0,   264,   328,   329,     0,     0,   331,
       0,     0,     0,     0,     0,   596,   596,     0,   429,   596,
     424,     0,     0,   879,   881,     0,     0,     0,   646,   656,
     648,   650,   674,     0,   649,   645,   644,   667,   666,   643,
     647,   642,     0,   664,   641,   665,     0,     0,   523,   673,
       0,   522,     0,   702,   704,   703,     0,   700,     0,   375,
       0,     0,     0,     0,     0,   377,     0,     0,     0,     0,
       0,   715,     0,     0,     0,     0,     0,     0,     0,   677,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   552,
       0,     0,   481,   500,     0,     0,   496,     0,     0,     0,
       0,   477,   488,   491,     0,     0,   894,   355,     0,     0,
       0,   466,   456,     0,     0,   435,   473,   435,   474,    52,
     230,     0,   229,     0,     0,     0,    56,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    88,    90,     0,     0,     0,     0,     0,
     122,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    59,     0,     0,     0,     0,     0,     0,   254,
     243,   388,   305,     0,     0,     0,     0,   313,     0,   506,
       0,     0,   271,   320,   318,     0,     0,   316,   332,     0,
       0,     0,     0,     0,   429,   429,   596,     0,     0,   608,
       0,   613,     0,     0,     0,     0,     0,   430,   617,   598,
       0,   615,   426,   429,   416,   423,     0,     0,   630,     0,
     635,   636,     0,     0,   637,     0,   637,   637,   659,     0,
       0,     0,   709,   712,   711,   713,   710,   705,   706,   708,
     714,   707,     0,     0,     0,     0,     0,     0,   360,     0,
       0,     0,     0,     0,     0,   715,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   594,   548,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   533,   594,     0,   676,
     495,   493,   494,   497,   498,   499,     0,     0,     0,   249,
     249,   265,   266,   272,     0,   345,   468,   467,     0,     0,
     458,   463,   462,     0,   460,   438,   472,   227,   231,     0,
      54,     0,   128,   127,     0,   132,     0,     0,   215,   216,
     161,   139,   140,     0,     0,   144,   145,   146,   150,   152,
     154,   195,   196,   197,   198,     0,    85,    94,    96,    92,
      98,   100,   102,   136,     0,     0,   138,   211,   256,   256,
     256,   104,     0,     0,   112,     0,     0,   120,   256,   256,
     168,     0,     0,     0,   180,   181,     0,     0,   184,     0,
     187,     0,   192,     0,    61,    63,    68,    72,     0,     0,
      50,     0,     0,    42,     0,    43,    35,     0,     0,   264,
     245,   339,     0,     0,     0,   309,     0,     0,     0,   894,
     333,     0,   319,     0,     0,     0,   592,     0,   420,   428,
     429,   597,   431,     0,     0,     0,     0,     0,     0,   618,
     599,   600,   602,   601,   606,     0,     0,     0,     0,   616,
     614,   425,     0,     0,   715,     0,     0,   639,   668,   675,
     669,   657,     0,   524,   361,     0,   715,     0,     0,     0,
       0,     0,   376,     0,   369,     0,     0,     0,     0,   723,
     724,   725,   727,   726,   845,   730,   731,   732,   838,   729,
     728,   833,   834,   835,   836,   837,   820,   733,   774,   765,
     770,   715,   816,   806,   777,   809,   752,   759,   756,   743,
     799,   788,   715,   796,   814,   750,   751,   821,   737,   744,
     792,   808,   813,   810,   771,   749,   818,   690,   748,   768,
     761,   758,   715,   807,   797,   738,   787,   826,   764,   778,
     760,   779,   763,   802,   785,   746,   715,   735,   819,   741,
     803,   755,   782,   794,   754,   715,   783,   780,   781,   789,
     801,   791,   757,   762,   786,   775,   776,   793,   825,   798,
     767,   800,   753,   827,   784,   772,   766,   773,   769,   812,
     740,   734,   805,   811,   745,   747,   736,   817,   795,   815,
     790,   804,   742,   739,   823,   715,   824,   822,   840,   841,
     842,   843,   844,   831,   832,   828,   829,   830,   839,   716,
       0,     0,   363,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   282,     0,
       0,     0,     0,   530,   545,   553,   596,     0,   490,   492,
     250,   251,     0,   268,   270,     0,     0,     0,   897,   895,
     896,   436,     0,   459,     0,     0,     0,   894,     0,     0,
       0,   131,   218,   219,   220,   221,   224,   223,   225,   217,
     222,     0,     0,     0,   256,   256,   256,   256,   256,   256,
       0,     0,     0,   260,   260,   260,   256,     0,     0,     0,
     256,     0,     0,     0,   256,   260,   260,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    74,    41,    37,    39,
     249,   252,   255,   271,   254,   341,     0,     0,     0,     0,
     507,   508,     0,   502,     0,   409,   570,     0,   568,     0,
     410,     0,   427,     0,     0,     0,     0,     0,     0,   620,
       0,     0,     0,     0,     0,     0,   715,     0,   631,   638,
       0,   715,     0,   365,   378,   379,   380,     0,     0,     0,
       0,   362,   689,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   371,     0,     0,     0,     0,   533,     0,     0,
       0,     0,   560,     0,     0,     0,   557,     0,   556,     0,
     566,     0,     0,     0,     0,   595,   489,   249,   267,   274,
     273,     0,     0,   470,   469,   465,   464,     0,   440,   433,
       7,   129,   126,   141,   142,   199,   260,   260,   260,   260,
     260,   260,   201,     0,   137,     0,     0,     0,     0,     0,
     260,   106,     0,     0,   260,   114,     0,     0,   260,     0,
       0,   177,   178,   179,   182,   183,     0,   188,   193,   247,
       0,     0,   246,   275,   264,   337,     0,   336,   335,     0,
       0,   334,     0,     0,     0,   414,     0,   593,   610,     0,
     628,   612,     0,     0,     0,   621,   619,   603,   604,   605,
     607,     0,   715,     0,   692,   525,     0,   694,     0,   373,
     370,     0,   717,     0,     0,     0,     0,     0,   715,   367,
       0,     0,     0,   364,     0,   531,   547,     0,     0,     0,
       0,     0,   558,   559,   283,   554,   535,     0,     0,     0,
       0,   269,   898,     0,   437,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,   257,     0,    87,    89,
      91,     0,   256,     0,     0,     0,   256,     0,     0,     0,
     123,   125,     0,   253,   249,     0,   280,   271,   342,   310,
     509,   412,     0,   571,   569,     0,   626,   627,     0,     0,
       0,   715,     0,   691,   693,   381,   366,   722,   721,   718,
     720,   719,     0,   374,   372,     0,     0,   561,     0,     0,
     567,     0,   534,     0,     0,     0,     0,     0,     0,     0,
     461,     0,     0,   439,    95,    97,    93,    99,   101,   103,
     202,     0,   249,   261,   105,   260,   108,   110,   113,   260,
     116,   118,   121,   185,   248,   277,   276,     0,   241,   242,
       0,   609,   611,   625,   622,     0,   696,   864,   368,     0,
       0,   555,     0,   536,   537,     0,     0,     0,   446,     0,
     441,     0,   443,   444,   259,   262,     0,     0,   256,   256,
       0,   256,   256,     0,     0,   281,     0,   623,   624,   695,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
     249,   107,   260,   260,   115,   260,   260,   279,   278,   572,
       0,     0,     0,     0,     0,     0,     0,   540,   447,     0,
     263,     0,     0,     0,     0,   574,     0,     0,     0,     0,
       0,   574,     0,     0,   445,   109,   111,   117,   119,   411,
     573,     0,     0,     0,     0,   562,     0,     0,   541,   538,
       0,   588,     0,     0,   532,     0,   574,   574,     0,     0,
     539,     0,   589,   413,     0,   585,   587,   586,     0,     0,
       0,   564,   563,     0,   542,   590,   591,   575,   583,   577,
       0,   579,   584,   581,     0,   574,     0,   578,   576,   582,
     580,   565,     0,     0,     0,     0,     0,     0,     0,   543,
     544
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   636,  1020,  1223,  1225,  1221,   637,   915,   648,
    1224,   638,  1010,  1217,  1011,  1218,   649,  1408,  1409,  1410,
    1716,  1714,  1715,  1717,  1718,  1719,  1726,  1982,  2098,  2099,
    1730,  1986,  2101,  2102,  1734,  1418,  1419,   655,  1163,   377,
      21,    22,   618,  1229,  1751,  1683,  1892,  1449,  1723,  1976,
    1867,  2053,   893,  1351,  1352,  1136,  1996,  2068,  1669,    91,
     281,   282,   499,   290,   291,   292,   293,   791,   521,   294,
     518,   804,   519,   800,  1247,  1248,   790,  1234,  1756,   295,
      23,    70,   127,   350,    24,    25,  1094,  1095,    26,    27,
     785,    99,    28,    29,    30,    31,    32,    33,  1272,    34,
    1141,  1842,  1697,  1967,  2043,  2119,  1964,    79,   148,   631,
     900,  1145,  1695,  1363,   898,    35,    36,   121,   348,   612,
     615,   890,  1131,  1132,  1133,    37,    94,   796,    38,   107,
      39,    40,    41,  1673,  2167,  2168,    68,  1118,  1119,  1769,
    1767,  2130,  2159,  1467,  1120,  1048,   834,   845,  1058,  1059,
     587,  1063,   883,   884,    42,    89,    90,    43,   593,   594,
     595,  1302,  1316,  1649,    44,    45,   324,   325,    46,   340,
     604,    47,    48,   314,   548,    49,  1355,  1690
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1978
static const yytype_int16 yypact[] =
{
   11655,   -70,   -90,   172,    35,   179, -1978,   700, -1978,   214,
     228,   710,   145,   210, -1978,    22, -1978,   294,    52,   175,
     542,   194, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
     567,   611,   659,   725,   297,   370,   583,   748,   612,   759,
     102,   761,   763,   583, -1978,   540,   638,   583,   515, -1978,
     535,    69,    78,   780,   173,   205,   345,   346,   433,   607,
     648,   441, -1978, -1978,   813,   815,   607,   652,   181,   452,
   -1978,  6391,   817,   559,    53, -1978,   825, -1978, 11655,   410,
     547,   637,    66,   469,    36,     2,   578,   846,   810,   863,
     507,   703,   458,   617,   527,   182,   893, -1978,   126,   904,
     583,   538,   541,   912, -1978, -1978, -1978,  -104, -1978,   651,
   -1978,   689, -1978, -1978,   709, -1978,   718, -1978,   722, -1978,
     727, -1978,   732, -1978, -1978, -1978, -1978, -1978,   941, -1978,
     967, -1978,   769,  1001, 10081, 10081, -1978, -1978,  1004,   374,
   -1978, -1978, -1978, -1978,  1019, 10081, 10081, 10081, -1978, -1978,
   -1978,  7498, -1978, -1978,   666, -1978, -1978, -1978,   672, -1978,
   -1978, -1978, -1978, -1978,  1018,   690,   692,   698,   708,   724,
     726,   734,   773,   782,   789,   797,   823,   831,   847,   849,
     867,   871,   877,   885,   932,   948,   950,   956,   962,   968,
     970,   987,   988,   989,   990,   991,   993,   999,  1000,  1002,
    1003,  1006,  1007,  1008,  1009,  1010,  1011,  1013,  1014,  1017,
    1021,  1022,  1024,  1025,  1031,  1033,  1034,  1039,  1041,  1051,
   -1978, -1978,  1052,  1059,  1061,  1065,  1071,  1072,  1073,  1079,
    1081,  1082,  1084,  1085,  1086,  1087,  1091,  1092,  1095,  1096,
    1098,  1099,  1100,  1101,  1107,  1108,  1110,  1114,  1115,  1118,
    1122,  1123,  1124,  1126,  1127,  1128,  1129,  1130,  1132, 10081,
   12079,   -94, -1978,   777,    56,    63,    45,  1133,  1134,    46,
    -174,  1166, -1978,  1077, -1978,  1077, -1978, -1978,  1138,  1323,
   -1978, -1978, -1978, -1978,   644,   571,  1311,   477,  1442,   635,
     646,  1443,  1246,  1278,   110,  1508, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978,   405, -1978,  1509,  1510, -1978, -1978,
   11767,  1326,    54,  1513,  1329,  1252,  1516,    54, -1978, -1978,
     365, -1978,  1337,   463,  1260, -1978,  1531,  1532,   312,  1518,
   -1978,   195,  -173,    53,  1539,  1544,  1546,  1549,  1556,  1557,
    1558,  1562,   -88, -1978,  1565,   116, 12213, 12213, -1978,  1572,
   10081, 10081,  1202,  1202,  1547, 10081,  2079,   444,  1579,  1580,
    1210, -1978, 10081,  6760, 10081, 10081, 10081, 10081, 10081, 10081,
   10081, 10081, 10081,  1213, 10081, 10081, 10081, 10081, 10081, 10081,
   10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081,  1214,
   10081, 10081, 10081,  1215, 10081, 10081, 10081, 10081, 10081, 10081,
    7867, 10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081,
   10081,  1216,  1218,  1222,  1225,  1227, 10081, 10081,  1228,  1243,
    1244, 10081, 10081,  1593,  1245,  1248, 10081, 10081, 10081, 10081,
   10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081,
   10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081,  1254, 10081,
   10081, 10081,  1256,  2446, -1978, 10081, 10081, 10081, 10081, 10081,
     254,  1247,   757, 10081,  7129, 10081, 10081, 10081, 10081, 10081,
   10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081,  1621, -1978,
      53,  1641, 10081,  1646,  1647,   397, -1978, 10081,  1279,   462,
    1649,    53, -1978, -1978, -1978,   310, -1978,    53,  1497,  1467,
   -1978,  1652,  1654, -1978, -1978,  1658,  1659,  1660,  1661,  1663,
   -1978,  1667,  1668,  1669, 11767,  1671,  1444,  1673,  1676,  1681,
    1680,  1683,  1331,  1706,    19,   186,  1720, -1978, -1978, -1978,
   -1978,   105,  1369,  1387, -1978, -1978,  1388,  1388,  1388,  1388,
    1388, -1978,  1388, -1978,  1389,  1388,  1388,  1388,  1704, -1978,
    1704, -1978,  1388,  1388,  1388,  1391,  1704,  1388,  1704, -1978,
   -1978, -1978, -1978, -1978,  1392,  1393, -1978,   636,  1785, 11767,
    1794,  1795,  1796,  1429,  1430, -1978,   -83,  1799,  1801,  1617,
    1434, -1978, -1978, -1978,  1619,  1805,  1622,  1551,  1816,   110,
     286, -1978,   465, -1978, -1978,    24, -1978, 10081,  1632,    53,
    -199,   541, -1978, -1978, -1978, -1978, -1978, -1978, -1978,  1824,
    1826,   257, -1978,  1824,   482, -1978,  2401, -1978,  1458, 12213,
   11598,   525, -1978, 10081, 10081, -1978,  1459, -1978, 10081,  1610,
     605, -1978, -1978, -1978,  2782,  8236,  2737,  3073,  3409,  3118,
    3454,  3790,  4126,  4462,  4798, -1978,  3745,  4081,  4417,  4753,
    5134,  5089,  5425,  5761,  5470,  5806,  8440,   665,  6097,  8621,
    6142, -1978,  8694,  8722,  8795, -1978, 12134,  6558,  6607,  6776,
    6825,   574,  1466,  8821,  8990,  9085,  9110,  9150,  9176,  9359,
    9408,  6850,  6875,  6927, -1978, -1978, -1978, -1978, -1978,  9440,
    6963,  1504,  1505,  1506,   779,   938,  1470,  1512,  1514,  7161,
    9465,  9531,  9556,  9728,  9777,  9820,  9845,  9895,  7206,  7231,
    7256,  7296,  7330,  7517,  7571,  7596,   995,  9920, 10097, 10146,
    7621, -1978,  1062, 10175,  7665, -1978, -1978,  8083,  1111,  6482,
    8744,  8744, -1978,    31, -1978, -1978,  1616, 10081, 10081,  1473,
   10081, 12161,  1474,  1477,  1479, 10081,  1692,  1611,  1862,   905,
     892,   892,   750,   750,   750,   750,   790,  1547,  1547,    72,
   -1978,  -199,  1724, -1978, -1978,  1481,   206,  1699,  1700,  1701,
   -1978,  1610, 10200, -1978, -1978,    11,  -135,  1166,  1467,  1467,
    1703,  1677,    53, -1978,  1710, -1978, -1978,   453, 11767, 11767,
    1865, -1978, -1978, -1978, -1978,  1838, 11767,  1870,  1645,  1650,
   -1978, -1978, -1978, -1978, -1978, -1978,  1875, -1978,  1877, -1978,
   -1978,    54,    54,  1879, -1978, -1978, -1978, -1978, -1978, -1978,
    1894, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
    1894, -1978, -1978, -1978,  1895,  1896,  1715,  1529,  1533, 10081,
    1534,  1838, 11767, 11767, 11767,  1702,    54,  1656,   130,   200,
    1725,  1908,   671,  1909,   201,  1913,  1918,  1734, -1978, -1978,
    1837,  1926,   418, -1978,  1077, -1978,  1928, -1978, -1978, -1978,
    1192, 12213,  1878,  1766,  -199, -1978, -1978,  1919,  -136, -1978,
     478,  1573, -1978,  -136,  1573,  1756, 10081, -1978, 10081, -1978,
   10081, 11946, 11631,  1861,  7694,  1574,  1578, 10081, 10081, -1978,
   10081, 11772,  1798,  1798, 10081, -1978, -1978, -1978, -1978, -1978,
   -1978, 10081, 10081, 10081, 10081, -1978, 10081, 10081, 10081, -1978,
   -1978, -1978, -1978, 10081, 10081, -1978, 10081, -1978, -1978, -1978,
   11767, 11767, 10081, 10081, 10081,  1951, -1978,  1627,  1633,  1634,
    1635,  1636,  1637, -1978, -1978, -1978, 10081, 10081, 10081, -1978,
   10081,  1602,  1603,  1604,  1642,  1974,  1648,  1976,  1651,  1613,
    1614, 10081, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   10081, 10081, 10081, 10081, 10081, 10081, 10081, 10081, -1978, 10081,
   -1978, -1978, -1978, 10081, -1978, 10081, -1978, 10081, -1978, -1978,
   10081,  1610,  8744,  8744,  1760, 12187, 10081, -1978, 10081, 10081,
    1610, -1978,  1848,    53,  1985,   397,  1857,  1857,  1857,  1626,
     447, 10081,  1996,  1999,  1632, -1978, -1978,    53, 10081,   -66,
      53,  1640,  1846,  1847,  1644,  1838,  1838, 11767, 11651,  1838,
   -1978,  2002,  2004, -1978, -1978,  1653,  1655,   485,   406,   755,
     406,   406, -1978,   496,   406,   406,   406,   755,   755,   406,
     406,   406,   498,   755,   406,   755,  1657,  1664,  1942, -1978,
   10081, 12213,   130,  1838,  1838,  1838,  1184, -1978,  1666, -1978,
    1670,  1682,  1686,  1687,   501, -1978,  1767,   130,  2017,   207,
    1969, -1978,  1890,  1770,   130,   212,  1840,  2027,  2028,  -100,
    2029,  1688,  1881,   570,  1690,  1691,  1882,  1695,   514, -1978,
    2037,  1610, -1978, -1978,  2038,   -13,  2042,  2040,  2045,  1705,
     639, -1978,  1698, -1978,   487, 10081,  1860, -1978,  8605,  1915,
    2070, -1978, -1978,  2072,  8974,  -129, -1978,  -129, -1978, -1978,
   12213, 12021, -1978, 10081,  1707, 10081, -1978, -1978,   131,  1088,
   10259, 10081, 10081,  1708,  1709, 10284, 10452, 10477,  7884,  7952,
   10509, 10539, 10564, 10589, 10614, 10639,   -19,    17, 10664, 10689,
    7977,  1711,  1713,  1714,  1716,  1717,  1741,  1743,  1151,  8002,
   10714, 10739, -1978, -1978, -1978,  1749,   516,  1750,   522,  1751,
   -1978, -1978, 10764,  8034,  8059,  8252, 10789, 10816,  8317,  8358,
    1185,  1239,  1678, 10841, 10872,  1752,  1753, 10081,  1610, 10081,
    2109,  1610, 12213,  1610,  1754,  1610,  1772,  1773,  2021,  1938,
    -199, -1978, -1978,  1930,  1771,  1775,  1782, -1978,  2120, 12213,
    2062,    12,  1766, -1978, 12213, 10081,  1784, -1978, -1978,   -66,
   10081,  1786,  1787,  2156, 11651, 11651,  1838,  1979,  2162,  1802,
    1803,  1804,  2121,  2164,  1813,  2172,   112, -1978, -1978, -1978,
    2032,  2033, -1978, 11651, -1978, -1978,  1981,   699, -1978,  2181,
   -1978, -1978,  1966,  2189, -1978,  2190, -1978, -1978, -1978,  1830,
   10903,   569, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978,   704,   130,  2192,  2199,  2201,  2205, -1978,  2206,
    1841,   601,  1845,  1963,   130, -1978,  1421,  2107,  1849,   610,
    1967,   130,  2219,   276,  2090,   418, -1978,   454, 10081,  1853,
    1854,  1855,  2224,  2224,  1858,  2156,    34,   418, 11767, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978,   639,   619,   639,    20,
      85,  1859, -1978,  1723,   714, -1978, -1978, 12213,  1984,  2210,
   -1978, -1978, 12213,   623, -1978,  2043, -1978, -1978, 12213,  2230,
   -1978, 10081, -1978, -1978, 10081, -1978, 10928, 11569, -1978, -1978,
   -1978, -1978, -1978, 10081, 10081, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, 10081, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, 10081, 10081, -1978, -1978,  1899,  1899,
    1899, -1978,  1901,   855, -1978,  1902,   998, -1978,  1899,  1899,
   -1978, 10081, 10081, 10081, -1978, -1978, 10081, 10081, -1978, 10081,
   -1978, 10081, -1978, 10081, -1978, -1978, -1978, -1978,  1867,  1868,
    2109,  1869,  1874, -1978,  1876, -1978, -1978, 10081, 10081,  1632,
    1848, -1978,  2239,  2239,  2239,  1886, 10081, 10081,  2244,  1860,
   12213,  2224, -1978, 10953,  2246,  2249, -1978,   658, -1978, -1978,
   11651, -1978, -1978,  2253, 10081,  2255,  2221,   -21, 10081, -1978,
   -1978, -1978, -1978, -1978, -1978,  1904,  1910,  1911, 10081, -1978,
   -1978, -1978,  1184,  2214, -1978,  1898,  2268, -1978,   755, -1978,
     755,   755, 10081, -1978, -1978,  2227, -1978,   660,  1912,  1914,
    1916,  1925, -1978,   130, -1978,   130,  1920,   662,  1808, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
    2075,   130, -1978,  1933,   667,  1934,  2052,   130,  2050,   669,
    1937,  2152,  2153,  1940, 10978,  2246,  2224,  2224, -1978,   673,
     676,  2249,   678,   -18, -1978, -1978,  1838,   682, -1978, -1978,
   -1978, -1978,  2310, -1978, -1978,   487, 10081, 10081, -1978, -1978,
    1944, -1978,  9343, -1978,  9712,  1947,  2234,  1860,  1948, 11003,
   11028, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, 11053, 11078, 11103,  1899,  1899,  1899,  1899,  1899,  1899,
    1755, 11128,  2263,  2132,  2132,  2132,  1899,  1952,  1950,  1954,
    1899,  1953,  1962,  1968,  1899,  2132,  2132, 11153, 11180, 11205,
   11235, 11267,  8415, 11292, 11317, -1978, -1978, -1978, -1978, -1978,
   12046,   177, 12213,  1766,  1938, -1978,   685,   687,   693,  2332,
   12213, 12213,  2318, -1978,   695,  2323, -1978,   774, -1978,   776,
   -1978,  2340, -1978,   783, 11342,   785,  1978,  1980,  2200, -1978,
   11367,  1975,  1986,  1987, 11392,   705, -1978,  2144, -1978, -1978,
   11417, -1978,  2480, -1978, -1978, -1978, -1978,  2353,   814,   816,
     130, -1978, -1978,  2816,  3152,  3488,  3824,  4160,  4496,  2307,
     818,   130, -1978,   130,  1990,   820,  2233,    34, 10081,  1992,
    1993,  2156, -1978,   868,   872,   874, -1978,  2362, -1978,   902,
   -1978,   531,  2363,  2311,  2312,  1345, -1978,    85, -1978, 12213,
   12213,  2369,  2370, -1978, 12213, -1978, 12213,  8974,  2003, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978,  2132,  2132,  2132,  2132,
    2132,  2132, -1978, 10081, -1978,  2372,  2320,  2005,  2006,  2008,
    2132, -1978,  2049,  2051,  2132, -1978,  2054,  2058,  2132,  2013,
    2015, -1978, -1978, -1978, -1978, -1978, 10081, -1978, -1978, -1978,
    2193, 10081, -1978,  2261,  1632, -1978,  2392, -1978, -1978,  2025,
   10081, -1978,  2147,  2209,  2396, -1978,  2405, -1978, -1978,  2404,
    1226, -1978,  2413, 10081, 10081, -1978, -1978, -1978, -1978, -1978,
   -1978,  2381, -1978,  4832, -1978, -1978,  5168, -1978,  2064, -1978,
   -1978,   906, -1978,  2367,  2314,  2290,  2281,  2180, -1978, -1978,
     909,   913,   130, -1978,  2071,   -18, -1978, 11442,  2246,  2249,
     915,  2245, -1978, -1978, -1978, -1978, -1978,  2439,   247,   -69,
    2250, -1978, -1978,  2426,  2074,   917,  2445,  2355,  2078,  2091,
    2110,  2117,  2119,  2122, 11467, -1978,  2106,  2478, -1978, -1978,
   -1978,  2123,  1899,  2128,  2130,  2131,  1899,  2138,  2139,  2140,
   -1978, -1978, 11492, -1978, 12046,   263,  2341,  1766, -1978, -1978,
   12213, -1978,  2499, -1978, -1978,  2148, -1978, -1978,  2149, 11517,
   11544, -1978,  5504, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978,  5840, -1978, -1978,   923,  2506, -1978,   925,   927,
   -1978,  2519, -1978,  2522,  2523,  2157,  2158,  2159, 10081,  2528,
   -1978,   929,   -30, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978,  2534,    85,  2165, -1978,  2132, -1978, -1978, -1978,  2132,
   -1978, -1978, -1978, -1978, -1978,  2327,  2328,  2224, -1978, -1978,
    2169, -1978, -1978,  1255, -1978,  6176, -1978, -1978, -1978,  2176,
    2354, -1978,   937, -1978, -1978,  2550,  2551,  2553, 12213,  2537,
   -1978,  2555, -1978, -1978, -1978, -1978,  2556,  2188,  1899,  1899,
    2191,  1899,  1899,  2390,  2391,  2194,  2561, -1978, -1978, -1978,
    2334,  2563,  2565,  2561,  2198,  2203,  2204, 10081, -1978,  2345,
      85, -1978,  2132,  2132, -1978,  2132,  2132, -1978, -1978, -1978,
     943,  2202,   947,  2207,   951,  2211,  2357, -1978, 12213,  2370,
   -1978,  2212,  2213,  2216,  2222, -1978,  2574,  2578,  2590,  2561,
    2561, -1978,  2382,  2596,  2074, -1978, -1978, -1978, -1978,   359,
   -1978,  2231,  2235,   953,   971,   470,  2605,   973, -1978, -1978,
     -52,  2467,   355,    15, -1978,  2561, -1978, -1978,  2526,  2360,
   -1978,  2382, -1978, -1978,   385, -1978, -1978, -1978,     4,     6,
     976,   470,   470,  2453, -1978, -1978, -1978, -1978, -1978, -1978,
     350, -1978, -1978, -1978,   364, -1978,  2383, -1978, -1978, -1978,
   -1978,   470,    64,  2432,  2434,  2442,  2452,  2622,  2635, -1978,
   -1978
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1978,  2543,   -91, -1978, -1978, -1978, -1978,  -873,  1487, -1978,
    1624, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978,  1721,  2269,
   -1978,  -224,  -617,  1196, -1978, -1341, -1978,   895, -1217, -1978,
   -1604, -1978, -1029, -1978,   966, -1241, -1978, -1978, -1326, -1978,
   -1978,  2145,  -278,  -276,  2142,  -500, -1978, -1978,  -293, -1978,
   -1978,   552, -1978, -1978, -1978,  1405,  1630,   325,   -99, -1978,
   -1978, -1978,  2533,  2036, -1978, -1978, -1078, -1978, -1978, -1978,
   -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1978, -1044, -1978,
    -869, -1978, -1978, -1978, -1978, -1978,   519,   521,  2573,  2295,
   -1978,  1758, -1978,   824,  2041, -1978, -1978, -1978, -1978, -1978,
   -1978, -1978, -1978, -1084,  1322, -1978, -1978, -1978, -1978,   596,
   -1978, -1978, -1978,   858, -1978,   495, -1978,  1352,  1342, -1659,
   -1596, -1977, -1646, -1317, -1978, -1035,   841,   185,   138,  -824,
    -395,  1833, -1103, -1978, -1978, -1978,  2527, -1978,  -321, -1978,
    1821,  1200, -1066, -1978, -1978, -1978, -1978,  2143, -1978, -1978,
   -1978, -1978, -1978,  2348, -1978, -1978, -1439, -1978
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -678
static const yytype_int16 yytable[] =
{
     280,  1459,   522,   895,  1291,  1242,  1326,  1670,   505,  1684,
    1254,  1255,  1829,   509,  1273,   857,   600,   801,  1672,  1311,
    1763,  1067,  1068,  1831,   825,   353,  1319,  1073,   887,  1075,
      87,  1031,  1457,  1149,  1146,   500,  1148,  1008,  2182,   316,
     317,   318,   319,   320,   321,    55,  1347,   878,   474,   286,
    1777,   857,   510,  2092,  1139,  -503,   286,   589,   501,  -505,
     617,  1139,  1680,   366,   367,   508,  -504,  1341,  2213,  1823,
     590,  2197,   128,  2201,   372,   373,   374,   620,  -677,   619,
     376,   130,   475,   476,   477,   478,   479,   480,   481,   498,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   111,   497,   879,   316,   317,
     318,   319,   320,   321,   312,  2188,  1480,  1481,  1482,  1483,
    1868,  1869,  1245,    56,   617,  1681,  2035,  1680,   542,   342,
      57,  1879,  1880,  1089,   326,  1764,  2134,  1215,   629,   815,
      50,   475,   476,   477,   478,   479,   480,   481,    53,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,  1022,   497,    58,    59,    51,   867,
    1832,  1778,  2163,  2164,   511,    54,   133,  1484,    95,  1034,
     112,   878,    69,    60,   156,  2036,  1246,  2198,   473,  2202,
    1681,   827,  1724,  1725,   861,   327,  1833,   591,  2190,   511,
     354,  1735,  1736,  2183,   343,  2199,   287,  2203,   135,   474,
    1468,  1469,  -503,   287,  2093,  1009,  -505,    80,   129,   338,
     322,  1470,  1342,  -504,   781,  1507,  1779,   131,    61,  1491,
    2200,    81,  2204,  1674,   339,    88,  1517,  1140,  1033,  2214,
     592,   879,   828,  1654,  1364,    62,   888,   889,    63,  1518,
     498,   113,  1968,  1969,  1970,  1971,  1972,  1973,  1849,  2189,
     752,  -677,  1677,    96,  1371,   313,  1981,    64,    65,   354,
    1985,  1325,   753,    16,  1989,   344,  1365,  1137,  1366,   502,
     639,   826,    66,   630,   640,   543,    52,   157,   868,   322,
    2029,   650,   654,   656,   657,   658,   659,   660,   661,   662,
     663,   664,  1039,   666,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,  1834,   682,
     683,   684,   134,   686,   687,   688,   689,   690,   691,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
    1824,  1825,   633,   894,  1438,   709,   710,  2033,   137,   139,
     714,   715,  2028,  1391,   136,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,  2170,   742,   743,
     744,  1032,  1458,    84,   747,   748,   749,   750,   751,  1392,
    1682,    67,   761,   766,   767,   768,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   902,   323,  1889,
     905,   280,   288,  1045,  1046,   504,   792,   289,  -503,   288,
    1753,  1049,  -505,  -503,   289,   916,  1772,  -505,  1787,  -504,
    1485,  1486,  1487,   878,  -504,  1798,   141,  1799,   754,  1890,
    1792,   613,  1090,  1091,  1092,  1093,  1021,  -353,    85,  2171,
    -315,  2097,  1096,  1103,   617,  2100,  2207,   298,   299,  1313,
    1498,   334,  1500,  1501,  1320,   601,   606,  1083,  1084,  1085,
    2209,   544,   545,   546,   547,  1803,  2195,   300,   798,  2065,
     530,  2034,  1110,  1488,    16,  2185,  1804,   630,  2178,  1111,
    1349,   520,  1350,   879,   138,   140,  1961,  1856,  1857,  1858,
    1859,  1860,  1861,  1372,  1950,  2165,  1805,  2066,  1025,  1870,
    1055,  1056,  1893,  1874,   901,   602,   799,  1878,  2141,  2142,
    1806,  2143,  2144,   787,  1041,  1660,   891,  2196,  1656,  1807,
    2191,  2192,    92,  2172,  2208,    86,  1956,  1243,   122,    93,
    1249,   531,    97,   614,   788,  1112,  2186,  2173,  2210,  1113,
    1891,  1957,   911,   912,   532,  1176,  1177,   914,   755,  2211,
    2171,   642,   643,    98,   921,   349,  1114,  1029,  -353,  1808,
     100,  1097,  1104,  1810,   527,  1115,  2187,   105,  1314,  1815,
    1042,  1661,   142,  1321,   475,   476,   477,   478,   479,   480,
     481,  1121,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   335,   497,   603,
    1116,   301,   607,  1450,   101,   475,   476,   477,   478,   479,
     480,   481,   880,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   534,   497,
     302,  1835,   909,   910,  2172,  1043,  1662,  1657,   528,   536,
     789,  1280,  1256,  2064,   856,   143,   881,   882,  2173,   116,
     303,   154,   102,   119,   123,  1117,  1012,  1013,   104,  1015,
     857,  1281,   155,   304,   473,   475,   476,   477,   478,   479,
     480,   481,   124,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   144,   497,
    1044,  1663,   125,   143,   644,   305,   284,   858,   525,    16,
     537,  2095,   535,    82,  1946,  1100,   346,  1688,  1330,  1123,
    1923,   526,  1931,   538,  1101,  1926,   285,  1331,   103,   126,
     306,  1124,   106,  1940,   917,  1941,    83,  1238,   307,   904,
    1689,  2105,   859,  1493,   369,   370,   144,  1230,  1505,  1921,
     308,   108,  1494,   120,   145,   846,  2069,  1506,  1922,   146,
     109,   851,   110,   853,   114,  2055,   115,  1125,  1081,  2059,
     757,   758,   117,   759,   147,  1126,   760,   550,   551,  2140,
     494,   495,   496,   132,   497,   644,   118,  1216,    71,   475,
     476,   477,   478,   479,   480,   481,  1227,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   149,   497,   150,   309,   151,  1150,   152,  1151,
     283,   495,   496,  1127,   497,   158,  1158,  1159,   296,  1160,
    1282,  1283,    72,  1165,   794,   511,   310,   885,   886,   315,
    1166,  1167,  1168,  1169,   328,  1170,  1171,  1172,    73,   329,
    1142,  1143,  1173,  1174,   330,  1175,  2012,  1278,  1279,  1728,
    1729,  1178,  1179,  1180,  2025,  1997,   331,  1128,  1284,  1285,
    1286,  1285,  2022,  1308,  1309,  1188,  1189,  1190,   332,  1191,
     955,  2122,  2123,   336,  2125,  2126,  1336,  1337,  1412,  1413,
    1202,   333,   311,    74,  1415,  1416,   341,  1339,   337,  1203,
    1204,  1205,  1206,  1207,  1208,  1209,  1210,   345,  1211,   347,
      75,   349,  1212,    76,  1213,   351,  1214,   355,   490,   491,
     492,   493,   494,   495,   496,  1220,   497,  1222,  1222,   488,
     489,   490,   491,   492,   493,   494,   495,   496,    77,   497,
    1239,  1504,  1309,  1676,   362,  2075,   956,  1244,   475,   476,
     477,   478,   479,   480,   481,   356,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   363,   497,  1514,  1309,   357,  1060,  1061,   918,  1064,
    1065,  1066,  1652,  1309,   358,  1069,  1070,  1071,   359,  1290,
    1074,  1678,  1348,   360,  1439,  1693,  1694,  1441,   361,  1442,
     364,  1444,  1732,  1733,   365,   475,   476,   477,   478,   479,
     480,   481,    87,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   371,   497,
    1770,  1771,  1793,  1309,  1801,  1309,   378,   942,   943,  1812,
    1309,  1817,  1337,   379,  1353,  1826,  1827,  1357,  1828,  1827,
    1830,  1771,   380,  1362,  1836,  1348,    78,  1895,  1896,  1897,
    1896,   381,  1368,   382,   914,  1898,  1896,  1901,  1827,   383,
    1376,  1377,   475,   476,   477,   478,   479,   480,   481,   384,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   385,   497,   386,   475,   476,
     477,   478,   479,   480,   481,   387,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   520,   497,   477,   478,   479,   480,   481,  1440,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   388,   497,  1903,  1904,  1905,  1906,
     503,   974,   975,   389,  1460,  1908,  1909,  1911,  1912,  1463,
     390,   475,   476,   477,   478,   479,   480,   481,   391,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   523,   497,  1929,  1309,  1930,  1309,
    1939,  1309,  1943,  1309,   392,   475,   476,   477,   478,   479,
     480,   481,   393,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   394,   497,
     395,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   512,   497,  1664,   396,  1292,
    1951,  1904,   397,  1293,  1952,  1827,  1953,  1827,   398,   475,
     476,   477,   478,   479,   480,   481,   399,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,  1123,   497,  1955,  1906,  2006,  2007,  2016,  1309,
    1699,  2023,  1309,  1700,  1124,  2024,  1309,  2030,  1771,  2040,
    1694,  1294,  1711,  1712,  1295,  2078,  1309,  2080,  1904,  2081,
    1906,  2090,  2091,   400,  1713,  2107,  2108,  2112,  2113,  1296,
     976,   977,   513,  1720,  1721,  2145,  2146,  2148,  2149,   401,
    1125,   402,  -321,  2151,  2146,  2176,  2146,   403,  1126,  1297,
    1737,  1738,  1739,   404,   514,  1740,  1741,  1298,  1742,   405,
    1743,   406,  1744,  2177,  2146,  2180,  2181,   515,  2205,  2146,
    1035,  1036,  1235,  1236,  1757,  1758,  1750,  1752,   407,   408,
     409,   410,   411,  1257,   412,  1760,  1761,   998,   999,   524,
     413,   414,   516,   415,   416,   529,  1127,   417,   418,   419,
     420,   421,   422,  1774,   423,   424,  1259,  1780,   425,  1260,
     517,  1261,   426,   427,  1262,   428,   429,  1784,   835,   836,
     837,   838,   430,   839,   431,   432,   841,   842,   843,  1263,
     433,  1790,   434,   847,   848,   849,  1264,  1265,   852,  1299,
    1128,  1300,   435,   436,  1519,  1520,  1521,  1522,  1523,  1524,
     437,  1525,   438,  1526,  1004,  1005,   439,  1527,  1528,  1529,
    1301,  1530,   440,   441,   442,  1531,  1532,  1533,  1534,  1535,
     443,  1266,   444,   445,  1129,   446,   447,   448,   449,  1536,
    1373,  1374,   450,   451,  1537,  1538,   452,   453,  1539,   454,
     455,   456,   457,  1540,  1541,  1542,  1543,  1544,   458,   459,
    1545,   460,  1546,  1547,  1548,   461,   462,  1549,  1550,   463,
    1551,  1552,  1553,   464,   465,   466,  1554,   467,   468,   469,
     470,   471,  1268,   472,   506,   507,   533,   539,   540,   541,
    1555,   549,   552,   553,   588,  1556,   596,   597,   598,   599,
    1557,  1558,  1559,  1403,  1404,   605,   608,  1560,  1561,  1269,
    1562,  1563,  1564,  1565,   610,   611,  1566,  1270,  1567,  1568,
    1569,  1570,   621,  1571,   616,  1572,  1573,   622,  1574,   623,
    1575,  1576,   624,  1577,  1578,  1579,  1580,  1428,  1429,   625,
     626,   627,  1581,  1130,  1582,   628,  1583,  1584,   632,  1585,
    1586,  1587,  1588,  1589,  1590,   635,  1591,  1592,  1593,  1594,
    1595,   497,   645,   646,   647,   665,   681,   685,   704,  1596,
     705,  1597,  1271,  1598,   706,  1839,  1840,   707,   716,   708,
     711,  1844,  1599,  1846,  1600,  1601,  1602,  1603,  1604,  1605,
    1606,  1430,  1431,  1607,  1608,   712,   713,   717,   756,  1609,
     718,  1610,  1611,  1612,   780,  1613,   741,  1614,   745,  1615,
    1616,  1617,  1618,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   782,   497,  1619,  1620,  1621,   784,
     786,   793,   795,   802,   803,   805,  1622,   806,  1623,  1624,
    1625,   807,   808,   809,   810,  1626,   811,  1627,  1628,  1629,
     812,   813,   814,  1630,   816,   817,   818,  1631,  1632,   819,
    1633,  1634,  1635,  1636,   820,   821,   822,  1637,   475,   476,
     477,   478,   479,   480,   481,   823,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   824,   497,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   829,   497,  1947,  1638,  1639,
    1640,  1641,  1642,   475,   476,   477,   478,   479,   480,   481,
     831,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,  1362,   497,   832,   833,
     840,   844,   850,   854,   855,   475,   476,   477,   478,   479,
     480,   481,  1974,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   860,   497,
    1643,  1644,  1645,  1646,  1647,  1992,  1648,   862,   863,   864,
    1994,   865,   869,   866,   870,   871,   872,   873,   874,  2000,
     875,  1519,  1520,  1521,  1522,  1523,  1524,   876,  1525,   877,
    1526,   892,  2009,  2010,  1527,  1528,  1529,   897,  1530,   899,
     907,   913,  1531,  1532,  1533,  1534,  1535,    16,   957,   971,
     972,   973,   978,   -71,  1014,  1017,  1536,   979,  1018,   980,
    1019,  1537,  1538,  1023,  1024,  1539,  1026,  1027,  1028,  1037,
    1540,  1541,  1542,  1543,  1544,  1038,  1040,  1545,  1047,  1546,
    1547,  1548,   857,  1050,  1549,  1550,  1051,  1551,  1552,  1553,
    1053,  1052,  1054,  1554,  1057,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,  1686,   497,  1555,  1062,  1078,
    1076,  1077,  1556,  1079,  1080,  1082,  1086,  1557,  1558,  1559,
    1088,  1099,  1102,  1098,  1560,  1561,  1105,  1562,  1563,  1564,
    1565,  1106,  1107,  1566,  1108,  1802,  1568,  1569,  1570,  1109,
    1571,  1122,  1572,  1573,  1134,  1574,  1135,  1575,  1576,  1138,
    1577,  1578,  1579,  1580,  1144,  1154,  1139,  2088,  1156,  1581,
    1157,  1582,  1162,  1583,  1584,  1181,  1585,  1586,  1587,  1588,
    1589,  1590,  1182,  1591,  1592,  1593,  1594,  1595,  1183,  1184,
    1185,  1186,  1187,  1192,  1193,  1194,  1596,  1195,  1597,  1196,
    1598,  1198,  1228,  1197,  1200,  1201,  1199,   -73,  1231,  1599,
    1233,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1237,  1240,
    1607,  1608,  1241,  1251,  1252,  1274,  1609,  1275,  1610,  1611,
    1612,  1250,  1613,  1289,  1614,  1253,  1615,  1616,  1617,  1618,
    1312,  1310,  1315,  1317,  1318,  1276,  2138,  1277,  1322,  1287,
    1323,  1324,  1327,  1619,  1620,  1621,  1288,  1303,  1329,  1334,
    1338,  1304,  1340,  1622,  1344,  1623,  1624,  1625,  1343,  1345,
    1432,  1433,  1626,  1305,  1627,  1628,  1629,  1306,  1307,  1328,
    1630,  1332,  1333,  1354,  1631,  1632,  1335,  1633,  1634,  1635,
    1636,  1348,  1358,  1359,  1637,  1360,  1346,  1447,  1369,  1448,
    1378,  1379,  1456,  1396,  1397,  1398,  1451,  1399,  1400,   475,
     476,   477,   478,   479,   480,   481,  1687,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,  1401,   497,  1402,  1638,  1639,  1640,  1641,  1642,
    1411,  1414,  1417,  1455,  1436,  1437,  1443,  1862,  1863,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,  1452,   497,  1445,  1446,  1453,  1519,  1520,  1521,
    1522,  1523,  1524,  1454,  1525,  1461,  1526,  1464,  1465,  1466,
    1527,  1528,  1529,  1471,  1530,  1472,  1476,  1477,  1531,  1532,
    1533,  1534,  1535,  1473,  1474,  1475,  1479,  1643,  1644,  1645,
    1646,  1647,  1536,  1648,  1478,  1492,  1495,  1537,  1538,  1489,
    1490,  1539,  1496,  1497,  1499,  1508,  1540,  1541,  1542,  1543,
    1544,  1502,  1509,  1545,  1510,  1546,  1547,  1548,  1511,  1512,
    1549,  1550,  1513,  1551,  1552,  1553,  1515,  1516,  1650,  1554,
    1651,  1653,  1655,  1658,  1665,  1666,  1667,  1668,  1691,  1671,
    1692,  1696,  1685,  1555,  1698,  1722,  1727,  1731,  1556,  1745,
    1746,  1747,  1755,  1557,  1558,  1559,  1748,  1762,  1749,  1766,
    1560,  1561,  1768,  1562,  1563,  1564,  1565,  1759,  1773,  1566,
    1775,  1924,  1568,  1569,  1570,  1776,  1571,  1786,  1572,  1573,
    1788,  1574,  1789,  1575,  1576,  1781,  1577,  1578,  1579,  1580,
    1791,  1782,  1783,  1809,  1794,  1581,  1795,  1582,  1796,  1583,
    1584,  1800,  1585,  1586,  1587,  1588,  1589,  1590,  1797,  1591,
    1592,  1593,  1594,  1595,  1811,  1813,  1814,  1816,  1818,  1819,
    1820,  1821,  1596,  1837,  1597,  1848,  1598,  1841,  1847,  1865,
    1850,  1866,  1872,  1871,  1875,  1599,  1873,  1600,  1601,  1602,
    1603,  1604,  1605,  1606,  1876,  1899,  1607,  1608,  1900,   375,
    1877,  1902,  1609,  1907,  1610,  1611,  1612,  1917,  1613,  1913,
    1614,  1914,  1615,  1616,  1617,  1618,  1928,  1915,  1918,  1919,
    1938,  1942,  1944,  1948,  1949,  1954,  1958,  1959,  1960,  1619,
    1620,  1621,  1962,  1963,  1966,  1975,  1977,  1978,  1979,  1622,
    1980,  1623,  1624,  1625,  1983,  1990,  1984,  1991,  1626,  1987,
    1627,  1628,  1629,  1988,  1995,  1998,  1630,  1999,  1993,  2003,
    1631,  1632,  2001,  1633,  1634,  1635,  1636,  2002,  2004,  2005,
    1637,   475,   476,   477,   478,   479,   480,   481,  2008,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,  2011,   497,  2015,  2017,  2018,  2019,
    2020,  2021,  2026,  2031,  2032,  2037,  2038,  2039,  2041,  2042,
    2044,  1638,  1639,  1640,  1641,  1642,   475,   476,   477,   478,
     479,   480,   481,  2045,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,  2051,
     497,  2052,  2046,  1519,  1520,  1521,  1522,  1523,  1524,  2047,
    1525,  2048,  1526,  2067,  2049,  2054,  1527,  1528,  1529,  2056,
    1530,  2057,  2070,  2058,  1531,  1532,  1533,  1534,  1535,  2060,
    2061,  2079,  2062,  1643,  1644,  1645,  1646,  1647,  1536,  1648,
    2071,  2072,  2082,  1537,  1538,  2083,  2084,  1539,  2085,  2086,
    2087,  2089,  1540,  1541,  1542,  1543,  1544,  2094,  2096,  1545,
    2106,  1546,  1547,  1548,  2103,  2104,  1549,  1550,  2110,  1551,
    1552,  1553,  2111,  2114,  2115,  1554,  2116,  2117,  2118,  2120,
    2121,  2127,  2128,  2124,  2129,  2131,  2132,  1827,  2133,  1555,
    2135,  2139,  2153,  2147,  1556,  2136,  2137,  2160,  2150,  1557,
    1558,  1559,  2152,  2161,  2155,  2156,  1560,  1561,  2157,  1562,
    1563,  1564,  1565,  2162,  2158,  1566,  2166,  1927,  1568,  1569,
    1570,  2169,  1571,  2174,  1572,  1573,  2175,  1574,  2179,  1575,
    1576,  2184,  1577,  1578,  1579,  1580,  2182,  2193,  2206,  2212,
    2215,  1581,  2216,  1582,  2217,  1583,  1584,  2219,  1585,  1586,
    1587,  1588,  1589,  1590,  2218,  1591,  1592,  1593,  1594,  1595,
    2220,   297,  1370,  1226,  1164,   641,  1754,   783,  1596,  1894,
    1597,  1838,  1598,   797,  1462,  1232,   352,   896,  2154,   153,
     634,  1599,  1147,  1600,  1601,  1602,  1603,  1604,  1605,  1606,
    1679,  1965,  1607,  1608,   903,  1945,  2194,  1659,  1609,  1675,
    1610,  1611,  1612,  1072,  1613,   368,  1614,  1087,  1615,  1616,
    1617,  1618,  1785,   609,   830,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1619,  1620,  1621,     0,     0,
       0,     0,     0,     0,     0,  1622,     0,  1623,  1624,  1625,
       0,     0,     0,     0,  1626,     0,  1627,  1628,  1629,     0,
       0,     0,  1630,     0,     0,     0,  1631,  1632,     0,  1633,
    1634,  1635,  1636,     0,     0,     0,  1637,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,     0,   906,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1638,  1639,  1640,
    1641,  1642,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,     0,   746,  1519,
    1520,  1521,  1522,  1523,  1524,     0,  1525,     0,  1526,     0,
       0,     0,  1527,  1528,  1529,     0,  1530,     0,     0,     0,
    1531,  1532,  1533,  1534,  1535,     0,     0,     0,     0,  1643,
    1644,  1645,  1646,  1647,  1536,  1648,     0,     0,     0,  1537,
    1538,     0,     0,  1539,     0,     0,     0,     0,  1540,  1541,
    1542,  1543,  1544,     0,     0,  1545,     0,  1546,  1547,  1548,
       0,     0,  1549,  1550,     0,  1551,  1552,  1553,     0,     0,
       0,  1554,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1555,     0,     0,     0,     0,
    1556,     0,     0,     0,     0,  1557,  1558,  1559,     0,     0,
       0,     0,  1560,  1561,     0,  1562,  1563,  1564,  1565,     0,
       0,  1566,     0,  1932,  1568,  1569,  1570,     0,  1571,     0,
    1572,  1573,     0,  1574,     0,  1575,  1576,     0,  1577,  1578,
    1579,  1580,     0,     0,     0,     0,     0,  1581,     0,  1582,
       0,  1583,  1584,     0,  1585,  1586,  1587,  1588,  1589,  1590,
       0,  1591,  1592,  1593,  1594,  1595,     0,     0,     0,     0,
       0,     0,     0,     0,  1596,     0,  1597,     0,  1598,     0,
       0,     0,     0,     0,     0,     0,     0,  1599,     0,  1600,
    1601,  1602,  1603,  1604,  1605,  1606,     0,     0,  1607,  1608,
       0,     0,     0,     0,  1609,     0,  1610,  1611,  1612,     0,
    1613,     0,  1614,     0,  1615,  1616,  1617,  1618,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1619,  1620,  1621,     0,     0,     0,     0,     0,     0,
       0,  1622,     0,  1623,  1624,  1625,     0,     0,     0,     0,
    1626,     0,  1627,  1628,  1629,     0,     0,     0,  1630,     0,
       0,     0,  1631,  1632,     0,  1633,  1634,  1635,  1636,     0,
       0,     0,  1637,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,     0,   497,     0,     0,
     922,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1638,  1639,  1640,  1641,  1642,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,     0,   497,     0,   919,  1519,  1520,  1521,  1522,  1523,
    1524,     0,  1525,     0,  1526,     0,     0,     0,  1527,  1528,
    1529,     0,  1530,     0,     0,     0,  1531,  1532,  1533,  1534,
    1535,     0,     0,     0,     0,  1643,  1644,  1645,  1646,  1647,
    1536,  1648,     0,     0,     0,  1537,  1538,     0,     0,  1539,
       0,     0,     0,     0,  1540,  1541,  1542,  1543,  1544,     0,
       0,  1545,     0,  1546,  1547,  1548,     0,     0,  1549,  1550,
       0,  1551,  1552,  1553,     0,     0,     0,  1554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1555,     0,     0,     0,     0,  1556,     0,     0,     0,
       0,  1557,  1558,  1559,     0,     0,     0,     0,  1560,  1561,
       0,  1562,  1563,  1564,  1565,     0,     0,  1566,     0,  1933,
    1568,  1569,  1570,     0,  1571,     0,  1572,  1573,     0,  1574,
       0,  1575,  1576,     0,  1577,  1578,  1579,  1580,     0,     0,
       0,     0,     0,  1581,     0,  1582,     0,  1583,  1584,     0,
    1585,  1586,  1587,  1588,  1589,  1590,     0,  1591,  1592,  1593,
    1594,  1595,     0,     0,     0,     0,     0,     0,     0,     0,
    1596,     0,  1597,     0,  1598,     0,     0,     0,     0,     0,
       0,     0,     0,  1599,     0,  1600,  1601,  1602,  1603,  1604,
    1605,  1606,     0,     0,  1607,  1608,     0,     0,     0,     0,
    1609,     0,  1610,  1611,  1612,     0,  1613,     0,  1614,     0,
    1615,  1616,  1617,  1618,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1619,  1620,  1621,
       0,     0,     0,     0,     0,     0,     0,  1622,     0,  1623,
    1624,  1625,     0,     0,     0,     0,  1626,     0,  1627,  1628,
    1629,     0,     0,     0,  1630,     0,     0,     0,  1631,  1632,
       0,  1633,  1634,  1635,  1636,     0,     0,     0,  1637,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,     0,     0,   923,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1638,
    1639,  1640,  1641,  1642,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,     0,
     925,  1519,  1520,  1521,  1522,  1523,  1524,     0,  1525,     0,
    1526,     0,     0,     0,  1527,  1528,  1529,     0,  1530,     0,
       0,     0,  1531,  1532,  1533,  1534,  1535,     0,     0,     0,
       0,  1643,  1644,  1645,  1646,  1647,  1536,  1648,     0,     0,
       0,  1537,  1538,     0,     0,  1539,     0,     0,     0,     0,
    1540,  1541,  1542,  1543,  1544,     0,     0,  1545,     0,  1546,
    1547,  1548,     0,     0,  1549,  1550,     0,  1551,  1552,  1553,
       0,     0,     0,  1554,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1555,     0,     0,
       0,     0,  1556,     0,     0,     0,     0,  1557,  1558,  1559,
       0,     0,     0,     0,  1560,  1561,     0,  1562,  1563,  1564,
    1565,     0,     0,  1566,     0,  1934,  1568,  1569,  1570,     0,
    1571,     0,  1572,  1573,     0,  1574,     0,  1575,  1576,     0,
    1577,  1578,  1579,  1580,     0,     0,     0,     0,     0,  1581,
       0,  1582,     0,  1583,  1584,     0,  1585,  1586,  1587,  1588,
    1589,  1590,     0,  1591,  1592,  1593,  1594,  1595,     0,     0,
       0,     0,     0,     0,     0,     0,  1596,     0,  1597,     0,
    1598,     0,     0,     0,     0,     0,     0,     0,     0,  1599,
       0,  1600,  1601,  1602,  1603,  1604,  1605,  1606,     0,     0,
    1607,  1608,     0,     0,     0,     0,  1609,     0,  1610,  1611,
    1612,     0,  1613,     0,  1614,     0,  1615,  1616,  1617,  1618,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1619,  1620,  1621,     0,     0,     0,     0,
       0,     0,     0,  1622,     0,  1623,  1624,  1625,     0,     0,
       0,     0,  1626,     0,  1627,  1628,  1629,     0,     0,     0,
    1630,     0,     0,     0,  1631,  1632,     0,  1633,  1634,  1635,
    1636,     0,     0,     0,  1637,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,   924,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1638,  1639,  1640,  1641,  1642,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,   926,  1519,  1520,  1521,
    1522,  1523,  1524,     0,  1525,     0,  1526,     0,     0,     0,
    1527,  1528,  1529,     0,  1530,     0,     0,     0,  1531,  1532,
    1533,  1534,  1535,     0,     0,     0,     0,  1643,  1644,  1645,
    1646,  1647,  1536,  1648,     0,     0,     0,  1537,  1538,     0,
       0,  1539,     0,     0,     0,     0,  1540,  1541,  1542,  1543,
    1544,     0,     0,  1545,     0,  1546,  1547,  1548,     0,     0,
    1549,  1550,     0,  1551,  1552,  1553,     0,     0,     0,  1554,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1555,     0,     0,     0,     0,  1556,     0,
       0,     0,     0,  1557,  1558,  1559,     0,     0,     0,     0,
    1560,  1561,     0,  1562,  1563,  1564,  1565,     0,     0,  1566,
       0,  1935,  1568,  1569,  1570,     0,  1571,     0,  1572,  1573,
       0,  1574,     0,  1575,  1576,     0,  1577,  1578,  1579,  1580,
       0,     0,     0,     0,     0,  1581,     0,  1582,     0,  1583,
    1584,     0,  1585,  1586,  1587,  1588,  1589,  1590,     0,  1591,
    1592,  1593,  1594,  1595,     0,     0,     0,     0,     0,     0,
       0,     0,  1596,     0,  1597,     0,  1598,     0,     0,     0,
       0,     0,     0,     0,     0,  1599,     0,  1600,  1601,  1602,
    1603,  1604,  1605,  1606,     0,     0,  1607,  1608,     0,     0,
       0,     0,  1609,     0,  1610,  1611,  1612,     0,  1613,     0,
    1614,     0,  1615,  1616,  1617,  1618,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1619,
    1620,  1621,     0,     0,     0,     0,     0,     0,     0,  1622,
       0,  1623,  1624,  1625,     0,     0,     0,     0,  1626,     0,
    1627,  1628,  1629,     0,     0,     0,  1630,     0,     0,     0,
    1631,  1632,     0,  1633,  1634,  1635,  1636,     0,     0,     0,
    1637,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,     0,     0,   931,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1638,  1639,  1640,  1641,  1642,   475,   476,   477,   478,
     479,   480,   481,     0,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,   927,  1519,  1520,  1521,  1522,  1523,  1524,     0,
    1525,     0,  1526,     0,     0,     0,  1527,  1528,  1529,     0,
    1530,     0,     0,     0,  1531,  1532,  1533,  1534,  1535,     0,
       0,     0,     0,  1643,  1644,  1645,  1646,  1647,  1536,  1648,
       0,     0,     0,  1537,  1538,     0,     0,  1539,     0,     0,
       0,     0,  1540,  1541,  1542,  1543,  1544,     0,     0,  1545,
       0,  1546,  1547,  1548,     0,     0,  1549,  1550,     0,  1551,
    1552,  1553,     0,     0,     0,  1554,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1555,
       0,     0,     0,     0,  1556,     0,     0,     0,     0,  1557,
    1558,  1559,     0,     0,     0,     0,  1560,  1561,     0,  1562,
    1563,  1564,  1565,     0,     0,  1566,     0,  1936,  1568,  1569,
    1570,     0,  1571,     0,  1572,  1573,     0,  1574,     0,  1575,
    1576,     0,  1577,  1578,  1579,  1580,     0,     0,     0,     0,
       0,  1581,     0,  1582,     0,  1583,  1584,     0,  1585,  1586,
    1587,  1588,  1589,  1590,     0,  1591,  1592,  1593,  1594,  1595,
       0,     0,     0,     0,     0,     0,     0,     0,  1596,     0,
    1597,     0,  1598,     0,     0,     0,     0,     0,     0,     0,
       0,  1599,     0,  1600,  1601,  1602,  1603,  1604,  1605,  1606,
       0,     0,  1607,  1608,     0,     0,     0,     0,  1609,     0,
    1610,  1611,  1612,     0,  1613,     0,  1614,     0,  1615,  1616,
    1617,  1618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1619,  1620,  1621,     0,     0,
       0,     0,     0,     0,     0,  1622,     0,  1623,  1624,  1625,
       0,     0,     0,     0,  1626,     0,  1627,  1628,  1629,     0,
       0,     0,  1630,     0,     0,     0,  1631,  1632,     0,  1633,
    1634,  1635,  1636,     0,     0,     0,  1637,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,     0,   932,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1638,  1639,  1640,
    1641,  1642,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,     0,   928,  1519,
    1520,  1521,  1522,  1523,  1524,     0,  1525,     0,  1526,     0,
       0,     0,  1527,  1528,  1529,     0,  1530,     0,     0,     0,
    1531,  1532,  1533,  1534,  1535,     0,     0,     0,     0,  1643,
    1644,  1645,  1646,  1647,  1536,  1648,     0,     0,     0,  1537,
    1538,     0,     0,  1539,     0,     0,     0,     0,  1540,  1541,
    1542,  1543,  1544,     0,     0,  1545,     0,  1546,  1547,  1548,
       0,     0,  1549,  1550,     0,  1551,  1552,  1553,     0,     0,
       0,  1554,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1555,     0,     0,     0,     0,
    1556,     0,     0,     0,     0,  1557,  1558,  1559,     0,     0,
       0,     0,  1560,  1561,     0,  1562,  1563,  1564,  1565,     0,
       0,  1566,     0,  1937,  1568,  1569,  1570,     0,  1571,     0,
    1572,  1573,     0,  1574,     0,  1575,  1576,     0,  1577,  1578,
    1579,  1580,     0,     0,     0,     0,     0,  1581,     0,  1582,
       0,  1583,  1584,     0,  1585,  1586,  1587,  1588,  1589,  1590,
       0,  1591,  1592,  1593,  1594,  1595,     0,     0,     0,     0,
       0,     0,     0,     0,  1596,     0,  1597,     0,  1598,     0,
       0,     0,     0,     0,     0,     0,     0,  1599,     0,  1600,
    1601,  1602,  1603,  1604,  1605,  1606,     0,     0,  1607,  1608,
       0,     0,     0,     0,  1609,     0,  1610,  1611,  1612,     0,
    1613,     0,  1614,     0,  1615,  1616,  1617,  1618,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1619,  1620,  1621,     0,     0,     0,     0,     0,     0,
       0,  1622,     0,  1623,  1624,  1625,     0,     0,     0,     0,
    1626,     0,  1627,  1628,  1629,     0,     0,     0,  1630,     0,
       0,     0,  1631,  1632,     0,  1633,  1634,  1635,  1636,     0,
       0,     0,  1637,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,     0,   497,     0,     0,
     933,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1638,  1639,  1640,  1641,  1642,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,     0,   497,     0,   929,  1519,  1520,  1521,  1522,  1523,
    1524,     0,  1525,     0,  1526,     0,     0,     0,  1527,  1528,
    1529,     0,  1530,     0,     0,     0,  1531,  1532,  1533,  1534,
    1535,     0,     0,     0,     0,  1643,  1644,  1645,  1646,  1647,
    1536,  1648,     0,     0,     0,  1537,  1538,     0,     0,  1539,
       0,     0,     0,     0,  1540,  1541,  1542,  1543,  1544,     0,
       0,  1545,     0,  1546,  1547,  1548,     0,     0,  1549,  1550,
       0,  1551,  1552,  1553,     0,     0,     0,  1554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1555,     0,     0,     0,     0,  1556,     0,     0,     0,
       0,  1557,  1558,  1559,     0,     0,     0,     0,  1560,  1561,
       0,  1562,  1563,  1564,  1565,     0,     0,  1566,     0,  2013,
    1568,  1569,  1570,     0,  1571,     0,  1572,  1573,     0,  1574,
       0,  1575,  1576,     0,  1577,  1578,  1579,  1580,     0,     0,
       0,     0,     0,  1581,     0,  1582,     0,  1583,  1584,     0,
    1585,  1586,  1587,  1588,  1589,  1590,     0,  1591,  1592,  1593,
    1594,  1595,     0,     0,     0,     0,     0,     0,     0,     0,
    1596,     0,  1597,     0,  1598,     0,     0,     0,     0,     0,
       0,     0,     0,  1599,     0,  1600,  1601,  1602,  1603,  1604,
    1605,  1606,     0,     0,  1607,  1608,     0,     0,     0,     0,
    1609,     0,  1610,  1611,  1612,     0,  1613,     0,  1614,     0,
    1615,  1616,  1617,  1618,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1619,  1620,  1621,
       0,     0,     0,     0,     0,     0,     0,  1622,     0,  1623,
    1624,  1625,     0,     0,     0,     0,  1626,     0,  1627,  1628,
    1629,     0,     0,     0,  1630,     0,     0,     0,  1631,  1632,
       0,  1633,  1634,  1635,  1636,     0,     0,     0,  1637,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,     0,     0,   934,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1638,
    1639,  1640,  1641,  1642,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,     0,
     930,  1519,  1520,  1521,  1522,  1523,  1524,     0,  1525,     0,
    1526,     0,     0,     0,  1527,  1528,  1529,     0,  1530,     0,
       0,     0,  1531,  1532,  1533,  1534,  1535,     0,     0,     0,
       0,  1643,  1644,  1645,  1646,  1647,  1536,  1648,     0,     0,
       0,  1537,  1538,     0,     0,  1539,     0,     0,     0,     0,
    1540,  1541,  1542,  1543,  1544,     0,     0,  1545,     0,  1546,
    1547,  1548,     0,     0,  1549,  1550,     0,  1551,  1552,  1553,
       0,     0,     0,  1554,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1555,     0,     0,
       0,     0,  1556,     0,     0,     0,     0,  1557,  1558,  1559,
       0,     0,     0,     0,  1560,  1561,     0,  1562,  1563,  1564,
    1565,     0,     0,  1566,     0,  2014,  1568,  1569,  1570,     0,
    1571,     0,  1572,  1573,     0,  1574,     0,  1575,  1576,     0,
    1577,  1578,  1579,  1580,     0,     0,     0,     0,     0,  1581,
       0,  1582,     0,  1583,  1584,     0,  1585,  1586,  1587,  1588,
    1589,  1590,     0,  1591,  1592,  1593,  1594,  1595,     0,     0,
       0,     0,     0,     0,     0,     0,  1596,     0,  1597,     0,
    1598,     0,     0,     0,     0,     0,     0,     0,     0,  1599,
       0,  1600,  1601,  1602,  1603,  1604,  1605,  1606,     0,     0,
    1607,  1608,     0,     0,     0,     0,  1609,     0,  1610,  1611,
    1612,     0,  1613,     0,  1614,     0,  1615,  1616,  1617,  1618,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1619,  1620,  1621,     0,     0,     0,     0,
       0,     0,     0,  1622,     0,  1623,  1624,  1625,     0,     0,
       0,     0,  1626,     0,  1627,  1628,  1629,     0,     0,     0,
    1630,     0,     0,     0,  1631,  1632,     0,  1633,  1634,  1635,
    1636,     0,     0,     0,  1637,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,   936,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1638,  1639,  1640,  1641,  1642,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,   935,  1519,  1520,  1521,
    1522,  1523,  1524,     0,  1525,     0,  1526,     0,     0,     0,
    1527,  1528,  1529,     0,  1530,     0,     0,     0,  1531,  1532,
    1533,  1534,  1535,     0,     0,     0,     0,  1643,  1644,  1645,
    1646,  1647,  1536,  1648,     0,     0,     0,  1537,  1538,     0,
       0,  1539,     0,     0,     0,     0,  1540,  1541,  1542,  1543,
    1544,     0,     0,  1545,     0,  1546,  1547,  1548,     0,     0,
    1549,  1550,     0,  1551,  1552,  1553,     0,     0,     0,  1554,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1555,     0,     0,     0,     0,  1556,     0,
       0,     0,     0,  1557,  1558,  1559,     0,     0,     0,     0,
    1560,  1561,     0,  1562,  1563,  1564,  1565,     0,     0,  1566,
       0,  2076,  1568,  1569,  1570,     0,  1571,     0,  1572,  1573,
       0,  1574,     0,  1575,  1576,     0,  1577,  1578,  1579,  1580,
       0,     0,     0,     0,     0,  1581,     0,  1582,     0,  1583,
    1584,     0,  1585,  1586,  1587,  1588,  1589,  1590,     0,  1591,
    1592,  1593,  1594,  1595,     0,     0,     0,     0,     0,     0,
       0,     0,  1596,     0,  1597,     0,  1598,     0,     0,     0,
       0,     0,     0,     0,     0,  1599,     0,  1600,  1601,  1602,
    1603,  1604,  1605,  1606,     0,     0,  1607,  1608,     0,     0,
       0,     0,  1609,     0,  1610,  1611,  1612,     0,  1613,     0,
    1614,     0,  1615,  1616,  1617,  1618,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1619,
    1620,  1621,     0,     0,     0,     0,     0,     0,     0,  1622,
       0,  1623,  1624,  1625,     0,     0,     0,     0,  1626,     0,
    1627,  1628,  1629,     0,     0,     0,  1630,     0,     0,     0,
    1631,  1632,     0,  1633,  1634,  1635,  1636,     0,     0,     0,
    1637,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,     0,     0,   937,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1638,  1639,  1640,  1641,  1642,   475,   476,   477,   478,
     479,   480,   481,     0,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,   939,  1519,  1520,  1521,  1522,  1523,  1524,     0,
    1525,     0,  1526,     0,     0,     0,  1527,  1528,  1529,     0,
    1530,     0,     0,     0,  1531,  1532,  1533,  1534,  1535,     0,
       0,     0,     0,  1643,  1644,  1645,  1646,  1647,  1536,  1648,
       0,     0,     0,  1537,  1538,     0,     0,  1539,     0,     0,
       0,     0,  1540,  1541,  1542,  1543,  1544,     0,     0,  1545,
       0,  1546,  1547,  1548,     0,     0,  1549,  1550,     0,  1551,
    1552,  1553,     0,     0,     0,  1554,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1555,
       0,     0,     0,     0,  1556,     0,     0,     0,     0,  1557,
    1558,  1559,     0,     0,     0,     0,  1560,  1561,     0,  1562,
    1563,  1564,  1565,     0,     0,  1566,     0,  2077,  1568,  1569,
    1570,     0,  1571,     0,  1572,  1573,     0,  1574,     0,  1575,
    1576,     0,  1577,  1578,  1579,  1580,     0,     0,     0,     0,
       0,  1581,     0,  1582,     0,  1583,  1584,     0,  1585,  1586,
    1587,  1588,  1589,  1590,     0,  1591,  1592,  1593,  1594,  1595,
       0,     0,     0,     0,     0,     0,     0,     0,  1596,     0,
    1597,     0,  1598,     0,     0,     0,     0,     0,     0,     0,
       0,  1599,     0,  1600,  1601,  1602,  1603,  1604,  1605,  1606,
       0,     0,  1607,  1608,     0,     0,     0,     0,  1609,     0,
    1610,  1611,  1612,     0,  1613,     0,  1614,     0,  1615,  1616,
    1617,  1618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1619,  1620,  1621,     0,     0,
       0,     0,     0,     0,     0,  1622,     0,  1623,  1624,  1625,
       0,     0,     0,     0,  1626,     0,  1627,  1628,  1629,     0,
       0,     0,  1630,     0,     0,     0,  1631,  1632,     0,  1633,
    1634,  1635,  1636,     0,     0,     0,  1637,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,     0,   938,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1638,  1639,  1640,
    1641,  1642,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,     0,   940,  1519,
    1520,  1521,  1522,  1523,  1524,     0,  1525,     0,  1526,     0,
       0,     0,  1527,  1528,  1529,     0,  1530,     0,     0,     0,
    1531,  1532,  1533,  1534,  1535,     0,     0,     0,     0,  1643,
    1644,  1645,  1646,  1647,  1536,  1648,     0,     0,     0,  1537,
    1538,     0,     0,  1539,     0,     0,     0,     0,  1540,  1541,
    1542,  1543,  1544,     0,     0,  1545,     0,  1546,  1547,  1548,
       0,     0,  1549,  1550,     0,  1551,  1552,  1553,     0,     0,
       0,  1554,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1555,     0,     0,     0,     0,
    1556,     0,     0,     0,     0,  1557,  1558,  1559,     0,     0,
       0,     0,  1560,  1561,     0,  1562,  1563,  1564,  1565,     0,
       0,  1566,     0,  2109,  1568,  1569,  1570,     0,  1571,     0,
    1572,  1573,     0,  1574,     0,  1575,  1576,     0,  1577,  1578,
    1579,  1580,     0,     0,     0,     0,     0,  1581,     0,  1582,
       0,  1583,  1584,     0,  1585,  1586,  1587,  1588,  1589,  1590,
       0,  1591,  1592,  1593,  1594,  1595,     0,     0,     0,     0,
       0,     0,     0,     0,  1596,     0,  1597,     0,  1598,     0,
       0,     0,     0,     0,     0,     0,     0,  1599,     0,  1600,
    1601,  1602,  1603,  1604,  1605,  1606,     0,     0,  1607,  1608,
       0,     0,     0,     0,  1609,     0,  1610,  1611,  1612,     0,
    1613,     0,  1614,     0,  1615,  1616,  1617,  1618,     0,     0,
       0,     0,     0,     0,   159,   160,   161,   162,   163,   164,
       0,  1619,  1620,  1621,     0,     0,     0,     0,   165,   166,
       0,  1622,     0,  1623,  1624,  1625,   167,   168,     0,     0,
    1626,     0,  1627,  1628,  1629,     0,     0,     0,  1630,   169,
       0,     0,  1631,  1632,     0,  1633,  1634,  1635,  1636,     0,
       0,     0,  1637,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,     0,     0,     0,
       0,   171,     0,     0,   172,   173,     0,     0,     0,     0,
     944,     0,     0,   174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1638,  1639,  1640,  1641,  1642,     0,     0,
     175,     0,     0,     0,   176,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   946,   497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1643,  1644,  1645,  1646,  1647,
       0,  1648,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   178,     0,     0,   475,   476,
     477,   478,   479,   480,   481,   179,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,     0,   497,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   180,     0,     0,     0,     0,     0,     0,
     181,   182,     0,     0,     0,   183,     0,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     184,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   223,     0,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,     0,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   272,
     273,   274,     0,     0,     0,     0,   275,   276,   277,   278,
       0,     0,   279,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,   165,   166,     0,
       0,     0,     0,     0,     0,   167,   475,   476,   477,   478,
     479,   480,   481,     0,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,     0,     0,     0,     0,     0,     0,   651,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,     0,
     171,     0,     0,   172,   173,   475,   476,   477,   478,   479,
     480,   481,   174,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   652,
       0,   951,     0,     0,   178,     0,     0,   475,   476,   477,
     478,   479,   480,   481,   179,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   475,   476,   477,   478,   479,   480,   481,
     952,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,     0,   497,     0,     0,
     653,     0,     0,     0,     0,     0,     0,     0,     0,   184,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,   223,     0,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,     0,     0,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,     0,   271,   272,   273,
     274,     0,     0,     0,     0,   275,   276,   277,   278,     0,
       0,   279,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,     0,     0,     0,     0,   165,   166,     0,   953,
       0,     0,     0,     0,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,   763,
       0,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   170,   497,     0,     0,   954,   171,
       0,     0,   172,   173,     0,     0,     0,     0,     0,     0,
       0,   174,     0,     0,     0,     0,   475,   476,   477,   478,
     479,   480,   481,   966,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,   475,   476,   477,   478,   479,   480,   481,   967,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,   475,   476,   477,   478,
     479,   480,   481,     0,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     968,     0,     0,   178,     0,     0,   475,   476,   477,   478,
     479,   480,   481,   179,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,     0,     0,     0,     0,   970,     0,     0,     0,
     475,   476,   477,   478,   479,   480,   481,   764,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,   223,     0,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,     0,     0,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,   272,   273,   274,
       0,     0,     0,     0,   275,   276,   277,   278,     0,     0,
     765,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,   165,   166,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,   475,   476,   477,
     478,   479,   480,   481,   981,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,     0,     0,     0,     0,   171,     0,
       0,   172,   173,     0,     0,     0,     0,     0,     0,   990,
     174,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   991,   497,   475,   476,   477,   478,
     479,   480,   481,     0,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   992,
     497,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   993,
       0,     0,   178,     0,     0,   475,   476,   477,   478,   479,
     480,   481,   179,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,     0,   994,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   375,     0,
       0,     0,     0,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,   223,     0,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,     0,     0,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,     0,   271,   272,   273,   274,     0,
       0,     0,     0,   275,   276,   277,   278,     0,     0,   279,
     159,   160,   161,   162,   163,   164,     0,     0,     0,     0,
       0,     0,     0,     0,   165,   166,     0,     0,     0,     0,
     995,     0,   167,   692,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,     0,     0,     0,   171,     0,     0,
     172,   173,     0,     0,   996,     0,     0,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   477,   478,   479,   480,   481,   997,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,   475,   476,   477,
     478,   479,   480,   481,  1003,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,     0,  1007,     0,
       0,   178,     0,     0,   475,   476,   477,   478,   479,   480,
     481,   179,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,  1155,   497,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   184,   497,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,     0,   223,     0,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,     0,     0,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,     0,   271,   272,   273,   274,     0,     0,
       0,     0,   275,   276,   277,   278,     0,     0,   279,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,   165,   166,     0,     0,  1383,     0,     0,
       0,   167,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,     0,     0,     0,     0,   171,     0,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,   174,     0,
       0,     0,     0,     0,     0,  1384,     0,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
    1395,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   920,     0,     0,   475,   476,
     477,   478,   479,   480,   481,  1405,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,     0,   497,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1421,     0,     0,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,   475,   476,   477,   478,   479,
     480,   481,  1422,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   223,     0,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,     0,     0,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,   271,   272,   273,   274,     0,     0,     0,
       0,   275,   276,   277,   278,     0,     0,   279,   159,   160,
     161,   162,   163,   164,     0,     0,     0,     0,     0,     0,
       0,     0,   165,   166,     0,  1423,     0,     0,     0,     0,
     167,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,     0,     0,     0,     0,   171,     0,     0,   172,   173,
       0,     0,     0,     0,     0,     0,     0,   174,     0,     0,
    1426,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   475,   476,   477,   478,   479,   480,
     481,  1356,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,     0,
       0,  1427,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,  -678,  -678,  -678,
    -678,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,   178,
       0,     0,     0,     0,     0,     0,     0,     0,  1886,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   475,   476,   477,   478,   479,
     480,   481,   941,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   184,   497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
     223,     0,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,     0,   271,   272,   273,   274,     0,     0,     0,     0,
     275,   276,   277,   278,     0,     0,   279,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,   165,   166,   945,     0,     0,     0,     0,     0,   167,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,     0,   171,     0,     0,   172,   173,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   947,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   948,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
     475,   476,   477,   478,   479,   480,   481,   949,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,   475,   476,   477,   478,
     479,   480,   481,   958,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,   223,
       0,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,     0,
       0,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
       0,   271,   272,   273,   274,     0,     0,     0,     0,   275,
     276,   277,   278,     0,     0,   279,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   166,   959,     0,     0,     0,     0,     0,   167,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   170,     0,
       0,     0,     0,   171,     0,     0,   172,   173,   475,   476,
     477,   478,   479,   480,   481,   174,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,     0,   497,     0,     0,     0,     0,     0,     0,  1843,
     475,   476,   477,   478,   479,   480,   481,   960,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,   475,   476,   477,   478,   479,
     480,   481,   961,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,   962,     0,     0,     0,     0,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   475,   476,   477,   478,   479,   480,   481,   963,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,   475,   476,   477,   478,
     479,   480,   481,     0,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,   184,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,   223,     0,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,     0,     0,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,     0,
     271,   272,   273,   274,     0,     0,     0,     0,   275,   276,
     277,   278,     0,     0,   279,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,     0,     0,     0,     0,   165,
     166,   964,     0,     0,     0,     0,     0,   167,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,     0,   497,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,     0,     0,
     965,     0,   171,     0,     0,   172,   173,   475,   476,   477,
     478,   479,   480,   481,   174,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,   969,     0,     0,     0,     0,     0,  1845,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     475,   476,   477,   478,   479,   480,   481,   982,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,     0,     0,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   179,     0,     0,     0,
       0,     0,     0,   983,     0,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   984,   497,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,     0,     0,     0,     0,
       0,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,   223,     0,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,     0,     0,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,     0,   271,
     272,   273,   274,     0,     0,     0,     0,   275,   276,   277,
     278,     0,     0,   279,   159,   160,   161,   162,   163,   164,
       0,     0,     0,     0,     0,     0,     0,     0,   165,   166,
     985,     0,     0,     0,     0,     0,   167,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,     0,     0,   986,
       0,   171,     0,     0,   172,   173,   475,   476,   477,   478,
     479,   480,   481,   174,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,     0,     0,     0,   475,   476,   477,   478,   479,
     480,   481,   987,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
     475,   476,   477,   478,   479,   480,   481,   988,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,     0,   497,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,     0,   989,     0,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,  1000,   497,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   223,     0,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,     0,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   272,
     273,   274,     0,     0,     0,     0,   275,   276,   277,   278,
       0,     0,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   477,   478,   479,   480,   481,  1001,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,     0,     0,     0,     0,     0,  1002,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,     0,     0,     0,  1006,     0,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,  1030,   497,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,   475,   476,   477,   478,   479,   480,
     481,  1375,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,   475,
     476,   477,   478,   479,   480,   481,  1380,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,  1381,     0,   475,   476,   477,   478,
     479,   480,   481,     0,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,  1382,
     497,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,     0,     0,     0,     0,
       0,  1385,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     0,   497,     0,     0,     0,
       0,  1386,     0,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,  1387,   497,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,  1388,   497,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,  1389,   497,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,  1390,   497,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,  1393,   497,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,  1394,   497,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,  1406,   497,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,  1407,   497,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,  1420,   497,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,  1424,   497,   475,   476,   477,   478,   479,   480,   481,
       0,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,     0,   497,  1425,     0,
     475,   476,   477,   478,   479,   480,   481,     0,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,  1434,   497,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,     0,     0,  1435,   475,   476,   477,   478,   479,
     480,   481,     0,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,     0,   497,
       0,     0,     0,     0,     0,  1503,     0,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
    1701,   497,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,  1765,   497,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
    1822,   497,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,  1851,   497,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
    1852,   497,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,  1853,   497,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
    1854,   497,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,  1855,   497,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
    1864,   497,   475,   476,   477,   478,   479,   480,   481,     0,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,  1881,   497,   475,   476,   477,
     478,   479,   480,   481,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,  1882,     0,   475,   476,   477,   478,   479,   480,
     481,     0,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,  1883,   497,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,     0,     0,     0,  1884,   475,   476,
     477,   478,   479,   480,   481,     0,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,     0,   497,     0,     0,     0,     0,     0,     0,  1885,
       0,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,  1887,   497,  1702,  1703,     0,  1257,
       0,  1704,     0,  1705,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1258,  1888,
       1,     0,  1259,     0,     2,  1260,     0,  1261,     0,     0,
    1262,     0,     0,     0,     0,     0,  1706,  1707,     0,  1708,
       0,     0,     0,     0,  1910,  1263,     3,     0,     0,     0,
       0,     4,  1264,  1265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,  1916,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     7,  1266,     0,     0,
       0,     0,     0,     0,  1920,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1267,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   477,   478,   479,   480,   481,  1925,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,     8,   497,     0,  1268,     0,
       0,     0,     0,     0,  2027,     0,     9,    10,    11,     0,
       0,   554,   555,     0,   556,     0,   557,   558,     0,     0,
       0,     0,  1709,  1710,     0,  1269,     0,   908,     0,  2050,
       0,     0,   559,  1270,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,     0,     0,     0,     0,     0,
       0,     0,    14,     0,  2063,     0,     0,     0,     0,     0,
    1153,     0,     0,     0,   560,   561,   562,   563,     0,     0,
       0,    15,    16,   564,     0,     0,     0,     0,     0,  2073,
       0,     0,   565,     0,     0,     0,    17,     0,  1271,    18,
       0,  1161,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,   566,     0,     0,     0,  2074,     0,     0,     0,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   568,     0,     0,     0,     0,     0,     0,
     569,     0,     0,   570,     0,     0,   571,   572,     0,     0,
       0,     0,     0,     0,     0,     0,   475,   476,   477,   478,
     479,   480,   481,   573,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   574,   575,     0,     0,   576,   577,     0,     0,
       0,     0,   578,     0,   579,     0,     0,     0,     0,   580,
     581,     0,     0,     0,     0,   582,     0,   583,     0,     0,
       0,     0,     0,   584,     0,   585,     0,     0,     0,     0,
     586,   475,   476,   477,   478,   479,   480,   481,     0,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,   475,   476,   477,   478,
     479,   480,   481,  1152,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,     0,
     497,     0,   474,     0,     0,     0,     0,     0,  1680,   475,
     476,   477,   478,   479,   480,   481,     0,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,     0,   497,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   498,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1367,     0,
       0,     0,     0,     0,   475,   476,   477,   478,   479,   480,
     481,  1681,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,     0,   497,     0,
       0,   475,   476,   477,   478,   479,   480,   481,   950,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,     0,   497,     0,   475,   476,   477,
     478,   479,   480,   481,  1016,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
       0,   497,     0,   475,   476,   477,   478,   479,   480,   481,
    1219,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,     0,   497
};

static const yytype_int16 yycheck[] =
{
      91,  1242,   295,   620,  1082,  1034,  1109,  1333,   286,  1350,
    1045,  1046,  1671,   289,  1049,    34,   337,   517,  1335,  1097,
    1459,   845,   846,    41,     5,   129,  1104,   851,     4,   853,
       8,    20,    20,   906,   903,   129,   905,     6,    90,     3,
       4,     5,     6,     7,     8,    10,  1130,   147,     3,     3,
      71,    34,   226,    83,   190,     3,     3,     3,   152,     3,
     259,   190,    42,   154,   155,   289,     3,    80,     4,  1665,
      16,    67,     3,    67,   165,   166,   167,   353,    44,   252,
     171,     3,    10,    11,    12,    13,    14,    15,    16,    44,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     3,    34,   207,     3,     4,
       5,     6,     7,     8,    48,   100,     4,     5,     6,     7,
    1724,  1725,   188,    88,   259,   105,   195,    42,    18,     3,
      95,  1735,  1736,     3,   132,  1461,  2113,  1010,   226,   534,
     210,    10,    11,    12,    13,    14,    15,    16,   238,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   781,    34,   131,   132,   238,   252,
     188,   192,  2149,  2150,   373,     3,     3,    65,     3,   796,
      78,   147,     3,   148,     3,   254,   252,   183,   279,   183,
     105,     5,  1409,  1410,   589,   193,   214,   143,  2175,   373,
     373,  1418,  1419,   255,    78,   201,   160,   201,     3,     3,
    1254,  1255,   160,   160,   244,   184,   160,     3,   149,    37,
     184,  1256,   235,   160,   500,  1303,   247,   149,   193,  1273,
     226,     3,   226,  1336,    52,   213,  1314,   373,   373,   175,
     186,   207,    56,  1321,   373,   210,   222,   223,   213,  1315,
      44,   149,  1856,  1857,  1858,  1859,  1860,  1861,  1697,   244,
       6,   227,  1346,    88,   133,   199,  1870,   232,   233,   373,
    1874,   371,    18,   227,  1878,   149,  1145,   894,  1147,   373,
     371,   262,   247,   371,   375,   175,   356,   106,   371,   184,
    1949,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   802,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   336,   410,
     411,   412,   149,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
    1666,  1667,   226,   619,  1217,   436,   437,   100,     3,     3,
     441,   442,  1948,   372,   149,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,    18,   469,   470,
     471,   370,   370,   238,   475,   476,   477,   478,   479,   372,
     370,   356,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   631,   372,  1750,
     634,   502,   366,   808,   809,   370,   507,   371,   366,   366,
    1449,   816,   366,   371,   371,   649,  1470,   371,  1494,   366,
     318,   319,   320,   147,   371,  1513,     3,  1515,   184,   262,
    1506,   129,   312,   313,   314,   315,   374,   252,   238,    90,
       3,  2055,   252,   252,   259,  2059,   106,    47,    48,   252,
    1284,     3,  1286,  1287,   252,   100,     3,   862,   863,   864,
     106,   361,   362,   363,   364,  1541,    91,    67,   168,   216,
       3,   234,    64,   371,   227,   130,  1552,   371,    18,    71,
       3,    44,     5,   207,   149,   149,  1837,  1714,  1715,  1716,
    1717,  1718,  1719,   372,  1821,  2151,  1572,   244,   786,  1726,
     831,   832,  1753,  1730,   257,   150,   206,  1734,  2122,  2123,
    1586,  2125,  2126,   126,    71,    71,   617,   142,   252,  1595,
    2176,  2177,   238,   174,   184,    14,     5,  1037,     3,    18,
    1040,    64,     0,   231,   147,   127,   191,   188,   184,   131,
     373,    20,   643,   644,    77,   950,   951,   648,   304,  2205,
      90,   117,   118,   369,   655,   370,   148,   791,   373,  1635,
       3,   371,   371,  1651,     3,   157,   221,   207,   371,  1657,
     127,   127,   149,   371,    10,    11,    12,    13,    14,    15,
      16,   884,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   149,    34,   244,
     192,   201,   149,  1230,     3,    10,    11,    12,    13,    14,
      15,    16,   336,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     3,    34,
      93,  1676,   117,   118,   174,   192,   192,   371,    77,     3,
     253,   245,  1047,  1994,    18,    96,   370,   371,   188,    63,
     113,     9,     3,    67,   129,   247,   757,   758,   371,   760,
      34,   265,    20,    36,   765,    10,    11,    12,    13,    14,
      15,    16,   147,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   139,    34,
     247,   247,   167,    96,   260,    68,   147,    71,    64,   227,
      64,  2052,    77,     3,  1817,    44,   120,     3,   148,    80,
    1786,    77,  1800,    77,    53,  1791,   167,   157,     3,   194,
      93,    92,   149,  1811,   129,  1813,    26,  1030,   101,   257,
      26,  2067,   106,    44,   370,   371,   139,  1023,    44,    44,
     113,     3,    53,   238,   147,   570,  1997,    53,    53,   152,
     148,   576,     3,   578,     3,  1982,     3,   128,   859,  1986,
      13,    14,   232,    16,   167,   136,    19,   372,   373,  2120,
      30,    31,    32,     3,    34,   260,   148,  1011,    88,    10,
      11,    12,    13,    14,    15,    16,  1020,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   164,    34,   373,   178,     3,   908,     3,   910,
       3,    31,    32,   184,    34,   373,   917,   918,     3,   920,
      75,    76,   132,   924,   372,   373,   199,   372,   373,   370,
     931,   932,   933,   934,   266,   936,   937,   938,   148,     3,
     372,   373,   943,   944,    44,   946,  1922,   372,   373,     4,
       5,   952,   953,   954,  1942,  1894,     3,   228,   372,   373,
     372,   373,  1938,   372,   373,   966,   967,   968,   371,   970,
     306,  2098,  2099,   266,  2101,  2102,   372,   373,   372,   373,
     981,   188,   255,   193,   372,   373,     3,  1121,   371,   990,
     991,   992,   993,   994,   995,   996,   997,     3,   999,   371,
     210,   370,  1003,   213,  1005,     3,  1007,   266,    26,    27,
      28,    29,    30,    31,    32,  1016,    34,  1018,  1019,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   238,    34,
    1031,   372,   373,  1338,     3,  2011,   372,  1038,    10,    11,
      12,    13,    14,    15,    16,   266,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     4,    34,   372,   373,   266,   838,   839,   373,   841,
     842,   843,   372,   373,   266,   847,   848,   849,   266,  1080,
     852,   372,   373,   266,  1218,   372,   373,  1221,   266,  1223,
     231,  1225,     4,     5,     3,    10,    11,    12,    13,    14,
      15,    16,     8,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     9,    34,
     372,   373,   372,   373,   372,   373,   370,   372,   373,   372,
     373,   372,   373,   371,  1135,   372,   373,  1138,   372,   373,
     372,   373,    34,  1144,   372,   373,   356,   372,   373,   372,
     373,   371,  1153,   371,  1155,   372,   373,   372,   373,   371,
    1161,  1162,    10,    11,    12,    13,    14,    15,    16,   371,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   371,    34,   371,    10,    11,
      12,    13,    14,    15,    16,   371,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    44,    34,    12,    13,    14,    15,    16,  1219,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   371,    34,   372,   373,   372,   373,
     373,   372,   373,   371,  1245,   372,   373,   372,   373,  1250,
     371,    10,    11,    12,    13,    14,    15,    16,   371,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    46,    34,   372,   373,   372,   373,
     372,   373,   372,   373,   371,    10,    11,    12,    13,    14,
      15,    16,   371,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   371,    34,
     371,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    69,    34,  1328,   371,    55,
     372,   373,   371,    59,   372,   373,   372,   373,   371,    10,
      11,    12,    13,    14,    15,    16,   371,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    80,    34,   372,   373,    50,    51,   372,   373,
    1371,   372,   373,  1374,    92,   372,   373,   372,   373,   372,
     373,   107,  1383,  1384,   110,   372,   373,   372,   373,   372,
     373,   372,   373,   371,  1395,    50,    51,   370,   371,   125,
     372,   373,   146,  1404,  1405,   372,   373,   370,   371,   371,
     128,   371,   156,   372,   373,   372,   373,   371,   136,   145,
    1421,  1422,  1423,   371,   168,  1426,  1427,   153,  1429,   371,
    1431,   371,  1433,   372,   373,   372,   373,   181,   372,   373,
     798,   799,  1027,  1028,  1453,  1454,  1447,  1448,   371,   371,
     371,   371,   371,    18,   371,  1456,  1457,   372,   373,    46,
     371,   371,   206,   371,   371,    64,   184,   371,   371,   371,
     371,   371,   371,  1474,   371,   371,    41,  1478,   371,    44,
     224,    46,   371,   371,    49,   371,   371,  1488,   557,   558,
     559,   560,   371,   562,   371,   371,   565,   566,   567,    64,
     371,  1502,   371,   572,   573,   574,    71,    72,   577,   235,
     228,   237,   371,   371,     3,     4,     5,     6,     7,     8,
     371,    10,   371,    12,   372,   373,   371,    16,    17,    18,
     256,    20,   371,   371,   371,    24,    25,    26,    27,    28,
     371,   106,   371,   371,   262,   371,   371,   371,   371,    38,
     372,   373,   371,   371,    43,    44,   371,   371,    47,   371,
     371,   371,   371,    52,    53,    54,    55,    56,   371,   371,
      59,   371,    61,    62,    63,   371,   371,    66,    67,   371,
      69,    70,    71,   371,   371,   371,    75,   371,   371,   371,
     371,   371,   157,   371,   371,   371,    64,    64,   262,   231,
      89,     3,     3,     3,   188,    94,     3,   188,   266,     3,
      99,   100,   101,   372,   373,   188,   266,   106,   107,   184,
     109,   110,   111,   112,     3,     3,   115,   192,   117,   118,
     119,   120,     3,   122,    26,   124,   125,     3,   127,     3,
     129,   130,     3,   132,   133,   134,   135,   372,   373,     3,
       3,     3,   141,   371,   143,     3,   145,   146,     3,   148,
     149,   150,   151,   152,   153,     3,   155,   156,   157,   158,
     159,    34,     3,     3,   374,   372,   372,   372,   372,   168,
     372,   170,   247,   172,   372,  1686,  1687,   372,     5,   372,
     372,  1692,   181,  1694,   183,   184,   185,   186,   187,   188,
     189,   372,   373,   192,   193,   372,   372,   372,   371,   198,
     372,   200,   201,   202,     3,   204,   372,   206,   372,   208,
     209,   210,   211,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     3,    34,   225,   226,   227,     3,
       3,   372,     3,   156,   187,     3,   235,     3,   237,   238,
     239,     3,     3,     3,     3,   244,     3,   246,   247,   248,
       3,     3,     3,   252,     3,   231,     3,   256,   257,     3,
     259,   260,   261,   262,     3,     5,     3,   266,    10,    11,
      12,    13,    14,    15,    16,   364,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     5,    34,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     5,    34,  1818,   307,   308,
     309,   310,   311,    10,    11,    12,    13,    14,    15,    16,
     371,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,  1847,    34,   371,   371,
     371,    57,   371,   371,   371,    10,    11,    12,    13,    14,
      15,    16,  1863,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     3,    34,
     369,   370,   371,   372,   373,  1886,   375,     3,     3,     3,
    1891,   372,     3,   373,     3,   188,   372,   188,     3,  1900,
     188,     3,     4,     5,     6,     7,     8,   266,    10,     3,
      12,   189,  1913,  1914,    16,    17,    18,     3,    20,     3,
     372,   372,    24,    25,    26,    27,    28,   227,   372,   335,
     335,   335,   372,   227,   371,   371,    38,   335,   371,   335,
     371,    43,    44,   129,   373,    47,   157,   157,   157,   156,
      52,    53,    54,    55,    56,   188,   156,    59,     3,    61,
      62,    63,    34,     3,    66,    67,   231,    69,    70,    71,
       5,   231,     5,    75,     5,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   172,    34,    89,     4,   184,
       5,     5,    94,   374,   371,   371,   204,    99,   100,   101,
     254,     3,     3,   188,   106,   107,     3,   109,   110,   111,
     112,     3,   188,   115,    87,   117,   118,   119,   120,     3,
     122,     3,   124,   125,    56,   127,   170,   129,   130,    20,
     132,   133,   134,   135,   371,    84,   190,  2038,   374,   141,
     372,   143,   154,   145,   146,     4,   148,   149,   150,   151,
     152,   153,   335,   155,   156,   157,   158,   159,   335,   335,
     335,   335,   335,   371,   371,   371,   168,   335,   170,     5,
     172,     5,   134,   335,   371,   371,   335,   227,     3,   181,
     133,   183,   184,   185,   186,   187,   188,   189,   372,     3,
     192,   193,     3,   157,   157,     3,   198,     3,   200,   201,
     202,   371,   204,    71,   206,   371,   208,   209,   210,   211,
       3,   254,    53,   133,   254,   372,  2117,   372,   188,   372,
       3,     3,     3,   225,   226,   227,   372,   371,   157,   157,
       3,   371,     4,   235,     4,   237,   238,   239,     6,     4,
     372,   373,   244,   371,   246,   247,   248,   371,   371,   371,
     252,   371,   371,   203,   256,   257,   371,   259,   260,   261,
     262,   373,   157,     3,   266,     3,   371,    56,   371,   141,
     372,   372,    20,   372,   371,   371,   156,   371,   371,    10,
      11,    12,    13,    14,    15,    16,   373,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   371,    34,   371,   307,   308,   309,   310,   311,
     371,   371,   371,     3,   372,   372,   372,   372,   373,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   371,    34,   372,   372,   371,     3,     4,     5,
       6,     7,     8,   371,    10,   371,    12,   371,   371,     3,
      16,    17,    18,   184,    20,     3,    45,     3,    24,    25,
      26,    27,    28,   371,   371,   371,     4,   369,   370,   371,
     372,   373,    38,   375,   371,   204,     5,    43,    44,   157,
     157,    47,   226,     4,     4,     3,    52,    53,    54,    55,
      56,   371,     3,    59,     3,    61,    62,    63,     3,     3,
      66,    67,   371,    69,    70,    71,   371,   254,   111,    75,
     371,   254,     3,   133,   371,   371,   371,     3,   244,   371,
      20,   188,   373,    89,     4,   336,   335,   335,    94,   372,
     372,   372,     3,    99,   100,   101,   372,     3,   372,     3,
     106,   107,     3,   109,   110,   111,   112,   371,     5,   115,
       5,   117,   118,   119,   120,    44,   122,    53,   124,   125,
     372,   127,     4,   129,   130,   371,   132,   133,   134,   135,
      53,   371,   371,   208,   372,   141,   372,   143,   372,   145,
     146,   371,   148,   149,   150,   151,   152,   153,   373,   155,
     156,   157,   158,   159,   371,   371,   254,   257,   371,   157,
     157,   371,   168,     3,   170,    81,   172,   373,   371,    56,
     372,   189,   372,   371,   371,   181,   372,   183,   184,   185,
     186,   187,   188,   189,   372,     3,   192,   193,    20,   260,
     372,    18,   198,     3,   200,   201,   202,   372,   204,   371,
     206,   371,   208,   209,   210,   211,     3,   157,   372,   372,
      53,   371,   129,   371,   371,     3,     3,    56,    56,   225,
     226,   227,     3,     3,   371,     3,    56,   372,   372,   235,
     372,   237,   238,   239,   335,   372,   335,   372,   244,   335,
     246,   247,   248,   335,   133,     3,   252,   372,   205,     3,
     256,   257,   255,   259,   260,   261,   262,   198,     3,     5,
     266,    10,    11,    12,    13,    14,    15,    16,     5,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    53,    34,   372,    70,   124,   149,
     159,   261,   371,   198,     5,   195,    20,   373,     3,    94,
     372,   307,   308,   309,   310,   311,    10,    11,    12,    13,
      14,    15,    16,   372,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   373,
      34,     3,   372,     3,     4,     5,     6,     7,     8,   372,
      10,   372,    12,   152,   372,   372,    16,    17,    18,   371,
      20,   371,     3,   372,    24,    25,    26,    27,    28,   371,
     371,     5,   372,   369,   370,   371,   372,   373,    38,   375,
     372,   372,     3,    43,    44,     3,     3,    47,   371,   371,
     371,     3,    52,    53,    54,    55,    56,     3,   373,    59,
     371,    61,    62,    63,   217,   217,    66,    67,   372,    69,
      70,    71,   198,     3,     3,    75,     3,    20,     3,     3,
     372,   171,   171,   372,     3,   231,     3,   373,     3,    89,
     372,   226,   215,   371,    94,   372,   372,     3,   371,    99,
     100,   101,   371,     5,   372,   372,   106,   107,   372,   109,
     110,   111,   112,     3,   372,   115,   214,   117,   118,   119,
     120,     5,   122,   372,   124,   125,   371,   127,     3,   129,
     130,   144,   132,   133,   134,   135,    90,   257,   165,   236,
     188,   141,   188,   143,   182,   145,   146,     5,   148,   149,
     150,   151,   152,   153,   182,   155,   156,   157,   158,   159,
       5,    98,  1155,  1019,   923,   376,  1450,   502,   168,  1754,
     170,  1685,   172,   511,  1249,  1025,   123,   621,  2139,    86,
     365,   181,   904,   183,   184,   185,   186,   187,   188,   189,
    1348,  1847,   192,   193,   633,  1817,  2181,  1325,   198,  1337,
     200,   201,   202,   850,   204,   158,   206,   866,   208,   209,
     210,   211,  1492,   345,   551,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   237,   238,   239,
      -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,
      -1,    -1,   252,    -1,    -1,    -1,   256,   257,    -1,   259,
     260,   261,   262,    -1,    -1,    -1,   266,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,
     310,   311,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   372,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,   369,
     370,   371,   372,   373,    38,   375,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,    -1,   109,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,    -1,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,   192,   193,
      -1,    -1,    -1,    -1,   198,    -1,   200,   201,   202,    -1,
     204,    -1,   206,    -1,   208,   209,   210,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
     244,    -1,   246,   247,   248,    -1,    -1,    -1,   252,    -1,
      -1,    -1,   256,   257,    -1,   259,   260,   261,   262,    -1,
      -1,    -1,   266,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,   308,   309,   310,   311,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   372,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,   369,   370,   371,   372,   373,
      38,   375,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
      -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,    -1,   124,   125,    -1,   127,
      -1,   129,   130,    -1,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,
     198,    -1,   200,   201,   202,    -1,   204,    -1,   206,    -1,
     208,   209,   210,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   237,
     238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,
     248,    -1,    -1,    -1,   252,    -1,    -1,    -1,   256,   257,
      -1,   259,   260,   261,   262,    -1,    -1,    -1,   266,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   373,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
     308,   309,   310,   311,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     372,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   369,   370,   371,   372,   373,    38,   375,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,    -1,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
     192,   193,    -1,    -1,    -1,    -1,   198,    -1,   200,   201,
     202,    -1,   204,    -1,   206,    -1,   208,   209,   210,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,   226,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,   237,   238,   239,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
     252,    -1,    -1,    -1,   256,   257,    -1,   259,   260,   261,
     262,    -1,    -1,    -1,   266,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,   372,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,   369,   370,   371,
     372,   373,    38,   375,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,
     106,   107,    -1,   109,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,    -1,   124,   125,
      -1,   127,    -1,   129,   130,    -1,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,   198,    -1,   200,   201,   202,    -1,   204,    -1,
     206,    -1,   208,   209,   210,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
     226,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,
     246,   247,   248,    -1,    -1,    -1,   252,    -1,    -1,    -1,
     256,   257,    -1,   259,   260,   261,   262,    -1,    -1,    -1,
     266,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   373,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,   308,   309,   310,   311,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   372,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,   369,   370,   371,   372,   373,    38,   375,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    61,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
     100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,
     110,   111,   112,    -1,    -1,   115,    -1,   117,   118,   119,
     120,    -1,   122,    -1,   124,   125,    -1,   127,    -1,   129,
     130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,    -1,   143,    -1,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
     170,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,    -1,
     200,   201,   202,    -1,   204,    -1,   206,    -1,   208,   209,
     210,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   237,   238,   239,
      -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,
      -1,    -1,   252,    -1,    -1,    -1,   256,   257,    -1,   259,
     260,   261,   262,    -1,    -1,    -1,   266,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,
     310,   311,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   372,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,   369,
     370,   371,   372,   373,    38,   375,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,    -1,   109,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,    -1,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,   192,   193,
      -1,    -1,    -1,    -1,   198,    -1,   200,   201,   202,    -1,
     204,    -1,   206,    -1,   208,   209,   210,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
     244,    -1,   246,   247,   248,    -1,    -1,    -1,   252,    -1,
      -1,    -1,   256,   257,    -1,   259,   260,   261,   262,    -1,
      -1,    -1,   266,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,   308,   309,   310,   311,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   372,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,   369,   370,   371,   372,   373,
      38,   375,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
      -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,    -1,   124,   125,    -1,   127,
      -1,   129,   130,    -1,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,
     198,    -1,   200,   201,   202,    -1,   204,    -1,   206,    -1,
     208,   209,   210,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   237,
     238,   239,    -1,    -1,    -1,    -1,   244,    -1,   246,   247,
     248,    -1,    -1,    -1,   252,    -1,    -1,    -1,   256,   257,
      -1,   259,   260,   261,   262,    -1,    -1,    -1,   266,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   373,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
     308,   309,   310,   311,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     372,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   369,   370,   371,   372,   373,    38,   375,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,    -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,    -1,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
     192,   193,    -1,    -1,    -1,    -1,   198,    -1,   200,   201,
     202,    -1,   204,    -1,   206,    -1,   208,   209,   210,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,   226,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,   237,   238,   239,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
     252,    -1,    -1,    -1,   256,   257,    -1,   259,   260,   261,
     262,    -1,    -1,    -1,   266,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,   372,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,   369,   370,   371,
     372,   373,    38,   375,    -1,    -1,    -1,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,
     106,   107,    -1,   109,   110,   111,   112,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,    -1,   124,   125,
      -1,   127,    -1,   129,   130,    -1,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,   198,    -1,   200,   201,   202,    -1,   204,    -1,
     206,    -1,   208,   209,   210,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
     226,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,   237,   238,   239,    -1,    -1,    -1,    -1,   244,    -1,
     246,   247,   248,    -1,    -1,    -1,   252,    -1,    -1,    -1,
     256,   257,    -1,   259,   260,   261,   262,    -1,    -1,    -1,
     266,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,   373,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,   308,   309,   310,   311,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   372,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,   369,   370,   371,   372,   373,    38,   375,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    61,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
     100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,
     110,   111,   112,    -1,    -1,   115,    -1,   117,   118,   119,
     120,    -1,   122,    -1,   124,   125,    -1,   127,    -1,   129,
     130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,    -1,   143,    -1,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
     170,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,    -1,
     200,   201,   202,    -1,   204,    -1,   206,    -1,   208,   209,
     210,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   237,   238,   239,
      -1,    -1,    -1,    -1,   244,    -1,   246,   247,   248,    -1,
      -1,    -1,   252,    -1,    -1,    -1,   256,   257,    -1,   259,
     260,   261,   262,    -1,    -1,    -1,   266,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,
     310,   311,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   372,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,   369,
     370,   371,   372,   373,    38,   375,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,    -1,   109,   110,   111,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,    -1,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
      -1,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,   192,   193,
      -1,    -1,    -1,    -1,   198,    -1,   200,   201,   202,    -1,
     204,    -1,   206,    -1,   208,   209,   210,   211,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,   225,   226,   227,    -1,    -1,    -1,    -1,    17,    18,
      -1,   235,    -1,   237,   238,   239,    25,    26,    -1,    -1,
     244,    -1,   246,   247,   248,    -1,    -1,    -1,   252,    38,
      -1,    -1,   256,   257,    -1,   259,   260,   261,   262,    -1,
      -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
     373,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,   308,   309,   310,   311,    -1,    -1,
      99,    -1,    -1,    -1,   103,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   373,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   369,   370,   371,   372,   373,
      -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   184,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,   224,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     249,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,    -1,   305,    -1,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,    -1,    -1,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    -1,   357,   358,
     359,   360,    -1,    -1,    -1,    -1,   365,   366,   367,   368,
      -1,    -1,   371,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    10,    11,    12,    13,    14,
      15,    16,    82,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,   373,    -1,    -1,   174,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   184,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     373,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,    -1,   305,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,    -1,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,    -1,   357,   358,   359,
     360,    -1,    -1,    -1,    -1,   365,   366,   367,   368,    -1,
      -1,   371,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,   373,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    65,    34,    -1,    -1,   373,    70,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   373,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   373,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     373,    -1,    -1,   174,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   184,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,   373,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   218,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,    -1,   305,    -1,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,    -1,    -1,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,    -1,   357,   358,   359,   360,
      -1,    -1,    -1,    -1,   365,   366,   367,   368,    -1,    -1,
     371,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   373,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,   373,
      82,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   373,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   373,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,
      -1,    -1,   174,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   184,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,   373,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    -1,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,    -1,   305,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,    -1,    -1,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,    -1,   357,   358,   359,   360,    -1,
      -1,    -1,    -1,   365,   366,   367,   368,    -1,    -1,   371,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     373,    -1,    25,    26,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,   373,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   373,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   373,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   373,    -1,
      -1,   174,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   184,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   373,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   249,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,    -1,   305,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,    -1,   357,   358,   359,   360,    -1,    -1,
      -1,    -1,   365,   366,   367,   368,    -1,    -1,   371,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,   373,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,   373,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     373,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   373,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   373,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
      -1,   305,    -1,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,    -1,    -1,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,    -1,   357,   358,   359,   360,    -1,    -1,    -1,
      -1,   365,   366,   367,   368,    -1,    -1,   371,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,   373,    -1,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
     373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   106,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   373,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,   184,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   372,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   249,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    -1,
     305,    -1,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      -1,    -1,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    -1,   357,   358,   359,   360,    -1,    -1,    -1,    -1,
     365,   366,   367,   368,    -1,    -1,   371,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,   372,    -1,    -1,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   372,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,
      10,    11,    12,    13,    14,    15,    16,   372,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    10,    11,    12,    13,
      14,    15,    16,   372,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,    -1,   305,
      -1,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,    -1,
      -1,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
      -1,   357,   358,   359,   360,    -1,    -1,    -1,    -1,   365,
     366,   367,   368,    -1,    -1,   371,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   372,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    10,    11,
      12,    13,    14,    15,    16,    82,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      10,    11,    12,    13,    14,    15,    16,   372,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   372,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,   372,    -1,    -1,    -1,    -1,   184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   372,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,    -1,   305,    -1,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,    -1,    -1,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,    -1,
     357,   358,   359,   360,    -1,    -1,    -1,    -1,   365,   366,
     367,   368,    -1,    -1,   371,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,   372,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
     372,    -1,    70,    -1,    -1,    73,    74,    10,    11,    12,
      13,    14,    15,    16,    82,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,   372,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   372,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    -1,   372,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   372,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,    -1,   305,    -1,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,    -1,    -1,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,   357,
     358,   359,   360,    -1,    -1,    -1,    -1,   365,   366,   367,
     368,    -1,    -1,   371,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
     372,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,   372,
      -1,    70,    -1,    -1,    73,    74,    10,    11,    12,    13,
      14,    15,    16,    82,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   372,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   372,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,    -1,   372,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   372,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,    -1,   305,    -1,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,    -1,    -1,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    -1,   357,   358,
     359,   360,    -1,    -1,    -1,    -1,   365,   366,   367,   368,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   372,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   372,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,   372,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   372,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   372,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   372,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,   372,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   372,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,   372,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,   372,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   372,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   372,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   372,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   372,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   372,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   372,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   372,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   372,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   372,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   372,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,   372,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   372,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,   372,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,   372,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     372,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   372,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     372,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   372,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     372,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   372,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     372,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   372,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     372,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   372,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,   372,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   372,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,   372,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   372,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   372,    34,    97,    98,    -1,    18,
      -1,   102,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,   372,
      35,    -1,    41,    -1,    39,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,
      -1,    -1,    -1,    -1,   372,    64,    61,    -1,    -1,    -1,
      -1,    66,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,   372,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   106,    -1,    -1,
      -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   372,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   150,    34,    -1,   157,    -1,
      -1,    -1,    -1,    -1,   372,    -1,   161,   162,   163,    -1,
      -1,    54,    55,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,   263,   264,    -1,   184,    -1,   239,    -1,   372,
      -1,    -1,    75,   192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,    -1,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,    -1,   372,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    -1,    -1,   107,   108,   109,   110,    -1,    -1,
      -1,   226,   227,   116,    -1,    -1,    -1,    -1,    -1,   372,
      -1,    -1,   125,    -1,    -1,    -1,   241,    -1,   247,   244,
      -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,   145,    -1,    -1,    -1,   372,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,   176,    -1,    -1,   179,   180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   196,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,   226,    -1,    -1,   229,   230,    -1,    -1,
      -1,    -1,   235,    -1,   237,    -1,    -1,    -1,    -1,   242,
     243,    -1,    -1,    -1,    -1,   248,    -1,   250,    -1,    -1,
      -1,    -1,    -1,   256,    -1,   258,    -1,    -1,    -1,    -1,
     263,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   117,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,     3,    -1,    -1,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   105,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    44,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    10,    11,    12,
      13,    14,    15,    16,    43,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    10,    11,    12,    13,    14,    15,    16,
      43,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    61,    66,    79,   100,   101,   150,   161,
     162,   163,   197,   199,   207,   226,   227,   241,   244,   253,
     377,   416,   417,   456,   460,   461,   464,   465,   468,   469,
     470,   471,   472,   473,   475,   491,   492,   501,   504,   506,
     507,   508,   530,   533,   540,   541,   544,   547,   548,   551,
     210,   238,   356,   238,     3,    10,    88,    95,   131,   132,
     148,   193,   210,   213,   232,   233,   247,   356,   512,     3,
     457,    88,   132,   148,   193,   210,   213,   238,   356,   483,
       3,     3,     3,    26,   238,   238,   483,     8,   213,   531,
     532,   435,   238,   483,   502,     3,    88,     0,   369,   467,
       3,     3,     3,     3,   371,   207,   149,   505,     3,   148,
       3,     3,    78,   149,     3,     3,   505,   232,   148,   505,
     238,   493,     3,   129,   147,   167,   194,   458,     3,   149,
       3,   149,     3,     3,   149,     3,   149,     3,   149,     3,
     149,     3,   149,    96,   139,   147,   152,   167,   484,   164,
     373,     3,     3,   484,     9,    20,     3,   106,   373,     3,
       4,     5,     6,     7,     8,    17,    18,    25,    26,    38,
      65,    70,    73,    74,    82,    99,   103,   139,   174,   184,
     212,   219,   220,   224,   249,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   305,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   357,   358,   359,   360,   365,   366,   367,   368,   371,
     378,   436,   437,     3,   147,   167,     3,   160,   366,   371,
     439,   440,   441,   442,   445,   455,     3,   377,    47,    48,
      67,   201,    93,   113,    36,    68,    93,   101,   113,   178,
     199,   255,    48,   199,   549,   370,     3,     4,     5,     6,
       7,     8,   184,   372,   542,   543,   132,   193,   266,     3,
      44,     3,   371,   188,     3,   149,   266,   371,    37,    52,
     545,     3,     3,    78,   149,     3,   505,   371,   494,   370,
     459,     3,   458,   129,   373,   266,   266,   266,   266,   266,
     266,   266,     3,     4,   231,     3,   378,   378,   532,   370,
     371,     9,   378,   378,   378,   260,   378,   415,   370,   371,
      34,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   378,     3,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    34,    44,   438,
     129,   152,   373,   373,   370,   438,   371,   371,   417,   439,
     226,   373,    69,   146,   168,   181,   206,   224,   446,   448,
      44,   444,   444,    46,    46,    64,    77,     3,    77,    64,
       3,    64,    77,    64,     3,    77,     3,    64,    77,    64,
     262,   231,    18,   175,   361,   362,   363,   364,   550,     3,
     372,   373,     3,     3,    54,    55,    57,    59,    60,    75,
     107,   108,   109,   110,   116,   125,   145,   153,   166,   173,
     176,   179,   180,   196,   225,   226,   229,   230,   235,   237,
     242,   243,   248,   250,   256,   258,   263,   526,   188,     3,
      16,   143,   186,   534,   535,   536,     3,   188,   266,     3,
     534,   100,   150,   244,   546,   188,     3,   149,   266,   549,
       3,     3,   495,   129,   231,   496,    26,   259,   418,   252,
     439,     3,     3,     3,     3,     3,     3,     3,     3,   226,
     371,   485,     3,   226,   485,     3,   378,   383,   387,   378,
     378,   415,   117,   118,   260,     3,     3,   374,   385,   392,
     378,    58,   169,   240,   378,   413,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   372,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   372,   378,   378,   378,   372,   378,   378,   378,   378,
     378,   378,    26,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   372,   372,   372,   372,   372,   378,
     378,   372,   372,   372,   378,   378,     5,   372,   372,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   372,   378,   378,   378,   372,   372,   378,   378,   378,
     378,   378,     6,    18,   184,   304,   371,    13,    14,    16,
      19,   378,    38,    40,   218,   371,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
       3,   439,     3,   437,     3,   466,     3,   126,   147,   253,
     452,   443,   378,   372,   372,     3,   503,   440,   168,   206,
     449,   441,   156,   187,   447,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   526,     3,   231,     3,     3,
       3,     5,     3,   364,     5,     5,   262,     5,    56,     5,
     543,   371,   371,   371,   522,   522,   522,   522,   522,   522,
     371,   522,   522,   522,    57,   523,   523,   522,   522,   522,
     371,   523,   522,   523,   371,   371,    18,    34,    71,   106,
       3,   526,     3,     3,     3,   372,   373,   252,   371,     3,
       3,   188,   372,   188,     3,   188,   266,     3,   147,   207,
     336,   370,   371,   528,   529,   372,   373,     4,   222,   223,
     497,   378,   189,   428,   439,   418,   459,     3,   490,     3,
     486,   257,   417,   490,   257,   417,   373,   372,   239,   117,
     118,   378,   378,   372,   378,   384,   417,   129,   373,   372,
     129,   378,   373,   373,   373,   372,   372,   372,   372,   372,
     372,   373,   373,   373,   373,   372,   373,   373,   373,   372,
     372,   372,   372,   373,   373,   372,   373,   372,   372,   372,
      44,   373,   373,   373,   373,   306,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   373,   373,   373,   372,
     373,   335,   335,   335,   372,   373,   372,   373,   372,   335,
     335,   373,   372,   372,   372,   372,   372,   372,   372,   372,
     373,   373,   373,   373,   373,   373,   373,   373,   372,   373,
     372,   372,   372,   373,   372,   373,   372,   373,     6,   184,
     388,   390,   378,   378,   371,   378,    43,   371,   371,   371,
     379,   374,   418,   129,   373,   438,   157,   157,   157,   417,
     372,    20,   370,   373,   418,   447,   447,   156,   188,   441,
     156,    71,   127,   192,   247,   526,   526,     3,   521,   526,
       3,   231,   231,     5,     5,   534,   534,     5,   524,   525,
     524,   524,     4,   527,   524,   524,   524,   525,   525,   524,
     524,   524,   527,   525,   524,   525,     5,     5,   184,   374,
     371,   378,   371,   526,   526,   526,   204,   536,   254,     3,
     312,   313,   314,   315,   462,   463,   252,   371,   188,     3,
      44,    53,     3,   252,   371,     3,     3,   188,    87,     3,
      64,    71,   127,   131,   148,   157,   192,   247,   513,   514,
     520,   444,     3,    80,    92,   128,   136,   184,   228,   262,
     371,   498,   499,   500,    56,   170,   431,   418,    20,   190,
     373,   476,   372,   373,   371,   487,   476,   487,   476,   383,
     378,   378,   117,   239,    84,   373,   374,   372,   378,   378,
     378,   129,   154,   414,   414,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   526,   526,   378,   378,
     378,     4,   335,   335,   335,   335,   335,   335,   378,   378,
     378,   378,   371,   371,   371,   335,     5,   335,     5,   335,
     371,   371,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   383,   417,   389,   391,    43,
     378,   382,   378,   380,   386,   381,   386,   417,   134,   419,
     439,     3,   452,   133,   453,   453,   453,   372,   444,   378,
       3,     3,   428,   441,   378,   188,   252,   450,   451,   441,
     371,   157,   157,   371,   521,   521,   526,    18,    37,    41,
      44,    46,    49,    64,    71,    72,   106,   123,   157,   184,
     192,   247,   474,   521,     3,     3,   372,   372,   372,   373,
     245,   265,    75,    76,   372,   373,   372,   372,   372,    71,
     378,   462,    55,    59,   107,   110,   125,   145,   153,   235,
     237,   256,   537,   371,   371,   371,   371,   371,   372,   373,
     254,   462,     3,   252,   371,    53,   538,   133,   254,   462,
     252,   371,   188,     3,     3,   371,   528,     3,   371,   157,
     148,   157,   371,   371,   157,   371,   372,   373,     3,   417,
       4,    80,   235,     6,     4,     4,   371,   499,   373,     3,
       5,   429,   430,   378,   203,   552,   106,   378,   157,     3,
       3,   106,   378,   489,   373,   476,   476,   117,   378,   371,
     384,   133,   372,   372,   373,   372,   378,   378,   372,   372,
     372,   372,   372,   373,   373,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   373,   372,   371,   371,   371,
     371,   371,   371,   372,   373,   373,   372,   372,   393,   394,
     395,   371,   372,   373,   371,   372,   373,   371,   411,   412,
     372,   373,   373,   373,   372,   372,   373,   373,   372,   373,
     372,   373,   372,   373,   372,   372,   372,   372,   383,   417,
     378,   417,   417,   372,   417,   372,   372,    56,   141,   423,
     418,   156,   371,   371,   371,     3,    20,    20,   370,   431,
     378,   371,   451,   378,   371,   371,     3,   519,   474,   474,
     521,   184,     3,   371,   371,   371,    45,     3,   371,     4,
       4,     5,     6,     7,    65,   318,   319,   320,   371,   157,
     157,   474,   204,    44,    53,     5,   226,     4,   525,     4,
     525,   525,   371,   372,   372,    44,    53,   462,     3,     3,
       3,     3,     3,   371,   372,   371,   254,   462,   538,     3,
       4,     5,     6,     7,     8,    10,    12,    16,    17,    18,
      20,    24,    25,    26,    27,    28,    38,    43,    44,    47,
      52,    53,    54,    55,    56,    59,    61,    62,    63,    66,
      67,    69,    70,    71,    75,    89,    94,    99,   100,   101,
     106,   107,   109,   110,   111,   112,   115,   117,   118,   119,
     120,   122,   124,   125,   127,   129,   130,   132,   133,   134,
     135,   141,   143,   145,   146,   148,   149,   150,   151,   152,
     153,   155,   156,   157,   158,   159,   168,   170,   172,   181,
     183,   184,   185,   186,   187,   188,   189,   192,   193,   198,
     200,   201,   202,   204,   206,   208,   209,   210,   211,   225,
     226,   227,   235,   237,   238,   239,   244,   246,   247,   248,
     252,   256,   257,   259,   260,   261,   262,   266,   307,   308,
     309,   310,   311,   369,   370,   371,   372,   373,   375,   539,
     111,   371,   372,   254,   462,     3,   252,   371,   133,   513,
      71,   127,   192,   247,   378,   371,   371,   371,     3,   434,
     434,   371,   519,   509,   528,   514,   526,   499,   372,   500,
      42,   105,   370,   421,   421,   373,   172,   373,     3,    26,
     553,   244,    20,   372,   373,   488,   188,   478,     4,   378,
     378,   372,    97,    98,   102,   104,   137,   138,   140,   263,
     264,   378,   378,   378,   397,   398,   396,   399,   400,   401,
     378,   378,   336,   424,   424,   424,   402,   335,     4,     5,
     406,   335,     4,     5,   410,   424,   424,   378,   378,   378,
     378,   378,   378,   378,   378,   372,   372,   372,   372,   372,
     378,   420,   378,   428,   419,     3,   454,   454,   454,   371,
     378,   378,     3,   552,   434,   372,     3,   516,     3,   515,
     372,   373,   474,     5,   378,     5,    44,    71,   192,   247,
     378,   371,   371,   371,   378,   537,    53,   538,   372,     4,
     378,    53,   538,   372,   372,   372,   372,   373,   462,   462,
     371,   372,   117,   538,   538,   538,   538,   538,   538,   208,
     462,   371,   372,   371,   254,   462,   257,   372,   371,   157,
     157,   371,   372,   516,   434,   434,   372,   373,   372,   515,
     372,    41,   188,   214,   336,   521,   372,     3,   430,   378,
     378,   373,   477,   106,   378,   106,   378,   371,    81,   552,
     372,   372,   372,   372,   372,   372,   424,   424,   424,   424,
     424,   424,   372,   373,   372,    56,   189,   426,   426,   426,
     424,   371,   372,   372,   424,   371,   372,   372,   424,   426,
     426,   372,   372,   372,   372,   372,   373,   372,   372,   421,
     262,   373,   422,   431,   423,   372,   373,   372,   372,     3,
      20,   372,    18,   372,   373,   372,   373,     3,   372,   373,
     372,   372,   373,   371,   371,   157,   372,   372,   372,   372,
     372,    44,    53,   538,   117,   372,   538,   117,     3,   372,
     372,   462,   117,   117,   117,   117,   117,   117,    53,   372,
     462,   462,   371,   372,   129,   509,   528,   378,   371,   371,
     519,   372,   372,   372,     3,   372,     5,    20,     3,    56,
      56,   421,     3,     3,   482,   489,   371,   479,   426,   426,
     426,   426,   426,   426,   378,     3,   425,    56,   372,   372,
     372,   426,   403,   335,   335,   426,   407,   335,   335,   426,
     372,   372,   378,   205,   378,   133,   432,   428,     3,   372,
     378,   255,   198,     3,     3,     5,    50,    51,     5,   378,
     378,    53,   538,   117,   117,   372,   372,    70,   124,   149,
     159,   261,   538,   372,   372,   462,   371,   372,   516,   515,
     372,   198,     5,   100,   234,   195,   254,   195,    20,   373,
     372,     3,    94,   480,   372,   372,   372,   372,   372,   372,
     372,   373,     3,   427,   372,   424,   371,   371,   372,   424,
     371,   371,   372,   372,   421,   216,   244,   152,   433,   431,
       3,   372,   372,   372,   372,   538,   117,   117,   372,     5,
     372,   372,     3,     3,     3,   371,   371,   371,   378,     3,
     372,   373,    83,   244,     3,   421,   373,   426,   404,   405,
     426,   408,   409,   217,   217,   434,   371,    50,    51,   117,
     372,   198,   370,   371,     3,     3,     3,    20,     3,   481,
       3,   372,   424,   424,   372,   424,   424,   171,   171,     3,
     517,   231,     3,     3,   517,   372,   372,   372,   378,   226,
     421,   426,   426,   426,   426,   372,   373,   371,   370,   371,
     371,   372,   371,   215,   482,   372,   372,   372,   372,   518,
       3,     5,     3,   517,   517,   518,   214,   510,   511,     5,
      18,    90,   174,   188,   372,   371,   372,   372,    18,     3,
     372,   373,    90,   255,   144,   130,   191,   221,   100,   244,
     517,   518,   518,   257,   511,    91,   142,    67,   183,   201,
     226,    67,   183,   201,   226,   372,   165,   106,   184,   106,
     184,   518,   236,     4,   175,   188,   188,   182,   182,     5,
       5
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (scanner, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, scanner); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (scanner);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, void *scanner)
#else
static void
yy_reduce_print (yyvsp, yyrule, scanner)
    YYSTYPE *yyvsp;
    int yyrule;
    void *scanner;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , scanner);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, scanner); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    void *scanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (scanner);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void *scanner);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *scanner)
#else
int
yyparse (scanner)
    void *scanner;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 462 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 468 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 469 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 471 "parser/evoparser.y"
    {
        /* Strip surrounding quotes from the lexer STRING token. */
        char *q = (yyvsp[(7) - (8)].strval);
        size_t qlen = strlen(q);
        if (qlen >= 2 && ((q[0] == '\'' && q[qlen-1] == '\'') ||
                          (q[0] == '"'  && q[qlen-1] == '"'))) {
            q[qlen - 1] = '\0';
            q++;
        }
        emit("MATCH %s AGAINST %s", (yyvsp[(3) - (8)].strval), q);
        (yyval.exprval) = expr_make_match((yyvsp[(3) - (8)].strval), q);
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(7) - (8)].strval));
    ;}
    break;

  case 8:
#line 484 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 486 "parser/evoparser.y"
    {
        char *sv = (yyvsp[(1) - (1)].strval);
        int slen = (int)strlen(sv);
        emit("STRING %s", sv);
        /* Strip surrounding quotes before insertion */
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            char stripped[1024];
            strncpy(stripped, sv + 1, slen - 2);
            stripped[slen - 2] = '\0';
            GetInsertions(stripped);
            (yyval.exprval) = expr_make_string(stripped);
        } else {
            GetInsertions(sv);
            (yyval.exprval) = expr_make_string(sv);
        }
        free(sv);
    ;}
    break;

  case 10:
#line 504 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 512 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 520 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 526 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 533 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 534 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 535 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 536 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 537 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 538 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 539 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 540 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 541 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 542 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 543 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 544 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 545 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 546 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 547 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 548 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 549 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 550 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 551 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 553 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 558 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 559 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("CMPSELECT %d", (yyvsp[(2) - (6)].subtok));
        ExprNode *sub = expr_make_subquery(sql);
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), sub);
        free(sql);
    ;}
    break;

  case 36:
#line 567 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 568 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 569 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 570 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 571 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 572 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 577 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 579 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 582 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 583 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 584 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 585 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 586 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 589 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 590 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 594 "parser/evoparser.y"
    {
        (yyval.intval) = 1;
        int _n = g_expr.inListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            g_expr.inListExprs[_n] = (yyvsp[(1) - (1)].exprval);
            g_expr.inListCount = _n + 1;
        }
    ;}
    break;

  case 52:
#line 603 "parser/evoparser.y"
    {
        (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval);
        /* Shift right and insert at front. The guard uses MAX_IN_LIST-1
         * so writing inListExprs[_n] below is provably in-bounds
         * (0 <= _n < MAX_IN_LIST). */
        int _n = g_expr.inListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            for (int _i = _n; _i > 0; _i--)
                g_expr.inListExprs[_i] = g_expr.inListExprs[_i - 1];
            g_expr.inListExprs[0] = (yyvsp[(1) - (3)].exprval);
            g_expr.inListCount = _n + 1;
        }
    ;}
    break;

  case 53:
#line 621 "parser/evoparser.y"
    {
        (yyval.intval) = 1;
        int _n = g_expr.arrListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            g_expr.arrListExprs[_n] = (yyvsp[(1) - (1)].exprval);
            g_expr.arrListCount = _n + 1;
        }
    ;}
    break;

  case 54:
#line 630 "parser/evoparser.y"
    {
        (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval);
        int _n = g_expr.arrListCount;
        if (_n >= 0 && _n < MAX_IN_LIST) {
            for (int _i = _n; _i > 0; _i--)
                g_expr.arrListExprs[_i] = g_expr.arrListExprs[_i - 1];
            g_expr.arrListExprs[0] = (yyvsp[(1) - (3)].exprval);
            g_expr.arrListCount = _n + 1;
        }
    ;}
    break;

  case 55:
#line 649 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 650 "parser/evoparser.y"
    {
        g_in_array_literal--;
        char _arrbuf[4096];
        int _p = 0;
        if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '{';
        for (int _i = 0; _i < g_expr.arrListCount; _i++) {
            if (_i > 0 && _p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = ',';
            ExprNode *_en = g_expr.arrListExprs[_i];
            if (!_en) continue;
            if (_en->type == EXPR_LITERAL_INT)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "%d", _en->val.intval);
            else if (_en->type == EXPR_LITERAL_FLOAT)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "%g", _en->val.floatval);
            else if (_en->type == EXPR_LITERAL_BOOL)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "%s",
                               _en->val.intval ? "true" : "false");
            else if (_en->type == EXPR_LITERAL_NULL)
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "NULL");
            else if (_en->type == EXPR_LITERAL_STR) {
                if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '"';
                for (const char *_s = _en->val.strval; *_s && _p < (int)sizeof(_arrbuf) - 2; _s++) {
                    if (*_s == '"' || *_s == '\\') _arrbuf[_p++] = '\\';
                    _arrbuf[_p++] = *_s;
                }
                if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '"';
            } else {
                /* Non-literal element (column ref, func call) — defer to
                 * runtime evaluation via expr_make_array_literal. Emit
                 * display placeholder in the INSERT field text. */
                _p += snprintf(_arrbuf + _p, sizeof(_arrbuf) - _p, "NULL");
            }
        }
        if (_p < (int)sizeof(_arrbuf) - 1) _arrbuf[_p++] = '}';
        _arrbuf[_p] = '\0';
        GetInsertions(_arrbuf);
        emit("ARRLIT %d", (yyvsp[(4) - (5)].intval));
        (yyval.exprval) = expr_make_array_literal(g_expr.arrListExprs, g_expr.arrListCount);
    ;}
    break;

  case 57:
#line 689 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 698 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 704 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 709 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 711 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 713 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 718 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 723 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 729 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 67:
#line 733 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 733 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 734 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 70:
#line 734 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 71:
#line 735 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 736 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 743 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 744 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 75:
#line 751 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 76:
#line 752 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 77:
#line 762 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 78:
#line 766 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 79:
#line 767 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 768 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 769 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 770 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 83:
#line 771 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 84:
#line 772 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 85:
#line 773 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 86:
#line 777 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 87:
#line 778 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 88:
#line 779 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 89:
#line 780 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 90:
#line 781 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 91:
#line 782 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 92:
#line 784 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 93:
#line 785 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 94:
#line 786 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 95:
#line 787 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 96:
#line 788 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 789 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 98:
#line 790 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 791 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 100:
#line 792 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 793 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 102:
#line 794 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 795 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 104:
#line 797 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 798 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 799 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 107:
#line 800 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 801 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 109:
#line 802 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 803 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 111:
#line 804 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 112:
#line 805 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 806 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 114:
#line 807 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 115:
#line 808 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 116:
#line 809 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 117:
#line 810 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 811 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 119:
#line 812 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 120:
#line 814 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 121:
#line 815 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 122:
#line 816 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 123:
#line 817 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 124:
#line 818 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 125:
#line 819 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 126:
#line 822 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 127:
#line 823 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 128:
#line 824 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 129:
#line 825 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 130:
#line 826 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 131:
#line 827 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 132:
#line 828 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 133:
#line 829 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 830 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 135:
#line 831 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 136:
#line 832 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 833 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 138:
#line 834 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 835 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 140:
#line 836 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 141:
#line 837 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 142:
#line 838 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 143:
#line 839 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 144:
#line 840 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 145:
#line 841 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 146:
#line 842 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 147:
#line 843 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 148:
#line 844 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 149:
#line 845 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 150:
#line 846 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 151:
#line 847 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 152:
#line 848 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 153:
#line 849 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 154:
#line 850 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 155:
#line 851 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 156:
#line 852 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 157:
#line 853 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 158:
#line 854 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 159:
#line 855 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 160:
#line 857 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 161:
#line 858 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 162:
#line 859 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 163:
#line 860 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 164:
#line 861 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 165:
#line 862 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 166:
#line 863 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 167:
#line 864 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 168:
#line 866 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 169:
#line 867 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 170:
#line 868 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 171:
#line 869 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 172:
#line 870 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 173:
#line 871 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 174:
#line 872 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 175:
#line 873 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 176:
#line 874 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 177:
#line 875 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 178:
#line 876 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 179:
#line 877 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 180:
#line 878 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 181:
#line 879 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 182:
#line 880 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 183:
#line 881 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 184:
#line 882 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 185:
#line 883 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 186:
#line 884 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 885 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 188:
#line 886 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 189:
#line 887 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 190:
#line 889 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 191:
#line 890 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 192:
#line 891 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 193:
#line 892 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 194:
#line 893 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 195:
#line 895 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 196:
#line 896 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 197:
#line 898 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 198:
#line 899 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 199:
#line 900 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 200:
#line 902 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 201:
#line 903 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 202:
#line 904 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 203:
#line 905 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 204:
#line 912 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 205:
#line 919 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 206:
#line 926 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 930 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 934 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 209:
#line 938 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 210:
#line 942 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 211:
#line 946 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 212:
#line 952 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 213:
#line 953 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 214:
#line 954 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 215:
#line 958 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 216:
#line 964 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 217:
#line 970 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 218:
#line 971 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 972 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 973 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 221:
#line 974 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 222:
#line 975 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 223:
#line 976 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 977 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 225:
#line 978 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 226:
#line 982 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 984 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 228:
#line 986 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 229:
#line 988 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 230:
#line 992 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 231:
#line 1000 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 232:
#line 1010 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 233:
#line 1011 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 234:
#line 1014 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 235:
#line 1015 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 236:
#line 1019 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 1027 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 238:
#line 1035 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 239:
#line 1046 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 240:
#line 1055 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 241:
#line 1060 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 242:
#line 1073 "parser/evoparser.y"
    {
        emit("SELECTINTO %d %d %s %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        g_create.ctasMode = CTAS_INFER;
        strncpy(g_create.ctasTableName, (yyvsp[(5) - (12)].strval), 255);
        g_create.ctasTableName[255] = '\0';
        g_create.ctasIfNotExists = 0;
        g_create.ctasTemporary = 0;
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 244:
#line 1086 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 246:
#line 1088 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 247:
#line 1091 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 248:
#line 1098 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 249:
#line 1106 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 250:
#line 1107 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1108 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 1111 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 253:
#line 1112 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 255:
#line 1116 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 258:
#line 1125 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 259:
#line 1127 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 262:
#line 1135 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 263:
#line 1137 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 268:
#line 1149 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 269:
#line 1155 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 270:
#line 1162 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 271:
#line 1170 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 272:
#line 1171 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 273:
#line 1172 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 274:
#line 1173 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 275:
#line 1176 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 276:
#line 1177 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 277:
#line 1178 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 278:
#line 1179 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 279:
#line 1180 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 281:
#line 1184 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 282:
#line 1187 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 283:
#line 1188 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 284:
#line 1191 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 285:
#line 1192 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 286:
#line 1193 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 287:
#line 1194 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 288:
#line 1195 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 289:
#line 1196 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 290:
#line 1197 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 291:
#line 1198 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 292:
#line 1199 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 293:
#line 1202 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 294:
#line 1203 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 295:
#line 1205 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 296:
#line 1213 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 297:
#line 1218 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 298:
#line 1219 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 299:
#line 1220 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 300:
#line 1223 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1224 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 304:
#line 1233 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 305:
#line 1239 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 306:
#line 1240 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 307:
#line 1242 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 308:
#line 1251 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 309:
#line 1256 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 310:
#line 1262 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 311:
#line 1269 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 312:
#line 1273 "parser/evoparser.y"
    {
        g_subq_mark = g_lex_pos;
        g_in_subquery = 1;
        /* The inner select_stmt parser rules unconditionally write to
         * g_expr.{whereExpr,limitExpr,offsetExpr,havingExpr,selectExprs[],
         * groupByExprs[],windowSpecs[]} with no g_in_subquery guard.
         * Snapshot every slot the inner parse can reach so the outer
         * query's state isn't corrupted. */
        g_lateral_saved_whereExpr  = g_expr.whereExpr;
        g_lateral_saved_limitExpr  = g_expr.limitExpr;
        g_lateral_saved_offsetExpr = g_expr.offsetExpr;
        g_lateral_saved_havingExpr = g_expr.havingExpr;
        g_lateral_saved_selectExprCount = g_expr.selectExprCount;
        g_lateral_saved_groupByCount    = g_expr.groupByCount;
        g_lateral_saved_windowSpecCount = g_expr.windowSpecCount;
        memcpy(g_lateral_saved_selectExprs, g_expr.selectExprs,
               sizeof(g_lateral_saved_selectExprs));
        memcpy(g_lateral_saved_groupByExprs, g_expr.groupByExprs,
               sizeof(g_lateral_saved_groupByExprs));
    ;}
    break;

  case 313:
#line 1293 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        /* Restore outer slots; the lateral's SQL text is captured separately
         * and re-parsed at execution time by the join engine. */
        g_expr.whereExpr  = g_lateral_saved_whereExpr;
        g_expr.limitExpr  = g_lateral_saved_limitExpr;
        g_expr.offsetExpr = g_lateral_saved_offsetExpr;
        g_expr.havingExpr = g_lateral_saved_havingExpr;
        g_expr.selectExprCount = g_lateral_saved_selectExprCount;
        g_expr.groupByCount    = g_lateral_saved_groupByCount;
        g_expr.windowSpecCount = g_lateral_saved_windowSpecCount;
        memcpy(g_expr.selectExprs, g_lateral_saved_selectExprs,
               sizeof(g_lateral_saved_selectExprs));
        memcpy(g_expr.groupByExprs, g_lateral_saved_groupByExprs,
               sizeof(g_lateral_saved_groupByExprs));
        if (g_pending_lateral_sql) free(g_pending_lateral_sql);
        g_pending_lateral_sql = evo_extract_subq_sql();
    ;}
    break;

  case 316:
#line 1319 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 317:
#line 1321 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 318:
#line 1323 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 319:
#line 1325 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 320:
#line 1327 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 321:
#line 1330 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 322:
#line 1331 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 323:
#line 1332 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 324:
#line 1335 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 325:
#line 1336 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 326:
#line 1339 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 327:
#line 1340 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 328:
#line 1343 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 329:
#line 1344 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 330:
#line 1345 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 333:
#line 1352 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 334:
#line 1353 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 335:
#line 1358 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 336:
#line 1360 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 337:
#line 1362 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1366 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 340:
#line 1367 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 341:
#line 1370 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1371 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 343:
#line 1374 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 344:
#line 1379 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 345:
#line 1389 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 346:
#line 1396 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 347:
#line 1397 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 348:
#line 1398 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 349:
#line 1399 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1404 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 351:
#line 1408 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 352:
#line 1410 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 355:
#line 1416 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 356:
#line 1421 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 357:
#line 1428 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 358:
#line 1435 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 359:
#line 1445 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 360:
#line 1452 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 361:
#line 1459 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 362:
#line 1467 "parser/evoparser.y"
    {
        /* NOTE: lexer matches "NOT EXISTS" as single EXISTS token (subtok=1),
         * so "IF NOT EXISTS" appears as "IF EXISTS" in grammar */
        emit("CREATEINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 363:
#line 1477 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 364:
#line 1485 "parser/evoparser.y"
    {
        /* NOTE: lexer matches "NOT EXISTS" as single EXISTS token (subtok=1) */
        emit("CREATEUNIQUEINDEX IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexUnique();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 365:
#line 1495 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 366:
#line 1503 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 367:
#line 1512 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 368:
#line 1521 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(6) - (13)].strval), (yyvsp[(8) - (13)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (13)].strval), (yyvsp[(8) - (13)].strval), "");
        free((yyvsp[(6) - (13)].strval));
        free((yyvsp[(8) - (13)].strval));
    ;}
    break;

  case 369:
#line 1531 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 370:
#line 1539 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 371:
#line 1548 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 372:
#line 1557 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(7) - (12)].strval), (yyvsp[(9) - (12)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(7) - (12)].strval), (yyvsp[(9) - (12)].strval), "");
        free((yyvsp[(7) - (12)].strval));
        free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 373:
#line 1567 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 374:
#line 1576 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 375:
#line 1588 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 376:
#line 1593 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 377:
#line 1598 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 378:
#line 1604 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 379:
#line 1611 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 380:
#line 1618 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 381:
#line 1625 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 382:
#line 1635 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 383:
#line 1642 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 384:
#line 1651 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 385:
#line 1658 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 386:
#line 1664 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 387:
#line 1672 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 388:
#line 1678 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 390:
#line 1686 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 391:
#line 1687 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 392:
#line 1688 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 393:
#line 1689 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 394:
#line 1705 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 395:
#line 1706 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 396:
#line 1707 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 397:
#line 1711 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 398:
#line 1717 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 399:
#line 1728 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 400:
#line 1734 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 401:
#line 1741 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 402:
#line 1747 "parser/evoparser.y"
    {
        /* Strip surrounding quotes from STRING literal */
        int slen = (int)strlen((yyvsp[(4) - (4)].strval));
        char *payload = (yyvsp[(4) - (4)].strval);
        if (slen >= 2 && (payload[0] == '\'' || payload[0] == '"')) {
            payload[slen - 1] = '\0';
            payload++;
        }
        emit("NOTIFY %s PAYLOAD", (yyvsp[(2) - (4)].strval));
        SetNotifyChannel((yyvsp[(2) - (4)].strval), payload);
        free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 403:
#line 1763 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 404:
#line 1770 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 405:
#line 1779 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 406:
#line 1786 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 407:
#line 1792 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 408:
#line 1802 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 409:
#line 1806 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 410:
#line 1812 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 411:
#line 1818 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 412:
#line 1825 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 413:
#line 1831 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 414:
#line 1838 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 415:
#line 1844 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 416:
#line 1850 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 417:
#line 1856 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 418:
#line 1862 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 419:
#line 1868 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 420:
#line 1874 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 421:
#line 1880 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 422:
#line 1886 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 423:
#line 1892 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 424:
#line 1898 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 425:
#line 1904 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 426:
#line 1910 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 427:
#line 1916 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 428:
#line 1922 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 429:
#line 1929 "parser/evoparser.y"
    { ;}
    break;

  case 430:
#line 1930 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 431:
#line 1931 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 432:
#line 1935 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 433:
#line 1943 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 434:
#line 1949 "parser/evoparser.y"
    {
        emit("INSERTSELECT %d %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].strval));
        GetInsertionTableName((yyvsp[(4) - (6)].strval));
        g_ins.insertFromSelect = 1;
        if ((yyvsp[(6) - (6)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 436:
#line 1962 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 437:
#line 1962 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 440:
#line 1970 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 441:
#line 1971 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 442:
#line 1972 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 443:
#line 1976 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 444:
#line 1977 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 445:
#line 1978 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 446:
#line 1982 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 447:
#line 1990 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 448:
#line 1999 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 449:
#line 2000 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 450:
#line 2001 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 451:
#line 2002 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 452:
#line 2003 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 456:
#line 2010 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 457:
#line 2014 "parser/evoparser.y"
    {
        g_ins.columnCount = 0;
        strncpy(g_ins.columns[g_ins.columnCount], (yyvsp[(1) - (1)].strval), 127);
        g_ins.columns[g_ins.columnCount][127] = '\0';
        g_ins.columnCount++;
        emit("COLUMN %s", (yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 458:
#line 2024 "parser/evoparser.y"
    {
        if (g_ins.columnCount < 64) {
            strncpy(g_ins.columns[g_ins.columnCount], (yyvsp[(3) - (3)].strval), 127);
            g_ins.columns[g_ins.columnCount][127] = '\0';
            g_ins.columnCount++;
        }
        emit("COLUMN %s", (yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
        (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1;
    ;}
    break;

  case 459:
#line 2036 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 460:
#line 2037 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 461:
#line 2037 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 462:
#line 2040 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 463:
#line 2041 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 464:
#line 2042 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 465:
#line 2043 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 466:
#line 2047 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 467:
#line 2050 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 468:
#line 2051 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 469:
#line 2052 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 470:
#line 2053 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 471:
#line 2059 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 472:
#line 2065 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 473:
#line 2070 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 474:
#line 2075 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 475:
#line 2079 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 476:
#line 2083 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 477:
#line 2085 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 480:
#line 2091 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 481:
#line 2092 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 482:
#line 2096 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 483:
#line 2097 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 484:
#line 2101 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 485:
#line 2102 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 486:
#line 2103 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 493:
#line 2118 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 494:
#line 2119 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 495:
#line 2120 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 496:
#line 2121 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 497:
#line 2122 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 498:
#line 2123 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 499:
#line 2124 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 500:
#line 2125 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 501:
#line 2130 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 502:
#line 2139 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 503:
#line 2146 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 504:
#line 2147 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 505:
#line 2148 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 506:
#line 2153 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(1) - (3)].strval));
            YYERROR;
        }
        emit("ASSIGN1 %s", (yyvsp[(1) - (3)].strval));
        GetUpdateColumnName((yyvsp[(1) - (3)].strval)); /*for first column name after the SET Terminal symbol*/
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 507:
#line 2164 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(1) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval));
        if (g_qctx) { AddMultiUpdateSet((yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval)); SetMultiUpdate(); }
        free((yyvsp[(1) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 508:
#line 2176 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(3) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN3 %s", (yyvsp[(3) - (5)].strval));
        GetUpdateColumnName((yyvsp[(3) - (5)].strval)); /*for other column names*/
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 509:
#line 2187 "parser/evoparser.y"
    {
        if ((yyvsp[(6) - (7)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
        if (g_qctx) { AddMultiUpdateSet((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].exprval)); SetMultiUpdate(); }
        free((yyvsp[(3) - (7)].strval));
        free((yyvsp[(5) - (7)].strval));
        (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1;
    ;}
    break;

  case 510:
#line 2202 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 511:
#line 2206 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 512:
#line 2210 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 513:
#line 2211 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 514:
#line 2216 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 515:
#line 2218 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 516:
#line 2220 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 517:
#line 2222 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 518:
#line 2225 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 519:
#line 2226 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 520:
#line 2232 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 521:
#line 2237 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 522:
#line 2239 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 523:
#line 2241 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 524:
#line 2243 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 525:
#line 2245 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 526:
#line 2249 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 527:
#line 2253 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 528:
#line 2254 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 529:
#line 2259 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 530:
#line 2269 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 531:
#line 2278 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 532:
#line 2286 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 534:
#line 2294 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 535:
#line 2295 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 536:
#line 2296 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 537:
#line 2297 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 538:
#line 2299 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 539:
#line 2301 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 540:
#line 2303 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 543:
#line 2311 "parser/evoparser.y"
    {
        char *sv = (yyvsp[(6) - (9)].strval);
        int slen = (int)strlen(sv);
        char stripped[256];
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            strncpy(stripped, sv + 1, slen - 2);
            stripped[slen - 2] = '\0';
        } else {
            strncpy(stripped, sv, sizeof(stripped) - 1);
            stripped[sizeof(stripped) - 1] = '\0';
        }
        AddShardRangeDef((yyvsp[(2) - (9)].strval), stripped, (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval)); free(sv);
    ;}
    break;

  case 544:
#line 2326 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 545:
#line 2334 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
    g_create.ctasMode = CTAS_EXPLICIT;
    strncpy(g_create.ctasTableName, (yyvsp[(5) - (9)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (9)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (9)].intval);
    g_create.isTemporary = (yyvsp[(2) - (9)].intval);
    GetTableName((yyvsp[(5) - (9)].strval));
    free((yyvsp[(5) - (9)].strval));
;}
    break;

  case 546:
#line 2348 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval));
    g_create.ctasMode = CTAS_INFER;
    strncpy(g_create.ctasTableName, (yyvsp[(5) - (6)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (6)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (6)].intval);
    GetTableName((yyvsp[(5) - (6)].strval));
    free((yyvsp[(5) - (6)].strval));
;}
    break;

  case 547:
#line 2362 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval));
    g_create.ctasMode = CTAS_EXPLICIT;
    strncpy(g_create.ctasTableName, (yyvsp[(7) - (11)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (11)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (11)].intval);
    g_create.isTemporary = (yyvsp[(2) - (11)].intval);
    GetTableName((yyvsp[(7) - (11)].strval));
    free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval));
;}
    break;

  case 548:
#line 2376 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval));
    g_create.ctasMode = CTAS_INFER;
    strncpy(g_create.ctasTableName, (yyvsp[(7) - (8)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (8)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (8)].intval);
    GetTableName((yyvsp[(7) - (8)].strval));
    free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval));
;}
    break;

  case 549:
#line 2388 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 550:
#line 2389 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 551:
#line 2390 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 552:
#line 2393 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 553:
#line 2394 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 554:
#line 2397 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 555:
#line 2398 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 556:
#line 2399 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 557:
#line 2400 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 558:
#line 2401 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 559:
#line 2402 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 560:
#line 2403 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 561:
#line 2404 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 562:
#line 2406 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 563:
#line 2408 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 564:
#line 2410 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 565:
#line 2412 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 566:
#line 2414 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 567:
#line 2416 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 568:
#line 2419 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 569:
#line 2420 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 570:
#line 2423 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 571:
#line 2424 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 572:
#line 2427 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 573:
#line 2428 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 575:
#line 2432 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 576:
#line 2433 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 577:
#line 2434 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 578:
#line 2435 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 579:
#line 2436 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 580:
#line 2437 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 581:
#line 2438 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 582:
#line 2439 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 583:
#line 2440 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 584:
#line 2441 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 585:
#line 2442 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 586:
#line 2443 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 587:
#line 2444 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 588:
#line 2445 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 589:
#line 2446 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 590:
#line 2447 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 591:
#line 2448 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 592:
#line 2451 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 593:
#line 2452 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 594:
#line 2455 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 595:
#line 2457 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 596:
#line 2465 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 597:
#line 2466 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 599:
#line 2468 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 600:
#line 2469 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 601:
#line 2470 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 602:
#line 2471 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 603:
#line 2472 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 604:
#line 2473 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 605:
#line 2474 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 606:
#line 2475 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 607:
#line 2476 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 608:
#line 2483 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 609:
#line 2484 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 610:
#line 2485 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 611:
#line 2486 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 612:
#line 2487 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 613:
#line 2488 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 614:
#line 2489 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 615:
#line 2490 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 616:
#line 2491 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 617:
#line 2492 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 618:
#line 2493 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 619:
#line 2494 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 620:
#line 2495 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 621:
#line 2496 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 622:
#line 2497 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 623:
#line 2498 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 624:
#line 2499 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 625:
#line 2500 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 626:
#line 2501 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 627:
#line 2502 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 628:
#line 2503 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 629:
#line 2506 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 630:
#line 2507 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 631:
#line 2508 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 632:
#line 2511 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 633:
#line 2512 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 634:
#line 2515 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 635:
#line 2516 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 636:
#line 2517 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 638:
#line 2521 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 639:
#line 2522 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 640:
#line 2526 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 641:
#line 2527 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 642:
#line 2528 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 643:
#line 2529 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 644:
#line 2530 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 645:
#line 2531 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 646:
#line 2532 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 647:
#line 2533 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 648:
#line 2534 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 649:
#line 2535 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 650:
#line 2536 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 651:
#line 2537 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 652:
#line 2538 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 653:
#line 2539 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 654:
#line 2540 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 655:
#line 2541 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 656:
#line 2542 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 657:
#line 2543 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 658:
#line 2544 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 659:
#line 2545 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 660:
#line 2546 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 661:
#line 2547 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 662:
#line 2548 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 663:
#line 2549 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 664:
#line 2550 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 665:
#line 2551 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 666:
#line 2552 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 667:
#line 2553 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 668:
#line 2554 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 669:
#line 2555 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 670:
#line 2556 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 671:
#line 2557 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 672:
#line 2558 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 673:
#line 2559 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 674:
#line 2562 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 675:
#line 2563 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 676:
#line 2567 "parser/evoparser.y"
    {
        emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval));
        /* In CTAS context, select_stmt is not a standalone stmt,
         * so SelectProcess() is not called automatically.
         * Call it here to set g_sel.lastTable for post-parse. */
        if ((yyvsp[(3) - (3)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 677:
#line 2579 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 678:
#line 2580 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 679:
#line 2581 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 680:
#line 2585 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 681:
#line 2588 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 682:
#line 2589 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 686:
#line 2593 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 687:
#line 2594 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 688:
#line 2602 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 689:
#line 2607 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 690:
#line 2613 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 691:
#line 2619 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 692:
#line 2626 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 693:
#line 2633 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 694:
#line 2639 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 695:
#line 2645 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 696:
#line 2652 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 701:
#line 2668 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 702:
#line 2669 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 703:
#line 2670 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 704:
#line 2671 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 705:
#line 2674 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 706:
#line 2675 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 707:
#line 2676 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 708:
#line 2677 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 709:
#line 2678 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 710:
#line 2679 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 711:
#line 2680 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 712:
#line 2681 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 713:
#line 2682 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 714:
#line 2683 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 723:
#line 2700 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 724:
#line 2701 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 845:
#line 2719 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 846:
#line 2726 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 847:
#line 2731 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 848:
#line 2737 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 849:
#line 2743 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 850:
#line 2749 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 851:
#line 2760 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 852:
#line 2765 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 853:
#line 2771 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 856:
#line 2782 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 857:
#line 2783 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 858:
#line 2784 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 859:
#line 2785 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 860:
#line 2786 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 861:
#line 2787 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 862:
#line 2788 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 863:
#line 2795 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 864:
#line 2800 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 865:
#line 2807 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 866:
#line 2808 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 867:
#line 2811 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 868:
#line 2812 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 869:
#line 2813 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 870:
#line 2816 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 871:
#line 2821 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 872:
#line 2827 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 873:
#line 2836 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 874:
#line 2844 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 875:
#line 2854 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 876:
#line 2859 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 879:
#line 2872 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 880:
#line 2873 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 881:
#line 2874 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 882:
#line 2875 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 883:
#line 2876 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 884:
#line 2877 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 885:
#line 2878 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 886:
#line 2879 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 887:
#line 2882 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 888:
#line 2887 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 889:
#line 2893 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 890:
#line 2903 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 891:
#line 2910 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 892:
#line 2917 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 893:
#line 2925 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 895:
#line 2935 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 897:
#line 2939 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 898:
#line 2940 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10676 "parser/evoparser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (scanner, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (scanner, yymsg);
	  }
	else
	  {
	    yyerror (scanner, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, scanner);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, scanner);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2943 "parser/evoparser.y"

void emit(const char *s, ...)
{
	va_list ap;
	if (g_gui_mode) return;
	va_start(ap, s);
	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}
void yyerror(void *scanner, const char *s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "error: ");
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}
