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
     HISTOGRAM = 285,
     BUCKETS = 286,
     ANY = 287,
     AUTO_INCREMENT = 288,
     ASC = 289,
     AND = 290,
     AS = 291,
     ALWAYS = 292,
     IDENTITY = 293,
     CONTINUE = 294,
     RESTART = 295,
     GENERATED = 296,
     STORED = 297,
     VIRTUAL = 298,
     BEFORE = 299,
     BEGINWORK = 300,
     BLOB = 301,
     BOOLEAN = 302,
     BY = 303,
     BINARY = 304,
     BOTH = 305,
     BIGINT = 306,
     BIT = 307,
     CALL = 308,
     CLOSE = 309,
     CURSOR = 310,
     CONSTRAINT = 311,
     CURRENT_TIMESTAMP = 312,
     CREATE = 313,
     CASCADE = 314,
     CHANGE = 315,
     CROSS = 316,
     CASE = 317,
     CHECK = 318,
     COMMENT = 319,
     CURRENT_DATE = 320,
     CURRENT_TIME = 321,
     CHAR = 322,
     COLLATE = 323,
     COLUMN = 324,
     CONCURRENTLY = 325,
     COPY = 326,
     CSV = 327,
     CONFLICT = 328,
     EXCLUDED = 329,
     NOTHING = 330,
     AGAINST = 331,
     MATERIALIZED = 332,
     REFRESH = 333,
     OF = 334,
     DATABASE = 335,
     DECLARE = 336,
     DEFERRABLE = 337,
     DEFERRED = 338,
     DELIMITER = 339,
     DISABLE = 340,
     DO = 341,
     DOMAIN = 342,
     DELAYED = 343,
     DAY_HOUR = 344,
     DAY_MICROSECOND = 345,
     DISTINCT = 346,
     DELETE = 347,
     DROP = 348,
     DAY_MINUTE = 349,
     DISTINCTROW = 350,
     DAY_SECOND = 351,
     DESC = 352,
     DEFAULT = 353,
     DOUBLE = 354,
     DATETIME = 355,
     DECIMAL = 356,
     DATE = 357,
     EACH = 358,
     ELSEIF = 359,
     ENABLE = 360,
     ESCAPED = 361,
     EXCEPT = 362,
     ENUM = 363,
     END = 364,
     ELSE = 365,
     EXECUTE = 366,
     EXIT = 367,
     EXPLAIN = 368,
     FETCH = 369,
     FIRST = 370,
     FOREACH = 371,
     FLOAT = 372,
     FORCE = 373,
     FOREIGN = 374,
     FORMAT = 375,
     FROM = 376,
     FULL = 377,
     FULLTEXT = 378,
     FUNCTION = 379,
     FOR = 380,
     GROUP = 381,
     HANDLER = 382,
     HEADER = 383,
     HOUR_MINUTE = 384,
     HOUR_MICROSECOND = 385,
     HIGH_PRIORITY = 386,
     HOUR_SECOND = 387,
     HAVING = 388,
     IMMEDIATE = 389,
     INOUT = 390,
     INITIALLY = 391,
     INTEGER = 392,
     INNER = 393,
     IGNORE = 394,
     INDEX = 395,
     IF = 396,
     INSERT = 397,
     INTERSECT = 398,
     INTO = 399,
     INT = 400,
     INTERVAL = 401,
     ITERATE = 402,
     JOIN = 403,
     KEY = 404,
     LEAVE = 405,
     LOOP = 406,
     LATERAL = 407,
     LISTEN = 408,
     NOTIFY = 409,
     UNLISTEN = 410,
     SELF = 411,
     INHERITS = 412,
     ONLY = 413,
     LESS = 414,
     LONGTEXT = 415,
     LOW_PRIORITY = 416,
     LEFT = 417,
     LEADING = 418,
     LIMIT = 419,
     LOCKED = 420,
     OFFSET = 421,
     LONGBLOB = 422,
     MATCH = 423,
     MAXVALUE = 424,
     MEDIUMTEXT = 425,
     MINUS = 426,
     MODIFY = 427,
     MEDIUMBLOB = 428,
     MEDIUMINT = 429,
     NATURAL = 430,
     NODE = 431,
     NO_ACTION = 432,
     NULLX = 433,
     OPEN = 434,
     OUT = 435,
     OUTER = 436,
     ON = 437,
     ORDER = 438,
     ONDUPLICATE = 439,
     PARTIAL = 440,
     PRIMARY = 441,
     PROCEDURE = 442,
     QUICK = 443,
     RANGE = 444,
     REAL = 445,
     RECLAIM = 446,
     REFERENCES = 447,
     RENAME = 448,
     RESIGNAL = 449,
     RESTRICT = 450,
     RETURN = 451,
     RETURNING = 452,
     RETURNS = 453,
     ROLLUP = 454,
     RIGHT = 455,
     REPLACE = 456,
     ROW = 457,
     SIGNAL = 458,
     TRIGGER = 459,
     UNTIL = 460,
     POLICY = 461,
     SECURITY = 462,
     PERMISSIVE = 463,
     RESTRICTIVE = 464,
     CURRENT_USER = 465,
     SQL_SMALL_RESULT = 466,
     SCHEMA = 467,
     SHARD = 468,
     SHARDS = 469,
     SHARE = 470,
     SKIP = 471,
     SOME = 472,
     SQL_CALC_FOUND_ROWS = 473,
     SQL_BIG_RESULT = 474,
     SIMPLE = 475,
     STDIN = 476,
     STDOUT = 477,
     STRAIGHT_JOIN = 478,
     SMALLINT = 479,
     SET = 480,
     SELECT = 481,
     QUOTE = 482,
     TINYTEXT = 483,
     TINYINT = 484,
     TO = 485,
     TEMPORARY = 486,
     GLOBAL = 487,
     PRESERVE = 488,
     TEXT = 489,
     THAN = 490,
     TIMESTAMP = 491,
     TABLE = 492,
     THEN = 493,
     TRAILING = 494,
     TRUNCATE = 495,
     TINYBLOB = 496,
     TIME = 497,
     UPDATE = 498,
     UNSIGNED = 499,
     UNION = 500,
     UNIQUE = 501,
     UUID = 502,
     ARRAY = 503,
     JSON = 504,
     VIEW = 505,
     USING = 506,
     USE = 507,
     HASH = 508,
     VALIDATE = 509,
     VARCHAR = 510,
     VALUES = 511,
     VARBINARY = 512,
     WHERE = 513,
     WHEN = 514,
     WHILE = 515,
     WITH = 516,
     YEAR = 517,
     YEAR_MONTH = 518,
     ZEROFILL = 519,
     EXISTS = 520,
     FSUBSTRING = 521,
     FTRIM = 522,
     FDATE_ADD = 523,
     FDATE_SUB = 524,
     FDATEDIFF = 525,
     FYEAR = 526,
     FMONTH = 527,
     FDAY = 528,
     FHOUR = 529,
     FMINUTE = 530,
     FSECOND = 531,
     FNOW = 532,
     FLEFT = 533,
     FRIGHT = 534,
     FLPAD = 535,
     FRPAD = 536,
     FREVERSE = 537,
     FREPEAT = 538,
     FINSTR = 539,
     FLOCATE = 540,
     FABS = 541,
     FCEIL = 542,
     FFLOOR = 543,
     FROUND = 544,
     FPOWER = 545,
     FSQRT = 546,
     FMOD = 547,
     FRAND = 548,
     FLOG = 549,
     FLOG10 = 550,
     FSIGN = 551,
     FPI = 552,
     FCAST = 553,
     FCONVERT = 554,
     FNULLIF = 555,
     FIFNULL = 556,
     FIF = 557,
     UNKNOWN = 558,
     FGROUP_CONCAT = 559,
     SEPARATOR = 560,
     FCOUNT = 561,
     FSUM = 562,
     FAVG = 563,
     FMIN = 564,
     FMAX = 565,
     FUPPER = 566,
     FLOWER = 567,
     FLENGTH = 568,
     FCONCAT = 569,
     FREPLACE = 570,
     FCOALESCE = 571,
     FGEN_RANDOM_UUID = 572,
     FGEN_RANDOM_UUID_V7 = 573,
     FSNOWFLAKE_ID = 574,
     FLAST_INSERT_ID = 575,
     FSCOPE_IDENTITY = 576,
     FAT_IDENTITY = 577,
     FAT_LAST_INSERT_ID = 578,
     FEVO_SLEEP = 579,
     FEVO_JITTER = 580,
     FROW_NUMBER = 581,
     FRANK = 582,
     FDENSE_RANK = 583,
     FLEAD = 584,
     FLAG = 585,
     FNTILE = 586,
     FPERCENT_RANK = 587,
     FCUME_DIST = 588,
     OVER = 589,
     PARTITION = 590,
     FJSON_EXTRACT = 591,
     FJSON_UNQUOTE = 592,
     FJSON_TYPE = 593,
     FJSON_LENGTH = 594,
     FJSON_DEPTH = 595,
     FJSON_VALID = 596,
     FJSON_KEYS = 597,
     FJSON_PRETTY = 598,
     FJSON_QUOTE = 599,
     FJSON_SET = 600,
     FJSON_INSERT = 601,
     FJSON_REPLACE = 602,
     FJSON_REMOVE = 603,
     FJSON_CONTAINS = 604,
     FJSON_CONTAINS_PATH = 605,
     FJSON_SEARCH = 606,
     FJSON_OBJECT = 607,
     FJSON_ARRAY = 608,
     FJSON_ARRAYAGG = 609,
     SEQUENCE = 610,
     FNEXTVAL = 611,
     FCURRVAL = 612,
     FSETVAL = 613,
     FLASTVAL = 614,
     START = 615,
     INCREMENT = 616,
     MINVALUE = 617,
     CYCLE = 618,
     FARRAY_LENGTH = 619,
     FUNNEST = 620,
     FEVO_NOTIFY = 621,
     FPG_LISTENING_CHANNELS = 622
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
#define HISTOGRAM 285
#define BUCKETS 286
#define ANY 287
#define AUTO_INCREMENT 288
#define ASC 289
#define AND 290
#define AS 291
#define ALWAYS 292
#define IDENTITY 293
#define CONTINUE 294
#define RESTART 295
#define GENERATED 296
#define STORED 297
#define VIRTUAL 298
#define BEFORE 299
#define BEGINWORK 300
#define BLOB 301
#define BOOLEAN 302
#define BY 303
#define BINARY 304
#define BOTH 305
#define BIGINT 306
#define BIT 307
#define CALL 308
#define CLOSE 309
#define CURSOR 310
#define CONSTRAINT 311
#define CURRENT_TIMESTAMP 312
#define CREATE 313
#define CASCADE 314
#define CHANGE 315
#define CROSS 316
#define CASE 317
#define CHECK 318
#define COMMENT 319
#define CURRENT_DATE 320
#define CURRENT_TIME 321
#define CHAR 322
#define COLLATE 323
#define COLUMN 324
#define CONCURRENTLY 325
#define COPY 326
#define CSV 327
#define CONFLICT 328
#define EXCLUDED 329
#define NOTHING 330
#define AGAINST 331
#define MATERIALIZED 332
#define REFRESH 333
#define OF 334
#define DATABASE 335
#define DECLARE 336
#define DEFERRABLE 337
#define DEFERRED 338
#define DELIMITER 339
#define DISABLE 340
#define DO 341
#define DOMAIN 342
#define DELAYED 343
#define DAY_HOUR 344
#define DAY_MICROSECOND 345
#define DISTINCT 346
#define DELETE 347
#define DROP 348
#define DAY_MINUTE 349
#define DISTINCTROW 350
#define DAY_SECOND 351
#define DESC 352
#define DEFAULT 353
#define DOUBLE 354
#define DATETIME 355
#define DECIMAL 356
#define DATE 357
#define EACH 358
#define ELSEIF 359
#define ENABLE 360
#define ESCAPED 361
#define EXCEPT 362
#define ENUM 363
#define END 364
#define ELSE 365
#define EXECUTE 366
#define EXIT 367
#define EXPLAIN 368
#define FETCH 369
#define FIRST 370
#define FOREACH 371
#define FLOAT 372
#define FORCE 373
#define FOREIGN 374
#define FORMAT 375
#define FROM 376
#define FULL 377
#define FULLTEXT 378
#define FUNCTION 379
#define FOR 380
#define GROUP 381
#define HANDLER 382
#define HEADER 383
#define HOUR_MINUTE 384
#define HOUR_MICROSECOND 385
#define HIGH_PRIORITY 386
#define HOUR_SECOND 387
#define HAVING 388
#define IMMEDIATE 389
#define INOUT 390
#define INITIALLY 391
#define INTEGER 392
#define INNER 393
#define IGNORE 394
#define INDEX 395
#define IF 396
#define INSERT 397
#define INTERSECT 398
#define INTO 399
#define INT 400
#define INTERVAL 401
#define ITERATE 402
#define JOIN 403
#define KEY 404
#define LEAVE 405
#define LOOP 406
#define LATERAL 407
#define LISTEN 408
#define NOTIFY 409
#define UNLISTEN 410
#define SELF 411
#define INHERITS 412
#define ONLY 413
#define LESS 414
#define LONGTEXT 415
#define LOW_PRIORITY 416
#define LEFT 417
#define LEADING 418
#define LIMIT 419
#define LOCKED 420
#define OFFSET 421
#define LONGBLOB 422
#define MATCH 423
#define MAXVALUE 424
#define MEDIUMTEXT 425
#define MINUS 426
#define MODIFY 427
#define MEDIUMBLOB 428
#define MEDIUMINT 429
#define NATURAL 430
#define NODE 431
#define NO_ACTION 432
#define NULLX 433
#define OPEN 434
#define OUT 435
#define OUTER 436
#define ON 437
#define ORDER 438
#define ONDUPLICATE 439
#define PARTIAL 440
#define PRIMARY 441
#define PROCEDURE 442
#define QUICK 443
#define RANGE 444
#define REAL 445
#define RECLAIM 446
#define REFERENCES 447
#define RENAME 448
#define RESIGNAL 449
#define RESTRICT 450
#define RETURN 451
#define RETURNING 452
#define RETURNS 453
#define ROLLUP 454
#define RIGHT 455
#define REPLACE 456
#define ROW 457
#define SIGNAL 458
#define TRIGGER 459
#define UNTIL 460
#define POLICY 461
#define SECURITY 462
#define PERMISSIVE 463
#define RESTRICTIVE 464
#define CURRENT_USER 465
#define SQL_SMALL_RESULT 466
#define SCHEMA 467
#define SHARD 468
#define SHARDS 469
#define SHARE 470
#define SKIP 471
#define SOME 472
#define SQL_CALC_FOUND_ROWS 473
#define SQL_BIG_RESULT 474
#define SIMPLE 475
#define STDIN 476
#define STDOUT 477
#define STRAIGHT_JOIN 478
#define SMALLINT 479
#define SET 480
#define SELECT 481
#define QUOTE 482
#define TINYTEXT 483
#define TINYINT 484
#define TO 485
#define TEMPORARY 486
#define GLOBAL 487
#define PRESERVE 488
#define TEXT 489
#define THAN 490
#define TIMESTAMP 491
#define TABLE 492
#define THEN 493
#define TRAILING 494
#define TRUNCATE 495
#define TINYBLOB 496
#define TIME 497
#define UPDATE 498
#define UNSIGNED 499
#define UNION 500
#define UNIQUE 501
#define UUID 502
#define ARRAY 503
#define JSON 504
#define VIEW 505
#define USING 506
#define USE 507
#define HASH 508
#define VALIDATE 509
#define VARCHAR 510
#define VALUES 511
#define VARBINARY 512
#define WHERE 513
#define WHEN 514
#define WHILE 515
#define WITH 516
#define YEAR 517
#define YEAR_MONTH 518
#define ZEROFILL 519
#define EXISTS 520
#define FSUBSTRING 521
#define FTRIM 522
#define FDATE_ADD 523
#define FDATE_SUB 524
#define FDATEDIFF 525
#define FYEAR 526
#define FMONTH 527
#define FDAY 528
#define FHOUR 529
#define FMINUTE 530
#define FSECOND 531
#define FNOW 532
#define FLEFT 533
#define FRIGHT 534
#define FLPAD 535
#define FRPAD 536
#define FREVERSE 537
#define FREPEAT 538
#define FINSTR 539
#define FLOCATE 540
#define FABS 541
#define FCEIL 542
#define FFLOOR 543
#define FROUND 544
#define FPOWER 545
#define FSQRT 546
#define FMOD 547
#define FRAND 548
#define FLOG 549
#define FLOG10 550
#define FSIGN 551
#define FPI 552
#define FCAST 553
#define FCONVERT 554
#define FNULLIF 555
#define FIFNULL 556
#define FIF 557
#define UNKNOWN 558
#define FGROUP_CONCAT 559
#define SEPARATOR 560
#define FCOUNT 561
#define FSUM 562
#define FAVG 563
#define FMIN 564
#define FMAX 565
#define FUPPER 566
#define FLOWER 567
#define FLENGTH 568
#define FCONCAT 569
#define FREPLACE 570
#define FCOALESCE 571
#define FGEN_RANDOM_UUID 572
#define FGEN_RANDOM_UUID_V7 573
#define FSNOWFLAKE_ID 574
#define FLAST_INSERT_ID 575
#define FSCOPE_IDENTITY 576
#define FAT_IDENTITY 577
#define FAT_LAST_INSERT_ID 578
#define FEVO_SLEEP 579
#define FEVO_JITTER 580
#define FROW_NUMBER 581
#define FRANK 582
#define FDENSE_RANK 583
#define FLEAD 584
#define FLAG 585
#define FNTILE 586
#define FPERCENT_RANK 587
#define FCUME_DIST 588
#define OVER 589
#define PARTITION 590
#define FJSON_EXTRACT 591
#define FJSON_UNQUOTE 592
#define FJSON_TYPE 593
#define FJSON_LENGTH 594
#define FJSON_DEPTH 595
#define FJSON_VALID 596
#define FJSON_KEYS 597
#define FJSON_PRETTY 598
#define FJSON_QUOTE 599
#define FJSON_SET 600
#define FJSON_INSERT 601
#define FJSON_REPLACE 602
#define FJSON_REMOVE 603
#define FJSON_CONTAINS 604
#define FJSON_CONTAINS_PATH 605
#define FJSON_SEARCH 606
#define FJSON_OBJECT 607
#define FJSON_ARRAY 608
#define FJSON_ARRAYAGG 609
#define SEQUENCE 610
#define FNEXTVAL 611
#define FCURRVAL 612
#define FSETVAL 613
#define FLASTVAL 614
#define START 615
#define INCREMENT 616
#define MINVALUE 617
#define CYCLE 618
#define FARRAY_LENGTH 619
#define FUNNEST 620
#define FEVO_NOTIFY 621
#define FPG_LISTENING_CHANNELS 622




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
#line 901 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 914 "parser/evoparser.tab.c"

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
#define YYFINAL  102
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12794

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  385
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  935
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2296

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   622

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     380,   381,    26,    24,   382,    25,   379,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   378,
       2,   384,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   383,    30,     2,     2,     2,     2,     2,
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377
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
    1256,  1258,  1262,  1275,  1288,  1289,  1292,  1293,  1298,  1301,
    1306,  1307,  1309,  1311,  1312,  1315,  1316,  1319,  1320,  1324,
    1326,  1330,  1331,  1335,  1338,  1343,  1344,  1348,  1350,  1354,
    1357,  1362,  1365,  1366,  1369,  1374,  1379,  1380,  1383,  1386,
    1391,  1396,  1397,  1400,  1402,  1406,  1407,  1410,  1413,  1416,
    1419,  1422,  1425,  1428,  1431,  1433,  1437,  1439,  1442,  1445,
    1447,  1448,  1450,  1454,  1456,  1458,  1462,  1467,  1473,  1477,
    1481,  1486,  1493,  1503,  1507,  1508,  1514,  1516,  1517,  1523,
    1527,  1533,  1540,  1546,  1547,  1549,  1551,  1552,  1554,  1556,
    1558,  1561,  1564,  1565,  1566,  1568,  1571,  1576,  1583,  1590,
    1597,  1598,  1601,  1602,  1604,  1608,  1612,  1614,  1623,  1626,
    1629,  1632,  1633,  1640,  1643,  1648,  1649,  1652,  1660,  1662,
    1667,  1674,  1675,  1677,  1679,  1681,  1690,  1700,  1711,  1721,
    1733,  1744,  1757,  1769,  1783,  1793,  1805,  1816,  1829,  1841,
    1854,  1856,  1860,  1862,  1867,  1872,  1877,  1884,  1886,  1890,
    1893,  1897,  1903,  1905,  1909,  1910,  1913,  1916,  1920,  1924,
    1926,  1928,  1930,  1933,  1937,  1940,  1943,  1946,  1951,  1953,
    1957,  1959,  1963,  1969,  1972,  1973,  1978,  1986,  1991,  1993,
    1997,  1999,  2001,  2003,  2014,  2015,  2018,  2021,  2022,  2025,
    2028,  2031,  2034,  2037,  2038,  2041,  2043,  2047,  2048,  2053,
    2054,  2060,  2066,  2077,  2088,  2106,  2119,  2139,  2151,  2158,
    2167,  2174,  2181,  2188,  2198,  2205,  2211,  2220,  2228,  2238,
    2247,  2258,  2268,  2276,  2284,  2285,  2287,  2290,  2292,  2303,
    2310,  2311,  2312,  2318,  2319,  2324,  2325,  2329,  2334,  2337,
    2338,  2344,  2348,  2354,  2355,  2358,  2361,  2364,  2367,  2369,
    2370,  2371,  2375,  2377,  2381,  2385,  2386,  2393,  2395,  2397,
    2401,  2405,  2413,  2417,  2421,  2427,  2433,  2435,  2444,  2452,
    2460,  2462,  2463,  2471,  2472,  2476,  2478,  2482,  2484,  2486,
    2488,  2490,  2492,  2493,  2495,  2500,  2504,  2506,  2510,  2513,
    2516,  2519,  2521,  2524,  2527,  2530,  2532,  2534,  2544,  2545,
    2548,  2551,  2555,  2561,  2567,  2575,  2581,  2583,  2588,  2593,
    2597,  2603,  2607,  2613,  2614,  2617,  2619,  2625,  2633,  2641,
    2651,  2663,  2665,  2668,  2672,  2674,  2685,  2686,  2691,  2703,
    2722,  2723,  2728,  2732,  2738,  2744,  2754,  2765,  2773,  2775,
    2779,  2789,  2799,  2809,  2816,  2828,  2837,  2838,  2840,  2843,
    2845,  2849,  2855,  2863,  2868,  2873,  2879,  2885,  2890,  2897,
    2909,  2923,  2937,  2953,  2958,  2965,  2967,  2971,  2973,  2977,
    2979,  2983,  2984,  2989,  2995,  3000,  3006,  3011,  3017,  3022,
    3028,  3033,  3038,  3042,  3046,  3050,  3053,  3057,  3062,  3067,
    3069,  3073,  3074,  3079,  3080,  3084,  3087,  3091,  3095,  3099,
    3103,  3109,  3115,  3121,  3125,  3131,  3134,  3142,  3148,  3156,
    3162,  3165,  3169,  3172,  3176,  3179,  3183,  3189,  3194,  3200,
    3208,  3217,  3226,  3234,  3241,  3248,  3254,  3255,  3259,  3265,
    3266,  3268,  3269,  3272,  3275,  3276,  3281,  3285,  3288,  3292,
    3296,  3300,  3304,  3308,  3312,  3316,  3320,  3324,  3328,  3330,
    3332,  3334,  3336,  3338,  3342,  3348,  3351,  3356,  3358,  3360,
    3362,  3364,  3368,  3372,  3376,  3380,  3386,  3392,  3394,  3396,
    3398,  3402,  3404,  3408,  3412,  3413,  3415,  3417,  3419,  3423,
    3427,  3430,  3432,  3436,  3440,  3444,  3446,  3457,  3467,  3480,
    3492,  3505,  3517,  3532,  3546,  3547,  3549,  3551,  3555,  3558,
    3562,  3566,  3570,  3572,  3574,  3576,  3578,  3580,  3582,  3584,
    3586,  3588,  3590,  3591,  3594,  3599,  3605,  3611,  3617,  3623,
    3629,  3631,  3633,  3635,  3637,  3639,  3641,  3643,  3645,  3647,
    3649,  3651,  3653,  3655,  3657,  3659,  3661,  3663,  3665,  3667,
    3669,  3671,  3673,  3675,  3677,  3679,  3681,  3683,  3685,  3687,
    3689,  3691,  3693,  3695,  3697,  3699,  3701,  3703,  3705,  3707,
    3709,  3711,  3713,  3715,  3717,  3719,  3721,  3723,  3725,  3727,
    3729,  3731,  3733,  3735,  3737,  3739,  3741,  3743,  3745,  3747,
    3749,  3751,  3753,  3755,  3757,  3759,  3761,  3763,  3765,  3767,
    3769,  3771,  3773,  3775,  3777,  3779,  3781,  3783,  3785,  3787,
    3789,  3791,  3793,  3795,  3797,  3799,  3801,  3803,  3805,  3807,
    3809,  3811,  3813,  3815,  3817,  3819,  3821,  3823,  3825,  3827,
    3829,  3831,  3833,  3835,  3837,  3839,  3841,  3843,  3845,  3847,
    3849,  3851,  3853,  3855,  3857,  3859,  3861,  3863,  3865,  3867,
    3869,  3871,  3873,  3875,  3877,  3881,  3887,  3891,  3897,  3899,
    3904,  3910,  3912,  3916,  3918,  3920,  3922,  3924,  3926,  3928,
    3930,  3932,  3946,  3948,  3950,  3952,  3954,  3956,  3958,  3962,
    3968,  3973,  3978,  3980,  3986,  3987,  3990,  3994,  3997,  4001,
    4004,  4007,  4010,  4012,  4015,  4017,  4021,  4027,  4032,  4037,
    4044,  4051,  4052,  4055,  4058,  4060
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     386,     0,    -1,   425,   378,    -1,   425,   378,   386,    -1,
       3,    -1,     3,   379,     3,    -1,    84,   379,     3,    -1,
     178,   380,     3,   381,    86,   380,     4,   381,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   188,
      -1,   387,    24,   387,    -1,   387,    25,   387,    -1,   387,
      26,   387,    -1,   387,    27,   387,    -1,   387,    28,   387,
      -1,   387,    29,   387,    -1,    25,   387,    -1,   380,   387,
     381,    -1,   387,    12,   387,    -1,   387,    10,   387,    -1,
     387,    11,   387,    -1,   387,    21,   387,    -1,   387,    22,
     387,    -1,   387,    30,   387,    -1,   387,    23,   387,    -1,
     387,    32,   387,    -1,   387,    31,   387,    -1,    18,   387,
      -1,    17,   387,    -1,   387,    20,   387,    -1,    -1,   387,
      20,   380,   388,   426,   381,    -1,    -1,   387,    20,    42,
     380,   389,   426,   381,    -1,    -1,   387,    20,   227,   380,
     390,   426,   381,    -1,    -1,   387,    20,    38,   380,   391,
     426,   381,    -1,   387,    20,    42,   380,   395,   381,    -1,
     387,    20,   227,   380,   395,   381,    -1,   387,    15,   188,
      -1,   387,    15,    18,   188,    -1,   387,    15,     6,    -1,
     387,    15,    18,     6,    -1,     8,     9,   387,    -1,   387,
      19,   387,    45,   387,    -1,   387,    18,    19,   387,    45,
     387,    -1,   387,    -1,   387,   382,   392,    -1,   387,    -1,
     387,   382,   393,    -1,    -1,   258,    34,   394,   393,   383,
      -1,   258,    34,   383,    -1,   387,    34,   387,   383,    -1,
     387,    -1,   374,   380,   387,   381,    -1,   374,   380,   387,
     382,   387,   381,    -1,   375,   380,   387,   381,    -1,   376,
     380,   387,   382,   387,   381,    -1,   377,   380,   381,    -1,
      -1,   392,    -1,    -1,   387,    16,   380,   397,   392,   381,
      -1,    -1,   387,    18,    16,   380,   398,   392,   381,    -1,
      -1,   387,    16,   380,   399,   426,   381,    -1,    -1,   387,
      18,    16,   380,   400,   426,   381,    -1,    -1,   275,   380,
     401,   426,   381,    -1,     3,   380,   396,   381,    -1,   316,
     380,    26,   381,    -1,   316,   380,   387,   381,    -1,   317,
     380,   387,   381,    -1,   318,   380,   387,   381,    -1,   319,
     380,   387,   381,    -1,   320,   380,   387,   381,    -1,   314,
     380,   387,   381,    -1,   314,   380,   387,   315,     4,   381,
      -1,    -1,   336,   380,   381,   344,   380,   402,   433,   435,
     381,    -1,    -1,   337,   380,   381,   344,   380,   403,   433,
     435,   381,    -1,    -1,   338,   380,   381,   344,   380,   404,
     433,   435,   381,    -1,    -1,   317,   380,   387,   381,   344,
     380,   405,   433,   435,   381,    -1,    -1,   316,   380,    26,
     381,   344,   380,   406,   433,   435,   381,    -1,    -1,   316,
     380,   387,   381,   344,   380,   407,   433,   435,   381,    -1,
      -1,   318,   380,   387,   381,   344,   380,   408,   433,   435,
     381,    -1,    -1,   319,   380,   387,   381,   344,   380,   409,
     433,   435,   381,    -1,    -1,   320,   380,   387,   381,   344,
     380,   410,   433,   435,   381,    -1,    -1,   339,   380,   387,
     381,   344,   380,   411,   433,   435,   381,    -1,    -1,   339,
     380,   387,   382,     5,   381,   344,   380,   412,   433,   435,
     381,    -1,    -1,   339,   380,   387,   382,     5,   382,     4,
     381,   344,   380,   413,   433,   435,   381,    -1,    -1,   339,
     380,   387,   382,     5,   382,     5,   381,   344,   380,   414,
     433,   435,   381,    -1,    -1,   340,   380,   387,   381,   344,
     380,   415,   433,   435,   381,    -1,    -1,   340,   380,   387,
     382,     5,   381,   344,   380,   416,   433,   435,   381,    -1,
      -1,   340,   380,   387,   382,     5,   382,     4,   381,   344,
     380,   417,   433,   435,   381,    -1,    -1,   340,   380,   387,
     382,     5,   382,     5,   381,   344,   380,   418,   433,   435,
     381,    -1,    -1,   341,   380,     5,   381,   344,   380,   419,
     433,   435,   381,    -1,    -1,   342,   380,   381,   344,   380,
     420,   433,   435,   381,    -1,    -1,   343,   380,   381,   344,
     380,   421,   433,   435,   381,    -1,   276,   380,   387,   382,
     387,   382,   387,   381,    -1,   276,   380,   387,   382,   387,
     381,    -1,   276,   380,   387,   131,   387,   381,    -1,   276,
     380,   387,   131,   387,   135,   387,   381,    -1,   277,   380,
     387,   381,    -1,   277,   380,   422,   387,   131,   387,   381,
      -1,   277,   380,   422,   131,   387,   381,    -1,   321,   380,
     387,   381,    -1,   322,   380,   387,   381,    -1,   323,   380,
     387,   381,    -1,   324,   380,   387,   382,   387,   381,    -1,
     325,   380,   387,   382,   387,   382,   387,   381,    -1,   326,
     380,   387,   382,   387,   381,    -1,   288,   380,   387,   382,
     387,   381,    -1,   289,   380,   387,   382,   387,   381,    -1,
     290,   380,   387,   382,   387,   382,   387,   381,    -1,   291,
     380,   387,   382,   387,   382,   387,   381,    -1,   292,   380,
     387,   381,    -1,   293,   380,   387,   382,   387,   381,    -1,
     294,   380,   387,   382,   387,   381,    -1,   295,   380,   387,
     382,   387,   381,    -1,   296,   380,   387,   381,    -1,   297,
     380,   387,   381,    -1,   298,   380,   387,   381,    -1,   299,
     380,   387,   382,   387,   381,    -1,   299,   380,   387,   381,
      -1,   300,   380,   387,   382,   387,   381,    -1,   301,   380,
     387,   381,    -1,   302,   380,   387,   382,   387,   381,    -1,
     303,   380,   381,    -1,   304,   380,   387,   381,    -1,   305,
     380,   387,   381,    -1,   306,   380,   387,   381,    -1,   307,
     380,   381,    -1,   287,   380,   381,    -1,   280,   380,   387,
     382,   387,   381,    -1,   281,   380,   387,   381,    -1,   282,
     380,   387,   381,    -1,   283,   380,   387,   381,    -1,   284,
     380,   387,   381,    -1,   285,   380,   387,   381,    -1,   286,
     380,   387,   381,    -1,   346,   380,   387,   382,   387,   381,
      -1,   347,   380,   387,   381,    -1,   348,   380,   387,   381,
      -1,   349,   380,   387,   381,    -1,   350,   380,   387,   381,
      -1,   351,   380,   387,   381,    -1,   352,   380,   387,   381,
      -1,   353,   380,   387,   381,    -1,   354,   380,   387,   381,
      -1,   355,   380,   387,   382,   387,   382,   387,   381,    -1,
     356,   380,   387,   382,   387,   382,   387,   381,    -1,   357,
     380,   387,   382,   387,   382,   387,   381,    -1,   358,   380,
     387,   382,   387,   381,    -1,   359,   380,   387,   382,   387,
     381,    -1,   360,   380,   387,   382,   387,   382,   387,   381,
      -1,   361,   380,   387,   382,   387,   382,   387,   381,    -1,
     362,   380,   387,   382,   387,   381,    -1,   362,   380,   387,
     382,   387,   382,   387,   382,   387,   381,    -1,   363,   380,
     387,   381,    -1,   363,   380,   387,   382,   387,   381,    -1,
     363,   380,   387,   382,   387,   382,   387,   381,    -1,   364,
     380,   387,   381,    -1,   366,   380,   387,   381,    -1,   367,
     380,   387,   381,    -1,   368,   380,   387,   382,   387,   381,
      -1,   368,   380,   387,   382,   387,   382,   387,   381,    -1,
     369,   380,   381,    -1,   308,   380,   387,    46,   548,   381,
      -1,   309,   380,   387,   382,   548,   381,    -1,   310,   380,
     387,   382,   387,   381,    -1,   311,   380,   387,   382,   387,
     381,    -1,   312,   380,   387,   382,   387,   382,   387,   381,
      -1,   387,    15,   313,    -1,   324,   380,   387,   382,   387,
     382,   387,   381,    -1,   324,   380,   387,   382,   387,   382,
     387,   382,   387,   381,    -1,   327,   380,   381,    -1,   328,
     380,   381,    -1,   329,   380,   381,    -1,   330,   380,   381,
      -1,   331,   380,   381,    -1,   332,    -1,   333,    -1,   334,
     380,   387,   381,    -1,   335,   380,   387,   382,   387,   381,
      -1,   173,    -1,   249,    -1,    60,    -1,   278,   380,   387,
     382,   423,   381,    -1,   279,   380,   387,   382,   423,   381,
      -1,   156,   387,   272,    -1,   156,   387,    99,    -1,   156,
     387,   100,    -1,   156,   387,   104,    -1,   156,   387,   106,
      -1,   156,   387,   273,    -1,   156,   387,   140,    -1,   156,
     387,   139,    -1,   156,   387,   142,    -1,    72,   387,   424,
     119,    -1,    72,   387,   424,   120,   387,   119,    -1,    72,
     424,   119,    -1,    72,   424,   120,   387,   119,    -1,   269,
     387,   248,   387,    -1,   424,   269,   387,   248,   387,    -1,
     387,    14,   387,    -1,   387,    18,    14,   387,    -1,   387,
      13,   387,    -1,   387,    18,    13,   387,    -1,    67,    -1,
      75,    -1,    76,    -1,   220,    -1,   426,    -1,   236,   444,
     445,    -1,   236,   444,   445,   131,   448,   427,   428,   432,
     437,   440,   441,   442,    -1,   236,   444,   445,   154,     3,
     131,   448,   427,   428,   432,   437,   440,    -1,    -1,   268,
     387,    -1,    -1,   136,    58,   429,   431,    -1,   387,   430,
      -1,   429,   382,   387,   430,    -1,    -1,    44,    -1,   107,
      -1,    -1,   271,   209,    -1,    -1,   143,   387,    -1,    -1,
     345,    58,   434,    -1,     3,    -1,   434,   382,     3,    -1,
      -1,   193,    58,   436,    -1,     3,   430,    -1,   436,   382,
       3,   430,    -1,    -1,   193,    58,   438,    -1,   439,    -1,
     438,   382,   439,    -1,     3,   430,    -1,     3,   379,     3,
     430,    -1,     5,   430,    -1,    -1,   174,   387,    -1,   174,
     387,   382,   387,    -1,   174,   387,   176,   387,    -1,    -1,
     135,   253,    -1,   135,   225,    -1,   135,   253,   226,   175,
      -1,   135,   225,   226,   175,    -1,    -1,   154,   443,    -1,
       3,    -1,   443,   382,     3,    -1,    -1,   444,    38,    -1,
     444,   101,    -1,   444,   105,    -1,   444,   141,    -1,   444,
     233,    -1,   444,   221,    -1,   444,   229,    -1,   444,   228,
      -1,   446,    -1,   445,   382,   446,    -1,    26,    -1,   387,
     447,    -1,    46,     3,    -1,     3,    -1,    -1,   449,    -1,
     448,   382,   449,    -1,   450,    -1,   454,    -1,     3,   447,
     461,    -1,   168,     3,   447,   461,    -1,     3,   379,     3,
     447,   461,    -1,   464,   453,     3,    -1,   451,   453,     3,
      -1,   375,   380,   387,   381,    -1,   375,   380,   387,   381,
     453,     3,    -1,   375,   380,   387,   381,   453,     3,   380,
       3,   381,    -1,   380,   448,   381,    -1,    -1,   162,   380,
     452,   426,   381,    -1,    46,    -1,    -1,   449,   455,   158,
     450,   459,    -1,   449,   233,   450,    -1,   449,   233,   450,
     192,   387,    -1,   449,   457,   456,   158,   450,   460,    -1,
     449,   185,   458,   158,   450,    -1,    -1,   148,    -1,    71,
      -1,    -1,   191,    -1,   172,    -1,   210,    -1,   172,   456,
      -1,   210,   456,    -1,    -1,    -1,   460,    -1,   192,   387,
      -1,   261,   380,   443,   381,    -1,   262,   159,   462,   380,
     463,   381,    -1,   149,   159,   462,   380,   463,   381,    -1,
     128,   159,   462,   380,   463,   381,    -1,    -1,   135,   158,
      -1,    -1,     3,    -1,   463,   382,     3,    -1,   380,   426,
     381,    -1,   465,    -1,   102,   466,   131,     3,   427,   437,
     440,   574,    -1,   466,   171,    -1,   466,   198,    -1,   466,
     149,    -1,    -1,   102,   466,   467,   131,   448,   427,    -1,
       3,   468,    -1,   467,   382,     3,   468,    -1,    -1,   379,
      26,    -1,   102,   466,   131,   467,   261,   448,   427,    -1,
     469,    -1,   103,   247,     3,   470,    -1,   103,   247,   151,
     275,     3,   470,    -1,    -1,    69,    -1,   205,    -1,   471,
      -1,    68,   150,     3,   192,     3,   380,   472,   381,    -1,
      68,   133,   150,     3,   192,     3,   380,   472,   381,    -1,
      68,   150,   151,   275,     3,   192,     3,   380,   472,   381,
      -1,    68,   256,   150,     3,   192,     3,   380,   472,   381,
      -1,    68,   256,   150,   151,   275,     3,   192,     3,   380,
     472,   381,    -1,    68,   150,     3,   192,     3,   261,   263,
     380,   472,   381,    -1,    68,   150,   151,   275,     3,   192,
       3,   261,   263,   380,   472,   381,    -1,    68,   256,   150,
       3,   192,     3,   261,   263,   380,   472,   381,    -1,    68,
     256,   150,   151,   275,     3,   192,     3,   261,   263,   380,
     472,   381,    -1,    68,   150,    80,     3,   192,     3,   380,
     472,   381,    -1,    68,   150,    80,   151,   275,     3,   192,
       3,   380,   472,   381,    -1,    68,   256,   150,    80,     3,
     192,     3,   380,   472,   381,    -1,    68,   256,   150,    80,
     151,   275,     3,   192,     3,   380,   472,   381,    -1,    68,
     150,    80,     3,   192,     3,   261,   263,   380,   472,   381,
      -1,    68,   256,   150,    80,     3,   192,     3,   261,   263,
     380,   472,   381,    -1,     3,    -1,   472,   382,     3,    -1,
     473,    -1,   321,   380,     3,   381,    -1,   322,   380,     3,
     381,    -1,   323,   380,     3,   381,    -1,   324,   380,     3,
     382,     3,   381,    -1,   474,    -1,   103,   150,     3,    -1,
     475,   477,    -1,   250,   247,     3,    -1,   250,   247,     3,
     382,   476,    -1,     3,    -1,   476,   382,     3,    -1,    -1,
     477,    69,    -1,   477,   205,    -1,   477,    50,    48,    -1,
     477,    49,    48,    -1,   478,    -1,   479,    -1,   480,    -1,
     163,     3,    -1,   163,     3,   166,    -1,   165,     3,    -1,
     165,    26,    -1,   164,     3,    -1,   164,     3,   382,     4,
      -1,   481,    -1,   201,   247,     3,    -1,   482,    -1,   483,
       3,   484,    -1,   483,     3,   379,     3,   484,    -1,    39,
     247,    -1,    -1,   253,    40,   192,   485,    -1,   253,    40,
     192,   485,   271,     5,    41,    -1,   103,    40,   192,   485,
      -1,     3,    -1,   485,   382,     3,    -1,   494,    -1,   486,
      -1,   493,    -1,    68,   216,     3,   192,     3,   487,   488,
     489,   491,   492,    -1,    -1,    46,   218,    -1,    46,   219,
      -1,    -1,   135,    38,    -1,   135,   236,    -1,   135,   152,
      -1,   135,   253,    -1,   135,   102,    -1,    -1,   240,   490,
      -1,     3,    -1,   490,   382,     3,    -1,    -1,   261,   380,
     387,   381,    -1,    -1,   271,    73,   380,   387,   381,    -1,
     103,   216,     3,   192,     3,    -1,    35,   247,     3,    36,
      66,     3,    73,   380,   387,   381,    -1,    35,   247,     3,
      36,    66,     3,   256,   380,   541,   381,    -1,    35,   247,
       3,    36,    66,     3,   129,   159,   380,   538,   381,   202,
       3,   380,   539,   381,   540,    -1,    35,   247,     3,    36,
      66,     3,    73,   380,   387,   381,    18,   264,    -1,    35,
     247,     3,    36,    66,     3,   129,   159,   380,   538,   381,
     202,     3,   380,   539,   381,   540,    18,   264,    -1,    35,
     247,     3,    36,    66,     3,   196,   159,   380,   537,   381,
      -1,    35,   247,     3,   103,    66,     3,    -1,    35,   247,
       3,   203,    66,     3,   240,     3,    -1,    35,   247,     3,
     115,    66,     3,    -1,    35,   247,     3,    95,    66,     3,
      -1,    35,   247,     3,   264,    66,     3,    -1,    35,   247,
       3,    36,    79,     3,   548,   543,   495,    -1,    35,   247,
       3,   103,    79,     3,    -1,    35,   247,     3,   103,     3,
      -1,    35,   247,     3,   203,    79,     3,   240,     3,    -1,
      35,   247,     3,   203,     3,   240,     3,    -1,    35,   247,
       3,   182,    79,     3,   548,   543,   495,    -1,    35,   247,
       3,   182,     3,   548,   543,   495,    -1,    35,   247,     3,
      70,    79,     3,     3,   548,   543,   495,    -1,    35,   247,
       3,    70,     3,     3,   548,   543,   495,    -1,    35,   247,
       3,   115,   212,     3,   217,    -1,    35,   247,     3,    95,
     212,     3,   217,    -1,    -1,   125,    -1,    37,     3,    -1,
     496,    -1,   152,   504,   505,     3,   506,   266,   508,   497,
     499,   574,    -1,   152,   504,   505,     3,   506,   426,    -1,
      -1,    -1,   194,   159,   253,   498,   503,    -1,    -1,   192,
      83,   500,   501,    -1,    -1,   380,     3,   381,    -1,   380,
       3,   382,     3,    -1,    96,    85,    -1,    -1,    96,   253,
     502,   235,   503,    -1,     3,    20,   387,    -1,   503,   382,
       3,    20,   387,    -1,    -1,   504,   171,    -1,   504,    98,
      -1,   504,   141,    -1,   504,   149,    -1,   154,    -1,    -1,
      -1,   380,   507,   381,    -1,     3,    -1,   507,   382,     3,
      -1,   380,   510,   381,    -1,    -1,   508,   382,   509,   380,
     510,   381,    -1,   387,    -1,   108,    -1,   510,   382,   387,
      -1,   510,   382,   108,    -1,   152,   504,   505,     3,   235,
     511,   497,    -1,     3,    20,   387,    -1,     3,    20,   108,
      -1,   511,   382,     3,    20,   387,    -1,   511,   382,     3,
      20,   108,    -1,   512,    -1,   211,   504,   505,     3,   506,
     266,   508,   497,    -1,   211,   504,   505,     3,   235,   511,
     497,    -1,   211,   504,   505,     3,   506,   426,   497,    -1,
     513,    -1,    -1,    81,     3,   514,   515,   517,   518,   519,
      -1,    -1,   380,   516,   381,    -1,     3,    -1,   516,   382,
       3,    -1,   131,    -1,   240,    -1,     4,    -1,   231,    -1,
     232,    -1,    -1,   520,    -1,   271,   380,   520,   381,    -1,
     380,   520,   381,    -1,   521,    -1,   520,   382,   521,    -1,
     130,    82,    -1,   130,   244,    -1,    94,     4,    -1,   138,
      -1,   138,     6,    -1,   188,     4,    -1,   237,     4,    -1,
      82,    -1,   522,    -1,   253,   523,   448,   235,   524,   427,
     437,   440,   574,    -1,    -1,   504,   171,    -1,   504,   149,
      -1,     3,    20,   387,    -1,     3,   379,     3,    20,   387,
      -1,   524,   382,     3,    20,   387,    -1,   524,   382,     3,
     379,     3,    20,   387,    -1,   203,   247,     3,   240,     3,
      -1,   525,    -1,    68,    90,   526,     3,    -1,    68,   222,
     526,     3,    -1,   103,    90,     3,    -1,   103,    90,   151,
     275,     3,    -1,   103,   222,     3,    -1,   103,   222,   151,
     275,     3,    -1,    -1,   151,   275,    -1,   527,    -1,    68,
      97,     3,    46,   548,    -1,    68,    97,     3,    46,   548,
     108,   387,    -1,    68,    97,     3,    46,   548,    18,   188,
      -1,    68,    97,     3,    46,   548,    73,   380,   387,   381,
      -1,    68,    97,     3,    46,   548,    18,   188,    73,   380,
     387,   381,    -1,   528,    -1,   262,     3,    -1,   262,    90,
       3,    -1,   529,    -1,    68,   534,   247,   526,     3,   380,
     535,   381,   531,   530,    -1,    -1,   167,   380,     3,   381,
      -1,    68,   534,   247,   526,     3,   379,     3,   380,   535,
     381,   531,    -1,    68,   534,   247,   526,     3,   345,    89,
       3,   135,   266,   131,   380,     5,   381,   240,   380,     5,
     381,    -1,    -1,   531,    43,    20,     5,    -1,   531,    43,
       5,    -1,   531,   192,     3,   102,     3,    -1,   531,   192,
       3,   243,     3,    -1,   531,   223,    58,   263,   380,     3,
     381,   224,     5,    -1,   531,   223,    58,   199,   380,     3,
     381,   380,   532,   381,    -1,   531,   345,    58,   199,   380,
       3,   381,    -1,   533,    -1,   532,   382,   533,    -1,   223,
       3,   266,   169,   245,     4,   192,   186,     5,    -1,   223,
       3,   266,   169,   245,   179,   192,   186,     5,    -1,    68,
     534,   247,   526,     3,   380,   535,   381,   550,    -1,    68,
     534,   247,   526,     3,   550,    -1,    68,   534,   247,   526,
       3,   379,     3,   380,   535,   381,   550,    -1,    68,   534,
     247,   526,     3,   379,     3,   550,    -1,    -1,   241,    -1,
     242,   241,    -1,   536,    -1,   535,   382,   536,    -1,   196,
     159,   380,   537,   381,    -1,    66,     3,   196,   159,   380,
     537,   381,    -1,   159,   380,   443,   381,    -1,   150,   380,
     443,   381,    -1,   133,   150,   380,   443,   381,    -1,   133,
     159,   380,   443,   381,    -1,    73,   380,   387,   381,    -1,
      66,     3,    73,   380,   387,   381,    -1,   129,   159,   380,
     538,   381,   202,     3,   380,   539,   381,   540,    -1,   129,
     159,   380,   538,   381,   202,     3,   379,     3,   380,   539,
     381,   540,    -1,    66,     3,   129,   159,   380,   538,   381,
     202,     3,   380,   539,   381,   540,    -1,    66,     3,   129,
     159,   380,   538,   381,   202,     3,   379,     3,   380,   539,
     381,   540,    -1,   256,   380,   541,   381,    -1,    66,     3,
     256,   380,   541,   381,    -1,     3,    -1,   537,   382,     3,
      -1,     3,    -1,   538,   382,     3,    -1,     3,    -1,   539,
     382,     3,    -1,    -1,   540,   192,   102,    69,    -1,   540,
     192,   102,   235,   188,    -1,   540,   192,   102,   205,    -1,
     540,   192,   102,   235,   108,    -1,   540,   192,   253,    69,
      -1,   540,   192,   253,   235,   188,    -1,   540,   192,   253,
     205,    -1,   540,   192,   253,   235,   108,    -1,   540,   192,
     102,   187,    -1,   540,   192,   253,   187,    -1,   540,   178,
     132,    -1,   540,   178,   230,    -1,   540,   178,   195,    -1,
     540,    92,    -1,   540,    18,    92,    -1,   540,    92,   146,
      93,    -1,   540,    92,   146,   144,    -1,     3,    -1,   541,
     382,     3,    -1,    -1,   542,     3,   548,   543,    -1,    -1,
     543,    18,   188,    -1,   543,   188,    -1,   543,   108,     4,
      -1,   543,   108,     5,    -1,   543,   108,     7,    -1,   543,
     108,     6,    -1,   543,   108,   327,   380,   381,    -1,   543,
     108,   328,   380,   381,    -1,   543,   108,   329,   380,   381,
      -1,   543,   108,    67,    -1,   543,   108,   380,   387,   381,
      -1,   543,    43,    -1,   543,    43,   380,     5,   382,     5,
     381,    -1,   543,    43,   380,     5,   381,    -1,   543,    48,
     380,     5,   382,     5,   381,    -1,   543,    48,   380,     5,
     381,    -1,   543,    48,    -1,   543,   256,   159,    -1,   543,
     256,    -1,   543,   196,   159,    -1,   543,   159,    -1,   543,
      74,     4,    -1,   543,    73,   380,   387,   381,    -1,   543,
      66,     3,   256,    -1,   543,    66,     3,   196,   159,    -1,
     543,    66,     3,    73,   380,   387,   381,    -1,   543,    51,
      47,    46,   380,   387,   381,    52,    -1,   543,    51,    47,
      46,   380,   387,   381,    53,    -1,   543,    51,    47,    46,
     380,   387,   381,    -1,   543,    46,   380,   387,   381,    52,
      -1,   543,    46,   380,   387,   381,    53,    -1,   543,    46,
     380,   387,   381,    -1,    -1,   380,     5,   381,    -1,   380,
       5,   382,     5,   381,    -1,    -1,    59,    -1,    -1,   546,
     254,    -1,   546,   274,    -1,    -1,   547,    77,   235,     4,
      -1,   547,    78,     4,    -1,    62,   544,    -1,   239,   544,
     546,    -1,   234,   544,   546,    -1,   184,   544,   546,    -1,
     155,   544,   546,    -1,   147,   544,   546,    -1,    61,   544,
     546,    -1,   200,   544,   546,    -1,   109,   544,   546,    -1,
     127,   544,   546,    -1,   111,   544,   546,    -1,   112,    -1,
     252,    -1,   246,    -1,   110,    -1,   272,    -1,    77,   544,
     547,    -1,   265,   380,     5,   381,   547,    -1,    59,   544,
      -1,   267,   380,     5,   381,    -1,   251,    -1,    56,    -1,
     183,    -1,   177,    -1,   238,   545,   547,    -1,   244,   545,
     547,    -1,   180,   545,   547,    -1,   170,   545,   547,    -1,
     118,   380,   549,   381,   547,    -1,   235,   380,   549,   381,
     547,    -1,    57,    -1,   257,    -1,   259,    -1,   548,    34,
     383,    -1,     4,    -1,   549,   382,     4,    -1,   551,   453,
     426,    -1,    -1,   149,    -1,   211,    -1,   552,    -1,   235,
     222,     3,    -1,   235,   222,   108,    -1,   235,   553,    -1,
     554,    -1,   553,   382,   554,    -1,     8,    20,   387,    -1,
       8,     9,   387,    -1,   555,    -1,    68,   197,     3,   380,
     556,   381,    46,    55,   560,   119,    -1,    68,   197,     3,
     380,   556,   381,    55,   560,   119,    -1,    68,    10,   211,
     197,     3,   380,   556,   381,    46,    55,   560,   119,    -1,
      68,    10,   211,   197,     3,   380,   556,   381,    55,   560,
     119,    -1,    68,   134,     3,   380,   556,   381,   208,   559,
      46,    55,   560,   119,    -1,    68,   134,     3,   380,   556,
     381,   208,   559,    55,   560,   119,    -1,    68,    10,   211,
     134,     3,   380,   556,   381,   208,   559,    46,    55,   560,
     119,    -1,    68,    10,   211,   134,     3,   380,   556,   381,
     208,   559,    55,   560,   119,    -1,    -1,   557,    -1,   558,
      -1,   557,   382,   558,    -1,     3,   548,    -1,    16,     3,
     548,    -1,   190,     3,   548,    -1,   145,     3,   548,    -1,
     147,    -1,   155,    -1,   265,    -1,   244,    -1,    57,    -1,
     127,    -1,   109,    -1,    61,    -1,   112,    -1,   246,    -1,
      -1,   560,   561,    -1,   560,    55,   560,   119,    -1,   560,
     151,   560,   119,   151,    -1,   560,   270,   560,   119,   270,
      -1,   560,   161,   560,   119,   161,    -1,   560,   126,   560,
     119,   126,    -1,   560,    72,   560,   119,    72,    -1,     3,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,    20,
      -1,    18,    -1,    10,    -1,    12,    -1,    16,    -1,    45,
      -1,   236,    -1,   152,    -1,   253,    -1,   102,    -1,   131,
      -1,   268,    -1,   235,    -1,   154,    -1,   266,    -1,    68,
      -1,   103,    -1,   247,    -1,   150,    -1,   248,    -1,   120,
      -1,   114,    -1,    91,    -1,    96,    -1,    63,    -1,   206,
      -1,   160,    -1,   157,    -1,    65,    -1,   189,    -1,   124,
      -1,    64,    -1,   137,    -1,   122,    -1,   190,    -1,   145,
      -1,   135,    -1,    49,    -1,   213,    -1,   204,    -1,   121,
      -1,   215,    -1,    54,    -1,   113,    -1,   212,    -1,   214,
      -1,    46,    -1,   192,    -1,   193,    -1,    58,    -1,   136,
      -1,   143,    -1,   174,    -1,   176,    -1,   158,    -1,   172,
      -1,   210,    -1,   148,    -1,   191,    -1,   132,    -1,    71,
      -1,   185,    -1,   261,    -1,   188,    -1,   108,    -1,   196,
      -1,   159,    -1,   256,    -1,    73,    -1,   129,    -1,   202,
      -1,    69,    -1,   205,    -1,   187,    -1,   147,    -1,   155,
      -1,   265,    -1,   244,    -1,    57,    -1,   127,    -1,   109,
      -1,    61,    -1,   112,    -1,   246,    -1,   234,    -1,   111,
      -1,    77,    -1,   257,    -1,    56,    -1,   255,    -1,   117,
      -1,   153,    -1,    38,    -1,   101,    -1,   275,    -1,   269,
      -1,   271,    -1,   197,    -1,   134,    -1,   208,    -1,   380,
      -1,   381,    -1,   382,    -1,   378,    -1,   379,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    17,
      -1,   384,    -1,   316,    -1,   317,    -1,   318,    -1,   319,
      -1,   320,    -1,     8,    -1,   562,    -1,   103,   197,     3,
      -1,   103,   197,   151,   275,     3,    -1,   103,   134,     3,
      -1,   103,   134,   151,   275,     3,    -1,   563,    -1,    63,
       3,   380,   381,    -1,    63,     3,   380,   564,   381,    -1,
     565,    -1,   564,   382,   565,    -1,     5,    -1,     4,    -1,
       7,    -1,   188,    -1,     6,    -1,     3,    -1,     8,    -1,
     566,    -1,    68,   214,     3,   567,   568,   192,     3,   135,
     113,   212,    55,   560,   119,    -1,    54,    -1,    37,    -1,
     152,    -1,   253,    -1,   102,    -1,   569,    -1,   103,   214,
       3,    -1,   103,   214,   151,   275,     3,    -1,    35,   214,
       3,   115,    -1,    35,   214,     3,    95,    -1,   570,    -1,
      68,   365,   526,     3,   571,    -1,    -1,   571,   572,    -1,
     370,   271,     5,    -1,   370,     5,    -1,   371,    58,     5,
      -1,   371,     5,    -1,   372,     5,    -1,   179,     5,    -1,
     373,    -1,    18,   373,    -1,   573,    -1,   103,   365,     3,
      -1,   103,   365,   151,   275,     3,    -1,    35,   365,     3,
     571,    -1,    35,   365,     3,    50,    -1,    35,   365,     3,
      50,   271,     5,    -1,    35,   365,     3,   203,   240,     3,
      -1,    -1,   207,    26,    -1,   207,   575,    -1,     3,    -1,
     575,   382,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   469,   469,   470,   475,   482,   483,   484,   498,   499,
     527,   535,   543,   549,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   582,   582,   591,   591,   593,   593,
     595,   595,   600,   602,   606,   607,   608,   609,   610,   613,
     614,   617,   626,   644,   653,   673,   673,   733,   742,   749,
     753,   755,   757,   762,   767,   774,   775,   778,   778,   779,
     779,   780,   780,   788,   788,   796,   796,   807,   811,   812,
     813,   814,   815,   816,   817,   818,   822,   822,   824,   824,
     826,   826,   829,   829,   831,   831,   833,   833,   835,   835,
     837,   837,   839,   839,   842,   842,   844,   844,   846,   846,
     848,   848,   850,   850,   852,   852,   854,   854,   856,   856,
     859,   859,   861,   861,   863,   863,   867,   868,   869,   870,
     871,   872,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   883,   884,   885,   886,   887,   888,   889,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
     902,   903,   904,   905,   906,   907,   908,   909,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   927,   928,   929,   930,   931,   932,
     934,   935,   936,   937,   938,   940,   941,   943,   944,   945,
     947,   948,   949,   950,   957,   964,   971,   975,   979,   983,
     987,   991,   997,   998,   999,  1002,  1008,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1026,  1028,  1030,  1032,
    1036,  1044,  1055,  1056,  1059,  1060,  1063,  1071,  1079,  1087,
    1101,  1111,  1112,  1125,  1141,  1142,  1143,  1144,  1147,  1154,
    1162,  1163,  1164,  1167,  1168,  1171,  1172,  1176,  1177,  1180,
    1182,  1186,  1187,  1190,  1192,  1196,  1197,  1200,  1201,  1204,
    1210,  1217,  1226,  1227,  1228,  1229,  1232,  1233,  1234,  1235,
    1236,  1239,  1240,  1243,  1244,  1247,  1248,  1249,  1250,  1251,
    1252,  1253,  1254,  1255,  1258,  1259,  1260,  1268,  1274,  1275,
    1276,  1279,  1280,  1283,  1284,  1288,  1296,  1306,  1307,  1308,
    1317,  1322,  1328,  1336,  1340,  1340,  1380,  1381,  1385,  1387,
    1389,  1391,  1393,  1397,  1398,  1399,  1402,  1403,  1406,  1407,
    1410,  1411,  1412,  1415,  1416,  1419,  1420,  1424,  1426,  1428,
    1430,  1433,  1434,  1437,  1438,  1441,  1445,  1455,  1463,  1464,
    1465,  1466,  1470,  1474,  1476,  1480,  1480,  1482,  1487,  1494,
    1501,  1513,  1514,  1515,  1519,  1526,  1533,  1541,  1551,  1559,
    1569,  1577,  1586,  1595,  1605,  1613,  1622,  1631,  1641,  1650,
    1662,  1667,  1672,  1678,  1685,  1692,  1699,  1709,  1716,  1725,
    1732,  1738,  1746,  1752,  1760,  1761,  1762,  1763,  1764,  1780,
    1781,  1782,  1785,  1791,  1802,  1808,  1815,  1821,  1837,  1844,
    1853,  1861,  1867,  1880,  1893,  1895,  1899,  1904,  1911,  1916,
    1924,  1928,  1929,  1933,  1944,  1945,  1946,  1950,  1951,  1952,
    1953,  1954,  1955,  1958,  1960,  1964,  1965,  1968,  1970,  1973,
    1975,  1979,  1988,  1994,  2000,  2007,  2013,  2020,  2026,  2032,
    2038,  2044,  2050,  2056,  2062,  2068,  2074,  2080,  2086,  2092,
    2098,  2104,  2110,  2123,  2135,  2136,  2137,  2140,  2148,  2154,
    2167,  2168,  2168,  2172,  2173,  2176,  2177,  2178,  2182,  2183,
    2183,  2187,  2195,  2205,  2206,  2207,  2208,  2209,  2212,  2212,
    2215,  2216,  2219,  2229,  2242,  2243,  2243,  2246,  2247,  2248,
    2249,  2252,  2256,  2257,  2258,  2259,  2265,  2268,  2274,  2279,
    2285,  2289,  2289,  2294,  2295,  2297,  2298,  2302,  2303,  2307,
    2308,  2309,  2312,  2313,  2314,  2315,  2319,  2320,  2324,  2325,
    2326,  2327,  2328,  2329,  2330,  2331,  2335,  2343,  2352,  2353,
    2354,  2358,  2369,  2381,  2392,  2407,  2412,  2416,  2417,  2421,
    2423,  2425,  2427,  2431,  2432,  2438,  2442,  2444,  2446,  2448,
    2450,  2455,  2459,  2460,  2464,  2473,  2486,  2487,  2495,  2503,
    2511,  2512,  2513,  2514,  2515,  2516,  2518,  2520,  2524,  2525,
    2528,  2543,  2550,  2565,  2578,  2593,  2606,  2607,  2608,  2611,
    2612,  2615,  2616,  2617,  2618,  2619,  2620,  2621,  2622,  2623,
    2625,  2627,  2629,  2631,  2633,  2637,  2638,  2641,  2642,  2645,
    2646,  2649,  2650,  2651,  2652,  2653,  2654,  2655,  2656,  2657,
    2658,  2659,  2660,  2661,  2662,  2663,  2664,  2665,  2666,  2669,
    2670,  2673,  2673,  2683,  2684,  2685,  2686,  2687,  2688,  2689,
    2690,  2691,  2692,  2693,  2694,  2701,  2702,  2703,  2704,  2705,
    2706,  2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,
    2716,  2717,  2718,  2719,  2720,  2721,  2724,  2725,  2726,  2729,
    2730,  2733,  2734,  2735,  2738,  2739,  2740,  2744,  2745,  2746,
    2747,  2748,  2749,  2750,  2751,  2752,  2753,  2754,  2755,  2756,
    2757,  2758,  2759,  2760,  2761,  2762,  2763,  2764,  2765,  2766,
    2767,  2768,  2769,  2770,  2771,  2772,  2773,  2774,  2775,  2776,
    2777,  2780,  2781,  2784,  2797,  2798,  2799,  2803,  2806,  2807,
    2808,  2809,  2809,  2811,  2812,  2820,  2824,  2830,  2836,  2843,
    2850,  2856,  2862,  2869,  2878,  2879,  2882,  2883,  2886,  2887,
    2888,  2889,  2892,  2893,  2894,  2895,  2896,  2897,  2898,  2899,
    2900,  2901,  2908,  2909,  2910,  2911,  2912,  2913,  2914,  2915,
    2918,  2919,  2920,  2920,  2920,  2921,  2921,  2921,  2921,  2921,
    2921,  2922,  2922,  2922,  2922,  2922,  2922,  2922,  2922,  2922,
    2923,  2923,  2923,  2923,  2923,  2923,  2923,  2924,  2924,  2924,
    2924,  2925,  2925,  2925,  2925,  2925,  2925,  2925,  2925,  2925,
    2925,  2925,  2925,  2926,  2926,  2926,  2926,  2926,  2926,  2926,
    2926,  2927,  2927,  2927,  2927,  2927,  2927,  2927,  2927,  2928,
    2928,  2928,  2928,  2928,  2928,  2928,  2928,  2928,  2929,  2929,
    2929,  2929,  2929,  2929,  2929,  2929,  2930,  2930,  2930,  2931,
    2931,  2931,  2931,  2931,  2931,  2931,  2931,  2932,  2932,  2932,
    2932,  2932,  2932,  2932,  2933,  2933,  2933,  2933,  2933,  2933,
    2933,  2934,  2934,  2934,  2934,  2935,  2935,  2935,  2935,  2935,
    2935,  2935,  2935,  2935,  2935,  2935,  2935,  2936,  2936,  2936,
    2936,  2936,  2937,  2944,  2948,  2954,  2960,  2966,  2978,  2982,
    2988,  2996,  2997,  3000,  3001,  3002,  3003,  3004,  3005,  3006,
    3013,  3017,  3025,  3026,  3029,  3030,  3031,  3034,  3038,  3044,
    3053,  3061,  3072,  3076,  3085,  3086,  3090,  3091,  3092,  3093,
    3094,  3095,  3096,  3097,  3100,  3104,  3110,  3120,  3127,  3134,
    3142,  3152,  3153,  3154,  3157,  3158
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
  "HISTOGRAM", "BUCKETS", "ANY", "AUTO_INCREMENT", "ASC", "AND", "AS",
  "ALWAYS", "IDENTITY", "CONTINUE", "RESTART", "GENERATED", "STORED",
  "VIRTUAL", "BEFORE", "BEGINWORK", "BLOB", "BOOLEAN", "BY", "BINARY",
  "BOTH", "BIGINT", "BIT", "CALL", "CLOSE", "CURSOR", "CONSTRAINT",
  "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CHANGE", "CROSS", "CASE",
  "CHECK", "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE",
  "COLUMN", "CONCURRENTLY", "COPY", "CSV", "CONFLICT", "EXCLUDED",
  "NOTHING", "AGAINST", "MATERIALIZED", "REFRESH", "OF", "DATABASE",
  "DECLARE", "DEFERRABLE", "DEFERRED", "DELIMITER", "DISABLE", "DO",
  "DOMAIN", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE",
  "DROP", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT",
  "DOUBLE", "DATETIME", "DECIMAL", "DATE", "EACH", "ELSEIF", "ENABLE",
  "ESCAPED", "EXCEPT", "ENUM", "END", "ELSE", "EXECUTE", "EXIT", "EXPLAIN",
  "FETCH", "FIRST", "FOREACH", "FLOAT", "FORCE", "FOREIGN", "FORMAT",
  "FROM", "FULL", "FULLTEXT", "FUNCTION", "FOR", "GROUP", "HANDLER",
  "HEADER", "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY",
  "HOUR_SECOND", "HAVING", "IMMEDIATE", "INOUT", "INITIALLY", "INTEGER",
  "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTERSECT", "INTO", "INT",
  "INTERVAL", "ITERATE", "JOIN", "KEY", "LEAVE", "LOOP", "LATERAL",
  "LISTEN", "NOTIFY", "UNLISTEN", "SELF", "INHERITS", "ONLY", "LESS",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED",
  "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MINUS",
  "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION",
  "NULLX", "OPEN", "OUT", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL",
  "PRIMARY", "PROCEDURE", "QUICK", "RANGE", "REAL", "RECLAIM",
  "REFERENCES", "RENAME", "RESIGNAL", "RESTRICT", "RETURN", "RETURNING",
  "RETURNS", "ROLLUP", "RIGHT", "REPLACE", "ROW", "SIGNAL", "TRIGGER",
  "UNTIL", "POLICY", "SECURITY", "PERMISSIVE", "RESTRICTIVE",
  "CURRENT_USER", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS", "SHARE",
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
  "analyze_table_stmt", "analyze_table_prefix", "hist_clause_opt",
  "hist_col_list", "create_policy_stmt", "opt_policy_as", "opt_policy_for",
  "opt_policy_to", "policy_role_list", "opt_policy_using",
  "opt_policy_check", "drop_policy_stmt", "alter_table_stmt",
  "opt_col_position", "insert_stmt", "opt_ondupupdate", "@32",
  "opt_on_conflict", "opt_conflict_target", "conflict_action", "@33",
  "upsert_asgn_list", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@34", "insert_vals",
  "insert_asgn_list", "replace_stmt", "copy_stmt", "@35", "opt_copy_cols",
  "copy_col_list", "copy_direction", "copy_target", "opt_copy_options",
  "copy_option_list", "copy_option", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
  "opt_inherits", "opt_table_options", "shard_range_list",
  "shard_range_def", "opt_temporary", "create_col_list",
  "create_definition", "pk_column_list", "fk_column_list",
  "fk_ref_column_list", "fk_actions", "unique_column_list", "@36",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
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
     615,   616,   617,   618,   619,   620,   621,   622,    59,    46,
      40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   385,   386,   386,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   388,   387,   389,   387,   390,   387,
     391,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   392,   392,   393,   393,   394,   387,   387,   387,   395,
     387,   387,   387,   387,   387,   396,   396,   397,   387,   398,
     387,   399,   387,   400,   387,   401,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   402,   387,   403,   387,
     404,   387,   405,   387,   406,   387,   407,   387,   408,   387,
     409,   387,   410,   387,   411,   387,   412,   387,   413,   387,
     414,   387,   415,   387,   416,   387,   417,   387,   418,   387,
     419,   387,   420,   387,   421,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   422,   422,   422,   387,   387,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   387,   387,   387,   387,
     424,   424,   387,   387,   387,   387,   387,   387,   387,   387,
     425,   426,   426,   426,   427,   427,   428,   428,   429,   429,
     430,   430,   430,   431,   431,   432,   432,   433,   433,   434,
     434,   435,   435,   436,   436,   437,   437,   438,   438,   439,
     439,   439,   440,   440,   440,   440,   441,   441,   441,   441,
     441,   442,   442,   443,   443,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   445,   445,   445,   446,   447,   447,
     447,   448,   448,   449,   449,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   452,   451,   453,   453,   454,   454,
     454,   454,   454,   455,   455,   455,   456,   456,   457,   457,
     458,   458,   458,   459,   459,   460,   460,   461,   461,   461,
     461,   462,   462,   463,   463,   464,   425,   465,   466,   466,
     466,   466,   465,   467,   467,   468,   468,   465,   425,   469,
     469,   470,   470,   470,   425,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     472,   472,   472,   473,   473,   473,   473,   425,   474,   425,
     475,   475,   476,   476,   477,   477,   477,   477,   477,   425,
     425,   425,   478,   478,   479,   479,   480,   480,   425,   481,
     425,   482,   482,   483,   484,   484,   484,   484,   485,   485,
     425,   425,   425,   486,   487,   487,   487,   488,   488,   488,
     488,   488,   488,   489,   489,   490,   490,   491,   491,   492,
     492,   493,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   495,   495,   495,   425,   496,   496,
     497,   498,   497,   499,   499,   500,   500,   500,   501,   502,
     501,   503,   503,   504,   504,   504,   504,   504,   505,   505,
     506,   506,   507,   507,   508,   509,   508,   510,   510,   510,
     510,   496,   511,   511,   511,   511,   425,   512,   512,   512,
     425,   514,   513,   515,   515,   516,   516,   517,   517,   518,
     518,   518,   519,   519,   519,   519,   520,   520,   521,   521,
     521,   521,   521,   521,   521,   521,   425,   522,   523,   523,
     523,   524,   524,   524,   524,   425,   425,   525,   525,   425,
     425,   425,   425,   526,   526,   425,   527,   527,   527,   527,
     527,   425,   528,   528,   425,   529,   530,   530,   529,   529,
     531,   531,   531,   531,   531,   531,   531,   531,   532,   532,
     533,   533,   529,   529,   529,   529,   534,   534,   534,   535,
     535,   536,   536,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   537,   537,   538,   538,   539,
     539,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   541,
     541,   542,   536,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   544,   544,   544,   545,
     545,   546,   546,   546,   547,   547,   547,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   549,   549,   550,   551,   551,   551,   425,   552,   552,
     552,   553,   553,   554,   554,   425,   555,   555,   555,   555,
     555,   555,   555,   555,   556,   556,   557,   557,   558,   558,
     558,   558,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   560,   560,   560,   560,   560,   560,   560,   560,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   425,   562,   562,   562,   562,   425,   563,
     563,   564,   564,   565,   565,   565,   565,   565,   565,   565,
     425,   566,   567,   567,   568,   568,   568,   425,   569,   569,
     425,   425,   425,   570,   571,   571,   572,   572,   572,   572,
     572,   572,   572,   572,   425,   573,   573,   425,   425,   425,
     425,   574,   574,   574,   575,   575
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
       1,     3,    12,    12,     0,     2,     0,     4,     2,     4,
       0,     1,     1,     0,     2,     0,     2,     0,     3,     1,
       3,     0,     3,     2,     4,     0,     3,     1,     3,     2,
       4,     2,     0,     2,     4,     4,     0,     2,     2,     4,
       4,     0,     2,     1,     3,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     1,     2,     2,     1,
       0,     1,     3,     1,     1,     3,     4,     5,     3,     3,
       4,     6,     9,     3,     0,     5,     1,     0,     5,     3,
       5,     6,     5,     0,     1,     1,     0,     1,     1,     1,
       2,     2,     0,     0,     1,     2,     4,     6,     6,     6,
       0,     2,     0,     1,     3,     3,     1,     8,     2,     2,
       2,     0,     6,     2,     4,     0,     2,     7,     1,     4,
       6,     0,     1,     1,     1,     8,     9,    10,     9,    11,
      10,    12,    11,    13,     9,    11,    10,    12,    11,    12,
       1,     3,     1,     4,     4,     4,     6,     1,     3,     2,
       3,     5,     1,     3,     0,     2,     2,     3,     3,     1,
       1,     1,     2,     3,     2,     2,     2,     4,     1,     3,
       1,     3,     5,     2,     0,     4,     7,     4,     1,     3,
       1,     1,     1,    10,     0,     2,     2,     0,     2,     2,
       2,     2,     2,     0,     2,     1,     3,     0,     4,     0,
       5,     5,    10,    10,    17,    12,    19,    11,     6,     8,
       6,     6,     6,     9,     6,     5,     8,     7,     9,     8,
      10,     9,     7,     7,     0,     1,     2,     1,    10,     6,
       0,     0,     5,     0,     4,     0,     3,     4,     2,     0,
       5,     3,     5,     0,     2,     2,     2,     2,     1,     0,
       0,     3,     1,     3,     3,     0,     6,     1,     1,     3,
       3,     7,     3,     3,     5,     5,     1,     8,     7,     7,
       1,     0,     7,     0,     3,     1,     3,     1,     1,     1,
       1,     1,     0,     1,     4,     3,     1,     3,     2,     2,
       2,     1,     2,     2,     2,     1,     1,     9,     0,     2,
       2,     3,     5,     5,     7,     5,     1,     4,     4,     3,
       5,     3,     5,     0,     2,     1,     5,     7,     7,     9,
      11,     1,     2,     3,     1,    10,     0,     4,    11,    18,
       0,     4,     3,     5,     5,     9,    10,     7,     1,     3,
       9,     9,     9,     6,    11,     8,     0,     1,     2,     1,
       3,     5,     7,     4,     4,     5,     5,     4,     6,    11,
      13,    13,    15,     4,     6,     1,     3,     1,     3,     1,
       3,     0,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     4,     3,     3,     3,     2,     3,     4,     4,     1,
       3,     0,     4,     0,     3,     2,     3,     3,     3,     3,
       5,     5,     5,     3,     5,     2,     7,     5,     7,     5,
       2,     3,     2,     3,     2,     3,     5,     4,     5,     7,
       8,     8,     7,     6,     6,     5,     0,     3,     5,     0,
       1,     0,     2,     2,     0,     4,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     5,     2,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     1,     1,     1,
       3,     1,     3,     3,     0,     1,     1,     1,     3,     3,
       2,     1,     3,     3,     3,     1,    10,     9,    12,    11,
      12,    11,    14,    13,     0,     1,     1,     3,     2,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     4,     5,     5,     5,     5,     5,
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
       1,     1,     1,     1,     3,     5,     3,     5,     1,     4,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,    13,     1,     1,     1,     1,     1,     1,     3,     5,
       4,     4,     1,     5,     0,     2,     3,     2,     3,     2,
       2,     2,     1,     2,     1,     3,     5,     4,     4,     6,
       6,     0,     2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   586,     0,   351,     0,   483,     0,
       0,     0,     0,     0,   483,     0,   285,     0,   538,     0,
       0,     0,   240,   346,   358,   364,   387,   394,   399,   400,
     401,   408,   410,     0,   421,   422,   420,   467,   506,   510,
     536,   546,   555,   561,   564,   717,   725,   883,   888,   900,
     907,   912,   924,     0,     0,     0,   413,     0,     0,   553,
       0,     0,     0,     0,     0,     0,     0,   553,   587,     0,
       0,   553,     0,   511,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   489,   402,   406,   404,   405,     0,
       0,   489,     0,     0,   720,   721,     0,     0,     0,     0,
     562,     0,     1,     2,   389,   414,     0,     0,   914,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   588,     0,     0,   553,   513,   355,     0,
     350,   348,   349,     0,   549,     0,   886,     0,   388,   884,
       0,   908,     0,     0,   551,     0,   361,     0,   925,     0,
     485,   486,   487,   488,   484,     0,   403,     0,   409,     0,
       0,     0,     0,   718,   719,     0,     4,     9,    10,    12,
      11,     8,     0,     0,     0,   296,   286,   236,     0,   237,
     238,     0,   287,   288,   289,     0,    13,   239,   291,   293,
     292,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   208,   209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   300,   241,
     294,   390,   540,   539,   300,     0,     0,     0,     0,     0,
     301,   303,   317,   304,   317,   563,     3,     0,     0,   395,
     396,     0,     0,     0,   411,   911,   910,     0,     0,     0,
       0,     0,     0,     0,     0,   928,     0,   927,   898,   894,
     893,   897,   895,   899,   896,   889,     0,   891,     0,     0,
     554,   547,     0,     0,   734,     0,     0,     0,     0,   734,
     903,   902,     0,     0,   548,     0,     0,     0,   914,     0,
       0,     0,     0,   353,   244,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   362,   363,   359,     0,     0,   490,
     407,     0,   490,   724,   723,   722,     0,    65,     0,    32,
      31,    20,     0,     0,     0,     0,     0,    55,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   297,     0,     0,     0,
       0,     0,   340,   314,   300,     0,     0,     0,     0,     0,
     325,   324,   328,   332,   329,     0,     0,   326,   316,     0,
       0,   398,   397,     0,     0,   414,     0,     0,     0,     0,
       0,     0,   455,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     922,   915,   890,     0,     0,     0,   698,   707,   666,   666,
     666,   666,   666,   691,   666,   688,     0,   666,   666,   666,
     669,   700,   669,   699,   666,   666,   666,     0,   669,   666,
     669,   690,   697,   689,   708,   709,     0,     0,   692,   556,
       0,     0,     0,     0,     0,     0,   735,   736,     0,     0,
       0,     0,     0,   906,   904,   905,     0,   424,     0,     0,
       0,     0,   913,   714,   515,     0,   517,   518,     0,   356,
       0,   265,     0,   244,   355,   550,   887,   885,   909,   441,
     552,   361,   926,     0,     0,     0,   545,     0,     0,     5,
      51,    66,     0,    48,     0,     0,   228,     0,     0,     6,
       0,    57,     0,     0,     0,   214,   212,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,     0,     0,     0,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,   207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   194,     0,     0,     0,    64,
      21,    23,    24,    22,   234,   232,    46,     0,    44,   200,
      67,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      33,    25,    26,    28,    14,    15,    16,    17,    18,    19,
      27,    30,    29,     0,   298,   244,     0,   295,   392,   391,
     300,     0,     0,     0,   305,     0,   340,     0,   345,   313,
       0,   244,   302,   326,   326,     0,   319,     0,   327,     0,
     309,   308,     0,     0,   412,     0,     0,     0,     0,   451,
       0,   448,   454,   450,     0,   633,     0,     0,     0,     0,
     452,   929,   930,   923,   921,   917,     0,   919,     0,   920,
     892,   734,   734,     0,   695,   671,   677,   674,   671,   671,
       0,   671,   671,   671,   670,   674,   674,   671,   671,   671,
       0,   674,   671,   674,     0,     0,     0,     0,     0,     0,
       0,   738,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   427,     0,     0,     0,     0,
     715,   716,     0,     0,   631,   583,   317,   514,     0,   519,
     520,   521,   522,   245,     0,   272,   244,   352,   354,   360,
       0,   470,   492,     0,     0,   469,   470,     0,   470,     0,
      77,     0,   226,     0,     0,     0,     0,    53,     0,     0,
       0,     0,   130,     0,     0,     0,     0,     0,   162,   163,
     164,   165,   166,   167,     0,     0,     0,     0,   143,     0,
       0,     0,   147,   148,   149,   151,     0,     0,   153,     0,
     156,   157,   158,     0,     0,     0,     0,     0,     0,    84,
      78,    79,    80,    81,    82,    83,   133,   134,   135,     0,
       0,     0,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,   171,   172,   173,
     174,   175,   176,     0,     0,     0,     0,     0,     0,     0,
       0,   186,     0,   189,   190,   191,     0,    60,     0,    62,
       0,    47,    45,     0,     0,   235,   233,    69,     0,     0,
      40,    36,    38,     0,    58,   246,     0,     0,   340,   342,
     342,   342,     0,   306,   310,     0,     0,     0,   265,   330,
     331,     0,     0,   333,     0,   418,   417,   415,     0,     0,
       0,     0,   633,   633,     0,   463,   462,   464,   633,   457,
       0,     0,   916,   918,     0,     0,     0,   683,   693,   685,
     687,   711,     0,   686,   682,   681,   704,   703,   680,   684,
     679,     0,   701,   678,   702,     0,     0,   558,   710,     0,
     557,     0,   739,   741,   740,     0,   737,     0,   380,     0,
       0,     0,     0,     0,   382,     0,     0,     0,     0,     0,
     752,     0,   425,   426,     0,   433,     0,     0,     0,     0,
       0,     0,   714,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   589,     0,     0,   516,   535,     0,     0,   531,
       0,     0,     0,     0,   512,   523,   526,     0,     0,   931,
     357,     0,     0,     0,   501,   491,     0,     0,   470,   508,
     470,   509,    52,   230,     0,   229,     0,     0,     0,    56,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    88,    90,     0,     0,
       0,     0,     0,   122,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    59,     0,     0,     0,     0,
       0,     0,   255,   244,   393,   307,     0,     0,     0,     0,
     315,     0,   541,     0,     0,   272,   322,   320,     0,     0,
     318,   334,     0,     0,     0,     0,     0,     0,     0,   464,
     464,   633,     0,     0,   645,     0,   650,     0,     0,     0,
       0,     0,   465,   654,   635,     0,   652,   459,   464,   449,
     456,     0,     0,   667,     0,   672,   673,     0,     0,   674,
       0,   674,   674,   696,     0,     0,     0,   746,   749,   748,
     750,   747,   742,   743,   745,   751,   744,     0,     0,     0,
       0,     0,     0,   365,     0,     0,     0,     0,     0,     0,
     752,     0,     0,   428,   432,   430,   429,   431,     0,   437,
       0,     0,     0,     0,     0,     0,     0,   631,   585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   570,   631,
       0,   713,   530,   528,   529,   532,   533,   534,     0,     0,
       0,   250,   250,   266,   267,   273,     0,   347,   503,   502,
       0,     0,   493,   498,   497,     0,   495,   473,   507,   227,
     231,     0,    54,     0,   128,   127,     0,   132,     0,     0,
     215,   216,   161,   139,   140,     0,     0,   144,   145,   146,
     150,   152,   154,   195,   196,   197,   198,     0,    85,    94,
      96,    92,    98,   100,   102,   136,     0,     0,   138,   211,
     257,   257,   257,   104,     0,     0,   112,     0,     0,   120,
     257,   257,   168,     0,     0,     0,   180,   181,     0,     0,
     184,     0,   187,     0,   192,     0,    61,    63,    68,    72,
       0,     0,    50,     0,     0,    42,     0,    43,    35,     0,
       0,   265,   246,   341,     0,     0,     0,   311,     0,     0,
       0,   931,   335,     0,   321,   419,     0,     0,     0,     0,
     629,     0,   453,   461,   464,   634,   466,     0,     0,     0,
       0,     0,     0,   655,   636,   637,   639,   638,   643,     0,
       0,     0,     0,   653,   651,   458,     0,     0,   752,     0,
       0,   676,   705,   712,   706,   694,     0,   559,   366,     0,
     752,     0,     0,     0,     0,     0,   381,     0,   374,     0,
       0,     0,     0,   760,   761,   762,   764,   763,   882,   767,
     768,   769,   875,   766,   765,   870,   871,   872,   873,   874,
     857,   770,   811,   802,   807,   752,   853,   843,   814,   846,
     789,   796,   793,   780,   836,   825,   752,   833,   851,   787,
     788,   858,   774,   781,   829,   845,   850,   847,   808,   786,
     855,   727,   785,   805,   798,   795,   752,   844,   834,   775,
     824,   863,   801,   815,   797,   816,   800,   839,   822,   783,
     752,   772,   856,   778,   840,   792,   819,   831,   791,   752,
     820,   817,   818,   826,   838,   828,   794,   799,   823,   812,
     813,   830,   862,   835,   804,   837,   790,   864,   821,   809,
     803,   810,   806,   849,   777,   771,   842,   848,   782,   784,
     773,   854,   832,   852,   827,   841,   779,   776,   860,   752,
     861,   859,   877,   878,   879,   880,   881,   868,   869,   865,
     866,   867,   876,   753,     0,   435,   434,     0,   439,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
       0,   566,   582,   590,   633,     0,   525,   527,   251,   252,
       0,   269,   271,     0,     0,     0,   934,   932,   933,   471,
       0,   494,     0,     0,     0,   931,     0,     0,     0,   131,
     218,   219,   220,   221,   224,   223,   225,   217,   222,     0,
       0,     0,   257,   257,   257,   257,   257,   257,     0,     0,
       0,   261,   261,   261,   257,     0,     0,     0,   257,     0,
       0,     0,   257,   261,   261,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    74,    41,    37,    39,   250,   253,
     256,   272,   255,   343,     0,     0,     0,     0,   542,   543,
       0,   537,     0,   416,   442,   607,     0,   605,     0,   443,
       0,   460,     0,     0,     0,     0,     0,     0,   657,     0,
       0,     0,     0,     0,     0,   752,     0,   668,   675,     0,
     752,     0,   370,   383,   384,   385,     0,     0,     0,     0,
     367,   726,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   423,     0,     0,   376,     0,     0,     0,     0,
     570,     0,     0,     0,     0,   597,     0,     0,     0,   594,
       0,   593,     0,   603,     0,     0,     0,     0,     0,   565,
     632,   524,   250,   268,   275,   274,     0,     0,   505,   504,
     500,   499,     0,   475,   468,     7,   129,   126,   141,   142,
     199,   261,   261,   261,   261,   261,   261,   201,     0,   137,
       0,     0,     0,     0,     0,   261,   106,     0,     0,   261,
     114,     0,     0,   261,     0,     0,   177,   178,   179,   182,
     183,     0,   188,   193,   248,     0,     0,   247,   276,   265,
     339,     0,   338,   337,     0,     0,   336,     0,     0,     0,
     447,     0,   630,   647,     0,   665,   649,     0,     0,     0,
     658,   656,   640,   641,   642,   644,     0,   752,     0,   729,
     560,     0,   731,     0,   378,   375,     0,   754,     0,     0,
       0,     0,     0,   752,   436,     0,     0,   372,     0,     0,
       0,   369,     0,   568,   584,     0,     0,     0,     0,     0,
     595,   596,   284,   591,   572,     0,     0,     0,     0,     0,
     270,   935,     0,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   258,     0,    87,    89,    91,
       0,   257,     0,     0,     0,   257,     0,     0,     0,   123,
     125,     0,   254,   250,     0,   281,   272,   344,   312,   544,
     445,     0,   608,   606,     0,   663,   664,     0,     0,     0,
     752,     0,   728,   730,   386,   371,   759,   758,   755,   757,
     756,     0,   438,     0,   379,   377,     0,     0,   598,     0,
       0,   604,     0,   571,     0,     0,     0,     0,     0,     0,
       0,     0,   496,     0,     0,   474,    95,    97,    93,    99,
     101,   103,   202,     0,   250,   262,   105,   261,   108,   110,
     113,   261,   116,   118,   121,   185,   249,   278,   277,     0,
     242,   243,     0,   646,   648,   662,   659,     0,   733,   901,
       0,   373,     0,     0,   592,     0,   567,   573,   574,     0,
       0,     0,   481,     0,   476,     0,   478,   479,   260,   263,
       0,     0,   257,   257,     0,   257,   257,     0,     0,   282,
       0,   660,   661,   732,   440,     0,     0,     0,     0,     0,
       0,     0,     0,   477,     0,   250,   107,   261,   261,   115,
     261,   261,   280,   279,   609,     0,     0,     0,     0,     0,
       0,     0,   577,   482,     0,   264,     0,     0,     0,     0,
     611,     0,     0,     0,     0,     0,   611,     0,     0,   480,
     109,   111,   117,   119,   444,   610,     0,     0,     0,     0,
     599,     0,     0,   578,   575,     0,   625,     0,     0,   569,
       0,   611,   611,     0,     0,   576,     0,   626,   446,     0,
     622,   624,   623,     0,     0,     0,   601,   600,     0,   579,
     627,   628,   612,   620,   614,     0,   616,   621,   618,     0,
     611,     0,   615,   613,   619,   617,   602,     0,     0,     0,
       0,     0,     0,     0,   580,   581
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   660,  1053,  1266,  1268,  1264,   661,   948,   672,
    1267,   662,  1043,  1260,  1044,  1261,   673,  1460,  1461,  1462,
    1774,  1772,  1773,  1775,  1776,  1777,  1784,  2051,  2172,  2173,
    1788,  2055,  2175,  2176,  1792,  1470,  1471,   679,  1206,   394,
      21,    22,   641,  1272,  1809,  1741,  1957,  1501,  1781,  2045,
    1932,  2125,   925,  1403,  1404,  1179,  2065,  2140,  1727,    96,
     289,   290,   516,   299,   300,   301,   302,   815,   539,   303,
     536,   829,   537,   825,  1290,  1291,   814,  1277,  1814,   304,
      23,    74,   133,   363,    24,   376,    25,  1133,  1134,    26,
      27,   809,   104,    28,    29,    30,    31,    32,    33,   314,
    1076,    34,   905,  1145,  1369,  1706,  1708,  1872,    35,    36,
    1317,    37,  1184,  1907,  1755,  2036,  2115,  2194,  2033,    84,
     155,   655,   933,  1188,  1753,  1415,   931,    38,    39,   127,
     361,   635,   638,   922,  1174,  1175,  1176,    40,    99,   821,
      41,   112,    42,    43,    44,  1899,  1731,  2242,  2243,    72,
    1161,  1162,  1828,  1826,  2205,  2234,  1521,  1163,  1087,   864,
     875,  1097,  1098,   609,  1102,   915,   916,    45,    94,    95,
      46,   615,   616,   617,  1347,  1361,  1703,    47,    48,   336,
     337,    49,   352,   626,    50,    51,   327,   571,    52,  1407,
    1748
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1683
static const yytype_int16 yypact[] =
{
     814,  -116,  -151,   126, 11944,   129, -1683,   443, -1683,   168,
     493,   524,   268,   274, -1683,    30, -1683,   304,   585,   100,
     177,   185, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683,   552, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683,   572,   601,   643, -1683,   251,   442,   541,
     677,   534,   719,   135,   727,   740,   744,   541, -1683,   479,
     600,   541,   478, -1683,   435,   214,   286,   752,   294,   297,
     755,   357,   423,   444,   583,   596,   389, -1683, -1683,   770,
     772,   583,   625,    94,   403, -1683,  6607,   786,   623,    60,
   -1683,   789, -1683,   814,    61,   -81,    22,   681,    10,    41,
     339,   520,   802,   761,   808,   434,   624,   485,   543,   468,
     612,   650,   841, -1683,   213,   849,   541,   476,   481,   859,
   -1683, -1683, -1683,  -107, -1683,   597, -1683,   604, -1683, -1683,
     631, -1683,   660,   708, -1683,   666,    21,   668, -1683,   695,
   -1683, -1683, -1683, -1683, -1683,   873, -1683,   964, -1683,   735,
     985, 10387, 10387, -1683, -1683,   996,   217, -1683, -1683, -1683,
   -1683,   997, 10387, 10387, 10387, -1683, -1683, -1683,  7741, -1683,
   -1683,   639, -1683, -1683, -1683,   642, -1683, -1683, -1683, -1683,
   -1683, -1683,   990,   658,   664,   683,   710,   721,   739,   757,
     765,   781,   785,   792,   818,   835,   851,   867,   883,   899,
     903,   905,   913,   929,   946,   951,   952,   953,   954,   955,
     956,   957,   958,   961,   963,   966,   968,   969,   974,   975,
     976,   977,   978,   979,   982,   983,   984,   986,   987,   988,
     989,   991,   994,   995,  1000,  1001,  1004,  1006, -1683, -1683,
    1008,  1021,  1025,  1026,  1028,  1029,  1030,  1031,  1034,  1035,
    1036,  1037,  1038,  1039,  1046,  1048,  1050,  1051,  1058,  1059,
    1060,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1076,
    1077,  1079,  1081,  1084,  1085,  1087,  1088, 10387, 12613,  -111,
   -1683,   697,   629,   633,    15,  1089,  1045,  1090,    52,  -150,
     580, -1683,  1061, -1683,  1061, -1683, -1683,   992,  1140, -1683,
   -1683,  1095,  1197,  1192, -1683, -1683, -1683,   491,   119,    42,
     575,    47,   121,   576,  1278,  1099,  1136,    84, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683,   364, -1683,  1474,  1476,
   -1683, -1683, 12220,  1284,    90,  1488,  1300,  1218,  1503,    90,
   -1683, -1683,   -19,  1508, -1683,  1320,   486,  1239, -1683,  1512,
    1513,   -37,  1491, -1683,   -95,  -181,    60,  1518,  1519,  1520,
    1521,  1524,  1529,  1530, -1683, -1683, -1683,  1532,  1537,   -85,
   -1683,  1539,   -14, 12736, 12736, -1683,  1542, 10387, 10387,  1246,
    1246,  1516, 10387, 12088,   -51,  1544,  1553,  1174, -1683, 10387,
    6985, 10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387,
    1177, 10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387,
   10387, 10387, 10387, 10387, 10387, 10387,  1178, 10387, 10387, 10387,
    1180, 10387, 10387, 10387, 10387, 10387, 10387,  8119, 10387, 10387,
   10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387,  1182,  1185,
    1200,  1201,  1202, 10387, 10387,  1203,  1204,  1205, 10387, 10387,
    1568,  1206,  1207, 10387, 10387, 10387, 10387, 10387, 10387, 10387,
   10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387,
   10387, 10387, 10387, 10387, 10387,  1209, 10387, 10387, 10387,  1211,
    2209, -1683, 10387, 10387, 10387, 10387, 10387,    17,  1214,   796,
   10387,  7363, 10387, 10387, 10387, 10387, 10387, 10387, 10387, 10387,
   10387, 10387, 10387, 10387, 10387,  1592, -1683,    60,  1593, 10387,
    1594,  1595,   343, -1683,   132, 10387,  1219,   379,  1596,    60,
   -1683, -1683, -1683,   -36, -1683,    60,  1443,  1412, -1683,  1612,
    1614, -1683, -1683,  1424,  1426,   -41,  1617,  1621,  1623,  1625,
    1643,  1647, -1683,  1652,  1656,  1657,  1659, 12220,  1663,  1427,
    1665,  1666,  1668,  1670,  1673,  1304,  1674,    11,   467,  1675,
   -1683, -1683, -1683,   459,  1301,  1309, -1683, -1683,  1310,  1310,
    1310,  1310,  1310, -1683,  1310, -1683,  1311,  1310,  1310,  1310,
    1641, -1683,  1641, -1683,  1310,  1310,  1310,  1336,  1641,  1310,
    1641, -1683, -1683, -1683, -1683, -1683,  1350,  1352, -1683,   451,
    1681, 12220,  1735,  1736,  1737,  1360,  1384, -1683,  -172,  1739,
    1747,  1576,  1388, -1683, -1683, -1683,  1578,  1725,  1769,  1581,
    1500,  1773,    84,  -112, -1683,   385, -1683, -1683,    46, -1683,
   10387,  1584,    60,  -173,   481, -1683, -1683, -1683, -1683, -1683,
   -1683,    21, -1683,  1775,  1776,   271, -1683,  1775,   273, -1683,
    2509, -1683,  1399, 12736, 12204,   -46, -1683, 10387, 10387, -1683,
    1400, -1683, 10387,  1546,   598, -1683, -1683, -1683,  2554,  8497,
    2854,  3199,  3544,  2899,  3244,  3589,  3934,  4279,  4624, -1683,
    3889,  4234,  4579,  4924,  4969,  5269,  5614,  5959,  5314,  5659,
    6004,   684,  6304,  8966,  6349, -1683,  9017,  9046,  9086, -1683,
   12651,  6778,  6832,  7001,  7052,  8708,  1402,  9269,  9344,  9381,
    9424,  9464,  9647,  9722,  9753,  7077,  7102,  7156, -1683, -1683,
   -1683, -1683, -1683,  9802,  7197,  1440,  1442,  1444,   809,   971,
    1406,  1445,  1446,  7397,  9842, 10025, 10117, 10142, 10180, 10220,
   10403, 10454,  7442,  7467,  7492,  7534,  7581,  7770,  7816,  7841,
    1102, 10481, 10506, 10558,  7866, -1683,  1128, 10598,  7912, -1683,
   -1683, 12760,  1155,  7125, 10528, 10528, -1683,    82, -1683, -1683,
    1555, 10387, 10387,  1413, 10387, 12680,  1414,  1420,  1422, 10387,
    1697,  1368,  1473,   933,   920,   920,   767,   767,   767,   767,
     569,  1516,  1516,   133, -1683,  -173,  1661, -1683, -1683,  1421,
     132,  1645,  1646,  1648, -1683,  1546,   343, 10767, -1683, -1683,
      14,   -88,   580,  1412,  1412,  1650,  1618,    60, -1683,  1651,
   -1683, -1683,  1803,  1803, -1683,   -17, 12220, 12220,  1808, -1683,
    1597, -1683, -1683, -1683,  1598,  1778, 12220,  1810,  1577,  1579,
   -1683, -1683, -1683, -1683, -1683, -1683,  1813, -1683,  1816, -1683,
   -1683,    90,    90,  1817, -1683, -1683, -1683, -1683, -1683, -1683,
    1819, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
    1819, -1683, -1683, -1683,  1843,  1845,  1632,  1441,  1471, 10387,
    1472,  1778, 12220, 12220, 12220,  1649,    90,  1590,   137,  -169,
    1662,  1853,   510,  1855,   561,  1724,   -78,  1858,  1859,  1671,
   -1683, -1683,  1777,  1861,   590, -1683,  1061, -1683,  1862, -1683,
   -1683, -1683,   411, 12736,  1809,  1694,  -173, -1683, -1683, -1683,
    1850,  -127, -1683,   406,  1492, -1683,  -127,  1492,  1677, 10387,
   -1683, 10387, -1683, 10387, 12511, 12232,  1787,  7954,  1493,  1494,
   10387, 10387, -1683, 10387, 12486,  1718,  1718, 10387, -1683, -1683,
   -1683, -1683, -1683, -1683, 10387, 10387, 10387, 10387, -1683, 10387,
   10387, 10387, -1683, -1683, -1683, -1683, 10387, 10387, -1683, 10387,
   -1683, -1683, -1683, 12220, 12220, 10387, 10387, 10387,  1873, -1683,
    1534,  1535,  1536,  1540,  1541,  1543, -1683, -1683, -1683, 10387,
   10387, 10387, -1683, 10387,  1501,  1506,  1509,  1547,  1883,  1548,
    1885,  1549,  1514,  1515, 10387, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, 10387, 10387, 10387, 10387, 10387, 10387, 10387,
   10387, -1683, 10387, -1683, -1683, -1683, 10387, -1683, 10387, -1683,
   10387, -1683, -1683, 10387,  1546, 10528, 10528,  1660, 12708, 10387,
   -1683, 10387, 10387,  1546, -1683,  1761,    60,  1895,   343,  1764,
    1764,  1764,  1526, -1683,   488, 10387,  1897,  1906,  1584, -1683,
   -1683,    60, 10387,   -92,    60, -1683,  1531,  -103,  1550,  1752,
    1753,  1551,  1778,  1778, 12220, -1683, -1683, 12247,  1778, -1683,
    1914,  1916, -1683, -1683,  1552,  1554,   421,   -70,   773,   -70,
     -70, -1683,   477,   -70,   -70,   -70,   773,   773,   -70,   -70,
     -70,   483,   773,   -70,   773,  1556,  1557,  1847, -1683, 10387,
   12736,   137,  1778,  1778,  1778,   426, -1683,  1559, -1683,  1560,
    1561,  1562,  1565,   504, -1683,  1658,   137,  1924,   172,  1874,
   -1683,  1793, -1683, -1683,    37,  1692,  1685,   137,   207,  1742,
    1943,  1946,  -120,  1947,  1571,  1798,   517,  1580,  1585,  1799,
    1588,   506, -1683,  1961,  1546, -1683, -1683,  1968,   -25,  1967,
    1970,  1972,  1599,   464, -1683,  1600, -1683,   670, 10387,  1770,
   -1683,  8875,  1821,  1975, -1683, -1683,  1978,  9253,  -108, -1683,
    -108, -1683, -1683, 12736, 12536, -1683, 10387,  1603, 10387, -1683,
   -1683,  8891,  1198, 10792, 10387, 10387,  1604,  1605, 10818, 10845,
   10870,  8143,  8206, 10895, 10922, 10962, 10987, 11012, 11037,     8,
      20, 11062, 11087,  8231,  1606,  1608,  1610,  1615,  1616,  1622,
    1624,  1230,  8256, 11112, 11140, -1683, -1683, -1683,  1628,   515,
    1633,   527,  1636, -1683, -1683, 11166,  8290,  8330,  8516, 11191,
   11218,  8580,  8621,  1276,  1683,  1733, 11243, 11268,  1611,  1640,
   10387,  1546, 10387,  1613,  1546, 12736,  1546,  1642,  1546,  1655,
    1679,  1926,  1860,  -173, -1683, -1683,  1835,  1664,  1667,  1682,
   -1683,  1995, 12736,  1985,    16,  1694, -1683, 12736, 10387,  1686,
   -1683, -1683,   -92,  2023,  2026, 10387,  1687,  1688,  2025, 12247,
   12247,  1778,  1849,  2035,  1689,  1691,  1693,  1992,  2037,  1695,
    2038,   114, -1683, -1683, -1683,  1902,  1904, -1683, 12247, -1683,
   -1683,  1846,   632, -1683,  2071, -1683, -1683,  1842,  2074, -1683,
    2075, -1683, -1683, -1683,  1700, 11294,   529, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683,   693,   137,  2078,
    2079,  2081,  2089, -1683,  2090,  1717,   531,  1719,  1838,   137,
   -1683,  1417,  1994, -1683, -1683, -1683, -1683, -1683,  2095,  1844,
    1729,   533,  1854,   137,  2113,   209,  1983,   590, -1683,    -3,
   10387,  1740,  1741,  1743,  2116,  2116,  1744,  2025,    26,   590,
   12220, -1683, -1683, -1683, -1683, -1683, -1683, -1683,   464,   538,
     464,   -23,   462,  1745, -1683,  1815,   636, -1683, -1683, 12736,
    1869,  2105, -1683, -1683, 12736,   540, -1683,  1934, -1683, -1683,
   12736,  2124, -1683, 10387, -1683, -1683, 10387, -1683, 11326, 12033,
   -1683, -1683, -1683, -1683, -1683, 10387, 10387, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, 10387, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, 10387, 10387, -1683, -1683,
    1784,  1784,  1784, -1683,  1786,   862, -1683,  1791,   919, -1683,
    1784,  1784, -1683, 10387, 10387, 10387, -1683, -1683, 10387, 10387,
   -1683, 10387, -1683, 10387, -1683, 10387, -1683, -1683, -1683, -1683,
    1750,  1755,  1613,  1756,  1757, -1683,  1758, -1683, -1683, 10387,
   10387,  1584,  1761, -1683,  2137,  2137,  2137,  1763, 10387, 10387,
    2138,  1770, 12736,  2116, -1683, -1683,  2106, 11351,  2145,  2146,
   -1683,   544, -1683, -1683, 12247, -1683, -1683,  2147, 10387,  2151,
    2104,   -20, 10387, -1683, -1683, -1683, -1683, -1683, -1683,  1780,
    1781,  1782, 10387, -1683, -1683, -1683,   426,  2102, -1683,  1789,
    2154, -1683,   773, -1683,   773,   773, 10387, -1683, -1683,  2110,
   -1683,   557,  1790,  1800,  1818,  1820, -1683,   137, -1683,   137,
    1792,   591,  1898, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683,  1988, -1683,  1822,  1823,  1930,   137,
   -1683,  1825,   626,  1826,  1944,   137,  1942,   628,  1829,  2051,
    2052,  1832, 11376,  2145,  2116,  2116, -1683,   648,   651,  2146,
     654,    91, -1683, -1683,  1778,   673, -1683, -1683, -1683, -1683,
    2210, -1683, -1683,   670, 10387, 10387, -1683, -1683,  1863, -1683,
    9631, -1683, 10009,  1864,  2143,  1770,  1871, 11401, 11426, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, 11451,
   11476, 11504,  1784,  1784,  1784,  1784,  1784,  1784,  2164, 11530,
    2184,  2061,  2061,  2061,  1784,  1876,  1877,  1881,  1784,  1884,
    1891,  1892,  1784,  2061,  2061, 11555, 11582, 11607, 11632, 11658,
    8668, 11690, 11715, -1683, -1683, -1683, -1683, -1683, 12561,   204,
   12736,  1694,  1860, -1683,   676,   678,   680,  2254, 12736, 12736,
    2245, -1683,   687, -1683,  2248, -1683,   689, -1683,   691, -1683,
    2271, -1683,   696, 11740,   699,  1903,  1905,  2125, -1683, 11765,
    1894,  1909,  1910, 11790,   698, -1683,  2243, -1683, -1683, 11815,
   -1683,  2588, -1683, -1683, -1683, -1683,  2283,   702,   705,   137,
   -1683, -1683,  2933,  3278,  3623,  3968,  4313,  4658,  2232,  2290,
   10387,  2221, -1683,   707,   137, -1683,   137,  1915,   711,  2165,
      26, 10387,  1922,  1923,  2025, -1683,   713,   715,   717, -1683,
    2302, -1683,   722, -1683,   475,  1929,  2307,  2255,  2259, -1683,
    1299, -1683,   462, -1683, 12736, 12736,  2315,  2316, -1683, 12736,
   -1683, 12736,  9253,  1941, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683,  2061,  2061,  2061,  2061,  2061,  2061, -1683, 10387, -1683,
    2319,  2265,  1945,  1948,  1949,  2061, -1683,  1980,  1981,  2061,
   -1683,  1984,  1987,  2061,  1951,  1952, -1683, -1683, -1683, -1683,
   -1683, 10387, -1683, -1683, -1683,  2118, 10387, -1683,  2200,  1584,
   -1683,  2333, -1683, -1683,  1956, 10387, -1683,  2076,  2136,  2338,
   -1683,  2339, -1683, -1683,  2342,  1022, -1683,  2343, 10387, 10387,
   -1683, -1683, -1683, -1683, -1683, -1683,  2288, -1683,  5003, -1683,
   -1683,  5348, -1683,  1969, -1683, -1683,   724, -1683,  2277,  2227,
    2207,  2198,  2091, -1683, -1683, 11840,  1986, -1683,   729,   782,
     137, -1683,  1991,    58, -1683, 11868,  2145,  2146,   812,  2166,
   -1683, -1683, -1683, -1683, -1683,  2368,  2373,   342,   -71,  2182,
   -1683, -1683,  2362,  2001,   815,  2381,  2289,  2006,  2008,  2011,
    2018,  2024,  2027, 11894, -1683,  2028,  2403, -1683, -1683, -1683,
    2030,  1784,  2029,  2032,  2033,  1784,  2036,  2040,  2041, -1683,
   -1683, 11919, -1683, 12561,   279,  2253,  1694, -1683, -1683, 12736,
   -1683,  2410, -1683, -1683,  2042, -1683, -1683,  2043, 11946, 11971,
   -1683,  5693, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683,  6038, -1683, 10387, -1683, -1683,   819,  2413, -1683,   821,
     823, -1683,  2418, -1683,  2044,  2423,  2424,  2049,  2057,  2058,
   10387,  2438, -1683,   825,   -26, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683,  2439,   462,  2062, -1683,  2061, -1683, -1683,
   -1683,  2061, -1683, -1683, -1683, -1683, -1683,  2217,  2220,  2116,
   -1683, -1683,  2070, -1683, -1683,  1181, -1683,  6383, -1683, -1683,
   11996, -1683,  2073,  2250, -1683,   856, -1683, -1683, -1683,  2456,
    2457,  2458, 12736,  2442, -1683,  2460, -1683, -1683, -1683, -1683,
    2461,  2084,  1784,  1784,  2085,  1784,  1784,  2292,  2293,  2087,
    2467, -1683, -1683, -1683, -1683,  2231,  2469,  2470,  2467,  2093,
    2094,  2099, 10387, -1683,  2241,   462, -1683,  2061,  2061, -1683,
    2061,  2061, -1683, -1683, -1683,   857,  2101,   902,  2103,   930,
    2108,  2258, -1683, 12736,  2316, -1683,  2111,  2112,  2114,  2120,
   -1683,  2481,  2480,  2483,  2467,  2467, -1683,  2274,  2489,  2001,
   -1683, -1683, -1683, -1683,   107, -1683,  2121,  2123,   932,   934,
     472,  2502,   937, -1683, -1683,   -40,  2360,   352,   -15, -1683,
    2467, -1683, -1683,  2415,  2244, -1683,  2274, -1683, -1683,   418,
   -1683, -1683, -1683,   355,   356,   939,   472,   472,  2346, -1683,
   -1683, -1683, -1683, -1683, -1683,     6, -1683, -1683, -1683,   366,
   -1683,  2272, -1683, -1683, -1683, -1683,   472,    28,  2324,  2334,
    2356,  2358,  2542,  2543, -1683, -1683
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1683,  2446,   -96, -1683, -1683, -1683, -1683,  -858,  1353, -1683,
    1498, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,  1601,  2159,
   -1683,  -227,  -635,  1052, -1683, -1389, -1683,   741, -1274, -1683,
   -1678, -1683, -1067, -1683,   813, -1283, -1683, -1683, -1371, -1683,
   -1683,  2039,  -284,  -287,  2060,  -526, -1683, -1683,  -301, -1683,
   -1683,   499, -1683, -1683, -1683,  1263,  -789,   264,  -177, -1683,
   -1683, -1683,  2468,  1927, -1683,  1936, -1683, -1117, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,  2054,
    1768, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683, -1683,
   -1260, -1683,  -829, -1683, -1683, -1683, -1683, -1683,   388,   192,
    2512,  2225, -1683,  1672, -1683,   706,  1953, -1683, -1683, -1683,
   -1683, -1683, -1683, -1683, -1683, -1122,  1217, -1683, -1683, -1683,
   -1683,    56, -1683, -1683, -1683, -1683,   731, -1683,   363, -1683,
    1243,  1240, -1665, -1682, -1581, -1591, -1372, -1683, -1076,   432,
      79,   174,  -850,  -416,  1748, -1147, -1683, -1683, -1683,  2465,
   -1683,  -332, -1683,  1751,  1086, -1109, -1683, -1683, -1683, -1683,
    2063, -1683, -1683, -1683, -1683, -1683,  2273, -1683, -1683, -1483,
   -1683
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -715
static const yytype_int16 yytable[] =
{
     288,  1285,  1511,   540,  1336,  1378,  1299,  1300,   927,   826,
     522,   527,  1318,  1742,  1728,  1730,   855,   622,   491,  1356,
     517,  1738,   311,   776,   366,  1106,  1107,  1063,  1821,   910,
    1371,  1112,  2288,  1114,  1065,   777,  1509,   910,    92,  1522,
    1523,  1886,   887,   518,   328,   329,   330,   331,   332,   333,
     919,  1399,  2257,  1836,   887,   294,  1078,  1393,  1545,  2166,
     325,   515,   311,   294,  1892,   383,   384,  1182,   666,   667,
    1718,   526,  -714,   942,   943,  1363,   389,   390,   391,   643,
     642,  1192,   393,   623,  1739,   528,  1182,  2263,  1041,   897,
     374,   911,  1135,   611,   636,   640,    56,   163,    53,   911,
    1288,  1894,   565,   100,  1933,  1934,   612,  1189,   550,  1191,
     307,   308,  1079,   555,  2282,  1944,  1945,   315,  1534,  1535,
    1536,  1537,   548,   122,   557,  2245,  1719,   125,  2107,    57,
     309,    54,    73,   624,  1894,   491,   823,   316,   116,  1364,
    1128,   845,  1822,   492,   493,   494,   495,   496,   497,   498,
     653,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,  -355,   514,  1294,  1289,
    1055,    85,   312,   640,   824,   910,  1837,   102,   515,  1080,
     640,  1538,   359,  1146,  1325,  1258,  1068,  1782,  1783,  1365,
     101,   490,  2108,  1720,  2283,   891,  1793,  1794,   549,  2246,
     558,   367,   164,   637,  1326,   778,    91,  2289,   898,   529,
      98,  1136,   312,   326,   295,   117,   355,   134,   668,  1394,
     296,   657,   295,   668,  2258,  1524,   375,  2167,   296,   334,
     805,  1561,   529,   912,   625,   613,  1838,   911,  2264,  1081,
     816,  1732,  1571,  2037,  2038,  2039,  2040,  2041,  2042,    55,
    1896,  1572,    93,  1721,   551,  1183,  1712,  2050,  1895,   556,
    1377,  2054,  -714,   566,  1831,  2058,   310,   913,   914,  1275,
    1042,   519,  1914,  1366,  1416,   367,  1735,   920,   921,  1293,
     614,  1897,   856,  1896,   362,  2247,   118,  -355,    16,   136,
    1367,  1180,   663,   356,  1067,   654,   664,   139,   313,  2248,
     141,  1073,  1147,   674,   678,   680,   681,   682,   683,   684,
     685,   686,   687,   688,  1897,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     779,   706,   707,   708,  2099,   710,   711,   712,   713,   714,
     715,   717,   718,   719,   720,   721,   722,   723,   724,   725,
     726,   727,  2100,  1887,  1888,   926,  1740,   733,   734,  1417,
     144,  1418,   738,   739,   357,   135,   654,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   761,   762,   763,   764,  1443,
     766,   767,   768,  1066,   521,  1510,   771,   772,   773,   774,
     775,  1444,  1490,  1898,   785,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,  1954,
    1082,  1083,   335,   288,  2272,  2276,   146,   297,   935,   817,
    1088,   938,   298,  1358,  1811,   297,  1898,   137,   128,  1846,
     298,  1539,  1540,  1541,  2105,   140,   949,   148,   142,  2171,
    1857,  1851,  1858,  2174,   567,   568,   569,   570,  1129,  1130,
    1131,  1132,   328,   329,   330,   331,   332,   333,  1372,   886,
    1714,   811,   857,   338,  2284,  1955,  1122,  1123,  1124,  1552,
    2024,  1554,  1555,  1337,  2260,   887,  1862,  1338,   346,   629,
    2253,  -317,   812,  1166,  1542,  2025,    86,  1863,  1921,  1922,
    1923,  1924,  1925,  1926,  2137,  1167,  1738,    16,   145,    16,
    1935,  2270,  2018,  2030,  1939,    89,  1054,  1864,  1943,  2216,
    2217,    90,  2218,  2219,   888,   858,  1058,    87,  1958,  1094,
    1095,  1865,  2138,    75,   538,  1339,   339,   934,  1340,   937,
    1866,  1168,  2273,  2277,   923,  1286,  1166,  2261,  1292,  1169,
      88,    97,  1359,  1341,  2285,   105,  1139,   546,  1167,   889,
    2274,  2278,  2271,   103,  2246,  1140,   129,  1219,  1220,  1739,
     547,   944,   945,  1342,   147,   106,   947,    76,   552,   559,
    1867,  1343,  2262,   954,   130,  2106,  1956,  1373,  1062,  1715,
    2275,  2279,  1873,    77,  1168,   149,   386,   387,  1878,  1170,
     512,   513,  1169,   514,   107,   813,   131,  2209,   492,   493,
     494,   495,   496,   497,   498,  1164,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   109,   514,   132,   161,  2240,   347,   630,  1502,  1746,
      78,   553,   560,  2238,  2239,   162,   108,   334,  1171,   350,
    2247,   530,  1170,   110,   554,   561,  1153,    79,  1900,    80,
    2266,  2267,  1747,  1154,  2248,    81,   351,  1382,  1301,  2265,
    1344,   876,  1345,  1401,  2136,  1402,  1383,   881,  1547,   883,
     113,   150,  1172,  -483,   114,  1045,  1046,  1548,  1048,  2286,
      82,  1346,   111,   490,   492,   493,   494,   495,   496,   497,
     498,  1171,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   317,   514,  1155,
     123,   150,   115,  1156,   151,   126,  -483,  -487,   531,   950,
     119,  -484,   152,  2014,  -483,  2169,  1988,   153,  -323,  1559,
    1157,  1991,  1996,   120,  1986,   572,   573,   121,  1560,  1158,
     124,   318,   532,  1987,   154,   138,  -483,  2008,   143,  2009,
     819,   529,   156,  1281,   151,   533,   917,   918,  2179,  1273,
    -487,   157,   292,   158,  -484,   159,   319,  2127,  -487,  1142,
    1143,  2131,  -484,  2141,   320,   165,  1159,  1185,  1186,   291,
     534,  1173,   305,  1120,   293,   340,   321,   511,   512,   513,
    -487,   514,  1323,  1324,  -484,   341,  2215,   342,    83,   781,
     782,   343,   783,   535,   344,   784,   345,  1259,   348,   492,
     493,   494,   495,   496,   497,   498,  1270,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   353,   514,   354,  1193,  1160,  1194,   349,     1,
    1327,  1328,   358,     2,  1201,  1202,   360,  1203,  1329,  1330,
     362,  1208,   364,   322,  1331,  1330,  1786,  1787,  1209,  1210,
    1211,  1212,   368,  1213,  1214,  1215,   379,     3,  2081,   369,
    1216,  1217,     4,  1218,   323,  1353,  1354,  1388,  1389,  1221,
    1222,  1223,  2066,  2096,  2091,     5,  1464,  1465,  2197,  2198,
     372,  2200,  2201,  1231,  1232,  1233,   370,  1234,  1467,  1468,
    1558,  1354,  1568,  1354,  1710,  1354,     6,     7,  1245,  1736,
    1400,  1751,  1752,  1790,  1791,  1829,  1830,  1246,  1247,  1248,
    1249,  1250,  1251,  1252,  1253,   371,  1254,  1391,  1852,  1354,
    1255,   373,  1256,   377,  1257,   324,   507,   508,   509,   510,
     511,   512,   513,  1263,   514,  1265,  1265,   505,   506,   507,
     508,   509,   510,   511,   512,   513,     8,   514,   380,  1282,
     378,  2147,  1860,  1354,  1734,   381,  1287,     9,    10,    11,
     951,   492,   493,   494,   495,   496,   497,   498,   382,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,    92,   514,   388,  1875,  1354,  1880,
    1389,   865,   866,   867,   868,    12,   869,    13,   395,   871,
     872,   873,   396,  1335,   397,    14,   877,   878,   879,  1889,
    1890,   882,  1891,  1890,  1491,  1893,  1830,  1493,   398,  1494,
     541,  1496,  1099,  1100,   399,  1103,  1104,  1105,   524,    15,
      16,  1108,  1109,  1110,  1901,  1400,  1113,  1960,  1961,  1962,
    1961,  1963,  1961,   400,    17,   975,   976,    18,  1966,  1890,
    1968,  1969,  1970,  1971,  2075,  2076,    19,  1973,  1974,   520,
    1976,  1977,  1405,  1994,  1354,  1409,  1995,  1354,  2007,  1354,
     401,  1414,  2011,  1354,  2019,  1969,  2020,  1890,  2021,  1890,
    1420,   402,   947,  2023,  1971,  2085,  1354,   538,  1428,  1429,
    2094,  1354,   492,   493,   494,   495,   496,   497,   498,   403,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   543,   514,   404,   492,   493,
     494,   495,   496,   497,   498,   405,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   406,   514,  2095,  1354,   407,  1492,   494,   495,   496,
     497,   498,   408,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   542,   514,
    1007,  1008,  1512,  2101,  1830,   545,  2112,  1752,   409,  1517,
    2151,  1354,  2153,  1969,  2154,  1971,  2164,  2165,   492,   493,
     494,   495,   496,   497,   498,   410,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   411,   514,  2181,  2182,  2187,  2188,   544,  2220,  2221,
     492,   493,   494,   495,   496,   497,   498,   412,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   413,   514,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   414,
     514,  2223,  2224,   415,  1722,   416,   492,   493,   494,   495,
     496,   497,   498,   417,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   418,
     514,  2226,  2221,  2251,  2221,  2252,  2221,  1302,  2255,  2256,
    2280,  2221,  1069,  1070,  1278,  1279,   419,  1757,  1815,  1816,
    1758,   420,   421,   422,   423,   424,   425,   426,   427,  1769,
    1770,   428,  1304,   429,   562,  1305,   430,  1306,   431,   432,
    1307,  1771,  1009,  1010,   433,   434,   435,   436,   437,   438,
    1778,  1779,   439,   440,   441,  1308,   442,   443,   444,   445,
     563,   446,  1309,  1310,   447,   448,   564,  1795,  1796,  1797,
     449,   450,  1798,  1799,   451,  1800,   452,  1801,   453,  1802,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   454,   514,  1808,  1810,   455,   456,  1311,   457,   458,
     459,   460,  1818,  1819,   461,   462,   463,   464,   465,   466,
    1573,  1574,  1575,  1576,  1577,  1578,   467,  1579,   468,  1580,
     469,   470,  1833,  1581,  1582,  1583,  1839,  1584,   471,   472,
     473,  1585,  1586,  1587,  1588,  1589,  1843,   474,   475,   476,
     477,   478,   479,   480,   481,  1590,   482,   483,  1313,   484,
    1849,   485,  1591,  1592,   486,   487,  1593,   488,   489,   523,
     525,  1594,  1595,  1596,  1597,  1598,   610,   574,  1599,   575,
    1600,  1601,  1602,  1031,  1032,  1603,  1604,  1314,  1605,  1606,
    1607,   618,   619,   620,  1608,  1315,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   621,   514,  1609,  1037,
    1038,   627,   628,  1610,   631,   633,   634,   639,  1611,  1612,
    1613,   644,   645,   646,   647,  1614,  1615,   648,  1616,  1617,
    1618,  1619,   649,   650,  1620,   651,  1621,  1622,  1623,  1624,
     652,  1625,   656,  1626,  1627,   659,  1628,   669,  1629,  1630,
     514,  1631,  1632,  1633,  1634,  1316,   670,   671,   689,   705,
    1635,   709,  1636,   728,  1637,  1638,   729,  1639,  1640,  1641,
    1642,  1643,  1644,   740,  1645,  1646,  1647,  1648,  1649,  1425,
    1426,   730,   731,   732,   735,   736,   737,   741,   742,  1650,
     765,  1651,   769,  1652,   780,   804,   806,   808,   810,   820,
     818,   827,  1653,   828,  1654,  1655,  1656,  1657,  1658,  1659,
    1660,  1455,  1456,  1661,  1662,   830,   832,   831,   833,  1663,
     835,  1664,  1665,  1666,   836,  1667,   837,  1668,   838,  1669,
    1670,  1671,  1672,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   839,   514,  1904,  1905,
     840,  1673,  1674,  1675,  1909,   841,  1911,  1480,  1481,   842,
     843,  1676,   844,  1677,  1678,  1679,   846,   847,   848,   849,
    1680,   850,  1681,  1682,  1683,   851,   852,   853,  1684,   854,
     859,   861,  1685,  1686,   890,  1687,  1688,  1689,  1690,   862,
     863,   870,  1691,   492,   493,   494,   495,   496,   497,   498,
     874,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   880,   514,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     884,   514,   885,  1692,  1693,  1694,  1695,  1696,   892,   893,
     894,   895,   899,   492,   493,   494,   495,   496,   497,   498,
     900,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   896,   514,   901,   902,
     903,   904,   906,   907,  2005,   908,   909,   924,   930,   932,
     940,   946,    16,   990,  1004,  2015,  1005,  1011,  1006,  1012,
    1013,   -71,  1056,  1047,  1050,  1697,  1698,  1699,  1700,  1701,
    1051,  1702,  1052,  1057,  1059,  1060,  1075,  1061,  1071,  1074,
    1072,  1084,   887,  1089,  1085,  1086,  1414,  1090,  1092,  1091,
    1117,  1093,  1096,  1101,  1118,   492,   493,   494,   495,   496,
     497,   498,  2043,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,  1115,   514,
    1116,  1119,  1121,  1127,  1137,  2061,  1138,  1125,  1141,  1144,
    2063,  1148,  1149,  1150,  1152,  1165,  1151,  1177,  1178,  2069,
    1181,  1182,  1187,  1197,  1205,  1200,  1199,  1224,  1225,  1226,
    1227,  1235,  2078,  2079,  1228,  1229,  1236,  1230,  1239,  1237,
    1241,  1238,  1240,  1242,  1243,  1244,   -73,  1271,  1274,  1276,
    1283,  1573,  1574,  1575,  1576,  1577,  1578,  1280,  1579,  1284,
    1580,  1296,  1297,  1293,  1581,  1582,  1583,  1319,  1584,  1320,
    1334,  1355,  1585,  1586,  1587,  1588,  1589,  1357,  1362,  1360,
    1295,  1298,  1368,  1321,  1374,  1322,  1590,  1332,  1333,  1348,
    1349,  1350,  1351,  1591,  1592,  1352,  1375,  1593,  1370,  1376,
    1379,  1380,  1594,  1595,  1596,  1597,  1598,  1381,  1386,  1599,
    1384,  1600,  1601,  1602,  1390,  1385,  1603,  1604,  1387,  1605,
    1606,  1607,  1392,  1395,  1396,  1608,  1397,  1406,  1411,  1398,
    1410,  1412,  1400,  1421,  1499,  1430,  1431,  1448,  1449,  1609,
    1450,  1744,  1488,  1503,  1610,  1451,  1452,  2150,  1507,  1611,
    1612,  1613,  1453,  1500,  1454,  1508,  1614,  1615,  1463,  1616,
    1617,  1618,  1619,  1466,  2162,  1620,  1469,  1861,  1622,  1623,
    1624,  1489,  1625,  1495,  1626,  1627,  1515,  1628,  1520,  1629,
    1630,  1516,  1631,  1632,  1633,  1634,  1497,  1525,  1526,  1530,
    1531,  1635,  1533,  1636,  1504,  1637,  1638,  1505,  1639,  1640,
    1641,  1642,  1643,  1644,  1546,  1645,  1646,  1647,  1648,  1649,
    1498,  1543,  1506,  1544,  1482,  1483,  1513,  1518,  1519,  1527,
    1650,  1528,  1651,  1529,  1652,  1532,  1549,  1550,  1551,  1553,
    1556,  1562,  1563,  1653,  1564,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,  1565,  1566,  1661,  1662,  2213,  1567,  1705,  1569,
    1663,  1570,  1664,  1665,  1666,  1707,  1667,  1704,  1668,  1709,
    1669,  1670,  1671,  1672,  1484,  1485,  1713,  1711,  1716,  1726,
    1723,  1724,  1749,  1725,  1729,  1750,  1754,  1743,  1756,  1780,
    1785,  1803,  1673,  1674,  1675,  1789,  1804,  1805,  1806,  1807,
    1813,  1820,  1676,  1817,  1677,  1678,  1679,  1823,  1825,  1827,
    1835,  1680,  1832,  1681,  1682,  1683,  1834,  1845,  1848,  1684,
    1840,  1841,  1842,  1685,  1686,  1850,  1687,  1688,  1689,  1690,
    1847,  1853,  1859,  1691,   492,   493,   494,   495,   496,   497,
     498,  1854,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,  1745,   514,  1855,
    1868,  1871,  1856,  1870,  1869,  1874,  1876,  1877,  1879,  1881,
    1882,  1883,  1884,  1902,  1692,  1693,  1694,  1695,  1696,   492,
     493,   494,   495,   496,   497,   498,  1913,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,  1930,   514,  1912,  1906,  1573,  1574,  1575,  1576,
    1577,  1578,  1915,  1579,  1931,  1580,  1936,  1964,  1937,  1581,
    1582,  1583,  1938,  1584,  1940,  1965,  1967,  1585,  1586,  1587,
    1588,  1589,  1941,  1942,  1972,  1982,  1697,  1698,  1699,  1700,
    1701,  1590,  1702,  1978,  1980,  1979,  1993,  2003,  1591,  1592,
    1983,  1984,  1593,  2004,  2006,  2010,  2012,  1594,  1595,  1596,
    1597,  1598,  2016,  2017,  1599,  2022,  1600,  1601,  1602,  2026,
    2027,  1603,  1604,  2028,  1605,  1606,  1607,  2029,  2031,  2032,
    1608,  2035,  2044,  2046,  2052,  2053,  2047,  2062,  2056,  2048,
    2049,  2057,  2059,  2060,  1609,  2064,  2067,  2068,  2071,  1610,
    2070,  2072,  2073,  2080,  1611,  1612,  1613,  2074,  2077,  2086,
    2084,  1614,  1615,  2087,  1616,  1617,  1618,  1619,  2088,  2089,
    1620,  2090,  1989,  1622,  1623,  1624,  2093,  1625,  2102,  1626,
    1627,  2097,  1628,  2103,  1629,  1630,  2104,  1631,  1632,  1633,
    1634,  2109,  2110,  2111,  2113,  2114,  1635,  2116,  1636,  2117,
    1637,  1638,  2118,  1639,  1640,  1641,  1642,  1643,  1644,  2119,
    1645,  1646,  1647,  1648,  1649,  2120,  2124,  2139,  2121,  2128,
    2123,  2126,  2129,  2142,  2130,  1650,  2132,  1651,  2152,  1652,
    2133,  2155,  2134,  2143,  2144,  2156,  2157,  2158,  1653,  2159,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,  2160,  2161,  1661,
    1662,  2163,  2168,  2177,  2170,  1663,  2178,  1664,  1665,  1666,
    2180,  1667,  2186,  1668,  2185,  1669,  1670,  1671,  1672,  2189,
    2190,  2191,  2192,  2193,  2195,  2196,  2199,  2202,  2203,  1890,
    2204,  2206,  2207,  2208,  2210,  2211,  2214,  1673,  1674,  1675,
    2212,  2222,  2228,  2225,  2235,  2236,  2237,  1676,  2227,  1677,
    1678,  1679,  2230,  2231,  2244,  2232,  1680,  2241,  1681,  1682,
    1683,  2233,  2249,  2250,  1684,  2254,  2259,  2257,  1685,  1686,
    2268,  1687,  1688,  1689,  1690,  2281,  2290,  2287,  1691,   492,
     493,   494,   495,   496,   497,   498,  2291,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,  2292,   514,  2293,  1927,  1928,  2294,  2295,   306,
    1269,  1422,   665,  1959,  1812,  1514,  1903,  1207,   807,  1692,
    1693,  1694,  1695,  1696,   492,   493,   494,   495,   496,   497,
     498,   928,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   929,   514,   822,
     770,  1573,  1574,  1575,  1576,  1577,  1578,   365,  1579,   834,
    1580,  1077,  2229,   160,  1581,  1582,  1583,   658,  1584,  1190,
     936,  2013,  1585,  1586,  1587,  1588,  1589,  1737,  2034,  2269,
    1717,  1697,  1698,  1699,  1700,  1701,  1590,  1702,  1111,  1733,
     385,   632,  1844,  1591,  1592,     0,   860,  1593,     0,     0,
       0,     0,  1594,  1595,  1596,  1597,  1598,  1126,     0,  1599,
       0,  1600,  1601,  1602,     0,     0,  1603,  1604,     0,  1605,
    1606,  1607,     0,     0,     0,  1608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,     0,     0,     0,  1610,     0,     0,     0,     0,  1611,
    1612,  1613,     0,     0,     0,     0,  1614,  1615,     0,  1616,
    1617,  1618,  1619,     0,     0,  1620,     0,  1992,  1622,  1623,
    1624,     0,  1625,     0,  1626,  1627,     0,  1628,     0,  1629,
    1630,     0,  1631,  1632,  1633,  1634,     0,     0,     0,     0,
       0,  1635,     0,  1636,     0,  1637,  1638,     0,  1639,  1640,
    1641,  1642,  1643,  1644,     0,  1645,  1646,  1647,  1648,  1649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1650,     0,  1651,     0,  1652,     0,     0,     0,     0,     0,
       0,     0,     0,  1653,     0,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,     0,     0,  1661,  1662,     0,     0,     0,     0,
    1663,     0,  1664,  1665,  1666,     0,  1667,     0,  1668,     0,
    1669,  1670,  1671,  1672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1673,  1674,  1675,     0,     0,     0,     0,     0,
       0,     0,  1676,     0,  1677,  1678,  1679,     0,     0,     0,
       0,  1680,     0,  1681,  1682,  1683,     0,     0,     0,  1684,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,     0,  1691,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,   939,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1692,  1693,  1694,  1695,  1696,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,   952,  1573,  1574,  1575,  1576,
    1577,  1578,     0,  1579,     0,  1580,     0,     0,     0,  1581,
    1582,  1583,     0,  1584,     0,     0,     0,  1585,  1586,  1587,
    1588,  1589,     0,     0,     0,     0,  1697,  1698,  1699,  1700,
    1701,  1590,  1702,     0,     0,     0,     0,     0,  1591,  1592,
       0,     0,  1593,     0,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,  1599,     0,  1600,  1601,  1602,     0,
       0,  1603,  1604,     0,  1605,  1606,  1607,     0,     0,     0,
    1608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1609,     0,     0,     0,     0,  1610,
       0,     0,     0,     0,  1611,  1612,  1613,     0,     0,     0,
       0,  1614,  1615,     0,  1616,  1617,  1618,  1619,     0,     0,
    1620,     0,  1997,  1622,  1623,  1624,     0,  1625,     0,  1626,
    1627,     0,  1628,     0,  1629,  1630,     0,  1631,  1632,  1633,
    1634,     0,     0,     0,     0,     0,  1635,     0,  1636,     0,
    1637,  1638,     0,  1639,  1640,  1641,  1642,  1643,  1644,     0,
    1645,  1646,  1647,  1648,  1649,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1650,     0,  1651,     0,  1652,
       0,     0,     0,     0,     0,     0,     0,     0,  1653,     0,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,     0,     0,  1661,
    1662,     0,     0,     0,     0,  1663,     0,  1664,  1665,  1666,
       0,  1667,     0,  1668,     0,  1669,  1670,  1671,  1672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1673,  1674,  1675,
       0,     0,     0,     0,     0,     0,     0,  1676,     0,  1677,
    1678,  1679,     0,     0,     0,     0,  1680,     0,  1681,  1682,
    1683,     0,     0,     0,  1684,     0,     0,     0,  1685,  1686,
       0,  1687,  1688,  1689,  1690,     0,     0,     0,  1691,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,     0,   955,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1692,
    1693,  1694,  1695,  1696,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
     958,  1573,  1574,  1575,  1576,  1577,  1578,     0,  1579,     0,
    1580,     0,     0,     0,  1581,  1582,  1583,     0,  1584,     0,
       0,     0,  1585,  1586,  1587,  1588,  1589,     0,     0,     0,
       0,  1697,  1698,  1699,  1700,  1701,  1590,  1702,     0,     0,
       0,     0,     0,  1591,  1592,     0,     0,  1593,     0,     0,
       0,     0,  1594,  1595,  1596,  1597,  1598,     0,     0,  1599,
       0,  1600,  1601,  1602,     0,     0,  1603,  1604,     0,  1605,
    1606,  1607,     0,     0,     0,  1608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,     0,     0,     0,  1610,     0,     0,     0,     0,  1611,
    1612,  1613,     0,     0,     0,     0,  1614,  1615,     0,  1616,
    1617,  1618,  1619,     0,     0,  1620,     0,  1998,  1622,  1623,
    1624,     0,  1625,     0,  1626,  1627,     0,  1628,     0,  1629,
    1630,     0,  1631,  1632,  1633,  1634,     0,     0,     0,     0,
       0,  1635,     0,  1636,     0,  1637,  1638,     0,  1639,  1640,
    1641,  1642,  1643,  1644,     0,  1645,  1646,  1647,  1648,  1649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1650,     0,  1651,     0,  1652,     0,     0,     0,     0,     0,
       0,     0,     0,  1653,     0,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,     0,     0,  1661,  1662,     0,     0,     0,     0,
    1663,     0,  1664,  1665,  1666,     0,  1667,     0,  1668,     0,
    1669,  1670,  1671,  1672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1673,  1674,  1675,     0,     0,     0,     0,     0,
       0,     0,  1676,     0,  1677,  1678,  1679,     0,     0,     0,
       0,  1680,     0,  1681,  1682,  1683,     0,     0,     0,  1684,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,     0,  1691,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,   956,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1692,  1693,  1694,  1695,  1696,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,   959,  1573,  1574,  1575,  1576,
    1577,  1578,     0,  1579,     0,  1580,     0,     0,     0,  1581,
    1582,  1583,     0,  1584,     0,     0,     0,  1585,  1586,  1587,
    1588,  1589,     0,     0,     0,     0,  1697,  1698,  1699,  1700,
    1701,  1590,  1702,     0,     0,     0,     0,     0,  1591,  1592,
       0,     0,  1593,     0,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,  1599,     0,  1600,  1601,  1602,     0,
       0,  1603,  1604,     0,  1605,  1606,  1607,     0,     0,     0,
    1608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1609,     0,     0,     0,     0,  1610,
       0,     0,     0,     0,  1611,  1612,  1613,     0,     0,     0,
       0,  1614,  1615,     0,  1616,  1617,  1618,  1619,     0,     0,
    1620,     0,  1999,  1622,  1623,  1624,     0,  1625,     0,  1626,
    1627,     0,  1628,     0,  1629,  1630,     0,  1631,  1632,  1633,
    1634,     0,     0,     0,     0,     0,  1635,     0,  1636,     0,
    1637,  1638,     0,  1639,  1640,  1641,  1642,  1643,  1644,     0,
    1645,  1646,  1647,  1648,  1649,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1650,     0,  1651,     0,  1652,
       0,     0,     0,     0,     0,     0,     0,     0,  1653,     0,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,     0,     0,  1661,
    1662,     0,     0,     0,     0,  1663,     0,  1664,  1665,  1666,
       0,  1667,     0,  1668,     0,  1669,  1670,  1671,  1672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1673,  1674,  1675,
       0,     0,     0,     0,     0,     0,     0,  1676,     0,  1677,
    1678,  1679,     0,     0,     0,     0,  1680,     0,  1681,  1682,
    1683,     0,     0,     0,  1684,     0,     0,     0,  1685,  1686,
       0,  1687,  1688,  1689,  1690,     0,     0,     0,  1691,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,     0,   957,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1692,
    1693,  1694,  1695,  1696,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
     960,  1573,  1574,  1575,  1576,  1577,  1578,     0,  1579,     0,
    1580,     0,     0,     0,  1581,  1582,  1583,     0,  1584,     0,
       0,     0,  1585,  1586,  1587,  1588,  1589,     0,     0,     0,
       0,  1697,  1698,  1699,  1700,  1701,  1590,  1702,     0,     0,
       0,     0,     0,  1591,  1592,     0,     0,  1593,     0,     0,
       0,     0,  1594,  1595,  1596,  1597,  1598,     0,     0,  1599,
       0,  1600,  1601,  1602,     0,     0,  1603,  1604,     0,  1605,
    1606,  1607,     0,     0,     0,  1608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,     0,     0,     0,  1610,     0,     0,     0,     0,  1611,
    1612,  1613,     0,     0,     0,     0,  1614,  1615,     0,  1616,
    1617,  1618,  1619,     0,     0,  1620,     0,  2000,  1622,  1623,
    1624,     0,  1625,     0,  1626,  1627,     0,  1628,     0,  1629,
    1630,     0,  1631,  1632,  1633,  1634,     0,     0,     0,     0,
       0,  1635,     0,  1636,     0,  1637,  1638,     0,  1639,  1640,
    1641,  1642,  1643,  1644,     0,  1645,  1646,  1647,  1648,  1649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1650,     0,  1651,     0,  1652,     0,     0,     0,     0,     0,
       0,     0,     0,  1653,     0,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,     0,     0,  1661,  1662,     0,     0,     0,     0,
    1663,     0,  1664,  1665,  1666,     0,  1667,     0,  1668,     0,
    1669,  1670,  1671,  1672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1673,  1674,  1675,     0,     0,     0,     0,     0,
       0,     0,  1676,     0,  1677,  1678,  1679,     0,     0,     0,
       0,  1680,     0,  1681,  1682,  1683,     0,     0,     0,  1684,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,     0,  1691,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,   964,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1692,  1693,  1694,  1695,  1696,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,   961,  1573,  1574,  1575,  1576,
    1577,  1578,     0,  1579,     0,  1580,     0,     0,     0,  1581,
    1582,  1583,     0,  1584,     0,     0,     0,  1585,  1586,  1587,
    1588,  1589,     0,     0,     0,     0,  1697,  1698,  1699,  1700,
    1701,  1590,  1702,     0,     0,     0,     0,     0,  1591,  1592,
       0,     0,  1593,     0,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,  1599,     0,  1600,  1601,  1602,     0,
       0,  1603,  1604,     0,  1605,  1606,  1607,     0,     0,     0,
    1608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1609,     0,     0,     0,     0,  1610,
       0,     0,     0,     0,  1611,  1612,  1613,     0,     0,     0,
       0,  1614,  1615,     0,  1616,  1617,  1618,  1619,     0,     0,
    1620,     0,  2001,  1622,  1623,  1624,     0,  1625,     0,  1626,
    1627,     0,  1628,     0,  1629,  1630,     0,  1631,  1632,  1633,
    1634,     0,     0,     0,     0,     0,  1635,     0,  1636,     0,
    1637,  1638,     0,  1639,  1640,  1641,  1642,  1643,  1644,     0,
    1645,  1646,  1647,  1648,  1649,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1650,     0,  1651,     0,  1652,
       0,     0,     0,     0,     0,     0,     0,     0,  1653,     0,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,     0,     0,  1661,
    1662,     0,     0,     0,     0,  1663,     0,  1664,  1665,  1666,
       0,  1667,     0,  1668,     0,  1669,  1670,  1671,  1672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1673,  1674,  1675,
       0,     0,     0,     0,     0,     0,     0,  1676,     0,  1677,
    1678,  1679,     0,     0,     0,     0,  1680,     0,  1681,  1682,
    1683,     0,     0,     0,  1684,     0,     0,     0,  1685,  1686,
       0,  1687,  1688,  1689,  1690,     0,     0,     0,  1691,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,     0,   965,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1692,
    1693,  1694,  1695,  1696,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
     962,  1573,  1574,  1575,  1576,  1577,  1578,     0,  1579,     0,
    1580,     0,     0,     0,  1581,  1582,  1583,     0,  1584,     0,
       0,     0,  1585,  1586,  1587,  1588,  1589,     0,     0,     0,
       0,  1697,  1698,  1699,  1700,  1701,  1590,  1702,     0,     0,
       0,     0,     0,  1591,  1592,     0,     0,  1593,     0,     0,
       0,     0,  1594,  1595,  1596,  1597,  1598,     0,     0,  1599,
       0,  1600,  1601,  1602,     0,     0,  1603,  1604,     0,  1605,
    1606,  1607,     0,     0,     0,  1608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,     0,     0,     0,  1610,     0,     0,     0,     0,  1611,
    1612,  1613,     0,     0,     0,     0,  1614,  1615,     0,  1616,
    1617,  1618,  1619,     0,     0,  1620,     0,  2002,  1622,  1623,
    1624,     0,  1625,     0,  1626,  1627,     0,  1628,     0,  1629,
    1630,     0,  1631,  1632,  1633,  1634,     0,     0,     0,     0,
       0,  1635,     0,  1636,     0,  1637,  1638,     0,  1639,  1640,
    1641,  1642,  1643,  1644,     0,  1645,  1646,  1647,  1648,  1649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1650,     0,  1651,     0,  1652,     0,     0,     0,     0,     0,
       0,     0,     0,  1653,     0,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,     0,     0,  1661,  1662,     0,     0,     0,     0,
    1663,     0,  1664,  1665,  1666,     0,  1667,     0,  1668,     0,
    1669,  1670,  1671,  1672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1673,  1674,  1675,     0,     0,     0,     0,     0,
       0,     0,  1676,     0,  1677,  1678,  1679,     0,     0,     0,
       0,  1680,     0,  1681,  1682,  1683,     0,     0,     0,  1684,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,     0,  1691,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,   966,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1692,  1693,  1694,  1695,  1696,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,   963,  1573,  1574,  1575,  1576,
    1577,  1578,     0,  1579,     0,  1580,     0,     0,     0,  1581,
    1582,  1583,     0,  1584,     0,     0,     0,  1585,  1586,  1587,
    1588,  1589,     0,     0,     0,     0,  1697,  1698,  1699,  1700,
    1701,  1590,  1702,     0,     0,     0,     0,     0,  1591,  1592,
       0,     0,  1593,     0,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,  1599,     0,  1600,  1601,  1602,     0,
       0,  1603,  1604,     0,  1605,  1606,  1607,     0,     0,     0,
    1608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1609,     0,     0,     0,     0,  1610,
       0,     0,     0,     0,  1611,  1612,  1613,     0,     0,     0,
       0,  1614,  1615,     0,  1616,  1617,  1618,  1619,     0,     0,
    1620,     0,  2082,  1622,  1623,  1624,     0,  1625,     0,  1626,
    1627,     0,  1628,     0,  1629,  1630,     0,  1631,  1632,  1633,
    1634,     0,     0,     0,     0,     0,  1635,     0,  1636,     0,
    1637,  1638,     0,  1639,  1640,  1641,  1642,  1643,  1644,     0,
    1645,  1646,  1647,  1648,  1649,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1650,     0,  1651,     0,  1652,
       0,     0,     0,     0,     0,     0,     0,     0,  1653,     0,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,     0,     0,  1661,
    1662,     0,     0,     0,     0,  1663,     0,  1664,  1665,  1666,
       0,  1667,     0,  1668,     0,  1669,  1670,  1671,  1672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1673,  1674,  1675,
       0,     0,     0,     0,     0,     0,     0,  1676,     0,  1677,
    1678,  1679,     0,     0,     0,     0,  1680,     0,  1681,  1682,
    1683,     0,     0,     0,  1684,     0,     0,     0,  1685,  1686,
       0,  1687,  1688,  1689,  1690,     0,     0,     0,  1691,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,     0,   967,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1692,
    1693,  1694,  1695,  1696,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
     968,  1573,  1574,  1575,  1576,  1577,  1578,     0,  1579,     0,
    1580,     0,     0,     0,  1581,  1582,  1583,     0,  1584,     0,
       0,     0,  1585,  1586,  1587,  1588,  1589,     0,     0,     0,
       0,  1697,  1698,  1699,  1700,  1701,  1590,  1702,     0,     0,
       0,     0,     0,  1591,  1592,     0,     0,  1593,     0,     0,
       0,     0,  1594,  1595,  1596,  1597,  1598,     0,     0,  1599,
       0,  1600,  1601,  1602,     0,     0,  1603,  1604,     0,  1605,
    1606,  1607,     0,     0,     0,  1608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,     0,     0,     0,  1610,     0,     0,     0,     0,  1611,
    1612,  1613,     0,     0,     0,     0,  1614,  1615,     0,  1616,
    1617,  1618,  1619,     0,     0,  1620,     0,  2083,  1622,  1623,
    1624,     0,  1625,     0,  1626,  1627,     0,  1628,     0,  1629,
    1630,     0,  1631,  1632,  1633,  1634,     0,     0,     0,     0,
       0,  1635,     0,  1636,     0,  1637,  1638,     0,  1639,  1640,
    1641,  1642,  1643,  1644,     0,  1645,  1646,  1647,  1648,  1649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1650,     0,  1651,     0,  1652,     0,     0,     0,     0,     0,
       0,     0,     0,  1653,     0,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,     0,     0,  1661,  1662,     0,     0,     0,     0,
    1663,     0,  1664,  1665,  1666,     0,  1667,     0,  1668,     0,
    1669,  1670,  1671,  1672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1673,  1674,  1675,     0,     0,     0,     0,     0,
       0,     0,  1676,     0,  1677,  1678,  1679,     0,     0,     0,
       0,  1680,     0,  1681,  1682,  1683,     0,     0,     0,  1684,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,     0,  1691,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,   969,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1692,  1693,  1694,  1695,  1696,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,   972,  1573,  1574,  1575,  1576,
    1577,  1578,     0,  1579,     0,  1580,     0,     0,     0,  1581,
    1582,  1583,     0,  1584,     0,     0,     0,  1585,  1586,  1587,
    1588,  1589,     0,     0,     0,     0,  1697,  1698,  1699,  1700,
    1701,  1590,  1702,     0,     0,     0,     0,     0,  1591,  1592,
       0,     0,  1593,     0,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,  1599,     0,  1600,  1601,  1602,     0,
       0,  1603,  1604,     0,  1605,  1606,  1607,     0,     0,     0,
    1608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1609,     0,     0,     0,     0,  1610,
       0,     0,     0,     0,  1611,  1612,  1613,     0,     0,     0,
       0,  1614,  1615,     0,  1616,  1617,  1618,  1619,     0,     0,
    1620,     0,  2148,  1622,  1623,  1624,     0,  1625,     0,  1626,
    1627,     0,  1628,     0,  1629,  1630,     0,  1631,  1632,  1633,
    1634,     0,     0,     0,     0,     0,  1635,     0,  1636,     0,
    1637,  1638,     0,  1639,  1640,  1641,  1642,  1643,  1644,     0,
    1645,  1646,  1647,  1648,  1649,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1650,     0,  1651,     0,  1652,
       0,     0,     0,     0,     0,     0,     0,     0,  1653,     0,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,     0,     0,  1661,
    1662,     0,     0,     0,     0,  1663,     0,  1664,  1665,  1666,
       0,  1667,     0,  1668,     0,  1669,  1670,  1671,  1672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1673,  1674,  1675,
       0,     0,     0,     0,     0,     0,     0,  1676,     0,  1677,
    1678,  1679,     0,     0,     0,     0,  1680,     0,  1681,  1682,
    1683,     0,     0,     0,  1684,     0,     0,     0,  1685,  1686,
       0,  1687,  1688,  1689,  1690,     0,     0,     0,  1691,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,     0,   970,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1692,
    1693,  1694,  1695,  1696,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
     973,  1573,  1574,  1575,  1576,  1577,  1578,     0,  1579,     0,
    1580,     0,     0,     0,  1581,  1582,  1583,     0,  1584,     0,
       0,     0,  1585,  1586,  1587,  1588,  1589,     0,     0,     0,
       0,  1697,  1698,  1699,  1700,  1701,  1590,  1702,     0,     0,
       0,     0,     0,  1591,  1592,     0,     0,  1593,     0,     0,
       0,     0,  1594,  1595,  1596,  1597,  1598,     0,     0,  1599,
       0,  1600,  1601,  1602,     0,     0,  1603,  1604,     0,  1605,
    1606,  1607,     0,     0,     0,  1608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,     0,     0,     0,  1610,     0,     0,     0,     0,  1611,
    1612,  1613,     0,     0,     0,     0,  1614,  1615,     0,  1616,
    1617,  1618,  1619,     0,     0,  1620,     0,  2149,  1622,  1623,
    1624,     0,  1625,     0,  1626,  1627,     0,  1628,     0,  1629,
    1630,     0,  1631,  1632,  1633,  1634,     0,     0,     0,     0,
       0,  1635,     0,  1636,     0,  1637,  1638,     0,  1639,  1640,
    1641,  1642,  1643,  1644,     0,  1645,  1646,  1647,  1648,  1649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1650,     0,  1651,     0,  1652,     0,     0,     0,     0,     0,
       0,     0,     0,  1653,     0,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,     0,     0,  1661,  1662,     0,     0,     0,     0,
    1663,     0,  1664,  1665,  1666,     0,  1667,     0,  1668,     0,
    1669,  1670,  1671,  1672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1673,  1674,  1675,     0,     0,     0,     0,     0,
       0,     0,  1676,     0,  1677,  1678,  1679,     0,     0,     0,
       0,  1680,     0,  1681,  1682,  1683,     0,     0,     0,  1684,
       0,     0,     0,  1685,  1686,     0,  1687,  1688,  1689,  1690,
       0,     0,     0,  1691,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,   971,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1692,  1693,  1694,  1695,  1696,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,   974,  1573,  1574,  1575,  1576,
    1577,  1578,     0,  1579,     0,  1580,     0,     0,     0,  1581,
    1582,  1583,     0,  1584,     0,     0,     0,  1585,  1586,  1587,
    1588,  1589,     0,     0,     0,     0,  1697,  1698,  1699,  1700,
    1701,  1590,  1702,     0,     0,     0,     0,     0,  1591,  1592,
       0,     0,  1593,     0,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,  1599,     0,  1600,  1601,  1602,     0,
       0,  1603,  1604,     0,  1605,  1606,  1607,     0,     0,     0,
    1608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1609,     0,     0,     0,     0,  1610,
       0,     0,     0,     0,  1611,  1612,  1613,     0,     0,     0,
       0,  1614,  1615,     0,  1616,  1617,  1618,  1619,     0,     0,
    1620,     0,  2183,  1622,  1623,  1624,     0,  1625,     0,  1626,
    1627,     0,  1628,     0,  1629,  1630,     0,  1631,  1632,  1633,
    1634,     0,     0,     0,     0,     0,  1635,     0,  1636,     0,
    1637,  1638,     0,  1639,  1640,  1641,  1642,  1643,  1644,     0,
    1645,  1646,  1647,  1648,  1649,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1650,     0,  1651,     0,  1652,
       0,     0,     0,     0,     0,     0,     0,     0,  1653,     0,
    1654,  1655,  1656,  1657,  1658,  1659,  1660,     0,     0,  1661,
    1662,     0,     0,     0,     0,  1663,     0,  1664,  1665,  1666,
       0,  1667,     0,  1668,     0,  1669,  1670,  1671,  1672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,     0,  1673,  1674,  1675,
       0,     0,     0,     0,   172,   173,     0,  1676,     0,  1677,
    1678,  1679,   174,   175,     0,     0,  1680,     0,  1681,  1682,
    1683,     0,     0,     0,  1684,   176,     0,     0,  1685,  1686,
       0,  1687,  1688,  1689,  1690,     0,     0,     0,  1691,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   178,
       0,     0,   179,   180,     0,     0,   977,     0,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,     0,  1692,
    1693,  1694,  1695,  1696,     0,     0,     0,     0,   182,     0,
       0,     0,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1697,  1698,  1699,  1700,  1701,     0,  1702,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,   492,   493,
     494,   495,   496,   497,   498,   186,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,   188,     0,
       0,     0,     0,     0,     0,   189,   190,     0,     0,     0,
     191,     0,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   192,   514,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,     0,     0,   287,   166,   167,
     168,   169,   170,   171,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,     0,     0,     0,     0,     0,     0,
     174,   492,   493,   494,   495,   496,   497,   498,     0,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   675,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   178,     0,     0,
     179,   180,   492,   493,   494,   495,   496,   497,   498,   181,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   492,   493,   494,
     495,   496,   497,   498,     0,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,   495,   496,
     497,   498,     0,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   676,   514,
     984,     0,     0,   185,     0,     0,   492,   493,   494,   495,
     496,   497,   498,   186,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,   492,   493,   494,
     495,   496,   497,   498,   985,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,     0,     0,   677,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,     0,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,   280,   281,   282,     0,     0,     0,     0,   283,
     284,   285,   286,     0,     0,   287,   166,   167,   168,   169,
     170,   171,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   173,     0,   986,     0,     0,     0,     0,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   786,     0,     0,     0,   787,     0,   492,   493,   494,
     495,   496,   497,   498,     0,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     177,   514,     0,     0,   987,   178,     0,     0,   179,   180,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,   492,   493,   494,   495,   496,   497,   498,   999,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   492,   493,   494,
     495,   496,   497,   498,  1000,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1001,     0,
       0,   185,     0,     0,   492,   493,   494,   495,   496,   497,
     498,   186,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1003,
       0,     0,     0,   187,     0,     0,     0,     0,     0,     0,
     788,   492,   493,   494,   495,   496,   497,   498,     0,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,     0,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,     0,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     280,   281,   282,     0,     0,     0,     0,   283,   284,   285,
     286,     0,     0,   789,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1014,
     492,   493,   494,   495,   496,   497,   498,     0,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
       0,     0,     0,     0,  1023,   181,   492,   493,   494,   495,
     496,   497,   498,     0,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,  1024,
     514,   492,   493,   494,   495,   496,   497,   498,     0,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,  1025,   514,   492,   493,   494,   495,
     496,   497,   498,     0,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1026,     0,     0,   185,
       0,     0,   492,   493,   494,   495,   496,   497,   498,   186,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   187,     0,  1027,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,     0,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   280,   281,
     282,     0,     0,     0,     0,   283,   284,   285,   286,     0,
       0,   287,   166,   167,   168,   169,   170,   171,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   173,     0,     0,
       0,     0,     0,     0,   174,   716,     0,     0,     0,     0,
       0,     0,  1028,   492,   493,   494,   495,   496,   497,   498,
       0,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,     0,   514,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   178,     0,     0,   179,   180,     0,     0,  1029,     0,
       0,     0,     0,   181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   492,   493,   494,   495,
     496,   497,   498,  1030,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   492,   493,   494,   495,   496,   497,   498,  1036,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   492,   493,   494,   495,
     496,   497,   498,     0,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,  1040,     0,     0,   185,     0,     0,
     492,   493,   494,   495,   496,   497,   498,   186,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1198,     0,     0,   187,
     492,   493,   494,   495,   496,   497,   498,     0,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     0,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   280,   281,   282,     0,
       0,     0,     0,   283,   284,   285,   286,     0,     0,   287,
     166,   167,   168,   169,   170,   171,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   173,     0,     0,     0,     0,
       0,     0,   174,     0,     0,  1435,   492,   493,   494,   495,
     496,   497,   498,     0,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   178,
       0,     0,   179,   180,     0,     0,     0,     0,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,  1436,     0,
     492,   493,   494,   495,   496,   497,   498,     0,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,  1447,   514,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   953,     0,
       0,   492,   493,   494,   495,   496,   497,   498,  1457,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1473,     0,     0,   185,     0,     0,   492,   493,
     494,   495,   496,   497,   498,   186,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1474,     0,     0,     0,     0,   187,   492,   493,
     494,   495,   496,   497,   498,     0,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,     0,     0,   287,   166,   167,
     168,   169,   170,   171,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,     0,     0,     0,     0,  1475,     0,
     174,   492,   493,   494,   495,   496,   497,   498,     0,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   178,     0,     0,
     179,   180,     0,     0,     0,     0,     0,     0,     0,   181,
       0,     0,  1478,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   492,   493,   494,   495,
     496,   497,   498,  1408,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,  1479,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,  1423,   492,   493,   494,
     495,   496,   497,   498,     0,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
    1951,   514,     0,   185,     0,     0,   492,   493,   494,   495,
     496,   497,   498,   186,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,     0,     0,     0,     0,     0,   989,
       0,     0,     0,     0,     0,   187,   492,   493,   494,   495,
     496,   497,   498,     0,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,     0,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,   280,   281,   282,     0,     0,     0,     0,   283,
     284,   285,   286,     0,     0,   287,   166,   167,   168,   169,
     170,   171,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   173,  1424,     0,     0,     0,     0,     0,   174,   492,
     493,   494,   495,   496,   497,   498,     0,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,   178,     0,     0,   179,   180,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   978,     0,     0,
       0,     0,     0,     0,   492,   493,   494,   495,   496,   497,
     498,  1413,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   492,   493,   494,   495,   496,   497,   498,   980,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
       0,   185,     0,     0,   492,   493,   494,   495,   496,   497,
     498,   186,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,     0,     0,     0,     0,     0,     0,   982,     0,     0,
       0,     0,     0,   187,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,     0,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,     0,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     280,   281,   282,     0,     0,     0,     0,   283,   284,   285,
     286,     0,     0,   287,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
     991,     0,     0,     0,     0,     0,   174,   492,   493,   494,
     495,   496,   497,   498,     0,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   992,     0,     0,     0,     0,
       0,     0,   492,   493,   494,   495,   496,   497,   498,  1908,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,     0,     0,
       0,     0,   993,   492,   493,   494,   495,   496,   497,   498,
       0,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,     0,   514,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,   185,
       0,     0,   492,   493,   494,   495,   496,   497,   498,   186,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,     0,     0,
       0,     0,     0,     0,     0,   995,     0,     0,     0,     0,
       0,   187,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     0,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   280,   281,
     282,     0,     0,     0,     0,   283,   284,   285,   286,     0,
       0,   287,   166,   167,   168,   169,   170,   171,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   173,   996,     0,
       0,     0,     0,     0,   174,   492,   493,   494,   495,   496,
     497,   498,     0,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,     0,   514,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   178,     0,     0,   179,   180,     0,     0,     0,     0,
       0,     0,     0,   181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   997,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1910,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   492,   493,   494,
     495,   496,   497,   498,   998,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,     0,     0,
       0,     0,     0,  1002,     0,     0,     0,   185,     0,     0,
     492,   493,   494,   495,   496,   497,   498,   186,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,     0,     0,     0,     0,     0,
       0,     0,     0,  1015,     0,     0,     0,     0,     0,   187,
     492,   493,   494,   495,   496,   497,   498,     0,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     0,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   280,   281,   282,     0,
       0,     0,     0,   283,   284,   285,   286,     0,     0,   287,
     166,   167,   168,   169,   170,   171,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   173,  1016,     0,     0,     0,
       0,     0,   174,   492,   493,   494,   495,   496,   497,   498,
       0,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,     0,   514,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   178,
       0,     0,   179,   180,   492,   493,   494,   495,   496,   497,
     498,   181,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,   492,   493,   494,   495,   496,   497,   498,  1017,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   492,   493,   494,   495,
     496,   497,   498,  1018,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,  -715,  -715,  -715,  -715,     0,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,  1019,   514,     0,     0,   185,     0,     0,   492,   493,
     494,   495,   496,   497,   498,   186,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,     0,     0,     0,     0,     0,
       0,  1020,     0,     0,     0,     0,     0,   187,   492,   493,
     494,   495,   496,   497,   498,     0,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   280,   281,   282,     0,     0,     0,
       0,   283,   284,   285,   286,     0,     0,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   492,   493,   494,
     495,   496,   497,   498,  1021,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,   492,   493,
     494,   495,   496,   497,   498,  1022,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,   492,   493,   494,   495,   496,
     497,   498,  1033,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     492,   493,   494,   495,   496,   497,   498,  1034,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   492,   493,   494,   495,   496,
     497,   498,     0,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,     0,   514,
       0,     0,   492,   493,   494,   495,   496,   497,   498,  1035,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   492,   493,   494,   495,   496,   497,   498,  1039,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   492,   493,   494,
     495,   496,   497,   498,     0,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   492,   493,   494,
     495,   496,   497,   498,     0,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   492,   493,   494,
     495,   496,   497,   498,     0,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,     0,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,  1064,     0,
     492,   493,   494,   495,   496,   497,   498,     0,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,  1427,   514,     0,   492,   493,   494,   495,
     496,   497,   498,     0,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,  1432,
     514,   492,   493,   494,   495,   496,   497,   498,     0,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,  1433,     0,   492,   493,
     494,   495,   496,   497,   498,     0,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,  1434,   514,   492,   493,   494,   495,   496,   497,   498,
       0,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,  1437,   514,   492,   493,
     494,   495,   496,   497,   498,     0,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,  1438,   492,   493,   494,   495,   496,   497,
     498,     0,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,     0,     0,     0,     0,     0,   492,   493,   494,   495,
     496,   497,   498,  1439,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   492,   493,   494,   495,   496,   497,   498,  1440,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   492,   493,   494,   495,
     496,   497,   498,  1441,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   492,   493,   494,   495,   496,   497,   498,  1442,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   492,   493,   494,   495,
     496,   497,   498,  1445,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   492,   493,   494,   495,   496,   497,   498,  1446,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   492,   493,   494,   495,
     496,   497,   498,  1458,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,   492,   493,   494,   495,   496,   497,
     498,  1459,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
     492,   493,   494,   495,   496,   497,   498,  1472,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   492,   493,   494,   495,   496,
     497,   498,  1476,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,     0,   514,
       0,     0,   492,   493,   494,   495,   496,   497,   498,  1477,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   492,   493,   494,
     495,   496,   497,   498,  1486,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   492,   493,   494,   495,   496,   497,   498,  1487,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,     0,   514,     0,   492,   493,
     494,   495,   496,   497,   498,  1557,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,     0,     0,     0,     0,     0,
     492,   493,   494,   495,   496,   497,   498,  1759,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   492,   493,   494,   495,   496,
     497,   498,  1824,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     492,   493,   494,   495,   496,   497,   498,  1885,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   492,   493,   494,   495,   496,
     497,   498,  1916,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     492,   493,   494,   495,   496,   497,   498,  1917,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   492,   493,   494,   495,   496,
     497,   498,  1918,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     492,   493,   494,   495,   496,   497,   498,  1919,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,     0,     0,     0,   492,   493,
     494,   495,   496,   497,   498,  1920,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,   492,   493,   494,   495,   496,   497,
     498,  1929,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,   492,
     493,   494,   495,   496,   497,   498,  1946,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,     0,   514,    58,     0,   492,   493,   494,   495,
     496,   497,   498,  1947,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   492,   493,   494,   495,   496,   497,   498,  1948,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   492,   493,   494,   495,
     496,   497,   498,  1949,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,     0,     0,     0,    59,     0,     0,     0,     0,  1950,
       0,    60,     0,   492,   493,   494,   495,   496,   497,   498,
       0,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,     0,   514,     0,     0,
       0,  1952,     0,     0,     0,     0,     0,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,  1953,     0,   492,   493,
     494,   495,   496,   497,   498,     0,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,  1975,   514,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1760,  1761,     0,     0,     0,  1762,     0,  1763,
       0,    64,     0,     0,     0,     0,  1981,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      66,     0,     0,     0,     0,     0,    67,     0,     0,     0,
       0,  1985,  1764,  1765,     0,  1766,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1990,     0,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   492,   493,   494,   495,   496,   497,
     498,  2092,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,     0,   514,     0,
       0,     0,   492,   493,   494,   495,   496,   497,   498,  2098,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,  1302,   514,     0,     0,     0,
       0,     0,     0,     0,     0,  2122,   576,   577,     0,   578,
       0,   579,   580,     0,  1303,     0,     0,     0,     0,     0,
    1304,     0,     0,  1305,     0,  1306,     0,   581,  1307,     0,
    2135,     0,     0,     0,     0,  1767,  1768,     0,     0,    71,
       0,     0,     0,  1308,     0,     0,     0,     0,     0,     0,
    1309,  1310,     0,     0,     0,     0,     0,  2145,     0,   582,
     583,   584,   585,     0,     0,     0,     0,     0,   586,     0,
       0,     0,     0,     0,     0,     0,     0,   587,     0,     0,
       0,     0,  2146,     0,     0,  1311,     0,   392,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   588,     0,     0,
       0,     0,  1312,     0,     0,   589,     0,  2184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     590,     0,     0,     0,     0,     0,     0,   591,     0,     0,
     592,     0,     0,   593,   594,     0,  1313,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     595,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1314,     0,     0,     0,     0,
       0,     0,     0,  1315,     0,     0,     0,     0,     0,     0,
       0,     0,   941,     0,   596,   597,     0,     0,   598,   599,
       0,     0,     0,     0,   600,     0,   601,     0,     0,     0,
       0,   602,   603,     0,     0,     0,     0,   604,     0,   605,
    1196,     0,     0,     0,     0,   606,     0,   607,     0,     0,
       0,     0,   608,     0,     0,     0,   492,   493,   494,   495,
     496,   497,   498,  1316,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   492,   493,   494,   495,   496,   497,   498,     0,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   492,   493,   494,   495,
     496,   497,   498,     0,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   492,   493,   494,   495,   496,   497,   498,     0,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1738,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,  1204,     0,     0,
       0,     0,     0,   492,   493,   494,   495,   496,   497,   498,
    1195,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,     0,   514,     0,     0,
       0,     0,     0,     0,     0,  1419,     0,     0,     0,   515,
       0,   492,   493,   494,   495,   496,   497,   498,  1739,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,     0,
     492,   493,   494,   495,   496,   497,   498,   983,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514,     0,     0,     0,   492,   493,
     494,   495,   496,   497,   498,  1049,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,     0,   514,     0,     0,     0,   492,   493,   494,   495,
     496,   497,   498,  1262,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   493,   494,   495,   496,   497,   498,     0,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,     0,   514
};

static const yytype_int16 yycheck[] =
{
      96,  1068,  1285,   304,  1121,  1152,  1082,  1083,   643,   535,
     294,   298,  1088,  1402,  1385,  1387,     5,   349,     3,  1136,
     131,    44,   103,     6,   131,   875,   876,   816,  1511,   149,
    1147,   881,     4,   883,    20,    18,    20,   149,     8,  1299,
    1300,  1723,    34,   154,     3,     4,     5,     6,     7,     8,
       4,  1173,    92,    73,    34,     3,    73,    82,  1318,    85,
      50,    46,   103,     3,  1729,   161,   162,   194,   119,   120,
      73,   298,    46,   119,   120,    38,   172,   173,   174,   366,
     261,   939,   178,   102,   107,   235,   194,   102,     6,   261,
      69,   211,   261,     3,   131,   268,   247,     3,   214,   211,
     192,    43,    18,     3,  1782,  1783,    16,   936,    66,   938,
      49,    50,   129,    66,   108,  1793,  1794,    95,     4,     5,
       6,     7,     3,    67,     3,    18,   129,    71,   199,     3,
      69,   247,     3,   152,    43,     3,   172,   115,     3,   102,
       3,   557,  1513,    10,    11,    12,    13,    14,    15,    16,
     235,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   261,    34,   271,   261,
     805,     3,   253,   268,   210,   149,   196,     0,    46,   196,
     268,    67,   126,   261,   254,  1043,   821,  1461,  1462,   152,
      90,   287,   263,   196,   188,   611,  1470,  1471,    79,    92,
      79,   382,   108,   240,   274,   188,    14,   179,   380,   382,
      18,   380,   253,   203,   162,    80,     3,     3,   269,   244,
     168,   235,   162,   269,   264,  1301,   205,   253,   168,   188,
     517,  1348,   382,   345,   253,   145,   256,   211,   253,   256,
     524,  1388,  1359,  1921,  1922,  1923,  1924,  1925,  1926,   365,
     192,  1360,   222,   256,   212,   382,  1373,  1935,   167,   212,
     380,  1939,   236,   179,  1524,  1943,   205,   379,   380,  1058,
     188,   382,  1755,   236,   382,   382,  1398,   231,   232,   382,
     190,   223,   271,   192,   379,   178,   151,   382,   236,     3,
     253,   926,   388,    80,   382,   380,   392,     3,   379,   192,
       3,   827,   380,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   223,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     313,   427,   428,   429,  2016,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,  2017,  1724,  1725,   642,   379,   453,   454,  1188,
       3,  1190,   458,   459,   151,   151,   380,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   381,
     486,   487,   488,   379,   379,   379,   492,   493,   494,   495,
     496,   381,  1260,   345,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,  1808,
     836,   837,   381,   519,    69,    69,     3,   375,   655,   525,
     846,   658,   380,   261,  1501,   375,   345,   151,     3,  1548,
     380,   327,   328,   329,   102,   151,   673,     3,   151,  2127,
    1567,  1560,  1569,  2131,   370,   371,   372,   373,   321,   322,
     323,   324,     3,     4,     5,     6,     7,     8,   261,    18,
     261,   128,     5,   134,   108,   271,   892,   893,   894,  1329,
       5,  1331,  1332,    57,   132,    34,  1595,    61,     3,     3,
      18,     3,   149,    82,   380,    20,     3,  1606,  1772,  1773,
    1774,  1775,  1776,  1777,   225,    94,    44,   236,   151,   236,
    1784,    93,  1884,  1902,  1788,   247,   383,  1626,  1792,  2197,
    2198,   247,  2200,  2201,    73,    58,   810,     3,  1811,   861,
     862,  1640,   253,    90,    46,   109,   197,   266,   112,   266,
    1649,   130,   187,   187,   640,  1071,    82,   195,  1074,   138,
      26,   247,   380,   127,   188,     3,    46,    66,    94,   108,
     205,   205,   144,   378,    92,    55,   131,   983,   984,   107,
      79,   667,   668,   147,   151,     3,   672,   134,     3,     3,
    1689,   155,   230,   679,   149,   243,   382,   380,   815,   380,
     235,   235,  1709,   150,   130,   151,   379,   380,  1715,   188,
      31,    32,   138,    34,     3,   262,   171,  2188,    10,    11,
      12,    13,    14,    15,    16,   916,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   380,    34,   198,     9,  2226,   151,   151,  1273,     3,
     197,    66,    66,  2224,  2225,    20,     3,   188,   237,    37,
     178,    71,   188,   211,    79,    79,    66,   214,  1734,   216,
    2251,  2252,    26,    73,   192,   222,    54,   150,  1084,  2250,
     244,   592,   246,     3,  2063,     5,   159,   598,    46,   600,
       3,    98,   271,    98,   150,   781,   782,    55,   784,  2280,
     247,   265,   151,   789,    10,    11,    12,    13,    14,    15,
      16,   237,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    36,    34,   129,
     241,    98,     3,   133,   141,   247,   141,    98,   148,   131,
       3,    98,   149,  1880,   149,  2124,  1845,   154,   158,    46,
     150,  1850,  1859,     3,    46,   381,   382,     3,    55,   159,
     150,    70,   172,    55,   171,     3,   171,  1874,     3,  1876,
     381,   382,   166,  1064,   141,   185,   381,   382,  2139,  1056,
     141,   382,   149,     3,   141,     3,    95,  2051,   149,   218,
     219,  2055,   149,  2066,   103,   382,   196,   381,   382,     3,
     210,   380,     3,   889,   171,   275,   115,    30,    31,    32,
     171,    34,   381,   382,   171,     3,  2195,    46,   365,    13,
      14,     3,    16,   233,   380,    19,   192,  1044,   275,    10,
      11,    12,    13,    14,    15,    16,  1053,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   192,    34,     3,   941,   256,   943,   380,    35,
      77,    78,     3,    39,   950,   951,   380,   953,   381,   382,
     379,   957,     3,   182,   381,   382,     4,     5,   964,   965,
     966,   967,   275,   969,   970,   971,     3,    63,  1987,   275,
     976,   977,    68,   979,   203,   381,   382,   381,   382,   985,
     986,   987,  1959,  2010,  2003,    81,   381,   382,  2172,  2173,
     192,  2175,  2176,   999,  1000,  1001,   275,  1003,   381,   382,
     381,   382,   381,   382,   381,   382,   102,   103,  1014,   381,
     382,   381,   382,     4,     5,   381,   382,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,   275,  1032,  1164,   381,   382,
    1036,   275,  1038,   275,  1040,   264,    26,    27,    28,    29,
      30,    31,    32,  1049,    34,  1051,  1052,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   152,    34,     4,  1065,
     275,  2080,   381,   382,  1390,   240,  1072,   163,   164,   165,
     382,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    34,     9,   381,   382,   381,
     382,   579,   580,   581,   582,   201,   584,   203,   379,   587,
     588,   589,   380,  1119,    34,   211,   594,   595,   596,   381,
     382,   599,   381,   382,  1261,   381,   382,  1264,   380,  1266,
      48,  1268,   868,   869,   380,   871,   872,   873,     3,   235,
     236,   877,   878,   879,   381,   382,   882,   381,   382,   381,
     382,   381,   382,   380,   250,   381,   382,   253,   381,   382,
     381,   382,   381,   382,    52,    53,   262,   381,   382,   382,
     381,   382,  1178,   381,   382,  1181,   381,   382,   381,   382,
     380,  1187,   381,   382,   381,   382,   381,   382,   381,   382,
    1196,   380,  1198,   381,   382,   381,   382,    46,  1204,  1205,
     381,   382,    10,    11,    12,    13,    14,    15,    16,   380,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    40,    34,   380,    10,    11,
      12,    13,    14,    15,    16,   380,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   380,    34,   381,   382,   380,  1262,    12,    13,    14,
      15,    16,   380,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    48,    34,
     381,   382,  1288,   381,   382,     3,   381,   382,   380,  1295,
     381,   382,   381,   382,   381,   382,   381,   382,    10,    11,
      12,    13,    14,    15,    16,   380,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   380,    34,    52,    53,   379,   380,    40,   381,   382,
      10,    11,    12,    13,    14,    15,    16,   380,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   380,    34,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   380,
      34,   379,   380,   380,  1380,   380,    10,    11,    12,    13,
      14,    15,    16,   380,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   380,
      34,   381,   382,   381,   382,   381,   382,    18,   381,   382,
     381,   382,   823,   824,  1060,  1061,   380,  1423,  1505,  1506,
    1426,   380,   380,   380,   380,   380,   380,   380,   380,  1435,
    1436,   380,    43,   380,    66,    46,   380,    48,   380,   380,
      51,  1447,   381,   382,   380,   380,   380,   380,   380,   380,
    1456,  1457,   380,   380,   380,    66,   380,   380,   380,   380,
     271,   380,    73,    74,   380,   380,   240,  1473,  1474,  1475,
     380,   380,  1478,  1479,   380,  1481,   380,  1483,   380,  1485,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   380,    34,  1499,  1500,   380,   380,   108,   380,   380,
     380,   380,  1508,  1509,   380,   380,   380,   380,   380,   380,
       3,     4,     5,     6,     7,     8,   380,    10,   380,    12,
     380,   380,  1528,    16,    17,    18,  1532,    20,   380,   380,
     380,    24,    25,    26,    27,    28,  1542,   380,   380,   380,
     380,   380,   380,   380,   380,    38,   380,   380,   159,   380,
    1556,   380,    45,    46,   380,   380,    49,   380,   380,   380,
     380,    54,    55,    56,    57,    58,   192,     3,    61,     3,
      63,    64,    65,   381,   382,    68,    69,   188,    71,    72,
      73,     3,   192,   275,    77,   196,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,    34,    91,   381,
     382,     3,   192,    96,   275,     3,     3,    26,   101,   102,
     103,     3,     3,     3,     3,   108,   109,     3,   111,   112,
     113,   114,     3,     3,   117,     3,   119,   120,   121,   122,
       3,   124,     3,   126,   127,     3,   129,     3,   131,   132,
      34,   134,   135,   136,   137,   256,     3,   383,   381,   381,
     143,   381,   145,   381,   147,   148,   381,   150,   151,   152,
     153,   154,   155,     5,   157,   158,   159,   160,   161,   381,
     382,   381,   381,   381,   381,   381,   381,   381,   381,   172,
     381,   174,   381,   176,   380,     3,     3,     3,     3,     3,
     381,   158,   185,   191,   187,   188,   189,   190,   191,   192,
     193,   381,   382,   196,   197,     3,   192,     3,   192,   202,
       3,   204,   205,   206,     3,   208,     3,   210,     3,   212,
     213,   214,   215,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     3,    34,  1744,  1745,
       3,   234,   235,   236,  1750,     3,  1752,   381,   382,     3,
       3,   244,     3,   246,   247,   248,     3,   240,     3,     3,
     253,     3,   255,   256,   257,     5,     3,   373,   261,     5,
       5,   380,   265,   266,     3,   268,   269,   270,   271,   380,
     380,   380,   275,    10,    11,    12,    13,    14,    15,    16,
      59,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   380,    34,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     380,    34,   380,   316,   317,   318,   319,   320,     3,     3,
       3,   381,     3,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   382,    34,   192,   381,
     192,    46,     3,   192,  1870,   275,     3,   193,     3,     3,
     381,   381,   236,   381,   344,  1881,   344,   381,   344,   344,
     344,   236,   131,   380,   380,   378,   379,   380,   381,   382,
     380,   384,   380,   382,   159,   159,     3,   159,   158,   158,
     192,     3,    34,     3,   217,   217,  1912,   240,     5,   240,
     188,     5,     5,     4,   383,    10,    11,    12,    13,    14,
      15,    16,  1928,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     5,    34,
       5,   380,   380,   263,   192,  1951,     3,   208,     3,   135,
    1956,     3,     3,   192,     3,     3,    89,    58,   174,  1965,
      20,   194,   380,    86,   156,   381,   383,     4,   344,   344,
     344,   380,  1978,  1979,   344,   344,   380,   344,     5,   380,
       5,   344,   344,   344,   380,   380,   236,   136,     3,   135,
       3,     3,     4,     5,     6,     7,     8,   381,    10,     3,
      12,   159,   159,   382,    16,    17,    18,     3,    20,     3,
      73,   263,    24,    25,    26,    27,    28,     3,   135,    55,
     380,   380,   240,   381,   192,   381,    38,   381,   381,   380,
     380,   380,   380,    45,    46,   380,     3,    49,   263,     3,
       3,   380,    54,    55,    56,    57,    58,   159,   159,    61,
     380,    63,    64,    65,     3,   380,    68,    69,   380,    71,
      72,    73,     4,     6,     4,    77,     4,   207,     3,   380,
     159,     3,   382,   380,    58,   381,   381,   381,   380,    91,
     380,   176,   381,   158,    96,   380,   380,  2093,     3,   101,
     102,   103,   380,   143,   380,    20,   108,   109,   380,   111,
     112,   113,   114,   380,  2110,   117,   380,   119,   120,   121,
     122,   381,   124,   381,   126,   127,     3,   129,     3,   131,
     132,     5,   134,   135,   136,   137,   381,   188,     3,    47,
       3,   143,     4,   145,   380,   147,   148,   380,   150,   151,
     152,   153,   154,   155,   208,   157,   158,   159,   160,   161,
     381,   159,   380,   159,   381,   382,   380,   380,   380,   380,
     172,   380,   174,   380,   176,   380,     5,   235,     4,     4,
     380,     3,     3,   185,     3,   187,   188,   189,   190,   191,
     192,   193,     3,     3,   196,   197,  2192,   380,     3,   380,
     202,   263,   204,   205,   206,   261,   208,   113,   210,   380,
     212,   213,   214,   215,   381,   382,     3,   263,   135,     3,
     380,   380,   253,   380,   380,    20,   192,   382,     4,   345,
     344,   381,   234,   235,   236,   344,   381,   381,   381,   381,
       3,     3,   244,   380,   246,   247,   248,    41,     3,     3,
      46,   253,     5,   255,   256,   257,     5,    55,     4,   261,
     380,   380,   380,   265,   266,    55,   268,   269,   270,   271,
     381,   381,   380,   275,    10,    11,    12,    13,    14,    15,
      16,   381,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   382,    34,   381,
     212,   271,   382,   380,   382,   380,   380,   263,   266,   380,
     159,   159,   380,     3,   316,   317,   318,   319,   320,    10,
      11,    12,    13,    14,    15,    16,    83,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    58,    34,   380,   382,     3,     4,     5,     6,
       7,     8,   381,    10,   193,    12,   380,     3,   381,    16,
      17,    18,   381,    20,   380,    20,    18,    24,    25,    26,
      27,    28,   381,   381,     3,   381,   378,   379,   380,   381,
     382,    38,   384,   380,   159,   380,     3,    55,    45,    46,
     381,   381,    49,     3,    73,   380,   131,    54,    55,    56,
      57,    58,   380,   380,    61,     3,    63,    64,    65,   380,
       3,    68,    69,    58,    71,    72,    73,    58,     3,     3,
      77,   380,     3,    58,   344,   344,   381,   209,   344,   381,
     381,   344,   381,   381,    91,   135,     3,   381,   202,    96,
     264,     3,     3,    55,   101,   102,   103,     5,     5,    72,
     381,   108,   109,   126,   111,   112,   113,   114,   151,   161,
     117,   270,   119,   120,   121,   122,   380,   124,   202,   126,
     127,   380,   129,     5,   131,   132,     3,   134,   135,   136,
     137,   199,    20,   382,     3,    96,   143,   381,   145,   381,
     147,   148,   381,   150,   151,   152,   153,   154,   155,   381,
     157,   158,   159,   160,   161,   381,     3,   154,   381,   380,
     382,   381,   380,     3,   381,   172,   380,   174,     5,   176,
     380,     3,   381,   381,   381,   381,     3,     3,   185,   380,
     187,   188,   189,   190,   191,   192,   193,   380,   380,   196,
     197,     3,     3,   226,   382,   202,   226,   204,   205,   206,
     380,   208,   202,   210,   381,   212,   213,   214,   215,     3,
       3,     3,    20,     3,     3,   381,   381,   175,   175,   382,
       3,   240,     3,     3,   381,   381,   235,   234,   235,   236,
     381,   380,   224,   380,     3,     5,     3,   244,   380,   246,
     247,   248,   381,   381,     5,   381,   253,   223,   255,   256,
     257,   381,   381,   380,   261,     3,   146,    92,   265,   266,
     266,   268,   269,   270,   271,   169,   192,   245,   275,    10,
      11,    12,    13,    14,    15,    16,   192,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   186,    34,   186,   381,   382,     5,     5,   103,
    1052,  1198,   393,  1812,  1502,  1292,  1743,   956,   519,   316,
     317,   318,   319,   320,    10,    11,    12,    13,    14,    15,
      16,   644,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   651,    34,   529,
     381,     3,     4,     5,     6,     7,     8,   129,    10,   545,
      12,   833,  2214,    91,    16,    17,    18,   382,    20,   937,
     657,  1880,    24,    25,    26,    27,    28,  1400,  1912,  2256,
    1377,   378,   379,   380,   381,   382,    38,   384,   880,  1389,
     165,   358,  1546,    45,    46,    -1,   573,    49,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,   896,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,   121,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
     202,    -1,   204,   205,   206,    -1,   208,    -1,   210,    -1,
     212,   213,   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   265,   266,    -1,   268,   269,   270,   271,
      -1,    -1,    -1,   275,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   381,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
     382,    38,   384,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,    -1,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,   120,   121,   122,    -1,   124,    -1,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,    -1,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,   190,   191,   192,   193,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,   204,   205,   206,
      -1,   208,    -1,   210,    -1,   212,   213,   214,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,   246,
     247,   248,    -1,    -1,    -1,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,   266,
      -1,   268,   269,   270,   271,    -1,    -1,    -1,   275,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     381,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   378,   379,   380,   381,   382,    38,   384,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,   121,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
     202,    -1,   204,   205,   206,    -1,   208,    -1,   210,    -1,
     212,   213,   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   265,   266,    -1,   268,   269,   270,   271,
      -1,    -1,    -1,   275,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   381,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
     382,    38,   384,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,    -1,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,   120,   121,   122,    -1,   124,    -1,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,    -1,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,   190,   191,   192,   193,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,   204,   205,   206,
      -1,   208,    -1,   210,    -1,   212,   213,   214,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,   246,
     247,   248,    -1,    -1,    -1,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,   266,
      -1,   268,   269,   270,   271,    -1,    -1,    -1,   275,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     381,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   378,   379,   380,   381,   382,    38,   384,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,   121,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
     202,    -1,   204,   205,   206,    -1,   208,    -1,   210,    -1,
     212,   213,   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   265,   266,    -1,   268,   269,   270,   271,
      -1,    -1,    -1,   275,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   381,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
     382,    38,   384,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,    -1,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,   120,   121,   122,    -1,   124,    -1,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,    -1,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,   190,   191,   192,   193,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,   204,   205,   206,
      -1,   208,    -1,   210,    -1,   212,   213,   214,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,   246,
     247,   248,    -1,    -1,    -1,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,   266,
      -1,   268,   269,   270,   271,    -1,    -1,    -1,   275,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     381,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   378,   379,   380,   381,   382,    38,   384,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,   121,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
     202,    -1,   204,   205,   206,    -1,   208,    -1,   210,    -1,
     212,   213,   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   265,   266,    -1,   268,   269,   270,   271,
      -1,    -1,    -1,   275,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   381,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
     382,    38,   384,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,    -1,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,   120,   121,   122,    -1,   124,    -1,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,    -1,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,   190,   191,   192,   193,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,   204,   205,   206,
      -1,   208,    -1,   210,    -1,   212,   213,   214,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,   246,
     247,   248,    -1,    -1,    -1,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,   266,
      -1,   268,   269,   270,   271,    -1,    -1,    -1,   275,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     381,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   378,   379,   380,   381,   382,    38,   384,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,   121,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
     202,    -1,   204,   205,   206,    -1,   208,    -1,   210,    -1,
     212,   213,   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   265,   266,    -1,   268,   269,   270,   271,
      -1,    -1,    -1,   275,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   381,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
     382,    38,   384,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,    -1,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,   120,   121,   122,    -1,   124,    -1,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,    -1,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,   190,   191,   192,   193,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,   204,   205,   206,
      -1,   208,    -1,   210,    -1,   212,   213,   214,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,   246,
     247,   248,    -1,    -1,    -1,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,   266,
      -1,   268,   269,   270,   271,    -1,    -1,    -1,   275,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     381,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   378,   379,   380,   381,   382,    38,   384,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,    68,    69,    -1,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,   121,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,   135,   136,   137,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
     202,    -1,   204,   205,   206,    -1,   208,    -1,   210,    -1,
     212,   213,   214,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,   246,   247,   248,    -1,    -1,    -1,
      -1,   253,    -1,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   265,   266,    -1,   268,   269,   270,   271,
      -1,    -1,    -1,   275,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,   381,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
     382,    38,   384,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,    68,    69,    -1,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,    -1,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,   120,   121,   122,    -1,   124,    -1,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,    -1,
     147,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
     187,   188,   189,   190,   191,   192,   193,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,   204,   205,   206,
      -1,   208,    -1,   210,    -1,   212,   213,   214,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,   234,   235,   236,
      -1,    -1,    -1,    -1,    17,    18,    -1,   244,    -1,   246,
     247,   248,    25,    26,    -1,    -1,   253,    -1,   255,   256,
     257,    -1,    -1,    -1,   261,    38,    -1,    -1,   265,   266,
      -1,   268,   269,   270,   271,    -1,    -1,    -1,   275,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    76,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   378,   379,   380,   381,   382,    -1,   384,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   188,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   228,   229,    -1,    -1,    -1,
     233,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   258,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,   314,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,    -1,   366,   367,   368,   369,    -1,    -1,    -1,
      -1,   374,   375,   376,   377,    -1,    -1,   380,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    76,    10,    11,    12,    13,    14,    15,    16,    84,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   173,    34,
     382,    -1,    -1,   178,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   188,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,    -1,    10,    11,    12,
      13,    14,    15,    16,   382,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,    -1,   314,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      -1,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
      -1,   366,   367,   368,   369,    -1,    -1,    -1,    -1,   374,
     375,   376,   377,    -1,    -1,   380,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,   382,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      67,    34,    -1,    -1,   382,    72,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   382,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   382,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      -1,   178,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   188,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,
      -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,    -1,   314,    -1,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,    -1,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,    -1,   366,
     367,   368,   369,    -1,    -1,    -1,    -1,   374,   375,   376,
     377,    -1,    -1,   380,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,   382,    84,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   382,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   382,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,   178,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   188,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,   382,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    -1,    -1,    -1,    -1,    -1,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,    -1,   314,    -1,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    -1,    -1,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,    -1,   366,   367,   368,
     369,    -1,    -1,    -1,    -1,   374,   375,   376,   377,    -1,
      -1,   380,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    76,    -1,    -1,   382,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   382,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   382,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,   382,    -1,    -1,   178,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   188,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,   220,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,    -1,   314,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,    -1,   366,   367,   368,   369,    -1,
      -1,    -1,    -1,   374,   375,   376,   377,    -1,    -1,   380,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,   382,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   382,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   382,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    -1,    -1,   178,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   188,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    -1,    -1,    -1,    -1,   220,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,   314,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,    -1,   366,   367,   368,   369,    -1,    -1,    -1,
      -1,   374,   375,   376,   377,    -1,    -1,   380,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,   382,    -1,
      25,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   108,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315,    -1,    -1,   135,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     382,    34,    -1,   178,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   188,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,
      -1,    -1,    -1,    -1,    -1,   220,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,    -1,   314,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      -1,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
      -1,   366,   367,   368,   369,    -1,    -1,    -1,    -1,   374,
     375,   376,   377,    -1,    -1,   380,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   381,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   108,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   381,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,
      -1,   178,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   188,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,
      -1,    -1,    -1,   220,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,    -1,   314,    -1,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,    -1,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,    -1,   366,
     367,   368,   369,    -1,    -1,    -1,    -1,   374,   375,   376,
     377,    -1,    -1,   380,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
     381,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   108,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,   381,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,   178,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   188,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,
      -1,   220,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,    -1,   314,    -1,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    -1,    -1,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,    -1,   366,   367,   368,
     369,    -1,    -1,    -1,    -1,   374,   375,   376,   377,    -1,
      -1,   380,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   381,    -1,
      -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   381,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,   381,    -1,    -1,    -1,   178,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   188,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,   220,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,    -1,   314,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,    -1,   366,   367,   368,   369,    -1,
      -1,    -1,    -1,   374,   375,   376,   377,    -1,    -1,   380,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,   381,    -1,    -1,    -1,
      -1,    -1,    25,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    76,    10,    11,    12,    13,    14,    15,
      16,    84,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   381,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   381,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   381,    34,    -1,    -1,   178,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   188,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,    -1,    -1,    -1,   220,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,   314,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,    -1,   366,   367,   368,   369,    -1,    -1,    -1,
      -1,   374,   375,   376,   377,    -1,    -1,   380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   381,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    10,    11,
      12,    13,    14,    15,    16,   381,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   381,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   381,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   381,
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
      28,    29,    30,    31,    32,    -1,    34,    -1,   381,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   381,    34,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   381,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,   381,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   381,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   381,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,   381,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   381,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   381,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   381,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   381,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   381,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   381,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   381,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   381,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      10,    11,    12,    13,    14,    15,    16,   381,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   381,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   381,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   381,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    10,    11,
      12,    13,    14,    15,    16,   381,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   381,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   381,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   381,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   381,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   381,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   381,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    10,    11,    12,    13,    14,    15,
      16,   381,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   381,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    -1,    10,    11,    12,    13,
      14,    15,    16,   381,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   381,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   381,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,   381,
      -1,    97,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,   381,    -1,    -1,    -1,    -1,    -1,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    -1,   381,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   381,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,   100,    -1,    -1,    -1,   104,    -1,   106,
      -1,   197,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     216,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,   381,   139,   140,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   381,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   381,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   381,    56,    57,    -1,    59,
      -1,    61,    62,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    48,    -1,    77,    51,    -1,
     381,    -1,    -1,    -1,    -1,   272,   273,    -1,    -1,   365,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,   381,    -1,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,   381,    -1,    -1,   108,    -1,   269,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   125,    -1,    -1,   155,    -1,   381,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,
     180,    -1,    -1,   183,   184,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,    -1,   234,   235,    -1,    -1,   238,   239,
      -1,    -1,    -1,    -1,   244,    -1,   246,    -1,    -1,    -1,
      -1,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,   259,
     248,    -1,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   256,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,   131,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     119,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    46,
      -1,    10,    11,    12,    13,    14,    15,    16,   107,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    46,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    45,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    45,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    63,    68,    81,   102,   103,   152,   163,
     164,   165,   201,   203,   211,   235,   236,   250,   253,   262,
     386,   425,   426,   465,   469,   471,   474,   475,   478,   479,
     480,   481,   482,   483,   486,   493,   494,   496,   512,   513,
     522,   525,   527,   528,   529,   552,   555,   562,   563,   566,
     569,   570,   573,   214,   247,   365,   247,     3,    10,    90,
      97,   133,   134,   150,   197,   214,   216,   222,   241,   242,
     256,   365,   534,     3,   466,    90,   134,   150,   197,   214,
     216,   222,   247,   365,   504,     3,     3,     3,    26,   247,
     247,   504,     8,   222,   553,   554,   444,   247,   504,   523,
       3,    90,     0,   378,   477,     3,     3,     3,     3,   380,
     211,   151,   526,     3,   150,     3,     3,    80,   151,     3,
       3,     3,   526,   241,   150,   526,   247,   514,     3,   131,
     149,   171,   198,   467,     3,   151,     3,   151,     3,     3,
     151,     3,   151,     3,     3,   151,     3,   151,     3,   151,
      98,   141,   149,   154,   171,   505,   166,   382,     3,     3,
     505,     9,    20,     3,   108,   382,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    38,    67,    72,    75,
      76,    84,   101,   105,   141,   178,   188,   220,   221,   228,
     229,   233,   258,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   314,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   366,
     367,   368,   369,   374,   375,   376,   377,   380,   387,   445,
     446,     3,   149,   171,     3,   162,   168,   375,   380,   448,
     449,   450,   451,   454,   464,     3,   386,    49,    50,    69,
     205,   103,   253,   379,   484,    95,   115,    36,    70,    95,
     103,   115,   182,   203,   264,    50,   203,   571,     3,     4,
       5,     6,     7,     8,   188,   381,   564,   565,   134,   197,
     275,     3,    46,     3,   380,   192,     3,   151,   275,   380,
      37,    54,   567,   192,     3,     3,    80,   151,     3,   526,
     380,   515,   379,   468,     3,   467,   131,   382,   275,   275,
     275,   275,   192,   275,    69,   205,   470,   275,   275,     3,
       4,   240,     3,   387,   387,   554,   379,   380,     9,   387,
     387,   387,   269,   387,   424,   379,   380,    34,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     387,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    34,    46,   447,   131,   154,   382,
     382,   379,   447,   380,     3,   380,   426,   448,   235,   382,
      71,   148,   172,   185,   210,   233,   455,   457,    46,   453,
     453,    48,    48,    40,    40,     3,    66,    79,     3,    79,
      66,   212,     3,    66,    79,    66,   212,     3,    79,     3,
      66,    79,    66,   271,   240,    18,   179,   370,   371,   372,
     373,   572,   381,   382,     3,     3,    56,    57,    59,    61,
      62,    77,   109,   110,   111,   112,   118,   127,   147,   155,
     170,   177,   180,   183,   184,   200,   234,   235,   238,   239,
     244,   246,   251,   252,   257,   259,   265,   267,   272,   548,
     192,     3,    16,   145,   190,   556,   557,   558,     3,   192,
     275,     3,   556,   102,   152,   253,   568,     3,   192,     3,
     151,   275,   571,     3,     3,   516,   131,   240,   517,    26,
     268,   427,   261,   448,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   235,   380,   506,     3,   235,   506,     3,
     387,   392,   396,   387,   387,   424,   119,   120,   269,     3,
       3,   383,   394,   401,   387,    60,   173,   249,   387,   422,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   381,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   381,   387,   387,   387,   381,
     387,   387,   387,   387,   387,   387,    26,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   381,   381,
     381,   381,   381,   387,   387,   381,   381,   381,   387,   387,
       5,   381,   381,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   381,   387,   387,   387,   381,
     381,   387,   387,   387,   387,   387,     6,    18,   188,   313,
     380,    13,    14,    16,    19,   387,    38,    42,   227,   380,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,     3,   448,     3,   446,     3,   476,
       3,   128,   149,   262,   461,   452,   447,   387,   381,   381,
       3,   524,   449,   172,   210,   458,   450,   158,   191,   456,
       3,     3,   192,   192,   484,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   548,     3,   240,     3,     3,
       3,     5,     3,   373,     5,     5,   271,     5,    58,     5,
     565,   380,   380,   380,   544,   544,   544,   544,   544,   544,
     380,   544,   544,   544,    59,   545,   545,   544,   544,   544,
     380,   545,   544,   545,   380,   380,    18,    34,    73,   108,
       3,   548,     3,     3,     3,   381,   382,   261,   380,     3,
       3,   192,   381,   192,    46,   487,     3,   192,   275,     3,
     149,   211,   345,   379,   380,   550,   551,   381,   382,     4,
     231,   232,   518,   387,   193,   437,   448,   427,   468,   470,
       3,   511,     3,   507,   266,   426,   511,   266,   426,   382,
     381,   248,   119,   120,   387,   387,   381,   387,   393,   426,
     131,   382,   381,   131,   387,   382,   382,   382,   381,   381,
     381,   381,   381,   381,   382,   382,   382,   382,   381,   382,
     382,   382,   381,   381,   381,   381,   382,   382,   381,   382,
     381,   381,   381,    46,   382,   382,   382,   382,   315,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   382,
     382,   382,   381,   382,   344,   344,   344,   381,   382,   381,
     382,   381,   344,   344,   382,   381,   381,   381,   381,   381,
     381,   381,   381,   382,   382,   382,   382,   382,   382,   382,
     382,   381,   382,   381,   381,   381,   382,   381,   382,   381,
     382,     6,   188,   397,   399,   387,   387,   380,   387,    45,
     380,   380,   380,   388,   383,   427,   131,   382,   447,   159,
     159,   159,   426,   461,   381,    20,   379,   382,   427,   456,
     456,   158,   192,   450,   158,     3,   485,   485,    73,   129,
     196,   256,   548,   548,     3,   217,   217,   543,   548,     3,
     240,   240,     5,     5,   556,   556,     5,   546,   547,   546,
     546,     4,   549,   546,   546,   546,   547,   547,   546,   546,
     546,   549,   547,   546,   547,     5,     5,   188,   383,   380,
     387,   380,   548,   548,   548,   208,   558,   263,     3,   321,
     322,   323,   324,   472,   473,   261,   380,   192,     3,    46,
      55,     3,   218,   219,   135,   488,   261,   380,     3,     3,
     192,    89,     3,    66,    73,   129,   133,   150,   159,   196,
     256,   535,   536,   542,   453,     3,    82,    94,   130,   138,
     188,   237,   271,   380,   519,   520,   521,    58,   174,   440,
     427,    20,   194,   382,   497,   381,   382,   380,   508,   497,
     508,   497,   392,   387,   387,   119,   248,    86,   382,   383,
     381,   387,   387,   387,   131,   156,   423,   423,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   548,
     548,   387,   387,   387,     4,   344,   344,   344,   344,   344,
     344,   387,   387,   387,   387,   380,   380,   380,   344,     5,
     344,     5,   344,   380,   380,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   392,   426,
     398,   400,    45,   387,   391,   387,   389,   395,   390,   395,
     426,   136,   428,   448,     3,   461,   135,   462,   462,   462,
     381,   453,   387,     3,     3,   437,   450,   387,   192,   261,
     459,   460,   450,   382,   271,   380,   159,   159,   380,   543,
     543,   548,    18,    37,    43,    46,    48,    51,    66,    73,
      74,   108,   125,   159,   188,   196,   256,   495,   543,     3,
       3,   381,   381,   381,   382,   254,   274,    77,    78,   381,
     382,   381,   381,   381,    73,   387,   472,    57,    61,   109,
     112,   127,   147,   155,   244,   246,   265,   559,   380,   380,
     380,   380,   380,   381,   382,   263,   472,     3,   261,   380,
      55,   560,   135,    38,   102,   152,   236,   253,   240,   489,
     263,   472,   261,   380,   192,     3,     3,   380,   550,     3,
     380,   159,   150,   159,   380,   380,   159,   380,   381,   382,
       3,   426,     4,    82,   244,     6,     4,     4,   380,   520,
     382,     3,     5,   438,   439,   387,   207,   574,   108,   387,
     159,     3,     3,   108,   387,   510,   382,   497,   497,   119,
     387,   380,   393,   135,   381,   381,   382,   381,   387,   387,
     381,   381,   381,   381,   381,   382,   382,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   382,   381,   380,
     380,   380,   380,   380,   380,   381,   382,   382,   381,   381,
     402,   403,   404,   380,   381,   382,   380,   381,   382,   380,
     420,   421,   381,   382,   382,   382,   381,   381,   382,   382,
     381,   382,   381,   382,   381,   382,   381,   381,   381,   381,
     392,   426,   387,   426,   426,   381,   426,   381,   381,    58,
     143,   432,   427,   158,   380,   380,   380,     3,    20,    20,
     379,   440,   387,   380,   460,     3,     5,   387,   380,   380,
       3,   541,   495,   495,   543,   188,     3,   380,   380,   380,
      47,     3,   380,     4,     4,     5,     6,     7,    67,   327,
     328,   329,   380,   159,   159,   495,   208,    46,    55,     5,
     235,     4,   547,     4,   547,   547,   380,   381,   381,    46,
      55,   472,     3,     3,     3,     3,     3,   380,   381,   380,
     263,   472,   560,     3,     4,     5,     6,     7,     8,    10,
      12,    16,    17,    18,    20,    24,    25,    26,    27,    28,
      38,    45,    46,    49,    54,    55,    56,    57,    58,    61,
      63,    64,    65,    68,    69,    71,    72,    73,    77,    91,
      96,   101,   102,   103,   108,   109,   111,   112,   113,   114,
     117,   119,   120,   121,   122,   124,   126,   127,   129,   131,
     132,   134,   135,   136,   137,   143,   145,   147,   148,   150,
     151,   152,   153,   154,   155,   157,   158,   159,   160,   161,
     172,   174,   176,   185,   187,   188,   189,   190,   191,   192,
     193,   196,   197,   202,   204,   205,   206,   208,   210,   212,
     213,   214,   215,   234,   235,   236,   244,   246,   247,   248,
     253,   255,   256,   257,   261,   265,   266,   268,   269,   270,
     271,   275,   316,   317,   318,   319,   320,   378,   379,   380,
     381,   382,   384,   561,   113,     3,   490,   261,   491,   380,
     381,   263,   472,     3,   261,   380,   135,   535,    73,   129,
     196,   256,   387,   380,   380,   380,     3,   443,   443,   380,
     541,   531,   550,   536,   548,   520,   381,   521,    44,   107,
     379,   430,   430,   382,   176,   382,     3,    26,   575,   253,
      20,   381,   382,   509,   192,   499,     4,   387,   387,   381,
      99,   100,   104,   106,   139,   140,   142,   272,   273,   387,
     387,   387,   406,   407,   405,   408,   409,   410,   387,   387,
     345,   433,   433,   433,   411,   344,     4,     5,   415,   344,
       4,     5,   419,   433,   433,   387,   387,   387,   387,   387,
     387,   387,   387,   381,   381,   381,   381,   381,   387,   429,
     387,   437,   428,     3,   463,   463,   463,   380,   387,   387,
       3,   574,   443,    41,   381,     3,   538,     3,   537,   381,
     382,   495,     5,   387,     5,    46,    73,   196,   256,   387,
     380,   380,   380,   387,   559,    55,   560,   381,     4,   387,
      55,   560,   381,   381,   381,   381,   382,   472,   472,   380,
     381,   119,   560,   560,   560,   560,   560,   560,   212,   382,
     380,   271,   492,   472,   380,   381,   380,   263,   472,   266,
     381,   380,   159,   159,   380,   381,   538,   443,   443,   381,
     382,   381,   537,   381,    43,   167,   192,   223,   345,   530,
     543,   381,     3,   439,   387,   387,   382,   498,   108,   387,
     108,   387,   380,    83,   574,   381,   381,   381,   381,   381,
     381,   433,   433,   433,   433,   433,   433,   381,   382,   381,
      58,   193,   435,   435,   435,   433,   380,   381,   381,   433,
     380,   381,   381,   433,   435,   435,   381,   381,   381,   381,
     381,   382,   381,   381,   430,   271,   382,   431,   440,   432,
     381,   382,   381,   381,     3,    20,   381,    18,   381,   382,
     381,   382,     3,   381,   382,   381,   381,   382,   380,   380,
     159,   381,   381,   381,   381,   381,    46,    55,   560,   119,
     381,   560,   119,     3,   381,   381,   472,   119,   119,   119,
     119,   119,   119,    55,     3,   387,    73,   381,   472,   472,
     380,   381,   131,   531,   550,   387,   380,   380,   541,   381,
     381,   381,     3,   381,     5,    20,   380,     3,    58,    58,
     430,     3,     3,   503,   510,   380,   500,   435,   435,   435,
     435,   435,   435,   387,     3,   434,    58,   381,   381,   381,
     435,   412,   344,   344,   435,   416,   344,   344,   435,   381,
     381,   387,   209,   387,   135,   441,   437,     3,   381,   387,
     264,   202,     3,     3,     5,    52,    53,     5,   387,   387,
      55,   560,   119,   119,   381,   381,    72,   126,   151,   161,
     270,   560,   381,   380,   381,   381,   472,   380,   381,   538,
     537,   381,   202,     5,     3,   102,   243,   199,   263,   199,
      20,   382,   381,     3,    96,   501,   381,   381,   381,   381,
     381,   381,   381,   382,     3,   436,   381,   433,   380,   380,
     381,   433,   380,   380,   381,   381,   430,   225,   253,   154,
     442,   440,     3,   381,   381,   381,   381,   560,   119,   119,
     387,   381,     5,   381,   381,     3,   381,     3,     3,   380,
     380,   380,   387,     3,   381,   382,    85,   253,     3,   430,
     382,   435,   413,   414,   435,   417,   418,   226,   226,   443,
     380,    52,    53,   119,   381,   381,   202,   379,   380,     3,
       3,     3,    20,     3,   502,     3,   381,   433,   433,   381,
     433,   433,   175,   175,     3,   539,   240,     3,     3,   539,
     381,   381,   381,   387,   235,   430,   435,   435,   435,   435,
     381,   382,   380,   379,   380,   380,   381,   380,   224,   503,
     381,   381,   381,   381,   540,     3,     5,     3,   539,   539,
     540,   223,   532,   533,     5,    18,    92,   178,   192,   381,
     380,   381,   381,    18,     3,   381,   382,    92,   264,   146,
     132,   195,   230,   102,   253,   539,   540,   540,   266,   533,
      93,   144,    69,   187,   205,   235,    69,   187,   205,   235,
     381,   169,   108,   188,   108,   188,   540,   245,     4,   179,
     192,   192,   186,   186,     5,     5
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
#line 476 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 482 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 483 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 485 "parser/evoparser.y"
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
#line 498 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 500 "parser/evoparser.y"
    {
        char *sv = (yyvsp[(1) - (1)].strval);
        int slen = (int)strlen(sv);
        emit("STRING %s", sv);
        /* Strip surrounding quotes and collapse doubled quotes (SQL-standard
         * '' → ' and ANSI "" → ") before storing the literal value. */
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            char quote = sv[0];
            char stripped[1024];
            int j = 0;
            for (int i = 1; i < slen - 1 && j < (int)sizeof(stripped) - 1; i++) {
                if (sv[i] == quote && i + 1 < slen - 1 && sv[i + 1] == quote) {
                    stripped[j++] = quote;
                    i++;  /* skip the paired quote */
                } else {
                    stripped[j++] = sv[i];
                }
            }
            stripped[j] = '\0';
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
#line 528 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 536 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 544 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 550 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 557 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 558 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 559 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 560 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 561 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 562 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 563 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 564 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 565 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 566 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 567 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 568 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 569 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 570 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 571 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 572 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 573 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 574 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 575 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 577 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 582 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 583 "parser/evoparser.y"
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
#line 591 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 592 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 593 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 594 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 595 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 596 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 601 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 603 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 606 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 607 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 608 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 609 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 610 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 613 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 614 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 618 "parser/evoparser.y"
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
#line 627 "parser/evoparser.y"
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
#line 645 "parser/evoparser.y"
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
#line 654 "parser/evoparser.y"
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
#line 673 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 674 "parser/evoparser.y"
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
#line 734 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 743 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 749 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 754 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 756 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 758 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 763 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 768 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 774 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 67:
#line 778 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 778 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 779 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 70:
#line 779 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 71:
#line 780 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 781 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 788 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 789 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 75:
#line 796 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 76:
#line 797 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 77:
#line 807 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 78:
#line 811 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 79:
#line 812 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 813 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 814 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 815 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 83:
#line 816 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 84:
#line 817 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 85:
#line 818 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 86:
#line 822 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 87:
#line 823 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 88:
#line 824 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 89:
#line 825 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 90:
#line 826 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 91:
#line 827 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 92:
#line 829 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 93:
#line 830 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 94:
#line 831 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 95:
#line 832 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 96:
#line 833 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 834 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 98:
#line 835 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 836 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 100:
#line 837 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 838 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 102:
#line 839 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 840 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 104:
#line 842 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 843 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 844 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 107:
#line 845 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 846 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 109:
#line 847 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 848 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 111:
#line 849 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 112:
#line 850 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 851 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 114:
#line 852 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 115:
#line 853 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 116:
#line 854 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 117:
#line 855 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 856 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 119:
#line 857 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 120:
#line 859 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 121:
#line 860 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 122:
#line 861 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 123:
#line 862 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 124:
#line 863 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 125:
#line 864 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 126:
#line 867 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 127:
#line 868 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 128:
#line 869 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 129:
#line 870 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 130:
#line 871 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 131:
#line 872 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 132:
#line 873 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 133:
#line 874 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 875 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 135:
#line 876 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 136:
#line 877 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 878 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 138:
#line 879 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 880 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 140:
#line 881 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 141:
#line 882 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 142:
#line 883 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 143:
#line 884 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 144:
#line 885 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 145:
#line 886 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 146:
#line 887 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 147:
#line 888 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 148:
#line 889 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 149:
#line 890 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 150:
#line 891 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 151:
#line 892 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 152:
#line 893 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 153:
#line 894 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 154:
#line 895 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 155:
#line 896 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 156:
#line 897 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 157:
#line 898 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 158:
#line 899 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 159:
#line 900 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 160:
#line 902 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 161:
#line 903 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 162:
#line 904 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 163:
#line 905 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 164:
#line 906 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 165:
#line 907 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 166:
#line 908 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 167:
#line 909 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 168:
#line 911 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 169:
#line 912 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 170:
#line 913 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 171:
#line 914 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 172:
#line 915 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 173:
#line 916 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 174:
#line 917 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 175:
#line 918 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 176:
#line 919 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 177:
#line 920 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 178:
#line 921 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 179:
#line 922 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 180:
#line 923 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 181:
#line 924 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 182:
#line 925 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 183:
#line 926 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 184:
#line 927 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 185:
#line 928 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 186:
#line 929 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 930 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 188:
#line 931 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 189:
#line 932 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 190:
#line 934 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 191:
#line 935 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 192:
#line 936 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 193:
#line 937 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 194:
#line 938 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 195:
#line 940 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 196:
#line 941 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 197:
#line 943 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 198:
#line 944 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 199:
#line 945 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 200:
#line 947 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 201:
#line 948 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 202:
#line 949 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 203:
#line 950 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 204:
#line 957 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 205:
#line 964 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 206:
#line 971 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 975 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 979 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 209:
#line 983 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 210:
#line 987 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 211:
#line 991 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 212:
#line 997 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 213:
#line 998 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 214:
#line 999 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 215:
#line 1003 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 216:
#line 1009 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 217:
#line 1015 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 218:
#line 1016 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 1017 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 1018 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 221:
#line 1019 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 222:
#line 1020 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 223:
#line 1021 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 1022 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 225:
#line 1023 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 226:
#line 1027 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 1029 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 228:
#line 1031 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 229:
#line 1033 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 230:
#line 1037 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 231:
#line 1045 "parser/evoparser.y"
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
#line 1055 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 233:
#line 1056 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 234:
#line 1059 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 235:
#line 1060 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 236:
#line 1064 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 1072 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 238:
#line 1080 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 239:
#line 1088 "parser/evoparser.y"
    {
        /* Task 93 — RLS: keep the node itself in the AST (evaluated at
         * query time) but emit the current session user into the RPN
         * canonical form so literal comparisons stay serializable. */
        emit("CURRENT_USER");
        (yyval.exprval) = expr_make_current_user();
        char _uu[256];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uu, sizeof(_uu));
        GetInsertions(_uu);
    ;}
    break;

  case 240:
#line 1102 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 241:
#line 1111 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 242:
#line 1116 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 243:
#line 1129 "parser/evoparser.y"
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

  case 245:
#line 1142 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 247:
#line 1144 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 248:
#line 1147 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 249:
#line 1154 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 250:
#line 1162 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1163 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 252:
#line 1164 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1167 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 254:
#line 1168 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 256:
#line 1172 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1181 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 260:
#line 1183 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 263:
#line 1191 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 264:
#line 1193 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 269:
#line 1205 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 270:
#line 1211 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 271:
#line 1218 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 272:
#line 1226 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 273:
#line 1227 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1228 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 275:
#line 1229 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 276:
#line 1232 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 277:
#line 1233 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 278:
#line 1234 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 279:
#line 1235 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 280:
#line 1236 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 282:
#line 1240 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 283:
#line 1243 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 284:
#line 1244 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1247 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1248 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 287:
#line 1249 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 288:
#line 1250 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 289:
#line 1251 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 290:
#line 1252 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 291:
#line 1253 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 292:
#line 1254 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 293:
#line 1255 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 294:
#line 1258 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 295:
#line 1259 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 296:
#line 1261 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 297:
#line 1269 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 298:
#line 1274 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 299:
#line 1275 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 300:
#line 1276 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 301:
#line 1279 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1280 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 305:
#line 1289 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 306:
#line 1297 "parser/evoparser.y"
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

  case 307:
#line 1306 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 308:
#line 1307 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 309:
#line 1309 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 310:
#line 1318 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 311:
#line 1323 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 312:
#line 1329 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 313:
#line 1336 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 314:
#line 1340 "parser/evoparser.y"
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

  case 315:
#line 1360 "parser/evoparser.y"
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

  case 318:
#line 1386 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 319:
#line 1388 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 320:
#line 1390 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 321:
#line 1392 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 322:
#line 1394 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 323:
#line 1397 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1398 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 325:
#line 1399 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 326:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 327:
#line 1403 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 328:
#line 1406 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 329:
#line 1407 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 330:
#line 1410 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 331:
#line 1411 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 332:
#line 1412 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 335:
#line 1419 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 336:
#line 1420 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 337:
#line 1425 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 338:
#line 1427 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1429 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 341:
#line 1433 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1434 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 343:
#line 1437 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1438 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 345:
#line 1441 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 346:
#line 1446 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 347:
#line 1456 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 348:
#line 1463 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 349:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 350:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 351:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1471 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 353:
#line 1475 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1477 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 357:
#line 1483 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 358:
#line 1488 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 359:
#line 1495 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1502 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1514 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 363:
#line 1515 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 364:
#line 1520 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 365:
#line 1527 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 366:
#line 1534 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 367:
#line 1542 "parser/evoparser.y"
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

  case 368:
#line 1552 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 369:
#line 1560 "parser/evoparser.y"
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

  case 370:
#line 1570 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 371:
#line 1578 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 372:
#line 1587 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 373:
#line 1596 "parser/evoparser.y"
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

  case 374:
#line 1606 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 375:
#line 1614 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 376:
#line 1623 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 377:
#line 1632 "parser/evoparser.y"
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

  case 378:
#line 1642 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 379:
#line 1651 "parser/evoparser.y"
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

  case 380:
#line 1663 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 381:
#line 1668 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 382:
#line 1673 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 383:
#line 1679 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 384:
#line 1686 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 385:
#line 1693 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 386:
#line 1700 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 387:
#line 1710 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 388:
#line 1717 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 389:
#line 1726 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 390:
#line 1733 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 391:
#line 1739 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 392:
#line 1747 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 393:
#line 1753 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 395:
#line 1761 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 396:
#line 1762 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 397:
#line 1763 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 398:
#line 1764 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 399:
#line 1780 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 400:
#line 1781 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 401:
#line 1782 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 402:
#line 1786 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 403:
#line 1792 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 404:
#line 1803 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 405:
#line 1809 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 406:
#line 1816 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 407:
#line 1822 "parser/evoparser.y"
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

  case 408:
#line 1838 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 409:
#line 1845 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1854 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 411:
#line 1862 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (3)].strval));
        GetDropTableName((yyvsp[(2) - (3)].strval));
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 412:
#line 1868 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (5)].strval), (yyvsp[(4) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (5)].strval), (yyvsp[(4) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (5)].strval)); free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 413:
#line 1881 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 415:
#line 1896 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 416:
#line 1900 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 417:
#line 1905 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 418:
#line 1912 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 419:
#line 1917 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 420:
#line 1924 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 421:
#line 1928 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 422:
#line 1929 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 423:
#line 1935 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 424:
#line 1944 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 425:
#line 1945 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 426:
#line 1946 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 427:
#line 1950 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 428:
#line 1951 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 429:
#line 1952 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 430:
#line 1953 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 431:
#line 1954 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 432:
#line 1955 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 435:
#line 1964 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 436:
#line 1965 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 438:
#line 1970 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 440:
#line 1975 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 441:
#line 1980 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 442:
#line 1989 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 443:
#line 1995 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 444:
#line 2001 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 445:
#line 2008 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 446:
#line 2014 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 447:
#line 2021 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 448:
#line 2027 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 449:
#line 2033 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 450:
#line 2039 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 451:
#line 2045 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 452:
#line 2051 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 453:
#line 2057 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 454:
#line 2063 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 455:
#line 2069 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 456:
#line 2075 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 457:
#line 2081 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 458:
#line 2087 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 459:
#line 2093 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 460:
#line 2099 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 461:
#line 2105 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 462:
#line 2111 "parser/evoparser.y"
    {
        /* Only accept `ROW LEVEL SECURITY`; any other middle NAME is a
         * syntax error. Keeping LEVEL as an unreserved NAME lets the
         * identifier stay free for column/alias use elsewhere. */
        if (strcasecmp((yyvsp[(6) - (7)].strval), "LEVEL") != 0) {
            yyerror(scanner, "expected LEVEL after ROW in ENABLE ROW LEVEL SECURITY");
            free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); YYERROR;
        }
        emit("ALTER TABLE %s ENABLE RLS", (yyvsp[(3) - (7)].strval));
        AlterTableToggleRLS((yyvsp[(3) - (7)].strval), 1);
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 463:
#line 2124 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(6) - (7)].strval), "LEVEL") != 0) {
            yyerror(scanner, "expected LEVEL after ROW in DISABLE ROW LEVEL SECURITY");
            free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); YYERROR;
        }
        emit("ALTER TABLE %s DISABLE RLS", (yyvsp[(3) - (7)].strval));
        AlterTableToggleRLS((yyvsp[(3) - (7)].strval), 0);
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 464:
#line 2135 "parser/evoparser.y"
    { ;}
    break;

  case 465:
#line 2136 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 466:
#line 2137 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 467:
#line 2141 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 468:
#line 2149 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 469:
#line 2155 "parser/evoparser.y"
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

  case 471:
#line 2168 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 472:
#line 2168 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 475:
#line 2176 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 476:
#line 2177 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 477:
#line 2178 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 478:
#line 2182 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 479:
#line 2183 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 480:
#line 2184 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 481:
#line 2188 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 482:
#line 2196 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 483:
#line 2205 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 484:
#line 2206 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 485:
#line 2207 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 486:
#line 2208 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 487:
#line 2209 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 491:
#line 2216 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 492:
#line 2220 "parser/evoparser.y"
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

  case 493:
#line 2230 "parser/evoparser.y"
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

  case 494:
#line 2242 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 495:
#line 2243 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 496:
#line 2243 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 497:
#line 2246 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 498:
#line 2247 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 499:
#line 2248 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 500:
#line 2249 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 501:
#line 2253 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 502:
#line 2256 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 503:
#line 2257 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 504:
#line 2258 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 505:
#line 2259 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 506:
#line 2265 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 507:
#line 2271 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 508:
#line 2276 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 509:
#line 2281 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 510:
#line 2285 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 511:
#line 2289 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 512:
#line 2291 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 515:
#line 2297 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 516:
#line 2298 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 517:
#line 2302 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 518:
#line 2303 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 519:
#line 2307 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 520:
#line 2308 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 521:
#line 2309 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 528:
#line 2324 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 529:
#line 2325 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 530:
#line 2326 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 531:
#line 2327 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 532:
#line 2328 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 533:
#line 2329 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 534:
#line 2330 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 535:
#line 2331 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 536:
#line 2336 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 537:
#line 2345 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 538:
#line 2352 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 539:
#line 2353 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 540:
#line 2354 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 541:
#line 2359 "parser/evoparser.y"
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

  case 542:
#line 2370 "parser/evoparser.y"
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

  case 543:
#line 2382 "parser/evoparser.y"
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

  case 544:
#line 2393 "parser/evoparser.y"
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

  case 545:
#line 2408 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 546:
#line 2412 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 547:
#line 2416 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 548:
#line 2417 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 549:
#line 2422 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 550:
#line 2424 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 551:
#line 2426 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 552:
#line 2428 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 553:
#line 2431 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 554:
#line 2432 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 555:
#line 2438 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 556:
#line 2443 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 557:
#line 2445 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 558:
#line 2447 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 559:
#line 2449 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 560:
#line 2451 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 561:
#line 2455 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 562:
#line 2459 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 563:
#line 2460 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 564:
#line 2465 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 565:
#line 2475 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 567:
#line 2488 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 568:
#line 2496 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 569:
#line 2504 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 571:
#line 2512 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 572:
#line 2513 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 573:
#line 2514 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 574:
#line 2515 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 575:
#line 2517 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 576:
#line 2519 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 577:
#line 2521 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 580:
#line 2529 "parser/evoparser.y"
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

  case 581:
#line 2544 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 582:
#line 2552 "parser/evoparser.y"
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

  case 583:
#line 2566 "parser/evoparser.y"
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

  case 584:
#line 2580 "parser/evoparser.y"
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

  case 585:
#line 2594 "parser/evoparser.y"
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

  case 586:
#line 2606 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 587:
#line 2607 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 588:
#line 2608 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 589:
#line 2611 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 590:
#line 2612 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 591:
#line 2615 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 592:
#line 2616 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 593:
#line 2617 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 594:
#line 2618 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 595:
#line 2619 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 596:
#line 2620 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 597:
#line 2621 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 598:
#line 2622 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 599:
#line 2624 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 600:
#line 2626 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 601:
#line 2628 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 602:
#line 2630 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 603:
#line 2632 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 604:
#line 2634 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 605:
#line 2637 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 606:
#line 2638 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 607:
#line 2641 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 608:
#line 2642 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 609:
#line 2645 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 610:
#line 2646 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 612:
#line 2650 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 613:
#line 2651 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 614:
#line 2652 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 615:
#line 2653 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 616:
#line 2654 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 617:
#line 2655 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 618:
#line 2656 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 619:
#line 2657 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 620:
#line 2658 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 621:
#line 2659 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 622:
#line 2660 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 623:
#line 2661 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 624:
#line 2662 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 625:
#line 2663 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 626:
#line 2664 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 627:
#line 2665 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 628:
#line 2666 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 629:
#line 2669 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 630:
#line 2670 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 631:
#line 2673 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 632:
#line 2675 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 633:
#line 2683 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 634:
#line 2684 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 636:
#line 2686 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 637:
#line 2687 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 638:
#line 2688 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 639:
#line 2689 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 640:
#line 2690 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 641:
#line 2691 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 642:
#line 2692 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 643:
#line 2693 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 644:
#line 2694 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 645:
#line 2701 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 646:
#line 2702 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 647:
#line 2703 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 648:
#line 2704 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 649:
#line 2705 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 650:
#line 2706 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 651:
#line 2707 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 652:
#line 2708 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 653:
#line 2709 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 654:
#line 2710 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 655:
#line 2711 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 656:
#line 2712 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 657:
#line 2713 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 658:
#line 2714 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 659:
#line 2715 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 660:
#line 2716 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 661:
#line 2717 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 662:
#line 2718 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 663:
#line 2719 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 664:
#line 2720 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 665:
#line 2721 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 666:
#line 2724 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 667:
#line 2725 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 668:
#line 2726 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 669:
#line 2729 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 670:
#line 2730 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 671:
#line 2733 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 672:
#line 2734 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 673:
#line 2735 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 675:
#line 2739 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 676:
#line 2740 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 677:
#line 2744 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 678:
#line 2745 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 679:
#line 2746 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 680:
#line 2747 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 681:
#line 2748 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 682:
#line 2749 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 683:
#line 2750 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 684:
#line 2751 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 685:
#line 2752 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 686:
#line 2753 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 687:
#line 2754 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 688:
#line 2755 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 689:
#line 2756 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 690:
#line 2757 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 691:
#line 2758 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 692:
#line 2759 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 693:
#line 2760 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 694:
#line 2761 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 695:
#line 2762 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 696:
#line 2763 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 697:
#line 2764 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 698:
#line 2765 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 699:
#line 2766 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 700:
#line 2767 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 701:
#line 2768 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 702:
#line 2769 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 703:
#line 2770 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 704:
#line 2771 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 705:
#line 2772 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 706:
#line 2773 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 707:
#line 2774 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 708:
#line 2775 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 709:
#line 2776 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 710:
#line 2777 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 711:
#line 2780 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 712:
#line 2781 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 713:
#line 2785 "parser/evoparser.y"
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

  case 714:
#line 2797 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 715:
#line 2798 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 716:
#line 2799 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 717:
#line 2803 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 718:
#line 2806 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 719:
#line 2807 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 723:
#line 2811 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 724:
#line 2812 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 725:
#line 2820 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 726:
#line 2825 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 727:
#line 2831 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 728:
#line 2837 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 729:
#line 2844 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 730:
#line 2851 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 731:
#line 2857 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 732:
#line 2863 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 733:
#line 2870 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 738:
#line 2886 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 739:
#line 2887 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 740:
#line 2888 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 741:
#line 2889 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 742:
#line 2892 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 743:
#line 2893 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 744:
#line 2894 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 745:
#line 2895 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 746:
#line 2896 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 747:
#line 2897 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 748:
#line 2898 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 749:
#line 2899 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 750:
#line 2900 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 751:
#line 2901 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 760:
#line 2918 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 761:
#line 2919 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 882:
#line 2937 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 883:
#line 2944 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 884:
#line 2949 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 885:
#line 2955 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 886:
#line 2961 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 887:
#line 2967 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 888:
#line 2978 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 889:
#line 2983 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 890:
#line 2989 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 893:
#line 3000 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 894:
#line 3001 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 895:
#line 3002 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 896:
#line 3003 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 897:
#line 3004 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 898:
#line 3005 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 899:
#line 3006 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 900:
#line 3013 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 901:
#line 3018 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 902:
#line 3025 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 903:
#line 3026 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 904:
#line 3029 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 905:
#line 3030 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 906:
#line 3031 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 907:
#line 3034 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 908:
#line 3039 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 909:
#line 3045 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 910:
#line 3054 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 911:
#line 3062 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 912:
#line 3072 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 913:
#line 3077 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 916:
#line 3090 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 917:
#line 3091 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 918:
#line 3092 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 919:
#line 3093 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 920:
#line 3094 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 921:
#line 3095 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 922:
#line 3096 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 923:
#line 3097 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 924:
#line 3100 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 925:
#line 3105 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 926:
#line 3111 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 927:
#line 3121 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 928:
#line 3128 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 929:
#line 3135 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 930:
#line 3143 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 932:
#line 3153 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 934:
#line 3157 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 935:
#line 3158 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11112 "parser/evoparser.tab.c"
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


#line 3161 "parser/evoparser.y"

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
