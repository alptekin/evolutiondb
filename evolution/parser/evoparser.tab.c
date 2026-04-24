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
     SAMPLE = 287,
     PERCENT = 288,
     ROWS = 289,
     ANY = 290,
     AUTO_INCREMENT = 291,
     ASC = 292,
     AND = 293,
     AS = 294,
     ALWAYS = 295,
     IDENTITY = 296,
     CONTINUE = 297,
     RESTART = 298,
     GENERATED = 299,
     STORED = 300,
     VIRTUAL = 301,
     BEFORE = 302,
     BEGINWORK = 303,
     BLOB = 304,
     BOOLEAN = 305,
     BY = 306,
     BINARY = 307,
     BOTH = 308,
     BIGINT = 309,
     BIT = 310,
     CALL = 311,
     CLOSE = 312,
     CURSOR = 313,
     CONSTRAINT = 314,
     CURRENT_TIMESTAMP = 315,
     CREATE = 316,
     CASCADE = 317,
     CHANGE = 318,
     CROSS = 319,
     CASE = 320,
     CHECK = 321,
     COMMENT = 322,
     CURRENT_DATE = 323,
     CURRENT_TIME = 324,
     CHAR = 325,
     COLLATE = 326,
     COLUMN = 327,
     CONCURRENTLY = 328,
     COPY = 329,
     CSV = 330,
     CONFLICT = 331,
     EXCLUDED = 332,
     NOTHING = 333,
     AGAINST = 334,
     MATERIALIZED = 335,
     REFRESH = 336,
     OF = 337,
     DATABASE = 338,
     DECLARE = 339,
     DEFERRABLE = 340,
     DEFERRED = 341,
     DELIMITER = 342,
     DISABLE = 343,
     DO = 344,
     DOMAIN = 345,
     DELAYED = 346,
     DAY_HOUR = 347,
     DAY_MICROSECOND = 348,
     DISTINCT = 349,
     DELETE = 350,
     DROP = 351,
     DAY_MINUTE = 352,
     DISTINCTROW = 353,
     DAY_SECOND = 354,
     DESC = 355,
     DEFAULT = 356,
     DOUBLE = 357,
     DATETIME = 358,
     DECIMAL = 359,
     DATE = 360,
     EACH = 361,
     ELSEIF = 362,
     ENABLE = 363,
     ESCAPED = 364,
     EXCEPT = 365,
     ENUM = 366,
     END = 367,
     ELSE = 368,
     EXECUTE = 369,
     EXIT = 370,
     EXPLAIN = 371,
     FETCH = 372,
     FIRST = 373,
     FOREACH = 374,
     FLOAT = 375,
     FORCE = 376,
     FOREIGN = 377,
     FORMAT = 378,
     FROM = 379,
     FULL = 380,
     FULLTEXT = 381,
     FUNCTION = 382,
     FOR = 383,
     GROUP = 384,
     HANDLER = 385,
     HEADER = 386,
     HOUR_MINUTE = 387,
     HOUR_MICROSECOND = 388,
     HIGH_PRIORITY = 389,
     HOUR_SECOND = 390,
     HAVING = 391,
     IMMEDIATE = 392,
     INOUT = 393,
     INITIALLY = 394,
     INTEGER = 395,
     INNER = 396,
     IGNORE = 397,
     INDEX = 398,
     IF = 399,
     INSERT = 400,
     INTERSECT = 401,
     INTO = 402,
     INT = 403,
     INTERVAL = 404,
     ITERATE = 405,
     JOIN = 406,
     KEY = 407,
     LEAVE = 408,
     LOOP = 409,
     LATERAL = 410,
     LISTEN = 411,
     NOTIFY = 412,
     UNLISTEN = 413,
     SELF = 414,
     INHERITS = 415,
     ONLY = 416,
     LESS = 417,
     LONGTEXT = 418,
     LOW_PRIORITY = 419,
     LEFT = 420,
     LEADING = 421,
     LIMIT = 422,
     LOCKED = 423,
     OFFSET = 424,
     LONGBLOB = 425,
     MATCH = 426,
     MAXVALUE = 427,
     MEDIUMTEXT = 428,
     MINUS = 429,
     MODIFY = 430,
     MEDIUMBLOB = 431,
     MEDIUMINT = 432,
     NATURAL = 433,
     NODE = 434,
     NO_ACTION = 435,
     NULLX = 436,
     OPEN = 437,
     OUT = 438,
     OUTER = 439,
     ON = 440,
     ORDER = 441,
     ONDUPLICATE = 442,
     PARTIAL = 443,
     PRIMARY = 444,
     PROCEDURE = 445,
     QUICK = 446,
     RANGE = 447,
     REAL = 448,
     RECLAIM = 449,
     REFERENCES = 450,
     RENAME = 451,
     RESIGNAL = 452,
     RESTRICT = 453,
     RETURN = 454,
     RETURNING = 455,
     RETURNS = 456,
     ROLLUP = 457,
     RIGHT = 458,
     REPLACE = 459,
     ROW = 460,
     SIGNAL = 461,
     TRIGGER = 462,
     UNTIL = 463,
     POLICY = 464,
     SECURITY = 465,
     PERMISSIVE = 466,
     RESTRICTIVE = 467,
     CURRENT_USER = 468,
     SQL_SMALL_RESULT = 469,
     SCHEMA = 470,
     SHARD = 471,
     SHARDS = 472,
     SHARE = 473,
     SKIP = 474,
     SOME = 475,
     SQL_CALC_FOUND_ROWS = 476,
     SQL_BIG_RESULT = 477,
     SIMPLE = 478,
     STDIN = 479,
     STDOUT = 480,
     STRAIGHT_JOIN = 481,
     SMALLINT = 482,
     SET = 483,
     SELECT = 484,
     QUOTE = 485,
     TINYTEXT = 486,
     TINYINT = 487,
     TO = 488,
     TEMPORARY = 489,
     GLOBAL = 490,
     PRESERVE = 491,
     TEXT = 492,
     THAN = 493,
     TIMESTAMP = 494,
     TABLE = 495,
     THEN = 496,
     TRAILING = 497,
     TRUNCATE = 498,
     TINYBLOB = 499,
     TIME = 500,
     UPDATE = 501,
     UNSIGNED = 502,
     UNION = 503,
     UNIQUE = 504,
     UUID = 505,
     ARRAY = 506,
     JSON = 507,
     VIEW = 508,
     USING = 509,
     USE = 510,
     HASH = 511,
     VALIDATE = 512,
     VARCHAR = 513,
     VALUES = 514,
     VARBINARY = 515,
     WHERE = 516,
     WHEN = 517,
     WHILE = 518,
     WITH = 519,
     YEAR = 520,
     YEAR_MONTH = 521,
     ZEROFILL = 522,
     EXISTS = 523,
     FSUBSTRING = 524,
     FTRIM = 525,
     FDATE_ADD = 526,
     FDATE_SUB = 527,
     FDATEDIFF = 528,
     FYEAR = 529,
     FMONTH = 530,
     FDAY = 531,
     FHOUR = 532,
     FMINUTE = 533,
     FSECOND = 534,
     FNOW = 535,
     FLEFT = 536,
     FRIGHT = 537,
     FLPAD = 538,
     FRPAD = 539,
     FREVERSE = 540,
     FREPEAT = 541,
     FINSTR = 542,
     FLOCATE = 543,
     FABS = 544,
     FCEIL = 545,
     FFLOOR = 546,
     FROUND = 547,
     FPOWER = 548,
     FSQRT = 549,
     FMOD = 550,
     FRAND = 551,
     FLOG = 552,
     FLOG10 = 553,
     FSIGN = 554,
     FPI = 555,
     FCAST = 556,
     FCONVERT = 557,
     FNULLIF = 558,
     FIFNULL = 559,
     FIF = 560,
     UNKNOWN = 561,
     FGROUP_CONCAT = 562,
     SEPARATOR = 563,
     FCOUNT = 564,
     FSUM = 565,
     FAVG = 566,
     FMIN = 567,
     FMAX = 568,
     FUPPER = 569,
     FLOWER = 570,
     FLENGTH = 571,
     FCONCAT = 572,
     FREPLACE = 573,
     FCOALESCE = 574,
     FGEN_RANDOM_UUID = 575,
     FGEN_RANDOM_UUID_V7 = 576,
     FSNOWFLAKE_ID = 577,
     FLAST_INSERT_ID = 578,
     FSCOPE_IDENTITY = 579,
     FAT_IDENTITY = 580,
     FAT_LAST_INSERT_ID = 581,
     FEVO_SLEEP = 582,
     FEVO_JITTER = 583,
     FROW_NUMBER = 584,
     FRANK = 585,
     FDENSE_RANK = 586,
     FLEAD = 587,
     FLAG = 588,
     FNTILE = 589,
     FPERCENT_RANK = 590,
     FCUME_DIST = 591,
     OVER = 592,
     PARTITION = 593,
     FJSON_EXTRACT = 594,
     FJSON_UNQUOTE = 595,
     FJSON_TYPE = 596,
     FJSON_LENGTH = 597,
     FJSON_DEPTH = 598,
     FJSON_VALID = 599,
     FJSON_KEYS = 600,
     FJSON_PRETTY = 601,
     FJSON_QUOTE = 602,
     FJSON_SET = 603,
     FJSON_INSERT = 604,
     FJSON_REPLACE = 605,
     FJSON_REMOVE = 606,
     FJSON_CONTAINS = 607,
     FJSON_CONTAINS_PATH = 608,
     FJSON_SEARCH = 609,
     FJSON_OBJECT = 610,
     FJSON_ARRAY = 611,
     FJSON_ARRAYAGG = 612,
     SEQUENCE = 613,
     FNEXTVAL = 614,
     FCURRVAL = 615,
     FSETVAL = 616,
     FLASTVAL = 617,
     START = 618,
     INCREMENT = 619,
     MINVALUE = 620,
     CYCLE = 621,
     FARRAY_LENGTH = 622,
     FUNNEST = 623,
     FEVO_NOTIFY = 624,
     FPG_LISTENING_CHANNELS = 625
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
#define SAMPLE 287
#define PERCENT 288
#define ROWS 289
#define ANY 290
#define AUTO_INCREMENT 291
#define ASC 292
#define AND 293
#define AS 294
#define ALWAYS 295
#define IDENTITY 296
#define CONTINUE 297
#define RESTART 298
#define GENERATED 299
#define STORED 300
#define VIRTUAL 301
#define BEFORE 302
#define BEGINWORK 303
#define BLOB 304
#define BOOLEAN 305
#define BY 306
#define BINARY 307
#define BOTH 308
#define BIGINT 309
#define BIT 310
#define CALL 311
#define CLOSE 312
#define CURSOR 313
#define CONSTRAINT 314
#define CURRENT_TIMESTAMP 315
#define CREATE 316
#define CASCADE 317
#define CHANGE 318
#define CROSS 319
#define CASE 320
#define CHECK 321
#define COMMENT 322
#define CURRENT_DATE 323
#define CURRENT_TIME 324
#define CHAR 325
#define COLLATE 326
#define COLUMN 327
#define CONCURRENTLY 328
#define COPY 329
#define CSV 330
#define CONFLICT 331
#define EXCLUDED 332
#define NOTHING 333
#define AGAINST 334
#define MATERIALIZED 335
#define REFRESH 336
#define OF 337
#define DATABASE 338
#define DECLARE 339
#define DEFERRABLE 340
#define DEFERRED 341
#define DELIMITER 342
#define DISABLE 343
#define DO 344
#define DOMAIN 345
#define DELAYED 346
#define DAY_HOUR 347
#define DAY_MICROSECOND 348
#define DISTINCT 349
#define DELETE 350
#define DROP 351
#define DAY_MINUTE 352
#define DISTINCTROW 353
#define DAY_SECOND 354
#define DESC 355
#define DEFAULT 356
#define DOUBLE 357
#define DATETIME 358
#define DECIMAL 359
#define DATE 360
#define EACH 361
#define ELSEIF 362
#define ENABLE 363
#define ESCAPED 364
#define EXCEPT 365
#define ENUM 366
#define END 367
#define ELSE 368
#define EXECUTE 369
#define EXIT 370
#define EXPLAIN 371
#define FETCH 372
#define FIRST 373
#define FOREACH 374
#define FLOAT 375
#define FORCE 376
#define FOREIGN 377
#define FORMAT 378
#define FROM 379
#define FULL 380
#define FULLTEXT 381
#define FUNCTION 382
#define FOR 383
#define GROUP 384
#define HANDLER 385
#define HEADER 386
#define HOUR_MINUTE 387
#define HOUR_MICROSECOND 388
#define HIGH_PRIORITY 389
#define HOUR_SECOND 390
#define HAVING 391
#define IMMEDIATE 392
#define INOUT 393
#define INITIALLY 394
#define INTEGER 395
#define INNER 396
#define IGNORE 397
#define INDEX 398
#define IF 399
#define INSERT 400
#define INTERSECT 401
#define INTO 402
#define INT 403
#define INTERVAL 404
#define ITERATE 405
#define JOIN 406
#define KEY 407
#define LEAVE 408
#define LOOP 409
#define LATERAL 410
#define LISTEN 411
#define NOTIFY 412
#define UNLISTEN 413
#define SELF 414
#define INHERITS 415
#define ONLY 416
#define LESS 417
#define LONGTEXT 418
#define LOW_PRIORITY 419
#define LEFT 420
#define LEADING 421
#define LIMIT 422
#define LOCKED 423
#define OFFSET 424
#define LONGBLOB 425
#define MATCH 426
#define MAXVALUE 427
#define MEDIUMTEXT 428
#define MINUS 429
#define MODIFY 430
#define MEDIUMBLOB 431
#define MEDIUMINT 432
#define NATURAL 433
#define NODE 434
#define NO_ACTION 435
#define NULLX 436
#define OPEN 437
#define OUT 438
#define OUTER 439
#define ON 440
#define ORDER 441
#define ONDUPLICATE 442
#define PARTIAL 443
#define PRIMARY 444
#define PROCEDURE 445
#define QUICK 446
#define RANGE 447
#define REAL 448
#define RECLAIM 449
#define REFERENCES 450
#define RENAME 451
#define RESIGNAL 452
#define RESTRICT 453
#define RETURN 454
#define RETURNING 455
#define RETURNS 456
#define ROLLUP 457
#define RIGHT 458
#define REPLACE 459
#define ROW 460
#define SIGNAL 461
#define TRIGGER 462
#define UNTIL 463
#define POLICY 464
#define SECURITY 465
#define PERMISSIVE 466
#define RESTRICTIVE 467
#define CURRENT_USER 468
#define SQL_SMALL_RESULT 469
#define SCHEMA 470
#define SHARD 471
#define SHARDS 472
#define SHARE 473
#define SKIP 474
#define SOME 475
#define SQL_CALC_FOUND_ROWS 476
#define SQL_BIG_RESULT 477
#define SIMPLE 478
#define STDIN 479
#define STDOUT 480
#define STRAIGHT_JOIN 481
#define SMALLINT 482
#define SET 483
#define SELECT 484
#define QUOTE 485
#define TINYTEXT 486
#define TINYINT 487
#define TO 488
#define TEMPORARY 489
#define GLOBAL 490
#define PRESERVE 491
#define TEXT 492
#define THAN 493
#define TIMESTAMP 494
#define TABLE 495
#define THEN 496
#define TRAILING 497
#define TRUNCATE 498
#define TINYBLOB 499
#define TIME 500
#define UPDATE 501
#define UNSIGNED 502
#define UNION 503
#define UNIQUE 504
#define UUID 505
#define ARRAY 506
#define JSON 507
#define VIEW 508
#define USING 509
#define USE 510
#define HASH 511
#define VALIDATE 512
#define VARCHAR 513
#define VALUES 514
#define VARBINARY 515
#define WHERE 516
#define WHEN 517
#define WHILE 518
#define WITH 519
#define YEAR 520
#define YEAR_MONTH 521
#define ZEROFILL 522
#define EXISTS 523
#define FSUBSTRING 524
#define FTRIM 525
#define FDATE_ADD 526
#define FDATE_SUB 527
#define FDATEDIFF 528
#define FYEAR 529
#define FMONTH 530
#define FDAY 531
#define FHOUR 532
#define FMINUTE 533
#define FSECOND 534
#define FNOW 535
#define FLEFT 536
#define FRIGHT 537
#define FLPAD 538
#define FRPAD 539
#define FREVERSE 540
#define FREPEAT 541
#define FINSTR 542
#define FLOCATE 543
#define FABS 544
#define FCEIL 545
#define FFLOOR 546
#define FROUND 547
#define FPOWER 548
#define FSQRT 549
#define FMOD 550
#define FRAND 551
#define FLOG 552
#define FLOG10 553
#define FSIGN 554
#define FPI 555
#define FCAST 556
#define FCONVERT 557
#define FNULLIF 558
#define FIFNULL 559
#define FIF 560
#define UNKNOWN 561
#define FGROUP_CONCAT 562
#define SEPARATOR 563
#define FCOUNT 564
#define FSUM 565
#define FAVG 566
#define FMIN 567
#define FMAX 568
#define FUPPER 569
#define FLOWER 570
#define FLENGTH 571
#define FCONCAT 572
#define FREPLACE 573
#define FCOALESCE 574
#define FGEN_RANDOM_UUID 575
#define FGEN_RANDOM_UUID_V7 576
#define FSNOWFLAKE_ID 577
#define FLAST_INSERT_ID 578
#define FSCOPE_IDENTITY 579
#define FAT_IDENTITY 580
#define FAT_LAST_INSERT_ID 581
#define FEVO_SLEEP 582
#define FEVO_JITTER 583
#define FROW_NUMBER 584
#define FRANK 585
#define FDENSE_RANK 586
#define FLEAD 587
#define FLAG 588
#define FNTILE 589
#define FPERCENT_RANK 590
#define FCUME_DIST 591
#define OVER 592
#define PARTITION 593
#define FJSON_EXTRACT 594
#define FJSON_UNQUOTE 595
#define FJSON_TYPE 596
#define FJSON_LENGTH 597
#define FJSON_DEPTH 598
#define FJSON_VALID 599
#define FJSON_KEYS 600
#define FJSON_PRETTY 601
#define FJSON_QUOTE 602
#define FJSON_SET 603
#define FJSON_INSERT 604
#define FJSON_REPLACE 605
#define FJSON_REMOVE 606
#define FJSON_CONTAINS 607
#define FJSON_CONTAINS_PATH 608
#define FJSON_SEARCH 609
#define FJSON_OBJECT 610
#define FJSON_ARRAY 611
#define FJSON_ARRAYAGG 612
#define SEQUENCE 613
#define FNEXTVAL 614
#define FCURRVAL 615
#define FSETVAL 616
#define FLASTVAL 617
#define START 618
#define INCREMENT 619
#define MINVALUE 620
#define CYCLE 621
#define FARRAY_LENGTH 622
#define FUNNEST 623
#define FEVO_NOTIFY 624
#define FPG_LISTENING_CHANNELS 625




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
#line 907 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 920 "parser/evoparser.tab.c"

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
#define YYLAST   12912

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  388
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  938
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2303

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   625

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     383,   384,    26,    24,   385,    25,   382,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   381,
       2,   387,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   386,    30,     2,     2,     2,     2,     2,
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
     375,   376,   377,   378,   379,   380
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
    1957,  1959,  1964,  1971,  1972,  1977,  1982,  1985,  1986,  1991,
    1999,  2004,  2006,  2010,  2012,  2014,  2016,  2027,  2028,  2031,
    2034,  2035,  2038,  2041,  2044,  2047,  2050,  2051,  2054,  2056,
    2060,  2061,  2066,  2067,  2073,  2079,  2090,  2101,  2119,  2132,
    2152,  2164,  2171,  2180,  2187,  2194,  2201,  2211,  2218,  2224,
    2233,  2241,  2251,  2260,  2271,  2281,  2289,  2297,  2298,  2300,
    2303,  2305,  2316,  2323,  2324,  2325,  2331,  2332,  2337,  2338,
    2342,  2347,  2350,  2351,  2357,  2361,  2367,  2368,  2371,  2374,
    2377,  2380,  2382,  2383,  2384,  2388,  2390,  2394,  2398,  2399,
    2406,  2408,  2410,  2414,  2418,  2426,  2430,  2434,  2440,  2446,
    2448,  2457,  2465,  2473,  2475,  2476,  2484,  2485,  2489,  2491,
    2495,  2497,  2499,  2501,  2503,  2505,  2506,  2508,  2513,  2517,
    2519,  2523,  2526,  2529,  2532,  2534,  2537,  2540,  2543,  2545,
    2547,  2557,  2558,  2561,  2564,  2568,  2574,  2580,  2588,  2594,
    2596,  2601,  2606,  2610,  2616,  2620,  2626,  2627,  2630,  2632,
    2638,  2646,  2654,  2664,  2676,  2678,  2681,  2685,  2687,  2698,
    2699,  2704,  2716,  2735,  2736,  2741,  2745,  2751,  2757,  2767,
    2778,  2786,  2788,  2792,  2802,  2812,  2822,  2829,  2841,  2850,
    2851,  2853,  2856,  2858,  2862,  2868,  2876,  2881,  2886,  2892,
    2898,  2903,  2910,  2922,  2936,  2950,  2966,  2971,  2978,  2980,
    2984,  2986,  2990,  2992,  2996,  2997,  3002,  3008,  3013,  3019,
    3024,  3030,  3035,  3041,  3046,  3051,  3055,  3059,  3063,  3066,
    3070,  3075,  3080,  3082,  3086,  3087,  3092,  3093,  3097,  3100,
    3104,  3108,  3112,  3116,  3122,  3128,  3134,  3138,  3144,  3147,
    3155,  3161,  3169,  3175,  3178,  3182,  3185,  3189,  3192,  3196,
    3202,  3207,  3213,  3221,  3230,  3239,  3247,  3254,  3261,  3267,
    3268,  3272,  3278,  3279,  3281,  3282,  3285,  3288,  3289,  3294,
    3298,  3301,  3305,  3309,  3313,  3317,  3321,  3325,  3329,  3333,
    3337,  3341,  3343,  3345,  3347,  3349,  3351,  3355,  3361,  3364,
    3369,  3371,  3373,  3375,  3377,  3381,  3385,  3389,  3393,  3399,
    3405,  3407,  3409,  3411,  3415,  3417,  3421,  3425,  3426,  3428,
    3430,  3432,  3436,  3440,  3443,  3445,  3449,  3453,  3457,  3459,
    3470,  3480,  3493,  3505,  3518,  3530,  3545,  3559,  3560,  3562,
    3564,  3568,  3571,  3575,  3579,  3583,  3585,  3587,  3589,  3591,
    3593,  3595,  3597,  3599,  3601,  3603,  3604,  3607,  3612,  3618,
    3624,  3630,  3636,  3642,  3644,  3646,  3648,  3650,  3652,  3654,
    3656,  3658,  3660,  3662,  3664,  3666,  3668,  3670,  3672,  3674,
    3676,  3678,  3680,  3682,  3684,  3686,  3688,  3690,  3692,  3694,
    3696,  3698,  3700,  3702,  3704,  3706,  3708,  3710,  3712,  3714,
    3716,  3718,  3720,  3722,  3724,  3726,  3728,  3730,  3732,  3734,
    3736,  3738,  3740,  3742,  3744,  3746,  3748,  3750,  3752,  3754,
    3756,  3758,  3760,  3762,  3764,  3766,  3768,  3770,  3772,  3774,
    3776,  3778,  3780,  3782,  3784,  3786,  3788,  3790,  3792,  3794,
    3796,  3798,  3800,  3802,  3804,  3806,  3808,  3810,  3812,  3814,
    3816,  3818,  3820,  3822,  3824,  3826,  3828,  3830,  3832,  3834,
    3836,  3838,  3840,  3842,  3844,  3846,  3848,  3850,  3852,  3854,
    3856,  3858,  3860,  3862,  3864,  3866,  3868,  3870,  3872,  3874,
    3876,  3878,  3880,  3882,  3884,  3886,  3888,  3890,  3894,  3900,
    3904,  3910,  3912,  3917,  3923,  3925,  3929,  3931,  3933,  3935,
    3937,  3939,  3941,  3943,  3945,  3959,  3961,  3963,  3965,  3967,
    3969,  3971,  3975,  3981,  3986,  3991,  3993,  3999,  4000,  4003,
    4007,  4010,  4014,  4017,  4020,  4023,  4025,  4028,  4030,  4034,
    4040,  4045,  4050,  4057,  4064,  4065,  4068,  4071,  4073
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     389,     0,    -1,   428,   381,    -1,   428,   381,   389,    -1,
       3,    -1,     3,   382,     3,    -1,    87,   382,     3,    -1,
     181,   383,     3,   384,    89,   383,     4,   384,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   191,
      -1,   390,    24,   390,    -1,   390,    25,   390,    -1,   390,
      26,   390,    -1,   390,    27,   390,    -1,   390,    28,   390,
      -1,   390,    29,   390,    -1,    25,   390,    -1,   383,   390,
     384,    -1,   390,    12,   390,    -1,   390,    10,   390,    -1,
     390,    11,   390,    -1,   390,    21,   390,    -1,   390,    22,
     390,    -1,   390,    30,   390,    -1,   390,    23,   390,    -1,
     390,    32,   390,    -1,   390,    31,   390,    -1,    18,   390,
      -1,    17,   390,    -1,   390,    20,   390,    -1,    -1,   390,
      20,   383,   391,   429,   384,    -1,    -1,   390,    20,    45,
     383,   392,   429,   384,    -1,    -1,   390,    20,   230,   383,
     393,   429,   384,    -1,    -1,   390,    20,    38,   383,   394,
     429,   384,    -1,   390,    20,    45,   383,   398,   384,    -1,
     390,    20,   230,   383,   398,   384,    -1,   390,    15,   191,
      -1,   390,    15,    18,   191,    -1,   390,    15,     6,    -1,
     390,    15,    18,     6,    -1,     8,     9,   390,    -1,   390,
      19,   390,    48,   390,    -1,   390,    18,    19,   390,    48,
     390,    -1,   390,    -1,   390,   385,   395,    -1,   390,    -1,
     390,   385,   396,    -1,    -1,   261,    34,   397,   396,   386,
      -1,   261,    34,   386,    -1,   390,    34,   390,   386,    -1,
     390,    -1,   377,   383,   390,   384,    -1,   377,   383,   390,
     385,   390,   384,    -1,   378,   383,   390,   384,    -1,   379,
     383,   390,   385,   390,   384,    -1,   380,   383,   384,    -1,
      -1,   395,    -1,    -1,   390,    16,   383,   400,   395,   384,
      -1,    -1,   390,    18,    16,   383,   401,   395,   384,    -1,
      -1,   390,    16,   383,   402,   429,   384,    -1,    -1,   390,
      18,    16,   383,   403,   429,   384,    -1,    -1,   278,   383,
     404,   429,   384,    -1,     3,   383,   399,   384,    -1,   319,
     383,    26,   384,    -1,   319,   383,   390,   384,    -1,   320,
     383,   390,   384,    -1,   321,   383,   390,   384,    -1,   322,
     383,   390,   384,    -1,   323,   383,   390,   384,    -1,   317,
     383,   390,   384,    -1,   317,   383,   390,   318,     4,   384,
      -1,    -1,   339,   383,   384,   347,   383,   405,   436,   438,
     384,    -1,    -1,   340,   383,   384,   347,   383,   406,   436,
     438,   384,    -1,    -1,   341,   383,   384,   347,   383,   407,
     436,   438,   384,    -1,    -1,   320,   383,   390,   384,   347,
     383,   408,   436,   438,   384,    -1,    -1,   319,   383,    26,
     384,   347,   383,   409,   436,   438,   384,    -1,    -1,   319,
     383,   390,   384,   347,   383,   410,   436,   438,   384,    -1,
      -1,   321,   383,   390,   384,   347,   383,   411,   436,   438,
     384,    -1,    -1,   322,   383,   390,   384,   347,   383,   412,
     436,   438,   384,    -1,    -1,   323,   383,   390,   384,   347,
     383,   413,   436,   438,   384,    -1,    -1,   342,   383,   390,
     384,   347,   383,   414,   436,   438,   384,    -1,    -1,   342,
     383,   390,   385,     5,   384,   347,   383,   415,   436,   438,
     384,    -1,    -1,   342,   383,   390,   385,     5,   385,     4,
     384,   347,   383,   416,   436,   438,   384,    -1,    -1,   342,
     383,   390,   385,     5,   385,     5,   384,   347,   383,   417,
     436,   438,   384,    -1,    -1,   343,   383,   390,   384,   347,
     383,   418,   436,   438,   384,    -1,    -1,   343,   383,   390,
     385,     5,   384,   347,   383,   419,   436,   438,   384,    -1,
      -1,   343,   383,   390,   385,     5,   385,     4,   384,   347,
     383,   420,   436,   438,   384,    -1,    -1,   343,   383,   390,
     385,     5,   385,     5,   384,   347,   383,   421,   436,   438,
     384,    -1,    -1,   344,   383,     5,   384,   347,   383,   422,
     436,   438,   384,    -1,    -1,   345,   383,   384,   347,   383,
     423,   436,   438,   384,    -1,    -1,   346,   383,   384,   347,
     383,   424,   436,   438,   384,    -1,   279,   383,   390,   385,
     390,   385,   390,   384,    -1,   279,   383,   390,   385,   390,
     384,    -1,   279,   383,   390,   134,   390,   384,    -1,   279,
     383,   390,   134,   390,   138,   390,   384,    -1,   280,   383,
     390,   384,    -1,   280,   383,   425,   390,   134,   390,   384,
      -1,   280,   383,   425,   134,   390,   384,    -1,   324,   383,
     390,   384,    -1,   325,   383,   390,   384,    -1,   326,   383,
     390,   384,    -1,   327,   383,   390,   385,   390,   384,    -1,
     328,   383,   390,   385,   390,   385,   390,   384,    -1,   329,
     383,   390,   385,   390,   384,    -1,   291,   383,   390,   385,
     390,   384,    -1,   292,   383,   390,   385,   390,   384,    -1,
     293,   383,   390,   385,   390,   385,   390,   384,    -1,   294,
     383,   390,   385,   390,   385,   390,   384,    -1,   295,   383,
     390,   384,    -1,   296,   383,   390,   385,   390,   384,    -1,
     297,   383,   390,   385,   390,   384,    -1,   298,   383,   390,
     385,   390,   384,    -1,   299,   383,   390,   384,    -1,   300,
     383,   390,   384,    -1,   301,   383,   390,   384,    -1,   302,
     383,   390,   385,   390,   384,    -1,   302,   383,   390,   384,
      -1,   303,   383,   390,   385,   390,   384,    -1,   304,   383,
     390,   384,    -1,   305,   383,   390,   385,   390,   384,    -1,
     306,   383,   384,    -1,   307,   383,   390,   384,    -1,   308,
     383,   390,   384,    -1,   309,   383,   390,   384,    -1,   310,
     383,   384,    -1,   290,   383,   384,    -1,   283,   383,   390,
     385,   390,   384,    -1,   284,   383,   390,   384,    -1,   285,
     383,   390,   384,    -1,   286,   383,   390,   384,    -1,   287,
     383,   390,   384,    -1,   288,   383,   390,   384,    -1,   289,
     383,   390,   384,    -1,   349,   383,   390,   385,   390,   384,
      -1,   350,   383,   390,   384,    -1,   351,   383,   390,   384,
      -1,   352,   383,   390,   384,    -1,   353,   383,   390,   384,
      -1,   354,   383,   390,   384,    -1,   355,   383,   390,   384,
      -1,   356,   383,   390,   384,    -1,   357,   383,   390,   384,
      -1,   358,   383,   390,   385,   390,   385,   390,   384,    -1,
     359,   383,   390,   385,   390,   385,   390,   384,    -1,   360,
     383,   390,   385,   390,   385,   390,   384,    -1,   361,   383,
     390,   385,   390,   384,    -1,   362,   383,   390,   385,   390,
     384,    -1,   363,   383,   390,   385,   390,   385,   390,   384,
      -1,   364,   383,   390,   385,   390,   385,   390,   384,    -1,
     365,   383,   390,   385,   390,   384,    -1,   365,   383,   390,
     385,   390,   385,   390,   385,   390,   384,    -1,   366,   383,
     390,   384,    -1,   366,   383,   390,   385,   390,   384,    -1,
     366,   383,   390,   385,   390,   385,   390,   384,    -1,   367,
     383,   390,   384,    -1,   369,   383,   390,   384,    -1,   370,
     383,   390,   384,    -1,   371,   383,   390,   385,   390,   384,
      -1,   371,   383,   390,   385,   390,   385,   390,   384,    -1,
     372,   383,   384,    -1,   311,   383,   390,    49,   552,   384,
      -1,   312,   383,   390,   385,   552,   384,    -1,   313,   383,
     390,   385,   390,   384,    -1,   314,   383,   390,   385,   390,
     384,    -1,   315,   383,   390,   385,   390,   385,   390,   384,
      -1,   390,    15,   316,    -1,   327,   383,   390,   385,   390,
     385,   390,   384,    -1,   327,   383,   390,   385,   390,   385,
     390,   385,   390,   384,    -1,   330,   383,   384,    -1,   331,
     383,   384,    -1,   332,   383,   384,    -1,   333,   383,   384,
      -1,   334,   383,   384,    -1,   335,    -1,   336,    -1,   337,
     383,   390,   384,    -1,   338,   383,   390,   385,   390,   384,
      -1,   176,    -1,   252,    -1,    63,    -1,   281,   383,   390,
     385,   426,   384,    -1,   282,   383,   390,   385,   426,   384,
      -1,   159,   390,   275,    -1,   159,   390,   102,    -1,   159,
     390,   103,    -1,   159,   390,   107,    -1,   159,   390,   109,
      -1,   159,   390,   276,    -1,   159,   390,   143,    -1,   159,
     390,   142,    -1,   159,   390,   145,    -1,    75,   390,   427,
     122,    -1,    75,   390,   427,   123,   390,   122,    -1,    75,
     427,   122,    -1,    75,   427,   123,   390,   122,    -1,   272,
     390,   251,   390,    -1,   427,   272,   390,   251,   390,    -1,
     390,    14,   390,    -1,   390,    18,    14,   390,    -1,   390,
      13,   390,    -1,   390,    18,    13,   390,    -1,    70,    -1,
      78,    -1,    79,    -1,   223,    -1,   429,    -1,   239,   447,
     448,    -1,   239,   447,   448,   134,   451,   430,   431,   435,
     440,   443,   444,   445,    -1,   239,   447,   448,   157,     3,
     134,   451,   430,   431,   435,   440,   443,    -1,    -1,   271,
     390,    -1,    -1,   139,    61,   432,   434,    -1,   390,   433,
      -1,   432,   385,   390,   433,    -1,    -1,    47,    -1,   110,
      -1,    -1,   274,   212,    -1,    -1,   146,   390,    -1,    -1,
     348,    61,   437,    -1,     3,    -1,   437,   385,     3,    -1,
      -1,   196,    61,   439,    -1,     3,   433,    -1,   439,   385,
       3,   433,    -1,    -1,   196,    61,   441,    -1,   442,    -1,
     441,   385,   442,    -1,     3,   433,    -1,     3,   382,     3,
     433,    -1,     5,   433,    -1,    -1,   177,   390,    -1,   177,
     390,   385,   390,    -1,   177,   390,   179,   390,    -1,    -1,
     138,   256,    -1,   138,   228,    -1,   138,   256,   229,   178,
      -1,   138,   228,   229,   178,    -1,    -1,   157,   446,    -1,
       3,    -1,   446,   385,     3,    -1,    -1,   447,    38,    -1,
     447,   104,    -1,   447,   108,    -1,   447,   144,    -1,   447,
     236,    -1,   447,   224,    -1,   447,   232,    -1,   447,   231,
      -1,   449,    -1,   448,   385,   449,    -1,    26,    -1,   390,
     450,    -1,    49,     3,    -1,     3,    -1,    -1,   452,    -1,
     451,   385,   452,    -1,   453,    -1,   457,    -1,     3,   450,
     464,    -1,   171,     3,   450,   464,    -1,     3,   382,     3,
     450,   464,    -1,   467,   456,     3,    -1,   454,   456,     3,
      -1,   378,   383,   390,   384,    -1,   378,   383,   390,   384,
     456,     3,    -1,   378,   383,   390,   384,   456,     3,   383,
       3,   384,    -1,   383,   451,   384,    -1,    -1,   165,   383,
     455,   429,   384,    -1,    49,    -1,    -1,   452,   458,   161,
     453,   462,    -1,   452,   236,   453,    -1,   452,   236,   453,
     195,   390,    -1,   452,   460,   459,   161,   453,   463,    -1,
     452,   188,   461,   161,   453,    -1,    -1,   151,    -1,    74,
      -1,    -1,   194,    -1,   175,    -1,   213,    -1,   175,   459,
      -1,   213,   459,    -1,    -1,    -1,   463,    -1,   195,   390,
      -1,   264,   383,   446,   384,    -1,   265,   162,   465,   383,
     466,   384,    -1,   152,   162,   465,   383,   466,   384,    -1,
     131,   162,   465,   383,   466,   384,    -1,    -1,   138,   161,
      -1,    -1,     3,    -1,   466,   385,     3,    -1,   383,   429,
     384,    -1,   468,    -1,   105,   469,   134,     3,   430,   440,
     443,   578,    -1,   469,   174,    -1,   469,   201,    -1,   469,
     152,    -1,    -1,   105,   469,   470,   134,   451,   430,    -1,
       3,   471,    -1,   470,   385,     3,   471,    -1,    -1,   382,
      26,    -1,   105,   469,   134,   470,   264,   451,   430,    -1,
     472,    -1,   106,   250,     3,   473,    -1,   106,   250,   154,
     278,     3,   473,    -1,    -1,    72,    -1,   208,    -1,   474,
      -1,    71,   153,     3,   195,     3,   383,   475,   384,    -1,
      71,   136,   153,     3,   195,     3,   383,   475,   384,    -1,
      71,   153,   154,   278,     3,   195,     3,   383,   475,   384,
      -1,    71,   259,   153,     3,   195,     3,   383,   475,   384,
      -1,    71,   259,   153,   154,   278,     3,   195,     3,   383,
     475,   384,    -1,    71,   153,     3,   195,     3,   264,   266,
     383,   475,   384,    -1,    71,   153,   154,   278,     3,   195,
       3,   264,   266,   383,   475,   384,    -1,    71,   259,   153,
       3,   195,     3,   264,   266,   383,   475,   384,    -1,    71,
     259,   153,   154,   278,     3,   195,     3,   264,   266,   383,
     475,   384,    -1,    71,   153,    83,     3,   195,     3,   383,
     475,   384,    -1,    71,   153,    83,   154,   278,     3,   195,
       3,   383,   475,   384,    -1,    71,   259,   153,    83,     3,
     195,     3,   383,   475,   384,    -1,    71,   259,   153,    83,
     154,   278,     3,   195,     3,   383,   475,   384,    -1,    71,
     153,    83,     3,   195,     3,   264,   266,   383,   475,   384,
      -1,    71,   259,   153,    83,     3,   195,     3,   264,   266,
     383,   475,   384,    -1,     3,    -1,   475,   385,     3,    -1,
     476,    -1,   324,   383,     3,   384,    -1,   325,   383,     3,
     384,    -1,   326,   383,     3,   384,    -1,   327,   383,     3,
     385,     3,   384,    -1,   477,    -1,   106,   153,     3,    -1,
     478,   480,    -1,   253,   250,     3,    -1,   253,   250,     3,
     385,   479,    -1,     3,    -1,   479,   385,     3,    -1,    -1,
     480,    72,    -1,   480,   208,    -1,   480,    53,    51,    -1,
     480,    52,    51,    -1,   481,    -1,   482,    -1,   483,    -1,
     166,     3,    -1,   166,     3,   169,    -1,   168,     3,    -1,
     168,    26,    -1,   167,     3,    -1,   167,     3,   385,     4,
      -1,   484,    -1,   204,   250,     3,    -1,   485,    -1,   487,
       3,   486,   488,    -1,   487,     3,   382,     3,   486,   488,
      -1,    -1,   274,    42,     5,    43,    -1,   274,    42,     5,
      44,    -1,    39,   250,    -1,    -1,   256,    40,   195,   489,
      -1,   256,    40,   195,   489,   274,     5,    41,    -1,   106,
      40,   195,   489,    -1,     3,    -1,   489,   385,     3,    -1,
     498,    -1,   490,    -1,   497,    -1,    71,   219,     3,   195,
       3,   491,   492,   493,   495,   496,    -1,    -1,    49,   221,
      -1,    49,   222,    -1,    -1,   138,    38,    -1,   138,   239,
      -1,   138,   155,    -1,   138,   256,    -1,   138,   105,    -1,
      -1,   243,   494,    -1,     3,    -1,   494,   385,     3,    -1,
      -1,   264,   383,   390,   384,    -1,    -1,   274,    76,   383,
     390,   384,    -1,   106,   219,     3,   195,     3,    -1,    35,
     250,     3,    36,    69,     3,    76,   383,   390,   384,    -1,
      35,   250,     3,    36,    69,     3,   259,   383,   545,   384,
      -1,    35,   250,     3,    36,    69,     3,   132,   162,   383,
     542,   384,   205,     3,   383,   543,   384,   544,    -1,    35,
     250,     3,    36,    69,     3,    76,   383,   390,   384,    18,
     267,    -1,    35,   250,     3,    36,    69,     3,   132,   162,
     383,   542,   384,   205,     3,   383,   543,   384,   544,    18,
     267,    -1,    35,   250,     3,    36,    69,     3,   199,   162,
     383,   541,   384,    -1,    35,   250,     3,   106,    69,     3,
      -1,    35,   250,     3,   206,    69,     3,   243,     3,    -1,
      35,   250,     3,   118,    69,     3,    -1,    35,   250,     3,
      98,    69,     3,    -1,    35,   250,     3,   267,    69,     3,
      -1,    35,   250,     3,    36,    82,     3,   552,   547,   499,
      -1,    35,   250,     3,   106,    82,     3,    -1,    35,   250,
       3,   106,     3,    -1,    35,   250,     3,   206,    82,     3,
     243,     3,    -1,    35,   250,     3,   206,     3,   243,     3,
      -1,    35,   250,     3,   185,    82,     3,   552,   547,   499,
      -1,    35,   250,     3,   185,     3,   552,   547,   499,    -1,
      35,   250,     3,    73,    82,     3,     3,   552,   547,   499,
      -1,    35,   250,     3,    73,     3,     3,   552,   547,   499,
      -1,    35,   250,     3,   118,   215,     3,   220,    -1,    35,
     250,     3,    98,   215,     3,   220,    -1,    -1,   128,    -1,
      37,     3,    -1,   500,    -1,   155,   508,   509,     3,   510,
     269,   512,   501,   503,   578,    -1,   155,   508,   509,     3,
     510,   429,    -1,    -1,    -1,   197,   162,   256,   502,   507,
      -1,    -1,   195,    86,   504,   505,    -1,    -1,   383,     3,
     384,    -1,   383,     3,   385,     3,    -1,    99,    88,    -1,
      -1,    99,   256,   506,   238,   507,    -1,     3,    20,   390,
      -1,   507,   385,     3,    20,   390,    -1,    -1,   508,   174,
      -1,   508,   101,    -1,   508,   144,    -1,   508,   152,    -1,
     157,    -1,    -1,    -1,   383,   511,   384,    -1,     3,    -1,
     511,   385,     3,    -1,   383,   514,   384,    -1,    -1,   512,
     385,   513,   383,   514,   384,    -1,   390,    -1,   111,    -1,
     514,   385,   390,    -1,   514,   385,   111,    -1,   155,   508,
     509,     3,   238,   515,   501,    -1,     3,    20,   390,    -1,
       3,    20,   111,    -1,   515,   385,     3,    20,   390,    -1,
     515,   385,     3,    20,   111,    -1,   516,    -1,   214,   508,
     509,     3,   510,   269,   512,   501,    -1,   214,   508,   509,
       3,   238,   515,   501,    -1,   214,   508,   509,     3,   510,
     429,   501,    -1,   517,    -1,    -1,    84,     3,   518,   519,
     521,   522,   523,    -1,    -1,   383,   520,   384,    -1,     3,
      -1,   520,   385,     3,    -1,   134,    -1,   243,    -1,     4,
      -1,   234,    -1,   235,    -1,    -1,   524,    -1,   274,   383,
     524,   384,    -1,   383,   524,   384,    -1,   525,    -1,   524,
     385,   525,    -1,   133,    85,    -1,   133,   247,    -1,    97,
       4,    -1,   141,    -1,   141,     6,    -1,   191,     4,    -1,
     240,     4,    -1,    85,    -1,   526,    -1,   256,   527,   451,
     238,   528,   430,   440,   443,   578,    -1,    -1,   508,   174,
      -1,   508,   152,    -1,     3,    20,   390,    -1,     3,   382,
       3,    20,   390,    -1,   528,   385,     3,    20,   390,    -1,
     528,   385,     3,   382,     3,    20,   390,    -1,   206,   250,
       3,   243,     3,    -1,   529,    -1,    71,    93,   530,     3,
      -1,    71,   225,   530,     3,    -1,   106,    93,     3,    -1,
     106,    93,   154,   278,     3,    -1,   106,   225,     3,    -1,
     106,   225,   154,   278,     3,    -1,    -1,   154,   278,    -1,
     531,    -1,    71,   100,     3,    49,   552,    -1,    71,   100,
       3,    49,   552,   111,   390,    -1,    71,   100,     3,    49,
     552,    18,   191,    -1,    71,   100,     3,    49,   552,    76,
     383,   390,   384,    -1,    71,   100,     3,    49,   552,    18,
     191,    76,   383,   390,   384,    -1,   532,    -1,   265,     3,
      -1,   265,    93,     3,    -1,   533,    -1,    71,   538,   250,
     530,     3,   383,   539,   384,   535,   534,    -1,    -1,   170,
     383,     3,   384,    -1,    71,   538,   250,   530,     3,   382,
       3,   383,   539,   384,   535,    -1,    71,   538,   250,   530,
       3,   348,    92,     3,   138,   269,   134,   383,     5,   384,
     243,   383,     5,   384,    -1,    -1,   535,    46,    20,     5,
      -1,   535,    46,     5,    -1,   535,   195,     3,   105,     3,
      -1,   535,   195,     3,   246,     3,    -1,   535,   226,    61,
     266,   383,     3,   384,   227,     5,    -1,   535,   226,    61,
     202,   383,     3,   384,   383,   536,   384,    -1,   535,   348,
      61,   202,   383,     3,   384,    -1,   537,    -1,   536,   385,
     537,    -1,   226,     3,   269,   172,   248,     4,   195,   189,
       5,    -1,   226,     3,   269,   172,   248,   182,   195,   189,
       5,    -1,    71,   538,   250,   530,     3,   383,   539,   384,
     554,    -1,    71,   538,   250,   530,     3,   554,    -1,    71,
     538,   250,   530,     3,   382,     3,   383,   539,   384,   554,
      -1,    71,   538,   250,   530,     3,   382,     3,   554,    -1,
      -1,   244,    -1,   245,   244,    -1,   540,    -1,   539,   385,
     540,    -1,   199,   162,   383,   541,   384,    -1,    69,     3,
     199,   162,   383,   541,   384,    -1,   162,   383,   446,   384,
      -1,   153,   383,   446,   384,    -1,   136,   153,   383,   446,
     384,    -1,   136,   162,   383,   446,   384,    -1,    76,   383,
     390,   384,    -1,    69,     3,    76,   383,   390,   384,    -1,
     132,   162,   383,   542,   384,   205,     3,   383,   543,   384,
     544,    -1,   132,   162,   383,   542,   384,   205,     3,   382,
       3,   383,   543,   384,   544,    -1,    69,     3,   132,   162,
     383,   542,   384,   205,     3,   383,   543,   384,   544,    -1,
      69,     3,   132,   162,   383,   542,   384,   205,     3,   382,
       3,   383,   543,   384,   544,    -1,   259,   383,   545,   384,
      -1,    69,     3,   259,   383,   545,   384,    -1,     3,    -1,
     541,   385,     3,    -1,     3,    -1,   542,   385,     3,    -1,
       3,    -1,   543,   385,     3,    -1,    -1,   544,   195,   105,
      72,    -1,   544,   195,   105,   238,   191,    -1,   544,   195,
     105,   208,    -1,   544,   195,   105,   238,   111,    -1,   544,
     195,   256,    72,    -1,   544,   195,   256,   238,   191,    -1,
     544,   195,   256,   208,    -1,   544,   195,   256,   238,   111,
      -1,   544,   195,   105,   190,    -1,   544,   195,   256,   190,
      -1,   544,   181,   135,    -1,   544,   181,   233,    -1,   544,
     181,   198,    -1,   544,    95,    -1,   544,    18,    95,    -1,
     544,    95,   149,    96,    -1,   544,    95,   149,   147,    -1,
       3,    -1,   545,   385,     3,    -1,    -1,   546,     3,   552,
     547,    -1,    -1,   547,    18,   191,    -1,   547,   191,    -1,
     547,   111,     4,    -1,   547,   111,     5,    -1,   547,   111,
       7,    -1,   547,   111,     6,    -1,   547,   111,   330,   383,
     384,    -1,   547,   111,   331,   383,   384,    -1,   547,   111,
     332,   383,   384,    -1,   547,   111,    70,    -1,   547,   111,
     383,   390,   384,    -1,   547,    46,    -1,   547,    46,   383,
       5,   385,     5,   384,    -1,   547,    46,   383,     5,   384,
      -1,   547,    51,   383,     5,   385,     5,   384,    -1,   547,
      51,   383,     5,   384,    -1,   547,    51,    -1,   547,   259,
     162,    -1,   547,   259,    -1,   547,   199,   162,    -1,   547,
     162,    -1,   547,    77,     4,    -1,   547,    76,   383,   390,
     384,    -1,   547,    69,     3,   259,    -1,   547,    69,     3,
     199,   162,    -1,   547,    69,     3,    76,   383,   390,   384,
      -1,   547,    54,    50,    49,   383,   390,   384,    55,    -1,
     547,    54,    50,    49,   383,   390,   384,    56,    -1,   547,
      54,    50,    49,   383,   390,   384,    -1,   547,    49,   383,
     390,   384,    55,    -1,   547,    49,   383,   390,   384,    56,
      -1,   547,    49,   383,   390,   384,    -1,    -1,   383,     5,
     384,    -1,   383,     5,   385,     5,   384,    -1,    -1,    62,
      -1,    -1,   550,   257,    -1,   550,   277,    -1,    -1,   551,
      80,   238,     4,    -1,   551,    81,     4,    -1,    65,   548,
      -1,   242,   548,   550,    -1,   237,   548,   550,    -1,   187,
     548,   550,    -1,   158,   548,   550,    -1,   150,   548,   550,
      -1,    64,   548,   550,    -1,   203,   548,   550,    -1,   112,
     548,   550,    -1,   130,   548,   550,    -1,   114,   548,   550,
      -1,   115,    -1,   255,    -1,   249,    -1,   113,    -1,   275,
      -1,    80,   548,   551,    -1,   268,   383,     5,   384,   551,
      -1,    62,   548,    -1,   270,   383,     5,   384,    -1,   254,
      -1,    59,    -1,   186,    -1,   180,    -1,   241,   549,   551,
      -1,   247,   549,   551,    -1,   183,   549,   551,    -1,   173,
     549,   551,    -1,   121,   383,   553,   384,   551,    -1,   238,
     383,   553,   384,   551,    -1,    60,    -1,   260,    -1,   262,
      -1,   552,    34,   386,    -1,     4,    -1,   553,   385,     4,
      -1,   555,   456,   429,    -1,    -1,   152,    -1,   214,    -1,
     556,    -1,   238,   225,     3,    -1,   238,   225,   111,    -1,
     238,   557,    -1,   558,    -1,   557,   385,   558,    -1,     8,
      20,   390,    -1,     8,     9,   390,    -1,   559,    -1,    71,
     200,     3,   383,   560,   384,    49,    58,   564,   122,    -1,
      71,   200,     3,   383,   560,   384,    58,   564,   122,    -1,
      71,    10,   214,   200,     3,   383,   560,   384,    49,    58,
     564,   122,    -1,    71,    10,   214,   200,     3,   383,   560,
     384,    58,   564,   122,    -1,    71,   137,     3,   383,   560,
     384,   211,   563,    49,    58,   564,   122,    -1,    71,   137,
       3,   383,   560,   384,   211,   563,    58,   564,   122,    -1,
      71,    10,   214,   137,     3,   383,   560,   384,   211,   563,
      49,    58,   564,   122,    -1,    71,    10,   214,   137,     3,
     383,   560,   384,   211,   563,    58,   564,   122,    -1,    -1,
     561,    -1,   562,    -1,   561,   385,   562,    -1,     3,   552,
      -1,    16,     3,   552,    -1,   193,     3,   552,    -1,   148,
       3,   552,    -1,   150,    -1,   158,    -1,   268,    -1,   247,
      -1,    60,    -1,   130,    -1,   112,    -1,    64,    -1,   115,
      -1,   249,    -1,    -1,   564,   565,    -1,   564,    58,   564,
     122,    -1,   564,   154,   564,   122,   154,    -1,   564,   273,
     564,   122,   273,    -1,   564,   164,   564,   122,   164,    -1,
     564,   129,   564,   122,   129,    -1,   564,    75,   564,   122,
      75,    -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,
       6,    -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,
      16,    -1,    48,    -1,   239,    -1,   155,    -1,   256,    -1,
     105,    -1,   134,    -1,   271,    -1,   238,    -1,   157,    -1,
     269,    -1,    71,    -1,   106,    -1,   250,    -1,   153,    -1,
     251,    -1,   123,    -1,   117,    -1,    94,    -1,    99,    -1,
      66,    -1,   209,    -1,   163,    -1,   160,    -1,    68,    -1,
     192,    -1,   127,    -1,    67,    -1,   140,    -1,   125,    -1,
     193,    -1,   148,    -1,   138,    -1,    52,    -1,   216,    -1,
     207,    -1,   124,    -1,   218,    -1,    57,    -1,   116,    -1,
     215,    -1,   217,    -1,    49,    -1,   195,    -1,   196,    -1,
      61,    -1,   139,    -1,   146,    -1,   177,    -1,   179,    -1,
     161,    -1,   175,    -1,   213,    -1,   151,    -1,   194,    -1,
     135,    -1,    74,    -1,   188,    -1,   264,    -1,   191,    -1,
     111,    -1,   199,    -1,   162,    -1,   259,    -1,    76,    -1,
     132,    -1,   205,    -1,    72,    -1,   208,    -1,   190,    -1,
     150,    -1,   158,    -1,   268,    -1,   247,    -1,    60,    -1,
     130,    -1,   112,    -1,    64,    -1,   115,    -1,   249,    -1,
     237,    -1,   114,    -1,    80,    -1,   260,    -1,    59,    -1,
     258,    -1,   120,    -1,   156,    -1,    38,    -1,   104,    -1,
     278,    -1,   272,    -1,   274,    -1,   200,    -1,   137,    -1,
     211,    -1,   383,    -1,   384,    -1,   385,    -1,   381,    -1,
     382,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    17,    -1,   387,    -1,   319,    -1,   320,    -1,
     321,    -1,   322,    -1,   323,    -1,     8,    -1,   566,    -1,
     106,   200,     3,    -1,   106,   200,   154,   278,     3,    -1,
     106,   137,     3,    -1,   106,   137,   154,   278,     3,    -1,
     567,    -1,    66,     3,   383,   384,    -1,    66,     3,   383,
     568,   384,    -1,   569,    -1,   568,   385,   569,    -1,     5,
      -1,     4,    -1,     7,    -1,   191,    -1,     6,    -1,     3,
      -1,     8,    -1,   570,    -1,    71,   217,     3,   571,   572,
     195,     3,   138,   116,   215,    58,   564,   122,    -1,    57,
      -1,    37,    -1,   155,    -1,   256,    -1,   105,    -1,   573,
      -1,   106,   217,     3,    -1,   106,   217,   154,   278,     3,
      -1,    35,   217,     3,   118,    -1,    35,   217,     3,    98,
      -1,   574,    -1,    71,   368,   530,     3,   575,    -1,    -1,
     575,   576,    -1,   373,   274,     5,    -1,   373,     5,    -1,
     374,    61,     5,    -1,   374,     5,    -1,   375,     5,    -1,
     182,     5,    -1,   376,    -1,    18,   376,    -1,   577,    -1,
     106,   368,     3,    -1,   106,   368,   154,   278,     3,    -1,
      35,   368,     3,   575,    -1,    35,   368,     3,    53,    -1,
      35,   368,     3,    53,   274,     5,    -1,    35,   368,     3,
     206,   243,     3,    -1,    -1,   210,    26,    -1,   210,   579,
      -1,     3,    -1,   579,   385,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   472,   472,   473,   478,   485,   486,   487,   501,   502,
     530,   538,   546,   552,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   585,   585,   594,   594,   596,   596,
     598,   598,   603,   605,   609,   610,   611,   612,   613,   616,
     617,   620,   629,   647,   656,   676,   676,   736,   745,   752,
     756,   758,   760,   765,   770,   777,   778,   781,   781,   782,
     782,   783,   783,   791,   791,   799,   799,   810,   814,   815,
     816,   817,   818,   819,   820,   821,   825,   825,   827,   827,
     829,   829,   832,   832,   834,   834,   836,   836,   838,   838,
     840,   840,   842,   842,   845,   845,   847,   847,   849,   849,
     851,   851,   853,   853,   855,   855,   857,   857,   859,   859,
     862,   862,   864,   864,   866,   866,   870,   871,   872,   873,
     874,   875,   876,   877,   878,   879,   880,   881,   882,   883,
     884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     905,   906,   907,   908,   909,   910,   911,   912,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     937,   938,   939,   940,   941,   943,   944,   946,   947,   948,
     950,   951,   952,   953,   960,   967,   974,   978,   982,   986,
     990,   994,  1000,  1001,  1002,  1005,  1011,  1018,  1019,  1020,
    1021,  1022,  1023,  1024,  1025,  1026,  1029,  1031,  1033,  1035,
    1039,  1047,  1058,  1059,  1062,  1063,  1066,  1074,  1082,  1090,
    1104,  1114,  1115,  1128,  1144,  1145,  1146,  1147,  1150,  1157,
    1165,  1166,  1167,  1170,  1171,  1174,  1175,  1179,  1180,  1183,
    1185,  1189,  1190,  1193,  1195,  1199,  1200,  1203,  1204,  1207,
    1213,  1220,  1229,  1230,  1231,  1232,  1235,  1236,  1237,  1238,
    1239,  1242,  1243,  1246,  1247,  1250,  1251,  1252,  1253,  1254,
    1255,  1256,  1257,  1258,  1261,  1262,  1263,  1271,  1277,  1278,
    1279,  1282,  1283,  1286,  1287,  1291,  1299,  1309,  1310,  1311,
    1320,  1325,  1331,  1339,  1343,  1343,  1383,  1384,  1388,  1390,
    1392,  1394,  1396,  1400,  1401,  1402,  1405,  1406,  1409,  1410,
    1413,  1414,  1415,  1418,  1419,  1422,  1423,  1427,  1429,  1431,
    1433,  1436,  1437,  1440,  1441,  1444,  1448,  1458,  1466,  1467,
    1468,  1469,  1473,  1477,  1479,  1483,  1483,  1485,  1490,  1497,
    1504,  1516,  1517,  1518,  1522,  1529,  1536,  1544,  1554,  1562,
    1572,  1580,  1589,  1598,  1608,  1616,  1625,  1634,  1644,  1653,
    1665,  1670,  1675,  1681,  1688,  1695,  1702,  1712,  1719,  1728,
    1735,  1741,  1749,  1755,  1763,  1764,  1765,  1766,  1767,  1783,
    1784,  1785,  1788,  1794,  1805,  1811,  1818,  1824,  1840,  1847,
    1856,  1864,  1870,  1885,  1887,  1891,  1900,  1913,  1915,  1919,
    1924,  1931,  1936,  1944,  1948,  1949,  1953,  1964,  1965,  1966,
    1970,  1971,  1972,  1973,  1974,  1975,  1978,  1980,  1984,  1985,
    1988,  1990,  1993,  1995,  1999,  2008,  2014,  2020,  2027,  2033,
    2040,  2046,  2052,  2058,  2064,  2070,  2076,  2082,  2088,  2094,
    2100,  2106,  2112,  2118,  2124,  2130,  2143,  2155,  2156,  2157,
    2160,  2168,  2174,  2187,  2188,  2188,  2192,  2193,  2196,  2197,
    2198,  2202,  2203,  2203,  2207,  2215,  2225,  2226,  2227,  2228,
    2229,  2232,  2232,  2235,  2236,  2239,  2249,  2262,  2263,  2263,
    2266,  2267,  2268,  2269,  2272,  2276,  2277,  2278,  2279,  2285,
    2288,  2294,  2299,  2305,  2309,  2309,  2314,  2315,  2317,  2318,
    2322,  2323,  2327,  2328,  2329,  2332,  2333,  2334,  2335,  2339,
    2340,  2344,  2345,  2346,  2347,  2348,  2349,  2350,  2351,  2355,
    2363,  2372,  2373,  2374,  2378,  2389,  2401,  2412,  2427,  2432,
    2436,  2437,  2441,  2443,  2445,  2447,  2451,  2452,  2458,  2462,
    2464,  2466,  2468,  2470,  2475,  2479,  2480,  2484,  2493,  2506,
    2507,  2515,  2523,  2531,  2532,  2533,  2534,  2535,  2536,  2538,
    2540,  2544,  2545,  2548,  2563,  2570,  2585,  2598,  2613,  2626,
    2627,  2628,  2631,  2632,  2635,  2636,  2637,  2638,  2639,  2640,
    2641,  2642,  2643,  2645,  2647,  2649,  2651,  2653,  2657,  2658,
    2661,  2662,  2665,  2666,  2669,  2670,  2671,  2672,  2673,  2674,
    2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,  2683,  2684,
    2685,  2686,  2689,  2690,  2693,  2693,  2703,  2704,  2705,  2706,
    2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,  2721,  2722,
    2723,  2724,  2725,  2726,  2727,  2728,  2729,  2730,  2731,  2732,
    2733,  2734,  2735,  2736,  2737,  2738,  2739,  2740,  2741,  2744,
    2745,  2746,  2749,  2750,  2753,  2754,  2755,  2758,  2759,  2760,
    2764,  2765,  2766,  2767,  2768,  2769,  2770,  2771,  2772,  2773,
    2774,  2775,  2776,  2777,  2778,  2779,  2780,  2781,  2782,  2783,
    2784,  2785,  2786,  2787,  2788,  2789,  2790,  2791,  2792,  2793,
    2794,  2795,  2796,  2797,  2800,  2801,  2804,  2817,  2818,  2819,
    2823,  2826,  2827,  2828,  2829,  2829,  2831,  2832,  2840,  2844,
    2850,  2856,  2863,  2870,  2876,  2882,  2889,  2898,  2899,  2902,
    2903,  2906,  2907,  2908,  2909,  2912,  2913,  2914,  2915,  2916,
    2917,  2918,  2919,  2920,  2921,  2928,  2929,  2930,  2931,  2932,
    2933,  2934,  2935,  2938,  2939,  2940,  2940,  2940,  2941,  2941,
    2941,  2941,  2941,  2941,  2942,  2942,  2942,  2942,  2942,  2942,
    2942,  2942,  2942,  2943,  2943,  2943,  2943,  2943,  2943,  2943,
    2944,  2944,  2944,  2944,  2945,  2945,  2945,  2945,  2945,  2945,
    2945,  2945,  2945,  2945,  2945,  2945,  2946,  2946,  2946,  2946,
    2946,  2946,  2946,  2946,  2947,  2947,  2947,  2947,  2947,  2947,
    2947,  2947,  2948,  2948,  2948,  2948,  2948,  2948,  2948,  2948,
    2948,  2949,  2949,  2949,  2949,  2949,  2949,  2949,  2949,  2950,
    2950,  2950,  2951,  2951,  2951,  2951,  2951,  2951,  2951,  2951,
    2952,  2952,  2952,  2952,  2952,  2952,  2952,  2953,  2953,  2953,
    2953,  2953,  2953,  2953,  2954,  2954,  2954,  2954,  2955,  2955,
    2955,  2955,  2955,  2955,  2955,  2955,  2955,  2955,  2955,  2955,
    2956,  2956,  2956,  2956,  2956,  2957,  2964,  2968,  2974,  2980,
    2986,  2998,  3002,  3008,  3016,  3017,  3020,  3021,  3022,  3023,
    3024,  3025,  3026,  3033,  3037,  3045,  3046,  3049,  3050,  3051,
    3054,  3058,  3064,  3073,  3081,  3092,  3096,  3105,  3106,  3110,
    3111,  3112,  3113,  3114,  3115,  3116,  3117,  3120,  3124,  3130,
    3140,  3147,  3154,  3162,  3172,  3173,  3174,  3177,  3178
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
  "HISTOGRAM", "BUCKETS", "SAMPLE", "PERCENT", "ROWS", "ANY",
  "AUTO_INCREMENT", "ASC", "AND", "AS", "ALWAYS", "IDENTITY", "CONTINUE",
  "RESTART", "GENERATED", "STORED", "VIRTUAL", "BEFORE", "BEGINWORK",
  "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT", "CALL",
  "CLOSE", "CURSOR", "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE",
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
  "analyze_table_stmt", "sample_clause_opt", "analyze_table_prefix",
  "hist_clause_opt", "hist_col_list", "create_policy_stmt",
  "opt_policy_as", "opt_policy_for", "opt_policy_to", "policy_role_list",
  "opt_policy_using", "opt_policy_check", "drop_policy_stmt",
  "alter_table_stmt", "opt_col_position", "insert_stmt", "opt_ondupupdate",
  "@32", "opt_on_conflict", "opt_conflict_target", "conflict_action",
  "@33", "upsert_asgn_list", "insert_opts", "opt_into", "opt_col_names",
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
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   388,   389,   389,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   391,   390,   392,   390,   393,   390,
     394,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   395,   395,   396,   396,   397,   390,   390,   390,   398,
     390,   390,   390,   390,   390,   399,   399,   400,   390,   401,
     390,   402,   390,   403,   390,   404,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   405,   390,   406,   390,
     407,   390,   408,   390,   409,   390,   410,   390,   411,   390,
     412,   390,   413,   390,   414,   390,   415,   390,   416,   390,
     417,   390,   418,   390,   419,   390,   420,   390,   421,   390,
     422,   390,   423,   390,   424,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   425,   425,   425,   390,   390,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   390,   390,   390,   390,
     427,   427,   390,   390,   390,   390,   390,   390,   390,   390,
     428,   429,   429,   429,   430,   430,   431,   431,   432,   432,
     433,   433,   433,   434,   434,   435,   435,   436,   436,   437,
     437,   438,   438,   439,   439,   440,   440,   441,   441,   442,
     442,   442,   443,   443,   443,   443,   444,   444,   444,   444,
     444,   445,   445,   446,   446,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   448,   448,   448,   449,   450,   450,
     450,   451,   451,   452,   452,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   455,   454,   456,   456,   457,   457,
     457,   457,   457,   458,   458,   458,   459,   459,   460,   460,
     461,   461,   461,   462,   462,   463,   463,   464,   464,   464,
     464,   465,   465,   466,   466,   467,   428,   468,   469,   469,
     469,   469,   468,   470,   470,   471,   471,   468,   428,   472,
     472,   473,   473,   473,   428,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     475,   475,   475,   476,   476,   476,   476,   428,   477,   428,
     478,   478,   479,   479,   480,   480,   480,   480,   480,   428,
     428,   428,   481,   481,   482,   482,   483,   483,   428,   484,
     428,   485,   485,   486,   486,   486,   487,   488,   488,   488,
     488,   489,   489,   428,   428,   428,   490,   491,   491,   491,
     492,   492,   492,   492,   492,   492,   493,   493,   494,   494,
     495,   495,   496,   496,   497,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   499,   499,   499,
     428,   500,   500,   501,   502,   501,   503,   503,   504,   504,
     504,   505,   506,   505,   507,   507,   508,   508,   508,   508,
     508,   509,   509,   510,   510,   511,   511,   512,   513,   512,
     514,   514,   514,   514,   500,   515,   515,   515,   515,   428,
     516,   516,   516,   428,   518,   517,   519,   519,   520,   520,
     521,   521,   522,   522,   522,   523,   523,   523,   523,   524,
     524,   525,   525,   525,   525,   525,   525,   525,   525,   428,
     526,   527,   527,   527,   528,   528,   528,   528,   428,   428,
     529,   529,   428,   428,   428,   428,   530,   530,   428,   531,
     531,   531,   531,   531,   428,   532,   532,   428,   533,   534,
     534,   533,   533,   535,   535,   535,   535,   535,   535,   535,
     535,   536,   536,   537,   537,   533,   533,   533,   533,   538,
     538,   538,   539,   539,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   541,   541,
     542,   542,   543,   543,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   545,   545,   546,   540,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   548,
     548,   548,   549,   549,   550,   550,   550,   551,   551,   551,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   553,   553,   554,   555,   555,   555,
     428,   556,   556,   556,   557,   557,   558,   558,   428,   559,
     559,   559,   559,   559,   559,   559,   559,   560,   560,   561,
     561,   562,   562,   562,   562,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   564,   564,   564,   564,   564,
     564,   564,   564,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   428,   566,   566,   566,
     566,   428,   567,   567,   568,   568,   569,   569,   569,   569,
     569,   569,   569,   428,   570,   571,   571,   572,   572,   572,
     428,   573,   573,   428,   428,   428,   574,   575,   575,   576,
     576,   576,   576,   576,   576,   576,   576,   428,   577,   577,
     428,   428,   428,   428,   578,   578,   578,   579,   579
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
       1,     4,     6,     0,     4,     4,     2,     0,     4,     7,
       4,     1,     3,     1,     1,     1,    10,     0,     2,     2,
       0,     2,     2,     2,     2,     2,     0,     2,     1,     3,
       0,     4,     0,     5,     5,    10,    10,    17,    12,    19,
      11,     6,     8,     6,     6,     6,     9,     6,     5,     8,
       7,     9,     8,    10,     9,     7,     7,     0,     1,     2,
       1,    10,     6,     0,     0,     5,     0,     4,     0,     3,
       4,     2,     0,     5,     3,     5,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     1,     3,     3,     0,     6,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     0,     7,     0,     3,     1,     3,
       1,     1,     1,     1,     1,     0,     1,     4,     3,     1,
       3,     2,     2,     2,     1,     2,     2,     2,     1,     1,
       9,     0,     2,     2,     3,     5,     5,     7,     5,     1,
       4,     4,     3,     5,     3,     5,     0,     2,     1,     5,
       7,     7,     9,    11,     1,     2,     3,     1,    10,     0,
       4,    11,    18,     0,     4,     3,     5,     5,     9,    10,
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
       0,     0,     0,     0,   589,     0,   351,     0,   486,     0,
       0,     0,     0,     0,   486,     0,   285,     0,   541,     0,
       0,     0,   240,   346,   358,   364,   387,   394,   399,   400,
     401,   408,   410,     0,   424,   425,   423,   470,   509,   513,
     539,   549,   558,   564,   567,   720,   728,   886,   891,   903,
     910,   915,   927,     0,     0,     0,   416,     0,     0,   556,
       0,     0,     0,     0,     0,     0,     0,   556,   590,     0,
       0,   556,     0,   514,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   492,   402,   406,   404,   405,     0,
       0,   492,     0,     0,   723,   724,     0,     0,     0,     0,
     565,     0,     1,     2,   389,   413,     0,     0,   917,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   591,     0,     0,   556,   516,   355,     0,
     350,   348,   349,     0,   552,     0,   889,     0,   388,   887,
       0,   911,     0,     0,   554,     0,   361,     0,   928,     0,
     488,   489,   490,   491,   487,     0,   403,     0,   409,     0,
       0,     0,     0,   721,   722,     0,     4,     9,    10,    12,
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
     294,   390,   543,   542,   300,     0,     0,     0,     0,     0,
     301,   303,   317,   304,   317,   566,     3,     0,     0,   395,
     396,     0,     0,   417,   914,   913,     0,     0,     0,     0,
       0,     0,     0,     0,   931,     0,   930,   901,   897,   896,
     900,   898,   902,   899,   892,     0,   894,     0,     0,   557,
     550,     0,     0,   737,     0,     0,     0,     0,   737,   906,
     905,     0,     0,   551,     0,     0,     0,   917,     0,     0,
       0,     0,   353,   244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   362,   363,   359,     0,     0,   493,   407,
       0,   493,   727,   726,   725,     0,    65,     0,    32,    31,
      20,     0,     0,     0,     0,     0,    55,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     299,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   297,     0,     0,     0,     0,
       0,   340,   314,   300,     0,     0,     0,     0,     0,   325,
     324,   328,   332,   329,     0,     0,   326,   316,     0,     0,
     398,   397,     0,   413,     0,     0,   411,     0,     0,     0,
       0,     0,     0,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   925,   918,   893,     0,     0,     0,   701,   710,   669,
     669,   669,   669,   669,   694,   669,   691,     0,   669,   669,
     669,   672,   703,   672,   702,   669,   669,   669,     0,   672,
     669,   672,   693,   700,   692,   711,   712,     0,     0,   695,
     559,     0,     0,     0,     0,     0,     0,   738,   739,     0,
       0,     0,     0,     0,   909,   907,   908,     0,   427,     0,
       0,     0,     0,   916,   717,   518,     0,   520,   521,     0,
     356,     0,   265,     0,   244,   355,   553,   890,   888,   912,
     444,   555,   361,   929,     0,     0,     0,   548,     0,     0,
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
      19,    27,    30,    29,     0,   298,   244,     0,   295,   392,
     391,   300,     0,     0,     0,   305,     0,   340,     0,   345,
     313,     0,   244,   302,   326,   326,     0,   319,     0,   327,
       0,   309,   308,     0,   417,     0,     0,     0,     0,     0,
       0,   454,     0,   451,   457,   453,     0,   636,     0,     0,
       0,     0,   455,   932,   933,   926,   924,   920,     0,   922,
       0,   923,   895,   737,   737,     0,   698,   674,   680,   677,
     674,   674,     0,   674,   674,   674,   673,   677,   677,   674,
     674,   674,     0,   677,   674,   677,     0,     0,     0,     0,
       0,     0,     0,   741,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   430,     0,     0,
       0,     0,   718,   719,     0,     0,   634,   586,   317,   517,
       0,   522,   523,   524,   525,   245,     0,   272,   244,   352,
     354,   360,     0,   473,   495,     0,     0,   472,   473,     0,
     473,     0,    77,     0,   226,     0,     0,     0,     0,    53,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
     162,   163,   164,   165,   166,   167,     0,     0,     0,     0,
     143,     0,     0,     0,   147,   148,   149,   151,     0,     0,
     153,     0,   156,   157,   158,     0,     0,     0,     0,     0,
       0,    84,    78,    79,    80,    81,    82,    83,   133,   134,
     135,     0,     0,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,   171,
     172,   173,   174,   175,   176,     0,     0,     0,     0,     0,
       0,     0,     0,   186,     0,   189,   190,   191,     0,    60,
       0,    62,     0,    47,    45,     0,     0,   235,   233,    69,
       0,     0,    40,    36,    38,     0,    58,   246,     0,     0,
     340,   342,   342,   342,     0,   306,   310,     0,     0,     0,
     265,   330,   331,     0,     0,   333,     0,   414,   415,   412,
       0,     0,     0,     0,     0,     0,   636,   636,     0,   466,
     465,   467,   636,   460,     0,     0,   919,   921,     0,     0,
       0,   686,   696,   688,   690,   714,     0,   689,   685,   684,
     707,   706,   683,   687,   682,     0,   704,   681,   705,     0,
       0,   561,   713,     0,   560,     0,   742,   744,   743,     0,
     740,     0,   380,     0,     0,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   755,     0,   428,   429,     0,   436,
       0,     0,     0,     0,     0,     0,   717,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   592,     0,     0,   519,
     538,     0,     0,   534,     0,     0,     0,     0,   515,   526,
     529,     0,     0,   934,   357,     0,     0,     0,   504,   494,
       0,     0,   473,   511,   473,   512,    52,   230,     0,   229,
       0,     0,     0,    56,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      88,    90,     0,     0,     0,     0,     0,   122,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,    59,
       0,     0,     0,     0,     0,     0,   255,   244,   393,   307,
       0,     0,     0,     0,   315,     0,   544,     0,     0,   272,
     322,   320,     0,     0,   318,   334,     0,   421,   420,   418,
       0,     0,     0,     0,   467,   467,   636,     0,     0,   648,
       0,   653,     0,     0,     0,     0,     0,   468,   657,   638,
       0,   655,   462,   467,   452,   459,     0,     0,   670,     0,
     675,   676,     0,     0,   677,     0,   677,   677,   699,     0,
       0,     0,   749,   752,   751,   753,   750,   745,   746,   748,
     754,   747,     0,     0,     0,     0,     0,     0,   365,     0,
       0,     0,     0,     0,     0,   755,     0,     0,   431,   435,
     433,   432,   434,     0,   440,     0,     0,     0,     0,     0,
       0,     0,   634,   588,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   573,   634,     0,   716,   533,   531,   532,
     535,   536,   537,     0,     0,     0,   250,   250,   266,   267,
     273,     0,   347,   506,   505,     0,     0,   496,   501,   500,
       0,   498,   476,   510,   227,   231,     0,    54,     0,   128,
     127,     0,   132,     0,     0,   215,   216,   161,   139,   140,
       0,     0,   144,   145,   146,   150,   152,   154,   195,   196,
     197,   198,     0,    85,    94,    96,    92,    98,   100,   102,
     136,     0,     0,   138,   211,   257,   257,   257,   104,     0,
       0,   112,     0,     0,   120,   257,   257,   168,     0,     0,
       0,   180,   181,     0,     0,   184,     0,   187,     0,   192,
       0,    61,    63,    68,    72,     0,     0,    50,     0,     0,
      42,     0,    43,    35,     0,     0,   265,   246,   341,     0,
       0,     0,   311,     0,     0,     0,   934,   335,     0,   321,
       0,     0,     0,     0,     0,   632,     0,   456,   464,   467,
     637,   469,     0,     0,     0,     0,     0,     0,   658,   639,
     640,   642,   641,   646,     0,     0,     0,     0,   656,   654,
     461,     0,     0,   755,     0,     0,   679,   708,   715,   709,
     697,     0,   562,   366,     0,   755,     0,     0,     0,     0,
       0,   381,     0,   374,     0,     0,     0,     0,   763,   764,
     765,   767,   766,   885,   770,   771,   772,   878,   769,   768,
     873,   874,   875,   876,   877,   860,   773,   814,   805,   810,
     755,   856,   846,   817,   849,   792,   799,   796,   783,   839,
     828,   755,   836,   854,   790,   791,   861,   777,   784,   832,
     848,   853,   850,   811,   789,   858,   730,   788,   808,   801,
     798,   755,   847,   837,   778,   827,   866,   804,   818,   800,
     819,   803,   842,   825,   786,   755,   775,   859,   781,   843,
     795,   822,   834,   794,   755,   823,   820,   821,   829,   841,
     831,   797,   802,   826,   815,   816,   833,   865,   838,   807,
     840,   793,   867,   824,   812,   806,   813,   809,   852,   780,
     774,   845,   851,   785,   787,   776,   857,   835,   855,   830,
     844,   782,   779,   863,   755,   864,   862,   880,   881,   882,
     883,   884,   871,   872,   868,   869,   870,   879,   756,     0,
     438,   437,     0,   442,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   283,     0,     0,     0,     0,   569,   585,   593,   636,
       0,   528,   530,   251,   252,     0,   269,   271,     0,     0,
       0,   937,   935,   936,   474,     0,   497,     0,     0,     0,
     934,     0,     0,     0,   131,   218,   219,   220,   221,   224,
     223,   225,   217,   222,     0,     0,     0,   257,   257,   257,
     257,   257,   257,     0,     0,     0,   261,   261,   261,   257,
       0,     0,     0,   257,     0,     0,     0,   257,   261,   261,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    74,
      41,    37,    39,   250,   253,   256,   272,   255,   343,     0,
       0,     0,     0,   545,   546,     0,   540,     0,   422,     0,
     445,   610,     0,   608,     0,   446,     0,   463,     0,     0,
       0,     0,     0,     0,   660,     0,     0,     0,     0,     0,
       0,   755,     0,   671,   678,     0,   755,     0,   370,   383,
     384,   385,     0,     0,     0,     0,   367,   729,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   426,     0,
       0,   376,     0,     0,     0,     0,   573,     0,     0,     0,
       0,   600,     0,     0,     0,   597,     0,   596,     0,   606,
       0,     0,     0,     0,     0,   568,   635,   527,   250,   268,
     275,   274,     0,     0,   508,   507,   503,   502,     0,   478,
     471,     7,   129,   126,   141,   142,   199,   261,   261,   261,
     261,   261,   261,   201,     0,   137,     0,     0,     0,     0,
       0,   261,   106,     0,     0,   261,   114,     0,     0,   261,
       0,     0,   177,   178,   179,   182,   183,     0,   188,   193,
     248,     0,     0,   247,   276,   265,   339,     0,   338,   337,
       0,     0,   336,   419,     0,     0,     0,   450,     0,   633,
     650,     0,   668,   652,     0,     0,     0,   661,   659,   643,
     644,   645,   647,     0,   755,     0,   732,   563,     0,   734,
       0,   378,   375,     0,   757,     0,     0,     0,     0,     0,
     755,   439,     0,     0,   372,     0,     0,     0,   369,     0,
     571,   587,     0,     0,     0,     0,     0,   598,   599,   284,
     594,   575,     0,     0,     0,     0,     0,   270,   938,     0,
     475,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   258,     0,    87,    89,    91,     0,   257,     0,
       0,     0,   257,     0,     0,     0,   123,   125,     0,   254,
     250,     0,   281,   272,   344,   312,   547,   448,     0,   611,
     609,     0,   666,   667,     0,     0,     0,   755,     0,   731,
     733,   386,   371,   762,   761,   758,   760,   759,     0,   441,
       0,   379,   377,     0,     0,   601,     0,     0,   607,     0,
     574,     0,     0,     0,     0,     0,     0,     0,     0,   499,
       0,     0,   477,    95,    97,    93,    99,   101,   103,   202,
       0,   250,   262,   105,   261,   108,   110,   113,   261,   116,
     118,   121,   185,   249,   278,   277,     0,   242,   243,     0,
     649,   651,   665,   662,     0,   736,   904,     0,   373,     0,
       0,   595,     0,   570,   576,   577,     0,     0,     0,   484,
       0,   479,     0,   481,   482,   260,   263,     0,     0,   257,
     257,     0,   257,   257,     0,     0,   282,     0,   663,   664,
     735,   443,     0,     0,     0,     0,     0,     0,     0,     0,
     480,     0,   250,   107,   261,   261,   115,   261,   261,   280,
     279,   612,     0,     0,     0,     0,     0,     0,     0,   580,
     485,     0,   264,     0,     0,     0,     0,   614,     0,     0,
       0,     0,     0,   614,     0,     0,   483,   109,   111,   117,
     119,   447,   613,     0,     0,     0,     0,   602,     0,     0,
     581,   578,     0,   628,     0,     0,   572,     0,   614,   614,
       0,     0,   579,     0,   629,   449,     0,   625,   627,   626,
       0,     0,     0,   604,   603,     0,   582,   630,   631,   615,
     623,   617,     0,   619,   624,   621,     0,   614,     0,   618,
     616,   622,   620,   605,     0,     0,     0,     0,     0,     0,
       0,   583,   584
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   661,  1055,  1270,  1272,  1268,   662,   950,   673,
    1271,   663,  1045,  1264,  1046,  1265,   674,  1465,  1466,  1467,
    1779,  1777,  1778,  1780,  1781,  1782,  1789,  2058,  2179,  2180,
    1793,  2062,  2182,  2183,  1797,  1475,  1476,   680,  1210,   393,
      21,    22,   642,  1276,  1814,  1746,  1963,  1506,  1786,  2052,
    1938,  2132,   927,  1408,  1409,  1183,  2072,  2147,  1732,    96,
     289,   290,   515,   299,   300,   301,   302,   816,   538,   303,
     535,   830,   536,   826,  1294,  1295,   815,  1281,  1819,   304,
      23,    74,   133,   362,    24,   375,    25,  1137,  1138,    26,
      27,   810,   104,    28,    29,    30,    31,    32,   313,    33,
     546,  1298,    34,   907,  1149,  1374,  1711,  1713,  1878,    35,
      36,  1322,    37,  1188,  1913,  1760,  2043,  2122,  2201,  2040,
      84,   155,   656,   935,  1192,  1758,  1420,   933,    38,    39,
     127,   360,   636,   639,   924,  1178,  1179,  1180,    40,    99,
     822,    41,   112,    42,    43,    44,  1905,  1736,  2249,  2250,
      72,  1165,  1166,  1834,  1832,  2212,  2241,  1526,  1167,  1091,
     866,   877,  1101,  1102,   610,  1106,   917,   918,    45,    94,
      95,    46,   616,   617,   618,  1352,  1366,  1708,    47,    48,
     335,   336,    49,   351,   627,    50,    51,   326,   572,    52,
    1412,  1753
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1695
static const yytype_int16 yypact[] =
{
   12305,  -136,   -68,   236,   530,   270, -1695,   357, -1695,   296,
     494,   481,   266,   297, -1695,    47, -1695,   300,   394,   470,
     599,   246, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695,   611, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695,   660,   676,   690, -1695,   346,   520,   591,
     749,   610,   768,   122,   783,   790,   795,   591, -1695,   559,
     658,   591,   596, -1695,   454,   131,   134,   845,   138,   147,
     847,   247,   280,   390,   576,   644,   473, -1695, -1695,   859,
     864,   576,   671,   501,   493, -1695,  6523,   871,   580,    55,
   -1695,   877, -1695, 12305,   476,   231,   628,   584,     8,    37,
      -8,   577,   881,   839,   892,   525,   722,   432,   625,   536,
     707,   728,   923, -1695,   132,   925,   591,   554,   561,   942,
   -1695, -1695, -1695,  -116, -1695,   678, -1695,   683, -1695, -1695,
     689, -1695,   694,   780, -1695,   699,   228,   748, -1695,   757,
   -1695, -1695, -1695, -1695, -1695,   983, -1695,   998, -1695,   763,
    1009, 10333, 10333, -1695, -1695,  1032,   339, -1695, -1695, -1695,
   -1695,  1033, 10333, 10333, 10333, -1695, -1695, -1695,  7666, -1695,
   -1695,   669, -1695, -1695, -1695,   684, -1695, -1695, -1695, -1695,
   -1695, -1695,  1037,   705,   711,   737,   745,   761,   771,   802,
     812,   820,   833,   849,   857,   865,   890,   912,   920,   936,
     951,   972,   981,   996,  1006,  1008,  1010,  1022,  1024,  1044,
    1046,  1050,  1071,  1074,  1075,  1076,  1077,  1078,  1079,  1080,
    1081,  1085,  1086,  1088,  1089,  1090,  1091,  1097,  1098,  1100,
    1104,  1105,  1108,  1114,  1125,  1127,  1128,  1130, -1695, -1695,
    1131,  1132,  1133,  1135,  1136,  1142,  1143,  1144,  1145,  1148,
    1153,  1154,  1156,  1161,  1163,  1166,  1168,  1171,  1176,  1177,
    1178,  1179,  1180,  1182,  1184,  1187,  1194,  1202,  1203,  1204,
    1205,  1206,  1208,  1209,  1213,  1215,  1216, 10333, 12714,  -110,
   -1695,   720,   587,   636,    43,  1217,  1261,  1218,    48,  -119,
     691, -1695,  1062, -1695,  1062, -1695, -1695,  1095,  1301, -1695,
   -1695,  1319,  1378,   258, -1695, -1695,   128,   489,   179,   487,
     224,   540,   592,  1347,  1146,  1277,    95, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695,   421, -1695,  1599,  1600, -1695,
   -1695, 12318,  1409,    51,  1602,  1412,  1341,  1617,    51, -1695,
   -1695,   -25,  1618, -1695,  1427,   438,  1350, -1695,  1621,  1627,
     -22,  1606, -1695,   218,  -181,    55,  1634,  1635,  1636,  1640,
    1641,  1643,  1644, -1695, -1695, -1695,  1645,  1646,  -130, -1695,
    1647,   222, 12854, 12854, -1695,  1648, 10333, 10333,  1053,  1053,
    1624, 10333, 12193,   -50,  1649,  1659,  1278, -1695, 10333,  6904,
   10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333,  1279,
   10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333,
   10333, 10333, 10333, 10333, 10333,  1282, 10333, 10333, 10333,  1288,
   10333, 10333, 10333, 10333, 10333, 10333,  8047, 10333, 10333, 10333,
   10333, 10333, 10333, 10333, 10333, 10333, 10333,  1289,  1291,  1295,
    1297,  1300, 10333, 10333,  1309,  1310,  1311, 10333, 10333,  1678,
    1313,  1314, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333,
   10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333,
   10333, 10333, 10333, 10333,  1322, 10333, 10333, 10333,  1338,  8602,
   -1695, 10333, 10333, 10333, 10333, 10333,    42,  1342,   187, 10333,
    7285, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333, 10333,
   10333, 10333, 10333, 10333,  1682, -1695,    55,  1721, 10333,  1723,
    1724,   331, -1695,   186, 10333,  1344,   424,  1726,    55, -1695,
   -1695, -1695,   446, -1695,    55,  1569,  1537, -1695,  1729,  1730,
   -1695, -1695,  1731,  1460,  1695,  1709, -1695,  1762,  1764,  1765,
    1766,  1767,  1768, -1695,  1769,  1770,  1771,  1772, 12318,  1773,
    1535,  1778,  1779,  1780,  1781,  1782,  1408,  1783,    15,   504,
    1784, -1695, -1695, -1695,   168,  1404,  1407, -1695, -1695,  1410,
    1410,  1410,  1410,  1410, -1695,  1410, -1695,  1411,  1410,  1410,
    1410,  1733, -1695,  1733, -1695,  1410,  1410,  1410,  1413,  1733,
    1410,  1733, -1695, -1695, -1695, -1695, -1695,  1414,  1421, -1695,
     478,  1789, 12318,  1803,  1804,  1806,  1424,  1425, -1695,   -86,
    1808,  1809,  1619,  1456, -1695, -1695, -1695,  1650,  1793,  1840,
    1652,  1570,  1847,    95,  -103, -1695,   460, -1695, -1695,    29,
   -1695, 10333,  1655,    55,  -147,   561, -1695, -1695, -1695, -1695,
   -1695, -1695,   228, -1695,  1849,  1850,   -62, -1695,  1849,   233,
   -1695,  1034, -1695,  1470, 12854, 12218,   336, -1695, 10333, 10333,
   -1695,  1471, -1695, 10333,  1620,   622, -1695, -1695, -1695,  8642,
    8428,  2485,  2825,  3165,  8825,  8903,  8931,  8983,  9023,  9206,
   -1695,  3505,  3845,  4185,  4525,  9306,  4865,  5205,  5545,  9331,
    9364,  9404,   685,  5885,  9587,  6226, -1695,  9641,  9673,  9698,
   -1695, 12760,  6622,  6697,  6751,  6920,  1137,  1472,  9745,  9785,
    9968, 10022, 10065, 10090, 10126, 10166,  6974,  6999,  7024, -1695,
   -1695, -1695, -1695, -1695, 10349,  7078,  1510,  1511,  1513,   809,
     969,  1478,  1516,  1518,  7119, 10403, 10432, 10457, 10507, 10547,
   10716, 10741, 10770,  7322,  7367,  7392,  7417,  7459,  7506,  7690,
    7744,  1111, 10799, 10824, 10849,  7769, -1695,  1199, 10874,  7794,
   -1695, -1695, 12878,  7047,  6671,  8953,  8953, -1695,    33, -1695,
   -1695,  1628, 10333, 10333,  1485, 10333, 12792,  1486,  1487,  1490,
   10333,  1346,  1299,  1372,  1475,   884,   884,   784,   784,   784,
     784,   747,  1624,  1624,    75, -1695,  -147,  1740, -1695, -1695,
    1491,   186,  1715,  1716,  1725, -1695,  1620,   331, 10914, -1695,
   -1695,     6,   195,   691,  1537,  1537,  1734,  1690,    55, -1695,
    1736, -1695, -1695,   810,   258,  1696,  1703,   164, 12318, 12318,
    1896, -1695,  1685, -1695, -1695, -1695,  1687,  1874, 12318,  1906,
    1667,  1668, -1695, -1695, -1695, -1695, -1695, -1695,  1907, -1695,
    1908, -1695, -1695,    51,    51,  1910, -1695, -1695, -1695, -1695,
   -1695, -1695,  1912, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695,  1912, -1695, -1695, -1695,  1913,  1914,  1735,  1531,
    1538, 10333,  1539,  1874, 12318, 12318, 12318,  1712,    51,  1654,
     129,   -85,  1737,  1924,   553,  1926,   639,  1792,   210,  1928,
    1935,  1744, -1695, -1695,  1853,  1938,   417, -1695,  1062, -1695,
    1943, -1695, -1695, -1695,   418, 12854,  1888,  1776,  -147, -1695,
   -1695, -1695,  1934,  -162, -1695,   480,  1572, -1695,  -162,  1572,
    1761, 10333, -1695, 10333, -1695, 10333, 12609, 12301,  1870,  7840,
    1574,  1577, 10333, 10333, -1695, 10333, 12584,  1807,  1807, 10333,
   -1695, -1695, -1695, -1695, -1695, -1695, 10333, 10333, 10333, 10333,
   -1695, 10333, 10333, 10333, -1695, -1695, -1695, -1695, 10333, 10333,
   -1695, 10333, -1695, -1695, -1695, 12318, 12318, 10333, 10333, 10333,
    1958, -1695,  1616,  1622,  1625,  1626,  1629,  1630, -1695, -1695,
   -1695, 10333, 10333, 10333, -1695, 10333,  1581,  1582,  1584,  1631,
    1963,  1632,  1966,  1638,  1591,  1612, 10333, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, 10333, 10333, 10333, 10333, 10333,
   10333, 10333, 10333, -1695, 10333, -1695, -1695, -1695, 10333, -1695,
   10333, -1695, 10333, -1695, -1695, 10333,  1620,  8953,  8953,  1750,
   12823, 10333, -1695, 10333, 10333,  1620, -1695,  1844,    55,  1994,
     331,  1864,  1864,  1864,  1623, -1695,   503, 10333,  2006,  2009,
    1655, -1695, -1695,    55, 10333,   -69,    55, -1695, -1695, -1695,
    2014,  2014,  1637,  1856,  1857,  1642,  1874,  1874, 12318, -1695,
   -1695, 12316,  1874, -1695,  2020,  2025, -1695, -1695,  1651,  1657,
     484,   491,   806,   491,   491, -1695,   505,   491,   491,   491,
     806,   806,   491,   491,   491,   515,   806,   491,   806,  1658,
    1660,  1967, -1695, 10333, 12854,   129,  1874,  1874,  1874,  1530,
   -1695,  1662, -1695,  1663,  1664,  1665,  1666,   517, -1695,  1786,
     129,  2047,   215,  1998, -1695,  1919, -1695, -1695,    26,  1815,
    1794,   129,   221,  1866,  2056,  2059,   -99,  2060,  1694,  1903,
     598,  1697,  1699,  1916,  1705,   556, -1695,  2076,  1620, -1695,
   -1695,  2082,    -1,  2084,  2091,  2092,  1714,   532, -1695,  1713,
   -1695,   621, 10333,  1889, -1695,  8809,  1939,  2097, -1695, -1695,
    2099,  9190,  -138, -1695,  -138, -1695, -1695, 12854, 12634, -1695,
   10333,  1722, 10333, -1695, -1695,   133,  1231, 10939, 10333, 10333,
    1720,  1727, 10964, 10989, 11014,  7882,  8066, 11039, 11064, 11092,
   11117, 11145, 11175,    16,    18, 11200, 11225,  8137,  1728,  1738,
    1739,  1741,  1745,  1746,  1747,  1256,  8162, 11250, 11281, -1695,
   -1695, -1695,  1748,   563,  1754,   565,  1755, -1695, -1695, 11306,
    8187,  8221,  8261, 11331, 11356,  8444,  8514,  1286,  1689,  1732,
   11381, 11406,  1749,  1757, 10333,  1620, 10333,  1152,  1620, 12854,
    1620,  1758,  1620,  1759,  1796,  2045,  1961,  -147, -1695, -1695,
    1947,  1756,  1763,  1798, -1695,  2106, 12854,  2090,    10,  1776,
   -1695, 12854, 10333,  1799, -1695, -1695,   -69, -1695,  1777,   -91,
   10333,  1800,  1801,  2115, 12316, 12316,  1874,  1929,  2116,  1802,
    1810,  1811,  2101,  2149,  1817,  2174,   116, -1695, -1695, -1695,
    1991,  2024, -1695, 12316, -1695, -1695,  1976,   704, -1695,  2183,
   -1695, -1695,  1951,  2187, -1695,  2188, -1695, -1695, -1695,  1818,
   11431,   567, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695,   724,   129,  2199,  2200,  2201,  2202, -1695,  2203,
    1824,   569,  1825,  1944,   129, -1695,  1418,  2093, -1695, -1695,
   -1695, -1695, -1695,  2208,  1948,  1830,   581,  1949,   129,  2211,
     227,  2078,   417, -1695,   356, 10333,  1834,  1835,  1842,  2224,
    2224,  1846,  2115,   -12,   417, 12318, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695,   532,   620,   532,   -31,    86,  1845, -1695,
    1805,   715, -1695, -1695, 12854,  1975,  2215, -1695, -1695, 12854,
     630, -1695,  2042, -1695, -1695, 12854,  2234, -1695, 10333, -1695,
   -1695, 10333, -1695, 11459, 12165, -1695, -1695, -1695, -1695, -1695,
   10333, 10333, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, 10333, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, 10333, 10333, -1695, -1695,  1891,  1891,  1891, -1695,  1898,
    1015, -1695,  1899,  1017, -1695,  1891,  1891, -1695, 10333, 10333,
   10333, -1695, -1695, 10333, 10333, -1695, 10333, -1695, 10333, -1695,
   10333, -1695, -1695, -1695, -1695,  1863,  1865,  1152,  1867,  1868,
   -1695,  1869, -1695, -1695, 10333, 10333,  1655,  1844, -1695,  2245,
    2245,  2245,  1872, 10333, 10333,  2247,  1889, 12854,  2224, -1695,
    2253,  2257, 11484,  2263,  2264, -1695,   645, -1695, -1695, 12316,
   -1695, -1695,  2265, 10333,  2266,  2220,    -5, 10333, -1695, -1695,
   -1695, -1695, -1695, -1695,  1895,  1902,  1911, 10333, -1695, -1695,
   -1695,  1530,  2214, -1695,  1897,  2275, -1695,   806, -1695,   806,
     806, 10333, -1695, -1695,  2228, -1695,   647,  1905,  1909,  1915,
    1917, -1695,   129, -1695,   129,  1918,   649,  1876, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,  2080,
   -1695,  1920,  1921,  2023,   129, -1695,  1923,   653,  1925,  2032,
     129,  2031,   706,  1930,  2141,  2147,  1931, 11512,  2263,  2224,
    2224, -1695,   708,   712,  2264,   714,    17, -1695, -1695,  1874,
     716, -1695, -1695, -1695, -1695,  2304, -1695, -1695,   621, 10333,
   10333, -1695, -1695,  1927, -1695,  9571, -1695,  9952,  1933,  2225,
    1889,  1940, 11542, 11567, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, 11592, 11617, 11648,  1891,  1891,  1891,
    1891,  1891,  1891,  2145, 11673,  2256,  2122,  2122,  2122,  1891,
    1936,  1941,  1942,  1891,  1946,  1950,  1953,  1891,  2122,  2122,
   11698, 11723, 11748, 11773, 11798,  8555, 11826, 11851, -1695, -1695,
   -1695, -1695, -1695, 12659,   190, 12854,  1776,  1961, -1695,   718,
     723,   725,  2320, 12854, 12854,  2315, -1695,   730, -1695,  2301,
    2326, -1695,   732, -1695,   734, -1695,  2344, -1695,   803, 11879,
     805,  1969,  1974,  2196, -1695, 11909,  1965,  1977,  1979, 11934,
     736, -1695,  2216, -1695, -1695, 11959, -1695,  2556, -1695, -1695,
   -1695, -1695,  2356,   807,   813,   129, -1695, -1695,  2896,  3236,
    3576,  3916,  4256,  4596,  2302,  2362, 10333,  2292, -1695,   815,
     129, -1695,   129,  1992,   817,  2248,   -12, 10333,  2000,  2001,
    2115, -1695,   821,   823,   850, -1695,  2378, -1695,   852, -1695,
     165,  2002,  2383,  2327,  2328, -1695,  1795, -1695,    86, -1695,
   12854, 12854,  2384,  2387, -1695, 12854, -1695, 12854,  9190,  2011,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695,  2122,  2122,  2122,
    2122,  2122,  2122, -1695, 10333, -1695,  2389,  2335,  2013,  2015,
    2016,  2122, -1695,  2051,  2054,  2122, -1695,  2055,  2058,  2122,
    2019,  2029, -1695, -1695, -1695, -1695, -1695, 10333, -1695, -1695,
   -1695,  2205, 10333, -1695,  2276,  1655, -1695,  2415, -1695, -1695,
    2035, 10333, -1695, -1695,  2153,  2217,  2423, -1695,  2425, -1695,
   -1695,  2430,  1183, -1695,  2431, 10333, 10333, -1695, -1695, -1695,
   -1695, -1695, -1695,  2372, -1695,  4936, -1695, -1695,  5276, -1695,
    2053, -1695, -1695,   907, -1695,  2363,  2310,  2286,  2277,  2169,
   -1695, -1695, 11984,  2061, -1695,   909,   952,   129, -1695,  2062,
     -15, -1695, 12015,  2263,  2264,   954,  2238, -1695, -1695, -1695,
   -1695, -1695,  2441,  2444,     5,   298,  2246, -1695, -1695,  2429,
    2065,   956,  2448,  2353,  2072,  2073,  2074,  2075,  2077,  2085,
   12040, -1695,  2079,  2457, -1695, -1695, -1695,  2086,  1891,  2088,
    2094,  2089,  1891,  2095,  2096,  2098, -1695, -1695, 12065, -1695,
   12659,   -90,  2305,  1776, -1695, -1695, 12854, -1695,  2465, -1695,
   -1695,  2102, -1695, -1695,  2107, 12090, 12115, -1695,  5616, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,  5956, -1695,
   10333, -1695, -1695,   958,  2476, -1695,   962,   964, -1695,  2480,
   -1695,  2108,  2490,  2499,  2135,  2137,  2138, 10333,  2519, -1695,
     966,   -20, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
    2520,    86,  2139, -1695,  2122, -1695, -1695, -1695,  2122, -1695,
   -1695, -1695, -1695, -1695,  2296,  2297,  2224, -1695, -1695,  2144,
   -1695, -1695,  1302, -1695,  6296, -1695, -1695, 12140, -1695,  2148,
    2323, -1695,   977, -1695, -1695, -1695,  2528,  2530,  2531, 12854,
    2521, -1695,  2537, -1695, -1695, -1695, -1695,  2539,  2159,  1891,
    1891,  2160,  1891,  1891,  2367,  2368,  2162,  2545, -1695, -1695,
   -1695, -1695,  2306,  2547,  2548,  2545,  2168,  2170,  2171, 10333,
   -1695,  2318,    86, -1695,  2122,  2122, -1695,  2122,  2122, -1695,
   -1695, -1695,   978,  2175,  1003,  2182,  1026,  2184,  2330, -1695,
   12854,  2387, -1695,  2185,  2186,  2191,  2193, -1695,  2550,  2566,
    2575,  2545,  2545, -1695,  2359,  2574,  2065, -1695, -1695, -1695,
   -1695,   483, -1695,  2204,  2206,  1028,  1030,   490,  2583,  1047,
   -1695, -1695,   -33,  2438,   427,   338, -1695,  2545, -1695, -1695,
    2495,  2322, -1695,  2359, -1695, -1695,   523, -1695, -1695, -1695,
     352,   393,  1055,   490,   490,  2420, -1695, -1695, -1695, -1695,
   -1695, -1695,     7, -1695, -1695, -1695,    58, -1695,  2345, -1695,
   -1695, -1695, -1695,   490,    34,  2400,  2401,  2413,  2417,  2602,
    2604, -1695, -1695
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1695,  2507,   -96, -1695, -1695, -1695, -1695,  -909,  1416, -1695,
    1557, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,  1661,  2229,
   -1695,  -229,  -638,  1118, -1695, -1395, -1695,   816, -1258, -1695,
   -1671, -1695, -1069, -1695,   878, -1286, -1695, -1695, -1376, -1695,
   -1695,  2111,  -286,  -291,  2109,  -515, -1695, -1695,  -300, -1695,
   -1695,   623, -1695, -1695, -1695,  1316,  -792,   387,   -58, -1695,
   -1695, -1695,  2505,  1990, -1695,  1986, -1695, -1123, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,  2100, -1695,
    1812,  1558, -1695, -1695, -1695, -1695, -1695, -1695, -1695, -1695,
   -1695, -1248, -1695,  -750, -1695, -1695, -1695, -1695, -1695,   419,
     778,  2551,  2260, -1695,  1706, -1695,   726,  1989, -1695, -1695,
   -1695, -1695, -1695, -1695, -1695, -1695, -1141,  1243, -1695, -1695,
   -1695, -1695,   601, -1695, -1695, -1695, -1695,   765, -1695,   386,
   -1695,  1270,  1259, -1664, -1694, -1455, -1475, -1379, -1695, -1077,
     428,   198,    89,  -856,  -419,  1774, -1151, -1695, -1695, -1695,
    2489, -1695,  -337, -1695,  1760,  1106, -1113, -1695, -1695, -1695,
   -1695,  2103, -1695, -1695, -1695, -1695, -1695,  2307, -1695, -1695,
   -1493, -1695
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -718
static const yytype_int16 yytable[] =
{
     288,  1289,  1341,  1516,   539,  1383,   929,   526,   521,  1304,
    1305,   623,  1747,  1735,  1733,  1323,  1743,  1361,   365,   827,
     857,  1110,  1111,  1826,   516,  1065,  1067,  1116,  1376,  1118,
    1514,  1900,  1196,   921,  1892,  1186,  1404,  -717,  2295,  1043,
     327,   328,   329,   330,   331,   332,   490,   517,   777,   912,
     889,   294,   889,   912,   612,    92,  1527,  1528,   294,  1186,
     778,   324,  2264,  1900,  1368,   382,   383,   613,  2173,   525,
    1898,  1842,   667,   668,   644,  1550,   388,   389,   390,  1744,
     624,    53,   392,   643,  1398,   491,   492,   493,   494,   495,
     496,   497,   514,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   654,   513,
    2112,   913,   637,   566,    54,   913,  1939,  1940,  2289,   527,
    1539,  1540,  1541,  1542,   641,   116,  1292,  1950,  1951,   337,
     625,  1369,  1132,  1743,   134,   354,  1262,   136,  2144,   847,
     912,   139,  1827,   491,   492,   493,   494,   495,   496,   497,
     141,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,  2145,   513,  1057,  2291,
    2031,   327,   328,   329,   330,   331,   332,    16,   899,  1139,
    1902,  1370,    56,  1521,  1070,  2032,  1543,  1901,  1193,   490,
    1195,   489,   338,   893,  1843,  1293,  1744,   547,  2290,   614,
     782,   783,   913,   784,   366,   117,   785,   936,  1787,  1788,
     548,  1903,  1902,   295,   325,   355,  2296,  1798,  1799,   296,
     295,   638,   669,  1187,  1044,   806,   296,  -717,   333,  1529,
    1566,   626,    55,   779,  2265,   514,  2174,   817,   528,    57,
    1082,  1576,  1737,  1903,   615,   914,  1399,  1421,   551,  2292,
     144,  2113,  1577,   655,  1844,  1717,  2044,  2045,  2046,  2047,
    2048,  2049,  1740,   922,   923,  1371,   528,  1920,  1279,   366,
    2057,  1428,    93,    73,  2061,   518,   118,   567,  2065,   915,
     916,  1837,  1372,   146,  1382,   135,   356,    16,   137,   858,
    1184,   664,   140,   556,  1520,   665,  1083,   900,  1140,    85,
     373,   142,   675,   679,   681,   682,   683,   684,   685,   686,
     687,   688,   689,  1075,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,  2106,
     707,   708,   709,  1904,   711,   712,   713,   714,   715,   716,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,  1745,   928,  1893,  1894,  1495,   734,   735,   780,   333,
    2107,   739,   740,  1084,   544,  1904,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,  1068,   767,
     768,   769,  1515,   148,   552,   772,   773,   774,   775,   776,
    1448,   145,  1449,   786,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,  1960,  1086,
    1087,   334,   288,  1085,  2279,   520,   297,   937,   818,  1092,
     940,   298,  1723,   297,   147,   345,   374,  1816,   298,   557,
    1852,   630,  1422,  2270,  1423,   951,  1544,  1545,  1546,  1863,
      75,  1864,  1857,  1133,  1134,  1135,  1136,   128,   944,   945,
     658,  1056,   812,  2178,  1961,  2283,   641,  2181,   568,   569,
     570,   571,    16,   100,  1150,  1126,  1127,  1128,  1557,  1363,
    1559,  1560,  -355,   813,    87,  1377,  1157,  1868,  1724,   641,
     553,  1719,   549,  1158,    76,  -486,   888,    86,  1869,  1547,
    2114,  2252,   939,  1170,   163,   311,  -317,    88,  2260,   859,
      77,  2025,   889,  2037,   545,  1171,    89,  1429,  1870,  1927,
    1928,  1929,  1930,  1931,  1932,  1060,  1098,  1099,   307,   308,
    1964,  1941,  1871,  2223,  2224,  1945,  2225,  2226,  -486,  1949,
      58,  1872,  2280,   558,   149,   925,  -486,    90,   309,  1159,
      97,  1172,   537,  1160,   890,  1725,   554,    78,  1290,  1173,
    2281,  1296,  2267,   101,  2115,   860,  1223,  1224,  -486,   555,
    1161,   550,   946,   947,    79,  1962,    80,   949,  2253,  1162,
    1069,  1873,    81,  2284,   956,  2253,   346,  1064,   129,   891,
    2282,  1879,   631,  1151,  2271,   560,   814,  1884,  1364,   102,
     361,  2285,  1143,  -355,  1378,   655,   130,    82,   669,  1174,
    1720,  1144,   164,   312,   105,  1726,  1163,  1170,  1168,  2277,
     316,   824,   559,    59,  1406,  2268,  1407,   103,   131,  1171,
      60,  2286,   491,   492,   493,   494,   495,   496,   497,  1507,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   132,   513,   317,  1175,   825,
    2269,   561,  1906,   106,  2254,  1172,    61,    62,   122,  1306,
    2278,  2254,   125,  1173,   562,  2143,  1164,   150,  2255,   107,
     161,   150,   318,    63,   310,  2255,  1047,  1048,  -490,  1050,
     319,   162,  1176,   108,   489,   491,   492,   493,   494,   495,
     496,   497,   320,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,  1751,   513,
     151,   385,   386,  1174,   151,    83,   314,   358,   152,   109,
      64,  -490,   292,   153,   110,  2021,  2176,  -487,  1995,  -490,
    2216,  1752,  2003,  1998,   349,   111,   315,    65,  1330,    66,
     154,  1387,   113,  1552,   293,    67,   952,  2015,  2247,  2016,
    1388,  -490,  1553,   114,   350,   529,  1285,  1277,  1331,   321,
    2186,   115,  1175,  1564,    68,    69,  2245,  2246,   511,   512,
    -487,   513,  1565,  2273,  2274,  1993,   119,  2148,  -487,    70,
     322,   878,    91,   120,  1994,  1124,    98,   883,   121,   885,
    2134,  1177,  2272,   123,  2138,   573,   574,  2222,   820,   528,
    -487,   124,  2293,   156,   510,   511,   512,  1263,   513,   491,
     492,   493,   494,   495,   496,   497,  1274,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   530,   513,   919,   920,   126,  1197,   138,  1198,
     143,   323,  -323,  1077,  1078,   339,  1205,  1206,   157,  1207,
    1146,  1147,   158,  1212,  1189,  1190,   531,   159,  1328,  1329,
    1213,  1214,  1215,  1216,   291,  1217,  1218,  1219,   165,   532,
     305,  2088,  1220,  1221,   340,  1222,  1332,  1333,   341,  1334,
    1335,  1225,  1226,  1227,  2103,   342,  2073,  2098,    71,  1336,
    1335,  1358,  1359,   347,   533,  1235,  1236,  1237,   343,  1238,
     506,   507,   508,   509,   510,   511,   512,   344,   513,   348,
    1249,  2204,  2205,   352,  2207,  2208,   353,   534,   357,  1250,
    1251,  1252,  1253,  1254,  1255,  1256,  1257,   359,  1258,  1396,
    1393,  1394,  1259,   361,  1260,   363,  1261,  1469,  1470,  1472,
    1473,  1563,  1359,  1573,  1359,  1267,   367,  1269,  1269,  1103,
    1104,   368,  1107,  1108,  1109,  1715,  1359,   369,  1112,  1113,
    1114,  1286,   370,  1117,  2154,   371,  1739,   372,  1291,   491,
     492,   493,   494,   495,   496,   497,   378,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   379,   513,  1741,  1405,   380,   953,   867,   868,
     869,   870,   381,   871,  1756,  1757,   873,   874,   875,  1791,
    1792,  1795,  1796,   879,   880,   881,   376,  1340,   884,  1835,
    1836,  1858,  1359,  1866,  1359,   377,  1496,  1881,  1359,  1498,
      92,  1499,   387,  1501,   491,   492,   493,   494,   495,   496,
     497,   394,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   395,   513,   977,
     978,   396,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,  1410,   513,   397,  1414,
    1886,  1394,  1895,  1896,   398,  1419,  1897,  1896,  1899,  1836,
    1907,  1405,  1966,  1967,  1425,   519,   949,  1968,  1967,  1969,
    1967,   537,  1433,  1434,  1972,  1896,  1975,  1976,  1977,  1978,
     399,   491,   492,   493,   494,   495,   496,   497,   400,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   401,   513,   540,   491,   492,   493,
     494,   495,   496,   497,   402,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
    1497,   513,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   403,   513,  1980,  1981,  1983,
    1984,  2001,  1359,  1009,  1010,   404,  1517,  2002,  1359,  2014,
    1359,  2018,  1359,   405,  1522,  2026,  1976,  2027,  1896,   491,
     492,   493,   494,   495,   496,   497,   406,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   407,   513,  2028,  1896,  2030,  1978,  2082,  2083,
     408,   491,   492,   493,   494,   495,   496,   497,   409,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   523,   513,   491,   492,   493,   494,
     495,   496,   497,   410,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,  1727,
     513,  2092,  1359,  2101,  1359,   411,   491,   492,   493,   494,
     495,   496,   497,   412,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   413,
     513,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,  1762,   513,   414,  1763,  2102,  1359,  2108,  1836,
    2119,  1757,  2158,  1359,  1774,  1775,  2160,  1976,  2161,  1978,
    2171,  2172,   541,  1011,  1012,   415,  1776,  2188,  2189,  2194,
    2195,   542,  2227,  2228,   416,  1783,  1784,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   417,
     513,   543,  1800,  1801,  1802,  2230,  2231,  1803,  1804,   418,
    1805,   419,  1806,   420,  1807,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   421,   513,   422,  1813,  1815,
    2233,  2228,  2258,  2228,  2259,  2228,   563,  1823,  1824,   941,
     564,  1578,  1579,  1580,  1581,  1582,  1583,   423,  1584,   424,
    1585,  2262,  2263,   425,  1586,  1587,  1588,  1839,  1589,  2287,
    2228,  1845,  1590,  1591,  1592,  1593,  1594,  1071,  1072,  1282,
    1283,  1849,  1820,  1821,   426,   990,  1595,   427,   428,   429,
     430,   431,   432,   433,   434,  1855,  1596,  1597,   435,   436,
    1598,   437,   438,   439,   440,  1599,  1600,  1601,  1602,  1603,
     441,   442,  1604,   443,  1605,  1606,  1607,   444,   445,  1608,
    1609,   446,  1610,  1611,  1612,  1033,  1034,   447,  1613,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   448,   513,
     449,   450,  1614,   451,   452,   453,   454,  1615,   455,   456,
     565,   991,  1616,  1617,  1618,   457,   458,   459,   460,  1619,
    1620,   461,  1621,  1622,  1623,  1624,   462,   463,  1625,   464,
    1626,  1627,  1628,  1629,   465,  1630,   466,  1631,  1632,   467,
    1633,   468,  1634,  1635,   469,  1636,  1637,  1638,  1639,   470,
     471,   472,   473,   474,  1640,   475,  1641,   476,  1642,  1643,
     477,  1644,  1645,  1646,  1647,  1648,  1649,   478,  1650,  1651,
    1652,  1653,  1654,  1039,  1040,   479,   480,   481,   482,   483,
    1342,   484,   485,  1655,  1343,  1656,   486,  1657,   487,   488,
     522,   524,   575,   576,   611,   619,  1658,   620,  1659,  1660,
    1661,  1662,  1663,  1664,  1665,  1430,  1431,  1666,  1667,   621,
     622,   628,   629,  1668,   634,  1669,  1670,  1671,   632,  1672,
     635,  1673,   640,  1674,  1675,  1676,  1677,   645,   646,   647,
    1460,  1461,  1344,   648,   649,  1345,   650,   651,   652,   653,
     657,   660,   670,  1910,  1911,  1678,  1679,  1680,   513,  1915,
    1346,  1917,   671,   690,   672,  1681,   706,  1682,  1683,  1684,
    1485,  1486,   710,   729,  1685,   730,  1686,  1687,  1688,   731,
    1347,   732,  1689,   741,   733,   805,  1690,  1691,  1348,  1692,
    1693,  1694,  1695,   736,   737,   738,  1696,   742,   743,   491,
     492,   493,   494,   495,   496,   497,   766,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   770,   513,   807,   781,   809,   811,   819,   821,
     828,   829,   831,   832,   311,   835,   833,  1697,  1698,  1699,
    1700,  1701,   491,   492,   493,   494,   495,   496,   497,   836,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   837,   513,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   848,  1349,   849,  1350,
    2012,   850,   851,   852,   855,   854,   853,   863,   856,   861,
     864,  2022,   892,   865,   872,   876,   882,   886,  1351,  1702,
    1703,  1704,  1705,  1706,   887,  1707,   894,   895,   897,   896,
     898,   901,   902,  1307,   903,   491,   492,   493,   494,   495,
     496,   497,  1419,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,  2050,   513,
     904,  1309,   906,   908,  1310,   905,  1311,   909,   910,  1312,
     911,   926,   932,   934,   942,   948,   992,  1006,  1007,    16,
    1008,  2068,  1013,  1014,  1313,  1015,  2070,   -71,  1049,  1052,
    1053,  1314,  1315,  1054,  1058,  2076,  1059,  1061,  1062,  1578,
    1579,  1580,  1581,  1582,  1583,  1074,  1584,  1063,  1585,  2085,
    2086,  1080,  1586,  1587,  1588,  1073,  1589,  1076,  1081,  1088,
    1590,  1591,  1592,  1593,  1594,  1089,  1316,  1090,   889,  1093,
    1094,  1095,  1096,  1097,  1595,  1100,  1105,  1122,  1119,  1120,
    1131,  1123,  1125,  1129,  1596,  1597,  1121,  1142,  1598,  1145,
    1148,  1152,  1141,  1599,  1600,  1601,  1602,  1603,  1153,  1154,
    1604,  1156,  1605,  1606,  1607,  1155,  1169,  1608,  1609,  1181,
    1610,  1611,  1612,  1182,  1185,  1191,  1613,  1318,  1186,  1201,
    1203,  1204,  1228,  1229,  1239,  1240,  1209,  1241,  1243,  1230,
    1614,  1245,  1231,  1232,  1247,  1615,  1233,  1234,  1242,  1244,
    1616,  1617,  1618,  1275,  1749,  1246,  1319,  1619,  1620,   -73,
    1621,  1622,  1623,  1624,  1320,  1248,  1625,  1278,  1867,  1627,
    1628,  1629,  1280,  1630,  2157,  1631,  1632,  1284,  1633,  1287,
    1634,  1635,  1288,  1636,  1637,  1638,  1639,  1297,  1301,  1302,
    1300,  2169,  1640,  1324,  1641,  1303,  1642,  1643,  1325,  1644,
    1645,  1646,  1647,  1648,  1649,  1326,  1650,  1651,  1652,  1653,
    1654,  1327,  1337,  1339,  1338,  1353,  1354,  1355,  1356,  1357,
    1362,  1655,  1360,  1656,  1321,  1657,  1365,  1367,  1373,  1380,
    1375,  1379,  1381,  1384,  1658,  1386,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,  1487,  1488,  1666,  1667,  1385,  1391,  1395,
    1389,  1668,  1390,  1669,  1670,  1671,  1397,  1672,  1392,  1673,
    1400,  1674,  1675,  1676,  1677,  1401,  1402,  1403,  1405,  1411,
    1416,  1415,  1417,  2220,  1435,  1426,  1504,  1505,  1508,  1512,
    1513,  1436,  1453,  1678,  1679,  1680,  1489,  1490,  1525,  1531,
    1530,  1454,  1455,  1681,  1456,  1682,  1683,  1684,  1457,  1458,
    1459,  1468,  1685,  1493,  1686,  1687,  1688,  1471,  1474,  1509,
    1689,  1494,  1500,  1502,  1690,  1691,  1510,  1692,  1693,  1694,
    1695,  1535,  1536,  1548,  1696,   491,   492,   493,   494,   495,
     496,   497,  1520,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,  1538,   513,
    1503,  1511,  1518,  1523,  1524,  1532,  1549,  1551,  1554,  1555,
    1750,  1556,  1558,  1533,  1534,  1697,  1698,  1699,  1700,  1701,
    1537,  1561,  1567,  1568,  1569,  1570,  1571,  1572,  1574,  1709,
    1575,  1710,  1712,  1714,  1718,  1716,  1721,  1728,  1729,  1578,
    1579,  1580,  1581,  1582,  1583,  1730,  1584,  1731,  1585,  1734,
    1748,  1754,  1586,  1587,  1588,  1755,  1589,  1759,  1761,  1785,
    1590,  1591,  1592,  1593,  1594,  1790,  1794,  1808,  1818,  1809,
    1825,  1810,  1811,  1812,  1595,  1822,  1828,  1702,  1703,  1704,
    1705,  1706,  1829,  1707,  1596,  1597,  1831,  1833,  1598,  1841,
    1838,  1840,  1851,  1599,  1600,  1601,  1602,  1603,  1846,  1854,
    1604,  1853,  1605,  1606,  1607,  1847,  1856,  1608,  1609,  1859,
    1610,  1611,  1612,  1860,  1848,  1874,  1613,  1877,  1883,  1861,
    1885,  1865,  1862,  1888,  1876,  1875,  1880,  1908,  1882,  1889,
    1614,  1919,  1912,  1887,  1890,  1615,  1918,  1936,  1937,  1942,
    1616,  1617,  1618,  1970,  1921,  1943,  1944,  1619,  1620,  1946,
    1621,  1622,  1623,  1624,  1947,  1971,  1625,  1948,  1996,  1627,
    1628,  1629,  1973,  1630,  1974,  1631,  1632,  1979,  1633,  1989,
    1634,  1635,  1985,  1636,  1637,  1638,  1639,  1986,  1987,  2000,
    2010,  1990,  1640,  1991,  1641,  2011,  1642,  1643,  2013,  1644,
    1645,  1646,  1647,  1648,  1649,  2017,  1650,  1651,  1652,  1653,
    1654,  2029,  2019,  2023,  2024,  2033,  2034,  2038,  2035,  2036,
    2039,  1655,  2051,  1656,  2042,  1657,  2053,  2054,  2059,  2055,
    2056,  2060,  2063,  2066,  1658,  2064,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,  2067,  2071,  1666,  1667,  2069,  2074,  2075,
    2077,  1668,  2078,  1669,  1670,  1671,  2079,  1672,  2080,  1673,
    2087,  1674,  1675,  1676,  1677,  2081,  2084,  2091,  2093,  2094,
    2095,  2096,  2097,  2109,  2100,  2104,  2110,  2111,  2116,  2117,
    2118,  2120,  2121,  1678,  1679,  1680,  2123,  2124,  2125,  2126,
    2131,  2127,  2146,  1681,  2130,  1682,  1683,  1684,  2149,  2128,
    2133,  2135,  1685,  2137,  1686,  1687,  1688,  2136,  2139,  2140,
    1689,  2159,  2141,  2162,  1690,  1691,  2150,  1692,  1693,  1694,
    1695,  2151,  2163,  2164,  1696,   491,   492,   493,   494,   495,
     496,   497,  2165,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,  2166,   513,
    2167,  2168,  2170,  2175,  2177,  2184,  2185,  2187,  2193,  1933,
    1934,  2196,  2192,  2197,  2198,  1697,  1698,  1699,  1700,  1701,
    2200,  2199,  2202,  2203,  2206,  2209,  2210,  1896,  2211,  2213,
    2214,  2215,  2217,  2242,  2218,  2219,  2221,  2235,  2229,  1578,
    1579,  1580,  1581,  1582,  1583,  2232,  1584,  2234,  1585,  2237,
    2238,  2243,  1586,  1587,  1588,  2239,  1589,  2240,  2244,  2251,
    1590,  1591,  1592,  1593,  1594,  2248,  2261,  2266,  2256,  2257,
    2264,  2275,  2288,  2294,  1595,  2297,  2298,  1702,  1703,  1704,
    1705,  1706,  2299,  1707,  1596,  1597,  2300,  2301,  1598,  2302,
     306,  1273,  1519,  1599,  1600,  1601,  1602,  1603,  1427,  1211,
    1604,   666,  1605,  1606,  1607,  1817,  1909,  1608,  1609,   808,
    1610,  1611,  1612,  1965,   364,   930,  1613,   823,   931,  1299,
    2236,   659,   160,   834,  2041,  1194,  1079,   938,  1742,  2276,
    1614,  2020,  1722,  1738,   384,  1615,  1115,  1850,  1130,     0,
    1616,  1617,  1618,     0,   633,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,   862,  1999,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     957,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2004,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     958,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2005,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     959,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2006,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     966,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2007,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     967,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2008,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     968,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2009,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     969,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2089,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     971,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2090,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     972,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2155,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     973,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2156,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,  1679,  1680,     0,     0,     0,     0,
       0,     0,     0,  1681,     0,  1682,  1683,  1684,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,     0,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,     0,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,     0,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1578,
    1579,  1580,  1581,  1582,  1583,     0,  1584,     0,  1585,     0,
       0,     0,  1586,  1587,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,  1593,  1594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,  1596,  1597,     0,     0,  1598,     0,
       0,     0,     0,  1599,  1600,  1601,  1602,  1603,     0,     0,
    1604,     0,  1605,  1606,  1607,     0,     0,  1608,  1609,     0,
    1610,  1611,  1612,     0,     0,     0,  1613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1614,     0,     0,     0,     0,  1615,     0,     0,     0,     0,
    1616,  1617,  1618,     0,     0,     0,     0,  1619,  1620,     0,
    1621,  1622,  1623,  1624,     0,     0,  1625,     0,  2190,  1627,
    1628,  1629,     0,  1630,     0,  1631,  1632,     0,  1633,     0,
    1634,  1635,     0,  1636,  1637,  1638,  1639,     0,     0,     0,
       0,     0,  1640,     0,  1641,     0,  1642,  1643,     0,  1644,
    1645,  1646,  1647,  1648,  1649,     0,  1650,  1651,  1652,  1653,
    1654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1655,     0,  1656,     0,  1657,     0,     0,     0,     0,
       0,     0,     0,     0,  1658,     0,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,     0,     0,  1666,  1667,     0,     0,     0,
       0,  1668,     0,  1669,  1670,  1671,     0,  1672,     0,  1673,
       0,  1674,  1675,  1676,  1677,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,     0,  1678,  1679,  1680,     0,     0,     0,     0,
     172,   173,     0,  1681,     0,  1682,  1683,  1684,   174,   175,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
    1689,   176,     0,     0,  1690,  1691,     0,  1692,  1693,  1694,
    1695,     0,     0,     0,  1696,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,   178,     0,
       0,   179,   180,     0,     0,     0,     0,     0,     0,     0,
     181,   981,     0,     0,     0,  1697,  1698,  1699,  1700,  1701,
       0,     0,     0,     0,     0,     0,     0,   182,     0,     0,
       0,   183,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1702,  1703,  1704,
    1705,  1706,     0,  1707,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   185,   513,     0,   491,   492,   493,
     494,   495,   496,   497,   186,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   187,   188,     0,     0,
       0,     0,     0,     0,   189,   190,     0,     0,     0,   191,
       0,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   192,   513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,     0,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,     0,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   280,   281,   282,     0,     0,     0,     0,
     283,   284,   285,   286,     0,     0,   287,   166,   167,   168,
     169,   170,   171,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,     0,     0,     0,     0,     0,     0,   174,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   676,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   178,
       0,     0,   179,   180,   491,   492,   493,   494,   495,   496,
     497,   181,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   986,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     677,   513,   987,     0,     0,   185,     0,     0,   491,   492,
     493,   494,   495,   496,   497,   186,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,   491,
     492,   493,   494,   495,   496,   497,   988,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,   678,     0,     0,     0,
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
       0,     0,   172,   173,     0,   989,     0,     0,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   787,     0,     0,     0,     0,     0,     0,
     788,     0,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   177,   513,     0,     0,  1001,
     178,     0,     0,   179,   180,     0,     0,     0,     0,     0,
       0,     0,   181,     0,     0,     0,     0,   491,   492,   493,
     494,   495,   496,   497,  1002,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,  1003,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1005,     0,     0,   185,     0,     0,   491,
     492,   493,   494,   495,   496,   497,   186,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1016,     0,     0,     0,   187,     0,
       0,     0,     0,     0,     0,   789,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,     0,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   280,   281,   282,     0,     0,
       0,     0,   283,   284,   285,   286,     0,     0,   790,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,   174,     0,     0,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,  1025,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   178,     0,     0,   179,   180,     0,     0,     0,     0,
       0,     0,  1026,   181,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,  1027,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,  1028,   513,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1029,     0,     0,   185,     0,     0,
     491,   492,   493,   494,   495,   496,   497,   186,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,  1030,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,     0,
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
       0,     0,   174,   717,     0,  1031,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,     0,     0,
       0,     0,   178,     0,     0,   179,   180,     0,     0,  1032,
       0,     0,     0,     0,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   491,   492,   493,
     494,   495,   496,   497,  1038,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,  1042,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,  1202,     0,     0,   185,     0,
       0,   491,   492,   493,   494,   495,   496,   497,   186,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1440,     0,     0,
     187,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,     0,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   280,   281,   282,
       0,     0,     0,     0,   283,   284,   285,   286,     0,     0,
     287,   166,   167,   168,   169,   170,   171,     0,     0,     0,
       0,     0,     0,     0,     0,   172,   173,     0,     0,     0,
       0,  1441,     0,   174,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,  1452,     0,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,  1462,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   955,     0,     0,   491,   492,   493,   494,   495,
     496,   497,  1478,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1479,     0,     0,   185,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   186,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1480,     0,     0,     0,
       0,   187,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   172,   173,     0,  1483,
       0,     0,     0,     0,   174,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,   178,     0,     0,   179,   180,     0,
       0,     0,     0,     0,     0,     0,   181,     0,     0,  1484,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   491,   492,   493,   494,   495,   496,   497,
    1413,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
    1957,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,  -718,  -718,  -718,  -718,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   771,   513,     0,     0,
     185,     0,     0,   491,   492,   493,   494,   495,   496,   497,
     186,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,     0,     0,     0,     0,   954,     0,     0,     0,
       0,     0,   187,   491,   492,   493,   494,   495,   496,   497,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,     0,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   280,
     281,   282,     0,     0,     0,     0,   283,   284,   285,   286,
       0,     0,   287,   166,   167,   168,   169,   170,   171,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   173,   960,
       0,     0,     0,     0,     0,   174,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,   178,     0,     0,   179,   180,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   961,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1418,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   962,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,   963,     0,     0,
       0,   185,     0,     0,   491,   492,   493,   494,   495,   496,
     497,   186,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,   964,     0,     0,
       0,     0,     0,   187,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
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
     965,     0,     0,     0,     0,     0,   174,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,     0,     0,   178,     0,     0,   179,
     180,   491,   492,   493,   494,   495,   496,   497,   181,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,     0,
       0,     0,  1914,   491,   492,   493,   494,   495,   496,   497,
     970,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,   974,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   975,     0,
       0,     0,   185,     0,     0,   491,   492,   493,   494,   495,
     496,   497,   186,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,   976,     0,
       0,     0,     0,     0,   187,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,     0,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,     0,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   280,   281,   282,     0,     0,     0,     0,   283,   284,
     285,   286,     0,     0,   287,   166,   167,   168,   169,   170,
     171,     0,     0,     0,     0,     0,     0,     0,     0,   172,
     173,   980,     0,     0,     0,     0,     0,   174,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,     0,     0,   982,     0,   178,     0,     0,
     179,   180,   491,   492,   493,   494,   495,   496,   497,   181,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   983,     0,     0,
       0,     0,     0,  1916,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   491,   492,   493,   494,   495,
     496,   497,   984,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,   993,
       0,     0,     0,   185,     0,     0,   491,   492,   493,   494,
     495,   496,   497,   186,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,   994,
       0,     0,     0,     0,     0,   187,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     172,   173,   995,     0,     0,     0,     0,     0,   174,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,   996,     0,   178,     0,
       0,   179,   180,   491,   492,   493,   494,   495,   496,   497,
     181,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   997,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,   998,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     999,     0,     0,     0,   185,     0,     0,   491,   492,   493,
     494,   495,   496,   497,   186,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
    1000,     0,     0,     0,     0,     0,   187,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,     0,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,     0,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   280,   281,   282,     0,     0,     0,     0,
     283,   284,   285,   286,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,  1004,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,  1017,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,   491,
     492,   493,   494,   495,   496,   497,  1018,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,  1019,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,  1020,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,  1021,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
    1022,     0,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,  1023,   513,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,  1024,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,  1035,     0,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,  1036,   513,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,  1037,   513,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,  1041,   513,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,   491,   492,   493,   494,   495,   496,   497,  1066,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,  1432,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,  1437,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,  1438,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,  1439,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,  1442,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,  1443,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,   491,
     492,   493,   494,   495,   496,   497,  1444,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,  1445,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,  1446,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,  1447,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,  1450,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,  1451,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,  1463,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,  1464,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1477,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1481,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1482,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1491,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1492,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1562,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,  1764,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,  1830,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,   491,
     492,   493,   494,   495,   496,   497,  1891,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,     0,   491,
     492,   493,   494,   495,   496,   497,  1922,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,  1923,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,  1924,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,  1925,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,   491,   492,   493,   494,   495,
     496,   497,  1926,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,  1935,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   491,   492,   493,   494,   495,
     496,   497,  1952,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,  1953,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   491,   492,   493,   494,   495,
     496,   497,  1954,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,  1955,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   491,   492,   493,   494,   495,
     496,   497,  1956,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,   491,   492,   493,   494,   495,   496,   497,
    1958,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1959,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1982,     0,     0,     0,  1765,  1766,     0,
       0,     0,  1767,     0,  1768,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1988,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1769,  1770,     0,
    1771,   491,   492,   493,   494,   495,   496,   497,  1992,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,  1307,   513,     0,     0,     0,     0,
       1,     0,     0,  1997,     2,     0,     0,     0,     0,     0,
       0,     0,     0,  1308,     0,     0,     0,     0,     0,     0,
       0,     0,  1309,     0,     0,  1310,     0,  1311,  2099,     0,
    1312,     3,     0,     0,     0,     0,     4,   577,   578,     0,
     579,     0,   580,   581,     0,  1313,     0,     0,     0,     5,
       0,     0,  1314,  1315,     0,     0,     0,     0,   582,  2105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2129,     0,     0,  1316,     0,     0,
     583,   584,   585,   586,     0,     0,     0,     0,     0,   587,
    1772,  1773,     0,     0,  1317,     0,     0,     0,   588,  2142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,   391,     0,     0,   589,   943,
       0,     9,    10,    11,  2152,     0,   590,     0,  1318,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   591,     0,     0,     0,     0,     0,     0,   592,  2153,
       0,   593,     0,     0,   594,   595,     0,  1319,     0,    12,
       0,    13,     0,     0,     0,  1320,     0,     0,     0,    14,
       0,   596,     0,     0,  2191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,  1200,     0,     0,   597,   598,     0,    17,   599,
     600,    18,     0,     0,     0,   601,     0,   602,     0,     0,
      19,     0,   603,   604,     0,  1321,     0,     0,   605,     0,
     606,     0,     0,     0,     0,     0,   607,     0,   608,     0,
       0,     0,     0,   609,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1743,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,  1208,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,  1199,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,  1424,     0,     0,     0,
       0,     0,     0,   514,     0,     0,     0,     0,     0,  1744,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   985,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,   491,   492,   493,   494,   495,   496,   497,
    1051,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,  1266,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513
};

static const yytype_int16 yycheck[] =
{
      96,  1070,  1125,  1289,   304,  1156,   644,   298,   294,  1086,
    1087,   348,  1407,  1392,  1390,  1092,    47,  1140,   134,   534,
       5,   877,   878,  1516,   134,   817,    20,   883,  1151,   885,
      20,    46,   941,     4,  1728,   197,  1177,    49,     4,     6,
       3,     4,     5,     6,     7,     8,     3,   157,     6,   152,
      34,     3,    34,   152,     3,     8,  1304,  1305,     3,   197,
      18,    53,    95,    46,    38,   161,   162,    16,    88,   298,
    1734,    76,   122,   123,   365,  1323,   172,   173,   174,   110,
     105,   217,   178,   264,    85,    10,    11,    12,    13,    14,
      15,    16,    49,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   238,    34,
     105,   214,   134,    18,   250,   214,  1787,  1788,   111,   238,
       4,     5,     6,     7,   271,     3,   195,  1798,  1799,   137,
     155,   105,     3,    47,     3,     3,  1045,     3,   228,   558,
     152,     3,  1518,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   256,    34,   806,   111,
       5,     3,     4,     5,     6,     7,     8,   239,   264,   264,
     195,   155,   250,   274,   822,    20,    70,   170,   938,     3,
     940,   287,   200,   612,   199,   264,   110,    69,   191,   148,
      13,    14,   214,    16,   385,    83,    19,   269,  1466,  1467,
      82,   226,   195,   165,   206,    83,   182,  1475,  1476,   171,
     165,   243,   272,   385,   191,   516,   171,   239,   191,  1306,
    1353,   256,   368,   191,   267,    49,   256,   523,   385,     3,
      76,  1364,  1393,   226,   193,   348,   247,   385,    69,   191,
       3,   246,  1365,   383,   259,  1378,  1927,  1928,  1929,  1930,
    1931,  1932,  1403,   234,   235,   239,   385,  1760,  1060,   385,
    1941,   138,   225,     3,  1945,   385,   154,   182,  1949,   382,
     383,  1529,   256,     3,   383,   154,   154,   239,   154,   274,
     928,   387,   154,    69,   385,   391,   132,   383,   383,     3,
      72,   154,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   828,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,  2023,
     426,   427,   428,   348,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   382,   643,  1729,  1730,  1264,   452,   453,   316,   191,
    2024,   457,   458,   199,   106,   348,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   382,   485,
     486,   487,   382,     3,   215,   491,   492,   493,   494,   495,
     384,   154,   384,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,  1813,   838,
     839,   384,   518,   259,    72,   382,   378,   656,   524,   848,
     659,   383,    76,   378,   154,     3,   208,  1506,   383,   215,
    1553,     3,  1192,   105,  1194,   674,   330,   331,   332,  1572,
      93,  1574,  1565,   324,   325,   326,   327,     3,   122,   123,
     238,   386,   131,  2134,   274,    72,   271,  2138,   373,   374,
     375,   376,   239,     3,   264,   894,   895,   896,  1334,   264,
    1336,  1337,   264,   152,     3,   264,    69,  1600,   132,   271,
       3,   264,     3,    76,   137,   101,    18,     3,  1611,   383,
     202,    18,   269,    85,     3,   274,     3,    26,    18,     5,
     153,  1890,    34,  1908,   256,    97,   250,   384,  1631,  1777,
    1778,  1779,  1780,  1781,  1782,   811,   863,   864,    52,    53,
    1816,  1789,  1645,  2204,  2205,  1793,  2207,  2208,   144,  1797,
      10,  1654,   190,     3,   154,   641,   152,   250,    72,   132,
     250,   133,    49,   136,    76,   199,    69,   200,  1073,   141,
     208,  1076,   135,    93,   266,    61,   985,   986,   174,    82,
     153,    82,   668,   669,   217,   385,   219,   673,    95,   162,
     385,  1694,   225,   190,   680,    95,   154,   816,   134,   111,
     238,  1714,   154,   383,   256,     3,   265,  1720,   383,     0,
     382,   208,    49,   385,   383,   383,   152,   250,   272,   191,
     383,    58,   111,   382,     3,   259,   199,    85,   918,    96,
      36,   175,    82,    93,     3,   198,     5,   381,   174,    97,
     100,   238,    10,    11,    12,    13,    14,    15,    16,  1277,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   201,    34,    73,   240,   213,
     233,    69,  1739,     3,   181,   133,   136,   137,    67,  1088,
     147,   181,    71,   141,    82,  2070,   259,   101,   195,     3,
       9,   101,    98,   153,   208,   195,   782,   783,   101,   785,
     106,    20,   274,     3,   790,    10,    11,    12,    13,    14,
      15,    16,   118,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     3,    34,
     144,   382,   383,   191,   144,   368,    98,   126,   152,   383,
     200,   144,   152,   157,   214,  1886,  2131,   101,  1851,   152,
    2195,    26,  1865,  1856,    37,   154,   118,   217,   257,   219,
     174,   153,     3,    49,   174,   225,   134,  1880,  2233,  1882,
     162,   174,    58,   153,    57,    74,  1066,  1058,   277,   185,
    2146,     3,   240,    49,   244,   245,  2231,  2232,    31,    32,
     144,    34,    58,  2258,  2259,    49,     3,  2073,   152,   259,
     206,   593,    14,     3,    58,   891,    18,   599,     3,   601,
    2058,   383,  2257,   244,  2062,   384,   385,  2202,   384,   385,
     174,   153,  2287,   169,    30,    31,    32,  1046,    34,    10,
      11,    12,    13,    14,    15,    16,  1055,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   151,    34,   384,   385,   250,   943,     3,   945,
       3,   267,   161,    43,    44,   278,   952,   953,   385,   955,
     221,   222,     3,   959,   384,   385,   175,     3,   384,   385,
     966,   967,   968,   969,     3,   971,   972,   973,   385,   188,
       3,  1994,   978,   979,     3,   981,    80,    81,    49,   384,
     385,   987,   988,   989,  2017,     3,  1965,  2010,   368,   384,
     385,   384,   385,   278,   213,  1001,  1002,  1003,   383,  1005,
      26,    27,    28,    29,    30,    31,    32,   195,    34,   383,
    1016,  2179,  2180,   195,  2182,  2183,     3,   236,     3,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,   383,  1034,  1168,
     384,   385,  1038,   382,  1040,     3,  1042,   384,   385,   384,
     385,   384,   385,   384,   385,  1051,   278,  1053,  1054,   870,
     871,   278,   873,   874,   875,   384,   385,   278,   879,   880,
     881,  1067,   278,   884,  2087,   195,  1395,   278,  1074,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     4,    34,   384,   385,   243,   385,   580,   581,
     582,   583,     3,   585,   384,   385,   588,   589,   590,     4,
       5,     4,     5,   595,   596,   597,   278,  1123,   600,   384,
     385,   384,   385,   384,   385,   278,  1265,   384,   385,  1268,
       8,  1270,     9,  1272,    10,    11,    12,    13,    14,    15,
      16,   382,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   383,    34,   384,
     385,    34,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,  1182,    34,   383,  1185,
     384,   385,   384,   385,   383,  1191,   384,   385,   384,   385,
     384,   385,   384,   385,  1200,   385,  1202,   384,   385,   384,
     385,    49,  1208,  1209,   384,   385,   384,   385,   384,   385,
     383,    10,    11,    12,    13,    14,    15,    16,   383,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   383,    34,    51,    10,    11,    12,
      13,    14,    15,    16,   383,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1266,    34,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   383,    34,   384,   385,   384,
     385,   384,   385,   384,   385,   383,  1292,   384,   385,   384,
     385,   384,   385,   383,  1300,   384,   385,   384,   385,    10,
      11,    12,    13,    14,    15,    16,   383,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   383,    34,   384,   385,   384,   385,    55,    56,
     383,    10,    11,    12,    13,    14,    15,    16,   383,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     3,    34,    10,    11,    12,    13,
      14,    15,    16,   383,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,  1385,
      34,   384,   385,   384,   385,   383,    10,    11,    12,    13,
      14,    15,    16,   383,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   383,
      34,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1428,    34,   383,  1431,   384,   385,   384,   385,
     384,   385,   384,   385,  1440,  1441,   384,   385,   384,   385,
     384,   385,    51,   384,   385,   383,  1452,    55,    56,   382,
     383,    42,   384,   385,   383,  1461,  1462,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   383,
      34,     3,  1478,  1479,  1480,   382,   383,  1483,  1484,   383,
    1486,   383,  1488,   383,  1490,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   383,    34,   383,  1504,  1505,
     384,   385,   384,   385,   384,   385,    69,  1513,  1514,   385,
     274,     3,     4,     5,     6,     7,     8,   383,    10,   383,
      12,   384,   385,   383,    16,    17,    18,  1533,    20,   384,
     385,  1537,    24,    25,    26,    27,    28,   824,   825,  1062,
    1063,  1547,  1510,  1511,   383,   318,    38,   383,   383,   383,
     383,   383,   383,   383,   383,  1561,    48,    49,   383,   383,
      52,   383,   383,   383,   383,    57,    58,    59,    60,    61,
     383,   383,    64,   383,    66,    67,    68,   383,   383,    71,
      72,   383,    74,    75,    76,   384,   385,   383,    80,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   383,    34,
     383,   383,    94,   383,   383,   383,   383,    99,   383,   383,
     243,   384,   104,   105,   106,   383,   383,   383,   383,   111,
     112,   383,   114,   115,   116,   117,   383,   383,   120,   383,
     122,   123,   124,   125,   383,   127,   383,   129,   130,   383,
     132,   383,   134,   135,   383,   137,   138,   139,   140,   383,
     383,   383,   383,   383,   146,   383,   148,   383,   150,   151,
     383,   153,   154,   155,   156,   157,   158,   383,   160,   161,
     162,   163,   164,   384,   385,   383,   383,   383,   383,   383,
      60,   383,   383,   175,    64,   177,   383,   179,   383,   383,
     383,   383,     3,     3,   195,     3,   188,   195,   190,   191,
     192,   193,   194,   195,   196,   384,   385,   199,   200,   278,
       3,     3,   195,   205,     3,   207,   208,   209,   278,   211,
       3,   213,    26,   215,   216,   217,   218,     3,     3,     3,
     384,   385,   112,     3,     3,   115,     3,     3,     3,     3,
       3,     3,     3,  1749,  1750,   237,   238,   239,    34,  1755,
     130,  1757,     3,   384,   386,   247,   384,   249,   250,   251,
     384,   385,   384,   384,   256,   384,   258,   259,   260,   384,
     150,   384,   264,     5,   384,     3,   268,   269,   158,   271,
     272,   273,   274,   384,   384,   384,   278,   384,   384,    10,
      11,    12,    13,    14,    15,    16,   384,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   384,    34,     3,   383,     3,     3,   384,     3,
     161,   194,     3,     3,   274,    40,     5,   319,   320,   321,
     322,   323,    10,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     3,    34,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   247,   243,   249,
    1876,     3,     3,     3,   376,     3,     5,   383,     5,     5,
     383,  1887,     3,   383,   383,    62,   383,   383,   268,   381,
     382,   383,   384,   385,   383,   387,     3,     3,   384,     3,
     385,     3,     3,    18,   195,    10,    11,    12,    13,    14,
      15,    16,  1918,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,  1934,    34,
     384,    46,    49,     3,    49,   195,    51,   195,   278,    54,
       3,   196,     3,     3,   384,   384,   384,   347,   347,   239,
     347,  1957,   384,   347,    69,   347,  1962,   239,   383,   383,
     383,    76,    77,   383,   134,  1971,   385,   162,   162,     3,
       4,     5,     6,     7,     8,   195,    10,   162,    12,  1985,
    1986,   195,    16,    17,    18,   161,    20,   161,   195,     3,
      24,    25,    26,    27,    28,   220,   111,   220,    34,     3,
     243,   243,     5,     5,    38,     5,     4,   386,     5,     5,
     266,   383,   383,   211,    48,    49,   191,     3,    52,     3,
     138,     3,   195,    57,    58,    59,    60,    61,     3,   195,
      64,     3,    66,    67,    68,    92,     3,    71,    72,    61,
      74,    75,    76,   177,    20,   383,    80,   162,   197,    89,
     386,   384,     4,   347,   383,   383,   159,   383,     5,   347,
      94,     5,   347,   347,   383,    99,   347,   347,   347,   347,
     104,   105,   106,   139,   179,   347,   191,   111,   112,   239,
     114,   115,   116,   117,   199,   383,   120,     3,   122,   123,
     124,   125,   138,   127,  2100,   129,   130,   384,   132,     3,
     134,   135,     3,   137,   138,   139,   140,     3,   162,   162,
     383,  2117,   146,     3,   148,   383,   150,   151,     3,   153,
     154,   155,   156,   157,   158,   384,   160,   161,   162,   163,
     164,   384,   384,    76,   384,   383,   383,   383,   383,   383,
       3,   175,   266,   177,   259,   179,    58,   138,   243,     3,
     266,   195,     3,     3,   188,   162,   190,   191,   192,   193,
     194,   195,   196,   384,   385,   199,   200,   383,   162,     3,
     383,   205,   383,   207,   208,   209,     4,   211,   383,   213,
       6,   215,   216,   217,   218,     4,     4,   383,   385,   210,
       3,   162,     3,  2199,   384,   383,    61,   146,   161,     3,
      20,   384,   384,   237,   238,   239,   384,   385,     3,     3,
     191,   383,   383,   247,   383,   249,   250,   251,   383,   383,
     383,   383,   256,   384,   258,   259,   260,   383,   383,   383,
     264,   384,   384,   384,   268,   269,   383,   271,   272,   273,
     274,    50,     3,   162,   278,    10,    11,    12,    13,    14,
      15,    16,   385,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     4,    34,
     384,   383,   383,   383,   383,   383,   162,   211,     5,   238,
     385,     4,     4,   383,   383,   319,   320,   321,   322,   323,
     383,   383,     3,     3,     3,     3,     3,   383,   383,   116,
     266,     3,   264,   383,     3,   266,   138,   383,   383,     3,
       4,     5,     6,     7,     8,   383,    10,     3,    12,   383,
     385,   256,    16,    17,    18,    20,    20,   195,     4,   348,
      24,    25,    26,    27,    28,   347,   347,   384,     3,   384,
       3,   384,   384,   384,    38,   383,     3,   381,   382,   383,
     384,   385,     5,   387,    48,    49,     3,     3,    52,    49,
       5,     5,    58,    57,    58,    59,    60,    61,   383,     4,
      64,   384,    66,    67,    68,   383,    58,    71,    72,   384,
      74,    75,    76,   384,   383,   215,    80,   274,   266,   384,
     269,   383,   385,   162,   383,   385,   383,     3,   383,   162,
      94,    86,   385,   383,   383,    99,   383,    61,   196,   383,
     104,   105,   106,     3,   384,   384,   384,   111,   112,   383,
     114,   115,   116,   117,   384,    20,   120,   384,   122,   123,
     124,   125,    41,   127,    18,   129,   130,     3,   132,   384,
     134,   135,   383,   137,   138,   139,   140,   383,   162,     3,
      58,   384,   146,   384,   148,     3,   150,   151,    76,   153,
     154,   155,   156,   157,   158,   383,   160,   161,   162,   163,
     164,     3,   134,   383,   383,   383,     3,     3,    61,    61,
       3,   175,     3,   177,   383,   179,    61,   384,   347,   384,
     384,   347,   347,   384,   188,   347,   190,   191,   192,   193,
     194,   195,   196,   384,   138,   199,   200,   212,     3,   384,
     267,   205,   205,   207,   208,   209,     3,   211,     3,   213,
      58,   215,   216,   217,   218,     5,     5,   384,    75,   129,
     154,   164,   273,   205,   383,   383,     5,     3,   202,    20,
     385,     3,    99,   237,   238,   239,   384,   384,   384,   384,
       3,   384,   157,   247,   385,   249,   250,   251,     3,   384,
     384,   383,   256,   384,   258,   259,   260,   383,   383,   383,
     264,     5,   384,     3,   268,   269,   384,   271,   272,   273,
     274,   384,   384,     3,   278,    10,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   383,    34,
     383,   383,     3,     3,   385,   229,   229,   383,   205,   384,
     385,     3,   384,     3,     3,   319,   320,   321,   322,   323,
       3,    20,     3,   384,   384,   178,   178,   385,     3,   243,
       3,     3,   384,     3,   384,   384,   238,   227,   383,     3,
       4,     5,     6,     7,     8,   383,    10,   383,    12,   384,
     384,     5,    16,    17,    18,   384,    20,   384,     3,     5,
      24,    25,    26,    27,    28,   226,     3,   149,   384,   383,
      95,   269,   172,   248,    38,   195,   195,   381,   382,   383,
     384,   385,   189,   387,    48,    49,   189,     5,    52,     5,
     103,  1054,  1296,    57,    58,    59,    60,    61,  1202,   958,
      64,   392,    66,    67,    68,  1507,  1748,    71,    72,   518,
      74,    75,    76,  1817,   129,   645,    80,   528,   652,  1081,
    2221,   381,    91,   543,  1918,   939,   834,   658,  1405,  2263,
      94,  1886,  1382,  1394,   165,    99,   882,  1551,   898,    -1,
     104,   105,   106,    -1,   357,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,   574,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,   120,    -1,   122,   123,
     124,   125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,   213,
      -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,
      17,    18,    -1,   247,    -1,   249,   250,   251,    25,    26,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    38,    -1,    -1,   268,   269,    -1,   271,   272,   273,
     274,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,   385,    -1,    -1,    -1,   319,   320,   321,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,   108,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,   382,   383,
     384,   385,    -1,   387,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   181,    34,    -1,    10,    11,    12,
      13,    14,    15,    16,   191,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,    -1,    -1,   236,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   261,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,    -1,
     317,    -1,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
      -1,    -1,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,    -1,   369,   370,   371,   372,    -1,    -1,    -1,    -1,
     377,   378,   379,   380,    -1,    -1,   383,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    79,    10,    11,    12,    13,    14,    15,
      16,    87,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   385,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     176,    34,   385,    -1,    -1,   181,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   191,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    10,
      11,    12,    13,    14,    15,    16,   385,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
      -1,   317,    -1,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,    -1,    -1,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,    -1,   369,   370,   371,   372,    -1,    -1,    -1,
      -1,   377,   378,   379,   380,    -1,    -1,   383,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,   385,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    70,    34,    -1,    -1,   385,
      75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   385,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   385,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   385,    -1,    -1,   181,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   191,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,   230,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    -1,   317,    -1,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,    -1,    -1,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,    -1,   369,   370,   371,   372,    -1,    -1,
      -1,    -1,   377,   378,   379,   380,    -1,    -1,   383,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,   385,    87,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   385,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   385,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   385,    -1,    -1,   181,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   191,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,   385,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,    -1,   317,    -1,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    -1,    -1,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,    -1,   369,   370,   371,   372,    -1,
      -1,    -1,    -1,   377,   378,   379,   380,    -1,    -1,   383,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,   385,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    79,    -1,    -1,   385,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   385,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   385,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,   385,    -1,    -1,   181,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   191,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,
     223,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,    -1,   317,    -1,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,    -1,    -1,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,    -1,   369,   370,   371,   372,
      -1,    -1,    -1,    -1,   377,   378,   379,   380,    -1,    -1,
     383,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,   385,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,   385,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   385,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   385,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,   181,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   191,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,
      -1,   223,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,    -1,   317,    -1,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,    -1,    -1,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,    -1,   369,   370,   371,
     372,    -1,    -1,    -1,    -1,   377,   378,   379,   380,    -1,
      -1,   383,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,   385,
      -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     111,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
     385,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   384,    34,    -1,    -1,
     181,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     191,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,
      -1,    -1,   223,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,    -1,   317,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,    -1,    -1,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,    -1,   369,   370,
     371,   372,    -1,    -1,    -1,    -1,   377,   378,   379,   380,
      -1,    -1,   383,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   384,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   384,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,   384,    -1,    -1,
      -1,   181,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   191,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,    -1,
      -1,    -1,    -1,   223,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,    -1,   317,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    -1,    -1,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,    -1,   369,
     370,   371,   372,    -1,    -1,    -1,    -1,   377,   378,   379,
     380,    -1,    -1,   383,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
     384,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,
      79,    10,    11,    12,    13,    14,    15,    16,    87,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    10,    11,    12,    13,    14,    15,    16,
     384,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   384,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,   181,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   191,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,   223,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,    -1,   317,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,    -1,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,    -1,
     369,   370,   371,   372,    -1,    -1,    -1,    -1,   377,   378,
     379,   380,    -1,    -1,   383,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,   384,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,   384,    -1,    75,    -1,    -1,
      78,    79,    10,    11,    12,    13,    14,    15,    16,    87,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,   384,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   384,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,   384,
      -1,    -1,    -1,   181,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   191,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,
      -1,    -1,    -1,    -1,    -1,   223,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,    -1,   317,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,    -1,
      -1,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
      -1,   369,   370,   371,   372,    -1,    -1,    -1,    -1,   377,
     378,   379,   380,    -1,    -1,   383,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,   384,    -1,    -1,    -1,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,   384,    -1,    75,    -1,
      -1,    78,    79,    10,    11,    12,    13,    14,    15,    16,
      87,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   384,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   384,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,    -1,    -1,   181,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   191,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,    -1,    -1,    -1,    -1,   223,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,    -1,
     317,    -1,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
      -1,    -1,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,    -1,   369,   370,   371,   372,    -1,    -1,    -1,    -1,
     377,   378,   379,   380,    -1,    -1,   383,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   384,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   384,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   384,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
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
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     384,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   384,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   384,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,   384,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   384,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   384,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   384,    34,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   384,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   384,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   384,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   384,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   384,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   384,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   384,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   384,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   384,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   384,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   384,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   384,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   384,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   384,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     384,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   384,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     384,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   384,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     384,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   384,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   384,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   384,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   384,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   384,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,   384,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   384,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   384,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   384,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   384,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   384,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   384,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   384,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     384,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   384,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,    10,    11,    12,    13,    14,    15,    16,   384,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    -1,    -1,    -1,
      35,    -1,    -1,   384,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    -1,    51,   384,    -1,
      54,    66,    -1,    -1,    -1,    -1,    71,    59,    60,    -1,
      62,    -1,    64,    65,    -1,    69,    -1,    -1,    -1,    84,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    80,   384,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,    -1,   111,    -1,    -1,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     275,   276,    -1,    -1,   128,    -1,    -1,    -1,   130,   384,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,   272,    -1,    -1,   150,   251,
      -1,   166,   167,   168,   384,    -1,   158,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,   180,   384,
      -1,   183,    -1,    -1,   186,   187,    -1,   191,    -1,   204,
      -1,   206,    -1,    -1,    -1,   199,    -1,    -1,    -1,   214,
      -1,   203,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   239,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,   237,   238,    -1,   253,   241,
     242,   256,    -1,    -1,    -1,   247,    -1,   249,    -1,    -1,
     265,    -1,   254,   255,    -1,   259,    -1,    -1,   260,    -1,
     262,    -1,    -1,    -1,    -1,    -1,   268,    -1,   270,    -1,
      -1,    -1,    -1,   275,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   134,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   122,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,   110,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    49,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      48,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    48,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    66,    71,    84,   105,   106,   155,   166,
     167,   168,   204,   206,   214,   238,   239,   253,   256,   265,
     389,   428,   429,   468,   472,   474,   477,   478,   481,   482,
     483,   484,   485,   487,   490,   497,   498,   500,   516,   517,
     526,   529,   531,   532,   533,   556,   559,   566,   567,   570,
     573,   574,   577,   217,   250,   368,   250,     3,    10,    93,
     100,   136,   137,   153,   200,   217,   219,   225,   244,   245,
     259,   368,   538,     3,   469,    93,   137,   153,   200,   217,
     219,   225,   250,   368,   508,     3,     3,     3,    26,   250,
     250,   508,     8,   225,   557,   558,   447,   250,   508,   527,
       3,    93,     0,   381,   480,     3,     3,     3,     3,   383,
     214,   154,   530,     3,   153,     3,     3,    83,   154,     3,
       3,     3,   530,   244,   153,   530,   250,   518,     3,   134,
     152,   174,   201,   470,     3,   154,     3,   154,     3,     3,
     154,     3,   154,     3,     3,   154,     3,   154,     3,   154,
     101,   144,   152,   157,   174,   509,   169,   385,     3,     3,
     509,     9,    20,     3,   111,   385,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    38,    70,    75,    78,
      79,    87,   104,   108,   144,   181,   191,   223,   224,   231,
     232,   236,   261,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   317,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   369,
     370,   371,   372,   377,   378,   379,   380,   383,   390,   448,
     449,     3,   152,   174,     3,   165,   171,   378,   383,   451,
     452,   453,   454,   457,   467,     3,   389,    52,    53,    72,
     208,   274,   382,   486,    98,   118,    36,    73,    98,   106,
     118,   185,   206,   267,    53,   206,   575,     3,     4,     5,
       6,     7,     8,   191,   384,   568,   569,   137,   200,   278,
       3,    49,     3,   383,   195,     3,   154,   278,   383,    37,
      57,   571,   195,     3,     3,    83,   154,     3,   530,   383,
     519,   382,   471,     3,   470,   134,   385,   278,   278,   278,
     278,   195,   278,    72,   208,   473,   278,   278,     3,     4,
     243,     3,   390,   390,   558,   382,   383,     9,   390,   390,
     390,   272,   390,   427,   382,   383,    34,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   390,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    34,    49,   450,   134,   157,   385,   385,
     382,   450,   383,     3,   383,   429,   451,   238,   385,    74,
     151,   175,   188,   213,   236,   458,   460,    49,   456,   456,
      51,    51,    42,     3,   106,   256,   488,    69,    82,     3,
      82,    69,   215,     3,    69,    82,    69,   215,     3,    82,
       3,    69,    82,    69,   274,   243,    18,   182,   373,   374,
     375,   376,   576,   384,   385,     3,     3,    59,    60,    62,
      64,    65,    80,   112,   113,   114,   115,   121,   130,   150,
     158,   173,   180,   183,   186,   187,   203,   237,   238,   241,
     242,   247,   249,   254,   255,   260,   262,   268,   270,   275,
     552,   195,     3,    16,   148,   193,   560,   561,   562,     3,
     195,   278,     3,   560,   105,   155,   256,   572,     3,   195,
       3,   154,   278,   575,     3,     3,   520,   134,   243,   521,
      26,   271,   430,   264,   451,     3,     3,     3,     3,     3,
       3,     3,     3,     3,   238,   383,   510,     3,   238,   510,
       3,   390,   395,   399,   390,   390,   427,   122,   123,   272,
       3,     3,   386,   397,   404,   390,    63,   176,   252,   390,
     425,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     384,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   384,   390,   390,   390,
     384,   390,   390,   390,   390,   390,   390,    26,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   384,
     384,   384,   384,   384,   390,   390,   384,   384,   384,   390,
     390,     5,   384,   384,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   384,   390,   390,   390,
     384,   384,   390,   390,   390,   390,   390,     6,    18,   191,
     316,   383,    13,    14,    16,    19,   390,    38,    45,   230,
     383,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,     3,   451,     3,   449,     3,
     479,     3,   131,   152,   265,   464,   455,   450,   390,   384,
     384,     3,   528,   452,   175,   213,   461,   453,   161,   194,
     459,     3,     3,     5,   486,    40,    40,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   552,     3,   243,
       3,     3,     3,     5,     3,   376,     5,     5,   274,     5,
      61,     5,   569,   383,   383,   383,   548,   548,   548,   548,
     548,   548,   383,   548,   548,   548,    62,   549,   549,   548,
     548,   548,   383,   549,   548,   549,   383,   383,    18,    34,
      76,   111,     3,   552,     3,     3,     3,   384,   385,   264,
     383,     3,     3,   195,   384,   195,    49,   491,     3,   195,
     278,     3,   152,   214,   348,   382,   383,   554,   555,   384,
     385,     4,   234,   235,   522,   390,   196,   440,   451,   430,
     471,   473,     3,   515,     3,   511,   269,   429,   515,   269,
     429,   385,   384,   251,   122,   123,   390,   390,   384,   390,
     396,   429,   134,   385,   384,   134,   390,   385,   385,   385,
     384,   384,   384,   384,   384,   384,   385,   385,   385,   385,
     384,   385,   385,   385,   384,   384,   384,   384,   385,   385,
     384,   385,   384,   384,   384,    49,   385,   385,   385,   385,
     318,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   385,   385,   385,   384,   385,   347,   347,   347,   384,
     385,   384,   385,   384,   347,   347,   385,   384,   384,   384,
     384,   384,   384,   384,   384,   385,   385,   385,   385,   385,
     385,   385,   385,   384,   385,   384,   384,   384,   385,   384,
     385,   384,   385,     6,   191,   400,   402,   390,   390,   383,
     390,    48,   383,   383,   383,   391,   386,   430,   134,   385,
     450,   162,   162,   162,   429,   464,   384,    20,   382,   385,
     430,   459,   459,   161,   195,   453,   161,    43,    44,   488,
     195,   195,    76,   132,   199,   259,   552,   552,     3,   220,
     220,   547,   552,     3,   243,   243,     5,     5,   560,   560,
       5,   550,   551,   550,   550,     4,   553,   550,   550,   550,
     551,   551,   550,   550,   550,   553,   551,   550,   551,     5,
       5,   191,   386,   383,   390,   383,   552,   552,   552,   211,
     562,   266,     3,   324,   325,   326,   327,   475,   476,   264,
     383,   195,     3,    49,    58,     3,   221,   222,   138,   492,
     264,   383,     3,     3,   195,    92,     3,    69,    76,   132,
     136,   153,   162,   199,   259,   539,   540,   546,   456,     3,
      85,    97,   133,   141,   191,   240,   274,   383,   523,   524,
     525,    61,   177,   443,   430,    20,   197,   385,   501,   384,
     385,   383,   512,   501,   512,   501,   395,   390,   390,   122,
     251,    89,   385,   386,   384,   390,   390,   390,   134,   159,
     426,   426,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   552,   552,   390,   390,   390,     4,   347,
     347,   347,   347,   347,   347,   390,   390,   390,   390,   383,
     383,   383,   347,     5,   347,     5,   347,   383,   383,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   395,   429,   401,   403,    48,   390,   394,   390,
     392,   398,   393,   398,   429,   139,   431,   451,     3,   464,
     138,   465,   465,   465,   384,   456,   390,     3,     3,   440,
     453,   390,   195,   264,   462,   463,   453,     3,   489,   489,
     383,   162,   162,   383,   547,   547,   552,    18,    37,    46,
      49,    51,    54,    69,    76,    77,   111,   128,   162,   191,
     199,   259,   499,   547,     3,     3,   384,   384,   384,   385,
     257,   277,    80,    81,   384,   385,   384,   384,   384,    76,
     390,   475,    60,    64,   112,   115,   130,   150,   158,   247,
     249,   268,   563,   383,   383,   383,   383,   383,   384,   385,
     266,   475,     3,   264,   383,    58,   564,   138,    38,   105,
     155,   239,   256,   243,   493,   266,   475,   264,   383,   195,
       3,     3,   383,   554,     3,   383,   162,   153,   162,   383,
     383,   162,   383,   384,   385,     3,   429,     4,    85,   247,
       6,     4,     4,   383,   524,   385,     3,     5,   441,   442,
     390,   210,   578,   111,   390,   162,     3,     3,   111,   390,
     514,   385,   501,   501,   122,   390,   383,   396,   138,   384,
     384,   385,   384,   390,   390,   384,   384,   384,   384,   384,
     385,   385,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   385,   384,   383,   383,   383,   383,   383,   383,
     384,   385,   385,   384,   384,   405,   406,   407,   383,   384,
     385,   383,   384,   385,   383,   423,   424,   384,   385,   385,
     385,   384,   384,   385,   385,   384,   385,   384,   385,   384,
     385,   384,   384,   384,   384,   395,   429,   390,   429,   429,
     384,   429,   384,   384,    61,   146,   435,   430,   161,   383,
     383,   383,     3,    20,    20,   382,   443,   390,   383,   463,
     385,   274,   390,   383,   383,     3,   545,   499,   499,   547,
     191,     3,   383,   383,   383,    50,     3,   383,     4,     4,
       5,     6,     7,    70,   330,   331,   332,   383,   162,   162,
     499,   211,    49,    58,     5,   238,     4,   551,     4,   551,
     551,   383,   384,   384,    49,    58,   475,     3,     3,     3,
       3,     3,   383,   384,   383,   266,   475,   564,     3,     4,
       5,     6,     7,     8,    10,    12,    16,    17,    18,    20,
      24,    25,    26,    27,    28,    38,    48,    49,    52,    57,
      58,    59,    60,    61,    64,    66,    67,    68,    71,    72,
      74,    75,    76,    80,    94,    99,   104,   105,   106,   111,
     112,   114,   115,   116,   117,   120,   122,   123,   124,   125,
     127,   129,   130,   132,   134,   135,   137,   138,   139,   140,
     146,   148,   150,   151,   153,   154,   155,   156,   157,   158,
     160,   161,   162,   163,   164,   175,   177,   179,   188,   190,
     191,   192,   193,   194,   195,   196,   199,   200,   205,   207,
     208,   209,   211,   213,   215,   216,   217,   218,   237,   238,
     239,   247,   249,   250,   251,   256,   258,   259,   260,   264,
     268,   269,   271,   272,   273,   274,   278,   319,   320,   321,
     322,   323,   381,   382,   383,   384,   385,   387,   565,   116,
       3,   494,   264,   495,   383,   384,   266,   475,     3,   264,
     383,   138,   539,    76,   132,   199,   259,   390,   383,   383,
     383,     3,   446,   446,   383,   545,   535,   554,   540,   552,
     524,   384,   525,    47,   110,   382,   433,   433,   385,   179,
     385,     3,    26,   579,   256,    20,   384,   385,   513,   195,
     503,     4,   390,   390,   384,   102,   103,   107,   109,   142,
     143,   145,   275,   276,   390,   390,   390,   409,   410,   408,
     411,   412,   413,   390,   390,   348,   436,   436,   436,   414,
     347,     4,     5,   418,   347,     4,     5,   422,   436,   436,
     390,   390,   390,   390,   390,   390,   390,   390,   384,   384,
     384,   384,   384,   390,   432,   390,   440,   431,     3,   466,
     466,   466,   383,   390,   390,     3,   578,   446,     3,     5,
     384,     3,   542,     3,   541,   384,   385,   499,     5,   390,
       5,    49,    76,   199,   259,   390,   383,   383,   383,   390,
     563,    58,   564,   384,     4,   390,    58,   564,   384,   384,
     384,   384,   385,   475,   475,   383,   384,   122,   564,   564,
     564,   564,   564,   564,   215,   385,   383,   274,   496,   475,
     383,   384,   383,   266,   475,   269,   384,   383,   162,   162,
     383,   384,   542,   446,   446,   384,   385,   384,   541,   384,
      46,   170,   195,   226,   348,   534,   547,   384,     3,   442,
     390,   390,   385,   502,   111,   390,   111,   390,   383,    86,
     578,   384,   384,   384,   384,   384,   384,   436,   436,   436,
     436,   436,   436,   384,   385,   384,    61,   196,   438,   438,
     438,   436,   383,   384,   384,   436,   383,   384,   384,   436,
     438,   438,   384,   384,   384,   384,   384,   385,   384,   384,
     433,   274,   385,   434,   443,   435,   384,   385,   384,   384,
       3,    20,   384,    41,    18,   384,   385,   384,   385,     3,
     384,   385,   384,   384,   385,   383,   383,   162,   384,   384,
     384,   384,   384,    49,    58,   564,   122,   384,   564,   122,
       3,   384,   384,   475,   122,   122,   122,   122,   122,   122,
      58,     3,   390,    76,   384,   475,   475,   383,   384,   134,
     535,   554,   390,   383,   383,   545,   384,   384,   384,     3,
     384,     5,    20,   383,     3,    61,    61,   433,     3,     3,
     507,   514,   383,   504,   438,   438,   438,   438,   438,   438,
     390,     3,   437,    61,   384,   384,   384,   438,   415,   347,
     347,   438,   419,   347,   347,   438,   384,   384,   390,   212,
     390,   138,   444,   440,     3,   384,   390,   267,   205,     3,
       3,     5,    55,    56,     5,   390,   390,    58,   564,   122,
     122,   384,   384,    75,   129,   154,   164,   273,   564,   384,
     383,   384,   384,   475,   383,   384,   542,   541,   384,   205,
       5,     3,   105,   246,   202,   266,   202,    20,   385,   384,
       3,    99,   505,   384,   384,   384,   384,   384,   384,   384,
     385,     3,   439,   384,   436,   383,   383,   384,   436,   383,
     383,   384,   384,   433,   228,   256,   157,   445,   443,     3,
     384,   384,   384,   384,   564,   122,   122,   390,   384,     5,
     384,   384,     3,   384,     3,     3,   383,   383,   383,   390,
       3,   384,   385,    88,   256,     3,   433,   385,   438,   416,
     417,   438,   420,   421,   229,   229,   446,   383,    55,    56,
     122,   384,   384,   205,   382,   383,     3,     3,     3,    20,
       3,   506,     3,   384,   436,   436,   384,   436,   436,   178,
     178,     3,   543,   243,     3,     3,   543,   384,   384,   384,
     390,   238,   433,   438,   438,   438,   438,   384,   385,   383,
     382,   383,   383,   384,   383,   227,   507,   384,   384,   384,
     384,   544,     3,     5,     3,   543,   543,   544,   226,   536,
     537,     5,    18,    95,   181,   195,   384,   383,   384,   384,
      18,     3,   384,   385,    95,   267,   149,   135,   198,   233,
     105,   256,   543,   544,   544,   269,   537,    96,   147,    72,
     190,   208,   238,    72,   190,   208,   238,   384,   172,   111,
     191,   111,   191,   544,   248,     4,   182,   195,   195,   189,
     189,     5,     5
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
#line 479 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 485 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 486 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 488 "parser/evoparser.y"
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
#line 501 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 503 "parser/evoparser.y"
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
#line 531 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 539 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 547 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 553 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 560 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 561 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 562 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 563 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 564 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 565 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 566 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 567 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 568 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 569 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 570 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 571 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 572 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 573 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 574 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 575 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 576 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 577 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 578 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 580 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 585 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 586 "parser/evoparser.y"
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
#line 594 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 595 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 596 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 597 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 598 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 599 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 604 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 606 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 609 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 610 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 611 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 612 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 613 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 616 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 617 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 621 "parser/evoparser.y"
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
#line 630 "parser/evoparser.y"
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
#line 648 "parser/evoparser.y"
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
#line 657 "parser/evoparser.y"
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
#line 676 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 677 "parser/evoparser.y"
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
#line 737 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 746 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 752 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 757 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 759 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 761 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 766 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 771 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 777 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 67:
#line 781 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 781 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 782 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 70:
#line 782 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 71:
#line 783 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 784 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 791 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 792 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 75:
#line 799 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 76:
#line 800 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 77:
#line 810 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 78:
#line 814 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 79:
#line 815 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 816 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 817 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 818 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 83:
#line 819 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 84:
#line 820 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 85:
#line 821 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 86:
#line 825 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 87:
#line 826 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 88:
#line 827 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 89:
#line 828 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 90:
#line 829 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 91:
#line 830 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 92:
#line 832 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 93:
#line 833 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 94:
#line 834 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 95:
#line 835 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 96:
#line 836 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 837 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 98:
#line 838 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 839 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 100:
#line 840 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 841 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 102:
#line 842 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 843 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 104:
#line 845 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 846 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 847 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 107:
#line 848 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 849 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 109:
#line 850 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 851 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 111:
#line 852 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 112:
#line 853 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 854 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 114:
#line 855 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 115:
#line 856 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 116:
#line 857 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 117:
#line 858 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 859 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 119:
#line 860 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 120:
#line 862 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 121:
#line 863 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 122:
#line 864 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 123:
#line 865 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 124:
#line 866 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 125:
#line 867 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 126:
#line 870 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 127:
#line 871 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 128:
#line 872 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 129:
#line 873 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 130:
#line 874 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 131:
#line 875 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 132:
#line 876 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 133:
#line 877 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 878 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 135:
#line 879 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 136:
#line 880 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 881 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 138:
#line 882 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 883 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 140:
#line 884 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 141:
#line 885 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 142:
#line 886 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 143:
#line 887 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 144:
#line 888 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 145:
#line 889 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 146:
#line 890 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 147:
#line 891 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 148:
#line 892 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 149:
#line 893 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 150:
#line 894 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 151:
#line 895 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 152:
#line 896 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 153:
#line 897 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 154:
#line 898 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 155:
#line 899 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 156:
#line 900 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 157:
#line 901 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 158:
#line 902 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 159:
#line 903 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 160:
#line 905 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 161:
#line 906 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 162:
#line 907 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 163:
#line 908 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 164:
#line 909 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 165:
#line 910 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 166:
#line 911 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 167:
#line 912 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 168:
#line 914 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 169:
#line 915 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 170:
#line 916 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 171:
#line 917 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 172:
#line 918 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 173:
#line 919 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 174:
#line 920 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 175:
#line 921 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 176:
#line 922 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 177:
#line 923 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 178:
#line 924 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 179:
#line 925 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 180:
#line 926 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 181:
#line 927 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 182:
#line 928 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 183:
#line 929 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 184:
#line 930 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 185:
#line 931 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 186:
#line 932 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 933 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 188:
#line 934 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 189:
#line 935 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 190:
#line 937 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 191:
#line 938 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 192:
#line 939 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 193:
#line 940 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 194:
#line 941 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 195:
#line 943 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 196:
#line 944 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 197:
#line 946 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 198:
#line 947 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 199:
#line 948 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 200:
#line 950 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 201:
#line 951 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 202:
#line 952 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 203:
#line 953 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 204:
#line 960 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 205:
#line 967 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 206:
#line 974 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 978 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 982 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 209:
#line 986 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 210:
#line 990 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 211:
#line 994 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 212:
#line 1000 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 213:
#line 1001 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 214:
#line 1002 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 215:
#line 1006 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 216:
#line 1012 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 217:
#line 1018 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 218:
#line 1019 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 1020 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 1021 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 221:
#line 1022 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 222:
#line 1023 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 223:
#line 1024 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 1025 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 225:
#line 1026 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 226:
#line 1030 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 1032 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 228:
#line 1034 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 229:
#line 1036 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 230:
#line 1040 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 231:
#line 1048 "parser/evoparser.y"
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
#line 1058 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 233:
#line 1059 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 234:
#line 1062 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 235:
#line 1063 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 236:
#line 1067 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 1075 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 238:
#line 1083 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 239:
#line 1091 "parser/evoparser.y"
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
#line 1105 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 241:
#line 1114 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 242:
#line 1119 "parser/evoparser.y"
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
#line 1132 "parser/evoparser.y"
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
#line 1145 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 247:
#line 1147 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 248:
#line 1150 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 249:
#line 1157 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 250:
#line 1165 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1166 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 252:
#line 1167 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1170 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 254:
#line 1171 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 256:
#line 1175 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1184 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 260:
#line 1186 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 263:
#line 1194 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 264:
#line 1196 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 269:
#line 1208 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 270:
#line 1214 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 271:
#line 1221 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 272:
#line 1229 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 273:
#line 1230 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1231 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 275:
#line 1232 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 276:
#line 1235 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 277:
#line 1236 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 278:
#line 1237 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 279:
#line 1238 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 280:
#line 1239 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 282:
#line 1243 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 283:
#line 1246 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 284:
#line 1247 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1250 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1251 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 287:
#line 1252 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 288:
#line 1253 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 289:
#line 1254 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 290:
#line 1255 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 291:
#line 1256 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 292:
#line 1257 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 293:
#line 1258 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 294:
#line 1261 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 295:
#line 1262 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 296:
#line 1264 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 297:
#line 1272 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 298:
#line 1277 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 299:
#line 1278 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 300:
#line 1279 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 301:
#line 1282 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1283 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 305:
#line 1292 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 306:
#line 1300 "parser/evoparser.y"
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
#line 1309 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 308:
#line 1310 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 309:
#line 1312 "parser/evoparser.y"
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
#line 1321 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 311:
#line 1326 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 312:
#line 1332 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 313:
#line 1339 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 314:
#line 1343 "parser/evoparser.y"
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
#line 1363 "parser/evoparser.y"
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
#line 1389 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 319:
#line 1391 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 320:
#line 1393 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 321:
#line 1395 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 322:
#line 1397 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 323:
#line 1400 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1401 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 325:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 326:
#line 1405 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 327:
#line 1406 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 328:
#line 1409 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 329:
#line 1410 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 330:
#line 1413 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 331:
#line 1414 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 332:
#line 1415 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 335:
#line 1422 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 336:
#line 1423 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 337:
#line 1428 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 338:
#line 1430 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1432 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 341:
#line 1436 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1437 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 343:
#line 1440 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1441 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 345:
#line 1444 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 346:
#line 1449 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 347:
#line 1459 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 348:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 349:
#line 1467 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 350:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 351:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1474 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 353:
#line 1478 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1480 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 357:
#line 1486 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 358:
#line 1491 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 359:
#line 1498 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1505 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1517 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 363:
#line 1518 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 364:
#line 1523 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 365:
#line 1530 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 366:
#line 1537 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 367:
#line 1545 "parser/evoparser.y"
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
#line 1555 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 369:
#line 1563 "parser/evoparser.y"
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
#line 1573 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 371:
#line 1581 "parser/evoparser.y"
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
#line 1590 "parser/evoparser.y"
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
#line 1599 "parser/evoparser.y"
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
#line 1609 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 375:
#line 1617 "parser/evoparser.y"
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
#line 1626 "parser/evoparser.y"
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
#line 1635 "parser/evoparser.y"
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
#line 1645 "parser/evoparser.y"
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
#line 1654 "parser/evoparser.y"
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
#line 1666 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 381:
#line 1671 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 382:
#line 1676 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 383:
#line 1682 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 384:
#line 1689 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 385:
#line 1696 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 386:
#line 1703 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 387:
#line 1713 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 388:
#line 1720 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 389:
#line 1729 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 390:
#line 1736 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 391:
#line 1742 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 392:
#line 1750 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 393:
#line 1756 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 395:
#line 1764 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 396:
#line 1765 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 397:
#line 1766 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 398:
#line 1767 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 399:
#line 1783 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 400:
#line 1784 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 401:
#line 1785 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 402:
#line 1789 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 403:
#line 1795 "parser/evoparser.y"
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
#line 1806 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 405:
#line 1812 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 406:
#line 1819 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 407:
#line 1825 "parser/evoparser.y"
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
#line 1841 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 409:
#line 1848 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1857 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 411:
#line 1865 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 412:
#line 1871 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 414:
#line 1888 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 415:
#line 1892 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 416:
#line 1901 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 418:
#line 1916 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 419:
#line 1920 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 420:
#line 1925 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 421:
#line 1932 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 422:
#line 1937 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 423:
#line 1944 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1948 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 425:
#line 1949 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 426:
#line 1955 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 427:
#line 1964 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 428:
#line 1965 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 429:
#line 1966 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 430:
#line 1970 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 431:
#line 1971 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 432:
#line 1972 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 433:
#line 1973 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 434:
#line 1974 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 435:
#line 1975 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 438:
#line 1984 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 439:
#line 1985 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 441:
#line 1990 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 443:
#line 1995 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 444:
#line 2000 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 445:
#line 2009 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 446:
#line 2015 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 447:
#line 2021 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 448:
#line 2028 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 449:
#line 2034 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 450:
#line 2041 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 451:
#line 2047 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 452:
#line 2053 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 453:
#line 2059 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 454:
#line 2065 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 455:
#line 2071 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 456:
#line 2077 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 457:
#line 2083 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 458:
#line 2089 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 459:
#line 2095 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 460:
#line 2101 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 461:
#line 2107 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 462:
#line 2113 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 463:
#line 2119 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 464:
#line 2125 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 465:
#line 2131 "parser/evoparser.y"
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

  case 466:
#line 2144 "parser/evoparser.y"
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

  case 467:
#line 2155 "parser/evoparser.y"
    { ;}
    break;

  case 468:
#line 2156 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 469:
#line 2157 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 470:
#line 2161 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 471:
#line 2169 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 472:
#line 2175 "parser/evoparser.y"
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

  case 474:
#line 2188 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 475:
#line 2188 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 478:
#line 2196 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 479:
#line 2197 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 480:
#line 2198 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 481:
#line 2202 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 482:
#line 2203 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 483:
#line 2204 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 484:
#line 2208 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 485:
#line 2216 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 486:
#line 2225 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 487:
#line 2226 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 488:
#line 2227 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 489:
#line 2228 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 490:
#line 2229 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 494:
#line 2236 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 495:
#line 2240 "parser/evoparser.y"
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

  case 496:
#line 2250 "parser/evoparser.y"
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

  case 497:
#line 2262 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 498:
#line 2263 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 499:
#line 2263 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 500:
#line 2266 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 501:
#line 2267 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 502:
#line 2268 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 503:
#line 2269 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 504:
#line 2273 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 505:
#line 2276 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 506:
#line 2277 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 507:
#line 2278 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 508:
#line 2279 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 509:
#line 2285 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 510:
#line 2291 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 511:
#line 2296 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 512:
#line 2301 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 513:
#line 2305 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 514:
#line 2309 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 515:
#line 2311 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 518:
#line 2317 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 519:
#line 2318 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 520:
#line 2322 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 521:
#line 2323 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 522:
#line 2327 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 523:
#line 2328 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 524:
#line 2329 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 531:
#line 2344 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 532:
#line 2345 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 533:
#line 2346 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 534:
#line 2347 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 535:
#line 2348 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 536:
#line 2349 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 537:
#line 2350 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 538:
#line 2351 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 539:
#line 2356 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 540:
#line 2365 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 541:
#line 2372 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 542:
#line 2373 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 543:
#line 2374 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 544:
#line 2379 "parser/evoparser.y"
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

  case 545:
#line 2390 "parser/evoparser.y"
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

  case 546:
#line 2402 "parser/evoparser.y"
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

  case 547:
#line 2413 "parser/evoparser.y"
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

  case 548:
#line 2428 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 549:
#line 2432 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 550:
#line 2436 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 551:
#line 2437 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 552:
#line 2442 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 553:
#line 2444 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 554:
#line 2446 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 555:
#line 2448 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 556:
#line 2451 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 557:
#line 2452 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 558:
#line 2458 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 559:
#line 2463 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 560:
#line 2465 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 561:
#line 2467 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 562:
#line 2469 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 563:
#line 2471 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 564:
#line 2475 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 565:
#line 2479 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 566:
#line 2480 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 567:
#line 2485 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 568:
#line 2495 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 570:
#line 2508 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 571:
#line 2516 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 572:
#line 2524 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 574:
#line 2532 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 575:
#line 2533 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 576:
#line 2534 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 577:
#line 2535 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 578:
#line 2537 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 579:
#line 2539 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 580:
#line 2541 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 583:
#line 2549 "parser/evoparser.y"
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

  case 584:
#line 2564 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 585:
#line 2572 "parser/evoparser.y"
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

  case 586:
#line 2586 "parser/evoparser.y"
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

  case 587:
#line 2600 "parser/evoparser.y"
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

  case 588:
#line 2614 "parser/evoparser.y"
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

  case 589:
#line 2626 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 590:
#line 2627 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 591:
#line 2628 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 592:
#line 2631 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 593:
#line 2632 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 594:
#line 2635 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 595:
#line 2636 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 596:
#line 2637 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 597:
#line 2638 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 598:
#line 2639 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 599:
#line 2640 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 600:
#line 2641 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 601:
#line 2642 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 602:
#line 2644 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 603:
#line 2646 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 604:
#line 2648 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 605:
#line 2650 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 606:
#line 2652 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 607:
#line 2654 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 608:
#line 2657 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 609:
#line 2658 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 610:
#line 2661 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 611:
#line 2662 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 612:
#line 2665 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 613:
#line 2666 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 615:
#line 2670 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 616:
#line 2671 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 617:
#line 2672 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 618:
#line 2673 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 619:
#line 2674 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 620:
#line 2675 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 621:
#line 2676 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 622:
#line 2677 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 623:
#line 2678 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 624:
#line 2679 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 625:
#line 2680 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 626:
#line 2681 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 627:
#line 2682 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 628:
#line 2683 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 629:
#line 2684 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 630:
#line 2685 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 631:
#line 2686 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 632:
#line 2689 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 633:
#line 2690 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 634:
#line 2693 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 635:
#line 2695 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 636:
#line 2703 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 637:
#line 2704 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 639:
#line 2706 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 640:
#line 2707 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 641:
#line 2708 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 642:
#line 2709 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 643:
#line 2710 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 644:
#line 2711 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 645:
#line 2712 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 646:
#line 2713 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 647:
#line 2714 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 648:
#line 2721 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 649:
#line 2722 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 650:
#line 2723 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 651:
#line 2724 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 652:
#line 2725 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 653:
#line 2726 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 654:
#line 2727 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 655:
#line 2728 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 656:
#line 2729 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 657:
#line 2730 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 658:
#line 2731 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 659:
#line 2732 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 660:
#line 2733 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 661:
#line 2734 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 662:
#line 2735 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 663:
#line 2736 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 664:
#line 2737 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 665:
#line 2738 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 666:
#line 2739 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 667:
#line 2740 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 668:
#line 2741 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 669:
#line 2744 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 670:
#line 2745 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 671:
#line 2746 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 672:
#line 2749 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 673:
#line 2750 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 674:
#line 2753 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 675:
#line 2754 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 676:
#line 2755 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 678:
#line 2759 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 679:
#line 2760 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 680:
#line 2764 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 681:
#line 2765 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 682:
#line 2766 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 683:
#line 2767 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 684:
#line 2768 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 685:
#line 2769 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 686:
#line 2770 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 687:
#line 2771 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 688:
#line 2772 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 689:
#line 2773 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 690:
#line 2774 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 691:
#line 2775 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 692:
#line 2776 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 693:
#line 2777 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 694:
#line 2778 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 695:
#line 2779 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 696:
#line 2780 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 697:
#line 2781 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 698:
#line 2782 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 699:
#line 2783 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 700:
#line 2784 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 701:
#line 2785 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 702:
#line 2786 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 703:
#line 2787 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 704:
#line 2788 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 705:
#line 2789 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 706:
#line 2790 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 707:
#line 2791 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 708:
#line 2792 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 709:
#line 2793 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 710:
#line 2794 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 711:
#line 2795 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 712:
#line 2796 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 713:
#line 2797 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 714:
#line 2800 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 715:
#line 2801 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 716:
#line 2805 "parser/evoparser.y"
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

  case 717:
#line 2817 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 718:
#line 2818 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 719:
#line 2819 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 720:
#line 2823 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 721:
#line 2826 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 722:
#line 2827 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 726:
#line 2831 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 727:
#line 2832 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 728:
#line 2840 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 729:
#line 2845 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 730:
#line 2851 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 731:
#line 2857 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 732:
#line 2864 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 733:
#line 2871 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 734:
#line 2877 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 735:
#line 2883 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 736:
#line 2890 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 741:
#line 2906 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 742:
#line 2907 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 743:
#line 2908 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 744:
#line 2909 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 745:
#line 2912 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 746:
#line 2913 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 747:
#line 2914 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 748:
#line 2915 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 749:
#line 2916 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 750:
#line 2917 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 751:
#line 2918 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 752:
#line 2919 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 753:
#line 2920 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 754:
#line 2921 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 763:
#line 2938 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 764:
#line 2939 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 885:
#line 2957 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 886:
#line 2964 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 887:
#line 2969 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 888:
#line 2975 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 889:
#line 2981 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 890:
#line 2987 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 891:
#line 2998 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 892:
#line 3003 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 893:
#line 3009 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 896:
#line 3020 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 897:
#line 3021 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 898:
#line 3022 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 899:
#line 3023 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 900:
#line 3024 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 901:
#line 3025 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 902:
#line 3026 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 903:
#line 3033 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 904:
#line 3038 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 905:
#line 3045 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 906:
#line 3046 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 907:
#line 3049 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 908:
#line 3050 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 909:
#line 3051 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 910:
#line 3054 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 911:
#line 3059 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 912:
#line 3065 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 913:
#line 3074 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 914:
#line 3082 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 915:
#line 3092 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 916:
#line 3097 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 919:
#line 3110 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 920:
#line 3111 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 921:
#line 3112 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 922:
#line 3113 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 923:
#line 3114 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 924:
#line 3115 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 925:
#line 3116 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 926:
#line 3117 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 927:
#line 3120 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 928:
#line 3125 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 929:
#line 3131 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 930:
#line 3141 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 931:
#line 3148 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 932:
#line 3155 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 933:
#line 3163 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 935:
#line 3173 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 937:
#line 3177 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 938:
#line 3178 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11161 "parser/evoparser.tab.c"
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


#line 3181 "parser/evoparser.y"

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
