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
     INHERITS = 410,
     ONLY = 411,
     LESS = 412,
     LONGTEXT = 413,
     LOW_PRIORITY = 414,
     LEFT = 415,
     LEADING = 416,
     LIMIT = 417,
     LOCKED = 418,
     OFFSET = 419,
     LONGBLOB = 420,
     MATCH = 421,
     MAXVALUE = 422,
     MEDIUMTEXT = 423,
     MINUS = 424,
     MODIFY = 425,
     MEDIUMBLOB = 426,
     MEDIUMINT = 427,
     NATURAL = 428,
     NODE = 429,
     NO_ACTION = 430,
     NULLX = 431,
     OPEN = 432,
     OUT = 433,
     OUTER = 434,
     ON = 435,
     ORDER = 436,
     ONDUPLICATE = 437,
     PARTIAL = 438,
     PRIMARY = 439,
     PROCEDURE = 440,
     QUICK = 441,
     RANGE = 442,
     REAL = 443,
     RECLAIM = 444,
     REFERENCES = 445,
     RENAME = 446,
     RESIGNAL = 447,
     RESTRICT = 448,
     RETURN = 449,
     RETURNING = 450,
     RETURNS = 451,
     ROLLUP = 452,
     RIGHT = 453,
     REPLACE = 454,
     ROW = 455,
     SIGNAL = 456,
     TRIGGER = 457,
     UNTIL = 458,
     SQL_SMALL_RESULT = 459,
     SCHEMA = 460,
     SHARD = 461,
     SHARDS = 462,
     SHARE = 463,
     SKIP = 464,
     SOME = 465,
     SQL_CALC_FOUND_ROWS = 466,
     SQL_BIG_RESULT = 467,
     SIMPLE = 468,
     STDIN = 469,
     STDOUT = 470,
     STRAIGHT_JOIN = 471,
     SMALLINT = 472,
     SET = 473,
     SELECT = 474,
     QUOTE = 475,
     TINYTEXT = 476,
     TINYINT = 477,
     TO = 478,
     TEMPORARY = 479,
     GLOBAL = 480,
     PRESERVE = 481,
     TEXT = 482,
     THAN = 483,
     TIMESTAMP = 484,
     TABLE = 485,
     THEN = 486,
     TRAILING = 487,
     TRUNCATE = 488,
     TINYBLOB = 489,
     TIME = 490,
     UPDATE = 491,
     UNSIGNED = 492,
     UNION = 493,
     UNIQUE = 494,
     UUID = 495,
     ARRAY = 496,
     JSON = 497,
     VIEW = 498,
     USING = 499,
     USE = 500,
     HASH = 501,
     VALIDATE = 502,
     VARCHAR = 503,
     VALUES = 504,
     VARBINARY = 505,
     WHERE = 506,
     WHEN = 507,
     WHILE = 508,
     WITH = 509,
     YEAR = 510,
     YEAR_MONTH = 511,
     ZEROFILL = 512,
     EXISTS = 513,
     FSUBSTRING = 514,
     FTRIM = 515,
     FDATE_ADD = 516,
     FDATE_SUB = 517,
     FDATEDIFF = 518,
     FYEAR = 519,
     FMONTH = 520,
     FDAY = 521,
     FHOUR = 522,
     FMINUTE = 523,
     FSECOND = 524,
     FNOW = 525,
     FLEFT = 526,
     FRIGHT = 527,
     FLPAD = 528,
     FRPAD = 529,
     FREVERSE = 530,
     FREPEAT = 531,
     FINSTR = 532,
     FLOCATE = 533,
     FABS = 534,
     FCEIL = 535,
     FFLOOR = 536,
     FROUND = 537,
     FPOWER = 538,
     FSQRT = 539,
     FMOD = 540,
     FRAND = 541,
     FLOG = 542,
     FLOG10 = 543,
     FSIGN = 544,
     FPI = 545,
     FCAST = 546,
     FCONVERT = 547,
     FNULLIF = 548,
     FIFNULL = 549,
     FIF = 550,
     UNKNOWN = 551,
     FGROUP_CONCAT = 552,
     SEPARATOR = 553,
     FCOUNT = 554,
     FSUM = 555,
     FAVG = 556,
     FMIN = 557,
     FMAX = 558,
     FUPPER = 559,
     FLOWER = 560,
     FLENGTH = 561,
     FCONCAT = 562,
     FREPLACE = 563,
     FCOALESCE = 564,
     FGEN_RANDOM_UUID = 565,
     FGEN_RANDOM_UUID_V7 = 566,
     FSNOWFLAKE_ID = 567,
     FLAST_INSERT_ID = 568,
     FSCOPE_IDENTITY = 569,
     FAT_IDENTITY = 570,
     FAT_LAST_INSERT_ID = 571,
     FEVO_SLEEP = 572,
     FEVO_JITTER = 573,
     FROW_NUMBER = 574,
     FRANK = 575,
     FDENSE_RANK = 576,
     FLEAD = 577,
     FLAG = 578,
     FNTILE = 579,
     FPERCENT_RANK = 580,
     FCUME_DIST = 581,
     OVER = 582,
     PARTITION = 583,
     FJSON_EXTRACT = 584,
     FJSON_UNQUOTE = 585,
     FJSON_TYPE = 586,
     FJSON_LENGTH = 587,
     FJSON_DEPTH = 588,
     FJSON_VALID = 589,
     FJSON_KEYS = 590,
     FJSON_PRETTY = 591,
     FJSON_QUOTE = 592,
     FJSON_SET = 593,
     FJSON_INSERT = 594,
     FJSON_REPLACE = 595,
     FJSON_REMOVE = 596,
     FJSON_CONTAINS = 597,
     FJSON_CONTAINS_PATH = 598,
     FJSON_SEARCH = 599,
     FJSON_OBJECT = 600,
     FJSON_ARRAY = 601,
     FJSON_ARRAYAGG = 602,
     SEQUENCE = 603,
     FNEXTVAL = 604,
     FCURRVAL = 605,
     FSETVAL = 606,
     FLASTVAL = 607,
     START = 608,
     INCREMENT = 609,
     MINVALUE = 610,
     CYCLE = 611,
     FARRAY_LENGTH = 612,
     FUNNEST = 613,
     FEVO_NOTIFY = 614,
     FPG_LISTENING_CHANNELS = 615
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
#define INHERITS 410
#define ONLY 411
#define LESS 412
#define LONGTEXT 413
#define LOW_PRIORITY 414
#define LEFT 415
#define LEADING 416
#define LIMIT 417
#define LOCKED 418
#define OFFSET 419
#define LONGBLOB 420
#define MATCH 421
#define MAXVALUE 422
#define MEDIUMTEXT 423
#define MINUS 424
#define MODIFY 425
#define MEDIUMBLOB 426
#define MEDIUMINT 427
#define NATURAL 428
#define NODE 429
#define NO_ACTION 430
#define NULLX 431
#define OPEN 432
#define OUT 433
#define OUTER 434
#define ON 435
#define ORDER 436
#define ONDUPLICATE 437
#define PARTIAL 438
#define PRIMARY 439
#define PROCEDURE 440
#define QUICK 441
#define RANGE 442
#define REAL 443
#define RECLAIM 444
#define REFERENCES 445
#define RENAME 446
#define RESIGNAL 447
#define RESTRICT 448
#define RETURN 449
#define RETURNING 450
#define RETURNS 451
#define ROLLUP 452
#define RIGHT 453
#define REPLACE 454
#define ROW 455
#define SIGNAL 456
#define TRIGGER 457
#define UNTIL 458
#define SQL_SMALL_RESULT 459
#define SCHEMA 460
#define SHARD 461
#define SHARDS 462
#define SHARE 463
#define SKIP 464
#define SOME 465
#define SQL_CALC_FOUND_ROWS 466
#define SQL_BIG_RESULT 467
#define SIMPLE 468
#define STDIN 469
#define STDOUT 470
#define STRAIGHT_JOIN 471
#define SMALLINT 472
#define SET 473
#define SELECT 474
#define QUOTE 475
#define TINYTEXT 476
#define TINYINT 477
#define TO 478
#define TEMPORARY 479
#define GLOBAL 480
#define PRESERVE 481
#define TEXT 482
#define THAN 483
#define TIMESTAMP 484
#define TABLE 485
#define THEN 486
#define TRAILING 487
#define TRUNCATE 488
#define TINYBLOB 489
#define TIME 490
#define UPDATE 491
#define UNSIGNED 492
#define UNION 493
#define UNIQUE 494
#define UUID 495
#define ARRAY 496
#define JSON 497
#define VIEW 498
#define USING 499
#define USE 500
#define HASH 501
#define VALIDATE 502
#define VARCHAR 503
#define VALUES 504
#define VARBINARY 505
#define WHERE 506
#define WHEN 507
#define WHILE 508
#define WITH 509
#define YEAR 510
#define YEAR_MONTH 511
#define ZEROFILL 512
#define EXISTS 513
#define FSUBSTRING 514
#define FTRIM 515
#define FDATE_ADD 516
#define FDATE_SUB 517
#define FDATEDIFF 518
#define FYEAR 519
#define FMONTH 520
#define FDAY 521
#define FHOUR 522
#define FMINUTE 523
#define FSECOND 524
#define FNOW 525
#define FLEFT 526
#define FRIGHT 527
#define FLPAD 528
#define FRPAD 529
#define FREVERSE 530
#define FREPEAT 531
#define FINSTR 532
#define FLOCATE 533
#define FABS 534
#define FCEIL 535
#define FFLOOR 536
#define FROUND 537
#define FPOWER 538
#define FSQRT 539
#define FMOD 540
#define FRAND 541
#define FLOG 542
#define FLOG10 543
#define FSIGN 544
#define FPI 545
#define FCAST 546
#define FCONVERT 547
#define FNULLIF 548
#define FIFNULL 549
#define FIF 550
#define UNKNOWN 551
#define FGROUP_CONCAT 552
#define SEPARATOR 553
#define FCOUNT 554
#define FSUM 555
#define FAVG 556
#define FMIN 557
#define FMAX 558
#define FUPPER 559
#define FLOWER 560
#define FLENGTH 561
#define FCONCAT 562
#define FREPLACE 563
#define FCOALESCE 564
#define FGEN_RANDOM_UUID 565
#define FGEN_RANDOM_UUID_V7 566
#define FSNOWFLAKE_ID 567
#define FLAST_INSERT_ID 568
#define FSCOPE_IDENTITY 569
#define FAT_IDENTITY 570
#define FAT_LAST_INSERT_ID 571
#define FEVO_SLEEP 572
#define FEVO_JITTER 573
#define FROW_NUMBER 574
#define FRANK 575
#define FDENSE_RANK 576
#define FLEAD 577
#define FLAG 578
#define FNTILE 579
#define FPERCENT_RANK 580
#define FCUME_DIST 581
#define OVER 582
#define PARTITION 583
#define FJSON_EXTRACT 584
#define FJSON_UNQUOTE 585
#define FJSON_TYPE 586
#define FJSON_LENGTH 587
#define FJSON_DEPTH 588
#define FJSON_VALID 589
#define FJSON_KEYS 590
#define FJSON_PRETTY 591
#define FJSON_QUOTE 592
#define FJSON_SET 593
#define FJSON_INSERT 594
#define FJSON_REPLACE 595
#define FJSON_REMOVE 596
#define FJSON_CONTAINS 597
#define FJSON_CONTAINS_PATH 598
#define FJSON_SEARCH 599
#define FJSON_OBJECT 600
#define FJSON_ARRAY 601
#define FJSON_ARRAYAGG 602
#define SEQUENCE 603
#define FNEXTVAL 604
#define FCURRVAL 605
#define FSETVAL 606
#define FLASTVAL 607
#define START 608
#define INCREMENT 609
#define MINVALUE 610
#define CYCLE 611
#define FARRAY_LENGTH 612
#define FUNNEST 613
#define FEVO_NOTIFY 614
#define FPG_LISTENING_CHANNELS 615




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
#line 887 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 900 "parser/evoparser.tab.c"

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
#define YYLAST   12344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  378
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  180
/* YYNRULES -- Number of rules.  */
#define YYNRULES  904
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2234

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   615

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     373,   374,    26,    24,   375,    25,   372,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   371,
       2,   377,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   376,    30,     2,     2,     2,     2,     2,
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
     365,   366,   367,   368,   369,   370
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
    1446,  1448,  1452,  1454,  1456,  1460,  1465,  1471,  1475,  1479,
    1484,  1491,  1501,  1505,  1506,  1512,  1514,  1515,  1521,  1525,
    1531,  1538,  1544,  1545,  1547,  1549,  1550,  1552,  1554,  1556,
    1559,  1562,  1563,  1564,  1566,  1569,  1574,  1581,  1588,  1595,
    1596,  1599,  1600,  1602,  1606,  1610,  1612,  1621,  1624,  1627,
    1630,  1631,  1638,  1641,  1646,  1647,  1650,  1658,  1660,  1665,
    1672,  1673,  1675,  1677,  1679,  1688,  1698,  1709,  1719,  1731,
    1742,  1755,  1767,  1781,  1791,  1803,  1814,  1827,  1839,  1852,
    1854,  1858,  1860,  1865,  1870,  1875,  1882,  1884,  1888,  1891,
    1895,  1901,  1903,  1907,  1908,  1911,  1914,  1918,  1922,  1924,
    1926,  1928,  1931,  1935,  1938,  1941,  1944,  1949,  1951,  1955,
    1957,  1961,  1967,  1969,  1980,  1991,  2009,  2022,  2042,  2054,
    2061,  2070,  2077,  2084,  2091,  2101,  2108,  2114,  2123,  2131,
    2141,  2150,  2161,  2171,  2172,  2174,  2177,  2179,  2190,  2197,
    2198,  2199,  2205,  2206,  2211,  2212,  2216,  2221,  2224,  2225,
    2231,  2235,  2241,  2242,  2245,  2248,  2251,  2254,  2256,  2257,
    2258,  2262,  2264,  2268,  2272,  2273,  2280,  2282,  2284,  2288,
    2292,  2300,  2304,  2308,  2314,  2320,  2322,  2331,  2339,  2347,
    2349,  2350,  2358,  2359,  2363,  2365,  2369,  2371,  2373,  2375,
    2377,  2379,  2380,  2382,  2387,  2391,  2393,  2397,  2400,  2403,
    2406,  2408,  2411,  2414,  2417,  2419,  2421,  2431,  2432,  2435,
    2438,  2442,  2448,  2454,  2462,  2468,  2470,  2475,  2480,  2484,
    2490,  2494,  2500,  2501,  2504,  2506,  2512,  2520,  2528,  2538,
    2550,  2552,  2555,  2559,  2561,  2572,  2573,  2578,  2590,  2609,
    2610,  2615,  2619,  2625,  2631,  2641,  2652,  2660,  2662,  2666,
    2676,  2686,  2696,  2703,  2715,  2724,  2725,  2727,  2730,  2732,
    2736,  2742,  2750,  2755,  2760,  2766,  2772,  2777,  2784,  2796,
    2810,  2824,  2840,  2845,  2852,  2854,  2858,  2860,  2864,  2866,
    2870,  2871,  2876,  2882,  2887,  2893,  2898,  2904,  2909,  2915,
    2920,  2925,  2929,  2933,  2937,  2940,  2944,  2949,  2954,  2956,
    2960,  2961,  2966,  2967,  2971,  2974,  2978,  2982,  2986,  2990,
    2996,  3002,  3008,  3012,  3018,  3021,  3029,  3035,  3043,  3049,
    3052,  3056,  3059,  3063,  3066,  3070,  3076,  3081,  3087,  3095,
    3104,  3113,  3121,  3128,  3135,  3141,  3142,  3146,  3152,  3153,
    3155,  3156,  3159,  3162,  3163,  3168,  3172,  3175,  3179,  3183,
    3187,  3191,  3195,  3199,  3203,  3207,  3211,  3215,  3217,  3219,
    3221,  3223,  3225,  3229,  3235,  3238,  3243,  3245,  3247,  3249,
    3251,  3255,  3259,  3263,  3267,  3273,  3279,  3281,  3283,  3285,
    3289,  3291,  3295,  3299,  3300,  3302,  3304,  3306,  3310,  3314,
    3317,  3319,  3323,  3327,  3331,  3333,  3344,  3354,  3367,  3379,
    3392,  3404,  3419,  3433,  3434,  3436,  3438,  3442,  3445,  3449,
    3453,  3457,  3459,  3461,  3463,  3465,  3467,  3469,  3471,  3473,
    3475,  3477,  3478,  3481,  3486,  3492,  3498,  3504,  3510,  3516,
    3518,  3520,  3522,  3524,  3526,  3528,  3530,  3532,  3534,  3536,
    3538,  3540,  3542,  3544,  3546,  3548,  3550,  3552,  3554,  3556,
    3558,  3560,  3562,  3564,  3566,  3568,  3570,  3572,  3574,  3576,
    3578,  3580,  3582,  3584,  3586,  3588,  3590,  3592,  3594,  3596,
    3598,  3600,  3602,  3604,  3606,  3608,  3610,  3612,  3614,  3616,
    3618,  3620,  3622,  3624,  3626,  3628,  3630,  3632,  3634,  3636,
    3638,  3640,  3642,  3644,  3646,  3648,  3650,  3652,  3654,  3656,
    3658,  3660,  3662,  3664,  3666,  3668,  3670,  3672,  3674,  3676,
    3678,  3680,  3682,  3684,  3686,  3688,  3690,  3692,  3694,  3696,
    3698,  3700,  3702,  3704,  3706,  3708,  3710,  3712,  3714,  3716,
    3718,  3720,  3722,  3724,  3726,  3728,  3730,  3732,  3734,  3736,
    3738,  3740,  3742,  3744,  3746,  3748,  3750,  3752,  3754,  3756,
    3758,  3760,  3762,  3764,  3768,  3774,  3778,  3784,  3786,  3791,
    3797,  3799,  3803,  3805,  3807,  3809,  3811,  3813,  3815,  3817,
    3819,  3833,  3835,  3837,  3839,  3841,  3843,  3845,  3849,  3855,
    3860,  3865,  3867,  3873,  3874,  3877,  3881,  3884,  3888,  3891,
    3894,  3897,  3899,  3902,  3904,  3908,  3914,  3919,  3924,  3931,
    3938,  3939,  3942,  3945,  3947
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     379,     0,    -1,   418,   371,    -1,   418,   371,   379,    -1,
       3,    -1,     3,   372,     3,    -1,    82,   372,     3,    -1,
     176,   373,     3,   374,    84,   373,     4,   374,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   186,
      -1,   380,    24,   380,    -1,   380,    25,   380,    -1,   380,
      26,   380,    -1,   380,    27,   380,    -1,   380,    28,   380,
      -1,   380,    29,   380,    -1,    25,   380,    -1,   373,   380,
     374,    -1,   380,    12,   380,    -1,   380,    10,   380,    -1,
     380,    11,   380,    -1,   380,    21,   380,    -1,   380,    22,
     380,    -1,   380,    30,   380,    -1,   380,    23,   380,    -1,
     380,    32,   380,    -1,   380,    31,   380,    -1,    18,   380,
      -1,    17,   380,    -1,   380,    20,   380,    -1,    -1,   380,
      20,   373,   381,   419,   374,    -1,    -1,   380,    20,    40,
     373,   382,   419,   374,    -1,    -1,   380,    20,   220,   373,
     383,   419,   374,    -1,    -1,   380,    20,    38,   373,   384,
     419,   374,    -1,   380,    20,    40,   373,   388,   374,    -1,
     380,    20,   220,   373,   388,   374,    -1,   380,    15,   186,
      -1,   380,    15,    18,   186,    -1,   380,    15,     6,    -1,
     380,    15,    18,     6,    -1,     8,     9,   380,    -1,   380,
      19,   380,    43,   380,    -1,   380,    18,    19,   380,    43,
     380,    -1,   380,    -1,   380,   375,   385,    -1,   380,    -1,
     380,   375,   386,    -1,    -1,   251,    34,   387,   386,   376,
      -1,   251,    34,   376,    -1,   380,    34,   380,   376,    -1,
     380,    -1,   367,   373,   380,   374,    -1,   367,   373,   380,
     375,   380,   374,    -1,   368,   373,   380,   374,    -1,   369,
     373,   380,   375,   380,   374,    -1,   370,   373,   374,    -1,
      -1,   385,    -1,    -1,   380,    16,   373,   390,   385,   374,
      -1,    -1,   380,    18,    16,   373,   391,   385,   374,    -1,
      -1,   380,    16,   373,   392,   419,   374,    -1,    -1,   380,
      18,    16,   373,   393,   419,   374,    -1,    -1,   268,   373,
     394,   419,   374,    -1,     3,   373,   389,   374,    -1,   309,
     373,    26,   374,    -1,   309,   373,   380,   374,    -1,   310,
     373,   380,   374,    -1,   311,   373,   380,   374,    -1,   312,
     373,   380,   374,    -1,   313,   373,   380,   374,    -1,   307,
     373,   380,   374,    -1,   307,   373,   380,   308,     4,   374,
      -1,    -1,   329,   373,   374,   337,   373,   395,   426,   428,
     374,    -1,    -1,   330,   373,   374,   337,   373,   396,   426,
     428,   374,    -1,    -1,   331,   373,   374,   337,   373,   397,
     426,   428,   374,    -1,    -1,   310,   373,   380,   374,   337,
     373,   398,   426,   428,   374,    -1,    -1,   309,   373,    26,
     374,   337,   373,   399,   426,   428,   374,    -1,    -1,   309,
     373,   380,   374,   337,   373,   400,   426,   428,   374,    -1,
      -1,   311,   373,   380,   374,   337,   373,   401,   426,   428,
     374,    -1,    -1,   312,   373,   380,   374,   337,   373,   402,
     426,   428,   374,    -1,    -1,   313,   373,   380,   374,   337,
     373,   403,   426,   428,   374,    -1,    -1,   332,   373,   380,
     374,   337,   373,   404,   426,   428,   374,    -1,    -1,   332,
     373,   380,   375,     5,   374,   337,   373,   405,   426,   428,
     374,    -1,    -1,   332,   373,   380,   375,     5,   375,     4,
     374,   337,   373,   406,   426,   428,   374,    -1,    -1,   332,
     373,   380,   375,     5,   375,     5,   374,   337,   373,   407,
     426,   428,   374,    -1,    -1,   333,   373,   380,   374,   337,
     373,   408,   426,   428,   374,    -1,    -1,   333,   373,   380,
     375,     5,   374,   337,   373,   409,   426,   428,   374,    -1,
      -1,   333,   373,   380,   375,     5,   375,     4,   374,   337,
     373,   410,   426,   428,   374,    -1,    -1,   333,   373,   380,
     375,     5,   375,     5,   374,   337,   373,   411,   426,   428,
     374,    -1,    -1,   334,   373,     5,   374,   337,   373,   412,
     426,   428,   374,    -1,    -1,   335,   373,   374,   337,   373,
     413,   426,   428,   374,    -1,    -1,   336,   373,   374,   337,
     373,   414,   426,   428,   374,    -1,   269,   373,   380,   375,
     380,   375,   380,   374,    -1,   269,   373,   380,   375,   380,
     374,    -1,   269,   373,   380,   129,   380,   374,    -1,   269,
     373,   380,   129,   380,   133,   380,   374,    -1,   270,   373,
     380,   374,    -1,   270,   373,   415,   380,   129,   380,   374,
      -1,   270,   373,   415,   129,   380,   374,    -1,   314,   373,
     380,   374,    -1,   315,   373,   380,   374,    -1,   316,   373,
     380,   374,    -1,   317,   373,   380,   375,   380,   374,    -1,
     318,   373,   380,   375,   380,   375,   380,   374,    -1,   319,
     373,   380,   375,   380,   374,    -1,   281,   373,   380,   375,
     380,   374,    -1,   282,   373,   380,   375,   380,   374,    -1,
     283,   373,   380,   375,   380,   375,   380,   374,    -1,   284,
     373,   380,   375,   380,   375,   380,   374,    -1,   285,   373,
     380,   374,    -1,   286,   373,   380,   375,   380,   374,    -1,
     287,   373,   380,   375,   380,   374,    -1,   288,   373,   380,
     375,   380,   374,    -1,   289,   373,   380,   374,    -1,   290,
     373,   380,   374,    -1,   291,   373,   380,   374,    -1,   292,
     373,   380,   375,   380,   374,    -1,   292,   373,   380,   374,
      -1,   293,   373,   380,   375,   380,   374,    -1,   294,   373,
     380,   374,    -1,   295,   373,   380,   375,   380,   374,    -1,
     296,   373,   374,    -1,   297,   373,   380,   374,    -1,   298,
     373,   380,   374,    -1,   299,   373,   380,   374,    -1,   300,
     373,   374,    -1,   280,   373,   374,    -1,   273,   373,   380,
     375,   380,   374,    -1,   274,   373,   380,   374,    -1,   275,
     373,   380,   374,    -1,   276,   373,   380,   374,    -1,   277,
     373,   380,   374,    -1,   278,   373,   380,   374,    -1,   279,
     373,   380,   374,    -1,   339,   373,   380,   375,   380,   374,
      -1,   340,   373,   380,   374,    -1,   341,   373,   380,   374,
      -1,   342,   373,   380,   374,    -1,   343,   373,   380,   374,
      -1,   344,   373,   380,   374,    -1,   345,   373,   380,   374,
      -1,   346,   373,   380,   374,    -1,   347,   373,   380,   374,
      -1,   348,   373,   380,   375,   380,   375,   380,   374,    -1,
     349,   373,   380,   375,   380,   375,   380,   374,    -1,   350,
     373,   380,   375,   380,   375,   380,   374,    -1,   351,   373,
     380,   375,   380,   374,    -1,   352,   373,   380,   375,   380,
     374,    -1,   353,   373,   380,   375,   380,   375,   380,   374,
      -1,   354,   373,   380,   375,   380,   375,   380,   374,    -1,
     355,   373,   380,   375,   380,   374,    -1,   355,   373,   380,
     375,   380,   375,   380,   375,   380,   374,    -1,   356,   373,
     380,   374,    -1,   356,   373,   380,   375,   380,   374,    -1,
     356,   373,   380,   375,   380,   375,   380,   374,    -1,   357,
     373,   380,   374,    -1,   359,   373,   380,   374,    -1,   360,
     373,   380,   374,    -1,   361,   373,   380,   375,   380,   374,
      -1,   361,   373,   380,   375,   380,   375,   380,   374,    -1,
     362,   373,   374,    -1,   301,   373,   380,    44,   530,   374,
      -1,   302,   373,   380,   375,   530,   374,    -1,   303,   373,
     380,   375,   380,   374,    -1,   304,   373,   380,   375,   380,
     374,    -1,   305,   373,   380,   375,   380,   375,   380,   374,
      -1,   380,    15,   306,    -1,   317,   373,   380,   375,   380,
     375,   380,   374,    -1,   317,   373,   380,   375,   380,   375,
     380,   375,   380,   374,    -1,   320,   373,   374,    -1,   321,
     373,   374,    -1,   322,   373,   374,    -1,   323,   373,   374,
      -1,   324,   373,   374,    -1,   325,    -1,   326,    -1,   327,
     373,   380,   374,    -1,   328,   373,   380,   375,   380,   374,
      -1,   171,    -1,   242,    -1,    58,    -1,   271,   373,   380,
     375,   416,   374,    -1,   272,   373,   380,   375,   416,   374,
      -1,   154,   380,   265,    -1,   154,   380,    97,    -1,   154,
     380,    98,    -1,   154,   380,   102,    -1,   154,   380,   104,
      -1,   154,   380,   266,    -1,   154,   380,   138,    -1,   154,
     380,   137,    -1,   154,   380,   140,    -1,    70,   380,   417,
     117,    -1,    70,   380,   417,   118,   380,   117,    -1,    70,
     417,   117,    -1,    70,   417,   118,   380,   117,    -1,   262,
     380,   241,   380,    -1,   417,   262,   380,   241,   380,    -1,
     380,    14,   380,    -1,   380,    18,    14,   380,    -1,   380,
      13,   380,    -1,   380,    18,    13,   380,    -1,    65,    -1,
      73,    -1,    74,    -1,   419,    -1,   229,   437,   438,    -1,
     229,   437,   438,   129,   441,   420,   421,   425,   430,   433,
     434,   435,    -1,   229,   437,   438,   152,     3,   129,   441,
     420,   421,   425,   430,   433,    -1,    -1,   261,   380,    -1,
      -1,   134,    56,   422,   424,    -1,   380,   423,    -1,   422,
     375,   380,   423,    -1,    -1,    42,    -1,   105,    -1,    -1,
     264,   207,    -1,    -1,   141,   380,    -1,    -1,   338,    56,
     427,    -1,     3,    -1,   427,   375,     3,    -1,    -1,   191,
      56,   429,    -1,     3,   423,    -1,   429,   375,     3,   423,
      -1,    -1,   191,    56,   431,    -1,   432,    -1,   431,   375,
     432,    -1,     3,   423,    -1,     3,   372,     3,   423,    -1,
       5,   423,    -1,    -1,   172,   380,    -1,   172,   380,   375,
     380,    -1,   172,   380,   174,   380,    -1,    -1,   133,   246,
      -1,   133,   218,    -1,   133,   246,   219,   173,    -1,   133,
     218,   219,   173,    -1,    -1,   152,   436,    -1,     3,    -1,
     436,   375,     3,    -1,    -1,   437,    38,    -1,   437,    99,
      -1,   437,   103,    -1,   437,   139,    -1,   437,   226,    -1,
     437,   214,    -1,   437,   222,    -1,   437,   221,    -1,   439,
      -1,   438,   375,   439,    -1,    26,    -1,   380,   440,    -1,
      44,     3,    -1,     3,    -1,    -1,   442,    -1,   441,   375,
     442,    -1,   443,    -1,   447,    -1,     3,   440,   454,    -1,
     166,     3,   440,   454,    -1,     3,   372,     3,   440,   454,
      -1,   457,   446,     3,    -1,   444,   446,     3,    -1,   368,
     373,   380,   374,    -1,   368,   373,   380,   374,   446,     3,
      -1,   368,   373,   380,   374,   446,     3,   373,     3,   374,
      -1,   373,   441,   374,    -1,    -1,   160,   373,   445,   419,
     374,    -1,    44,    -1,    -1,   442,   448,   156,   443,   452,
      -1,   442,   226,   443,    -1,   442,   226,   443,   190,   380,
      -1,   442,   450,   449,   156,   443,   453,    -1,   442,   183,
     451,   156,   443,    -1,    -1,   146,    -1,    69,    -1,    -1,
     189,    -1,   170,    -1,   208,    -1,   170,   449,    -1,   208,
     449,    -1,    -1,    -1,   453,    -1,   190,   380,    -1,   254,
     373,   436,   374,    -1,   255,   157,   455,   373,   456,   374,
      -1,   147,   157,   455,   373,   456,   374,    -1,   126,   157,
     455,   373,   456,   374,    -1,    -1,   133,   156,    -1,    -1,
       3,    -1,   456,   375,     3,    -1,   373,   419,   374,    -1,
     458,    -1,   100,   459,   129,     3,   420,   430,   433,   556,
      -1,   459,   169,    -1,   459,   196,    -1,   459,   147,    -1,
      -1,   100,   459,   460,   129,   441,   420,    -1,     3,   461,
      -1,   460,   375,     3,   461,    -1,    -1,   372,    26,    -1,
     100,   459,   129,   460,   254,   441,   420,    -1,   462,    -1,
     101,   240,     3,   463,    -1,   101,   240,   149,   268,     3,
     463,    -1,    -1,    67,    -1,   203,    -1,   464,    -1,    66,
     148,     3,   190,     3,   373,   465,   374,    -1,    66,   131,
     148,     3,   190,     3,   373,   465,   374,    -1,    66,   148,
     149,   268,     3,   190,     3,   373,   465,   374,    -1,    66,
     249,   148,     3,   190,     3,   373,   465,   374,    -1,    66,
     249,   148,   149,   268,     3,   190,     3,   373,   465,   374,
      -1,    66,   148,     3,   190,     3,   254,   256,   373,   465,
     374,    -1,    66,   148,   149,   268,     3,   190,     3,   254,
     256,   373,   465,   374,    -1,    66,   249,   148,     3,   190,
       3,   254,   256,   373,   465,   374,    -1,    66,   249,   148,
     149,   268,     3,   190,     3,   254,   256,   373,   465,   374,
      -1,    66,   148,    78,     3,   190,     3,   373,   465,   374,
      -1,    66,   148,    78,   149,   268,     3,   190,     3,   373,
     465,   374,    -1,    66,   249,   148,    78,     3,   190,     3,
     373,   465,   374,    -1,    66,   249,   148,    78,   149,   268,
       3,   190,     3,   373,   465,   374,    -1,    66,   148,    78,
       3,   190,     3,   254,   256,   373,   465,   374,    -1,    66,
     249,   148,    78,     3,   190,     3,   254,   256,   373,   465,
     374,    -1,     3,    -1,   465,   375,     3,    -1,   466,    -1,
     314,   373,     3,   374,    -1,   315,   373,     3,   374,    -1,
     316,   373,     3,   374,    -1,   317,   373,     3,   375,     3,
     374,    -1,   467,    -1,   101,   148,     3,    -1,   468,   470,
      -1,   243,   240,     3,    -1,   243,   240,     3,   375,   469,
      -1,     3,    -1,   469,   375,     3,    -1,    -1,   470,    67,
      -1,   470,   203,    -1,   470,    48,    46,    -1,   470,    47,
      46,    -1,   471,    -1,   472,    -1,   473,    -1,   161,     3,
      -1,   161,     3,   164,    -1,   163,     3,    -1,   163,    26,
      -1,   162,     3,    -1,   162,     3,   375,     4,    -1,   474,
      -1,   199,   240,     3,    -1,   475,    -1,    39,   240,     3,
      -1,    39,   240,     3,   372,     3,    -1,   476,    -1,    35,
     240,     3,    36,    64,     3,    71,   373,   380,   374,    -1,
      35,   240,     3,    36,    64,     3,   249,   373,   523,   374,
      -1,    35,   240,     3,    36,    64,     3,   127,   157,   373,
     520,   374,   200,     3,   373,   521,   374,   522,    -1,    35,
     240,     3,    36,    64,     3,    71,   373,   380,   374,    18,
     257,    -1,    35,   240,     3,    36,    64,     3,   127,   157,
     373,   520,   374,   200,     3,   373,   521,   374,   522,    18,
     257,    -1,    35,   240,     3,    36,    64,     3,   194,   157,
     373,   519,   374,    -1,    35,   240,     3,   101,    64,     3,
      -1,    35,   240,     3,   201,    64,     3,   233,     3,    -1,
      35,   240,     3,   113,    64,     3,    -1,    35,   240,     3,
      93,    64,     3,    -1,    35,   240,     3,   257,    64,     3,
      -1,    35,   240,     3,    36,    77,     3,   530,   525,   477,
      -1,    35,   240,     3,   101,    77,     3,    -1,    35,   240,
       3,   101,     3,    -1,    35,   240,     3,   201,    77,     3,
     233,     3,    -1,    35,   240,     3,   201,     3,   233,     3,
      -1,    35,   240,     3,   180,    77,     3,   530,   525,   477,
      -1,    35,   240,     3,   180,     3,   530,   525,   477,    -1,
      35,   240,     3,    68,    77,     3,     3,   530,   525,   477,
      -1,    35,   240,     3,    68,     3,     3,   530,   525,   477,
      -1,    -1,   123,    -1,    37,     3,    -1,   478,    -1,   150,
     486,   487,     3,   488,   259,   490,   479,   481,   556,    -1,
     150,   486,   487,     3,   488,   419,    -1,    -1,    -1,   192,
     157,   246,   480,   485,    -1,    -1,   190,    81,   482,   483,
      -1,    -1,   373,     3,   374,    -1,   373,     3,   375,     3,
      -1,    94,    83,    -1,    -1,    94,   246,   484,   228,   485,
      -1,     3,    20,   380,    -1,   485,   375,     3,    20,   380,
      -1,    -1,   486,   169,    -1,   486,    96,    -1,   486,   139,
      -1,   486,   147,    -1,   152,    -1,    -1,    -1,   373,   489,
     374,    -1,     3,    -1,   489,   375,     3,    -1,   373,   492,
     374,    -1,    -1,   490,   375,   491,   373,   492,   374,    -1,
     380,    -1,   106,    -1,   492,   375,   380,    -1,   492,   375,
     106,    -1,   150,   486,   487,     3,   228,   493,   479,    -1,
       3,    20,   380,    -1,     3,    20,   106,    -1,   493,   375,
       3,    20,   380,    -1,   493,   375,     3,    20,   106,    -1,
     494,    -1,   209,   486,   487,     3,   488,   259,   490,   479,
      -1,   209,   486,   487,     3,   228,   493,   479,    -1,   209,
     486,   487,     3,   488,   419,   479,    -1,   495,    -1,    -1,
      79,     3,   496,   497,   499,   500,   501,    -1,    -1,   373,
     498,   374,    -1,     3,    -1,   498,   375,     3,    -1,   129,
      -1,   233,    -1,     4,    -1,   224,    -1,   225,    -1,    -1,
     502,    -1,   264,   373,   502,   374,    -1,   373,   502,   374,
      -1,   503,    -1,   502,   375,   503,    -1,   128,    80,    -1,
     128,   237,    -1,    92,     4,    -1,   136,    -1,   136,     6,
      -1,   186,     4,    -1,   230,     4,    -1,    80,    -1,   504,
      -1,   246,   505,   441,   228,   506,   420,   430,   433,   556,
      -1,    -1,   486,   169,    -1,   486,   147,    -1,     3,    20,
     380,    -1,     3,   372,     3,    20,   380,    -1,   506,   375,
       3,    20,   380,    -1,   506,   375,     3,   372,     3,    20,
     380,    -1,   201,   240,     3,   233,     3,    -1,   507,    -1,
      66,    88,   508,     3,    -1,    66,   215,   508,     3,    -1,
     101,    88,     3,    -1,   101,    88,   149,   268,     3,    -1,
     101,   215,     3,    -1,   101,   215,   149,   268,     3,    -1,
      -1,   149,   268,    -1,   509,    -1,    66,    95,     3,    44,
     530,    -1,    66,    95,     3,    44,   530,   106,   380,    -1,
      66,    95,     3,    44,   530,    18,   186,    -1,    66,    95,
       3,    44,   530,    71,   373,   380,   374,    -1,    66,    95,
       3,    44,   530,    18,   186,    71,   373,   380,   374,    -1,
     510,    -1,   255,     3,    -1,   255,    88,     3,    -1,   511,
      -1,    66,   516,   240,   508,     3,   373,   517,   374,   513,
     512,    -1,    -1,   165,   373,     3,   374,    -1,    66,   516,
     240,   508,     3,   372,     3,   373,   517,   374,   513,    -1,
      66,   516,   240,   508,     3,   338,    87,     3,   133,   259,
     129,   373,     5,   374,   233,   373,     5,   374,    -1,    -1,
     513,    41,    20,     5,    -1,   513,    41,     5,    -1,   513,
     190,     3,   100,     3,    -1,   513,   190,     3,   236,     3,
      -1,   513,   216,    56,   256,   373,     3,   374,   217,     5,
      -1,   513,   216,    56,   197,   373,     3,   374,   373,   514,
     374,    -1,   513,   338,    56,   197,   373,     3,   374,    -1,
     515,    -1,   514,   375,   515,    -1,   216,     3,   259,   167,
     238,     4,   190,   184,     5,    -1,   216,     3,   259,   167,
     238,   177,   190,   184,     5,    -1,    66,   516,   240,   508,
       3,   373,   517,   374,   532,    -1,    66,   516,   240,   508,
       3,   532,    -1,    66,   516,   240,   508,     3,   372,     3,
     373,   517,   374,   532,    -1,    66,   516,   240,   508,     3,
     372,     3,   532,    -1,    -1,   234,    -1,   235,   234,    -1,
     518,    -1,   517,   375,   518,    -1,   194,   157,   373,   519,
     374,    -1,    64,     3,   194,   157,   373,   519,   374,    -1,
     157,   373,   436,   374,    -1,   148,   373,   436,   374,    -1,
     131,   148,   373,   436,   374,    -1,   131,   157,   373,   436,
     374,    -1,    71,   373,   380,   374,    -1,    64,     3,    71,
     373,   380,   374,    -1,   127,   157,   373,   520,   374,   200,
       3,   373,   521,   374,   522,    -1,   127,   157,   373,   520,
     374,   200,     3,   372,     3,   373,   521,   374,   522,    -1,
      64,     3,   127,   157,   373,   520,   374,   200,     3,   373,
     521,   374,   522,    -1,    64,     3,   127,   157,   373,   520,
     374,   200,     3,   372,     3,   373,   521,   374,   522,    -1,
     249,   373,   523,   374,    -1,    64,     3,   249,   373,   523,
     374,    -1,     3,    -1,   519,   375,     3,    -1,     3,    -1,
     520,   375,     3,    -1,     3,    -1,   521,   375,     3,    -1,
      -1,   522,   190,   100,    67,    -1,   522,   190,   100,   228,
     186,    -1,   522,   190,   100,   203,    -1,   522,   190,   100,
     228,   106,    -1,   522,   190,   246,    67,    -1,   522,   190,
     246,   228,   186,    -1,   522,   190,   246,   203,    -1,   522,
     190,   246,   228,   106,    -1,   522,   190,   100,   185,    -1,
     522,   190,   246,   185,    -1,   522,   176,   130,    -1,   522,
     176,   223,    -1,   522,   176,   193,    -1,   522,    90,    -1,
     522,    18,    90,    -1,   522,    90,   144,    91,    -1,   522,
      90,   144,   142,    -1,     3,    -1,   523,   375,     3,    -1,
      -1,   524,     3,   530,   525,    -1,    -1,   525,    18,   186,
      -1,   525,   186,    -1,   525,   106,     4,    -1,   525,   106,
       5,    -1,   525,   106,     7,    -1,   525,   106,     6,    -1,
     525,   106,   320,   373,   374,    -1,   525,   106,   321,   373,
     374,    -1,   525,   106,   322,   373,   374,    -1,   525,   106,
      65,    -1,   525,   106,   373,   380,   374,    -1,   525,    41,
      -1,   525,    41,   373,     5,   375,     5,   374,    -1,   525,
      41,   373,     5,   374,    -1,   525,    46,   373,     5,   375,
       5,   374,    -1,   525,    46,   373,     5,   374,    -1,   525,
      46,    -1,   525,   249,   157,    -1,   525,   249,    -1,   525,
     194,   157,    -1,   525,   157,    -1,   525,    72,     4,    -1,
     525,    71,   373,   380,   374,    -1,   525,    64,     3,   249,
      -1,   525,    64,     3,   194,   157,    -1,   525,    64,     3,
      71,   373,   380,   374,    -1,   525,    49,    45,    44,   373,
     380,   374,    50,    -1,   525,    49,    45,    44,   373,   380,
     374,    51,    -1,   525,    49,    45,    44,   373,   380,   374,
      -1,   525,    44,   373,   380,   374,    50,    -1,   525,    44,
     373,   380,   374,    51,    -1,   525,    44,   373,   380,   374,
      -1,    -1,   373,     5,   374,    -1,   373,     5,   375,     5,
     374,    -1,    -1,    57,    -1,    -1,   528,   247,    -1,   528,
     267,    -1,    -1,   529,    75,   228,     4,    -1,   529,    76,
       4,    -1,    60,   526,    -1,   232,   526,   528,    -1,   227,
     526,   528,    -1,   182,   526,   528,    -1,   153,   526,   528,
      -1,   145,   526,   528,    -1,    59,   526,   528,    -1,   198,
     526,   528,    -1,   107,   526,   528,    -1,   125,   526,   528,
      -1,   109,   526,   528,    -1,   110,    -1,   245,    -1,   239,
      -1,   108,    -1,   265,    -1,    75,   526,   529,    -1,   258,
     373,     5,   374,   529,    -1,    57,   526,    -1,   260,   373,
       5,   374,    -1,   244,    -1,    54,    -1,   181,    -1,   175,
      -1,   231,   527,   529,    -1,   237,   527,   529,    -1,   178,
     527,   529,    -1,   168,   527,   529,    -1,   116,   373,   531,
     374,   529,    -1,   228,   373,   531,   374,   529,    -1,    55,
      -1,   250,    -1,   252,    -1,   530,    34,   376,    -1,     4,
      -1,   531,   375,     4,    -1,   533,   446,   419,    -1,    -1,
     147,    -1,   209,    -1,   534,    -1,   228,   215,     3,    -1,
     228,   215,   106,    -1,   228,   535,    -1,   536,    -1,   535,
     375,   536,    -1,     8,    20,   380,    -1,     8,     9,   380,
      -1,   537,    -1,    66,   195,     3,   373,   538,   374,    44,
      53,   542,   117,    -1,    66,   195,     3,   373,   538,   374,
      53,   542,   117,    -1,    66,    10,   209,   195,     3,   373,
     538,   374,    44,    53,   542,   117,    -1,    66,    10,   209,
     195,     3,   373,   538,   374,    53,   542,   117,    -1,    66,
     132,     3,   373,   538,   374,   206,   541,    44,    53,   542,
     117,    -1,    66,   132,     3,   373,   538,   374,   206,   541,
      53,   542,   117,    -1,    66,    10,   209,   132,     3,   373,
     538,   374,   206,   541,    44,    53,   542,   117,    -1,    66,
      10,   209,   132,     3,   373,   538,   374,   206,   541,    53,
     542,   117,    -1,    -1,   539,    -1,   540,    -1,   539,   375,
     540,    -1,     3,   530,    -1,    16,     3,   530,    -1,   188,
       3,   530,    -1,   143,     3,   530,    -1,   145,    -1,   153,
      -1,   258,    -1,   237,    -1,    55,    -1,   125,    -1,   107,
      -1,    59,    -1,   110,    -1,   239,    -1,    -1,   542,   543,
      -1,   542,    53,   542,   117,    -1,   542,   149,   542,   117,
     149,    -1,   542,   263,   542,   117,   263,    -1,   542,   159,
     542,   117,   159,    -1,   542,   124,   542,   117,   124,    -1,
     542,    70,   542,   117,    70,    -1,     3,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,    -1,
      10,    -1,    12,    -1,    16,    -1,    43,    -1,   229,    -1,
     150,    -1,   246,    -1,   100,    -1,   129,    -1,   261,    -1,
     228,    -1,   152,    -1,   259,    -1,    66,    -1,   101,    -1,
     240,    -1,   148,    -1,   241,    -1,   118,    -1,   112,    -1,
      89,    -1,    94,    -1,    61,    -1,   204,    -1,   158,    -1,
     155,    -1,    63,    -1,   187,    -1,   122,    -1,    62,    -1,
     135,    -1,   120,    -1,   188,    -1,   143,    -1,   133,    -1,
      47,    -1,   211,    -1,   202,    -1,   119,    -1,   213,    -1,
      52,    -1,   111,    -1,   210,    -1,   212,    -1,    44,    -1,
     190,    -1,   191,    -1,    56,    -1,   134,    -1,   141,    -1,
     172,    -1,   174,    -1,   156,    -1,   170,    -1,   208,    -1,
     146,    -1,   189,    -1,   130,    -1,    69,    -1,   183,    -1,
     254,    -1,   186,    -1,   106,    -1,   194,    -1,   157,    -1,
     249,    -1,    71,    -1,   127,    -1,   200,    -1,    67,    -1,
     203,    -1,   185,    -1,   145,    -1,   153,    -1,   258,    -1,
     237,    -1,    55,    -1,   125,    -1,   107,    -1,    59,    -1,
     110,    -1,   239,    -1,   227,    -1,   109,    -1,    75,    -1,
     250,    -1,    54,    -1,   248,    -1,   115,    -1,   151,    -1,
      38,    -1,    99,    -1,   268,    -1,   262,    -1,   264,    -1,
     195,    -1,   132,    -1,   206,    -1,   373,    -1,   374,    -1,
     375,    -1,   371,    -1,   372,    -1,    24,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    17,    -1,   377,    -1,
     309,    -1,   310,    -1,   311,    -1,   312,    -1,   313,    -1,
       8,    -1,   544,    -1,   101,   195,     3,    -1,   101,   195,
     149,   268,     3,    -1,   101,   132,     3,    -1,   101,   132,
     149,   268,     3,    -1,   545,    -1,    61,     3,   373,   374,
      -1,    61,     3,   373,   546,   374,    -1,   547,    -1,   546,
     375,   547,    -1,     5,    -1,     4,    -1,     7,    -1,   186,
      -1,     6,    -1,     3,    -1,     8,    -1,   548,    -1,    66,
     212,     3,   549,   550,   190,     3,   133,   111,   210,    53,
     542,   117,    -1,    52,    -1,    37,    -1,   150,    -1,   246,
      -1,   100,    -1,   551,    -1,   101,   212,     3,    -1,   101,
     212,   149,   268,     3,    -1,    35,   212,     3,   113,    -1,
      35,   212,     3,    93,    -1,   552,    -1,    66,   358,   508,
       3,   553,    -1,    -1,   553,   554,    -1,   363,   264,     5,
      -1,   363,     5,    -1,   364,    56,     5,    -1,   364,     5,
      -1,   365,     5,    -1,   177,     5,    -1,   366,    -1,    18,
     366,    -1,   555,    -1,   101,   358,     3,    -1,   101,   358,
     149,   268,     3,    -1,    35,   358,     3,   553,    -1,    35,
     358,     3,    48,    -1,    35,   358,     3,    48,   264,     5,
      -1,    35,   358,     3,   201,   233,     3,    -1,    -1,   205,
      26,    -1,   205,   557,    -1,     3,    -1,   557,   375,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   457,   457,   458,   463,   470,   471,   472,   486,   487,
     505,   513,   521,   527,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   560,   560,   569,   569,   571,   571,
     573,   573,   578,   580,   584,   585,   586,   587,   588,   591,
     592,   595,   604,   622,   631,   651,   651,   711,   720,   727,
     731,   733,   735,   740,   745,   752,   753,   756,   756,   757,
     757,   758,   758,   766,   766,   774,   774,   785,   789,   790,
     791,   792,   793,   794,   795,   796,   800,   800,   802,   802,
     804,   804,   807,   807,   809,   809,   811,   811,   813,   813,
     815,   815,   817,   817,   820,   820,   822,   822,   824,   824,
     826,   826,   828,   828,   830,   830,   832,   832,   834,   834,
     837,   837,   839,   839,   841,   841,   845,   846,   847,   848,
     849,   850,   851,   852,   853,   854,   855,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     880,   881,   882,   883,   884,   885,   886,   887,   889,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     912,   913,   914,   915,   916,   918,   919,   921,   922,   923,
     925,   926,   927,   928,   935,   942,   949,   953,   957,   961,
     965,   969,   975,   976,   977,   980,   986,   993,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1004,  1006,  1008,  1010,
    1014,  1022,  1033,  1034,  1037,  1038,  1041,  1049,  1057,  1068,
    1078,  1079,  1092,  1108,  1109,  1110,  1111,  1114,  1121,  1129,
    1130,  1131,  1134,  1135,  1138,  1139,  1143,  1144,  1147,  1149,
    1153,  1154,  1157,  1159,  1163,  1164,  1167,  1168,  1171,  1177,
    1184,  1193,  1194,  1195,  1196,  1199,  1200,  1201,  1202,  1203,
    1206,  1207,  1210,  1211,  1214,  1215,  1216,  1217,  1218,  1219,
    1220,  1221,  1222,  1225,  1226,  1227,  1235,  1241,  1242,  1243,
    1246,  1247,  1250,  1251,  1255,  1263,  1273,  1274,  1275,  1284,
    1289,  1295,  1303,  1307,  1307,  1347,  1348,  1352,  1354,  1356,
    1358,  1360,  1364,  1365,  1366,  1369,  1370,  1373,  1374,  1377,
    1378,  1379,  1382,  1383,  1386,  1387,  1391,  1393,  1395,  1397,
    1400,  1401,  1404,  1405,  1408,  1412,  1422,  1430,  1431,  1432,
    1433,  1437,  1441,  1443,  1447,  1447,  1449,  1454,  1461,  1468,
    1480,  1481,  1482,  1486,  1493,  1500,  1508,  1518,  1526,  1536,
    1544,  1553,  1562,  1572,  1580,  1589,  1598,  1608,  1617,  1629,
    1634,  1639,  1645,  1652,  1659,  1666,  1676,  1683,  1692,  1699,
    1705,  1713,  1719,  1727,  1728,  1729,  1730,  1731,  1747,  1748,
    1749,  1752,  1758,  1769,  1775,  1782,  1788,  1804,  1811,  1820,
    1827,  1833,  1844,  1847,  1853,  1859,  1866,  1872,  1879,  1885,
    1891,  1897,  1903,  1909,  1915,  1921,  1927,  1933,  1939,  1945,
    1951,  1957,  1963,  1971,  1972,  1973,  1976,  1984,  1990,  2003,
    2004,  2004,  2008,  2009,  2012,  2013,  2014,  2018,  2019,  2019,
    2023,  2031,  2041,  2042,  2043,  2044,  2045,  2048,  2048,  2051,
    2052,  2055,  2065,  2078,  2079,  2079,  2082,  2083,  2084,  2085,
    2088,  2092,  2093,  2094,  2095,  2101,  2104,  2110,  2115,  2121,
    2125,  2125,  2130,  2131,  2133,  2134,  2138,  2139,  2143,  2144,
    2145,  2148,  2149,  2150,  2151,  2155,  2156,  2160,  2161,  2162,
    2163,  2164,  2165,  2166,  2167,  2171,  2179,  2188,  2189,  2190,
    2194,  2205,  2217,  2228,  2243,  2248,  2252,  2253,  2257,  2259,
    2261,  2263,  2267,  2268,  2274,  2278,  2280,  2282,  2284,  2286,
    2291,  2295,  2296,  2300,  2309,  2322,  2323,  2331,  2339,  2347,
    2348,  2349,  2350,  2351,  2352,  2354,  2356,  2360,  2361,  2364,
    2379,  2386,  2401,  2414,  2429,  2442,  2443,  2444,  2447,  2448,
    2451,  2452,  2453,  2454,  2455,  2456,  2457,  2458,  2459,  2461,
    2463,  2465,  2467,  2469,  2473,  2474,  2477,  2478,  2481,  2482,
    2485,  2486,  2487,  2488,  2489,  2490,  2491,  2492,  2493,  2494,
    2495,  2496,  2497,  2498,  2499,  2500,  2501,  2502,  2505,  2506,
    2509,  2509,  2519,  2520,  2521,  2522,  2523,  2524,  2525,  2526,
    2527,  2528,  2529,  2530,  2537,  2538,  2539,  2540,  2541,  2542,
    2543,  2544,  2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,
    2553,  2554,  2555,  2556,  2557,  2560,  2561,  2562,  2565,  2566,
    2569,  2570,  2571,  2574,  2575,  2576,  2580,  2581,  2582,  2583,
    2584,  2585,  2586,  2587,  2588,  2589,  2590,  2591,  2592,  2593,
    2594,  2595,  2596,  2597,  2598,  2599,  2600,  2601,  2602,  2603,
    2604,  2605,  2606,  2607,  2608,  2609,  2610,  2611,  2612,  2613,
    2616,  2617,  2620,  2633,  2634,  2635,  2639,  2642,  2643,  2644,
    2645,  2645,  2647,  2648,  2656,  2660,  2666,  2672,  2679,  2686,
    2692,  2698,  2705,  2714,  2715,  2718,  2719,  2722,  2723,  2724,
    2725,  2728,  2729,  2730,  2731,  2732,  2733,  2734,  2735,  2736,
    2737,  2744,  2745,  2746,  2747,  2748,  2749,  2750,  2751,  2754,
    2755,  2756,  2756,  2756,  2757,  2757,  2757,  2757,  2757,  2757,
    2758,  2758,  2758,  2758,  2758,  2758,  2758,  2758,  2758,  2759,
    2759,  2759,  2759,  2759,  2759,  2759,  2760,  2760,  2760,  2760,
    2761,  2761,  2761,  2761,  2761,  2761,  2761,  2761,  2761,  2761,
    2761,  2761,  2762,  2762,  2762,  2762,  2762,  2762,  2762,  2762,
    2763,  2763,  2763,  2763,  2763,  2763,  2763,  2763,  2764,  2764,
    2764,  2764,  2764,  2764,  2764,  2764,  2764,  2765,  2765,  2765,
    2765,  2765,  2765,  2765,  2765,  2766,  2766,  2766,  2767,  2767,
    2767,  2767,  2767,  2767,  2767,  2767,  2768,  2768,  2768,  2768,
    2768,  2768,  2768,  2769,  2769,  2769,  2769,  2769,  2769,  2769,
    2770,  2770,  2770,  2770,  2771,  2771,  2771,  2771,  2771,  2771,
    2771,  2771,  2771,  2771,  2771,  2771,  2772,  2772,  2772,  2772,
    2772,  2773,  2780,  2784,  2790,  2796,  2802,  2814,  2818,  2824,
    2832,  2833,  2836,  2837,  2838,  2839,  2840,  2841,  2842,  2849,
    2853,  2861,  2862,  2865,  2866,  2867,  2870,  2874,  2880,  2889,
    2897,  2908,  2912,  2921,  2922,  2926,  2927,  2928,  2929,  2930,
    2931,  2932,  2933,  2936,  2940,  2946,  2956,  2963,  2970,  2978,
    2988,  2989,  2990,  2993,  2994
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
  "LISTEN", "NOTIFY", "UNLISTEN", "SELF", "INHERITS", "ONLY", "LESS",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED",
  "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MINUS",
  "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION",
  "NULLX", "OPEN", "OUT", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL",
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
  "drop_table_stmt", "opt_drop_cascade", "create_index_stmt",
  "index_col_list", "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "truncate_extra_tables", "opt_truncate_options", "listen_stmt",
  "unlisten_stmt", "notify_stmt", "reclaim_table_stmt",
  "analyze_table_stmt", "alter_table_stmt", "opt_col_position",
  "insert_stmt", "opt_ondupupdate", "@32", "opt_on_conflict",
  "opt_conflict_target", "conflict_action", "@33", "upsert_asgn_list",
  "insert_opts", "opt_into", "opt_col_names", "insert_col_list",
  "insert_vals_list", "@34", "insert_vals", "insert_asgn_list",
  "replace_stmt", "copy_stmt", "@35", "opt_copy_cols", "copy_col_list",
  "copy_direction", "copy_target", "opt_copy_options", "copy_option_list",
  "copy_option", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_inherits",
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
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   378,   379,   379,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   381,   380,   382,   380,   383,   380,
     384,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   385,   385,   386,   386,   387,   380,   380,   380,   388,
     380,   380,   380,   380,   380,   389,   389,   390,   380,   391,
     380,   392,   380,   393,   380,   394,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   395,   380,   396,   380,
     397,   380,   398,   380,   399,   380,   400,   380,   401,   380,
     402,   380,   403,   380,   404,   380,   405,   380,   406,   380,
     407,   380,   408,   380,   409,   380,   410,   380,   411,   380,
     412,   380,   413,   380,   414,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   415,   415,   415,   380,   380,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   380,   380,   380,   380,
     417,   417,   380,   380,   380,   380,   380,   380,   380,   418,
     419,   419,   419,   420,   420,   421,   421,   422,   422,   423,
     423,   423,   424,   424,   425,   425,   426,   426,   427,   427,
     428,   428,   429,   429,   430,   430,   431,   431,   432,   432,
     432,   433,   433,   433,   433,   434,   434,   434,   434,   434,
     435,   435,   436,   436,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   438,   438,   438,   439,   440,   440,   440,
     441,   441,   442,   442,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   445,   444,   446,   446,   447,   447,   447,
     447,   447,   448,   448,   448,   449,   449,   450,   450,   451,
     451,   451,   452,   452,   453,   453,   454,   454,   454,   454,
     455,   455,   456,   456,   457,   418,   458,   459,   459,   459,
     459,   458,   460,   460,   461,   461,   458,   418,   462,   462,
     463,   463,   463,   418,   464,   464,   464,   464,   464,   464,
     464,   464,   464,   464,   464,   464,   464,   464,   464,   465,
     465,   465,   466,   466,   466,   466,   418,   467,   418,   468,
     468,   469,   469,   470,   470,   470,   470,   470,   418,   418,
     418,   471,   471,   472,   472,   473,   473,   418,   474,   418,
     475,   475,   418,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   477,   477,   477,   418,   478,   478,   479,
     480,   479,   481,   481,   482,   482,   482,   483,   484,   483,
     485,   485,   486,   486,   486,   486,   486,   487,   487,   488,
     488,   489,   489,   490,   491,   490,   492,   492,   492,   492,
     478,   493,   493,   493,   493,   418,   494,   494,   494,   418,
     496,   495,   497,   497,   498,   498,   499,   499,   500,   500,
     500,   501,   501,   501,   501,   502,   502,   503,   503,   503,
     503,   503,   503,   503,   503,   418,   504,   505,   505,   505,
     506,   506,   506,   506,   418,   418,   507,   507,   418,   418,
     418,   418,   508,   508,   418,   509,   509,   509,   509,   509,
     418,   510,   510,   418,   511,   512,   512,   511,   511,   513,
     513,   513,   513,   513,   513,   513,   513,   514,   514,   515,
     515,   511,   511,   511,   511,   516,   516,   516,   517,   517,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   519,   519,   520,   520,   521,   521,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   523,   523,
     524,   518,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   526,   526,   526,   527,   527,
     528,   528,   528,   529,   529,   529,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     531,   531,   532,   533,   533,   533,   418,   534,   534,   534,
     535,   535,   536,   536,   418,   537,   537,   537,   537,   537,
     537,   537,   537,   538,   538,   539,   539,   540,   540,   540,
     540,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   542,   542,   542,   542,   542,   542,   542,   542,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   418,   544,   544,   544,   544,   418,   545,   545,
     546,   546,   547,   547,   547,   547,   547,   547,   547,   418,
     548,   549,   549,   550,   550,   550,   418,   551,   551,   418,
     418,   418,   552,   553,   553,   554,   554,   554,   554,   554,
     554,   554,   554,   418,   555,   555,   418,   418,   418,   418,
     556,   556,   556,   557,   557
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
       1,     3,     1,     1,     3,     4,     5,     3,     3,     4,
       6,     9,     3,     0,     5,     1,     0,     5,     3,     5,
       6,     5,     0,     1,     1,     0,     1,     1,     1,     2,
       2,     0,     0,     1,     2,     4,     6,     6,     6,     0,
       2,     0,     1,     3,     3,     1,     8,     2,     2,     2,
       0,     6,     2,     4,     0,     2,     7,     1,     4,     6,
       0,     1,     1,     1,     8,     9,    10,     9,    11,    10,
      12,    11,    13,     9,    11,    10,    12,    11,    12,     1,
       3,     1,     4,     4,     4,     6,     1,     3,     2,     3,
       5,     1,     3,     0,     2,     2,     3,     3,     1,     1,
       1,     2,     3,     2,     2,     2,     4,     1,     3,     1,
       3,     5,     1,    10,    10,    17,    12,    19,    11,     6,
       8,     6,     6,     6,     9,     6,     5,     8,     7,     9,
       8,    10,     9,     0,     1,     2,     1,    10,     6,     0,
       0,     5,     0,     4,     0,     3,     4,     2,     0,     5,
       3,     5,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
       0,     7,     0,     3,     1,     3,     1,     1,     1,     1,
       1,     0,     1,     4,     3,     1,     3,     2,     2,     2,
       1,     2,     2,     2,     1,     1,     9,     0,     2,     2,
       3,     5,     5,     7,     5,     1,     4,     4,     3,     5,
       3,     5,     0,     2,     1,     5,     7,     7,     9,    11,
       1,     2,     3,     1,    10,     0,     4,    11,    18,     0,
       4,     3,     5,     5,     9,    10,     7,     1,     3,     9,
       9,     9,     6,    11,     8,     0,     1,     2,     1,     3,
       5,     7,     4,     4,     5,     5,     4,     6,    11,    13,
      13,    15,     4,     6,     1,     3,     1,     3,     1,     3,
       0,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       4,     3,     3,     3,     2,     3,     4,     4,     1,     3,
       0,     4,     0,     3,     2,     3,     3,     3,     3,     5,
       5,     5,     3,     5,     2,     7,     5,     7,     5,     2,
       3,     2,     3,     2,     3,     5,     4,     5,     7,     8,
       8,     7,     6,     6,     5,     0,     3,     5,     0,     1,
       0,     2,     2,     0,     4,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     3,     5,     2,     4,     1,     1,     1,     1,
       3,     3,     3,     3,     5,     5,     1,     1,     1,     3,
       1,     3,     3,     0,     1,     1,     1,     3,     3,     2,
       1,     3,     3,     3,     1,    10,     9,    12,    11,    12,
      11,    14,    13,     0,     1,     1,     3,     2,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     4,     5,     5,     5,     5,     5,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     5,     3,     5,     1,     4,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
      13,     1,     1,     1,     1,     1,     1,     3,     5,     4,
       4,     1,     5,     0,     2,     3,     2,     3,     2,     2,
       2,     1,     2,     1,     3,     5,     4,     4,     6,     6,
       0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   555,     0,   350,     0,   452,     0,
       0,     0,     0,     0,   452,     0,   284,     0,   507,     0,
       0,     0,   239,   345,   357,   363,   386,   393,   398,   399,
     400,   407,   409,   412,   436,   475,   479,   505,   515,   524,
     530,   533,   686,   694,   852,   857,   869,   876,   881,   893,
       0,     0,     0,     0,     0,     0,   522,     0,     0,     0,
       0,     0,     0,   522,   556,     0,     0,   522,     0,   480,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   458,
     401,   405,   403,   404,     0,     0,   458,     0,     0,   689,
     690,     0,     0,     0,     0,   531,     0,     1,     2,   388,
       0,     0,   883,   410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,     0,
     522,   482,   354,     0,   349,   347,   348,     0,   518,     0,
     855,     0,   387,   853,     0,   877,     0,   520,     0,   360,
       0,   894,     0,   454,   455,   456,   457,   453,     0,   402,
       0,   408,     0,     0,     0,     0,   687,   688,     0,     4,
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
     299,   240,   293,   389,   509,   508,   299,     0,     0,     0,
       0,     0,   300,   302,   316,   303,   316,   532,     3,     0,
       0,   394,   395,   880,   879,     0,     0,     0,     0,     0,
       0,     0,     0,   897,     0,   896,     0,   867,   863,   862,
     866,   864,   868,   865,   858,     0,   860,     0,     0,   523,
     516,     0,     0,   703,     0,     0,     0,     0,   703,   872,
     871,     0,   517,     0,     0,     0,   883,     0,     0,     0,
       0,   352,   243,     0,     0,     0,     0,     0,     0,     0,
       0,   361,   362,   358,     0,     0,   459,   406,     0,   459,
     693,   692,   691,     0,    65,     0,    32,    31,    20,     0,
       0,     0,     0,     0,    55,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,   339,
     313,   299,     0,     0,     0,     0,     0,   324,   323,   327,
     331,   328,     0,     0,   325,   315,     0,     0,   397,   396,
       0,     0,     0,     0,     0,   426,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   891,   884,   411,   859,     0,     0,     0,   667,
     676,   635,   635,   635,   635,   635,   660,   635,   657,     0,
     635,   635,   635,   638,   669,   638,   668,   635,   635,   635,
       0,   638,   635,   638,   659,   666,   658,   677,   678,     0,
       0,   661,   525,     0,     0,     0,     0,     0,     0,   704,
     705,     0,     0,     0,     0,     0,   875,   873,   874,     0,
       0,     0,     0,     0,   882,   683,   484,     0,   486,   487,
       0,   355,     0,   264,     0,   243,   354,   519,   856,   854,
     878,   521,   360,   895,     0,     0,     0,   514,     0,     0,
       5,    51,    66,     0,    48,     0,     0,   228,     0,     0,
       6,     0,    57,     0,     0,     0,   214,   212,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
     159,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   194,     0,     0,     0,
      64,    21,    23,    24,    22,   234,   232,    46,     0,    44,
     200,    67,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    33,    25,    26,    28,    14,    15,    16,    17,    18,
      19,    27,    30,    29,     0,   297,   243,     0,   294,   391,
     390,   299,     0,     0,     0,   304,     0,   339,     0,   344,
     312,     0,   243,   301,   325,   325,     0,   318,     0,   326,
       0,   308,   307,     0,     0,     0,     0,   422,   419,   425,
     421,   602,     0,     0,     0,     0,   423,   898,   899,   892,
     890,   886,     0,   888,     0,   889,   861,   703,   703,     0,
     664,   640,   646,   643,   640,   640,     0,   640,   640,   640,
     639,   643,   643,   640,   640,   640,     0,   643,   640,   643,
       0,     0,     0,     0,     0,     0,     0,   707,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   684,   685,     0,     0,   600,   552,
     316,   483,     0,   488,   489,   490,   491,   244,     0,   271,
     243,   351,   353,   359,     0,   439,   461,     0,     0,   438,
     439,     0,   439,     0,    77,     0,   226,     0,     0,     0,
       0,    53,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,   162,   163,   164,   165,   166,   167,     0,     0,
       0,     0,   143,     0,     0,     0,   147,   148,   149,   151,
       0,     0,   153,     0,   156,   157,   158,     0,     0,     0,
       0,     0,     0,    84,    78,    79,    80,    81,    82,    83,
     133,   134,   135,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     170,   171,   172,   173,   174,   175,   176,     0,     0,     0,
       0,     0,     0,     0,     0,   186,     0,   189,   190,   191,
       0,    60,     0,    62,     0,    47,    45,     0,     0,   235,
     233,    69,     0,     0,    40,    36,    38,     0,    58,   245,
       0,     0,   339,   341,   341,   341,     0,   305,   309,     0,
       0,     0,   264,   329,   330,     0,     0,   332,     0,     0,
       0,     0,     0,   602,   602,     0,   433,   602,   428,     0,
       0,   885,   887,     0,     0,     0,   652,   662,   654,   656,
     680,     0,   655,   651,   650,   673,   672,   649,   653,   648,
       0,   670,   647,   671,     0,     0,   527,   679,     0,   526,
       0,   708,   710,   709,     0,   706,     0,   379,     0,     0,
       0,     0,     0,   381,     0,     0,     0,     0,     0,   721,
       0,     0,     0,     0,     0,     0,     0,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   558,     0,     0,
     485,   504,     0,     0,   500,     0,     0,     0,     0,   481,
     492,   495,     0,     0,   900,   356,     0,     0,     0,   470,
     460,     0,     0,   439,   477,   439,   478,    52,   230,     0,
     229,     0,     0,     0,    56,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    88,    90,     0,     0,     0,     0,     0,   122,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      59,     0,     0,     0,     0,     0,     0,   254,   243,   392,
     306,     0,     0,     0,     0,   314,     0,   510,     0,     0,
     271,   321,   319,     0,     0,   317,   333,     0,     0,     0,
       0,     0,   433,   433,   602,     0,     0,   614,     0,   619,
       0,     0,     0,     0,     0,   434,   623,   604,     0,   621,
     430,   433,   420,   427,     0,     0,   636,     0,   641,   642,
       0,     0,   643,     0,   643,   643,   665,     0,     0,     0,
     715,   718,   717,   719,   716,   711,   712,   714,   720,   713,
       0,     0,     0,     0,     0,     0,   364,     0,     0,     0,
       0,     0,     0,   721,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   600,   554,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   539,   600,     0,   682,   499,   497,
     498,   501,   502,   503,     0,     0,     0,   249,   249,   265,
     266,   272,     0,   346,   472,   471,     0,     0,   462,   467,
     466,     0,   464,   442,   476,   227,   231,     0,    54,     0,
     128,   127,     0,   132,     0,     0,   215,   216,   161,   139,
     140,     0,     0,   144,   145,   146,   150,   152,   154,   195,
     196,   197,   198,     0,    85,    94,    96,    92,    98,   100,
     102,   136,     0,     0,   138,   211,   256,   256,   256,   104,
       0,     0,   112,     0,     0,   120,   256,   256,   168,     0,
       0,     0,   180,   181,     0,     0,   184,     0,   187,     0,
     192,     0,    61,    63,    68,    72,     0,     0,    50,     0,
       0,    42,     0,    43,    35,     0,     0,   264,   245,   340,
       0,     0,     0,   310,     0,     0,     0,   900,   334,     0,
     320,     0,     0,     0,   598,     0,   424,   432,   433,   603,
     435,     0,     0,     0,     0,     0,     0,   624,   605,   606,
     608,   607,   612,     0,     0,     0,     0,   622,   620,   429,
       0,     0,   721,     0,     0,   645,   674,   681,   675,   663,
       0,   528,   365,     0,   721,     0,     0,     0,     0,     0,
     380,     0,   373,     0,     0,     0,     0,   729,   730,   731,
     733,   732,   851,   736,   737,   738,   844,   735,   734,   839,
     840,   841,   842,   843,   826,   739,   780,   771,   776,   721,
     822,   812,   783,   815,   758,   765,   762,   749,   805,   794,
     721,   802,   820,   756,   757,   827,   743,   750,   798,   814,
     819,   816,   777,   755,   824,   696,   754,   774,   767,   764,
     721,   813,   803,   744,   793,   832,   770,   784,   766,   785,
     769,   808,   791,   752,   721,   741,   825,   747,   809,   761,
     788,   800,   760,   721,   789,   786,   787,   795,   807,   797,
     763,   768,   792,   781,   782,   799,   831,   804,   773,   806,
     759,   833,   790,   778,   772,   779,   775,   818,   746,   740,
     811,   817,   751,   753,   742,   823,   801,   821,   796,   810,
     748,   745,   829,   721,   830,   828,   846,   847,   848,   849,
     850,   837,   838,   834,   835,   836,   845,   722,     0,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   282,     0,     0,     0,
       0,   535,   551,   559,   602,     0,   494,   496,   250,   251,
       0,   268,   270,     0,     0,     0,   903,   901,   902,   440,
       0,   463,     0,     0,     0,   900,     0,     0,     0,   131,
     218,   219,   220,   221,   224,   223,   225,   217,   222,     0,
       0,     0,   256,   256,   256,   256,   256,   256,     0,     0,
       0,   260,   260,   260,   256,     0,     0,     0,   256,     0,
       0,     0,   256,   260,   260,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    74,    41,    37,    39,   249,   252,
     255,   271,   254,   342,     0,     0,     0,     0,   511,   512,
       0,   506,     0,   413,   576,     0,   574,     0,   414,     0,
     431,     0,     0,     0,     0,     0,     0,   626,     0,     0,
       0,     0,     0,     0,   721,     0,   637,   644,     0,   721,
       0,   369,   382,   383,   384,     0,     0,     0,     0,   366,
     695,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     375,     0,     0,     0,     0,   539,     0,     0,     0,     0,
     566,     0,     0,     0,   563,     0,   562,     0,   572,     0,
       0,     0,     0,     0,   534,   601,   493,   249,   267,   274,
     273,     0,     0,   474,   473,   469,   468,     0,   444,   437,
       7,   129,   126,   141,   142,   199,   260,   260,   260,   260,
     260,   260,   201,     0,   137,     0,     0,     0,     0,     0,
     260,   106,     0,     0,   260,   114,     0,     0,   260,     0,
       0,   177,   178,   179,   182,   183,     0,   188,   193,   247,
       0,     0,   246,   275,   264,   338,     0,   337,   336,     0,
       0,   335,     0,     0,     0,   418,     0,   599,   616,     0,
     634,   618,     0,     0,     0,   627,   625,   609,   610,   611,
     613,     0,   721,     0,   698,   529,     0,   700,     0,   377,
     374,     0,   723,     0,     0,     0,     0,     0,   721,   371,
       0,     0,     0,   368,     0,   537,   553,     0,     0,     0,
       0,     0,   564,   565,   283,   560,   541,     0,     0,     0,
       0,     0,   269,   904,     0,   441,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,   257,     0,    87,
      89,    91,     0,   256,     0,     0,     0,   256,     0,     0,
       0,   123,   125,     0,   253,   249,     0,   280,   271,   343,
     311,   513,   416,     0,   577,   575,     0,   632,   633,     0,
       0,     0,   721,     0,   697,   699,   385,   370,   728,   727,
     724,   726,   725,     0,   378,   376,     0,     0,   567,     0,
       0,   573,     0,   540,     0,     0,     0,     0,     0,     0,
       0,     0,   465,     0,     0,   443,    95,    97,    93,    99,
     101,   103,   202,     0,   249,   261,   105,   260,   108,   110,
     113,   260,   116,   118,   121,   185,   248,   277,   276,     0,
     241,   242,     0,   615,   617,   631,   628,     0,   702,   870,
     372,     0,     0,   561,     0,   536,   542,   543,     0,     0,
       0,   450,     0,   445,     0,   447,   448,   259,   262,     0,
       0,   256,   256,     0,   256,   256,     0,     0,   281,     0,
     629,   630,   701,     0,     0,     0,     0,     0,     0,     0,
       0,   446,     0,   249,   107,   260,   260,   115,   260,   260,
     279,   278,   578,     0,     0,     0,     0,     0,     0,     0,
     546,   451,     0,   263,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,   580,     0,     0,   449,   109,   111,
     117,   119,   415,   579,     0,     0,     0,     0,   568,     0,
       0,   547,   544,     0,   594,     0,     0,   538,     0,   580,
     580,     0,     0,   545,     0,   595,   417,     0,   591,   593,
     592,     0,     0,     0,   570,   569,     0,   548,   596,   597,
     581,   589,   583,     0,   585,   590,   587,     0,   580,     0,
     584,   582,   588,   586,   571,     0,     0,     0,     0,     0,
       0,     0,   549,   550
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   641,  1027,  1231,  1233,  1229,   642,   922,   653,
    1232,   643,  1017,  1225,  1018,  1226,   654,  1416,  1417,  1418,
    1724,  1722,  1723,  1725,  1726,  1727,  1734,  1993,  2111,  2112,
    1738,  1997,  2114,  2115,  1742,  1426,  1427,   660,  1171,   381,
      21,    22,   623,  1237,  1759,  1691,  1902,  1457,  1731,  1987,
    1877,  2065,   899,  1359,  1360,  1144,  2007,  2080,  1677,    91,
     281,   282,   503,   291,   292,   293,   294,   796,   526,   295,
     523,   810,   524,   806,  1255,  1256,   795,  1242,  1764,   296,
      23,    70,   127,   351,    24,   363,    25,  1102,  1103,    26,
      27,   790,    99,    28,    29,    30,    31,    32,    33,  1280,
      34,  1149,  1852,  1705,  1978,  2055,  2132,  1975,    79,   148,
     636,   907,  1153,  1703,  1371,   905,    35,    36,   121,   349,
     617,   620,   896,  1139,  1140,  1141,    37,    94,   802,    38,
     107,    39,    40,    41,  1844,  1681,  2180,  2181,    68,  1126,
    1127,  1777,  1775,  2143,  2172,  1475,  1128,  1056,   840,   851,
    1066,  1067,   592,  1071,   889,   890,    42,    89,    90,    43,
     598,   599,   600,  1310,  1324,  1657,    44,    45,   325,   326,
      46,   341,   609,    47,    48,   315,   553,    49,  1363,  1698
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1637
static const yytype_int16 yypact[] =
{
   11785,  -134,   -80,   170,   532,   515, -1637,   379, -1637,   535,
     560,   144,   305,   369, -1637,    16, -1637,   388,   615,   104,
     597,   289, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
     659,   667,   672,   681,   313,   484,   554,   709,   566,   718,
     143,   722,   725,   554, -1637,   497,   586,   554,   498, -1637,
      49,   132,   204,   740,   287,   452,   459,   476,   504,   603,
     581,   373, -1637, -1637,   753,   756,   603,   148,   417,   390,
   -1637,  6430,   767,   682,    54, -1637,   770, -1637, 11785,    70,
      59,   412,    86,   405,    39,    -1,   522,   777,   748,   815,
     447,   633,   509,   557,   473,   536,   829, -1637,   474,   858,
     554,   499,   513,   878, -1637, -1637, -1637,   -99, -1637,   619,
   -1637,   621, -1637, -1637,   623, -1637,   626, -1637,   632,    69,
     637, -1637,   648, -1637, -1637, -1637, -1637, -1637,   893, -1637,
     916, -1637,   670,   919, 10140, 10140, -1637, -1637,   950,   115,
   -1637, -1637, -1637, -1637,   975, 10140, 10140, 10140, -1637, -1637,
   -1637,  7543, -1637, -1637,   552, -1637, -1637, -1637,   595, -1637,
   -1637, -1637, -1637, -1637,   962,   634,   645,   661,   673,   689,
     696,   704,   734,   745,   761,   771,   810,   826,   835,   851,
     867,   871,   889,   905,   914,   922,   926,   933,   936,   938,
     941,   954,   964,   972,   974,   976,   989,  1004,  1049,  1050,
    1051,  1052,  1053,  1054,  1055,  1056,  1063,  1065,  1067,  1068,
    1069,  1073,  1083,  1084,  1086,  1087,  1088,  1089,  1090,  1091,
   -1637, -1637,  1093,  1094,  1095,  1096,  1099,  1100,  1104,  1105,
    1111,  1112,  1114,  1118,  1119,  1122,  1126,  1130,  1131,  1132,
    1133,  1134,  1135,  1136,  1137,  1138,  1139,  1141,  1142,  1144,
    1145,  1146,  1147,  1149,  1150,  1151,  1152,  1156,  1157, 10140,
   12190,   -93, -1637,   630,   698,   726,    22,  1158,   995,  1159,
      50,  -166,   710, -1637,  1010, -1637,  1010, -1637, -1637,  1025,
    1045, -1637, -1637, -1637, -1637,    97,   482,  1184,   112,  1228,
     491,   652,  1436,  1271,  1310,    93,  1545, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637,   241, -1637,  1547,  1550, -1637,
   -1637, 11834,  1365,    55,  1555,  1373,  1296,  1564,    55, -1637,
   -1637,    43, -1637,  1379,   512,  1303, -1637,  1571,  1578,   317,
    1561, -1637,   306,  -131,    54,  1585,  1586,  1587,  1588,  1589,
    1590, -1637, -1637, -1637,  1591,  1592,   188, -1637,  1593,   207,
   12310, 12310, -1637,  1595, 10140, 10140,  1207,  1207,  1566, 10140,
   11693,   404,  1599,  1602,  1230, -1637, 10140,  6801, 10140, 10140,
   10140, 10140, 10140, 10140, 10140, 10140, 10140,  1233, 10140, 10140,
   10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140,
   10140, 10140, 10140,  1234, 10140, 10140, 10140,  1249, 10140, 10140,
   10140, 10140, 10140, 10140,  7914, 10140, 10140, 10140, 10140, 10140,
   10140, 10140, 10140, 10140, 10140,  1250,  1251,  1252,  1254,  1258,
   10140, 10140,  1260,  1262,  1267, 10140, 10140,  1637,  1269,  1270,
   10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140,
   10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140,
   10140, 10140,  1272, 10140, 10140, 10140,  1273,  1127, -1637, 10140,
   10140, 10140, 10140, 10140,    20,  1275,   744, 10140,  7172, 10140,
   10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140, 10140,
   10140, 10140,  1642, -1637,    54,  1646, 10140,  1647,  1648,   352,
   -1637,   138, 10140,  1278,   332,  1650,    54, -1637, -1637, -1637,
     -11, -1637,    54,  1501,  1469, -1637,  1656,  1657, -1637, -1637,
    1658,  1659,  1660,  1662,  1666, -1637,  1667,  1668,  1669, 11834,
    1671,  1445,  1676,  1677,  1679,  1678,  1681,  1321,  1688,    14,
     492,  1689, -1637, -1637, -1637, -1637,   529,  1319,  1323, -1637,
   -1637,  1331,  1331,  1331,  1331,  1331, -1637,  1331, -1637,  1347,
    1331,  1331,  1331,  1665, -1637,  1665, -1637,  1331,  1331,  1331,
    1350,  1665,  1331,  1665, -1637, -1637, -1637, -1637, -1637,  1351,
    1352, -1637,    96,  1723, 11834,  1724,  1725,  1726,  1356,  1357,
   -1637,  -150,  1728,  1730,  1544,  1374, -1637, -1637, -1637,  1574,
    1764,  1579,  1500,  1767,    93,   284, -1637,   365, -1637, -1637,
      11, -1637, 10140,  1580,    54,  -121,   513, -1637, -1637, -1637,
   -1637, -1637,    69, -1637,  1769,  1770,   -79, -1637,  1769,   -73,
   -1637,  2416, -1637,  1400, 12310, 11722,   438, -1637, 10140, 10140,
   -1637,  1401, -1637, 10140,  1548,   785, -1637, -1637, -1637,  2123,
    8285,  2754,  3092,  3430,  2461,  2799,  3137,  3475,  3813,  4151,
   -1637,  3768,  4106,  4444,  4782,  4489,  5120,  5458,  5796,  4827,
    5165,  5503,   237,  6134,  5841,  6179, -1637,  8745,  8796,  8848,
   -1637, 12231,  6599,  6648,  6817,  6866,  8491,  1402,  8874,  9043,
    9116,  9153,  9205,  9231,  9414,  9487,  6891,  6916,  6970, -1637,
   -1637, -1637, -1637, -1637,  9518,  7006,  1441,  1442,  1443,   620,
     951,  1407,  1446,  1447,  7204,  9588,  9613,  9785,  9875,  9900,
    9954,  9979, 10156,  7249,  7274,  7299,  7341,  7375,  7562,  7616,
    7641,  1001, 10205, 10232, 10257,  7666, -1637,  1074, 10283,  7712,
   -1637, -1637,  8132,  6939,  6521,  9541,  9541, -1637,    25, -1637,
   -1637,  1556, 10140, 10140,  1413, 10140, 12258,  1414,  1415,  1416,
   10140,  1386,  1329,  1013,  1372,   899,   899,   664,   664,   664,
     664,   737,  1566,  1566,    71, -1637,  -121,  1661, -1637, -1637,
    1417,   138,  1634,  1636,  1638, -1637,  1548,   352, 10320, -1637,
   -1637,     9,   -95,   710,  1469,  1469,  1640,  1604,    54, -1637,
    1641, -1637, -1637,   355, 11834, 11834,  1800, -1637, -1637, -1637,
   -1637,  1772, 11834,  1804,  1575,  1576, -1637, -1637, -1637, -1637,
   -1637, -1637,  1806, -1637,  1807, -1637, -1637,    55,    55,  1808,
   -1637, -1637, -1637, -1637, -1637, -1637,  1810, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637,  1810, -1637, -1637, -1637,
    1811,  1812,  1629,  1444,  1448, 10140,  1455,  1772, 11834, 11834,
   11834,  1612,    55,  1582,   159,  -135,  1644,  1827,   540,  1837,
     133,  1838,  1839,  1663, -1637, -1637,  1761,  1846,   -15, -1637,
    1010, -1637,  1847, -1637, -1637, -1637,   353, 12310,  1795,  1680,
    -121, -1637, -1637, -1637,  1834,  -170, -1637,   377,  1482, -1637,
    -170,  1482,  1664, 10140, -1637, 10140, -1637, 10140, 12090, 11766,
    1774,  7741,  1483,  1486, 10140, 10140, -1637, 10140, 12023,  1707,
    1707, 10140, -1637, -1637, -1637, -1637, -1637, -1637, 10140, 10140,
   10140, 10140, -1637, 10140, 10140, 10140, -1637, -1637, -1637, -1637,
   10140, 10140, -1637, 10140, -1637, -1637, -1637, 11834, 11834, 10140,
   10140, 10140,  1860, -1637,  1528,  1530,  1531,  1532,  1533,  1539,
   -1637, -1637, -1637, 10140, 10140, 10140, -1637, 10140,  1504,  1506,
    1510,  1554,  1879,  1558,  1882,  1559,  1519,  1520, 10140, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, 10140, 10140, 10140,
   10140, 10140, 10140, 10140, 10140, -1637, 10140, -1637, -1637, -1637,
   10140, -1637, 10140, -1637, 10140, -1637, -1637, 10140,  1548,  9541,
    9541,  1670, 12284, 10140, -1637, 10140, 10140,  1548, -1637,  1763,
      54,  1895,   352,  1768,  1768,  1768,  1526, -1637,   146, 10140,
    1899,  1900,  1580, -1637, -1637,    54, 10140,   -77,    54,  1534,
    1747,  1749,  1536,  1772,  1772, 11834, 11781,  1772, -1637,  1907,
    1908, -1637, -1637,  1538,  1540,   401,   243,   707,   243,   243,
   -1637,   411,   243,   243,   243,   707,   707,   243,   243,   243,
     414,   707,   243,   707,  1541,  1542,  1850, -1637, 10140, 12310,
     159,  1772,  1772,  1772,   465, -1637,  1549, -1637,  1551,  1560,
    1562,  1567,   453, -1637,  1686,   159,  1914,   206,  1870, -1637,
    1794,  1691,   159,   212,  1742,  1942,  1947,   -87,  1952,  1583,
    1801,   519,  1584,  1600,  1809,  1606,   456, -1637,  1958,  1548,
   -1637, -1637,  1959,    -7,  1974,  1977,  1978,  1610,   605, -1637,
    1609, -1637,   584, 10140,  1780, -1637,  8656,  1829,  1984, -1637,
   -1637,  1985,  9027,  -160, -1637,  -160, -1637, -1637, 12310, 12115,
   -1637, 10140,  1617, 10140, -1637, -1637,  8672,  1101, 10345, 10140,
   10140,  1618,  1620, 10513, 10538, 10570,  7931,  7999, 10598, 10624,
   10649, 10677, 10702, 10727,   -17,    21, 10752, 10777,  8024,  1621,
    1623,  1624,  1625,  1626,  1627,  1628,  1166,  8049, 10802, 10827,
   -1637, -1637, -1637,  1630,   469,  1639,   483,  1643, -1637, -1637,
   10852,  8083,  8108,  8301, 10879, 10904,  8366,  8407,  1191,  1245,
    1687, 10935, 10963,  1652,  1654, 10140,  1548, 10140,  1358,  1548,
   12310,  1548,  1675,  1548,  1683,  1690,  1955,  1874,  -121, -1637,
   -1637,  1861,  1645,  1651,  1672, -1637,  2017, 12310,  2013,    47,
    1680, -1637, 12310, 10140,  1682, -1637, -1637,   -77, 10140,  1693,
    1697,  2031, 11781, 11781,  1772,  1849,  2033,  1698,  1699,  1701,
    1992,  2035,  1702,  2036,   122, -1637, -1637, -1637,  1884,  1885,
   -1637, 11781, -1637, -1637,  1844,   542, -1637,  2038, -1637, -1637,
    1816,  2047, -1637,  2048, -1637, -1637, -1637,  1703, 10990,   500,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
     624,   159,  2050,  2051,  2060,  2076, -1637,  2081,  1712,   502,
    1713,  1832,   159, -1637,  1427,  1979,  1716,   524,  1835,   159,
    2090,   232,  1961,   -15, -1637,   357, 10140,  1719,  1722,  1751,
    2093,  2093,  1752,  2031,    65,   -15, 11834, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637,   605,   527,   605,    66,    90,  1765,
   -1637,  1731,   155, -1637, -1637, 12310,  1851,  2078, -1637, -1637,
   12310,   563, -1637,  1932, -1637, -1637, 12310,  2122, -1637, 10140,
   -1637, -1637, 10140, -1637, 11015, 11665, -1637, -1637, -1637, -1637,
   -1637, 10140, 10140, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, 10140, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, 10140, 10140, -1637, -1637,  1789,  1789,  1789, -1637,
    1821,   874, -1637,  1822,   935, -1637,  1789,  1789, -1637, 10140,
   10140, 10140, -1637, -1637, 10140, 10140, -1637, 10140, -1637, 10140,
   -1637, 10140, -1637, -1637, -1637, -1637,  1782,  1792,  1358,  1796,
    1797, -1637,  1798, -1637, -1637, 10140, 10140,  1580,  1763, -1637,
    2165,  2165,  2165,  1803, 10140, 10140,  2175,  1780, 12310,  2093,
   -1637, 11043,  2176,  2177, -1637,   567, -1637, -1637, 11781, -1637,
   -1637,  2181, 10140,  2182,  2144,   -30, 10140, -1637, -1637, -1637,
   -1637, -1637, -1637,  1824,  1825,  1826, 10140, -1637, -1637, -1637,
     465,  2136, -1637,  1828,  2199, -1637,   707, -1637,   707,   707,
   10140, -1637, -1637,  2152, -1637,   569,  1833,  1840,  1841,  1831,
   -1637,   159, -1637,   159,  1848,   572,  1819, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,  1998,   159,
   -1637,  1852,   575,  1856,  1966,   159,  1971,   577,  1858,  2077,
    2079,  1862, 11068,  2176,  2093,  2093, -1637,   579,   612,  2177,
     614,    10, -1637, -1637,  1772,   616, -1637, -1637, -1637, -1637,
    2214, -1637, -1637,   584, 10140, 10140, -1637, -1637,  1863, -1637,
    9398, -1637,  9769,  1864,  2158,  1780,  1859, 11093, 11118, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, 11143,
   11168, 11193,  1789,  1789,  1789,  1789,  1789,  1789,  2089, 11218,
    2184,  2052,  2052,  2052,  1789,  1868,  1871,  1873,  1789,  1869,
    1875,  1876,  1789,  2052,  2052, 11245, 11270, 11300, 11328, 11356,
    8466, 11381, 11409, -1637, -1637, -1637, -1637, -1637, 12143,   227,
   12310,  1680,  1874, -1637,   618,   625,   628,  2241, 12310, 12310,
    2228, -1637,   635,  2234, -1637,   685, -1637,   692, -1637,  2250,
   -1637,   699, 11434,   701,  1881,  1886,  2098, -1637, 11459,  1887,
    1888,  1891, 11484,   629, -1637,  2157, -1637, -1637, 11509, -1637,
    2495, -1637, -1637, -1637, -1637,  2257,   706,   708,   159, -1637,
   -1637,  2833,  3171,  3509,  3847,  4185,  4523,  2217,   735,   159,
   -1637,   159,  1898,   789,  2149,    65, 10140,  1910,  1912,  2031,
   -1637,   791,   794,   796, -1637,  2270, -1637,   798, -1637,   609,
    1915,  2277,  2237,  2238, -1637,  1264, -1637,    90, -1637, 12310,
   12310,  2292,  2293, -1637, 12310, -1637, 12310,  9027,  1924, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637,  2052,  2052,  2052,  2052,
    2052,  2052, -1637, 10140, -1637,  2296,  2245,  1930,  1937,  1943,
    2052, -1637,  1981,  1982,  2052, -1637,  1983,  1986,  2052,  1948,
    1950, -1637, -1637, -1637, -1637, -1637, 10140, -1637, -1637, -1637,
    2114, 10140, -1637,  2192,  1580, -1637,  2323, -1637, -1637,  1954,
   10140, -1637,  2073,  2132,  2330, -1637,  2331, -1637, -1637,  2332,
    1124, -1637,  2333, 10140, 10140, -1637, -1637, -1637, -1637, -1637,
   -1637,  2282, -1637,  4861, -1637, -1637,  5199, -1637,  1962, -1637,
   -1637,   868, -1637,  2269,  2225,  2201,  2194,  2091, -1637, -1637,
     872,   875,   159, -1637,  1968,    13, -1637, 11534,  2176,  2177,
     877,  2155, -1637, -1637, -1637, -1637, -1637,  2351,  2355,   364,
     -72,  2167, -1637, -1637,  2342,  1991,   879,  2368,  2278,  1999,
    2000,  2001,  2002,  2003,  2004, 11559, -1637,  2005,  2376, -1637,
   -1637, -1637,  2007,  1789,  2009,  2010,  2014,  1789,  2016,  2018,
    2019, -1637, -1637, 11584, -1637, 12143,   -55,  2235,  1680, -1637,
   -1637, 12310, -1637,  2387, -1637, -1637,  2021, -1637, -1637,  2025,
   11611, 11636, -1637,  5537, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637,  5875, -1637, -1637,   906,  2395, -1637,   909,
     911, -1637,  2389, -1637,  2027,  2399,  2401,  2037,  2039,  2040,
   10140,  2405, -1637,   915,    -4, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637,  2406,    90,  2042, -1637,  2052, -1637, -1637,
   -1637,  2052, -1637, -1637, -1637, -1637, -1637,  2195,  2203,  2093,
   -1637, -1637,  2080, -1637, -1637,  1265, -1637,  6213, -1637, -1637,
   -1637,  2049,  2224, -1637,   945, -1637, -1637, -1637,  2430,  2446,
    2448, 12310,  2432, -1637,  2451, -1637, -1637, -1637, -1637,  2452,
    2082,  1789,  1789,  2083,  1789,  1789,  2285,  2286,  2085,  2458,
   -1637, -1637, -1637,  2229,  2462,  2475,  2458,  2120,  2130,  2134,
   10140, -1637,  2268,    90, -1637,  2052,  2052, -1637,  2052,  2052,
   -1637, -1637, -1637,   949,  2133,   947,  2137,   955,  2141,  2299,
   -1637, 12310,  2293, -1637,  2135,  2143,  2150,  2151, -1637,  2515,
    2521,  2524,  2458,  2458, -1637,  2319,  2531,  1991, -1637, -1637,
   -1637, -1637,   340, -1637,  2163,  2168,   957,   959,   406,  2537,
     967, -1637, -1637,   -29,  2400,   -10,   256, -1637,  2458, -1637,
   -1637,  2453,  2287, -1637,  2319, -1637, -1637,    57, -1637, -1637,
   -1637,   396,   480,   992,   406,   406,  2378, -1637, -1637, -1637,
   -1637, -1637, -1637,    15, -1637, -1637, -1637,    18, -1637,  2314,
   -1637, -1637, -1637, -1637,   406,    64,  2363,  2365,  2375,  2379,
    2555,  2562, -1637, -1637
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1637,  2470,   -91, -1637, -1637, -1637, -1637,  -879,  1406, -1637,
    1546, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637,  1649,  2191,
   -1637,  -225,  -617,  1115, -1637, -1346, -1637,   812, -1273, -1637,
   -1179, -1637, -1040, -1637,   882, -1247, -1637, -1637, -1330, -1637,
   -1637,  2070,  -272,  -277,  2061,  -502, -1637, -1637,  -292, -1637,
   -1637,   564, -1637, -1637, -1637,  1324,  -757,   337,   -68, -1637,
   -1637, -1637,  2455,  1956, -1637,  1951, -1637, -1089, -1637, -1637,
   -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1637, -1193,
   -1637,  -862, -1637, -1637, -1637, -1637, -1637,   428,   526,  2499,
    2218, -1637,  1692, -1637,   729,  1953, -1637, -1637, -1637, -1637,
   -1637, -1637, -1637, -1637, -1117,  1232, -1637, -1637, -1637, -1637,
      88, -1637, -1637, -1637, -1637,   765, -1637,   398, -1637,  1266,
    1248, -1607, -1636, -1585, -1454, -1325, -1637, -1047,   486,   -83,
     449,  -824,  -429,  1741, -1112, -1637, -1637, -1637,  2440, -1637,
    -329, -1637,  1736,  1109, -1077, -1637, -1637, -1637, -1637,  2044,
   -1637, -1637, -1637, -1637, -1637,  2265, -1637, -1637, -1428, -1637
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -684
static const yytype_int16 yytable[] =
{
     280,  1299,  1250,  1467,   527,  1334,  1262,  1263,   901,   605,
    1281,  1678,  1692,   514,   509,   893,  1319,   863,  1680,   831,
     807,  1355,  1147,  1327,    87,   478,   757,  1075,  1076,  1039,
     354,  1015,  1147,  1081,  1157,  1083,   504,  1831,   758,  1771,
    1037,  1785,   317,   318,   319,   320,   321,   322,  1154,  1118,
    1156,  1839,   122,   286,  1839,   863,  1119,   286,   594,   505,
     884,  2195,   515,   370,   371,   513,   502,  1465,  2226,  1476,
    1477,   595,  1837,  1349,   376,   377,   378,   625,    50,  2105,
     380,   479,   480,   481,   482,   483,   484,   485,  1499,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   873,   501,    51,    95,  1688,  -683,
     821,   547,  1120,  1253,   862,   535,  1121,   299,   300,  1104,
    2198,  2220,   885,   624,  2222,  2047,  1488,  1489,  1490,  1491,
     863,   327,  1688,  1122,   313,   128,   361,   301,  1223,  1772,
     622,   478,  1123,   606,  1732,  1733,   111,    82,  2208,  -316,
      16,   116,   303,  1743,  1744,   119,    16,   154,  1696,   804,
      53,   530,  1097,  2077,  1786,   867,   622,   864,   155,  1029,
      83,  1689,   304,    54,   531,  1840,   536,  1254,   123,  1124,
     908,  1697,   502,  2199,  2048,  1042,   911,  1492,   477,   537,
     525,  2078,    96,   607,   328,  1689,   124,   805,   596,  2209,
    1841,  2221,   865,  1841,  2223,  1148,   759,   130,   347,   516,
     287,  1016,   884,  2200,   287,  1372,   288,  1478,   125,  1787,
     288,   112,  1515,   874,    52,   323,  1842,   786,  2196,  1842,
    1350,    88,  1682,  1525,  1125,   894,   895,  1685,  1105,   797,
    1662,  2227,  2106,   597,   355,   126,  1526,   479,   480,   481,
     482,   483,   484,   485,   516,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     548,   501,   362,   302,   885,  1240,   355,  1859,   832,    16,
    1041,   129,   506,  1145,   644,  1780,  1333,   314,   645,   608,
     133,  1373,   113,  1374,  -683,   655,   659,   661,   662,   663,
     664,   665,   666,   667,   668,   669,  1047,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,  2039,   687,   688,   689,   760,   691,   692,   693,
     694,   695,   696,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,  1832,  1833,  1446,   900,  1843,   714,
     715,  1843,  2040,   131,   719,   720,  2201,  1399,  2183,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,  1040,   747,   748,   749,  1053,  1054,  1111,   752,   753,
     754,   755,   756,  1057,   508,  1400,   766,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   909,  1899,   324,   912,   280,   634,  1761,   289,  1466,
     156,   798,   289,   290,  2191,  1795,  1049,   290,  1668,   923,
    2184,   884,  1806,  1131,  1807,   638,   134,  1800,  1690,  1091,
    1092,  1093,  1493,  1494,  1495,  1132,   618,  1028,   305,  1866,
    1867,  1868,  1869,  1870,  1871,   135,   549,   550,   551,   552,
    1321,  1880,   137,  2210,  2045,  1884,  1328,    71,  1506,  1888,
    1508,  1509,  1811,  1098,  1099,  1100,  1101,   343,   792,   139,
     306,  1133,  1050,  1812,  1669,   532,  1664,   373,   374,  1134,
    1288,  1900,   852,   885,   539,  1496,  2184,   833,   857,   793,
     859,  1972,  2202,  1813,  1960,   307,  1112,   141,  1063,  1064,
    1289,    72,   335,   308,  1903,   611,  2185,  1814,    69,  1032,
    1300,   647,   648,   157,  1301,   309,  1815,    73,  1184,  1185,
    2186,   897,   317,   318,   319,   320,   321,   322,    80,  1135,
      86,  2147,    55,  1251,    93,    84,  1257,  2214,   834,  1051,
     619,  1670,   344,  1878,  1879,   916,   917,   918,   919,   533,
    -354,   635,   921,    81,  1889,  1890,  1816,   622,   540,   928,
    1818,  1036,  1302,   339,    74,  1303,  1823,  2176,  2177,  1322,
     635,  2211,  2185,  1136,  1108,  1329,  1501,  1357,   340,  1358,
    1304,    75,   310,  1109,    76,  1502,  2186,    97,  1129,  2212,
    2046,   136,  1901,  2203,  1052,  1665,  1671,   794,   138,    85,
    1305,   949,   950,   311,  1966,   555,   556,  1137,  1306,    77,
      56,  1458,   886,   345,  2213,   140,  1264,    57,    92,  1967,
     479,   480,   481,   482,   483,   484,   485,  1845,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   142,   501,   541,   887,   888,   336,  2076,
      98,   612,   100,    58,    59,  2215,   649,  1338,  1513,   312,
     101,  1019,  1020,  1931,  1022,   102,  1339,  1514,   350,   477,
      60,  -354,  1932,  2216,   103,  1131,   104,  1979,  1980,  1981,
    1982,  1983,  1984,   105,   498,   499,   500,  1132,   501,   143,
     649,  1992,  1307,   106,  1308,  1996,   800,   516,  2217,  2000,
    2178,  -452,   108,  1956,   109,   323,   542,  1933,  2108,  1941,
    2067,   110,  1936,  1309,  2071,   114,  1138,    61,   115,   543,
    1950,   117,  1951,  1133,   118,  2204,  2205,    78,   120,   891,
     892,  1134,   144,   132,    62,   149,  1246,    63,   150,  2118,
     145,  1150,  1151,  1238,  -452,   146,   151,   762,   763,   152,
     764,  2081,  -452,   765,  2224,   158,    64,    65,   499,   500,
     283,   501,   147,   297,  1089,  1286,  1287,   316,   143,   517,
     330,    66,  1290,  1291,  -452,  1292,  1293,  2153,  1294,  1293,
     329,  1135,   331,  1224,  -456,   479,   480,   481,   482,   483,
     484,   485,  1235,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   332,   501,
     333,   144,  -453,   334,  1158,   337,  1159,  1316,  1317,   284,
    1344,  1345,   342,  1166,  1167,  1136,  1168,  -456,  2135,  2136,
    1173,  2138,  2139,  1420,  1421,  -456,   338,  1174,  1175,  1176,
    1177,   285,  1178,  1179,  1180,  2023,   518,  1423,  1424,  1181,
    1182,   346,  1183,  2036,  2008,  -453,  -322,  -456,  1186,  1187,
    1188,  2033,   348,  -453,  1512,  1317,  1522,  1317,  1736,  1737,
     519,   352,  1196,  1197,  1198,   350,  1199,   356,  2110,   357,
      67,   358,  2113,   520,   359,  -453,   366,  1210,  1660,  1317,
     360,  1686,  1356,   368,  1347,   364,  1211,  1212,  1213,  1214,
    1215,  1216,  1217,  1218,   924,  1219,   365,  1684,   521,  1220,
     367,  1221,   369,  1222,   382,   494,   495,   496,   497,   498,
     499,   500,  1228,   501,  1230,  1230,   522,  1701,  1702,  1740,
    1741,  1778,  1779,  1801,  1317,  2087,  1809,  1317,  1247,  1820,
    1317,  1825,  1345,  1834,  1835,  1252,  2154,  2155,    87,  2156,
    2157,   479,   480,   481,   482,   483,   484,   485,   383,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   375,   501,  1836,  1835,  1838,  1779,
    1846,  1356,  1905,  1906,   981,   982,   384,  1298,   511,  1907,
    1906,  1447,  1908,  1906,  1449,   507,  1450,   385,  1452,  1911,
    1835,   479,   480,   481,   482,   483,   484,   485,   386,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   387,   501,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   388,   501,   841,   842,
     843,   844,  1361,   845,   525,  1365,   847,   848,   849,  1913,
    1914,  1370,   389,   853,   854,   855,  1915,  1916,   858,   390,
    1376,   528,   921,  1918,  1919,  1921,  1922,   391,  1384,  1385,
    1939,  1317,  1940,  1317,   479,   480,   481,   482,   483,   484,
     485,   529,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   392,   501,  1949,
    1317,   479,   480,   481,   482,   483,   484,   485,   393,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   394,   501,  1448,   479,   480,   481,
     482,   483,   484,   485,   395,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     925,   501,  1468,  1953,  1317,  1961,  1914,  1471,  1962,  1835,
    1963,  1835,  1965,  1916,  2017,  2018,   479,   480,   481,   482,
     483,   484,   485,   396,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   397,
     501,   479,   480,   481,   482,   483,   484,   485,   398,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   399,   501,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     400,   501,  2027,  1317,   401,  1672,  2034,  1317,   534,  2035,
    1317,  2041,  1779,  2052,  1702,   479,   480,   481,   482,   483,
     484,   485,   402,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   403,   501,
    2090,  1317,  1265,  2092,  1914,  2093,  1916,   404,  1707,  2103,
    2104,  1708,   538,  1068,  1069,   405,  1072,  1073,  1074,   406,
    1719,  1720,  1077,  1078,  1079,  1267,   407,  1082,  1268,   408,
    1269,   409,  1721,  1270,   410,  2120,  2121,  2125,  2126,  2161,
    2162,  1728,  1729,  2158,  2159,   983,   984,   411,  1271,  2164,
    2159,  2189,  2159,  2190,  2159,  1272,  1273,   412,  1745,  1746,
    1747,  2193,  2194,  1748,  1749,   413,  1750,   414,  1751,   415,
    1752,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   416,   501,  1758,  1760,  2218,  2159,  1043,  1044,
    1274,  1243,  1244,  1768,  1769,  1005,  1006,   417,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,  1782,   501,  1765,  1766,  1788,   492,   493,   494,   495,
     496,   497,   498,   499,   500,  1792,   501,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,  1798,
     501,  1276,   418,   419,   420,   421,   422,   423,   424,   425,
    1527,  1528,  1529,  1530,  1531,  1532,   426,  1533,   427,  1534,
     428,   429,   430,  1535,  1536,  1537,   431,  1538,  1011,  1012,
    1277,  1539,  1540,  1541,  1542,  1543,   432,   433,  1278,   434,
     435,   436,   437,   438,   439,  1544,   440,   441,   442,   443,
    1545,  1546,   444,   445,  1547,  1381,  1382,   446,   447,  1548,
    1549,  1550,  1551,  1552,   448,   449,  1553,   450,  1554,  1555,
    1556,   451,   452,  1557,  1558,   453,  1559,  1560,  1561,   454,
     544,   751,  1562,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,  1279,   465,   466,  1563,   467,   468,   469,
     470,  1564,   471,   472,   473,   474,  1565,  1566,  1567,   475,
     476,   510,   512,  1568,  1569,   545,  1570,  1571,  1572,  1573,
    1411,  1412,  1574,   546,  1575,  1576,  1577,  1578,   554,  1579,
     557,  1580,  1581,   558,  1582,   593,  1583,  1584,   601,  1585,
    1586,  1587,  1588,   602,   603,  1436,  1437,   604,  1589,   610,
    1590,   613,  1591,  1592,   615,  1593,  1594,  1595,  1596,  1597,
    1598,   616,  1599,  1600,  1601,  1602,  1603,   621,   626,   627,
     628,   629,   630,   631,   632,   633,   637,  1604,   640,  1605,
     501,  1606,   650,  1849,  1850,   651,   652,   670,   686,  1854,
    1607,  1856,  1608,  1609,  1610,  1611,  1612,  1613,  1614,  1438,
    1439,  1615,  1616,   690,   709,   710,   711,  1617,   712,  1618,
    1619,  1620,   713,  1621,   716,  1622,   717,  1623,  1624,  1625,
    1626,   718,   721,   722,   723,   785,   746,   750,   761,   787,
     789,   791,   799,   801,  1627,  1628,  1629,   808,   809,   811,
     812,   813,   814,   815,  1630,   816,  1631,  1632,  1633,   817,
     818,   819,   820,  1634,   822,  1635,  1636,  1637,   823,   824,
     825,  1638,   826,   827,   828,  1639,  1640,   829,  1641,  1642,
    1643,  1644,   837,   830,   835,  1645,   838,   479,   480,   481,
     482,   483,   484,   485,   839,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     846,   501,   850,   856,   860,   861,   866,   868,   869,   870,
     871,   875,   872,   876,   877,  1957,  1646,  1647,  1648,  1649,
    1650,   479,   480,   481,   482,   483,   484,   485,   878,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   879,   501,  1370,   880,   882,   881,
     883,   898,   904,   906,   914,   920,   964,    16,   978,   979,
     980,   985,  1985,   986,   987,   -71,  1021,  1024,  1025,  1026,
    1030,  1033,  1031,  1034,  1046,  1035,  1045,  1048,  1651,  1652,
    1653,  1654,  1655,  1055,  1656,  2003,   863,  1058,  1059,  1060,
    2005,  1061,  1062,  1065,  1070,  1086,  1084,  1085,  1094,  2011,
    1087,  1088,  1527,  1528,  1529,  1530,  1531,  1532,  1090,  1533,
    1107,  1534,  2020,  2021,  1106,  1535,  1536,  1537,  1096,  1538,
    1110,  1113,  1114,  1539,  1540,  1541,  1542,  1543,  1116,  1117,
    1130,  1142,  1143,  1115,  1146,  1152,  1147,  1544,  1162,  1164,
    1165,  1170,  1545,  1546,  1189,  1190,  1547,  1191,  1192,  1193,
    1194,  1548,  1549,  1550,  1551,  1552,  1195,  1200,  1553,  1201,
    1554,  1555,  1556,  1202,  1204,  1557,  1558,  1206,  1559,  1560,
    1561,  1203,  1208,  1209,  1562,  1205,  1207,  1236,  1239,   -73,
    1245,  1241,  1248,  1249,  1259,  1694,  1260,  1258,  1563,  1261,
    1282,  1283,  1284,  1564,  1285,  1295,  1296,  1320,  1565,  1566,
    1567,  1297,  1311,  1323,  1312,  1568,  1569,  1325,  1570,  1571,
    1572,  1573,  1330,  1313,  1574,  1314,  1810,  1576,  1577,  1578,
    1315,  1579,  1318,  1580,  1581,  1331,  1582,  1326,  1583,  1584,
    1332,  1585,  1586,  1587,  1588,  1335,  1336,  1340,  1337,  2101,
    1589,  1346,  1590,  1348,  1591,  1592,  1342,  1593,  1594,  1595,
    1596,  1597,  1598,  1341,  1599,  1600,  1601,  1602,  1603,  1343,
    1351,  1352,  1353,  1354,  1356,  1362,  1366,  1367,  1368,  1604,
    1377,  1605,  1386,  1606,  1387,  1404,  1405,  1406,  1407,  1408,
    1409,  1410,  1607,  1419,  1608,  1609,  1610,  1611,  1612,  1613,
    1614,  1455,  1422,  1615,  1616,  1456,  1425,  1459,  1460,  1617,
    1463,  1618,  1619,  1620,  1461,  1621,  1444,  1622,  1445,  1623,
    1624,  1625,  1626,  1464,  1474,  1479,  1480,  1484,  1485,  2151,
    1487,  1497,  1498,  1503,  1504,  1462,  1627,  1628,  1629,  1451,
    1500,  1505,  1507,  1516,  1517,  1469,  1630,  1453,  1631,  1632,
    1633,  1440,  1441,  1518,  1454,  1634,  1472,  1635,  1636,  1637,
    1473,  1481,  1482,  1638,  1483,  1486,  1510,  1639,  1640,  1519,
    1641,  1642,  1643,  1644,  1520,  1521,  1523,  1645,  1524,  1659,
    1658,  1661,  1673,  1663,  1666,  1674,  1676,  1699,  1700,   479,
     480,   481,   482,   483,   484,   485,  1695,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,  1704,   501,  1675,  1679,  1706,  1730,  1646,  1647,
    1648,  1649,  1650,   479,   480,   481,   482,   483,   484,   485,
    1693,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,  1753,   501,  1735,  1739,
    1527,  1528,  1529,  1530,  1531,  1532,  1754,  1533,  1763,  1534,
    1755,  1756,  1757,  1535,  1536,  1537,  1767,  1538,  1770,  1774,
    1776,  1539,  1540,  1541,  1542,  1543,  1781,  1783,  1784,  1794,
    1651,  1652,  1653,  1654,  1655,  1544,  1656,  1789,  1790,  1791,
    1545,  1546,  1796,  1797,  1547,  1799,  1805,  1802,  1817,  1548,
    1549,  1550,  1551,  1552,  1803,  1804,  1553,  1847,  1554,  1555,
    1556,  1808,  1822,  1557,  1558,  1819,  1559,  1560,  1561,  1821,
    1824,  1826,  1562,  1860,  1827,  1829,  1828,  1857,  1851,  1858,
    1875,  1881,  1885,  1876,  1909,  1882,  1563,  1883,  1910,  1886,
    1887,  1564,  1912,  1917,  1923,  1925,  1565,  1566,  1567,  1924,
    1938,  1927,  1928,  1568,  1569,  1929,  1570,  1571,  1572,  1573,
    1948,  1952,  1574,  1964,  1934,  1576,  1577,  1578,  1954,  1579,
    1969,  1580,  1581,  1958,  1582,  1959,  1583,  1584,  1968,  1585,
    1586,  1587,  1588,  1970,  1971,  1973,  1974,  1977,  1589,  1986,
    1590,  1988,  1591,  1592,  1989,  1593,  1594,  1595,  1596,  1597,
    1598,  1990,  1599,  1600,  1601,  1602,  1603,  1991,  1994,  1995,
    1998,  2004,  2001,  1999,  2002,  2006,  2009,  1604,  2010,  1605,
    2012,  1606,  2013,  2014,  2015,  2022,  2026,  2016,  2019,  2028,
    1607,  2037,  1608,  1609,  1610,  1611,  1612,  1613,  1614,  2029,
    2030,  1615,  1616,  2031,  2032,  2042,  2043,  1617,  2044,  1618,
    1619,  1620,  2050,  1621,  2049,  1622,  2051,  1623,  1624,  1625,
    1626,  2053,  2054,  2056,  2057,  2058,  2059,  2060,  2061,  2064,
    2063,  2066,  2068,  2069,  1627,  1628,  1629,  2079,  2070,  2072,
    2082,  2073,  2094,  2074,  1630,  2083,  1631,  1632,  1633,  2084,
    2091,  2095,  2096,  1634,  2097,  1635,  1636,  1637,  2102,  2107,
    2098,  1638,  2099,  2100,  2116,  1639,  1640,  2109,  1641,  1642,
    1643,  1644,  2117,  2123,  2124,  1645,   479,   480,   481,   482,
     483,   484,   485,  2127,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,  2128,
     501,  2129,  2130,  2119,  2131,  2133,  2134,  2137,  2140,  2141,
    1835,  2142,  2144,  1872,  1873,  2145,  1646,  1647,  1648,  1649,
    1650,   479,   480,   481,   482,   483,   484,   485,  2146,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,  2148,   501,  2152,   926,  1527,  1528,
    1529,  1530,  1531,  1532,  2149,  1533,  2160,  1534,  2150,  2168,
    2163,  1535,  1536,  1537,  2165,  1538,  2166,  2169,  2173,  1539,
    1540,  1541,  1542,  1543,  2170,  2171,  2174,  2175,  1651,  1652,
    1653,  1654,  1655,  1544,  1656,  2179,  2182,  2187,  1545,  1546,
    2192,  2188,  1547,  2195,  2197,  2219,  2206,  1548,  1549,  1550,
    1551,  1552,  2225,  2228,  1553,  2229,  1554,  1555,  1556,  2230,
    2232,  1557,  1558,  2231,  1559,  1560,  1561,  2233,   298,  1378,
    1562,   646,  1234,  1762,  1904,  1848,   788,   803,   353,  1172,
    2167,  1470,   902,   903,  1563,   153,  1976,   639,  1687,  1564,
    1955,   910,  2207,  1683,  1565,  1566,  1567,  1080,   372,  1667,
     836,  1568,  1569,  1155,  1570,  1571,  1572,  1573,  1095,  1793,
    1574,   614,  1937,  1576,  1577,  1578,     0,  1579,     0,  1580,
    1581,     0,  1582,     0,  1583,  1584,     0,  1585,  1586,  1587,
    1588,     0,     0,     0,     0,     0,  1589,     0,  1590,     0,
    1591,  1592,     0,  1593,  1594,  1595,  1596,  1597,  1598,     0,
    1599,  1600,  1601,  1602,  1603,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1604,     0,  1605,     0,  1606,
       0,     0,     0,     0,     0,     0,     0,     0,  1607,     0,
    1608,  1609,  1610,  1611,  1612,  1613,  1614,     0,     0,  1615,
    1616,     0,     0,     0,     0,  1617,     0,  1618,  1619,  1620,
       0,  1621,     0,  1622,     0,  1623,  1624,  1625,  1626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1627,  1628,  1629,     0,     0,     0,     0,     0,
       0,     0,  1630,     0,  1631,  1632,  1633,     0,     0,     0,
       0,  1634,     0,  1635,  1636,  1637,     0,     0,     0,  1638,
       0,     0,     0,  1639,  1640,     0,  1641,  1642,  1643,  1644,
       0,     0,     0,  1645,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,     0,
       0,   913,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1646,  1647,  1648,  1649,  1650,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,   932,  1527,  1528,  1529,  1530,
    1531,  1532,     0,  1533,     0,  1534,     0,     0,     0,  1535,
    1536,  1537,     0,  1538,     0,     0,     0,  1539,  1540,  1541,
    1542,  1543,     0,     0,     0,     0,  1651,  1652,  1653,  1654,
    1655,  1544,  1656,     0,     0,     0,  1545,  1546,     0,     0,
    1547,     0,     0,     0,     0,  1548,  1549,  1550,  1551,  1552,
       0,     0,  1553,     0,  1554,  1555,  1556,     0,     0,  1557,
    1558,     0,  1559,  1560,  1561,     0,     0,     0,  1562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1563,     0,     0,     0,     0,  1564,     0,     0,
       0,     0,  1565,  1566,  1567,     0,     0,     0,     0,  1568,
    1569,     0,  1570,  1571,  1572,  1573,     0,     0,  1574,     0,
    1942,  1576,  1577,  1578,     0,  1579,     0,  1580,  1581,     0,
    1582,     0,  1583,  1584,     0,  1585,  1586,  1587,  1588,     0,
       0,     0,     0,     0,  1589,     0,  1590,     0,  1591,  1592,
       0,  1593,  1594,  1595,  1596,  1597,  1598,     0,  1599,  1600,
    1601,  1602,  1603,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1604,     0,  1605,     0,  1606,     0,     0,
       0,     0,     0,     0,     0,     0,  1607,     0,  1608,  1609,
    1610,  1611,  1612,  1613,  1614,     0,     0,  1615,  1616,     0,
       0,     0,     0,  1617,     0,  1618,  1619,  1620,     0,  1621,
       0,  1622,     0,  1623,  1624,  1625,  1626,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1627,  1628,  1629,     0,     0,     0,     0,     0,     0,     0,
    1630,     0,  1631,  1632,  1633,     0,     0,     0,     0,  1634,
       0,  1635,  1636,  1637,     0,     0,     0,  1638,     0,     0,
       0,  1639,  1640,     0,  1641,  1642,  1643,  1644,     0,     0,
       0,  1645,   479,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,     0,     0,   929,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1646,  1647,  1648,  1649,  1650,   479,   480,   481,
     482,   483,   484,   485,     0,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,   933,  1527,  1528,  1529,  1530,  1531,  1532,
       0,  1533,     0,  1534,     0,     0,     0,  1535,  1536,  1537,
       0,  1538,     0,     0,     0,  1539,  1540,  1541,  1542,  1543,
       0,     0,     0,     0,  1651,  1652,  1653,  1654,  1655,  1544,
    1656,     0,     0,     0,  1545,  1546,     0,     0,  1547,     0,
       0,     0,     0,  1548,  1549,  1550,  1551,  1552,     0,     0,
    1553,     0,  1554,  1555,  1556,     0,     0,  1557,  1558,     0,
    1559,  1560,  1561,     0,     0,     0,  1562,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1563,     0,     0,     0,     0,  1564,     0,     0,     0,     0,
    1565,  1566,  1567,     0,     0,     0,     0,  1568,  1569,     0,
    1570,  1571,  1572,  1573,     0,     0,  1574,     0,  1943,  1576,
    1577,  1578,     0,  1579,     0,  1580,  1581,     0,  1582,     0,
    1583,  1584,     0,  1585,  1586,  1587,  1588,     0,     0,     0,
       0,     0,  1589,     0,  1590,     0,  1591,  1592,     0,  1593,
    1594,  1595,  1596,  1597,  1598,     0,  1599,  1600,  1601,  1602,
    1603,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1604,     0,  1605,     0,  1606,     0,     0,     0,     0,
       0,     0,     0,     0,  1607,     0,  1608,  1609,  1610,  1611,
    1612,  1613,  1614,     0,     0,  1615,  1616,     0,     0,     0,
       0,  1617,     0,  1618,  1619,  1620,     0,  1621,     0,  1622,
       0,  1623,  1624,  1625,  1626,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1627,  1628,
    1629,     0,     0,     0,     0,     0,     0,     0,  1630,     0,
    1631,  1632,  1633,     0,     0,     0,     0,  1634,     0,  1635,
    1636,  1637,     0,     0,     0,  1638,     0,     0,     0,  1639,
    1640,     0,  1641,  1642,  1643,  1644,     0,     0,     0,  1645,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,   930,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1646,  1647,  1648,  1649,  1650,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,   934,  1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,
       0,  1534,     0,     0,     0,  1535,  1536,  1537,     0,  1538,
       0,     0,     0,  1539,  1540,  1541,  1542,  1543,     0,     0,
       0,     0,  1651,  1652,  1653,  1654,  1655,  1544,  1656,     0,
       0,     0,  1545,  1546,     0,     0,  1547,     0,     0,     0,
       0,  1548,  1549,  1550,  1551,  1552,     0,     0,  1553,     0,
    1554,  1555,  1556,     0,     0,  1557,  1558,     0,  1559,  1560,
    1561,     0,     0,     0,  1562,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1563,     0,
       0,     0,     0,  1564,     0,     0,     0,     0,  1565,  1566,
    1567,     0,     0,     0,     0,  1568,  1569,     0,  1570,  1571,
    1572,  1573,     0,     0,  1574,     0,  1944,  1576,  1577,  1578,
       0,  1579,     0,  1580,  1581,     0,  1582,     0,  1583,  1584,
       0,  1585,  1586,  1587,  1588,     0,     0,     0,     0,     0,
    1589,     0,  1590,     0,  1591,  1592,     0,  1593,  1594,  1595,
    1596,  1597,  1598,     0,  1599,  1600,  1601,  1602,  1603,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1604,
       0,  1605,     0,  1606,     0,     0,     0,     0,     0,     0,
       0,     0,  1607,     0,  1608,  1609,  1610,  1611,  1612,  1613,
    1614,     0,     0,  1615,  1616,     0,     0,     0,     0,  1617,
       0,  1618,  1619,  1620,     0,  1621,     0,  1622,     0,  1623,
    1624,  1625,  1626,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1627,  1628,  1629,     0,
       0,     0,     0,     0,     0,     0,  1630,     0,  1631,  1632,
    1633,     0,     0,     0,     0,  1634,     0,  1635,  1636,  1637,
       0,     0,     0,  1638,     0,     0,     0,  1639,  1640,     0,
    1641,  1642,  1643,  1644,     0,     0,     0,  1645,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,     0,   931,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1646,  1647,
    1648,  1649,  1650,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,   935,
    1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,     0,  1534,
       0,     0,     0,  1535,  1536,  1537,     0,  1538,     0,     0,
       0,  1539,  1540,  1541,  1542,  1543,     0,     0,     0,     0,
    1651,  1652,  1653,  1654,  1655,  1544,  1656,     0,     0,     0,
    1545,  1546,     0,     0,  1547,     0,     0,     0,     0,  1548,
    1549,  1550,  1551,  1552,     0,     0,  1553,     0,  1554,  1555,
    1556,     0,     0,  1557,  1558,     0,  1559,  1560,  1561,     0,
       0,     0,  1562,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1563,     0,     0,     0,
       0,  1564,     0,     0,     0,     0,  1565,  1566,  1567,     0,
       0,     0,     0,  1568,  1569,     0,  1570,  1571,  1572,  1573,
       0,     0,  1574,     0,  1945,  1576,  1577,  1578,     0,  1579,
       0,  1580,  1581,     0,  1582,     0,  1583,  1584,     0,  1585,
    1586,  1587,  1588,     0,     0,     0,     0,     0,  1589,     0,
    1590,     0,  1591,  1592,     0,  1593,  1594,  1595,  1596,  1597,
    1598,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1604,     0,  1605,
       0,  1606,     0,     0,     0,     0,     0,     0,     0,     0,
    1607,     0,  1608,  1609,  1610,  1611,  1612,  1613,  1614,     0,
       0,  1615,  1616,     0,     0,     0,     0,  1617,     0,  1618,
    1619,  1620,     0,  1621,     0,  1622,     0,  1623,  1624,  1625,
    1626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1627,  1628,  1629,     0,     0,     0,
       0,     0,     0,     0,  1630,     0,  1631,  1632,  1633,     0,
       0,     0,     0,  1634,     0,  1635,  1636,  1637,     0,     0,
       0,  1638,     0,     0,     0,  1639,  1640,     0,  1641,  1642,
    1643,  1644,     0,     0,     0,  1645,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,   938,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1646,  1647,  1648,  1649,
    1650,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,   936,  1527,  1528,
    1529,  1530,  1531,  1532,     0,  1533,     0,  1534,     0,     0,
       0,  1535,  1536,  1537,     0,  1538,     0,     0,     0,  1539,
    1540,  1541,  1542,  1543,     0,     0,     0,     0,  1651,  1652,
    1653,  1654,  1655,  1544,  1656,     0,     0,     0,  1545,  1546,
       0,     0,  1547,     0,     0,     0,     0,  1548,  1549,  1550,
    1551,  1552,     0,     0,  1553,     0,  1554,  1555,  1556,     0,
       0,  1557,  1558,     0,  1559,  1560,  1561,     0,     0,     0,
    1562,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1563,     0,     0,     0,     0,  1564,
       0,     0,     0,     0,  1565,  1566,  1567,     0,     0,     0,
       0,  1568,  1569,     0,  1570,  1571,  1572,  1573,     0,     0,
    1574,     0,  1946,  1576,  1577,  1578,     0,  1579,     0,  1580,
    1581,     0,  1582,     0,  1583,  1584,     0,  1585,  1586,  1587,
    1588,     0,     0,     0,     0,     0,  1589,     0,  1590,     0,
    1591,  1592,     0,  1593,  1594,  1595,  1596,  1597,  1598,     0,
    1599,  1600,  1601,  1602,  1603,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1604,     0,  1605,     0,  1606,
       0,     0,     0,     0,     0,     0,     0,     0,  1607,     0,
    1608,  1609,  1610,  1611,  1612,  1613,  1614,     0,     0,  1615,
    1616,     0,     0,     0,     0,  1617,     0,  1618,  1619,  1620,
       0,  1621,     0,  1622,     0,  1623,  1624,  1625,  1626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1627,  1628,  1629,     0,     0,     0,     0,     0,
       0,     0,  1630,     0,  1631,  1632,  1633,     0,     0,     0,
       0,  1634,     0,  1635,  1636,  1637,     0,     0,     0,  1638,
       0,     0,     0,  1639,  1640,     0,  1641,  1642,  1643,  1644,
       0,     0,     0,  1645,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,     0,
       0,   939,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1646,  1647,  1648,  1649,  1650,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,   937,  1527,  1528,  1529,  1530,
    1531,  1532,     0,  1533,     0,  1534,     0,     0,     0,  1535,
    1536,  1537,     0,  1538,     0,     0,     0,  1539,  1540,  1541,
    1542,  1543,     0,     0,     0,     0,  1651,  1652,  1653,  1654,
    1655,  1544,  1656,     0,     0,     0,  1545,  1546,     0,     0,
    1547,     0,     0,     0,     0,  1548,  1549,  1550,  1551,  1552,
       0,     0,  1553,     0,  1554,  1555,  1556,     0,     0,  1557,
    1558,     0,  1559,  1560,  1561,     0,     0,     0,  1562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1563,     0,     0,     0,     0,  1564,     0,     0,
       0,     0,  1565,  1566,  1567,     0,     0,     0,     0,  1568,
    1569,     0,  1570,  1571,  1572,  1573,     0,     0,  1574,     0,
    1947,  1576,  1577,  1578,     0,  1579,     0,  1580,  1581,     0,
    1582,     0,  1583,  1584,     0,  1585,  1586,  1587,  1588,     0,
       0,     0,     0,     0,  1589,     0,  1590,     0,  1591,  1592,
       0,  1593,  1594,  1595,  1596,  1597,  1598,     0,  1599,  1600,
    1601,  1602,  1603,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1604,     0,  1605,     0,  1606,     0,     0,
       0,     0,     0,     0,     0,     0,  1607,     0,  1608,  1609,
    1610,  1611,  1612,  1613,  1614,     0,     0,  1615,  1616,     0,
       0,     0,     0,  1617,     0,  1618,  1619,  1620,     0,  1621,
       0,  1622,     0,  1623,  1624,  1625,  1626,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1627,  1628,  1629,     0,     0,     0,     0,     0,     0,     0,
    1630,     0,  1631,  1632,  1633,     0,     0,     0,     0,  1634,
       0,  1635,  1636,  1637,     0,     0,     0,  1638,     0,     0,
       0,  1639,  1640,     0,  1641,  1642,  1643,  1644,     0,     0,
       0,  1645,   479,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,     0,     0,   940,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1646,  1647,  1648,  1649,  1650,   479,   480,   481,
     482,   483,   484,   485,     0,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,   942,  1527,  1528,  1529,  1530,  1531,  1532,
       0,  1533,     0,  1534,     0,     0,     0,  1535,  1536,  1537,
       0,  1538,     0,     0,     0,  1539,  1540,  1541,  1542,  1543,
       0,     0,     0,     0,  1651,  1652,  1653,  1654,  1655,  1544,
    1656,     0,     0,     0,  1545,  1546,     0,     0,  1547,     0,
       0,     0,     0,  1548,  1549,  1550,  1551,  1552,     0,     0,
    1553,     0,  1554,  1555,  1556,     0,     0,  1557,  1558,     0,
    1559,  1560,  1561,     0,     0,     0,  1562,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1563,     0,     0,     0,     0,  1564,     0,     0,     0,     0,
    1565,  1566,  1567,     0,     0,     0,     0,  1568,  1569,     0,
    1570,  1571,  1572,  1573,     0,     0,  1574,     0,  2024,  1576,
    1577,  1578,     0,  1579,     0,  1580,  1581,     0,  1582,     0,
    1583,  1584,     0,  1585,  1586,  1587,  1588,     0,     0,     0,
       0,     0,  1589,     0,  1590,     0,  1591,  1592,     0,  1593,
    1594,  1595,  1596,  1597,  1598,     0,  1599,  1600,  1601,  1602,
    1603,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1604,     0,  1605,     0,  1606,     0,     0,     0,     0,
       0,     0,     0,     0,  1607,     0,  1608,  1609,  1610,  1611,
    1612,  1613,  1614,     0,     0,  1615,  1616,     0,     0,     0,
       0,  1617,     0,  1618,  1619,  1620,     0,  1621,     0,  1622,
       0,  1623,  1624,  1625,  1626,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1627,  1628,
    1629,     0,     0,     0,     0,     0,     0,     0,  1630,     0,
    1631,  1632,  1633,     0,     0,     0,     0,  1634,     0,  1635,
    1636,  1637,     0,     0,     0,  1638,     0,     0,     0,  1639,
    1640,     0,  1641,  1642,  1643,  1644,     0,     0,     0,  1645,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,   941,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1646,  1647,  1648,  1649,  1650,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,   946,  1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,
       0,  1534,     0,     0,     0,  1535,  1536,  1537,     0,  1538,
       0,     0,     0,  1539,  1540,  1541,  1542,  1543,     0,     0,
       0,     0,  1651,  1652,  1653,  1654,  1655,  1544,  1656,     0,
       0,     0,  1545,  1546,     0,     0,  1547,     0,     0,     0,
       0,  1548,  1549,  1550,  1551,  1552,     0,     0,  1553,     0,
    1554,  1555,  1556,     0,     0,  1557,  1558,     0,  1559,  1560,
    1561,     0,     0,     0,  1562,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1563,     0,
       0,     0,     0,  1564,     0,     0,     0,     0,  1565,  1566,
    1567,     0,     0,     0,     0,  1568,  1569,     0,  1570,  1571,
    1572,  1573,     0,     0,  1574,     0,  2025,  1576,  1577,  1578,
       0,  1579,     0,  1580,  1581,     0,  1582,     0,  1583,  1584,
       0,  1585,  1586,  1587,  1588,     0,     0,     0,     0,     0,
    1589,     0,  1590,     0,  1591,  1592,     0,  1593,  1594,  1595,
    1596,  1597,  1598,     0,  1599,  1600,  1601,  1602,  1603,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1604,
       0,  1605,     0,  1606,     0,     0,     0,     0,     0,     0,
       0,     0,  1607,     0,  1608,  1609,  1610,  1611,  1612,  1613,
    1614,     0,     0,  1615,  1616,     0,     0,     0,     0,  1617,
       0,  1618,  1619,  1620,     0,  1621,     0,  1622,     0,  1623,
    1624,  1625,  1626,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1627,  1628,  1629,     0,
       0,     0,     0,     0,     0,     0,  1630,     0,  1631,  1632,
    1633,     0,     0,     0,     0,  1634,     0,  1635,  1636,  1637,
       0,     0,     0,  1638,     0,     0,     0,  1639,  1640,     0,
    1641,  1642,  1643,  1644,     0,     0,     0,  1645,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,     0,   943,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1646,  1647,
    1648,  1649,  1650,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,   947,
    1527,  1528,  1529,  1530,  1531,  1532,     0,  1533,     0,  1534,
       0,     0,     0,  1535,  1536,  1537,     0,  1538,     0,     0,
       0,  1539,  1540,  1541,  1542,  1543,     0,     0,     0,     0,
    1651,  1652,  1653,  1654,  1655,  1544,  1656,     0,     0,     0,
    1545,  1546,     0,     0,  1547,     0,     0,     0,     0,  1548,
    1549,  1550,  1551,  1552,     0,     0,  1553,     0,  1554,  1555,
    1556,     0,     0,  1557,  1558,     0,  1559,  1560,  1561,     0,
       0,     0,  1562,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1563,     0,     0,     0,
       0,  1564,     0,     0,     0,     0,  1565,  1566,  1567,     0,
       0,     0,     0,  1568,  1569,     0,  1570,  1571,  1572,  1573,
       0,     0,  1574,     0,  2088,  1576,  1577,  1578,     0,  1579,
       0,  1580,  1581,     0,  1582,     0,  1583,  1584,     0,  1585,
    1586,  1587,  1588,     0,     0,     0,     0,     0,  1589,     0,
    1590,     0,  1591,  1592,     0,  1593,  1594,  1595,  1596,  1597,
    1598,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1604,     0,  1605,
       0,  1606,     0,     0,     0,     0,     0,     0,     0,     0,
    1607,     0,  1608,  1609,  1610,  1611,  1612,  1613,  1614,     0,
       0,  1615,  1616,     0,     0,     0,     0,  1617,     0,  1618,
    1619,  1620,     0,  1621,     0,  1622,     0,  1623,  1624,  1625,
    1626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1627,  1628,  1629,     0,     0,     0,
       0,     0,     0,     0,  1630,     0,  1631,  1632,  1633,     0,
       0,     0,     0,  1634,     0,  1635,  1636,  1637,     0,     0,
       0,  1638,     0,     0,     0,  1639,  1640,     0,  1641,  1642,
    1643,  1644,     0,     0,     0,  1645,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,   944,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1646,  1647,  1648,  1649,
    1650,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,   948,  1527,  1528,
    1529,  1530,  1531,  1532,     0,  1533,     0,  1534,     0,     0,
       0,  1535,  1536,  1537,     0,  1538,     0,     0,     0,  1539,
    1540,  1541,  1542,  1543,     0,     0,     0,     0,  1651,  1652,
    1653,  1654,  1655,  1544,  1656,     0,     0,     0,  1545,  1546,
       0,     0,  1547,     0,     0,     0,     0,  1548,  1549,  1550,
    1551,  1552,     0,     0,  1553,     0,  1554,  1555,  1556,     0,
       0,  1557,  1558,     0,  1559,  1560,  1561,     0,     0,     0,
    1562,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1563,     0,     0,     0,     0,  1564,
       0,     0,     0,     0,  1565,  1566,  1567,     0,     0,     0,
       0,  1568,  1569,     0,  1570,  1571,  1572,  1573,     0,     0,
    1574,     0,  2089,  1576,  1577,  1578,     0,  1579,     0,  1580,
    1581,     0,  1582,     0,  1583,  1584,     0,  1585,  1586,  1587,
    1588,     0,     0,     0,     0,     0,  1589,     0,  1590,     0,
    1591,  1592,     0,  1593,  1594,  1595,  1596,  1597,  1598,     0,
    1599,  1600,  1601,  1602,  1603,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1604,     0,  1605,     0,  1606,
       0,     0,     0,     0,     0,     0,     0,     0,  1607,     0,
    1608,  1609,  1610,  1611,  1612,  1613,  1614,     0,     0,  1615,
    1616,     0,     0,     0,     0,  1617,     0,  1618,  1619,  1620,
       0,  1621,     0,  1622,     0,  1623,  1624,  1625,  1626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1627,  1628,  1629,     0,     0,     0,     0,     0,
       0,     0,  1630,     0,  1631,  1632,  1633,     0,     0,     0,
       0,  1634,     0,  1635,  1636,  1637,     0,     0,     0,  1638,
       0,     0,     0,  1639,  1640,     0,  1641,  1642,  1643,  1644,
       0,     0,     0,  1645,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,     0,
       0,   945,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1646,  1647,  1648,  1649,  1650,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,   952,  1527,  1528,  1529,  1530,
    1531,  1532,     0,  1533,     0,  1534,     0,     0,     0,  1535,
    1536,  1537,     0,  1538,     0,     0,     0,  1539,  1540,  1541,
    1542,  1543,     0,     0,     0,     0,  1651,  1652,  1653,  1654,
    1655,  1544,  1656,     0,     0,     0,  1545,  1546,     0,     0,
    1547,     0,     0,     0,     0,  1548,  1549,  1550,  1551,  1552,
       0,     0,  1553,     0,  1554,  1555,  1556,     0,     0,  1557,
    1558,     0,  1559,  1560,  1561,     0,     0,     0,  1562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1563,     0,     0,     0,     0,  1564,     0,     0,
       0,     0,  1565,  1566,  1567,     0,     0,     0,     0,  1568,
    1569,     0,  1570,  1571,  1572,  1573,     0,     0,  1574,     0,
    2122,  1576,  1577,  1578,     0,  1579,     0,  1580,  1581,     0,
    1582,     0,  1583,  1584,     0,  1585,  1586,  1587,  1588,     0,
       0,     0,     0,     0,  1589,     0,  1590,     0,  1591,  1592,
       0,  1593,  1594,  1595,  1596,  1597,  1598,     0,  1599,  1600,
    1601,  1602,  1603,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1604,     0,  1605,     0,  1606,     0,     0,
       0,     0,     0,     0,     0,     0,  1607,     0,  1608,  1609,
    1610,  1611,  1612,  1613,  1614,     0,     0,  1615,  1616,     0,
       0,     0,     0,  1617,     0,  1618,  1619,  1620,     0,  1621,
       0,  1622,     0,  1623,  1624,  1625,  1626,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,     0,
    1627,  1628,  1629,     0,     0,     0,     0,   165,   166,     0,
    1630,     0,  1631,  1632,  1633,   167,   168,     0,     0,  1634,
       0,  1635,  1636,  1637,     0,     0,     0,  1638,   169,     0,
       0,  1639,  1640,     0,  1641,  1642,  1643,  1644,     0,     0,
       0,  1645,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,     0,
     171,     0,     0,   172,   173,     0,     0,     0,     0,   951,
       0,     0,   174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1646,  1647,  1648,  1649,  1650,     0,     0,   175,
       0,     0,     0,   176,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   953,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1651,  1652,  1653,  1654,  1655,     0,
    1656,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,     0,     0,   479,
     480,   481,   482,   483,   484,   485,   179,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,   181,   182,     0,     0,     0,   183,     0,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   184,   501,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   167,   479,   480,   481,
     482,   483,   484,   485,     0,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,     0,     0,     0,     0,     0,     0,   656,
       0,     0,     0,     0,     0,     0,   170,     0,     0,     0,
       0,   171,     0,     0,   172,   173,   479,   480,   481,   482,
     483,   484,   485,   174,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   657,   501,   958,     0,     0,   178,     0,     0,
     479,   480,   481,   482,   483,   484,   485,   179,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   479,   480,   481,   482,
     483,   484,   485,   959,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,   658,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,     0,     0,     0,     0,     0,     0,
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
     166,     0,   960,     0,     0,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     767,     0,   768,     0,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   170,   501,     0,
       0,   961,   171,     0,     0,   172,   173,     0,     0,     0,
       0,     0,     0,     0,   174,     0,     0,     0,     0,   479,
     480,   481,   482,   483,   484,   485,   973,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,   479,   480,   481,   482,   483,   484,
     485,   974,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   975,     0,     0,   178,     0,
       0,   479,   480,   481,   482,   483,   484,   485,   179,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,     0,     0,     0,
       0,   977,     0,     0,     0,   479,   480,   481,   482,   483,
     484,   485,   769,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     276,   277,   278,     0,     0,   770,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   166,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,   479,   480,   481,   482,   483,   484,   485,   988,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   170,     0,
       0,     0,     0,   171,     0,     0,   172,   173,     0,     0,
       0,     0,     0,     0,   997,   174,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   998,
     501,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   999,   501,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1000,     0,     0,   178,
       0,     0,   479,   480,   481,   482,   483,   484,   485,   179,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,     0,     0,     0,
    1001,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   379,     0,     0,     0,     0,
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
       0,   165,   166,     0,     0,     0,     0,  1002,     0,   167,
     697,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,     0,   171,     0,     0,   172,   173,     0,
       0,  1003,     0,     0,     0,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   479,
     480,   481,   482,   483,   484,   485,  1004,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,   479,   480,   481,   482,   483,   484,
     485,  1010,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,     0,     0,  1014,     0,     0,
     178,     0,     0,   479,   480,   481,   482,   483,   484,   485,
     179,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,  1163,   501,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   184,   501,     0,     0,     0,
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
       0,     0,   165,   166,     0,     0,  1391,     0,     0,     0,
     167,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,     0,     0,     0,     0,   171,     0,     0,   172,   173,
       0,     0,     0,     0,     0,     0,     0,   174,     0,     0,
       0,     0,     0,     0,  1392,     0,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,  1403,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   927,     0,     0,   479,   480,   481,
     482,   483,   484,   485,  1413,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1429,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,   479,   480,   481,   482,
     483,   484,   485,  1430,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,     0,     0,     0,
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
       0,     0,     0,   165,   166,     0,  1431,     0,     0,     0,
       0,   167,   479,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,     0,     0,     0,     0,   171,     0,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,   174,     0,
       0,  1434,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   479,   480,   481,   482,   483,
     484,   485,  1364,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,  1435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   962,
       0,     0,     0,     0,     0,  1379,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,  1896,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   479,   480,
     481,   482,   483,   484,   485,   963,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   184,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   165,   166,  1380,     0,     0,     0,
       0,     0,   167,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,     0,     0,     0,   171,     0,     0,
     172,   173,     0,     0,     0,     0,     0,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   954,
       0,     0,     0,     0,     0,     0,   479,   480,   481,   482,
     483,   484,   485,  1369,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   479,   480,   481,   482,   483,   484,   485,
     955,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,   479,   480,   481,   482,   483,
     484,   485,   956,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,   479,   480,   481,   482,   483,   484,   485,   965,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,     0,     0,     0,
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
     279,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,   165,   166,   966,     0,     0,
       0,     0,     0,   167,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,     0,     0,     0,     0,   171,     0,
       0,   172,   173,     0,     0,     0,     0,     0,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     967,     0,     0,     0,     0,     0,     0,   479,   480,   481,
     482,   483,   484,   485,  1853,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,     0,     0,     0,     0,   968,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,  -684,  -684,  -684,  -684,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   178,   501,     0,     0,     0,   969,
       0,     0,     0,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   479,   480,
     481,   482,   483,   484,   485,   970,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,   184,
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
       0,     0,     0,     0,     0,     0,   165,   166,   971,     0,
       0,     0,     0,     0,   167,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,     0,     0,     0,     0,   171,
       0,     0,   172,   173,     0,     0,     0,     0,     0,     0,
       0,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   972,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1855,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   479,   480,   481,   482,   483,
     484,   485,   976,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,     0,   989,     0,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   990,   501,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,     0,     0,     0,     0,     0,
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
       0,     0,   279,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,   165,   166,   991,
       0,     0,     0,     0,     0,   167,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,     0,
     171,     0,     0,   172,   173,   479,   480,   481,   482,   483,
     484,   485,   174,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,   479,   480,   481,   482,   483,   484,   485,   992,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,   479,   480,   481,
     482,   483,   484,   485,   993,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,     0,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   178,   501,     0,     0,
       0,     0,     0,     0,     0,     0,   179,     0,   994,     0,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   995,   501,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     278,     0,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   479,   480,   481,   482,   483,   484,   485,
     996,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,     0,     0,     0,     0,     0,  1007,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,  1008,     0,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,  1009,   501,     0,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,  1013,   501,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,   501,     0,     0,     0,   479,   480,   481,
     482,   483,   484,   485,  1038,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,   479,   480,   481,   482,   483,   484,   485,  1383,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,   479,   480,   481,
     482,   483,   484,   485,     0,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,   479,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,   479,   480,   481,
     482,   483,   484,   485,     0,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,   479,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,   479,   480,   481,
     482,   483,   484,   485,     0,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,   501,   479,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,   501,  1388,     0,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,  1389,   501,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,     0,
       0,     0,     0,     0,  1390,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,  1393,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,  1394,     0,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,  1395,   501,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,  1396,     0,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,  1397,   501,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,  1398,   501,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,  1401,   501,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,  1402,   501,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,  1414,   501,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,  1415,   501,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,  1428,   501,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,  1432,     0,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,  1433,   501,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,     0,     0,  1442,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,  1443,   479,   480,
     481,   482,   483,   484,   485,     0,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,  1511,     0,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,  1709,
     501,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,  1773,     0,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,  1830,   501,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,  1861,   501,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,  1862,   501,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,  1863,   501,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,  1864,   501,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,  1865,   501,   479,
     480,   481,   482,   483,   484,   485,     0,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,  1874,   501,   479,   480,   481,   482,   483,   484,
     485,     0,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,  1891,
       0,   479,   480,   481,   482,   483,   484,   485,     0,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,  1892,   501,   479,   480,   481,   482,
     483,   484,   485,     0,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
     501,     0,     0,     0,  1893,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,  1894,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,     0,
    1895,     0,   479,   480,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,  1897,   501,     0,     0,     0,
       0,     0,  1710,  1711,     0,     0,     0,  1712,     0,  1713,
       0,     0,     0,     0,     0,     0,   479,   480,   481,   482,
     483,   484,   485,  1898,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,  1265,
     501,     0,  1714,  1715,     0,  1716,     0,     0,  1920,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1266,     0,
       1,     0,  1267,     0,     2,  1268,     0,  1269,     0,     0,
    1270,     0,     0,  1926,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1271,     3,     0,     0,     0,
       0,     4,  1272,  1273,     0,     0,     0,     0,  1930,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1935,     0,     6,     7,  1274,   559,   560,
       0,   561,     0,   562,   563,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1275,     0,     0,     0,  2038,   564,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1717,  1718,     0,  2062,     0,     8,     0,     0,  1276,     0,
       0,   565,   566,   567,   568,     0,     9,    10,    11,     0,
     569,     0,     0,     0,     0,   379,     0,     0,  2075,   570,
       0,     0,     0,   915,     0,     0,     0,  1277,     0,     0,
       0,     0,     0,     0,     0,  1278,     0,     0,     0,   571,
       0,     0,     0,     0,    12,  2085,    13,   572,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,   573,     0,     0,     0,     0,  1161,     0,   574,
    2086,     0,   575,    15,    16,   576,   577,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
    1279,    18,   578,   479,   480,   481,   482,   483,   484,   485,
      19,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,     0,
       0,   579,   580,     0,     0,   581,   582,     0,     0,     0,
       0,   583,     0,   584,     0,     0,     0,     0,   585,   586,
       0,     0,     0,     0,   587,     0,   588,     0,     0,     0,
       0,     0,   589,     0,   590,     0,     0,     0,     0,   591,
     479,   480,   481,   482,   483,   484,   485,     0,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,   479,   480,   481,   482,   483,
     484,   485,     0,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,   501,
       0,     0,  1169,   479,   480,   481,   482,   483,   484,   485,
       0,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,   501,     0,     0,
       0,     0,     0,     0,     0,  1688,     0,     0,     0,     0,
       0,     0,     0,   478,     0,     0,     0,     0,     0,     0,
     479,   480,   481,   482,   483,   484,   485,  1160,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501,     0,     0,     0,     0,     0,
       0,     0,  1375,     0,   502,     0,     0,     0,     0,     0,
       0,   479,   480,   481,   482,   483,   484,   485,  1689,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,   501,     0,     0,   479,   480,
     481,   482,   483,   484,   485,   957,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,   501,     0,   479,   480,   481,   482,   483,   484,
     485,  1023,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,   501,     0,
     479,   480,   481,   482,   483,   484,   485,  1227,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,   501
};

static const yytype_int16 yycheck[] =
{
      91,  1090,  1042,  1250,   296,  1117,  1053,  1054,   625,   338,
    1057,  1341,  1358,   290,   286,     4,  1105,    34,  1343,     5,
     522,  1138,   192,  1112,     8,     3,     6,   851,   852,    20,
     129,     6,   192,   857,   913,   859,   129,  1673,    18,  1467,
     797,    71,     3,     4,     5,     6,     7,     8,   910,    64,
     912,    41,     3,     3,    41,    34,    71,     3,     3,   152,
     147,    90,   228,   154,   155,   290,    44,    20,     4,  1262,
    1263,    16,  1679,    80,   165,   166,   167,   354,   212,    83,
     171,    10,    11,    12,    13,    14,    15,    16,  1281,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   254,    34,   240,     3,    42,    44,
     539,    18,   127,   190,    18,     3,   131,    47,    48,   254,
     130,   106,   209,   254,   106,   197,     4,     5,     6,     7,
      34,   132,    42,   148,    48,     3,    67,    67,  1017,  1469,
     261,     3,   157,   100,  1417,  1418,     3,     3,    91,     3,
     229,    63,    93,  1426,  1427,    67,   229,     9,     3,   170,
     240,    64,     3,   218,   194,   594,   261,    71,    20,   786,
      26,   105,   113,     3,    77,   165,    64,   254,   129,   194,
     259,    26,    44,   193,   256,   802,   259,    65,   279,    77,
      44,   246,    88,   150,   195,   105,   147,   208,   143,   142,
     190,   186,   106,   190,   186,   375,   186,     3,   120,   375,
     160,   186,   147,   223,   160,   375,   166,  1264,   169,   249,
     166,    78,  1311,   373,   358,   186,   216,   504,   257,   216,
     237,   215,  1344,  1322,   249,   224,   225,  1354,   373,   511,
    1329,   177,   246,   188,   375,   196,  1323,    10,    11,    12,
      13,    14,    15,    16,   375,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     177,    34,   203,   203,   209,  1032,   375,  1705,   264,   229,
     375,   149,   375,   900,   375,  1478,   373,   201,   379,   246,
       3,  1153,   149,  1155,   229,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   808,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,  1958,   414,   415,   416,   306,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,  1674,  1675,  1225,   624,   338,   440,
     441,   338,  1959,   149,   445,   446,   100,   374,    18,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   372,   473,   474,   475,   814,   815,   254,   479,   480,
     481,   482,   483,   822,   372,   374,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   636,  1758,   374,   639,   506,   228,  1457,   368,   372,
       3,   512,   368,   373,    18,  1502,    71,   373,    71,   654,
      90,   147,  1521,    80,  1523,   228,   149,  1514,   372,   868,
     869,   870,   320,   321,   322,    92,   129,   376,    36,  1722,
    1723,  1724,  1725,  1726,  1727,     3,   363,   364,   365,   366,
     254,  1734,     3,    67,   100,  1738,   254,    88,  1292,  1742,
    1294,  1295,  1549,   314,   315,   316,   317,     3,   126,     3,
      68,   128,   127,  1560,   127,     3,   254,   372,   373,   136,
     247,   264,   575,   209,     3,   373,    90,     5,   581,   147,
     583,  1847,   246,  1580,  1829,    93,   373,     3,   837,   838,
     267,   132,     3,   101,  1761,     3,   176,  1594,     3,   791,
      55,   117,   118,   106,    59,   113,  1603,   148,   957,   958,
     190,   622,     3,     4,     5,     6,     7,     8,     3,   186,
      14,  2126,    10,  1045,    18,   240,  1048,    67,    56,   194,
     233,   194,    78,  1732,  1733,   117,   118,   648,   649,    77,
     254,   373,   653,     3,  1743,  1744,  1643,   261,    77,   660,
    1659,   796,   107,    37,   195,   110,  1665,  2162,  2163,   373,
     373,   185,   176,   230,    44,   373,    44,     3,    52,     5,
     125,   212,   180,    53,   215,    53,   190,     0,   890,   203,
     236,   149,   375,  2188,   249,   373,   249,   255,   149,   240,
     145,   374,   375,   201,     5,   374,   375,   264,   153,   240,
      88,  1238,   338,   149,   228,   149,  1055,    95,   240,    20,
      10,    11,    12,    13,    14,    15,    16,  1684,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   149,    34,     3,   372,   373,   149,  2005,
     371,   149,     3,   131,   132,   185,   262,   148,    44,   257,
       3,   762,   763,    44,   765,     3,   157,    53,   372,   770,
     148,   375,    53,   203,     3,    80,   373,  1866,  1867,  1868,
    1869,  1870,  1871,   209,    30,    31,    32,    92,    34,    96,
     262,  1880,   237,   149,   239,  1884,   374,   375,   228,  1888,
    2164,    96,     3,  1825,   148,   186,    64,  1794,  2064,  1808,
    1993,     3,  1799,   258,  1997,     3,   373,   195,     3,    77,
    1819,   234,  1821,   128,   148,  2189,  2190,   358,   240,   374,
     375,   136,   139,     3,   212,   164,  1038,   215,   375,  2079,
     147,   374,   375,  1030,   139,   152,     3,    13,    14,     3,
      16,  2008,   147,    19,  2218,   375,   234,   235,    31,    32,
       3,    34,   169,     3,   865,   374,   375,   372,    96,    69,
       3,   249,    75,    76,   169,   374,   375,  2133,   374,   375,
     268,   186,    44,  1018,    96,    10,    11,    12,    13,    14,
      15,    16,  1027,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     3,    34,
     373,   139,    96,   190,   915,   268,   917,   374,   375,   147,
     374,   375,     3,   924,   925,   230,   927,   139,  2111,  2112,
     931,  2114,  2115,   374,   375,   147,   373,   938,   939,   940,
     941,   169,   943,   944,   945,  1932,   146,   374,   375,   950,
     951,     3,   953,  1952,  1904,   139,   156,   169,   959,   960,
     961,  1948,   373,   147,   374,   375,   374,   375,     4,     5,
     170,     3,   973,   974,   975,   372,   977,   268,  2067,   268,
     358,   268,  2071,   183,   268,   169,     3,   988,   374,   375,
     268,   374,   375,   233,  1129,   268,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,   129,  1006,   268,  1346,   208,  1010,
       4,  1012,     3,  1014,   372,    26,    27,    28,    29,    30,
      31,    32,  1023,    34,  1025,  1026,   226,   374,   375,     4,
       5,   374,   375,   374,   375,  2022,   374,   375,  1039,   374,
     375,   374,   375,   374,   375,  1046,  2135,  2136,     8,  2138,
    2139,    10,    11,    12,    13,    14,    15,    16,   373,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     9,    34,   374,   375,   374,   375,
     374,   375,   374,   375,   374,   375,    34,  1088,     3,   374,
     375,  1226,   374,   375,  1229,   375,  1231,   373,  1233,   374,
     375,    10,    11,    12,    13,    14,    15,    16,   373,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   373,    34,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   373,    34,   562,   563,
     564,   565,  1143,   567,    44,  1146,   570,   571,   572,   374,
     375,  1152,   373,   577,   578,   579,   374,   375,   582,   373,
    1161,    46,  1163,   374,   375,   374,   375,   373,  1169,  1170,
     374,   375,   374,   375,    10,    11,    12,    13,    14,    15,
      16,    46,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   373,    34,   374,
     375,    10,    11,    12,    13,    14,    15,    16,   373,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   373,    34,  1227,    10,    11,    12,
      13,    14,    15,    16,   373,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     375,    34,  1253,   374,   375,   374,   375,  1258,   374,   375,
     374,   375,   374,   375,    50,    51,    10,    11,    12,    13,
      14,    15,    16,   373,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   373,
      34,    10,    11,    12,    13,    14,    15,    16,   373,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   373,    34,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     373,    34,   374,   375,   373,  1336,   374,   375,    64,   374,
     375,   374,   375,   374,   375,    10,    11,    12,    13,    14,
      15,    16,   373,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   373,    34,
     374,   375,    18,   374,   375,   374,   375,   373,  1379,   374,
     375,  1382,    64,   844,   845,   373,   847,   848,   849,   373,
    1391,  1392,   853,   854,   855,    41,   373,   858,    44,   373,
      46,   373,  1403,    49,   373,    50,    51,   372,   373,   372,
     373,  1412,  1413,   374,   375,   374,   375,   373,    64,   374,
     375,   374,   375,   374,   375,    71,    72,   373,  1429,  1430,
    1431,   374,   375,  1434,  1435,   373,  1437,   373,  1439,   373,
    1441,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   373,    34,  1455,  1456,   374,   375,   804,   805,
     106,  1034,  1035,  1464,  1465,   374,   375,   373,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,  1482,    34,  1461,  1462,  1486,    24,    25,    26,    27,
      28,    29,    30,    31,    32,  1496,    34,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,  1510,
      34,   157,   373,   373,   373,   373,   373,   373,   373,   373,
       3,     4,     5,     6,     7,     8,   373,    10,   373,    12,
     373,   373,   373,    16,    17,    18,   373,    20,   374,   375,
     186,    24,    25,    26,    27,    28,   373,   373,   194,   373,
     373,   373,   373,   373,   373,    38,   373,   373,   373,   373,
      43,    44,   373,   373,    47,   374,   375,   373,   373,    52,
      53,    54,    55,    56,   373,   373,    59,   373,    61,    62,
      63,   373,   373,    66,    67,   373,    69,    70,    71,   373,
      64,   374,    75,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   249,   373,   373,    89,   373,   373,   373,
     373,    94,   373,   373,   373,   373,    99,   100,   101,   373,
     373,   373,   373,   106,   107,   264,   109,   110,   111,   112,
     374,   375,   115,   233,   117,   118,   119,   120,     3,   122,
       3,   124,   125,     3,   127,   190,   129,   130,     3,   132,
     133,   134,   135,   190,   268,   374,   375,     3,   141,   190,
     143,   268,   145,   146,     3,   148,   149,   150,   151,   152,
     153,     3,   155,   156,   157,   158,   159,    26,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   170,     3,   172,
      34,   174,     3,  1694,  1695,     3,   376,   374,   374,  1700,
     183,  1702,   185,   186,   187,   188,   189,   190,   191,   374,
     375,   194,   195,   374,   374,   374,   374,   200,   374,   202,
     203,   204,   374,   206,   374,   208,   374,   210,   211,   212,
     213,   374,     5,   374,   374,     3,   374,   374,   373,     3,
       3,     3,   374,     3,   227,   228,   229,   156,   189,     3,
       3,     3,     3,     3,   237,     3,   239,   240,   241,     3,
       3,     3,     3,   246,     3,   248,   249,   250,   233,     3,
       3,   254,     3,     5,     3,   258,   259,   366,   261,   262,
     263,   264,   373,     5,     5,   268,   373,    10,    11,    12,
      13,    14,    15,    16,   373,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     373,    34,    57,   373,   373,   373,     3,     3,     3,     3,
     374,     3,   375,     3,   190,  1826,   309,   310,   311,   312,
     313,    10,    11,    12,    13,    14,    15,    16,   374,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   190,    34,  1857,     3,   268,   190,
       3,   191,     3,     3,   374,   374,   374,   229,   337,   337,
     337,   374,  1873,   337,   337,   229,   373,   373,   373,   373,
     129,   157,   375,   157,   190,   157,   156,   156,   371,   372,
     373,   374,   375,     3,   377,  1896,    34,     3,   233,   233,
    1901,     5,     5,     5,     4,   186,     5,     5,   206,  1910,
     376,   373,     3,     4,     5,     6,     7,     8,   373,    10,
       3,    12,  1923,  1924,   190,    16,    17,    18,   256,    20,
       3,     3,     3,    24,    25,    26,    27,    28,    87,     3,
       3,    56,   172,   190,    20,   373,   192,    38,    84,   376,
     374,   154,    43,    44,     4,   337,    47,   337,   337,   337,
     337,    52,    53,    54,    55,    56,   337,   373,    59,   373,
      61,    62,    63,   373,     5,    66,    67,     5,    69,    70,
      71,   337,   373,   373,    75,   337,   337,   134,     3,   229,
     374,   133,     3,     3,   157,   174,   157,   373,    89,   373,
       3,     3,   374,    94,   374,   374,   374,     3,    99,   100,
     101,    71,   373,    53,   373,   106,   107,   133,   109,   110,
     111,   112,   190,   373,   115,   373,   117,   118,   119,   120,
     373,   122,   256,   124,   125,     3,   127,   256,   129,   130,
       3,   132,   133,   134,   135,     3,   373,   373,   157,  2050,
     141,     3,   143,     4,   145,   146,   157,   148,   149,   150,
     151,   152,   153,   373,   155,   156,   157,   158,   159,   373,
       6,     4,     4,   373,   375,   205,   157,     3,     3,   170,
     373,   172,   374,   174,   374,   374,   373,   373,   373,   373,
     373,   373,   183,   373,   185,   186,   187,   188,   189,   190,
     191,    56,   373,   194,   195,   141,   373,   156,   373,   200,
       3,   202,   203,   204,   373,   206,   374,   208,   374,   210,
     211,   212,   213,    20,     3,   186,     3,    45,     3,  2130,
       4,   157,   157,     5,   228,   373,   227,   228,   229,   374,
     206,     4,     4,     3,     3,   373,   237,   374,   239,   240,
     241,   374,   375,     3,   374,   246,   373,   248,   249,   250,
     373,   373,   373,   254,   373,   373,   373,   258,   259,     3,
     261,   262,   263,   264,     3,   373,   373,   268,   256,   373,
     111,   256,   373,     3,   133,   373,     3,   246,    20,    10,
      11,    12,    13,    14,    15,    16,   375,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   190,    34,   373,   373,     4,   338,   309,   310,
     311,   312,   313,    10,    11,    12,    13,    14,    15,    16,
     375,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   374,    34,   337,   337,
       3,     4,     5,     6,     7,     8,   374,    10,     3,    12,
     374,   374,   374,    16,    17,    18,   373,    20,     3,     3,
       3,    24,    25,    26,    27,    28,     5,     5,    44,    53,
     371,   372,   373,   374,   375,    38,   377,   373,   373,   373,
      43,    44,   374,     4,    47,    53,   375,   374,   210,    52,
      53,    54,    55,    56,   374,   374,    59,     3,    61,    62,
      63,   373,   256,    66,    67,   373,    69,    70,    71,   373,
     259,   373,    75,   374,   157,   373,   157,   373,   375,    81,
      56,   373,   373,   191,     3,   374,    89,   374,    20,   374,
     374,    94,    18,     3,   373,   157,    99,   100,   101,   373,
       3,   374,   374,   106,   107,   374,   109,   110,   111,   112,
      53,   373,   115,     3,   117,   118,   119,   120,   129,   122,
       3,   124,   125,   373,   127,   373,   129,   130,   373,   132,
     133,   134,   135,    56,    56,     3,     3,   373,   141,     3,
     143,    56,   145,   146,   374,   148,   149,   150,   151,   152,
     153,   374,   155,   156,   157,   158,   159,   374,   337,   337,
     337,   207,   374,   337,   374,   133,     3,   170,   374,   172,
     257,   174,   200,     3,     3,    53,   374,     5,     5,    70,
     183,   373,   185,   186,   187,   188,   189,   190,   191,   124,
     149,   194,   195,   159,   263,   200,     5,   200,     3,   202,
     203,   204,    20,   206,   197,   208,   375,   210,   211,   212,
     213,     3,    94,   374,   374,   374,   374,   374,   374,     3,
     375,   374,   373,   373,   227,   228,   229,   152,   374,   373,
       3,   373,     3,   374,   237,   374,   239,   240,   241,   374,
       5,   374,     3,   246,     3,   248,   249,   250,     3,     3,
     373,   254,   373,   373,   219,   258,   259,   375,   261,   262,
     263,   264,   219,   374,   200,   268,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     3,
      34,     3,    20,   373,     3,     3,   374,   374,   173,   173,
     375,     3,   233,   374,   375,     3,   309,   310,   311,   312,
     313,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   374,    34,   228,   374,     3,     4,
       5,     6,     7,     8,   374,    10,   373,    12,   374,   374,
     373,    16,    17,    18,   373,    20,   217,   374,     3,    24,
      25,    26,    27,    28,   374,   374,     5,     3,   371,   372,
     373,   374,   375,    38,   377,   216,     5,   374,    43,    44,
       3,   373,    47,    90,   144,   167,   259,    52,    53,    54,
      55,    56,   238,   190,    59,   190,    61,    62,    63,   184,
       5,    66,    67,   184,    69,    70,    71,     5,    98,  1163,
      75,   380,  1026,  1458,  1762,  1693,   506,   516,   123,   930,
    2152,  1257,   626,   632,    89,    86,  1857,   369,  1356,    94,
    1825,   638,  2194,  1345,    99,   100,   101,   856,   158,  1333,
     556,   106,   107,   911,   109,   110,   111,   112,   872,  1500,
     115,   346,   117,   118,   119,   120,    -1,   122,    -1,   124,
     125,    -1,   127,    -1,   129,   130,    -1,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,   200,    -1,   202,   203,   204,
      -1,   206,    -1,   208,    -1,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,   246,    -1,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,   259,    -1,   261,   262,   263,   264,
      -1,    -1,    -1,   268,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   374,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   371,   372,   373,   374,
     375,    38,   377,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,    -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   120,    -1,   122,    -1,   124,   125,    -1,
     127,    -1,   129,   130,    -1,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,   194,   195,    -1,
      -1,    -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,
      -1,   208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,    -1,   239,   240,   241,    -1,    -1,    -1,    -1,   246,
      -1,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,   259,    -1,   261,   262,   263,   264,    -1,    -1,
      -1,   268,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,   375,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,   374,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,   371,   372,   373,   374,   375,    38,
     377,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,
     109,   110,   111,   112,    -1,    -1,   115,    -1,   117,   118,
     119,   120,    -1,   122,    -1,   124,   125,    -1,   127,    -1,
     129,   130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,    -1,    -1,   194,   195,    -1,    -1,    -1,
      -1,   200,    -1,   202,   203,   204,    -1,   206,    -1,   208,
      -1,   210,   211,   212,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,
     239,   240,   241,    -1,    -1,    -1,    -1,   246,    -1,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
     259,    -1,   261,   262,   263,   264,    -1,    -1,    -1,   268,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,   374,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,   375,    38,   377,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    -1,    -1,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,
     101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,
     111,   112,    -1,    -1,   115,    -1,   117,   118,   119,   120,
      -1,   122,    -1,   124,   125,    -1,   127,    -1,   129,   130,
      -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,    -1,   143,    -1,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,
      -1,   202,   203,   204,    -1,   206,    -1,   208,    -1,   210,
     211,   212,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,   239,   240,
     241,    -1,    -1,    -1,    -1,   246,    -1,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,   259,    -1,
     261,   262,   263,   264,    -1,    -1,    -1,   268,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,   375,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,   374,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
     371,   372,   373,   374,   375,    38,   377,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,
      -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,   112,
      -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,   122,
      -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,
     143,    -1,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,   194,   195,    -1,    -1,    -1,    -1,   200,    -1,   202,
     203,   204,    -1,   206,    -1,   208,    -1,   210,   211,   212,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   237,    -1,   239,   240,   241,    -1,
      -1,    -1,    -1,   246,    -1,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,   259,    -1,   261,   262,
     263,   264,    -1,    -1,    -1,   268,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   311,   312,
     313,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,   374,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,   371,   372,
     373,   374,   375,    38,   377,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,
      -1,   106,   107,    -1,   109,   110,   111,   112,    -1,    -1,
     115,    -1,   117,   118,   119,   120,    -1,   122,    -1,   124,
     125,    -1,   127,    -1,   129,   130,    -1,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,   200,    -1,   202,   203,   204,
      -1,   206,    -1,   208,    -1,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,   246,    -1,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,   259,    -1,   261,   262,   263,   264,
      -1,    -1,    -1,   268,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   374,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   371,   372,   373,   374,
     375,    38,   377,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,    -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   120,    -1,   122,    -1,   124,   125,    -1,
     127,    -1,   129,   130,    -1,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,   194,   195,    -1,
      -1,    -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,
      -1,   208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,    -1,   239,   240,   241,    -1,    -1,    -1,    -1,   246,
      -1,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,   259,    -1,   261,   262,   263,   264,    -1,    -1,
      -1,   268,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,   375,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,   374,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,   371,   372,   373,   374,   375,    38,
     377,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,    -1,
     109,   110,   111,   112,    -1,    -1,   115,    -1,   117,   118,
     119,   120,    -1,   122,    -1,   124,   125,    -1,   127,    -1,
     129,   130,    -1,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,    -1,   143,    -1,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,    -1,    -1,   194,   195,    -1,    -1,    -1,
      -1,   200,    -1,   202,   203,   204,    -1,   206,    -1,   208,
      -1,   210,   211,   212,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,
     239,   240,   241,    -1,    -1,    -1,    -1,   246,    -1,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
     259,    -1,   261,   262,   263,   264,    -1,    -1,    -1,   268,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,   374,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,   375,    38,   377,    -1,
      -1,    -1,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    -1,    -1,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,
     101,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,
     111,   112,    -1,    -1,   115,    -1,   117,   118,   119,   120,
      -1,   122,    -1,   124,   125,    -1,   127,    -1,   129,   130,
      -1,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,    -1,   143,    -1,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,
      -1,   202,   203,   204,    -1,   206,    -1,   208,    -1,   210,
     211,   212,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,   239,   240,
     241,    -1,    -1,    -1,    -1,   246,    -1,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,   259,    -1,
     261,   262,   263,   264,    -1,    -1,    -1,   268,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,   375,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,   374,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
     371,   372,   373,   374,   375,    38,   377,    -1,    -1,    -1,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    71,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,
      -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,   112,
      -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,   122,
      -1,   124,   125,    -1,   127,    -1,   129,   130,    -1,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,    -1,
     143,    -1,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,   194,   195,    -1,    -1,    -1,    -1,   200,    -1,   202,
     203,   204,    -1,   206,    -1,   208,    -1,   210,   211,   212,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   237,    -1,   239,   240,   241,    -1,
      -1,    -1,    -1,   246,    -1,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,   259,    -1,   261,   262,
     263,   264,    -1,    -1,    -1,   268,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   311,   312,
     313,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,   374,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,   371,   372,
     373,   374,   375,    38,   377,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,
      -1,   106,   107,    -1,   109,   110,   111,   112,    -1,    -1,
     115,    -1,   117,   118,   119,   120,    -1,   122,    -1,   124,
     125,    -1,   127,    -1,   129,   130,    -1,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,    -1,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,   200,    -1,   202,   203,   204,
      -1,   206,    -1,   208,    -1,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,   246,    -1,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,   259,    -1,   261,   262,   263,   264,
      -1,    -1,    -1,   268,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   374,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   371,   372,   373,   374,
     375,    38,   377,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      -1,    -1,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,    -1,   109,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   120,    -1,   122,    -1,   124,   125,    -1,
     127,    -1,   129,   130,    -1,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,   143,    -1,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,   194,   195,    -1,
      -1,    -1,    -1,   200,    -1,   202,   203,   204,    -1,   206,
      -1,   208,    -1,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
     227,   228,   229,    -1,    -1,    -1,    -1,    17,    18,    -1,
     237,    -1,   239,   240,   241,    25,    26,    -1,    -1,   246,
      -1,   248,   249,   250,    -1,    -1,    -1,   254,    38,    -1,
      -1,   258,   259,    -1,   261,   262,   263,   264,    -1,    -1,
      -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,   375,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,    -1,    -1,    99,
      -1,    -1,    -1,   103,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   375,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   371,   372,   373,   374,   375,    -1,
     377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   186,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,    -1,    -1,    -1,   226,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   251,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,    -1,   307,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    -1,    -1,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,    -1,   359,
     360,   361,   362,    -1,    -1,    -1,    -1,   367,   368,   369,
     370,    -1,    -1,   373,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    74,    10,    11,    12,    13,
      14,    15,    16,    82,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   171,    34,   375,    -1,    -1,   176,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   186,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   375,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    -1,   307,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    -1,    -1,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,    -1,
     359,   360,   361,   362,    -1,    -1,    -1,    -1,   367,   368,
     369,   370,    -1,    -1,   373,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,   375,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    65,    34,    -1,
      -1,   375,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   375,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   375,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   375,    -1,    -1,   176,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   186,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,   375,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   220,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,    -1,   307,
      -1,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,    -1,
      -1,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
      -1,   359,   360,   361,   362,    -1,    -1,    -1,    -1,   367,
     368,   369,   370,    -1,    -1,   373,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   375,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,   375,    82,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   375,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   375,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   375,    -1,    -1,   176,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   186,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
     375,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,
      -1,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,    -1,
     307,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,    -1,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,    -1,   359,   360,   361,   362,    -1,    -1,    -1,    -1,
     367,   368,   369,   370,    -1,    -1,   373,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,   375,    -1,    25,
      26,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,
      -1,   375,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   375,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   375,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,   375,    -1,    -1,
     176,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     186,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   375,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   251,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
      -1,   307,    -1,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,    -1,    -1,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,    -1,   359,   360,   361,   362,    -1,    -1,    -1,
      -1,   367,   368,   369,   370,    -1,    -1,   373,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,   375,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,   375,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   375,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   375,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   375,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    -1,   307,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,    -1,   359,   360,   361,   362,    -1,    -1,
      -1,    -1,   367,   368,   369,   370,    -1,    -1,   373,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,   375,    -1,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   106,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,   133,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   375,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   374,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   251,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    -1,   307,    -1,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,    -1,    -1,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,    -1,   359,   360,   361,   362,    -1,
      -1,    -1,    -1,   367,   368,   369,   370,    -1,    -1,   373,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,   374,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   374,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   106,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     374,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    10,    11,    12,    13,    14,
      15,    16,   374,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    10,    11,    12,    13,    14,    15,    16,   374,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,    -1,   307,    -1,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,    -1,    -1,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,    -1,   359,   360,   361,   362,
      -1,    -1,    -1,    -1,   367,   368,   369,   370,    -1,    -1,
     373,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,   374,    -1,    -1,
      -1,    -1,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     374,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   106,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,   374,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   176,    34,    -1,    -1,    -1,   374,
      -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   374,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,   251,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,    -1,   307,    -1,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    -1,    -1,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,    -1,   359,   360,   361,
     362,    -1,    -1,    -1,    -1,   367,   368,   369,   370,    -1,
      -1,   373,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   374,    -1,
      -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   374,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,   374,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   374,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,    -1,   307,    -1,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,    -1,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,    -1,   359,   360,
     361,   362,    -1,    -1,    -1,    -1,   367,   368,   369,   370,
      -1,    -1,   373,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   374,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    10,    11,    12,    13,    14,
      15,    16,    82,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   374,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   374,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   176,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,   374,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   374,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,    -1,   307,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    -1,    -1,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,    -1,   359,
     360,   361,   362,    -1,    -1,    -1,    -1,   367,   368,   369,
     370,    -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     374,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   374,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,   374,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   374,    34,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   374,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   374,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   374,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,   374,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   374,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,   374,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   374,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,   374,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   374,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,   374,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   374,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   374,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   374,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   374,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   374,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   374,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   374,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,   374,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   374,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,   374,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,   374,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   374,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   374,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,   374,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   374,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   374,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   374,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   374,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   374,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   374,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   374,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,   374,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   374,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,   374,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   374,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     374,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   374,    34,    -1,    -1,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,   102,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   374,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    18,
      34,    -1,   137,   138,    -1,   140,    -1,    -1,   374,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      35,    -1,    41,    -1,    39,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    61,    -1,    -1,    -1,
      -1,    66,    71,    72,    -1,    -1,    -1,    -1,   374,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   374,    -1,   100,   101,   106,    54,    55,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,   374,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     265,   266,    -1,   374,    -1,   150,    -1,    -1,   157,    -1,
      -1,   107,   108,   109,   110,    -1,   161,   162,   163,    -1,
     116,    -1,    -1,    -1,    -1,   262,    -1,    -1,   374,   125,
      -1,    -1,    -1,   241,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   199,   374,   201,   153,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,   241,    -1,   175,
     374,    -1,   178,   228,   229,   181,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,
     249,   246,   198,    10,    11,    12,    13,    14,    15,    16,
     255,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,   227,   228,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,   237,    -1,   239,    -1,    -1,    -1,    -1,   244,   245,
      -1,    -1,    -1,    -1,   250,    -1,   252,    -1,    -1,    -1,
      -1,    -1,   258,    -1,   260,    -1,    -1,    -1,    -1,   265,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,   129,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   117,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   105,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    44,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    10,    11,    12,    13,    14,    15,
      16,    43,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      10,    11,    12,    13,    14,    15,    16,    43,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    61,    66,    79,   100,   101,   150,   161,
     162,   163,   199,   201,   209,   228,   229,   243,   246,   255,
     379,   418,   419,   458,   462,   464,   467,   468,   471,   472,
     473,   474,   475,   476,   478,   494,   495,   504,   507,   509,
     510,   511,   534,   537,   544,   545,   548,   551,   552,   555,
     212,   240,   358,   240,     3,    10,    88,    95,   131,   132,
     148,   195,   212,   215,   234,   235,   249,   358,   516,     3,
     459,    88,   132,   148,   195,   212,   215,   240,   358,   486,
       3,     3,     3,    26,   240,   240,   486,     8,   215,   535,
     536,   437,   240,   486,   505,     3,    88,     0,   371,   470,
       3,     3,     3,     3,   373,   209,   149,   508,     3,   148,
       3,     3,    78,   149,     3,     3,   508,   234,   148,   508,
     240,   496,     3,   129,   147,   169,   196,   460,     3,   149,
       3,   149,     3,     3,   149,     3,   149,     3,   149,     3,
     149,     3,   149,    96,   139,   147,   152,   169,   487,   164,
     375,     3,     3,   487,     9,    20,     3,   106,   375,     3,
       4,     5,     6,     7,     8,    17,    18,    25,    26,    38,
      65,    70,    73,    74,    82,    99,   103,   139,   176,   186,
     214,   221,   222,   226,   251,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   307,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   359,   360,   361,   362,   367,   368,   369,   370,   373,
     380,   438,   439,     3,   147,   169,     3,   160,   166,   368,
     373,   441,   442,   443,   444,   447,   457,     3,   379,    47,
      48,    67,   203,    93,   113,    36,    68,    93,   101,   113,
     180,   201,   257,    48,   201,   553,   372,     3,     4,     5,
       6,     7,     8,   186,   374,   546,   547,   132,   195,   268,
       3,    44,     3,   373,   190,     3,   149,   268,   373,    37,
      52,   549,     3,     3,    78,   149,     3,   508,   373,   497,
     372,   461,     3,   460,   129,   375,   268,   268,   268,   268,
     268,    67,   203,   463,   268,   268,     3,     4,   233,     3,
     380,   380,   536,   372,   373,     9,   380,   380,   380,   262,
     380,   417,   372,   373,    34,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   380,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    34,    44,   440,   129,   152,   375,   375,   372,   440,
     373,     3,   373,   419,   441,   228,   375,    69,   146,   170,
     183,   208,   226,   448,   450,    44,   446,   446,    46,    46,
      64,    77,     3,    77,    64,     3,    64,    77,    64,     3,
      77,     3,    64,    77,    64,   264,   233,    18,   177,   363,
     364,   365,   366,   554,     3,   374,   375,     3,     3,    54,
      55,    57,    59,    60,    75,   107,   108,   109,   110,   116,
     125,   145,   153,   168,   175,   178,   181,   182,   198,   227,
     228,   231,   232,   237,   239,   244,   245,   250,   252,   258,
     260,   265,   530,   190,     3,    16,   143,   188,   538,   539,
     540,     3,   190,   268,     3,   538,   100,   150,   246,   550,
     190,     3,   149,   268,   553,     3,     3,   498,   129,   233,
     499,    26,   261,   420,   254,   441,     3,     3,     3,     3,
       3,     3,     3,     3,   228,   373,   488,     3,   228,   488,
       3,   380,   385,   389,   380,   380,   417,   117,   118,   262,
       3,     3,   376,   387,   394,   380,    58,   171,   242,   380,
     415,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     374,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   374,   380,   380,   380,
     374,   380,   380,   380,   380,   380,   380,    26,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   374,
     374,   374,   374,   374,   380,   380,   374,   374,   374,   380,
     380,     5,   374,   374,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   374,   380,   380,   380,
     374,   374,   380,   380,   380,   380,   380,     6,    18,   186,
     306,   373,    13,    14,    16,    19,   380,    38,    40,   220,
     373,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,     3,   441,     3,   439,     3,
     469,     3,   126,   147,   255,   454,   445,   440,   380,   374,
     374,     3,   506,   442,   170,   208,   451,   443,   156,   189,
     449,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,   530,     3,   233,     3,     3,     3,     5,     3,   366,
       5,     5,   264,     5,    56,     5,   547,   373,   373,   373,
     526,   526,   526,   526,   526,   526,   373,   526,   526,   526,
      57,   527,   527,   526,   526,   526,   373,   527,   526,   527,
     373,   373,    18,    34,    71,   106,     3,   530,     3,     3,
       3,   374,   375,   254,   373,     3,     3,   190,   374,   190,
       3,   190,   268,     3,   147,   209,   338,   372,   373,   532,
     533,   374,   375,     4,   224,   225,   500,   380,   191,   430,
     441,   420,   461,   463,     3,   493,     3,   489,   259,   419,
     493,   259,   419,   375,   374,   241,   117,   118,   380,   380,
     374,   380,   386,   419,   129,   375,   374,   129,   380,   375,
     375,   375,   374,   374,   374,   374,   374,   374,   375,   375,
     375,   375,   374,   375,   375,   375,   374,   374,   374,   374,
     375,   375,   374,   375,   374,   374,   374,    44,   375,   375,
     375,   375,   308,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   375,   375,   375,   374,   375,   337,   337,
     337,   374,   375,   374,   375,   374,   337,   337,   375,   374,
     374,   374,   374,   374,   374,   374,   374,   375,   375,   375,
     375,   375,   375,   375,   375,   374,   375,   374,   374,   374,
     375,   374,   375,   374,   375,     6,   186,   390,   392,   380,
     380,   373,   380,    43,   373,   373,   373,   381,   376,   420,
     129,   375,   440,   157,   157,   157,   419,   454,   374,    20,
     372,   375,   420,   449,   449,   156,   190,   443,   156,    71,
     127,   194,   249,   530,   530,     3,   525,   530,     3,   233,
     233,     5,     5,   538,   538,     5,   528,   529,   528,   528,
       4,   531,   528,   528,   528,   529,   529,   528,   528,   528,
     531,   529,   528,   529,     5,     5,   186,   376,   373,   380,
     373,   530,   530,   530,   206,   540,   256,     3,   314,   315,
     316,   317,   465,   466,   254,   373,   190,     3,    44,    53,
       3,   254,   373,     3,     3,   190,    87,     3,    64,    71,
     127,   131,   148,   157,   194,   249,   517,   518,   524,   446,
       3,    80,    92,   128,   136,   186,   230,   264,   373,   501,
     502,   503,    56,   172,   433,   420,    20,   192,   375,   479,
     374,   375,   373,   490,   479,   490,   479,   385,   380,   380,
     117,   241,    84,   375,   376,   374,   380,   380,   380,   129,
     154,   416,   416,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   530,   530,   380,   380,   380,     4,
     337,   337,   337,   337,   337,   337,   380,   380,   380,   380,
     373,   373,   373,   337,     5,   337,     5,   337,   373,   373,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   385,   419,   391,   393,    43,   380,   384,
     380,   382,   388,   383,   388,   419,   134,   421,   441,     3,
     454,   133,   455,   455,   455,   374,   446,   380,     3,     3,
     430,   443,   380,   190,   254,   452,   453,   443,   373,   157,
     157,   373,   525,   525,   530,    18,    37,    41,    44,    46,
      49,    64,    71,    72,   106,   123,   157,   186,   194,   249,
     477,   525,     3,     3,   374,   374,   374,   375,   247,   267,
      75,    76,   374,   375,   374,   374,   374,    71,   380,   465,
      55,    59,   107,   110,   125,   145,   153,   237,   239,   258,
     541,   373,   373,   373,   373,   373,   374,   375,   256,   465,
       3,   254,   373,    53,   542,   133,   256,   465,   254,   373,
     190,     3,     3,   373,   532,     3,   373,   157,   148,   157,
     373,   373,   157,   373,   374,   375,     3,   419,     4,    80,
     237,     6,     4,     4,   373,   502,   375,     3,     5,   431,
     432,   380,   205,   556,   106,   380,   157,     3,     3,   106,
     380,   492,   375,   479,   479,   117,   380,   373,   386,   133,
     374,   374,   375,   374,   380,   380,   374,   374,   374,   374,
     374,   375,   375,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   375,   374,   373,   373,   373,   373,   373,
     373,   374,   375,   375,   374,   374,   395,   396,   397,   373,
     374,   375,   373,   374,   375,   373,   413,   414,   374,   375,
     375,   375,   374,   374,   375,   375,   374,   375,   374,   375,
     374,   375,   374,   374,   374,   374,   385,   419,   380,   419,
     419,   374,   419,   374,   374,    56,   141,   425,   420,   156,
     373,   373,   373,     3,    20,    20,   372,   433,   380,   373,
     453,   380,   373,   373,     3,   523,   477,   477,   525,   186,
       3,   373,   373,   373,    45,     3,   373,     4,     4,     5,
       6,     7,    65,   320,   321,   322,   373,   157,   157,   477,
     206,    44,    53,     5,   228,     4,   529,     4,   529,   529,
     373,   374,   374,    44,    53,   465,     3,     3,     3,     3,
       3,   373,   374,   373,   256,   465,   542,     3,     4,     5,
       6,     7,     8,    10,    12,    16,    17,    18,    20,    24,
      25,    26,    27,    28,    38,    43,    44,    47,    52,    53,
      54,    55,    56,    59,    61,    62,    63,    66,    67,    69,
      70,    71,    75,    89,    94,    99,   100,   101,   106,   107,
     109,   110,   111,   112,   115,   117,   118,   119,   120,   122,
     124,   125,   127,   129,   130,   132,   133,   134,   135,   141,
     143,   145,   146,   148,   149,   150,   151,   152,   153,   155,
     156,   157,   158,   159,   170,   172,   174,   183,   185,   186,
     187,   188,   189,   190,   191,   194,   195,   200,   202,   203,
     204,   206,   208,   210,   211,   212,   213,   227,   228,   229,
     237,   239,   240,   241,   246,   248,   249,   250,   254,   258,
     259,   261,   262,   263,   264,   268,   309,   310,   311,   312,
     313,   371,   372,   373,   374,   375,   377,   543,   111,   373,
     374,   256,   465,     3,   254,   373,   133,   517,    71,   127,
     194,   249,   380,   373,   373,   373,     3,   436,   436,   373,
     523,   513,   532,   518,   530,   502,   374,   503,    42,   105,
     372,   423,   423,   375,   174,   375,     3,    26,   557,   246,
      20,   374,   375,   491,   190,   481,     4,   380,   380,   374,
      97,    98,   102,   104,   137,   138,   140,   265,   266,   380,
     380,   380,   399,   400,   398,   401,   402,   403,   380,   380,
     338,   426,   426,   426,   404,   337,     4,     5,   408,   337,
       4,     5,   412,   426,   426,   380,   380,   380,   380,   380,
     380,   380,   380,   374,   374,   374,   374,   374,   380,   422,
     380,   430,   421,     3,   456,   456,   456,   373,   380,   380,
       3,   556,   436,   374,     3,   520,     3,   519,   374,   375,
     477,     5,   380,     5,    44,    71,   194,   249,   380,   373,
     373,   373,   380,   541,    53,   542,   374,     4,   380,    53,
     542,   374,   374,   374,   374,   375,   465,   465,   373,   374,
     117,   542,   542,   542,   542,   542,   542,   210,   465,   373,
     374,   373,   256,   465,   259,   374,   373,   157,   157,   373,
     374,   520,   436,   436,   374,   375,   374,   519,   374,    41,
     165,   190,   216,   338,   512,   525,   374,     3,   432,   380,
     380,   375,   480,   106,   380,   106,   380,   373,    81,   556,
     374,   374,   374,   374,   374,   374,   426,   426,   426,   426,
     426,   426,   374,   375,   374,    56,   191,   428,   428,   428,
     426,   373,   374,   374,   426,   373,   374,   374,   426,   428,
     428,   374,   374,   374,   374,   374,   375,   374,   374,   423,
     264,   375,   424,   433,   425,   374,   375,   374,   374,     3,
      20,   374,    18,   374,   375,   374,   375,     3,   374,   375,
     374,   374,   375,   373,   373,   157,   374,   374,   374,   374,
     374,    44,    53,   542,   117,   374,   542,   117,     3,   374,
     374,   465,   117,   117,   117,   117,   117,   117,    53,   374,
     465,   465,   373,   374,   129,   513,   532,   380,   373,   373,
     523,   374,   374,   374,     3,   374,     5,    20,   373,     3,
      56,    56,   423,     3,     3,   485,   492,   373,   482,   428,
     428,   428,   428,   428,   428,   380,     3,   427,    56,   374,
     374,   374,   428,   405,   337,   337,   428,   409,   337,   337,
     428,   374,   374,   380,   207,   380,   133,   434,   430,     3,
     374,   380,   257,   200,     3,     3,     5,    50,    51,     5,
     380,   380,    53,   542,   117,   117,   374,   374,    70,   124,
     149,   159,   263,   542,   374,   374,   465,   373,   374,   520,
     519,   374,   200,     5,     3,   100,   236,   197,   256,   197,
      20,   375,   374,     3,    94,   483,   374,   374,   374,   374,
     374,   374,   374,   375,     3,   429,   374,   426,   373,   373,
     374,   426,   373,   373,   374,   374,   423,   218,   246,   152,
     435,   433,     3,   374,   374,   374,   374,   542,   117,   117,
     374,     5,   374,   374,     3,   374,     3,     3,   373,   373,
     373,   380,     3,   374,   375,    83,   246,     3,   423,   375,
     428,   406,   407,   428,   410,   411,   219,   219,   436,   373,
      50,    51,   117,   374,   200,   372,   373,     3,     3,     3,
      20,     3,   484,     3,   374,   426,   426,   374,   426,   426,
     173,   173,     3,   521,   233,     3,     3,   521,   374,   374,
     374,   380,   228,   423,   428,   428,   428,   428,   374,   375,
     373,   372,   373,   373,   374,   373,   217,   485,   374,   374,
     374,   374,   522,     3,     5,     3,   521,   521,   522,   216,
     514,   515,     5,    18,    90,   176,   190,   374,   373,   374,
     374,    18,     3,   374,   375,    90,   257,   144,   130,   193,
     223,   100,   246,   521,   522,   522,   259,   515,    91,   142,
      67,   185,   203,   228,    67,   185,   203,   228,   374,   167,
     106,   186,   106,   186,   522,   238,     4,   177,   190,   190,
     184,   184,     5,     5
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
#line 464 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 470 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 471 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 473 "parser/evoparser.y"
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
#line 486 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 488 "parser/evoparser.y"
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
#line 506 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 514 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 522 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 528 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 535 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 536 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 537 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 538 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 539 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 540 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 541 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 542 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 543 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 544 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 545 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 546 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 547 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 548 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 549 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 550 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 551 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 552 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 553 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 555 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 560 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 561 "parser/evoparser.y"
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
#line 569 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 570 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 571 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 572 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 573 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 574 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 579 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 581 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 584 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 585 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 586 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 587 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 588 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 591 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 592 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 596 "parser/evoparser.y"
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
#line 605 "parser/evoparser.y"
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
#line 623 "parser/evoparser.y"
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
#line 632 "parser/evoparser.y"
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
#line 651 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 652 "parser/evoparser.y"
    {
        g_in_array_literal--;
        char _arrbuf[4096];
        const int _cap = (int)sizeof(_arrbuf);
        int _p = 0;
        /* Safe append macros — bound every write to leave at least one
         * byte for the terminating NUL. snprintf's return value is
         * clamped to the remaining capacity before being added to _p,
         * preventing size-argument underflow on the next call. */
        #define _ARR_ROOM() ( _cap - 1 - _p )
        #define _ARR_PUTC(c) do { if (_ARR_ROOM() > 0) _arrbuf[_p++] = (c); } while (0)
        #define _ARR_PRINTF(...) do {                                    \
            int _r = _ARR_ROOM();                                        \
            if (_r > 0) {                                                \
                int _w = snprintf(_arrbuf + _p, (size_t)_r + 1, __VA_ARGS__); \
                if (_w < 0) break;                                       \
                if (_w > _r) _w = _r;                                    \
                _p += _w;                                                \
            }                                                            \
        } while (0)

        _ARR_PUTC('{');
        for (int _i = 0; _i < g_expr.arrListCount; _i++) {
            if (_i > 0) _ARR_PUTC(',');
            ExprNode *_en = g_expr.arrListExprs[_i];
            if (!_en) continue;
            if (_en->type == EXPR_LITERAL_INT) {
                _ARR_PRINTF("%d", _en->val.intval);
            } else if (_en->type == EXPR_LITERAL_FLOAT) {
                _ARR_PRINTF("%g", _en->val.floatval);
            } else if (_en->type == EXPR_LITERAL_BOOL) {
                _ARR_PRINTF("%s", _en->val.intval ? "true" : "false");
            } else if (_en->type == EXPR_LITERAL_NULL) {
                _ARR_PRINTF("NULL");
            } else if (_en->type == EXPR_LITERAL_STR) {
                _ARR_PUTC('"');
                for (const char *_s = _en->val.strval; *_s && _ARR_ROOM() > 1; _s++) {
                    if (*_s == '"' || *_s == '\\') _ARR_PUTC('\\');
                    _ARR_PUTC(*_s);
                }
                _ARR_PUTC('"');
            } else {
                /* Non-literal element (column ref, func call) — defer to
                 * runtime evaluation via expr_make_array_literal. Emit
                 * display placeholder in the INSERT field text. */
                _ARR_PRINTF("NULL");
            }
        }
        _ARR_PUTC('}');
        _arrbuf[_p] = '\0';

        #undef _ARR_ROOM
        #undef _ARR_PUTC
        #undef _ARR_PRINTF

        GetInsertions(_arrbuf);
        emit("ARRLIT %d", (yyvsp[(4) - (5)].intval));
        (yyval.exprval) = expr_make_array_literal(g_expr.arrListExprs, g_expr.arrListCount);
    ;}
    break;

  case 57:
#line 712 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 721 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 727 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 732 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 734 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 736 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 741 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 746 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 752 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 67:
#line 756 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 756 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 757 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 70:
#line 757 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 71:
#line 758 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 759 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 766 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 767 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 75:
#line 774 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 76:
#line 775 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 77:
#line 785 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 78:
#line 789 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 79:
#line 790 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 791 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 792 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 793 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 83:
#line 794 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 84:
#line 795 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 85:
#line 796 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 86:
#line 800 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 87:
#line 801 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 88:
#line 802 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 89:
#line 803 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 90:
#line 804 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 91:
#line 805 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 92:
#line 807 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 93:
#line 808 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 94:
#line 809 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 95:
#line 810 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 96:
#line 811 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 812 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 98:
#line 813 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 814 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 100:
#line 815 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 816 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 102:
#line 817 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 818 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 104:
#line 820 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 821 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 822 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 107:
#line 823 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 824 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 109:
#line 825 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 826 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 111:
#line 827 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 112:
#line 828 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 829 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 114:
#line 830 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 115:
#line 831 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 116:
#line 832 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 117:
#line 833 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 834 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 119:
#line 835 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 120:
#line 837 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 121:
#line 838 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 122:
#line 839 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 123:
#line 840 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 124:
#line 841 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 125:
#line 842 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 126:
#line 845 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 127:
#line 846 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 128:
#line 847 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 129:
#line 848 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 130:
#line 849 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 131:
#line 850 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 132:
#line 851 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 133:
#line 852 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 853 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 135:
#line 854 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 136:
#line 855 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 856 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 138:
#line 857 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 858 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 140:
#line 859 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 141:
#line 860 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 142:
#line 861 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 143:
#line 862 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 144:
#line 863 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 145:
#line 864 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 146:
#line 865 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 147:
#line 866 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 148:
#line 867 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 149:
#line 868 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 150:
#line 869 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 151:
#line 870 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 152:
#line 871 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 153:
#line 872 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 154:
#line 873 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 155:
#line 874 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 156:
#line 875 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 157:
#line 876 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 158:
#line 877 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 159:
#line 878 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 160:
#line 880 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 161:
#line 881 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 162:
#line 882 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 163:
#line 883 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 164:
#line 884 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 165:
#line 885 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 166:
#line 886 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 167:
#line 887 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 168:
#line 889 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 169:
#line 890 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 170:
#line 891 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 171:
#line 892 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 172:
#line 893 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 173:
#line 894 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 174:
#line 895 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 175:
#line 896 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 176:
#line 897 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 177:
#line 898 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 178:
#line 899 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 179:
#line 900 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 180:
#line 901 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 181:
#line 902 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 182:
#line 903 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 183:
#line 904 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 184:
#line 905 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 185:
#line 906 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 186:
#line 907 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 908 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 188:
#line 909 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 189:
#line 910 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 190:
#line 912 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 191:
#line 913 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 192:
#line 914 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 193:
#line 915 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 194:
#line 916 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 195:
#line 918 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 196:
#line 919 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 197:
#line 921 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 198:
#line 922 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 199:
#line 923 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 200:
#line 925 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 201:
#line 926 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 202:
#line 927 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 203:
#line 928 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 204:
#line 935 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 205:
#line 942 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 206:
#line 949 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 953 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 957 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 209:
#line 961 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 210:
#line 965 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 211:
#line 969 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 212:
#line 975 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 213:
#line 976 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 214:
#line 977 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 215:
#line 981 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 216:
#line 987 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 217:
#line 993 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 218:
#line 994 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 995 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 996 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 221:
#line 997 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 222:
#line 998 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 223:
#line 999 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 1000 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 225:
#line 1001 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 226:
#line 1005 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 1007 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 228:
#line 1009 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 229:
#line 1011 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 230:
#line 1015 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 231:
#line 1023 "parser/evoparser.y"
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
#line 1033 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 233:
#line 1034 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 234:
#line 1037 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 235:
#line 1038 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 236:
#line 1042 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 1050 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 238:
#line 1058 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 239:
#line 1069 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 240:
#line 1078 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 241:
#line 1083 "parser/evoparser.y"
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
#line 1096 "parser/evoparser.y"
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
#line 1109 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 246:
#line 1111 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 247:
#line 1114 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 248:
#line 1121 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 249:
#line 1129 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 250:
#line 1130 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1131 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 1134 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 253:
#line 1135 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 255:
#line 1139 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 258:
#line 1148 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 259:
#line 1150 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 262:
#line 1158 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 263:
#line 1160 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 268:
#line 1172 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 269:
#line 1178 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 270:
#line 1185 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 271:
#line 1193 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 272:
#line 1194 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 273:
#line 1195 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 274:
#line 1196 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 275:
#line 1199 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 276:
#line 1200 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 277:
#line 1201 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 278:
#line 1202 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 279:
#line 1203 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 281:
#line 1207 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 282:
#line 1210 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 283:
#line 1211 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 284:
#line 1214 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 285:
#line 1215 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 286:
#line 1216 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 287:
#line 1217 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 288:
#line 1218 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 289:
#line 1219 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 290:
#line 1220 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 291:
#line 1221 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 292:
#line 1222 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 293:
#line 1225 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 294:
#line 1226 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 295:
#line 1228 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 296:
#line 1236 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 297:
#line 1241 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 298:
#line 1242 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 299:
#line 1243 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 300:
#line 1246 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1247 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 304:
#line 1256 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 305:
#line 1264 "parser/evoparser.y"
    {
        emit("TABLE ONLY %s", (yyvsp[(2) - (4)].strval));
        GetSelTableName((yyvsp[(2) - (4)].strval));
        if (g_qctx) {
            AddJoinTable((yyvsp[(2) - (4)].strval), g_currentAlias);
            g_sel.onlyParent = 1;
        }
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 306:
#line 1273 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 307:
#line 1274 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 308:
#line 1276 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 309:
#line 1285 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 310:
#line 1290 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 311:
#line 1296 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 312:
#line 1303 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 313:
#line 1307 "parser/evoparser.y"
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

  case 314:
#line 1327 "parser/evoparser.y"
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

  case 317:
#line 1353 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 318:
#line 1355 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 319:
#line 1357 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 320:
#line 1359 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 321:
#line 1361 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 322:
#line 1364 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 323:
#line 1365 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 324:
#line 1366 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 325:
#line 1369 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 326:
#line 1370 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 327:
#line 1373 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 328:
#line 1374 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 329:
#line 1377 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 330:
#line 1378 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 331:
#line 1379 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 334:
#line 1386 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 335:
#line 1387 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 336:
#line 1392 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 337:
#line 1394 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 338:
#line 1396 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 340:
#line 1400 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 341:
#line 1401 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 342:
#line 1404 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 343:
#line 1405 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 344:
#line 1408 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 345:
#line 1413 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 346:
#line 1423 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 347:
#line 1430 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 348:
#line 1431 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 349:
#line 1432 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 350:
#line 1433 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 351:
#line 1438 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 352:
#line 1442 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 353:
#line 1444 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 356:
#line 1450 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 357:
#line 1455 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 358:
#line 1462 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 359:
#line 1469 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 361:
#line 1481 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 362:
#line 1482 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 363:
#line 1487 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 364:
#line 1494 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 365:
#line 1501 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 366:
#line 1509 "parser/evoparser.y"
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

  case 367:
#line 1519 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 368:
#line 1527 "parser/evoparser.y"
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

  case 369:
#line 1537 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 370:
#line 1545 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 371:
#line 1554 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 372:
#line 1563 "parser/evoparser.y"
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

  case 373:
#line 1573 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 374:
#line 1581 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 375:
#line 1590 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 376:
#line 1599 "parser/evoparser.y"
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

  case 377:
#line 1609 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 378:
#line 1618 "parser/evoparser.y"
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

  case 379:
#line 1630 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 380:
#line 1635 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 381:
#line 1640 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 382:
#line 1646 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 383:
#line 1653 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 384:
#line 1660 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 385:
#line 1667 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 386:
#line 1677 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 387:
#line 1684 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 388:
#line 1693 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 389:
#line 1700 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 390:
#line 1706 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 391:
#line 1714 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 392:
#line 1720 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 394:
#line 1728 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 395:
#line 1729 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 396:
#line 1730 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 397:
#line 1731 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 398:
#line 1747 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 399:
#line 1748 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 400:
#line 1749 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 401:
#line 1753 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 402:
#line 1759 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 403:
#line 1770 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 404:
#line 1776 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 405:
#line 1783 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 406:
#line 1789 "parser/evoparser.y"
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

  case 407:
#line 1805 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 408:
#line 1812 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 409:
#line 1821 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 410:
#line 1828 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 411:
#line 1834 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 412:
#line 1844 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 413:
#line 1848 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 414:
#line 1854 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 415:
#line 1860 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 416:
#line 1867 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 417:
#line 1873 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 418:
#line 1880 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 419:
#line 1886 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 420:
#line 1892 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 421:
#line 1898 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 422:
#line 1904 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 423:
#line 1910 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 424:
#line 1916 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 425:
#line 1922 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 426:
#line 1928 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 427:
#line 1934 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 428:
#line 1940 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 429:
#line 1946 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 430:
#line 1952 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 431:
#line 1958 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 432:
#line 1964 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 433:
#line 1971 "parser/evoparser.y"
    { ;}
    break;

  case 434:
#line 1972 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 435:
#line 1973 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 436:
#line 1977 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 437:
#line 1985 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 438:
#line 1991 "parser/evoparser.y"
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

  case 440:
#line 2004 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 441:
#line 2004 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 444:
#line 2012 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 445:
#line 2013 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 446:
#line 2014 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 447:
#line 2018 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 448:
#line 2019 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 449:
#line 2020 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 450:
#line 2024 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 451:
#line 2032 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 452:
#line 2041 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 453:
#line 2042 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 454:
#line 2043 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 455:
#line 2044 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 456:
#line 2045 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 460:
#line 2052 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 461:
#line 2056 "parser/evoparser.y"
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

  case 462:
#line 2066 "parser/evoparser.y"
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

  case 463:
#line 2078 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 464:
#line 2079 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 465:
#line 2079 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 466:
#line 2082 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 467:
#line 2083 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 468:
#line 2084 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 469:
#line 2085 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 470:
#line 2089 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 471:
#line 2092 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 472:
#line 2093 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 473:
#line 2094 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 474:
#line 2095 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 475:
#line 2101 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 476:
#line 2107 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 477:
#line 2112 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 478:
#line 2117 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 479:
#line 2121 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 480:
#line 2125 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 481:
#line 2127 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 484:
#line 2133 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 485:
#line 2134 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 486:
#line 2138 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 487:
#line 2139 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 488:
#line 2143 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 489:
#line 2144 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 490:
#line 2145 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 497:
#line 2160 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 498:
#line 2161 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 499:
#line 2162 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 500:
#line 2163 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 501:
#line 2164 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 502:
#line 2165 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 503:
#line 2166 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 504:
#line 2167 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 505:
#line 2172 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 506:
#line 2181 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 507:
#line 2188 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 508:
#line 2189 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 509:
#line 2190 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 510:
#line 2195 "parser/evoparser.y"
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

  case 511:
#line 2206 "parser/evoparser.y"
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

  case 512:
#line 2218 "parser/evoparser.y"
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

  case 513:
#line 2229 "parser/evoparser.y"
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

  case 514:
#line 2244 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 515:
#line 2248 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 516:
#line 2252 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 517:
#line 2253 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 518:
#line 2258 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 519:
#line 2260 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 520:
#line 2262 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 521:
#line 2264 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 522:
#line 2267 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 523:
#line 2268 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 524:
#line 2274 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 525:
#line 2279 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 526:
#line 2281 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 527:
#line 2283 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 528:
#line 2285 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 529:
#line 2287 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 530:
#line 2291 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 531:
#line 2295 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 532:
#line 2296 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 533:
#line 2301 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 534:
#line 2311 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 536:
#line 2324 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 537:
#line 2332 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 538:
#line 2340 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 540:
#line 2348 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 541:
#line 2349 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 542:
#line 2350 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 543:
#line 2351 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 544:
#line 2353 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 545:
#line 2355 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 546:
#line 2357 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 549:
#line 2365 "parser/evoparser.y"
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

  case 550:
#line 2380 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 551:
#line 2388 "parser/evoparser.y"
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

  case 552:
#line 2402 "parser/evoparser.y"
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

  case 553:
#line 2416 "parser/evoparser.y"
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

  case 554:
#line 2430 "parser/evoparser.y"
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

  case 555:
#line 2442 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 556:
#line 2443 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 557:
#line 2444 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 558:
#line 2447 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 559:
#line 2448 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 560:
#line 2451 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 561:
#line 2452 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 562:
#line 2453 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 563:
#line 2454 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 564:
#line 2455 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 565:
#line 2456 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 566:
#line 2457 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 567:
#line 2458 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 568:
#line 2460 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 569:
#line 2462 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 570:
#line 2464 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 571:
#line 2466 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 572:
#line 2468 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 573:
#line 2470 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 574:
#line 2473 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 575:
#line 2474 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 576:
#line 2477 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 577:
#line 2478 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 578:
#line 2481 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 579:
#line 2482 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 581:
#line 2486 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 582:
#line 2487 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 583:
#line 2488 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 584:
#line 2489 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 585:
#line 2490 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 586:
#line 2491 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 587:
#line 2492 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 588:
#line 2493 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 589:
#line 2494 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 590:
#line 2495 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 591:
#line 2496 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 592:
#line 2497 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 593:
#line 2498 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 594:
#line 2499 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 595:
#line 2500 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 596:
#line 2501 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 597:
#line 2502 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 598:
#line 2505 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 599:
#line 2506 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 600:
#line 2509 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 601:
#line 2511 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 602:
#line 2519 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 603:
#line 2520 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 605:
#line 2522 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 606:
#line 2523 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 607:
#line 2524 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 608:
#line 2525 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 609:
#line 2526 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 610:
#line 2527 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 611:
#line 2528 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 612:
#line 2529 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 613:
#line 2530 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 614:
#line 2537 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 615:
#line 2538 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 616:
#line 2539 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 617:
#line 2540 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 618:
#line 2541 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 619:
#line 2542 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 620:
#line 2543 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 621:
#line 2544 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 622:
#line 2545 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 623:
#line 2546 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 624:
#line 2547 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 625:
#line 2548 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 626:
#line 2549 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 627:
#line 2550 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 628:
#line 2551 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 629:
#line 2552 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 630:
#line 2553 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 631:
#line 2554 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 632:
#line 2555 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 633:
#line 2556 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 634:
#line 2557 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 635:
#line 2560 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 636:
#line 2561 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 637:
#line 2562 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 638:
#line 2565 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 639:
#line 2566 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 640:
#line 2569 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 641:
#line 2570 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 642:
#line 2571 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 644:
#line 2575 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 645:
#line 2576 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 646:
#line 2580 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 647:
#line 2581 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 648:
#line 2582 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 649:
#line 2583 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 650:
#line 2584 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 651:
#line 2585 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 652:
#line 2586 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 653:
#line 2587 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 654:
#line 2588 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 655:
#line 2589 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 656:
#line 2590 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 657:
#line 2591 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 658:
#line 2592 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 659:
#line 2593 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 660:
#line 2594 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 661:
#line 2595 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 662:
#line 2596 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 663:
#line 2597 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 664:
#line 2598 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 665:
#line 2599 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 666:
#line 2600 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 667:
#line 2601 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 668:
#line 2602 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 669:
#line 2603 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 670:
#line 2604 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 671:
#line 2605 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 672:
#line 2606 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 673:
#line 2607 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 674:
#line 2608 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 675:
#line 2609 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 676:
#line 2610 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 677:
#line 2611 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 678:
#line 2612 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 679:
#line 2613 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 680:
#line 2616 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 681:
#line 2617 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 682:
#line 2621 "parser/evoparser.y"
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

  case 683:
#line 2633 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 684:
#line 2634 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 685:
#line 2635 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 686:
#line 2639 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 687:
#line 2642 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 688:
#line 2643 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 692:
#line 2647 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 693:
#line 2648 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 694:
#line 2656 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 695:
#line 2661 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 696:
#line 2667 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 697:
#line 2673 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 698:
#line 2680 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 699:
#line 2687 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 700:
#line 2693 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 701:
#line 2699 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 702:
#line 2706 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 707:
#line 2722 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 708:
#line 2723 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 709:
#line 2724 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 710:
#line 2725 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 711:
#line 2728 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 712:
#line 2729 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 713:
#line 2730 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 714:
#line 2731 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 715:
#line 2732 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 716:
#line 2733 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 717:
#line 2734 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 718:
#line 2735 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 719:
#line 2736 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 720:
#line 2737 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 729:
#line 2754 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 730:
#line 2755 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 851:
#line 2773 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 852:
#line 2780 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 853:
#line 2785 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 854:
#line 2791 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 855:
#line 2797 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 856:
#line 2803 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 857:
#line 2814 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 858:
#line 2819 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 859:
#line 2825 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 862:
#line 2836 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 863:
#line 2837 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 864:
#line 2838 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 865:
#line 2839 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 866:
#line 2840 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 867:
#line 2841 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 868:
#line 2842 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 869:
#line 2849 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 870:
#line 2854 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 871:
#line 2861 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 872:
#line 2862 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 873:
#line 2865 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 874:
#line 2866 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 875:
#line 2867 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 876:
#line 2870 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 877:
#line 2875 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 878:
#line 2881 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 879:
#line 2890 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 880:
#line 2898 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 881:
#line 2908 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 882:
#line 2913 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 885:
#line 2926 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 886:
#line 2927 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 887:
#line 2928 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 888:
#line 2929 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 889:
#line 2930 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 890:
#line 2931 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 891:
#line 2932 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 892:
#line 2933 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 893:
#line 2936 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 894:
#line 2941 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 895:
#line 2947 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 896:
#line 2957 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 897:
#line 2964 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 898:
#line 2971 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 899:
#line 2979 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 901:
#line 2989 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 903:
#line 2993 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 904:
#line 2994 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10763 "parser/evoparser.tab.c"
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


#line 2997 "parser/evoparser.y"

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
