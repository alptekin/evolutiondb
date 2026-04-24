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
     VECTOR = 516,
     WHERE = 517,
     WHEN = 518,
     WHILE = 519,
     WITH = 520,
     YEAR = 521,
     YEAR_MONTH = 522,
     ZEROFILL = 523,
     EXISTS = 524,
     FSUBSTRING = 525,
     FTRIM = 526,
     FDATE_ADD = 527,
     FDATE_SUB = 528,
     FDATEDIFF = 529,
     FYEAR = 530,
     FMONTH = 531,
     FDAY = 532,
     FHOUR = 533,
     FMINUTE = 534,
     FSECOND = 535,
     FNOW = 536,
     FLEFT = 537,
     FRIGHT = 538,
     FLPAD = 539,
     FRPAD = 540,
     FREVERSE = 541,
     FREPEAT = 542,
     FINSTR = 543,
     FLOCATE = 544,
     FABS = 545,
     FCEIL = 546,
     FFLOOR = 547,
     FROUND = 548,
     FPOWER = 549,
     FSQRT = 550,
     FMOD = 551,
     FRAND = 552,
     FLOG = 553,
     FLOG10 = 554,
     FSIGN = 555,
     FPI = 556,
     FCAST = 557,
     FCONVERT = 558,
     FNULLIF = 559,
     FIFNULL = 560,
     FIF = 561,
     UNKNOWN = 562,
     FGROUP_CONCAT = 563,
     SEPARATOR = 564,
     FCOUNT = 565,
     FSUM = 566,
     FAVG = 567,
     FMIN = 568,
     FMAX = 569,
     FUPPER = 570,
     FLOWER = 571,
     FLENGTH = 572,
     FCONCAT = 573,
     FREPLACE = 574,
     FCOALESCE = 575,
     FGEN_RANDOM_UUID = 576,
     FGEN_RANDOM_UUID_V7 = 577,
     FSNOWFLAKE_ID = 578,
     FLAST_INSERT_ID = 579,
     FSCOPE_IDENTITY = 580,
     FAT_IDENTITY = 581,
     FAT_LAST_INSERT_ID = 582,
     FEVO_SLEEP = 583,
     FEVO_JITTER = 584,
     FROW_NUMBER = 585,
     FRANK = 586,
     FDENSE_RANK = 587,
     FLEAD = 588,
     FLAG = 589,
     FNTILE = 590,
     FPERCENT_RANK = 591,
     FCUME_DIST = 592,
     OVER = 593,
     PARTITION = 594,
     FJSON_EXTRACT = 595,
     FJSON_UNQUOTE = 596,
     FJSON_TYPE = 597,
     FJSON_LENGTH = 598,
     FJSON_DEPTH = 599,
     FJSON_VALID = 600,
     FJSON_KEYS = 601,
     FJSON_PRETTY = 602,
     FJSON_QUOTE = 603,
     FJSON_SET = 604,
     FJSON_INSERT = 605,
     FJSON_REPLACE = 606,
     FJSON_REMOVE = 607,
     FJSON_CONTAINS = 608,
     FJSON_CONTAINS_PATH = 609,
     FJSON_SEARCH = 610,
     FJSON_OBJECT = 611,
     FJSON_ARRAY = 612,
     FJSON_ARRAYAGG = 613,
     SEQUENCE = 614,
     FNEXTVAL = 615,
     FCURRVAL = 616,
     FSETVAL = 617,
     FLASTVAL = 618,
     START = 619,
     INCREMENT = 620,
     MINVALUE = 621,
     CYCLE = 622,
     FARRAY_LENGTH = 623,
     FUNNEST = 624,
     FEVO_NOTIFY = 625,
     FPG_LISTENING_CHANNELS = 626
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
#define VECTOR 516
#define WHERE 517
#define WHEN 518
#define WHILE 519
#define WITH 520
#define YEAR 521
#define YEAR_MONTH 522
#define ZEROFILL 523
#define EXISTS 524
#define FSUBSTRING 525
#define FTRIM 526
#define FDATE_ADD 527
#define FDATE_SUB 528
#define FDATEDIFF 529
#define FYEAR 530
#define FMONTH 531
#define FDAY 532
#define FHOUR 533
#define FMINUTE 534
#define FSECOND 535
#define FNOW 536
#define FLEFT 537
#define FRIGHT 538
#define FLPAD 539
#define FRPAD 540
#define FREVERSE 541
#define FREPEAT 542
#define FINSTR 543
#define FLOCATE 544
#define FABS 545
#define FCEIL 546
#define FFLOOR 547
#define FROUND 548
#define FPOWER 549
#define FSQRT 550
#define FMOD 551
#define FRAND 552
#define FLOG 553
#define FLOG10 554
#define FSIGN 555
#define FPI 556
#define FCAST 557
#define FCONVERT 558
#define FNULLIF 559
#define FIFNULL 560
#define FIF 561
#define UNKNOWN 562
#define FGROUP_CONCAT 563
#define SEPARATOR 564
#define FCOUNT 565
#define FSUM 566
#define FAVG 567
#define FMIN 568
#define FMAX 569
#define FUPPER 570
#define FLOWER 571
#define FLENGTH 572
#define FCONCAT 573
#define FREPLACE 574
#define FCOALESCE 575
#define FGEN_RANDOM_UUID 576
#define FGEN_RANDOM_UUID_V7 577
#define FSNOWFLAKE_ID 578
#define FLAST_INSERT_ID 579
#define FSCOPE_IDENTITY 580
#define FAT_IDENTITY 581
#define FAT_LAST_INSERT_ID 582
#define FEVO_SLEEP 583
#define FEVO_JITTER 584
#define FROW_NUMBER 585
#define FRANK 586
#define FDENSE_RANK 587
#define FLEAD 588
#define FLAG 589
#define FNTILE 590
#define FPERCENT_RANK 591
#define FCUME_DIST 592
#define OVER 593
#define PARTITION 594
#define FJSON_EXTRACT 595
#define FJSON_UNQUOTE 596
#define FJSON_TYPE 597
#define FJSON_LENGTH 598
#define FJSON_DEPTH 599
#define FJSON_VALID 600
#define FJSON_KEYS 601
#define FJSON_PRETTY 602
#define FJSON_QUOTE 603
#define FJSON_SET 604
#define FJSON_INSERT 605
#define FJSON_REPLACE 606
#define FJSON_REMOVE 607
#define FJSON_CONTAINS 608
#define FJSON_CONTAINS_PATH 609
#define FJSON_SEARCH 610
#define FJSON_OBJECT 611
#define FJSON_ARRAY 612
#define FJSON_ARRAYAGG 613
#define SEQUENCE 614
#define FNEXTVAL 615
#define FCURRVAL 616
#define FSETVAL 617
#define FLASTVAL 618
#define START 619
#define INCREMENT 620
#define MINVALUE 621
#define CYCLE 622
#define FARRAY_LENGTH 623
#define FUNNEST 624
#define FEVO_NOTIFY 625
#define FPG_LISTENING_CHANNELS 626




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
#line 909 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 922 "parser/evoparser.tab.c"

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
#define YYLAST   12963

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  389
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  939
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2307

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   626

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     384,   385,    26,    24,   386,    25,   383,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   382,
       2,   388,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,   387,    30,     2,     2,     2,     2,     2,
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
     375,   376,   377,   378,   379,   380,   381
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
    3405,  3407,  3409,  3411,  3416,  3420,  3422,  3426,  3430,  3431,
    3433,  3435,  3437,  3441,  3445,  3448,  3450,  3454,  3458,  3462,
    3464,  3475,  3485,  3498,  3510,  3523,  3535,  3550,  3564,  3565,
    3567,  3569,  3573,  3576,  3580,  3584,  3588,  3590,  3592,  3594,
    3596,  3598,  3600,  3602,  3604,  3606,  3608,  3609,  3612,  3617,
    3623,  3629,  3635,  3641,  3647,  3649,  3651,  3653,  3655,  3657,
    3659,  3661,  3663,  3665,  3667,  3669,  3671,  3673,  3675,  3677,
    3679,  3681,  3683,  3685,  3687,  3689,  3691,  3693,  3695,  3697,
    3699,  3701,  3703,  3705,  3707,  3709,  3711,  3713,  3715,  3717,
    3719,  3721,  3723,  3725,  3727,  3729,  3731,  3733,  3735,  3737,
    3739,  3741,  3743,  3745,  3747,  3749,  3751,  3753,  3755,  3757,
    3759,  3761,  3763,  3765,  3767,  3769,  3771,  3773,  3775,  3777,
    3779,  3781,  3783,  3785,  3787,  3789,  3791,  3793,  3795,  3797,
    3799,  3801,  3803,  3805,  3807,  3809,  3811,  3813,  3815,  3817,
    3819,  3821,  3823,  3825,  3827,  3829,  3831,  3833,  3835,  3837,
    3839,  3841,  3843,  3845,  3847,  3849,  3851,  3853,  3855,  3857,
    3859,  3861,  3863,  3865,  3867,  3869,  3871,  3873,  3875,  3877,
    3879,  3881,  3883,  3885,  3887,  3889,  3891,  3893,  3895,  3899,
    3905,  3909,  3915,  3917,  3922,  3928,  3930,  3934,  3936,  3938,
    3940,  3942,  3944,  3946,  3948,  3950,  3964,  3966,  3968,  3970,
    3972,  3974,  3976,  3980,  3986,  3991,  3996,  3998,  4004,  4005,
    4008,  4012,  4015,  4019,  4022,  4025,  4028,  4030,  4033,  4035,
    4039,  4045,  4050,  4055,  4062,  4069,  4070,  4073,  4076,  4078
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     390,     0,    -1,   429,   382,    -1,   429,   382,   390,    -1,
       3,    -1,     3,   383,     3,    -1,    87,   383,     3,    -1,
     181,   384,     3,   385,    89,   384,     4,   385,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   191,
      -1,   391,    24,   391,    -1,   391,    25,   391,    -1,   391,
      26,   391,    -1,   391,    27,   391,    -1,   391,    28,   391,
      -1,   391,    29,   391,    -1,    25,   391,    -1,   384,   391,
     385,    -1,   391,    12,   391,    -1,   391,    10,   391,    -1,
     391,    11,   391,    -1,   391,    21,   391,    -1,   391,    22,
     391,    -1,   391,    30,   391,    -1,   391,    23,   391,    -1,
     391,    32,   391,    -1,   391,    31,   391,    -1,    18,   391,
      -1,    17,   391,    -1,   391,    20,   391,    -1,    -1,   391,
      20,   384,   392,   430,   385,    -1,    -1,   391,    20,    45,
     384,   393,   430,   385,    -1,    -1,   391,    20,   230,   384,
     394,   430,   385,    -1,    -1,   391,    20,    38,   384,   395,
     430,   385,    -1,   391,    20,    45,   384,   399,   385,    -1,
     391,    20,   230,   384,   399,   385,    -1,   391,    15,   191,
      -1,   391,    15,    18,   191,    -1,   391,    15,     6,    -1,
     391,    15,    18,     6,    -1,     8,     9,   391,    -1,   391,
      19,   391,    48,   391,    -1,   391,    18,    19,   391,    48,
     391,    -1,   391,    -1,   391,   386,   396,    -1,   391,    -1,
     391,   386,   397,    -1,    -1,   261,    34,   398,   397,   387,
      -1,   261,    34,   387,    -1,   391,    34,   391,   387,    -1,
     391,    -1,   378,   384,   391,   385,    -1,   378,   384,   391,
     386,   391,   385,    -1,   379,   384,   391,   385,    -1,   380,
     384,   391,   386,   391,   385,    -1,   381,   384,   385,    -1,
      -1,   396,    -1,    -1,   391,    16,   384,   401,   396,   385,
      -1,    -1,   391,    18,    16,   384,   402,   396,   385,    -1,
      -1,   391,    16,   384,   403,   430,   385,    -1,    -1,   391,
      18,    16,   384,   404,   430,   385,    -1,    -1,   279,   384,
     405,   430,   385,    -1,     3,   384,   400,   385,    -1,   320,
     384,    26,   385,    -1,   320,   384,   391,   385,    -1,   321,
     384,   391,   385,    -1,   322,   384,   391,   385,    -1,   323,
     384,   391,   385,    -1,   324,   384,   391,   385,    -1,   318,
     384,   391,   385,    -1,   318,   384,   391,   319,     4,   385,
      -1,    -1,   340,   384,   385,   348,   384,   406,   437,   439,
     385,    -1,    -1,   341,   384,   385,   348,   384,   407,   437,
     439,   385,    -1,    -1,   342,   384,   385,   348,   384,   408,
     437,   439,   385,    -1,    -1,   321,   384,   391,   385,   348,
     384,   409,   437,   439,   385,    -1,    -1,   320,   384,    26,
     385,   348,   384,   410,   437,   439,   385,    -1,    -1,   320,
     384,   391,   385,   348,   384,   411,   437,   439,   385,    -1,
      -1,   322,   384,   391,   385,   348,   384,   412,   437,   439,
     385,    -1,    -1,   323,   384,   391,   385,   348,   384,   413,
     437,   439,   385,    -1,    -1,   324,   384,   391,   385,   348,
     384,   414,   437,   439,   385,    -1,    -1,   343,   384,   391,
     385,   348,   384,   415,   437,   439,   385,    -1,    -1,   343,
     384,   391,   386,     5,   385,   348,   384,   416,   437,   439,
     385,    -1,    -1,   343,   384,   391,   386,     5,   386,     4,
     385,   348,   384,   417,   437,   439,   385,    -1,    -1,   343,
     384,   391,   386,     5,   386,     5,   385,   348,   384,   418,
     437,   439,   385,    -1,    -1,   344,   384,   391,   385,   348,
     384,   419,   437,   439,   385,    -1,    -1,   344,   384,   391,
     386,     5,   385,   348,   384,   420,   437,   439,   385,    -1,
      -1,   344,   384,   391,   386,     5,   386,     4,   385,   348,
     384,   421,   437,   439,   385,    -1,    -1,   344,   384,   391,
     386,     5,   386,     5,   385,   348,   384,   422,   437,   439,
     385,    -1,    -1,   345,   384,     5,   385,   348,   384,   423,
     437,   439,   385,    -1,    -1,   346,   384,   385,   348,   384,
     424,   437,   439,   385,    -1,    -1,   347,   384,   385,   348,
     384,   425,   437,   439,   385,    -1,   280,   384,   391,   386,
     391,   386,   391,   385,    -1,   280,   384,   391,   386,   391,
     385,    -1,   280,   384,   391,   134,   391,   385,    -1,   280,
     384,   391,   134,   391,   138,   391,   385,    -1,   281,   384,
     391,   385,    -1,   281,   384,   426,   391,   134,   391,   385,
      -1,   281,   384,   426,   134,   391,   385,    -1,   325,   384,
     391,   385,    -1,   326,   384,   391,   385,    -1,   327,   384,
     391,   385,    -1,   328,   384,   391,   386,   391,   385,    -1,
     329,   384,   391,   386,   391,   386,   391,   385,    -1,   330,
     384,   391,   386,   391,   385,    -1,   292,   384,   391,   386,
     391,   385,    -1,   293,   384,   391,   386,   391,   385,    -1,
     294,   384,   391,   386,   391,   386,   391,   385,    -1,   295,
     384,   391,   386,   391,   386,   391,   385,    -1,   296,   384,
     391,   385,    -1,   297,   384,   391,   386,   391,   385,    -1,
     298,   384,   391,   386,   391,   385,    -1,   299,   384,   391,
     386,   391,   385,    -1,   300,   384,   391,   385,    -1,   301,
     384,   391,   385,    -1,   302,   384,   391,   385,    -1,   303,
     384,   391,   386,   391,   385,    -1,   303,   384,   391,   385,
      -1,   304,   384,   391,   386,   391,   385,    -1,   305,   384,
     391,   385,    -1,   306,   384,   391,   386,   391,   385,    -1,
     307,   384,   385,    -1,   308,   384,   391,   385,    -1,   309,
     384,   391,   385,    -1,   310,   384,   391,   385,    -1,   311,
     384,   385,    -1,   291,   384,   385,    -1,   284,   384,   391,
     386,   391,   385,    -1,   285,   384,   391,   385,    -1,   286,
     384,   391,   385,    -1,   287,   384,   391,   385,    -1,   288,
     384,   391,   385,    -1,   289,   384,   391,   385,    -1,   290,
     384,   391,   385,    -1,   350,   384,   391,   386,   391,   385,
      -1,   351,   384,   391,   385,    -1,   352,   384,   391,   385,
      -1,   353,   384,   391,   385,    -1,   354,   384,   391,   385,
      -1,   355,   384,   391,   385,    -1,   356,   384,   391,   385,
      -1,   357,   384,   391,   385,    -1,   358,   384,   391,   385,
      -1,   359,   384,   391,   386,   391,   386,   391,   385,    -1,
     360,   384,   391,   386,   391,   386,   391,   385,    -1,   361,
     384,   391,   386,   391,   386,   391,   385,    -1,   362,   384,
     391,   386,   391,   385,    -1,   363,   384,   391,   386,   391,
     385,    -1,   364,   384,   391,   386,   391,   386,   391,   385,
      -1,   365,   384,   391,   386,   391,   386,   391,   385,    -1,
     366,   384,   391,   386,   391,   385,    -1,   366,   384,   391,
     386,   391,   386,   391,   386,   391,   385,    -1,   367,   384,
     391,   385,    -1,   367,   384,   391,   386,   391,   385,    -1,
     367,   384,   391,   386,   391,   386,   391,   385,    -1,   368,
     384,   391,   385,    -1,   370,   384,   391,   385,    -1,   371,
     384,   391,   385,    -1,   372,   384,   391,   386,   391,   385,
      -1,   372,   384,   391,   386,   391,   386,   391,   385,    -1,
     373,   384,   385,    -1,   312,   384,   391,    49,   553,   385,
      -1,   313,   384,   391,   386,   553,   385,    -1,   314,   384,
     391,   386,   391,   385,    -1,   315,   384,   391,   386,   391,
     385,    -1,   316,   384,   391,   386,   391,   386,   391,   385,
      -1,   391,    15,   317,    -1,   328,   384,   391,   386,   391,
     386,   391,   385,    -1,   328,   384,   391,   386,   391,   386,
     391,   386,   391,   385,    -1,   331,   384,   385,    -1,   332,
     384,   385,    -1,   333,   384,   385,    -1,   334,   384,   385,
      -1,   335,   384,   385,    -1,   336,    -1,   337,    -1,   338,
     384,   391,   385,    -1,   339,   384,   391,   386,   391,   385,
      -1,   176,    -1,   252,    -1,    63,    -1,   282,   384,   391,
     386,   427,   385,    -1,   283,   384,   391,   386,   427,   385,
      -1,   159,   391,   276,    -1,   159,   391,   102,    -1,   159,
     391,   103,    -1,   159,   391,   107,    -1,   159,   391,   109,
      -1,   159,   391,   277,    -1,   159,   391,   143,    -1,   159,
     391,   142,    -1,   159,   391,   145,    -1,    75,   391,   428,
     122,    -1,    75,   391,   428,   123,   391,   122,    -1,    75,
     428,   122,    -1,    75,   428,   123,   391,   122,    -1,   273,
     391,   251,   391,    -1,   428,   273,   391,   251,   391,    -1,
     391,    14,   391,    -1,   391,    18,    14,   391,    -1,   391,
      13,   391,    -1,   391,    18,    13,   391,    -1,    70,    -1,
      78,    -1,    79,    -1,   223,    -1,   430,    -1,   239,   448,
     449,    -1,   239,   448,   449,   134,   452,   431,   432,   436,
     441,   444,   445,   446,    -1,   239,   448,   449,   157,     3,
     134,   452,   431,   432,   436,   441,   444,    -1,    -1,   272,
     391,    -1,    -1,   139,    61,   433,   435,    -1,   391,   434,
      -1,   433,   386,   391,   434,    -1,    -1,    47,    -1,   110,
      -1,    -1,   275,   212,    -1,    -1,   146,   391,    -1,    -1,
     349,    61,   438,    -1,     3,    -1,   438,   386,     3,    -1,
      -1,   196,    61,   440,    -1,     3,   434,    -1,   440,   386,
       3,   434,    -1,    -1,   196,    61,   442,    -1,   443,    -1,
     442,   386,   443,    -1,     3,   434,    -1,     3,   383,     3,
     434,    -1,     5,   434,    -1,    -1,   177,   391,    -1,   177,
     391,   386,   391,    -1,   177,   391,   179,   391,    -1,    -1,
     138,   256,    -1,   138,   228,    -1,   138,   256,   229,   178,
      -1,   138,   228,   229,   178,    -1,    -1,   157,   447,    -1,
       3,    -1,   447,   386,     3,    -1,    -1,   448,    38,    -1,
     448,   104,    -1,   448,   108,    -1,   448,   144,    -1,   448,
     236,    -1,   448,   224,    -1,   448,   232,    -1,   448,   231,
      -1,   450,    -1,   449,   386,   450,    -1,    26,    -1,   391,
     451,    -1,    49,     3,    -1,     3,    -1,    -1,   453,    -1,
     452,   386,   453,    -1,   454,    -1,   458,    -1,     3,   451,
     465,    -1,   171,     3,   451,   465,    -1,     3,   383,     3,
     451,   465,    -1,   468,   457,     3,    -1,   455,   457,     3,
      -1,   379,   384,   391,   385,    -1,   379,   384,   391,   385,
     457,     3,    -1,   379,   384,   391,   385,   457,     3,   384,
       3,   385,    -1,   384,   452,   385,    -1,    -1,   165,   384,
     456,   430,   385,    -1,    49,    -1,    -1,   453,   459,   161,
     454,   463,    -1,   453,   236,   454,    -1,   453,   236,   454,
     195,   391,    -1,   453,   461,   460,   161,   454,   464,    -1,
     453,   188,   462,   161,   454,    -1,    -1,   151,    -1,    74,
      -1,    -1,   194,    -1,   175,    -1,   213,    -1,   175,   460,
      -1,   213,   460,    -1,    -1,    -1,   464,    -1,   195,   391,
      -1,   264,   384,   447,   385,    -1,   265,   162,   466,   384,
     467,   385,    -1,   152,   162,   466,   384,   467,   385,    -1,
     131,   162,   466,   384,   467,   385,    -1,    -1,   138,   161,
      -1,    -1,     3,    -1,   467,   386,     3,    -1,   384,   430,
     385,    -1,   469,    -1,   105,   470,   134,     3,   431,   441,
     444,   579,    -1,   470,   174,    -1,   470,   201,    -1,   470,
     152,    -1,    -1,   105,   470,   471,   134,   452,   431,    -1,
       3,   472,    -1,   471,   386,     3,   472,    -1,    -1,   383,
      26,    -1,   105,   470,   134,   471,   264,   452,   431,    -1,
     473,    -1,   106,   250,     3,   474,    -1,   106,   250,   154,
     279,     3,   474,    -1,    -1,    72,    -1,   208,    -1,   475,
      -1,    71,   153,     3,   195,     3,   384,   476,   385,    -1,
      71,   136,   153,     3,   195,     3,   384,   476,   385,    -1,
      71,   153,   154,   279,     3,   195,     3,   384,   476,   385,
      -1,    71,   259,   153,     3,   195,     3,   384,   476,   385,
      -1,    71,   259,   153,   154,   279,     3,   195,     3,   384,
     476,   385,    -1,    71,   153,     3,   195,     3,   264,   266,
     384,   476,   385,    -1,    71,   153,   154,   279,     3,   195,
       3,   264,   266,   384,   476,   385,    -1,    71,   259,   153,
       3,   195,     3,   264,   266,   384,   476,   385,    -1,    71,
     259,   153,   154,   279,     3,   195,     3,   264,   266,   384,
     476,   385,    -1,    71,   153,    83,     3,   195,     3,   384,
     476,   385,    -1,    71,   153,    83,   154,   279,     3,   195,
       3,   384,   476,   385,    -1,    71,   259,   153,    83,     3,
     195,     3,   384,   476,   385,    -1,    71,   259,   153,    83,
     154,   279,     3,   195,     3,   384,   476,   385,    -1,    71,
     153,    83,     3,   195,     3,   264,   266,   384,   476,   385,
      -1,    71,   259,   153,    83,     3,   195,     3,   264,   266,
     384,   476,   385,    -1,     3,    -1,   476,   386,     3,    -1,
     477,    -1,   325,   384,     3,   385,    -1,   326,   384,     3,
     385,    -1,   327,   384,     3,   385,    -1,   328,   384,     3,
     386,     3,   385,    -1,   478,    -1,   106,   153,     3,    -1,
     479,   481,    -1,   253,   250,     3,    -1,   253,   250,     3,
     386,   480,    -1,     3,    -1,   480,   386,     3,    -1,    -1,
     481,    72,    -1,   481,   208,    -1,   481,    53,    51,    -1,
     481,    52,    51,    -1,   482,    -1,   483,    -1,   484,    -1,
     166,     3,    -1,   166,     3,   169,    -1,   168,     3,    -1,
     168,    26,    -1,   167,     3,    -1,   167,     3,   386,     4,
      -1,   485,    -1,   204,   250,     3,    -1,   486,    -1,   488,
       3,   487,   489,    -1,   488,     3,   383,     3,   487,   489,
      -1,    -1,   275,    42,     5,    43,    -1,   275,    42,     5,
      44,    -1,    39,   250,    -1,    -1,   256,    40,   195,   490,
      -1,   256,    40,   195,   490,   275,     5,    41,    -1,   106,
      40,   195,   490,    -1,     3,    -1,   490,   386,     3,    -1,
     499,    -1,   491,    -1,   498,    -1,    71,   219,     3,   195,
       3,   492,   493,   494,   496,   497,    -1,    -1,    49,   221,
      -1,    49,   222,    -1,    -1,   138,    38,    -1,   138,   239,
      -1,   138,   155,    -1,   138,   256,    -1,   138,   105,    -1,
      -1,   243,   495,    -1,     3,    -1,   495,   386,     3,    -1,
      -1,   264,   384,   391,   385,    -1,    -1,   275,    76,   384,
     391,   385,    -1,   106,   219,     3,   195,     3,    -1,    35,
     250,     3,    36,    69,     3,    76,   384,   391,   385,    -1,
      35,   250,     3,    36,    69,     3,   259,   384,   546,   385,
      -1,    35,   250,     3,    36,    69,     3,   132,   162,   384,
     543,   385,   205,     3,   384,   544,   385,   545,    -1,    35,
     250,     3,    36,    69,     3,    76,   384,   391,   385,    18,
     267,    -1,    35,   250,     3,    36,    69,     3,   132,   162,
     384,   543,   385,   205,     3,   384,   544,   385,   545,    18,
     267,    -1,    35,   250,     3,    36,    69,     3,   199,   162,
     384,   542,   385,    -1,    35,   250,     3,   106,    69,     3,
      -1,    35,   250,     3,   206,    69,     3,   243,     3,    -1,
      35,   250,     3,   118,    69,     3,    -1,    35,   250,     3,
      98,    69,     3,    -1,    35,   250,     3,   267,    69,     3,
      -1,    35,   250,     3,    36,    82,     3,   553,   548,   500,
      -1,    35,   250,     3,   106,    82,     3,    -1,    35,   250,
       3,   106,     3,    -1,    35,   250,     3,   206,    82,     3,
     243,     3,    -1,    35,   250,     3,   206,     3,   243,     3,
      -1,    35,   250,     3,   185,    82,     3,   553,   548,   500,
      -1,    35,   250,     3,   185,     3,   553,   548,   500,    -1,
      35,   250,     3,    73,    82,     3,     3,   553,   548,   500,
      -1,    35,   250,     3,    73,     3,     3,   553,   548,   500,
      -1,    35,   250,     3,   118,   215,     3,   220,    -1,    35,
     250,     3,    98,   215,     3,   220,    -1,    -1,   128,    -1,
      37,     3,    -1,   501,    -1,   155,   509,   510,     3,   511,
     269,   513,   502,   504,   579,    -1,   155,   509,   510,     3,
     511,   430,    -1,    -1,    -1,   197,   162,   256,   503,   508,
      -1,    -1,   195,    86,   505,   506,    -1,    -1,   384,     3,
     385,    -1,   384,     3,   386,     3,    -1,    99,    88,    -1,
      -1,    99,   256,   507,   238,   508,    -1,     3,    20,   391,
      -1,   508,   386,     3,    20,   391,    -1,    -1,   509,   174,
      -1,   509,   101,    -1,   509,   144,    -1,   509,   152,    -1,
     157,    -1,    -1,    -1,   384,   512,   385,    -1,     3,    -1,
     512,   386,     3,    -1,   384,   515,   385,    -1,    -1,   513,
     386,   514,   384,   515,   385,    -1,   391,    -1,   111,    -1,
     515,   386,   391,    -1,   515,   386,   111,    -1,   155,   509,
     510,     3,   238,   516,   502,    -1,     3,    20,   391,    -1,
       3,    20,   111,    -1,   516,   386,     3,    20,   391,    -1,
     516,   386,     3,    20,   111,    -1,   517,    -1,   214,   509,
     510,     3,   511,   269,   513,   502,    -1,   214,   509,   510,
       3,   238,   516,   502,    -1,   214,   509,   510,     3,   511,
     430,   502,    -1,   518,    -1,    -1,    84,     3,   519,   520,
     522,   523,   524,    -1,    -1,   384,   521,   385,    -1,     3,
      -1,   521,   386,     3,    -1,   134,    -1,   243,    -1,     4,
      -1,   234,    -1,   235,    -1,    -1,   525,    -1,   275,   384,
     525,   385,    -1,   384,   525,   385,    -1,   526,    -1,   525,
     386,   526,    -1,   133,    85,    -1,   133,   247,    -1,    97,
       4,    -1,   141,    -1,   141,     6,    -1,   191,     4,    -1,
     240,     4,    -1,    85,    -1,   527,    -1,   256,   528,   452,
     238,   529,   431,   441,   444,   579,    -1,    -1,   509,   174,
      -1,   509,   152,    -1,     3,    20,   391,    -1,     3,   383,
       3,    20,   391,    -1,   529,   386,     3,    20,   391,    -1,
     529,   386,     3,   383,     3,    20,   391,    -1,   206,   250,
       3,   243,     3,    -1,   530,    -1,    71,    93,   531,     3,
      -1,    71,   225,   531,     3,    -1,   106,    93,     3,    -1,
     106,    93,   154,   279,     3,    -1,   106,   225,     3,    -1,
     106,   225,   154,   279,     3,    -1,    -1,   154,   279,    -1,
     532,    -1,    71,   100,     3,    49,   553,    -1,    71,   100,
       3,    49,   553,   111,   391,    -1,    71,   100,     3,    49,
     553,    18,   191,    -1,    71,   100,     3,    49,   553,    76,
     384,   391,   385,    -1,    71,   100,     3,    49,   553,    18,
     191,    76,   384,   391,   385,    -1,   533,    -1,   265,     3,
      -1,   265,    93,     3,    -1,   534,    -1,    71,   539,   250,
     531,     3,   384,   540,   385,   536,   535,    -1,    -1,   170,
     384,     3,   385,    -1,    71,   539,   250,   531,     3,   383,
       3,   384,   540,   385,   536,    -1,    71,   539,   250,   531,
       3,   349,    92,     3,   138,   269,   134,   384,     5,   385,
     243,   384,     5,   385,    -1,    -1,   536,    46,    20,     5,
      -1,   536,    46,     5,    -1,   536,   195,     3,   105,     3,
      -1,   536,   195,     3,   246,     3,    -1,   536,   226,    61,
     266,   384,     3,   385,   227,     5,    -1,   536,   226,    61,
     202,   384,     3,   385,   384,   537,   385,    -1,   536,   349,
      61,   202,   384,     3,   385,    -1,   538,    -1,   537,   386,
     538,    -1,   226,     3,   269,   172,   248,     4,   195,   189,
       5,    -1,   226,     3,   269,   172,   248,   182,   195,   189,
       5,    -1,    71,   539,   250,   531,     3,   384,   540,   385,
     555,    -1,    71,   539,   250,   531,     3,   555,    -1,    71,
     539,   250,   531,     3,   383,     3,   384,   540,   385,   555,
      -1,    71,   539,   250,   531,     3,   383,     3,   555,    -1,
      -1,   244,    -1,   245,   244,    -1,   541,    -1,   540,   386,
     541,    -1,   199,   162,   384,   542,   385,    -1,    69,     3,
     199,   162,   384,   542,   385,    -1,   162,   384,   447,   385,
      -1,   153,   384,   447,   385,    -1,   136,   153,   384,   447,
     385,    -1,   136,   162,   384,   447,   385,    -1,    76,   384,
     391,   385,    -1,    69,     3,    76,   384,   391,   385,    -1,
     132,   162,   384,   543,   385,   205,     3,   384,   544,   385,
     545,    -1,   132,   162,   384,   543,   385,   205,     3,   383,
       3,   384,   544,   385,   545,    -1,    69,     3,   132,   162,
     384,   543,   385,   205,     3,   384,   544,   385,   545,    -1,
      69,     3,   132,   162,   384,   543,   385,   205,     3,   383,
       3,   384,   544,   385,   545,    -1,   259,   384,   546,   385,
      -1,    69,     3,   259,   384,   546,   385,    -1,     3,    -1,
     542,   386,     3,    -1,     3,    -1,   543,   386,     3,    -1,
       3,    -1,   544,   386,     3,    -1,    -1,   545,   195,   105,
      72,    -1,   545,   195,   105,   238,   191,    -1,   545,   195,
     105,   208,    -1,   545,   195,   105,   238,   111,    -1,   545,
     195,   256,    72,    -1,   545,   195,   256,   238,   191,    -1,
     545,   195,   256,   208,    -1,   545,   195,   256,   238,   111,
      -1,   545,   195,   105,   190,    -1,   545,   195,   256,   190,
      -1,   545,   181,   135,    -1,   545,   181,   233,    -1,   545,
     181,   198,    -1,   545,    95,    -1,   545,    18,    95,    -1,
     545,    95,   149,    96,    -1,   545,    95,   149,   147,    -1,
       3,    -1,   546,   386,     3,    -1,    -1,   547,     3,   553,
     548,    -1,    -1,   548,    18,   191,    -1,   548,   191,    -1,
     548,   111,     4,    -1,   548,   111,     5,    -1,   548,   111,
       7,    -1,   548,   111,     6,    -1,   548,   111,   331,   384,
     385,    -1,   548,   111,   332,   384,   385,    -1,   548,   111,
     333,   384,   385,    -1,   548,   111,    70,    -1,   548,   111,
     384,   391,   385,    -1,   548,    46,    -1,   548,    46,   384,
       5,   386,     5,   385,    -1,   548,    46,   384,     5,   385,
      -1,   548,    51,   384,     5,   386,     5,   385,    -1,   548,
      51,   384,     5,   385,    -1,   548,    51,    -1,   548,   259,
     162,    -1,   548,   259,    -1,   548,   199,   162,    -1,   548,
     162,    -1,   548,    77,     4,    -1,   548,    76,   384,   391,
     385,    -1,   548,    69,     3,   259,    -1,   548,    69,     3,
     199,   162,    -1,   548,    69,     3,    76,   384,   391,   385,
      -1,   548,    54,    50,    49,   384,   391,   385,    55,    -1,
     548,    54,    50,    49,   384,   391,   385,    56,    -1,   548,
      54,    50,    49,   384,   391,   385,    -1,   548,    49,   384,
     391,   385,    55,    -1,   548,    49,   384,   391,   385,    56,
      -1,   548,    49,   384,   391,   385,    -1,    -1,   384,     5,
     385,    -1,   384,     5,   386,     5,   385,    -1,    -1,    62,
      -1,    -1,   551,   257,    -1,   551,   278,    -1,    -1,   552,
      80,   238,     4,    -1,   552,    81,     4,    -1,    65,   549,
      -1,   242,   549,   551,    -1,   237,   549,   551,    -1,   187,
     549,   551,    -1,   158,   549,   551,    -1,   150,   549,   551,
      -1,    64,   549,   551,    -1,   203,   549,   551,    -1,   112,
     549,   551,    -1,   130,   549,   551,    -1,   114,   549,   551,
      -1,   115,    -1,   255,    -1,   249,    -1,   113,    -1,   276,
      -1,    80,   549,   552,    -1,   268,   384,     5,   385,   552,
      -1,    62,   549,    -1,   270,   384,     5,   385,    -1,   254,
      -1,    59,    -1,   186,    -1,   180,    -1,   241,   550,   552,
      -1,   247,   550,   552,    -1,   183,   550,   552,    -1,   173,
     550,   552,    -1,   121,   384,   554,   385,   552,    -1,   238,
     384,   554,   385,   552,    -1,    60,    -1,   260,    -1,   262,
      -1,   271,   384,     5,   385,    -1,   553,    34,   387,    -1,
       4,    -1,   554,   386,     4,    -1,   556,   457,   430,    -1,
      -1,   152,    -1,   214,    -1,   557,    -1,   238,   225,     3,
      -1,   238,   225,   111,    -1,   238,   558,    -1,   559,    -1,
     558,   386,   559,    -1,     8,    20,   391,    -1,     8,     9,
     391,    -1,   560,    -1,    71,   200,     3,   384,   561,   385,
      49,    58,   565,   122,    -1,    71,   200,     3,   384,   561,
     385,    58,   565,   122,    -1,    71,    10,   214,   200,     3,
     384,   561,   385,    49,    58,   565,   122,    -1,    71,    10,
     214,   200,     3,   384,   561,   385,    58,   565,   122,    -1,
      71,   137,     3,   384,   561,   385,   211,   564,    49,    58,
     565,   122,    -1,    71,   137,     3,   384,   561,   385,   211,
     564,    58,   565,   122,    -1,    71,    10,   214,   137,     3,
     384,   561,   385,   211,   564,    49,    58,   565,   122,    -1,
      71,    10,   214,   137,     3,   384,   561,   385,   211,   564,
      58,   565,   122,    -1,    -1,   562,    -1,   563,    -1,   562,
     386,   563,    -1,     3,   553,    -1,    16,     3,   553,    -1,
     193,     3,   553,    -1,   148,     3,   553,    -1,   150,    -1,
     158,    -1,   268,    -1,   247,    -1,    60,    -1,   130,    -1,
     112,    -1,    64,    -1,   115,    -1,   249,    -1,    -1,   565,
     566,    -1,   565,    58,   565,   122,    -1,   565,   154,   565,
     122,   154,    -1,   565,   274,   565,   122,   274,    -1,   565,
     164,   565,   122,   164,    -1,   565,   129,   565,   122,   129,
      -1,   565,    75,   565,   122,    75,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,
      -1,    10,    -1,    12,    -1,    16,    -1,    48,    -1,   239,
      -1,   155,    -1,   256,    -1,   105,    -1,   134,    -1,   272,
      -1,   238,    -1,   157,    -1,   269,    -1,    71,    -1,   106,
      -1,   250,    -1,   153,    -1,   251,    -1,   123,    -1,   117,
      -1,    94,    -1,    99,    -1,    66,    -1,   209,    -1,   163,
      -1,   160,    -1,    68,    -1,   192,    -1,   127,    -1,    67,
      -1,   140,    -1,   125,    -1,   193,    -1,   148,    -1,   138,
      -1,    52,    -1,   216,    -1,   207,    -1,   124,    -1,   218,
      -1,    57,    -1,   116,    -1,   215,    -1,   217,    -1,    49,
      -1,   195,    -1,   196,    -1,    61,    -1,   139,    -1,   146,
      -1,   177,    -1,   179,    -1,   161,    -1,   175,    -1,   213,
      -1,   151,    -1,   194,    -1,   135,    -1,    74,    -1,   188,
      -1,   264,    -1,   191,    -1,   111,    -1,   199,    -1,   162,
      -1,   259,    -1,    76,    -1,   132,    -1,   205,    -1,    72,
      -1,   208,    -1,   190,    -1,   150,    -1,   158,    -1,   268,
      -1,   247,    -1,    60,    -1,   130,    -1,   112,    -1,    64,
      -1,   115,    -1,   249,    -1,   237,    -1,   114,    -1,    80,
      -1,   260,    -1,    59,    -1,   258,    -1,   120,    -1,   156,
      -1,    38,    -1,   104,    -1,   279,    -1,   273,    -1,   275,
      -1,   200,    -1,   137,    -1,   211,    -1,   384,    -1,   385,
      -1,   386,    -1,   382,    -1,   383,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    17,    -1,   388,
      -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,
      -1,     8,    -1,   567,    -1,   106,   200,     3,    -1,   106,
     200,   154,   279,     3,    -1,   106,   137,     3,    -1,   106,
     137,   154,   279,     3,    -1,   568,    -1,    66,     3,   384,
     385,    -1,    66,     3,   384,   569,   385,    -1,   570,    -1,
     569,   386,   570,    -1,     5,    -1,     4,    -1,     7,    -1,
     191,    -1,     6,    -1,     3,    -1,     8,    -1,   571,    -1,
      71,   217,     3,   572,   573,   195,     3,   138,   116,   215,
      58,   565,   122,    -1,    57,    -1,    37,    -1,   155,    -1,
     256,    -1,   105,    -1,   574,    -1,   106,   217,     3,    -1,
     106,   217,   154,   279,     3,    -1,    35,   217,     3,   118,
      -1,    35,   217,     3,    98,    -1,   575,    -1,    71,   369,
     531,     3,   576,    -1,    -1,   576,   577,    -1,   374,   275,
       5,    -1,   374,     5,    -1,   375,    61,     5,    -1,   375,
       5,    -1,   376,     5,    -1,   182,     5,    -1,   377,    -1,
      18,   377,    -1,   578,    -1,   106,   369,     3,    -1,   106,
     369,   154,   279,     3,    -1,    35,   369,     3,   576,    -1,
      35,   369,     3,    53,    -1,    35,   369,     3,    53,   275,
       5,    -1,    35,   369,     3,   206,   243,     3,    -1,    -1,
     210,    26,    -1,   210,   580,    -1,     3,    -1,   580,   386,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   473,   473,   474,   479,   486,   487,   488,   502,   503,
     531,   539,   547,   553,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   586,   586,   595,   595,   597,   597,
     599,   599,   604,   606,   610,   611,   612,   613,   614,   617,
     618,   621,   630,   648,   657,   677,   677,   737,   746,   753,
     757,   759,   761,   766,   771,   778,   779,   782,   782,   783,
     783,   784,   784,   792,   792,   800,   800,   811,   815,   816,
     817,   818,   819,   820,   821,   822,   826,   826,   828,   828,
     830,   830,   833,   833,   835,   835,   837,   837,   839,   839,
     841,   841,   843,   843,   846,   846,   848,   848,   850,   850,
     852,   852,   854,   854,   856,   856,   858,   858,   860,   860,
     863,   863,   865,   865,   867,   867,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     906,   907,   908,   909,   910,   911,   912,   913,   915,   916,
     917,   918,   919,   920,   921,   922,   923,   924,   925,   926,
     927,   928,   929,   930,   931,   932,   933,   934,   935,   936,
     938,   939,   940,   941,   942,   944,   945,   947,   948,   949,
     951,   952,   953,   954,   961,   968,   975,   979,   983,   987,
     991,   995,  1001,  1002,  1003,  1006,  1012,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1030,  1032,  1034,  1036,
    1040,  1048,  1059,  1060,  1063,  1064,  1067,  1075,  1083,  1091,
    1105,  1115,  1116,  1129,  1145,  1146,  1147,  1148,  1151,  1158,
    1166,  1167,  1168,  1171,  1172,  1175,  1176,  1180,  1181,  1184,
    1186,  1190,  1191,  1194,  1196,  1200,  1201,  1204,  1205,  1208,
    1214,  1221,  1230,  1231,  1232,  1233,  1236,  1237,  1238,  1239,
    1240,  1243,  1244,  1247,  1248,  1251,  1252,  1253,  1254,  1255,
    1256,  1257,  1258,  1259,  1262,  1263,  1264,  1272,  1278,  1279,
    1280,  1283,  1284,  1287,  1288,  1292,  1300,  1310,  1311,  1312,
    1321,  1326,  1332,  1340,  1344,  1344,  1384,  1385,  1389,  1391,
    1393,  1395,  1397,  1401,  1402,  1403,  1406,  1407,  1410,  1411,
    1414,  1415,  1416,  1419,  1420,  1423,  1424,  1428,  1430,  1432,
    1434,  1437,  1438,  1441,  1442,  1445,  1449,  1459,  1467,  1468,
    1469,  1470,  1474,  1478,  1480,  1484,  1484,  1486,  1491,  1498,
    1505,  1517,  1518,  1519,  1523,  1530,  1537,  1545,  1555,  1563,
    1573,  1581,  1590,  1599,  1609,  1617,  1626,  1635,  1645,  1654,
    1666,  1671,  1676,  1682,  1689,  1696,  1703,  1713,  1720,  1729,
    1736,  1742,  1750,  1756,  1764,  1765,  1766,  1767,  1768,  1784,
    1785,  1786,  1789,  1795,  1806,  1812,  1819,  1825,  1841,  1848,
    1857,  1865,  1871,  1886,  1888,  1892,  1901,  1914,  1916,  1920,
    1925,  1932,  1937,  1945,  1949,  1950,  1954,  1965,  1966,  1967,
    1971,  1972,  1973,  1974,  1975,  1976,  1979,  1981,  1985,  1986,
    1989,  1991,  1994,  1996,  2000,  2009,  2015,  2021,  2028,  2034,
    2041,  2047,  2053,  2059,  2065,  2071,  2077,  2083,  2089,  2095,
    2101,  2107,  2113,  2119,  2125,  2131,  2144,  2156,  2157,  2158,
    2161,  2169,  2175,  2188,  2189,  2189,  2193,  2194,  2197,  2198,
    2199,  2203,  2204,  2204,  2208,  2216,  2226,  2227,  2228,  2229,
    2230,  2233,  2233,  2236,  2237,  2240,  2250,  2263,  2264,  2264,
    2267,  2268,  2269,  2270,  2273,  2277,  2278,  2279,  2280,  2286,
    2289,  2295,  2300,  2306,  2310,  2310,  2315,  2316,  2318,  2319,
    2323,  2324,  2328,  2329,  2330,  2333,  2334,  2335,  2336,  2340,
    2341,  2345,  2346,  2347,  2348,  2349,  2350,  2351,  2352,  2356,
    2364,  2373,  2374,  2375,  2379,  2390,  2402,  2413,  2428,  2433,
    2437,  2438,  2442,  2444,  2446,  2448,  2452,  2453,  2459,  2463,
    2465,  2467,  2469,  2471,  2476,  2480,  2481,  2485,  2494,  2507,
    2508,  2516,  2524,  2532,  2533,  2534,  2535,  2536,  2537,  2539,
    2541,  2545,  2546,  2549,  2564,  2571,  2586,  2599,  2614,  2627,
    2628,  2629,  2632,  2633,  2636,  2637,  2638,  2639,  2640,  2641,
    2642,  2643,  2644,  2646,  2648,  2650,  2652,  2654,  2658,  2659,
    2662,  2663,  2666,  2667,  2670,  2671,  2672,  2673,  2674,  2675,
    2676,  2677,  2678,  2679,  2680,  2681,  2682,  2683,  2684,  2685,
    2686,  2687,  2690,  2691,  2694,  2694,  2704,  2705,  2706,  2707,
    2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,  2722,  2723,
    2724,  2725,  2726,  2727,  2728,  2729,  2730,  2731,  2732,  2733,
    2734,  2735,  2736,  2737,  2738,  2739,  2740,  2741,  2742,  2745,
    2746,  2747,  2750,  2751,  2754,  2755,  2756,  2759,  2760,  2761,
    2765,  2766,  2767,  2768,  2769,  2770,  2771,  2772,  2773,  2774,
    2775,  2776,  2777,  2778,  2779,  2780,  2781,  2782,  2783,  2784,
    2785,  2786,  2787,  2788,  2789,  2790,  2791,  2792,  2793,  2794,
    2795,  2796,  2797,  2798,  2799,  2802,  2803,  2806,  2819,  2820,
    2821,  2825,  2828,  2829,  2830,  2831,  2831,  2833,  2834,  2842,
    2846,  2852,  2858,  2865,  2872,  2878,  2884,  2891,  2900,  2901,
    2904,  2905,  2908,  2909,  2910,  2911,  2914,  2915,  2916,  2917,
    2918,  2919,  2920,  2921,  2922,  2923,  2930,  2931,  2932,  2933,
    2934,  2935,  2936,  2937,  2940,  2941,  2942,  2942,  2942,  2943,
    2943,  2943,  2943,  2943,  2943,  2944,  2944,  2944,  2944,  2944,
    2944,  2944,  2944,  2944,  2945,  2945,  2945,  2945,  2945,  2945,
    2945,  2946,  2946,  2946,  2946,  2947,  2947,  2947,  2947,  2947,
    2947,  2947,  2947,  2947,  2947,  2947,  2947,  2948,  2948,  2948,
    2948,  2948,  2948,  2948,  2948,  2949,  2949,  2949,  2949,  2949,
    2949,  2949,  2949,  2950,  2950,  2950,  2950,  2950,  2950,  2950,
    2950,  2950,  2951,  2951,  2951,  2951,  2951,  2951,  2951,  2951,
    2952,  2952,  2952,  2953,  2953,  2953,  2953,  2953,  2953,  2953,
    2953,  2954,  2954,  2954,  2954,  2954,  2954,  2954,  2955,  2955,
    2955,  2955,  2955,  2955,  2955,  2956,  2956,  2956,  2956,  2957,
    2957,  2957,  2957,  2957,  2957,  2957,  2957,  2957,  2957,  2957,
    2957,  2958,  2958,  2958,  2958,  2958,  2959,  2966,  2970,  2976,
    2982,  2988,  3000,  3004,  3010,  3018,  3019,  3022,  3023,  3024,
    3025,  3026,  3027,  3028,  3035,  3039,  3047,  3048,  3051,  3052,
    3053,  3056,  3060,  3066,  3075,  3083,  3094,  3098,  3107,  3108,
    3112,  3113,  3114,  3115,  3116,  3117,  3118,  3119,  3122,  3126,
    3132,  3142,  3149,  3156,  3164,  3174,  3175,  3176,  3179,  3180
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
  "VARBINARY", "VECTOR", "WHERE", "WHEN", "WHILE", "WITH", "YEAR",
  "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD",
  "FDATE_SUB", "FDATEDIFF", "FYEAR", "FMONTH", "FDAY", "FHOUR", "FMINUTE",
  "FSECOND", "FNOW", "FLEFT", "FRIGHT", "FLPAD", "FRPAD", "FREVERSE",
  "FREPEAT", "FINSTR", "FLOCATE", "FABS", "FCEIL", "FFLOOR", "FROUND",
  "FPOWER", "FSQRT", "FMOD", "FRAND", "FLOG", "FLOG10", "FSIGN", "FPI",
  "FCAST", "FCONVERT", "FNULLIF", "FIFNULL", "FIF", "UNKNOWN",
  "FGROUP_CONCAT", "SEPARATOR", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX",
  "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
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
     625,   626,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   389,   390,   390,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   392,   391,   393,   391,   394,   391,
     395,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   396,   396,   397,   397,   398,   391,   391,   391,   399,
     391,   391,   391,   391,   391,   400,   400,   401,   391,   402,
     391,   403,   391,   404,   391,   405,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   406,   391,   407,   391,
     408,   391,   409,   391,   410,   391,   411,   391,   412,   391,
     413,   391,   414,   391,   415,   391,   416,   391,   417,   391,
     418,   391,   419,   391,   420,   391,   421,   391,   422,   391,
     423,   391,   424,   391,   425,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   426,   426,   426,   391,   391,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   391,   391,   391,   391,
     428,   428,   391,   391,   391,   391,   391,   391,   391,   391,
     429,   430,   430,   430,   431,   431,   432,   432,   433,   433,
     434,   434,   434,   435,   435,   436,   436,   437,   437,   438,
     438,   439,   439,   440,   440,   441,   441,   442,   442,   443,
     443,   443,   444,   444,   444,   444,   445,   445,   445,   445,
     445,   446,   446,   447,   447,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   449,   449,   449,   450,   451,   451,
     451,   452,   452,   453,   453,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   456,   455,   457,   457,   458,   458,
     458,   458,   458,   459,   459,   459,   460,   460,   461,   461,
     462,   462,   462,   463,   463,   464,   464,   465,   465,   465,
     465,   466,   466,   467,   467,   468,   429,   469,   470,   470,
     470,   470,   469,   471,   471,   472,   472,   469,   429,   473,
     473,   474,   474,   474,   429,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     476,   476,   476,   477,   477,   477,   477,   429,   478,   429,
     479,   479,   480,   480,   481,   481,   481,   481,   481,   429,
     429,   429,   482,   482,   483,   483,   484,   484,   429,   485,
     429,   486,   486,   487,   487,   487,   488,   489,   489,   489,
     489,   490,   490,   429,   429,   429,   491,   492,   492,   492,
     493,   493,   493,   493,   493,   493,   494,   494,   495,   495,
     496,   496,   497,   497,   498,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   500,   500,   500,
     429,   501,   501,   502,   503,   502,   504,   504,   505,   505,
     505,   506,   507,   506,   508,   508,   509,   509,   509,   509,
     509,   510,   510,   511,   511,   512,   512,   513,   514,   513,
     515,   515,   515,   515,   501,   516,   516,   516,   516,   429,
     517,   517,   517,   429,   519,   518,   520,   520,   521,   521,
     522,   522,   523,   523,   523,   524,   524,   524,   524,   525,
     525,   526,   526,   526,   526,   526,   526,   526,   526,   429,
     527,   528,   528,   528,   529,   529,   529,   529,   429,   429,
     530,   530,   429,   429,   429,   429,   531,   531,   429,   532,
     532,   532,   532,   532,   429,   533,   533,   429,   534,   535,
     535,   534,   534,   536,   536,   536,   536,   536,   536,   536,
     536,   537,   537,   538,   538,   534,   534,   534,   534,   539,
     539,   539,   540,   540,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   542,   542,
     543,   543,   544,   544,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   546,   546,   547,   541,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   549,
     549,   549,   550,   550,   551,   551,   551,   552,   552,   552,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   554,   554,   555,   556,   556,
     556,   429,   557,   557,   557,   558,   558,   559,   559,   429,
     560,   560,   560,   560,   560,   560,   560,   560,   561,   561,
     562,   562,   563,   563,   563,   563,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   565,   565,   565,   565,
     565,   565,   565,   565,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   429,   567,   567,
     567,   567,   429,   568,   568,   569,   569,   570,   570,   570,
     570,   570,   570,   570,   429,   571,   572,   572,   573,   573,
     573,   429,   574,   574,   429,   429,   429,   575,   576,   576,
     577,   577,   577,   577,   577,   577,   577,   577,   429,   578,
     578,   429,   429,   429,   429,   579,   579,   579,   580,   580
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
       1,     1,     1,     4,     3,     1,     3,     3,     0,     1,
       1,     1,     3,     3,     2,     1,     3,     3,     3,     1,
      10,     9,    12,    11,    12,    11,    14,    13,     0,     1,
       1,     3,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     4,     5,
       5,     5,     5,     5,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       3,     5,     1,     4,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,    13,     1,     1,     1,     1,
       1,     1,     3,     5,     4,     4,     1,     5,     0,     2,
       3,     2,     3,     2,     2,     2,     1,     2,     1,     3,
       5,     4,     4,     6,     6,     0,     2,     2,     1,     3
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
     539,   549,   558,   564,   567,   721,   729,   887,   892,   904,
     911,   916,   928,     0,     0,     0,   416,     0,     0,   556,
       0,     0,     0,     0,     0,     0,     0,   556,   590,     0,
       0,   556,     0,   514,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   492,   402,   406,   404,   405,     0,
       0,   492,     0,     0,   724,   725,     0,     0,     0,     0,
     565,     0,     1,     2,   389,   413,     0,     0,   918,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   591,     0,     0,   556,   516,   355,     0,
     350,   348,   349,     0,   552,     0,   890,     0,   388,   888,
       0,   912,     0,     0,   554,     0,   361,     0,   929,     0,
     488,   489,   490,   491,   487,     0,   403,     0,   409,     0,
       0,     0,     0,   722,   723,     0,     4,     9,    10,    12,
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
     396,     0,     0,   417,   915,   914,     0,     0,     0,     0,
       0,     0,     0,     0,   932,     0,   931,   902,   898,   897,
     901,   899,   903,   900,   893,     0,   895,     0,     0,   557,
     550,     0,     0,   738,     0,     0,     0,     0,   738,   907,
     906,     0,     0,   551,     0,     0,     0,   918,     0,     0,
       0,     0,   353,   244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   362,   363,   359,     0,     0,   493,   407,
       0,   493,   728,   727,   726,     0,    65,     0,    32,    31,
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
       0,   926,   919,   894,     0,     0,     0,   701,   710,   669,
     669,   669,   669,   669,   694,   669,   691,     0,   669,   669,
     669,   672,   703,   672,   702,   669,   669,   669,     0,   672,
     669,   672,   693,   700,   692,   711,   712,     0,     0,     0,
     695,   559,     0,     0,     0,     0,     0,     0,   739,   740,
       0,     0,     0,     0,     0,   910,   908,   909,     0,   427,
       0,     0,     0,     0,   917,   718,   518,     0,   520,   521,
       0,   356,     0,   265,     0,   244,   355,   553,   891,   889,
     913,   444,   555,   361,   930,     0,     0,     0,   548,     0,
       0,     5,    51,    66,     0,    48,     0,     0,   228,     0,
       0,     6,     0,    57,     0,     0,     0,   214,   212,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,   159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194,     0,     0,
       0,    64,    21,    23,    24,    22,   234,   232,    46,     0,
      44,   200,    67,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    33,    25,    26,    28,    14,    15,    16,    17,
      18,    19,    27,    30,    29,     0,   298,   244,     0,   295,
     392,   391,   300,     0,     0,     0,   305,     0,   340,     0,
     345,   313,     0,   244,   302,   326,   326,     0,   319,     0,
     327,     0,   309,   308,     0,   417,     0,     0,     0,     0,
       0,     0,   454,     0,   451,   457,   453,     0,   636,     0,
       0,     0,     0,   455,   933,   934,   927,   925,   921,     0,
     923,     0,   924,   896,   738,   738,     0,   698,   674,   680,
     677,   674,   674,     0,   674,   674,   674,   673,   677,   677,
     674,   674,   674,     0,   677,   674,   677,     0,     0,     0,
       0,     0,     0,     0,     0,   742,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   430,
       0,     0,     0,     0,   719,   720,     0,     0,   634,   586,
     317,   517,     0,   522,   523,   524,   525,   245,     0,   272,
     244,   352,   354,   360,     0,   473,   495,     0,     0,   472,
     473,     0,   473,     0,    77,     0,   226,     0,     0,     0,
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
     233,    69,     0,     0,    40,    36,    38,     0,    58,   246,
       0,     0,   340,   342,   342,   342,     0,   306,   310,     0,
       0,     0,   265,   330,   331,     0,     0,   333,     0,   414,
     415,   412,     0,     0,     0,     0,     0,     0,   636,   636,
       0,   466,   465,   467,   636,   460,     0,     0,   920,   922,
       0,     0,     0,   686,   696,   688,   690,   715,     0,   689,
     685,   684,   707,   706,   683,   687,   682,     0,   704,   681,
     705,     0,     0,     0,   561,   714,     0,   560,     0,   743,
     745,   744,     0,   741,     0,   380,     0,     0,     0,     0,
       0,   382,     0,     0,     0,     0,     0,   756,     0,   428,
     429,     0,   436,     0,     0,     0,     0,     0,     0,   718,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   592,
       0,     0,   519,   538,     0,     0,   534,     0,     0,     0,
       0,   515,   526,   529,     0,     0,   935,   357,     0,     0,
       0,   504,   494,     0,     0,   473,   511,   473,   512,    52,
     230,     0,   229,     0,     0,     0,    56,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    88,    90,     0,     0,     0,     0,     0,
     122,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    59,     0,     0,     0,     0,     0,     0,   255,
     244,   393,   307,     0,     0,     0,     0,   315,     0,   544,
       0,     0,   272,   322,   320,     0,     0,   318,   334,     0,
     421,   420,   418,     0,     0,     0,     0,   467,   467,   636,
       0,     0,   648,     0,   653,     0,     0,     0,     0,     0,
     468,   657,   638,     0,   655,   462,   467,   452,   459,     0,
       0,   670,     0,   675,   676,     0,     0,   677,     0,   677,
     677,   699,   713,     0,     0,     0,   750,   753,   752,   754,
     751,   746,   747,   749,   755,   748,     0,     0,     0,     0,
       0,     0,   365,     0,     0,     0,     0,     0,     0,   756,
       0,     0,   431,   435,   433,   432,   434,     0,   440,     0,
       0,     0,     0,     0,     0,     0,   634,   588,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   573,   634,     0,
     717,   533,   531,   532,   535,   536,   537,     0,     0,     0,
     250,   250,   266,   267,   273,     0,   347,   506,   505,     0,
       0,   496,   501,   500,     0,   498,   476,   510,   227,   231,
       0,    54,     0,   128,   127,     0,   132,     0,     0,   215,
     216,   161,   139,   140,     0,     0,   144,   145,   146,   150,
     152,   154,   195,   196,   197,   198,     0,    85,    94,    96,
      92,    98,   100,   102,   136,     0,     0,   138,   211,   257,
     257,   257,   104,     0,     0,   112,     0,     0,   120,   257,
     257,   168,     0,     0,     0,   180,   181,     0,     0,   184,
       0,   187,     0,   192,     0,    61,    63,    68,    72,     0,
       0,    50,     0,     0,    42,     0,    43,    35,     0,     0,
     265,   246,   341,     0,     0,     0,   311,     0,     0,     0,
     935,   335,     0,   321,     0,     0,     0,     0,     0,   632,
       0,   456,   464,   467,   637,   469,     0,     0,     0,     0,
       0,     0,   658,   639,   640,   642,   641,   646,     0,     0,
       0,     0,   656,   654,   461,     0,     0,   756,     0,     0,
     679,   708,   716,   709,   697,     0,   562,   366,     0,   756,
       0,     0,     0,     0,     0,   381,     0,   374,     0,     0,
       0,     0,   764,   765,   766,   768,   767,   886,   771,   772,
     773,   879,   770,   769,   874,   875,   876,   877,   878,   861,
     774,   815,   806,   811,   756,   857,   847,   818,   850,   793,
     800,   797,   784,   840,   829,   756,   837,   855,   791,   792,
     862,   778,   785,   833,   849,   854,   851,   812,   790,   859,
     731,   789,   809,   802,   799,   756,   848,   838,   779,   828,
     867,   805,   819,   801,   820,   804,   843,   826,   787,   756,
     776,   860,   782,   844,   796,   823,   835,   795,   756,   824,
     821,   822,   830,   842,   832,   798,   803,   827,   816,   817,
     834,   866,   839,   808,   841,   794,   868,   825,   813,   807,
     814,   810,   853,   781,   775,   846,   852,   786,   788,   777,
     858,   836,   856,   831,   845,   783,   780,   864,   756,   865,
     863,   881,   882,   883,   884,   885,   872,   873,   869,   870,
     871,   880,   757,     0,   438,   437,     0,   442,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,     0,     0,     0,
     569,   585,   593,   636,     0,   528,   530,   251,   252,     0,
     269,   271,     0,     0,     0,   938,   936,   937,   474,     0,
     497,     0,     0,     0,   935,     0,     0,     0,   131,   218,
     219,   220,   221,   224,   223,   225,   217,   222,     0,     0,
       0,   257,   257,   257,   257,   257,   257,     0,     0,     0,
     261,   261,   261,   257,     0,     0,     0,   257,     0,     0,
       0,   257,   261,   261,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    74,    41,    37,    39,   250,   253,   256,
     272,   255,   343,     0,     0,     0,     0,   545,   546,     0,
     540,     0,   422,     0,   445,   610,     0,   608,     0,   446,
       0,   463,     0,     0,     0,     0,     0,     0,   660,     0,
       0,     0,     0,     0,     0,   756,     0,   671,   678,     0,
     756,     0,   370,   383,   384,   385,     0,     0,     0,     0,
     367,   730,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   426,     0,     0,   376,     0,     0,     0,     0,
     573,     0,     0,     0,     0,   600,     0,     0,     0,   597,
       0,   596,     0,   606,     0,     0,     0,     0,     0,   568,
     635,   527,   250,   268,   275,   274,     0,     0,   508,   507,
     503,   502,     0,   478,   471,     7,   129,   126,   141,   142,
     199,   261,   261,   261,   261,   261,   261,   201,     0,   137,
       0,     0,     0,     0,     0,   261,   106,     0,     0,   261,
     114,     0,     0,   261,     0,     0,   177,   178,   179,   182,
     183,     0,   188,   193,   248,     0,     0,   247,   276,   265,
     339,     0,   338,   337,     0,     0,   336,   419,     0,     0,
       0,   450,     0,   633,   650,     0,   668,   652,     0,     0,
       0,   661,   659,   643,   644,   645,   647,     0,   756,     0,
     733,   563,     0,   735,     0,   378,   375,     0,   758,     0,
       0,     0,     0,     0,   756,   439,     0,     0,   372,     0,
       0,     0,   369,     0,   571,   587,     0,     0,     0,     0,
       0,   598,   599,   284,   594,   575,     0,     0,     0,     0,
       0,   270,   939,     0,   475,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   259,   258,     0,    87,    89,
      91,     0,   257,     0,     0,     0,   257,     0,     0,     0,
     123,   125,     0,   254,   250,     0,   281,   272,   344,   312,
     547,   448,     0,   611,   609,     0,   666,   667,     0,     0,
       0,   756,     0,   732,   734,   386,   371,   763,   762,   759,
     761,   760,     0,   441,     0,   379,   377,     0,     0,   601,
       0,     0,   607,     0,   574,     0,     0,     0,     0,     0,
       0,     0,     0,   499,     0,     0,   477,    95,    97,    93,
      99,   101,   103,   202,     0,   250,   262,   105,   261,   108,
     110,   113,   261,   116,   118,   121,   185,   249,   278,   277,
       0,   242,   243,     0,   649,   651,   665,   662,     0,   737,
     905,     0,   373,     0,     0,   595,     0,   570,   576,   577,
       0,     0,     0,   484,     0,   479,     0,   481,   482,   260,
     263,     0,     0,   257,   257,     0,   257,   257,     0,     0,
     282,     0,   663,   664,   736,   443,     0,     0,     0,     0,
       0,     0,     0,     0,   480,     0,   250,   107,   261,   261,
     115,   261,   261,   280,   279,   612,     0,     0,     0,     0,
       0,     0,     0,   580,   485,     0,   264,     0,     0,     0,
       0,   614,     0,     0,     0,     0,     0,   614,     0,     0,
     483,   109,   111,   117,   119,   447,   613,     0,     0,     0,
       0,   602,     0,     0,   581,   578,     0,   628,     0,     0,
     572,     0,   614,   614,     0,     0,   579,     0,   629,   449,
       0,   625,   627,   626,     0,     0,     0,   604,   603,     0,
     582,   630,   631,   615,   623,   617,     0,   619,   624,   621,
       0,   614,     0,   618,   616,   622,   620,   605,     0,     0,
       0,     0,     0,     0,     0,   583,   584
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   662,  1057,  1273,  1275,  1271,   663,   952,   674,
    1274,   664,  1047,  1267,  1048,  1268,   675,  1469,  1470,  1471,
    1783,  1781,  1782,  1784,  1785,  1786,  1793,  2062,  2183,  2184,
    1797,  2066,  2186,  2187,  1801,  1479,  1480,   681,  1213,   393,
      21,    22,   643,  1279,  1818,  1750,  1967,  1510,  1790,  2056,
    1942,  2136,   929,  1412,  1413,  1186,  2076,  2151,  1736,    96,
     289,   290,   515,   299,   300,   301,   302,   817,   538,   303,
     535,   831,   536,   827,  1297,  1298,   816,  1284,  1823,   304,
      23,    74,   133,   362,    24,   375,    25,  1140,  1141,    26,
      27,   811,   104,    28,    29,    30,    31,    32,   313,    33,
     546,  1301,    34,   909,  1152,  1378,  1715,  1717,  1882,    35,
      36,  1325,    37,  1191,  1917,  1764,  2047,  2126,  2205,  2044,
      84,   155,   657,   937,  1195,  1762,  1424,   935,    38,    39,
     127,   360,   637,   640,   926,  1181,  1182,  1183,    40,    99,
     823,    41,   112,    42,    43,    44,  1909,  1740,  2253,  2254,
      72,  1168,  1169,  1838,  1836,  2216,  2245,  1530,  1170,  1093,
     867,   878,  1103,  1104,   611,  1108,   919,   920,    45,    94,
      95,    46,   617,   618,   619,  1356,  1370,  1712,    47,    48,
     335,   336,    49,   351,   628,    50,    51,   326,   572,    52,
    1416,  1757
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2060
static const yytype_int16 yypact[] =
{
   12304,  -124,  -128,   470,   586,   507, -2060,   589, -2060,   519,
     563,   187,   173,   247, -2060,    28, -2060,   330,   580,   460,
     602,   215, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060,   671, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060,   680,   700,   716, -2060,   305,   516,   581,
     742,   594,   748,   124,   757,   772,   778,   581, -2060,   558,
     635,   581,   540, -2060,    32,    60,   136,   782,   139,   310,
     806,   351,   429,   447,   626,   643,   443, -2060, -2060,   812,
     831,   626,   632,   109,   452, -2060,  6540,   837,   627,    54,
   -2060,   841, -2060, 12304,    61,  -159,   458,   454,    48,    36,
      -5,   568,   847,   808,   857,   471,   669,   456,   601,   492,
     611,   691,   887, -2060,   134,   900,   581,   522,   527,   927,
   -2060, -2060, -2060,  -119, -2060,   660, -2060,   672, -2060, -2060,
     675, -2060,   677,   770, -2060,   699,   226,   702, -2060,   753,
   -2060, -2060, -2060, -2060, -2060,   968, -2060,   993, -2060,   794,
    1010, 10360, 10360, -2060, -2060,  1007,  -202, -2060, -2060, -2060,
   -2060,  1035, 10360, 10360, 10360, -2060, -2060, -2060,  7686, -2060,
   -2060,   659, -2060, -2060, -2060,   662, -2060, -2060, -2060, -2060,
   -2060, -2060,  1020,   704,   713,   715,   730,   739,   747,   763,
     771,   787,   797,   813,   822,   835,   851,   859,   867,   883,
     885,   893,   911,   922,   938,   954,   958,   966,  1009,  1011,
    1036,  1040,  1047,  1049,  1067,  1070,  1075,  1077,  1078,  1079,
    1080,  1081,  1082,  1083,  1084,  1088,  1089,  1091,  1092,  1093,
    1094,  1100,  1101,  1103,  1107,  1108,  1111,  1117, -2060, -2060,
    1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
    1129,  1130,  1131,  1133,  1134,  1135,  1136,  1139,  1140,  1141,
    1145,  1146,  1147,  1148,  1151,  1156,  1157,  1159,  1169,  1171,
    1174,  1179,  1180,  1181,  1182,  1183,  1185, 10360, 12794,  -101,
   -2060,   684,   630,   647,    42,  1187,  1361,  1190,    47,  -158,
    1222, -2060,  1331, -2060,  1331, -2060, -2060,  1471,  1497, -2060,
   -2060,  1044,  1578,   -47, -2060, -2060,   123,   114,    19,   118,
      59,   117,   595,  1520,  1315,  1348,    67, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060,   265, -2060,  1589,  1590, -2060,
   -2060, 12414,  1399,    55,  1592,  1401,  1319,  1597,    55, -2060,
   -2060,    31,  1599, -2060,  1408,   457,  1325, -2060,  1602,  1603,
     -27,  1581, -2060,   203,   -92,    54,  1605,  1606,  1608,  1620,
    1621,  1622,  1623, -2060, -2060, -2060,  1625,  1629,  -154, -2060,
    1631,   -88, 12929, 12929, -2060,  1633, 10360, 10360,   997,   997,
    1607, 10360, 12185,   -17,  1639,  1640,  1257, -2060, 10360,  6922,
   10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360,  1262,
   10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360,
   10360, 10360, 10360, 10360, 10360,  1263, 10360, 10360, 10360,  1264,
   10360, 10360, 10360, 10360, 10360, 10360,  8068, 10360, 10360, 10360,
   10360, 10360, 10360, 10360, 10360, 10360, 10360,  1265,  1266,  1267,
    1268,  1269, 10360, 10360,  1270,  1271,  1277, 10360, 10360,  1659,
    1281,  1282, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360,
   10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360,
   10360, 10360, 10360, 10360,  1283, 10360, 10360, 10360,  1285,  8624,
   -2060, 10360, 10360, 10360, 10360, 10360,    46,  1292,   803, 10360,
    7304, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360,
   10360, 10360, 10360, 10360,  1674, -2060,    54,  1676, 10360,  1680,
    1681,   -50, -2060,   482, 10360,  1300,   306,  1684,    54, -2060,
   -2060, -2060,   342, -2060,    54,  1527,  1495, -2060,  1689,  1690,
   -2060, -2060,  1693,  1424,  1660,  1669, -2060,  1722,  1724,  1725,
    1726,  1727,  1728, -2060,  1729,  1730,  1731,  1732, 12414,  1733,
    1494,  1735,  1736,  1738,  1749,  1767,  1363,  1768,    14,   463,
    1769, -2060, -2060, -2060,    92,  1388,  1391, -2060, -2060,  1392,
    1392,  1392,  1392,  1392, -2060,  1392, -2060,  1393,  1392,  1392,
    1392,  1716, -2060,  1716, -2060,  1392,  1392,  1392,  1395,  1716,
    1392,  1716, -2060, -2060, -2060, -2060, -2060,  1396,  1397,  1398,
   -2060,   473,  1780, 12414,  1782,  1783,  1784,  1403,  1404, -2060,
     130,  1786,  1788,  1598,  1407, -2060, -2060, -2060,  1601,  1745,
    1794,  1604,  1519,  1797,    67,   -83, -2060,   348, -2060, -2060,
      12, -2060, 10360,  1613,    54,  -104,   527, -2060, -2060, -2060,
   -2060, -2060, -2060,   226, -2060,  1798,  1799,   254, -2060,  1798,
     308, -2060,  1037, -2060,  1418, 12929, 12216,   334, -2060, 10360,
   10360, -2060,  1426, -2060, 10360,  1573,   686, -2060, -2060, -2060,
    8656,  8450,  2491,  2832,  3173,  8848,  8926,  8953,  9006,  9038,
    9076, -2060,  3514,  3855,  4196,  4537,  9230,  4878,  5219,  5560,
    9321,  9346,  9388,   603,  5901,  9420,  6242, -2060,  9458,  9612,
    9666, -2060, 12835,  6639,  6714,  6768,  6938,  8536,  1428,  9698,
    9723,  9770,  9802,  9840,  9994, 10048, 10091,  6992,  7017,  7042,
   -2060, -2060, -2060, -2060, -2060, 10116,  7096,  1466,  1467,  1468,
     980,  1114,  1432,  1470,  1501,  7137, 10152, 10184, 10222, 10376,
   10430, 10459, 10484, 10534,  7166,  7341,  7386,  7411,  7436,  7478,
    7548,  7710,  1202, 10566, 10604, 10744,  7764, -2060,  1234, 10769,
    7789, -2060, -2060,  1138,  1832,  7065,  7517,  7517, -2060,    77,
   -2060, -2060,  1628, 10360, 10360,  1484, 10360, 12867,  1485,  1487,
    1488, 10360,  1303,  1377,   889,  1327,  1074,  1074,   764,   764,
     764,   764,   718,  1607,  1607,   133, -2060,  -104,  1739, -2060,
   -2060,  1489,   482,  1712,  1714,  1715, -2060,  1573,   -50, 10798,
   -2060, -2060,     5,  -102,  1222,  1495,  1495,  1717,  1685,    54,
   -2060,  1720, -2060, -2060,   697,   -47,  1687,  1694,   -28, 12414,
   12414,  1888, -2060,  1675, -2060, -2060, -2060,  1679,  1867, 12414,
    1899,  1666,  1667, -2060, -2060, -2060, -2060, -2060, -2060,  1898,
   -2060,  1906, -2060, -2060,    55,    55,  1907, -2060, -2060, -2060,
   -2060, -2060, -2060,  1909, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060,  1909, -2060, -2060, -2060,  1910,  1911,  1912,
    1723,  1532,  1536, 10360,  1537,  1867, 12414, 12414, 12414,  1711,
      55,  1657,   121,   137,  1740,  1921,   546,  1922,   535,  1789,
     207,  1923,  1927,  1741, -2060, -2060,  1839,  1930,   593, -2060,
    1331, -2060,  1931, -2060, -2060, -2060,   409, 12929,  1881,  1766,
    -104, -2060, -2060, -2060,  1925,  -150, -2060,   378,  1565, -2060,
    -150,  1565,  1753, 10360, -2060, 10360, -2060, 10360, 12681, 12299,
    1864,  7814,  1570,  1574, 10360, 10360, -2060, 10360, 12600,  1802,
    1802, 10360, -2060, -2060, -2060, -2060, -2060, -2060, 10360, 10360,
   10360, 10360, -2060, 10360, 10360, 10360, -2060, -2060, -2060, -2060,
   10360, 10360, -2060, 10360, -2060, -2060, -2060, 12414, 12414, 10360,
   10360, 10360,  1954, -2060,  1614,  1615,  1616,  1617,  1618,  1619,
   -2060, -2060, -2060, 10360, 10360, 10360, -2060, 10360,  1584,  1585,
    1586,  1624,  1966,  1627,  1968,  1630,  1593,  1596, 10360, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, 10360, 10360, 10360,
   10360, 10360, 10360, 10360, 10360, -2060, 10360, -2060, -2060, -2060,
   10360, -2060, 10360, -2060, 10360, -2060, -2060, 10360,  1573,  7517,
    7517,  1742, 12898, 10360, -2060, 10360, 10360,  1573, -2060,  1837,
      54,  1979,   -50,  1845,  1845,  1845,  1626, -2060,   505, 10360,
    1984,  1985,  1613, -2060, -2060,    54, 10360,   -70,    54, -2060,
   -2060, -2060,  1986,  1986,  1609,  1828,  1836,  1632,  1867,  1867,
   12414, -2060, -2060, 12231,  1867, -2060,  1996,  1998, -2060, -2060,
    1636,  1637,   380,   238,   692,   238,   238, -2060,   391,   238,
     238,   238,   692,   692,   238,   238,   238,   438,   692,   238,
     692,  1638,  1642,  1644,  1937, -2060, 10360, 12929,   121,  1867,
    1867,  1867,   698, -2060,  1648, -2060,  1655,  1661,  1662,  1663,
     440, -2060,  1758,   121,  2003,   210,  1990, -2060,  1913, -2060,
   -2060,   420,  1806,  1787,   121,   219,  1855,  2049,  2051,  -120,
    2053,  1677,  1896,   491,  1678,  1682,  1901,  1683,   468, -2060,
    2057,  1573, -2060, -2060,  2060,     4,  2059,  2065,  2077,  1698,
     -18, -2060,  1697, -2060,   668, 10360,  1874, -2060,  8832,  1924,
    2087, -2060, -2060,  2089,  9214,  -136, -2060,  -136, -2060, -2060,
   12929, 12717, -2060, 10360,  1710, 10360, -2060, -2060,  8577,  1260,
   10827, 10360, 10360,  1718,  1719, 10852, 10877, 10902,  7860,  7892,
   10934, 10972, 10997, 11022, 11047, 11072,    15,    17, 11112, 11137,
    8087,  1721,  1744,  1748,  1750,  1751,  1757,  1759,  1289,  8158,
   11166, 11195, -2060, -2060, -2060,  1761,   477,  1762,   481,  1763,
   -2060, -2060, 11220,  8183,  8208,  8242, 11245, 11270,  8274,  8312,
    1692,  1737,  1809, 11302, 11340,  1752,  1765, 10360,  1573, 10360,
    1053,  1573, 12929,  1573,  1771,  1573,  1772,  1773,  2038,  1955,
    -104, -2060, -2060,  1939,  1801,  1803,  1804, -2060,  2099, 12929,
    2085,    10,  1766, -2060, 12929, 10360,  1805, -2060, -2060,   -70,
   -2060,  1734,  -185, 10360,  1807,  1808,  2105, 12231, 12231,  1867,
    1918,  2107,  1812,  1813,  1814,  2061,  2109,  1815,  2110,   104,
   -2060, -2060, -2060,  1951,  1953, -2060, 12231, -2060, -2060,  1905,
     596, -2060,  2116, -2060, -2060,  1886,  2121, -2060,  2122, -2060,
   -2060, -2060, -2060,  1821, 11365,   483, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060,   597,   121,  2130,  2139,
    2148,  2164, -2060,  2180,  1822,   485,  1823,  1920,   121, -2060,
    1422,  2074, -2060, -2060, -2060, -2060, -2060,  2190,  1944,  1825,
     497,  1945,   121,  2207,   225,  2075,   593, -2060,   165, 10360,
    1830,  1831,  1833,  2209,  2209,  1834,  2105,    26,   593, 12414,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060,   -18,   503,   -18,
     -24,   345,  1835, -2060,  1164,   566, -2060, -2060, 12929,  1960,
    2199, -2060, -2060, 12929,   506, -2060,  2025, -2060, -2060, 12929,
    2218, -2060, 10360, -2060, -2060, 10360, -2060, 11390, 12160, -2060,
   -2060, -2060, -2060, -2060, 10360, 10360, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, 10360, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, 10360, 10360, -2060, -2060,  1883,
    1883,  1883, -2060,  1875,   895, -2060,  1882,   920, -2060,  1883,
    1883, -2060, 10360, 10360, 10360, -2060, -2060, 10360, 10360, -2060,
   10360, -2060, 10360, -2060, 10360, -2060, -2060, -2060, -2060,  1849,
    1850,  1053,  1851,  1857, -2060,  1858, -2060, -2060, 10360, 10360,
    1613,  1837, -2060,  2237,  2237,  2237,  1860, 10360, 10360,  2247,
    1874, 12929,  2209, -2060,  2248,  2249, 11415,  2250,  2252, -2060,
     541, -2060, -2060, 12231, -2060, -2060,  2251, 10360,  2253,  2203,
      11, 10360, -2060, -2060, -2060, -2060, -2060, -2060,  1873,  1876,
    1877, 10360, -2060, -2060, -2060,   698,  2213, -2060,  1887,  2263,
   -2060,   692, -2060,   692,   692, 10360, -2060, -2060,  2216, -2060,
     543,  1890,  1891,  1892,  1897, -2060,   121, -2060,   121,  1900,
     557,  1880, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060,  2071, -2060,  1904,  1914,  2016,   121, -2060,
    1915,   564,  1916,  2028,   121,  2033,   567,  1919,  2142,  2143,
    1926, 11440,  2250,  2209,  2209, -2060,   576,   578,  2252,   600,
       9, -2060, -2060,  1867,   648, -2060, -2060, -2060, -2060,  2303,
   -2060, -2060,   668, 10360, 10360, -2060, -2060,  1928, -2060,  9596,
   -2060,  9978,  1929,  2222,  1874,  1932, 11480, 11505, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, 11534, 11563,
   11588,  1883,  1883,  1883,  1883,  1883,  1883,  2150, 11613,  2246,
    2113,  2113,  2113,  1883,  1934,  1936,  1938,  1883,  1935,  1943,
    1946,  1883,  2113,  2113, 11638, 11670, 11708, 11733, 11758,  8466,
   11783, 11808, -2060, -2060, -2060, -2060, -2060, 12742,   179, 12929,
    1766,  1955, -2060,   650,   654,   705,  2308, 12929, 12929,  2292,
   -2060,   708, -2060,  2275,  2304, -2060,   710, -2060,   725, -2060,
    2321, -2060,   727, 11848,   732,  1950,  1956,  2167, -2060, 11873,
    1957,  1962,  1964, 11902,   609, -2060,  2221, -2060, -2060, 11931,
   -2060,  2562, -2060, -2060, -2060, -2060,  2327,   734,   736,   121,
   -2060, -2060,  2903,  3244,  3585,  3926,  4267,  4608,  2281,  2349,
   10360,  2278, -2060,   815,   121, -2060,   121,  1973,   817,  2228,
      26, 10360,  1980,  1981,  2105, -2060,   819,   823,   825, -2060,
    2360, -2060,   852, -2060,   539,  1982,  2365,  2309,  2312, -2060,
     494, -2060,   345, -2060, 12929, 12929,  2377,  2383, -2060, 12929,
   -2060, 12929,  9214,  2004, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060,  2113,  2113,  2113,  2113,  2113,  2113, -2060, 10360, -2060,
    2384,  2328,  2005,  2006,  2007,  2113, -2060,  2045,  2046,  2113,
   -2060,  2047,  2054,  2113,  2012,  2014, -2060, -2060, -2060, -2060,
   -2060, 10360, -2060, -2060, -2060,  2189, 10360, -2060,  2265,  1613,
   -2060,  2401, -2060, -2060,  2020, 10360, -2060, -2060,  2140,  2201,
    2405, -2060,  2407, -2060, -2060,  2413,  1184, -2060,  2414, 10360,
   10360, -2060, -2060, -2060, -2060, -2060, -2060,  2364, -2060,  4949,
   -2060, -2060,  5290, -2060,  2039, -2060, -2060,   856, -2060,  2348,
    2296,  2273,  2267,  2159, -2060, -2060, 11956,  2056, -2060,   912,
     955,   121, -2060,  2058,    16, -2060, 11981,  2250,  2252,   959,
    2230, -2060, -2060, -2060, -2060, -2060,  2436,  2440,    29,   260,
    2242, -2060, -2060,  2425,  2062,   961,  2443,  2350,  2066,  2067,
    2068,  2069,  2070,  2072, 12006, -2060,  2064,  2444, -2060, -2060,
   -2060,  2076,  1883,  2078,  2079,  2080,  1883,  2082,  2083,  2084,
   -2060, -2060, 12038, -2060, 12742,   -48,  2299,  1766, -2060, -2060,
   12929, -2060,  2461, -2060, -2060,  2088, -2060, -2060,  2090, 12076,
   12101, -2060,  5631, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060,  5972, -2060, 10360, -2060, -2060,   977,  2469, -2060,
     982,   986, -2060,  2473, -2060,  2093,  2479,  2480,  2100,  2102,
    2103, 10360,  2485, -2060,   989,   -35, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060,  2488,   345,  2106, -2060,  2113, -2060,
   -2060, -2060,  2113, -2060, -2060, -2060, -2060, -2060,  2268,  2269,
    2209, -2060, -2060,  2115, -2060, -2060,  1321, -2060,  6313, -2060,
   -2060, 12126, -2060,  2123,  2319, -2060,   995, -2060, -2060, -2060,
    2523,  2524,  2525, 12929,  2509, -2060,  2527, -2060, -2060, -2060,
   -2060,  2528,  2147,  1883,  1883,  2149,  1883,  1883,  2355,  2359,
    2152,  2536, -2060, -2060, -2060, -2060,  2297,  2543,  2544,  2536,
    2163,  2165,  2166, 10360, -2060,  2311,   345, -2060,  2113,  2113,
   -2060,  2113,  2113, -2060, -2060, -2060,   996,  2168,  1001,  2169,
    1004,  2170,  2329, -2060, 12929,  2383, -2060,  2172,  2173,  2174,
    2175, -2060,  2552,  2556,  2559,  2536,  2536, -2060,  2337,  2566,
    2062, -2060, -2060, -2060, -2060,   462, -2060,  2179,  2191,  1029,
    1031,   466,  2570,  1033, -2060, -2060,   -41,  2427,   331,   356,
   -2060,  2536, -2060, -2060,  2482,  2314, -2060,  2337, -2060, -2060,
     390, -2060, -2060, -2060,   398,   400,  1051,   466,   466,  2409,
   -2060, -2060, -2060, -2060, -2060, -2060,    -8, -2060, -2060, -2060,
      64, -2060,  2336, -2060, -2060, -2060, -2060,   466,    56,  2390,
    2396,  2403,  2404,  2589,  2590, -2060, -2060
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2060,  2493,   -96, -2060, -2060, -2060, -2060,  -912,  1394, -2060,
    1541, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,  1641,  2206,
   -2060,  -230,  -638,  1097, -2060, -1399, -2060,   781, -1282, -2060,
   -1673, -2060, -1071, -2060,   860, -1290, -2060, -2060, -1381, -2060,
   -2060,  2095,  -284,  -293,  2096,  -496, -2060, -2060,  -300, -2060,
   -2060,   618, -2060, -2060, -2060,  1316,  -791,   388,   -58, -2060,
   -2060, -2060,  2487,  1971, -2060,  1965, -2060, -1125, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,  2092, -2060,
    1790,  1544, -2060, -2060, -2060, -2060, -2060, -2060, -2060, -2060,
   -2060, -1234, -2060,  -918, -2060, -2060, -2060, -2060, -2060,   406,
     544,  2541,  2258, -2060,  1699, -2060,   719,  1987, -2060, -2060,
   -2060, -2060, -2060, -2060, -2060, -2060, -1134,  1235, -2060, -2060,
   -2060, -2060,   425, -2060, -2060, -2060, -2060,   755, -2060,   376,
   -2060,  1261,  1250, -1668, -1698, -2059, -1597, -1385, -2060, -1080,
     387,    79,   -39,  -858,  -420,  1770, -1153, -2060, -2060, -2060,
    2484, -2060,  -331, -2060,  1754,  1095, -1117, -2060, -2060, -2060,
   -2060,  2081, -2060, -2060, -2060, -2060, -2060,  2294, -2060, -2060,
   -1483, -2060
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -719
static const yytype_int16 yytable[] =
{
     288,  1292,  1520,  1345,   539,   526,  1387,   931,  1307,  1308,
     521,  1739,  1751,  1737,  1326,   365,   923,   624,  1365,   858,
    1112,  1113,  1196,  1747,  1198,  1069,  1118,  1067,  1120,  1380,
    1518,  1199,   914,   516,  1896,   128,    92,  1830,   828,   327,
     328,   329,   330,   331,   332,   490,  1408,  1189,  1084,   891,
     294,   891,   778,  2177,  2268,  1904,   517,   294,   613,   544,
    2299,  1189,  1904,   134,   779,   382,   383,  1173,   525,   914,
    1902,   614,   645,  1531,  1532,  -718,   388,   389,   390,  1174,
     527,   813,   392,  1045,   655,   566,  1748,  1846,   551,  1402,
    1525,   514,  1554,    53,   915,   327,   328,   329,   330,   331,
     332,   324,   814,  2293,  1085,   668,   669,   638,  1543,  1544,
    1545,  1546,   163,   307,   308,  1175,   311,   549,  1943,  1944,
     558,   553,    56,  1176,  1135,  1295,    54,   116,   556,  1954,
    1955,   915,   337,   309,  2116,  1265,   625,   354,   848,   136,
    2220,  1831,   139,   491,   492,   493,   494,   495,   496,   497,
     659,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   129,   513,   642,  1059,
     642,  1086,   644,  1177,  1547,  2295,  2249,  2250,   914,  1905,
    2148,   385,   386,  2294,   130,  1072,   626,   554,  1791,  1792,
      87,   489,   547,   895,  1296,   338,   550,  1802,  1803,   559,
     555,  1524,  2276,   615,  1906,   548,   131,   117,  2149,   545,
    1847,  1906,   295,    88,   135,   815,   639,   355,   296,   295,
     164,  2178,  1178,   807,   312,   296,  2269,   333,   528,  1533,
     656,  1087,  1570,   132,   552,  1907,  1190,   780,  2300,   818,
     915,  1727,  1907,  1580,  1741,    55,   924,   925,   616,   567,
    1425,  1403,  1581,    93,   325,  2296,   670,  1721,  2048,  2049,
    2050,  2051,  2052,  2053,  1386,  -718,   916,   366,  1046,   310,
    1848,  1282,  2061,  1744,   557,  2117,  2065,  1426,   118,  1427,
    2069,  1924,   528,   333,  1071,   518,    16,   627,   356,   859,
     137,   665,  1187,   140,   366,   666,   656,  1728,   373,  1841,
     917,   918,   676,   680,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   141,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   701,   702,   703,   704,   705,   706,  2110,
     708,   709,   710,  1077,   712,   713,   714,   715,   716,   717,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   930,  1897,  1898,   144,  1499,   735,   736,  1908,  1749,
    2111,   740,   741,   781,  1729,  1908,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,  1070,   768,
     769,   770,  1747,  1519,   901,   773,   774,   775,   776,   777,
    1452,  1142,  1453,   787,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,  1964,  1088,
    1089,   334,   288,    89,  1730,   520,   297,   939,   819,  1094,
     942,   298,   146,   297,   374,  1548,  1549,  1550,   298,  1820,
    1856,   568,   569,   570,   571,   953,  1136,  1137,  1138,  1139,
     148,  1867,  1861,  1868,  1965,  1748,   946,   947,  1372,   345,
     631,  2274,  2118,   100,   142,  2182,  2271,  -355,   860,  2185,
    2283,  1153,  2287,    57,  1367,   642,  1129,  1130,  1131,  1561,
    2256,  1563,  1564,  1381,  2264,   490,  2281,  1872,  1551,  1723,
     316,   890,   122,    16,  1173,  1333,   125,    90,  1873,  1931,
    1932,  1933,  1934,  1935,  1936,   145,  1174,   891,  -317,  2029,
      73,  1945,  1310,  2041,   902,  1949,  1334,   825,  1874,  1953,
    1058,  1143,    85,   938,   861,  1373,  2119,   317,  1062,  2272,
    1968,   514,  1875,  1100,  1101,  2227,  2228,  2282,  2229,  2230,
    1312,  1876,  1175,  1313,  2035,  1314,   927,    16,  1315,   892,
    1176,   358,   318,   101,   537,   826,   314,  2257,    91,  2036,
     319,  2257,    98,  1316,  2273,  1966,    86,  1226,  1227,  1755,
    1317,  1318,   320,   948,   949,  1374,   315,   941,   951,  1293,
      97,  1877,  1299,   147,   893,   958,   361,  1066,  2284,  -355,
    2288,  1154,  1756,  1883,  1368,  1146,    58,   103,   560,  1888,
    1177,   149,   102,  1382,  1147,  1319,  2285,   670,  2289,  1724,
     346,   632,  2275,   491,   492,   493,   494,   495,   496,   497,
    1171,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,  2286,   513,  2290,   321,
    2251,   161,  1511,  2258,  1391,  1556,  1568,  2258,   349,  1178,
     573,   574,   162,  1392,  1557,  1569,  1321,  2259,  1997,  1375,
     322,  2259,  1160,  1910,   561,  2277,  2278,  1998,   350,  1161,
    1309,  1410,   879,  1411,   105,  2147,  1376,   562,   884,    59,
     886,  -486,    75,   106,  1179,  1322,    60,  1049,  1050,   109,
    1052,   821,   528,  1323,  2297,   489,   491,   492,   493,   494,
     495,   496,   497,   107,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   108,
     513,   323,    61,    62,  -486,  1162,    76,   150,   150,  1163,
     110,  -490,  -486,   921,   922,   111,  2180,  2025,  1999,    63,
    1079,  1080,    77,  2002,  2007,   113,  1164,   114,  -487,   511,
     512,   115,   513,  1324,  -486,  1165,  1149,  1150,  1346,  2019,
     119,  2020,  1347,  1192,  1193,  1331,  1332,  1280,  1288,  2190,
     151,   151,  1335,  1336,  -490,   120,  1337,  1338,   152,   292,
    2138,   121,  -490,   153,  2142,   138,    64,  2152,   124,    78,
     126,  -487,  1166,  1180,   510,   511,   512,  1127,   513,  -487,
     154,   293,   123,    65,  -490,    66,    79,  2226,    80,   143,
    1348,    67,   156,  1349,    81,   158,   783,   784,  1266,   785,
     954,  -487,   786,  1339,  1338,  1362,  1363,  1277,  1350,   157,
      68,    69,  1105,  1106,   159,  1109,  1110,  1111,   165,    82,
     291,  1114,  1115,  1116,   305,    70,  1119,   339,  1351,  1200,
     340,  1201,  1167,  1397,  1398,   343,  1352,   341,  1208,  1209,
     342,  1210,  1473,  1474,   344,  1215,  1476,  1477,  1567,  1363,
    1577,  1363,  1216,  1217,  1218,  1219,   348,  1220,  1221,  1222,
     347,  2092,  1719,  1363,  1223,  1224,   352,  1225,  1745,  1409,
     353,  1760,  1761,  1228,  1229,  1230,  2107,  2102,  2077,  1795,
    1796,  2208,  2209,   357,  2211,  2212,   359,  1238,  1239,  1240,
     361,  1241,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,  1252,   513,  1799,  1800,  1839,  1840,  1862,  1363,
     363,  1253,  1254,  1255,  1256,  1257,  1258,  1259,  1260,   367,
    1261,  1400,  1870,  1363,  1262,  1353,  1263,  1354,  1264,  1885,
    1363,   368,  1890,  1398,   369,    71,   370,  1270,    83,  1272,
    1272,  1899,  1900,  1901,  1900,   371,  1355,   868,   869,   870,
     871,   378,   872,  1289,  2158,   874,   875,   876,   372,  1743,
    1294,   376,   880,   881,   882,  1903,  1840,   885,   979,   980,
     491,   492,   493,   494,   495,   496,   497,   379,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   381,   513,    92,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
    1344,   513,   377,  1911,  1409,  1970,  1971,   380,  1500,  1972,
    1971,  1502,   394,  1503,   387,  1505,   395,   491,   492,   493,
     494,   495,   496,   497,   396,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     519,   513,   955,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   542,   513,   397,  1414,
    1973,  1971,  1418,  1976,  1900,  1979,  1980,   398,  1423,   399,
     506,   507,   508,   509,   510,   511,   512,  1429,   513,   951,
    1981,  1982,  1984,  1985,   400,  1437,  1438,  1987,  1988,  2005,
    1363,  2006,  1363,   401,   491,   492,   493,   494,   495,   496,
     497,   402,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   403,   513,   492,
     493,   494,   495,   496,   497,   404,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   405,   513,  1501,   491,   492,   493,   494,   495,   496,
     497,   406,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   407,   513,  1521,
    2018,  1363,  2022,  1363,  2030,  1980,   408,  1526,  2031,  1900,
    2032,  1900,   491,   492,   493,   494,   495,   496,   497,   409,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   410,   513,  2034,  1982,  2086,
    2087,  2096,  1363,   411,   491,   492,   493,   494,   495,   496,
     497,   412,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   413,   513,   414,
     491,   492,   493,   494,   495,   496,   497,   415,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,  1731,   513,   416,   529,  2105,  1363,   491,
     492,   493,   494,   495,   496,   497,   417,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   418,   513,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,  1766,   513,   419,  1767,
    2106,  1363,   420,  1753,  2112,  1840,  2123,  1761,  1778,  1779,
     421,   504,   505,   506,   507,   508,   509,   510,   511,   512,
    1780,   513,  2162,  1363,   523,  1011,  1012,  2164,  1980,  1787,
    1788,  2165,  1982,   530,  2175,  2176,  2192,  2193,  2198,  2199,
     537,  2231,  2232,  -323,  2234,  2235,  1804,  1805,  1806,  2237,
    2232,  1807,  1808,   422,  1809,   423,  1810,   531,  1811,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     532,   513,  1817,  1819,  2262,  2232,  2263,  2232,  2266,  2267,
     424,  1827,  1828,   943,   425,  1582,  1583,  1584,  1585,  1586,
    1587,   426,  1588,   427,  1589,   533,  2291,  2232,  1590,  1591,
    1592,  1843,  1593,  1073,  1074,  1849,  1594,  1595,  1596,  1597,
    1598,   428,  1285,  1286,   429,  1853,  1824,  1825,   534,   430,
    1599,   431,   432,   433,   434,   435,   436,   437,   438,  1859,
    1600,  1601,   439,   440,  1602,   441,   442,   443,   444,  1603,
    1604,  1605,  1606,  1607,   445,   446,  1608,   447,  1609,  1610,
    1611,   448,   449,  1612,  1613,   450,  1614,  1615,  1616,  1013,
    1014,   451,  1617,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,  1618,   465,   466,   467,
     468,  1619,   540,   469,   470,   471,  1620,  1621,  1622,   472,
     473,   474,   475,  1623,  1624,   476,  1625,  1626,  1627,  1628,
     477,   478,  1629,   479,  1630,  1631,  1632,  1633,   541,  1634,
    1754,  1635,  1636,   480,  1637,   481,  1638,  1639,   482,  1640,
    1641,  1642,  1643,   483,   484,   485,   486,   487,  1644,   488,
    1645,   522,  1646,  1647,   524,  1648,  1649,  1650,  1651,  1652,
    1653,   543,  1654,  1655,  1656,  1657,  1658,  1035,  1036,   563,
     564,   565,   575,   576,   612,   620,   621,  1659,   622,  1660,
     623,  1661,   629,   630,   633,   635,   636,   641,   646,   647,
    1662,   648,  1663,  1664,  1665,  1666,  1667,  1668,  1669,  1041,
    1042,  1670,  1671,   649,   650,   651,   652,  1672,   653,  1673,
    1674,  1675,   654,  1676,   658,  1677,   661,  1678,  1679,  1680,
    1681,   513,   671,   672,   673,  1434,  1435,   691,   707,   711,
     730,   731,   732,   733,   734,   737,   738,  1914,  1915,  1682,
    1683,  1684,   739,  1919,   742,  1921,   743,   744,   767,  1685,
     771,  1686,  1687,  1688,  1464,  1465,   782,   806,  1689,   808,
    1690,  1691,  1692,   810,   812,   820,  1693,   822,   829,   830,
    1694,  1695,   832,   833,  1696,  1697,  1698,  1699,   834,   311,
     836,  1700,   491,   492,   493,   494,   495,   496,   497,   837,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   838,   513,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   849,   850,   851,   852,
     856,   853,  1701,  1702,  1703,  1704,  1705,   491,   492,   493,
     494,   495,   496,   497,   854,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     855,   513,   864,   857,   862,   865,   866,   873,   877,   883,
     887,   888,   889,   894,  2016,   896,   897,   898,   899,   903,
     900,   904,   906,   905,   908,  2026,   907,   910,   912,   911,
     913,   934,   936,   944,  1706,  1707,  1708,  1709,  1710,   928,
    1711,   950,    16,   994,  1008,  1009,  1010,  1015,  1016,   491,
     492,   493,   494,   495,   496,   497,  1423,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,  2054,   513,   493,   494,   495,   496,   497,  1017,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,  2072,   513,   -71,  1051,  1054,
    2074,  1055,  1056,  1060,  1063,  1061,  1064,  1065,  1075,  2080,
    1076,  1078,  1082,  1582,  1583,  1584,  1585,  1586,  1587,  1083,
    1588,  1090,  1589,  2089,  2090,  1091,  1590,  1591,  1592,  1092,
    1593,   891,  1095,  1098,  1594,  1595,  1596,  1597,  1598,  1096,
    1097,  1099,  1102,  1107,  1124,  1121,  1122,  1123,  1599,  1125,
    1126,  1128,  1132,  1134,  1145,  1148,  1155,  1151,  1600,  1601,
    1156,  1158,  1602,  1159,  1172,  1144,  1157,  1603,  1604,  1605,
    1606,  1607,  1184,  1185,  1608,  1188,  1609,  1610,  1611,  1194,
    1189,  1612,  1613,  1204,  1614,  1615,  1616,  1206,  1231,  1207,
    1617,  1212,  1232,  1233,  1234,  1235,  1236,  1237,  1242,  1243,
    1244,  1246,  1245,  1248,  1618,  1247,  1278,  1250,  1249,  1619,
    1251,   -73,  1281,  1283,  1620,  1621,  1622,  1290,  1291,  1300,
    1304,  1623,  1624,  1303,  1625,  1626,  1627,  1628,  1305,  1327,
    1629,  1328,  1871,  1631,  1632,  1633,  1366,  1634,  2161,  1635,
    1636,  1287,  1637,  1343,  1638,  1639,  1306,  1640,  1641,  1642,
    1643,  1329,  1330,  1340,  1364,  2173,  1644,  1341,  1645,  1342,
    1646,  1647,  1357,  1648,  1649,  1650,  1651,  1652,  1653,  1358,
    1654,  1655,  1656,  1657,  1658,  1359,  1360,  1361,  1369,  1377,
    1383,  1371,  1384,  1379,  1385,  1659,  1388,  1660,  1390,  1661,
    1399,  1389,  1393,  1395,  1401,  1404,  1394,  1396,  1662,  1405,
    1663,  1664,  1665,  1666,  1667,  1668,  1669,  1489,  1490,  1670,
    1671,  1406,  1407,  1409,  1415,  1672,  1419,  1673,  1674,  1675,
    1420,  1676,  1421,  1677,  1430,  1678,  1679,  1680,  1681,  1508,
    1512,  1509,  1516,  1439,  1440,  1517,  1457,  2224,  1529,  1534,
    1535,  1539,  1540,  1552,  1542,  1553,  1555,  1682,  1683,  1684,
    1524,  1558,  1491,  1492,  1559,  1560,  1562,  1685,  1458,  1686,
    1687,  1688,  1459,  1571,  1460,  1461,  1689,  1497,  1690,  1691,
    1692,  1462,  1572,  1463,  1693,  1472,  1475,  1478,  1694,  1695,
    1498,  1573,  1696,  1697,  1698,  1699,  1504,  1506,  1507,  1700,
     491,   492,   493,   494,   495,   496,   497,  1574,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,  1575,   513,  1513,  1579,  1514,  1515,  1522,
    1713,  1527,  1528,  1714,  1493,  1494,  1536,  1537,  1538,  1541,
    1701,  1702,  1703,  1704,  1705,  1565,  1576,  1578,  1716,  1718,
    1722,  1720,  1735,  1725,  1732,  1733,  1758,  1734,  1738,  1759,
    1763,  1752,  1765,  1794,  1582,  1583,  1584,  1585,  1586,  1587,
    1798,  1588,  1789,  1589,  1812,  1813,  1814,  1590,  1591,  1592,
    1822,  1593,  1815,  1816,  1826,  1594,  1595,  1596,  1597,  1598,
    1829,  1832,  1845,  1835,  1833,  1837,  1842,  1850,  1844,  1599,
    1851,  1852,  1706,  1707,  1708,  1709,  1710,  1858,  1711,  1600,
    1601,  1855,  1857,  1602,  1860,  1863,  1864,  1865,  1603,  1604,
    1605,  1606,  1607,  1866,  1869,  1608,  1878,  1609,  1610,  1611,
    1879,  1881,  1612,  1613,  1887,  1614,  1615,  1616,  1880,  1884,
    1886,  1617,  1889,  1891,  1892,  1893,  1912,  1940,  1923,  1941,
    1894,  1974,  1975,  1922,  1916,  1618,  1977,  1925,  1946,  1950,
    1619,  1947,  1978,  1948,  1983,  1620,  1621,  1622,  1951,  1991,
    2004,  1952,  1623,  1624,  1989,  1625,  1626,  1627,  1628,  2014,
    1990,  1629,  1993,  2000,  1631,  1632,  1633,  1994,  1634,  1995,
    1635,  1636,  2015,  1637,  2017,  1638,  1639,  2021,  1640,  1641,
    1642,  1643,  2023,  2033,  2027,  2028,  2037,  1644,  2038,  1645,
    2039,  1646,  1647,  2040,  1648,  1649,  1650,  1651,  1652,  1653,
    2042,  1654,  1655,  1656,  1657,  1658,  2043,  2055,  2046,  2057,
    2058,  2059,  2060,  2063,  2064,  2067,  1659,  2070,  1660,  2071,
    1661,  2073,  2068,  2075,  2078,  2079,  2082,  2081,  2083,  1662,
    2084,  1663,  1664,  1665,  1666,  1667,  1668,  1669,  2085,  2088,
    1670,  1671,  2091,  2097,  2095,  2098,  1672,  2099,  1673,  1674,
    1675,  2100,  1676,  2101,  1677,  2113,  1678,  1679,  1680,  1681,
    2104,  2114,  2108,  2115,  2120,  2121,  2124,  2135,  2122,  2125,
    2134,  2127,  2128,  2129,  2130,  2131,  2150,  2132,  1682,  1683,
    1684,  2137,  2139,  2140,  2153,  2141,  2143,  2144,  1685,  2145,
    1686,  1687,  1688,  2154,  2163,  2155,  2166,  1689,  2167,  1690,
    1691,  1692,  2168,  2169,  2170,  1693,  2171,  2172,  2174,  1694,
    1695,  2179,  2181,  1696,  1697,  1698,  1699,  2188,  2189,  2191,
    1700,   491,   492,   493,   494,   495,   496,   497,  2196,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,  2197,   513,  2200,  2201,  2202,  2203,
    2204,  2206,  2207,  2213,  2210,  1937,  1938,  2214,  1900,  2215,
    2217,  1701,  1702,  1703,  1704,  1705,  2218,  2219,  2221,  2225,
    2222,  2223,  2233,  2236,  2238,  2246,  2239,  2241,  2242,  2243,
    2244,  2247,  2248,  2252,  2260,  1582,  1583,  1584,  1585,  1586,
    1587,  2255,  1588,  2265,  1589,  2261,  2270,  2268,  1590,  1591,
    1592,  2292,  1593,  2279,  2298,  2301,  1594,  1595,  1596,  1597,
    1598,  2302,  2303,  2304,  2305,  2306,   306,  1276,   667,  1431,
    1599,  1214,  1969,  1706,  1707,  1708,  1709,  1710,  1821,  1711,
    1600,  1601,  1913,   809,  1602,  1523,   364,   932,   933,  1603,
    1604,  1605,  1606,  1607,   824,  1081,  1608,  1302,  1609,  1610,
    1611,  2240,   160,  1612,  1613,   835,  1614,  1615,  1616,   660,
    1197,  2045,  1617,  2280,  1746,  2024,   940,  1726,  1742,   384,
    1854,   634,     0,  1117,  1133,   863,  1618,     0,     0,     0,
       0,  1619,     0,     0,     0,     0,  1620,  1621,  1622,     0,
       0,     0,     0,  1623,  1624,     0,  1625,  1626,  1627,  1628,
       0,     0,  1629,     0,  2003,  1631,  1632,  1633,     0,  1634,
       0,  1635,  1636,     0,  1637,     0,  1638,  1639,     0,  1640,
    1641,  1642,  1643,     0,     0,     0,     0,     0,  1644,     0,
    1645,     0,  1646,  1647,     0,  1648,  1649,  1650,  1651,  1652,
    1653,     0,  1654,  1655,  1656,  1657,  1658,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1659,     0,  1660,
       0,  1661,     0,     0,     0,     0,     0,     0,     0,     0,
    1662,     0,  1663,  1664,  1665,  1666,  1667,  1668,  1669,     0,
       0,  1670,  1671,     0,     0,     0,     0,  1672,     0,  1673,
    1674,  1675,     0,  1676,     0,  1677,     0,  1678,  1679,  1680,
    1681,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1682,
    1683,  1684,     0,     0,     0,     0,     0,     0,     0,  1685,
       0,  1686,  1687,  1688,     0,     0,     0,     0,  1689,     0,
    1690,  1691,  1692,     0,     0,     0,  1693,     0,     0,     0,
    1694,  1695,     0,     0,  1696,  1697,  1698,  1699,     0,     0,
       0,  1700,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   959,     0,     0,
       0,     0,  1701,  1702,  1703,  1704,  1705,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1582,  1583,  1584,  1585,
    1586,  1587,     0,  1588,     0,  1589,     0,     0,     0,  1590,
    1591,  1592,     0,  1593,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1599,     0,     0,  1706,  1707,  1708,  1709,  1710,     0,
    1711,  1600,  1601,     0,     0,  1602,     0,     0,     0,     0,
    1603,  1604,  1605,  1606,  1607,     0,     0,  1608,     0,  1609,
    1610,  1611,     0,     0,  1612,  1613,     0,  1614,  1615,  1616,
       0,     0,     0,  1617,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1618,     0,     0,
       0,     0,  1619,     0,     0,     0,     0,  1620,  1621,  1622,
       0,     0,     0,     0,  1623,  1624,     0,  1625,  1626,  1627,
    1628,     0,     0,  1629,     0,  2008,  1631,  1632,  1633,     0,
    1634,     0,  1635,  1636,     0,  1637,     0,  1638,  1639,     0,
    1640,  1641,  1642,  1643,     0,     0,     0,     0,     0,  1644,
       0,  1645,     0,  1646,  1647,     0,  1648,  1649,  1650,  1651,
    1652,  1653,     0,  1654,  1655,  1656,  1657,  1658,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1659,     0,
    1660,     0,  1661,     0,     0,     0,     0,     0,     0,     0,
       0,  1662,     0,  1663,  1664,  1665,  1666,  1667,  1668,  1669,
       0,     0,  1670,  1671,     0,     0,     0,     0,  1672,     0,
    1673,  1674,  1675,     0,  1676,     0,  1677,     0,  1678,  1679,
    1680,  1681,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1682,  1683,  1684,     0,     0,     0,     0,     0,     0,     0,
    1685,     0,  1686,  1687,  1688,     0,     0,     0,     0,  1689,
       0,  1690,  1691,  1692,     0,     0,     0,  1693,     0,     0,
       0,  1694,  1695,     0,     0,  1696,  1697,  1698,  1699,     0,
       0,     0,  1700,   491,   492,   493,   494,   495,   496,   497,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   960,     0,
       0,     0,     0,  1701,  1702,  1703,  1704,  1705,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1582,  1583,  1584,
    1585,  1586,  1587,     0,  1588,     0,  1589,     0,     0,     0,
    1590,  1591,  1592,     0,  1593,     0,     0,     0,  1594,  1595,
    1596,  1597,  1598,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1599,     0,     0,  1706,  1707,  1708,  1709,  1710,
       0,  1711,  1600,  1601,     0,     0,  1602,     0,     0,     0,
       0,  1603,  1604,  1605,  1606,  1607,     0,     0,  1608,     0,
    1609,  1610,  1611,     0,     0,  1612,  1613,     0,  1614,  1615,
    1616,     0,     0,     0,  1617,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1618,     0,
       0,     0,     0,  1619,     0,     0,     0,     0,  1620,  1621,
    1622,     0,     0,     0,     0,  1623,  1624,     0,  1625,  1626,
    1627,  1628,     0,     0,  1629,     0,  2009,  1631,  1632,  1633,
       0,  1634,     0,  1635,  1636,     0,  1637,     0,  1638,  1639,
       0,  1640,  1641,  1642,  1643,     0,     0,     0,     0,     0,
    1644,     0,  1645,     0,  1646,  1647,     0,  1648,  1649,  1650,
    1651,  1652,  1653,     0,  1654,  1655,  1656,  1657,  1658,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1659,
       0,  1660,     0,  1661,     0,     0,     0,     0,     0,     0,
       0,     0,  1662,     0,  1663,  1664,  1665,  1666,  1667,  1668,
    1669,     0,     0,  1670,  1671,     0,     0,     0,     0,  1672,
       0,  1673,  1674,  1675,     0,  1676,     0,  1677,     0,  1678,
    1679,  1680,  1681,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1682,  1683,  1684,     0,     0,     0,     0,     0,     0,
       0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,     0,
    1689,     0,  1690,  1691,  1692,     0,     0,     0,  1693,     0,
       0,     0,  1694,  1695,     0,     0,  1696,  1697,  1698,  1699,
       0,     0,     0,  1700,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   961,
       0,     0,     0,     0,  1701,  1702,  1703,  1704,  1705,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1582,  1583,
    1584,  1585,  1586,  1587,     0,  1588,     0,  1589,     0,     0,
       0,  1590,  1591,  1592,     0,  1593,     0,     0,     0,  1594,
    1595,  1596,  1597,  1598,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1599,     0,     0,  1706,  1707,  1708,  1709,
    1710,     0,  1711,  1600,  1601,     0,     0,  1602,     0,     0,
       0,     0,  1603,  1604,  1605,  1606,  1607,     0,     0,  1608,
       0,  1609,  1610,  1611,     0,     0,  1612,  1613,     0,  1614,
    1615,  1616,     0,     0,     0,  1617,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1618,
       0,     0,     0,     0,  1619,     0,     0,     0,     0,  1620,
    1621,  1622,     0,     0,     0,     0,  1623,  1624,     0,  1625,
    1626,  1627,  1628,     0,     0,  1629,     0,  2010,  1631,  1632,
    1633,     0,  1634,     0,  1635,  1636,     0,  1637,     0,  1638,
    1639,     0,  1640,  1641,  1642,  1643,     0,     0,     0,     0,
       0,  1644,     0,  1645,     0,  1646,  1647,     0,  1648,  1649,
    1650,  1651,  1652,  1653,     0,  1654,  1655,  1656,  1657,  1658,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1659,     0,  1660,     0,  1661,     0,     0,     0,     0,     0,
       0,     0,     0,  1662,     0,  1663,  1664,  1665,  1666,  1667,
    1668,  1669,     0,     0,  1670,  1671,     0,     0,     0,     0,
    1672,     0,  1673,  1674,  1675,     0,  1676,     0,  1677,     0,
    1678,  1679,  1680,  1681,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1682,  1683,  1684,     0,     0,     0,     0,     0,
       0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,     0,
       0,  1689,     0,  1690,  1691,  1692,     0,     0,     0,  1693,
       0,     0,     0,  1694,  1695,     0,     0,  1696,  1697,  1698,
    1699,     0,     0,     0,  1700,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     968,     0,     0,     0,     0,  1701,  1702,  1703,  1704,  1705,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1582,
    1583,  1584,  1585,  1586,  1587,     0,  1588,     0,  1589,     0,
       0,     0,  1590,  1591,  1592,     0,  1593,     0,     0,     0,
    1594,  1595,  1596,  1597,  1598,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1599,     0,     0,  1706,  1707,  1708,
    1709,  1710,     0,  1711,  1600,  1601,     0,     0,  1602,     0,
       0,     0,     0,  1603,  1604,  1605,  1606,  1607,     0,     0,
    1608,     0,  1609,  1610,  1611,     0,     0,  1612,  1613,     0,
    1614,  1615,  1616,     0,     0,     0,  1617,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1618,     0,     0,     0,     0,  1619,     0,     0,     0,     0,
    1620,  1621,  1622,     0,     0,     0,     0,  1623,  1624,     0,
    1625,  1626,  1627,  1628,     0,     0,  1629,     0,  2011,  1631,
    1632,  1633,     0,  1634,     0,  1635,  1636,     0,  1637,     0,
    1638,  1639,     0,  1640,  1641,  1642,  1643,     0,     0,     0,
       0,     0,  1644,     0,  1645,     0,  1646,  1647,     0,  1648,
    1649,  1650,  1651,  1652,  1653,     0,  1654,  1655,  1656,  1657,
    1658,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1659,     0,  1660,     0,  1661,     0,     0,     0,     0,
       0,     0,     0,     0,  1662,     0,  1663,  1664,  1665,  1666,
    1667,  1668,  1669,     0,     0,  1670,  1671,     0,     0,     0,
       0,  1672,     0,  1673,  1674,  1675,     0,  1676,     0,  1677,
       0,  1678,  1679,  1680,  1681,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1682,  1683,  1684,     0,     0,     0,     0,
       0,     0,     0,  1685,     0,  1686,  1687,  1688,     0,     0,
       0,     0,  1689,     0,  1690,  1691,  1692,     0,     0,     0,
    1693,     0,     0,     0,  1694,  1695,     0,     0,  1696,  1697,
    1698,  1699,     0,     0,     0,  1700,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   969,     0,     0,     0,     0,  1701,  1702,  1703,  1704,
    1705,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1582,  1583,  1584,  1585,  1586,  1587,     0,  1588,     0,  1589,
       0,     0,     0,  1590,  1591,  1592,     0,  1593,     0,     0,
       0,  1594,  1595,  1596,  1597,  1598,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1599,     0,     0,  1706,  1707,
    1708,  1709,  1710,     0,  1711,  1600,  1601,     0,     0,  1602,
       0,     0,     0,     0,  1603,  1604,  1605,  1606,  1607,     0,
       0,  1608,     0,  1609,  1610,  1611,     0,     0,  1612,  1613,
       0,  1614,  1615,  1616,     0,     0,     0,  1617,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1618,     0,     0,     0,     0,  1619,     0,     0,     0,
       0,  1620,  1621,  1622,     0,     0,     0,     0,  1623,  1624,
       0,  1625,  1626,  1627,  1628,     0,     0,  1629,     0,  2012,
    1631,  1632,  1633,     0,  1634,     0,  1635,  1636,     0,  1637,
       0,  1638,  1639,     0,  1640,  1641,  1642,  1643,     0,     0,
       0,     0,     0,  1644,     0,  1645,     0,  1646,  1647,     0,
    1648,  1649,  1650,  1651,  1652,  1653,     0,  1654,  1655,  1656,
    1657,  1658,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1659,     0,  1660,     0,  1661,     0,     0,     0,
       0,     0,     0,     0,     0,  1662,     0,  1663,  1664,  1665,
    1666,  1667,  1668,  1669,     0,     0,  1670,  1671,     0,     0,
       0,     0,  1672,     0,  1673,  1674,  1675,     0,  1676,     0,
    1677,     0,  1678,  1679,  1680,  1681,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1682,  1683,  1684,     0,     0,     0,
       0,     0,     0,     0,  1685,     0,  1686,  1687,  1688,     0,
       0,     0,     0,  1689,     0,  1690,  1691,  1692,     0,     0,
       0,  1693,     0,     0,     0,  1694,  1695,     0,     0,  1696,
    1697,  1698,  1699,     0,     0,     0,  1700,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   970,     0,     0,     0,     0,  1701,  1702,  1703,
    1704,  1705,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1582,  1583,  1584,  1585,  1586,  1587,     0,  1588,     0,
    1589,     0,     0,     0,  1590,  1591,  1592,     0,  1593,     0,
       0,     0,  1594,  1595,  1596,  1597,  1598,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1599,     0,     0,  1706,
    1707,  1708,  1709,  1710,     0,  1711,  1600,  1601,     0,     0,
    1602,     0,     0,     0,     0,  1603,  1604,  1605,  1606,  1607,
       0,     0,  1608,     0,  1609,  1610,  1611,     0,     0,  1612,
    1613,     0,  1614,  1615,  1616,     0,     0,     0,  1617,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1618,     0,     0,     0,     0,  1619,     0,     0,
       0,     0,  1620,  1621,  1622,     0,     0,     0,     0,  1623,
    1624,     0,  1625,  1626,  1627,  1628,     0,     0,  1629,     0,
    2013,  1631,  1632,  1633,     0,  1634,     0,  1635,  1636,     0,
    1637,     0,  1638,  1639,     0,  1640,  1641,  1642,  1643,     0,
       0,     0,     0,     0,  1644,     0,  1645,     0,  1646,  1647,
       0,  1648,  1649,  1650,  1651,  1652,  1653,     0,  1654,  1655,
    1656,  1657,  1658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1659,     0,  1660,     0,  1661,     0,     0,
       0,     0,     0,     0,     0,     0,  1662,     0,  1663,  1664,
    1665,  1666,  1667,  1668,  1669,     0,     0,  1670,  1671,     0,
       0,     0,     0,  1672,     0,  1673,  1674,  1675,     0,  1676,
       0,  1677,     0,  1678,  1679,  1680,  1681,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1682,  1683,  1684,     0,     0,
       0,     0,     0,     0,     0,  1685,     0,  1686,  1687,  1688,
       0,     0,     0,     0,  1689,     0,  1690,  1691,  1692,     0,
       0,     0,  1693,     0,     0,     0,  1694,  1695,     0,     0,
    1696,  1697,  1698,  1699,     0,     0,     0,  1700,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   971,     0,     0,     0,     0,  1701,  1702,
    1703,  1704,  1705,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1582,  1583,  1584,  1585,  1586,  1587,     0,  1588,
       0,  1589,     0,     0,     0,  1590,  1591,  1592,     0,  1593,
       0,     0,     0,  1594,  1595,  1596,  1597,  1598,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1599,     0,     0,
    1706,  1707,  1708,  1709,  1710,     0,  1711,  1600,  1601,     0,
       0,  1602,     0,     0,     0,     0,  1603,  1604,  1605,  1606,
    1607,     0,     0,  1608,     0,  1609,  1610,  1611,     0,     0,
    1612,  1613,     0,  1614,  1615,  1616,     0,     0,     0,  1617,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1618,     0,     0,     0,     0,  1619,     0,
       0,     0,     0,  1620,  1621,  1622,     0,     0,     0,     0,
    1623,  1624,     0,  1625,  1626,  1627,  1628,     0,     0,  1629,
       0,  2093,  1631,  1632,  1633,     0,  1634,     0,  1635,  1636,
       0,  1637,     0,  1638,  1639,     0,  1640,  1641,  1642,  1643,
       0,     0,     0,     0,     0,  1644,     0,  1645,     0,  1646,
    1647,     0,  1648,  1649,  1650,  1651,  1652,  1653,     0,  1654,
    1655,  1656,  1657,  1658,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1659,     0,  1660,     0,  1661,     0,
       0,     0,     0,     0,     0,     0,     0,  1662,     0,  1663,
    1664,  1665,  1666,  1667,  1668,  1669,     0,     0,  1670,  1671,
       0,     0,     0,     0,  1672,     0,  1673,  1674,  1675,     0,
    1676,     0,  1677,     0,  1678,  1679,  1680,  1681,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1682,  1683,  1684,     0,
       0,     0,     0,     0,     0,     0,  1685,     0,  1686,  1687,
    1688,     0,     0,     0,     0,  1689,     0,  1690,  1691,  1692,
       0,     0,     0,  1693,     0,     0,     0,  1694,  1695,     0,
       0,  1696,  1697,  1698,  1699,     0,     0,     0,  1700,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   973,     0,     0,     0,     0,  1701,
    1702,  1703,  1704,  1705,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1582,  1583,  1584,  1585,  1586,  1587,     0,
    1588,     0,  1589,     0,     0,     0,  1590,  1591,  1592,     0,
    1593,     0,     0,     0,  1594,  1595,  1596,  1597,  1598,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1599,     0,
       0,  1706,  1707,  1708,  1709,  1710,     0,  1711,  1600,  1601,
       0,     0,  1602,     0,     0,     0,     0,  1603,  1604,  1605,
    1606,  1607,     0,     0,  1608,     0,  1609,  1610,  1611,     0,
       0,  1612,  1613,     0,  1614,  1615,  1616,     0,     0,     0,
    1617,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1618,     0,     0,     0,     0,  1619,
       0,     0,     0,     0,  1620,  1621,  1622,     0,     0,     0,
       0,  1623,  1624,     0,  1625,  1626,  1627,  1628,     0,     0,
    1629,     0,  2094,  1631,  1632,  1633,     0,  1634,     0,  1635,
    1636,     0,  1637,     0,  1638,  1639,     0,  1640,  1641,  1642,
    1643,     0,     0,     0,     0,     0,  1644,     0,  1645,     0,
    1646,  1647,     0,  1648,  1649,  1650,  1651,  1652,  1653,     0,
    1654,  1655,  1656,  1657,  1658,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1659,     0,  1660,     0,  1661,
       0,     0,     0,     0,     0,     0,     0,     0,  1662,     0,
    1663,  1664,  1665,  1666,  1667,  1668,  1669,     0,     0,  1670,
    1671,     0,     0,     0,     0,  1672,     0,  1673,  1674,  1675,
       0,  1676,     0,  1677,     0,  1678,  1679,  1680,  1681,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1682,  1683,  1684,
       0,     0,     0,     0,     0,     0,     0,  1685,     0,  1686,
    1687,  1688,     0,     0,     0,     0,  1689,     0,  1690,  1691,
    1692,     0,     0,     0,  1693,     0,     0,     0,  1694,  1695,
       0,     0,  1696,  1697,  1698,  1699,     0,     0,     0,  1700,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   974,     0,     0,     0,     0,
    1701,  1702,  1703,  1704,  1705,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1582,  1583,  1584,  1585,  1586,  1587,
       0,  1588,     0,  1589,     0,     0,     0,  1590,  1591,  1592,
       0,  1593,     0,     0,     0,  1594,  1595,  1596,  1597,  1598,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1599,
       0,     0,  1706,  1707,  1708,  1709,  1710,     0,  1711,  1600,
    1601,     0,     0,  1602,     0,     0,     0,     0,  1603,  1604,
    1605,  1606,  1607,     0,     0,  1608,     0,  1609,  1610,  1611,
       0,     0,  1612,  1613,     0,  1614,  1615,  1616,     0,     0,
       0,  1617,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1618,     0,     0,     0,     0,
    1619,     0,     0,     0,     0,  1620,  1621,  1622,     0,     0,
       0,     0,  1623,  1624,     0,  1625,  1626,  1627,  1628,     0,
       0,  1629,     0,  2159,  1631,  1632,  1633,     0,  1634,     0,
    1635,  1636,     0,  1637,     0,  1638,  1639,     0,  1640,  1641,
    1642,  1643,     0,     0,     0,     0,     0,  1644,     0,  1645,
       0,  1646,  1647,     0,  1648,  1649,  1650,  1651,  1652,  1653,
       0,  1654,  1655,  1656,  1657,  1658,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1659,     0,  1660,     0,
    1661,     0,     0,     0,     0,     0,     0,     0,     0,  1662,
       0,  1663,  1664,  1665,  1666,  1667,  1668,  1669,     0,     0,
    1670,  1671,     0,     0,     0,     0,  1672,     0,  1673,  1674,
    1675,     0,  1676,     0,  1677,     0,  1678,  1679,  1680,  1681,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1682,  1683,
    1684,     0,     0,     0,     0,     0,     0,     0,  1685,     0,
    1686,  1687,  1688,     0,     0,     0,     0,  1689,     0,  1690,
    1691,  1692,     0,     0,     0,  1693,     0,     0,     0,  1694,
    1695,     0,     0,  1696,  1697,  1698,  1699,     0,     0,     0,
    1700,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   975,     0,     0,     0,
       0,  1701,  1702,  1703,  1704,  1705,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1582,  1583,  1584,  1585,  1586,
    1587,     0,  1588,     0,  1589,     0,     0,     0,  1590,  1591,
    1592,     0,  1593,     0,     0,     0,  1594,  1595,  1596,  1597,
    1598,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1599,     0,     0,  1706,  1707,  1708,  1709,  1710,     0,  1711,
    1600,  1601,     0,     0,  1602,     0,     0,     0,     0,  1603,
    1604,  1605,  1606,  1607,     0,     0,  1608,     0,  1609,  1610,
    1611,     0,     0,  1612,  1613,     0,  1614,  1615,  1616,     0,
       0,     0,  1617,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1618,     0,     0,     0,
       0,  1619,     0,     0,     0,     0,  1620,  1621,  1622,     0,
       0,     0,     0,  1623,  1624,     0,  1625,  1626,  1627,  1628,
       0,     0,  1629,     0,  2160,  1631,  1632,  1633,     0,  1634,
       0,  1635,  1636,     0,  1637,     0,  1638,  1639,     0,  1640,
    1641,  1642,  1643,     0,     0,     0,     0,     0,  1644,     0,
    1645,     0,  1646,  1647,     0,  1648,  1649,  1650,  1651,  1652,
    1653,     0,  1654,  1655,  1656,  1657,  1658,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1659,     0,  1660,
       0,  1661,     0,     0,     0,     0,     0,     0,     0,     0,
    1662,     0,  1663,  1664,  1665,  1666,  1667,  1668,  1669,     0,
       0,  1670,  1671,     0,     0,     0,     0,  1672,     0,  1673,
    1674,  1675,     0,  1676,     0,  1677,     0,  1678,  1679,  1680,
    1681,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1682,
    1683,  1684,     0,     0,     0,     0,     0,     0,     0,  1685,
       0,  1686,  1687,  1688,     0,     0,     0,     0,  1689,     0,
    1690,  1691,  1692,     0,     0,     0,  1693,     0,     0,     0,
    1694,  1695,     0,     0,  1696,  1697,  1698,  1699,     0,     0,
       0,  1700,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
       0,     0,  1701,  1702,  1703,  1704,  1705,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1582,  1583,  1584,  1585,
    1586,  1587,     0,  1588,     0,  1589,     0,     0,     0,  1590,
    1591,  1592,     0,  1593,     0,     0,     0,  1594,  1595,  1596,
    1597,  1598,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1599,     0,     0,  1706,  1707,  1708,  1709,  1710,     0,
    1711,  1600,  1601,     0,     0,  1602,     0,     0,     0,     0,
    1603,  1604,  1605,  1606,  1607,     0,     0,  1608,     0,  1609,
    1610,  1611,     0,     0,  1612,  1613,     0,  1614,  1615,  1616,
       0,     0,     0,  1617,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1618,     0,     0,
       0,     0,  1619,     0,     0,     0,     0,  1620,  1621,  1622,
       0,     0,     0,     0,  1623,  1624,     0,  1625,  1626,  1627,
    1628,     0,     0,  1629,     0,  2194,  1631,  1632,  1633,     0,
    1634,     0,  1635,  1636,     0,  1637,     0,  1638,  1639,     0,
    1640,  1641,  1642,  1643,     0,     0,     0,     0,     0,  1644,
       0,  1645,     0,  1646,  1647,     0,  1648,  1649,  1650,  1651,
    1652,  1653,     0,  1654,  1655,  1656,  1657,  1658,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1659,     0,
    1660,     0,  1661,     0,     0,     0,     0,     0,     0,     0,
       0,  1662,     0,  1663,  1664,  1665,  1666,  1667,  1668,  1669,
       0,     0,  1670,  1671,     0,     0,     0,     0,  1672,     0,
    1673,  1674,  1675,     0,  1676,     0,  1677,     0,  1678,  1679,
    1680,  1681,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,     0,
    1682,  1683,  1684,     0,     0,     0,     0,   172,   173,     0,
    1685,     0,  1686,  1687,  1688,   174,   175,     0,     0,  1689,
       0,  1690,  1691,  1692,     0,     0,     0,  1693,   176,     0,
       0,  1694,  1695,     0,     0,  1696,  1697,  1698,  1699,     0,
       0,     0,  1700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,   178,     0,     0,   179,   180,
       0,     0,     0,     0,     0,     0,     0,   181,   983,     0,
       0,     0,     0,  1701,  1702,  1703,  1704,  1705,     0,     0,
       0,     0,     0,     0,   182,     0,     0,     0,   183,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1706,  1707,  1708,  1709,  1710,
       0,  1711,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,     0,     0,   491,   492,   493,   494,   495,   496,
     497,   186,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   187,   188,     0,     0,     0,     0,     0,
       0,   189,   190,     0,     0,     0,   191,     0,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   192,   513,     0,     0,     0,     0,     0,     0,     0,
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
     173,     0,     0,     0,     0,     0,     0,   174,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   178,     0,     0,
     179,   180,   491,   492,   493,   494,   495,   496,   497,   181,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   988,   513,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   678,   513,
     989,     0,     0,   185,     0,     0,   491,   492,   493,   494,
     495,   496,   497,   186,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,   491,   492,   493,
     494,   495,   496,   497,   990,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,   679,     0,   491,   492,   493,   494,
     495,   496,   497,   192,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   193,   194,   195,   196,   197,   198,   199,   200,   201,
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
       0,   172,   173,     0,   991,     0,     0,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   788,     0,     0,     0,     0,     0,     0,   789,
       0,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   177,   513,     0,     0,  1003,   178,
       0,     0,   179,   180,     0,     0,     0,     0,     0,     0,
       0,   181,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,  1004,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,  1005,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1007,     0,     0,   185,     0,     0,   491,   492,
     493,   494,   495,   496,   497,   186,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1018,     0,     0,     0,   187,     0,     0,
    -719,  -719,  -719,  -719,   790,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,  1027,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,   192,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,     0,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   280,   281,   282,     0,     0,
       0,     0,   283,   284,   285,   286,     0,     0,   791,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,   174,     0,     0,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,  1028,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   178,     0,     0,   179,   180,     0,     0,     0,     0,
       0,     0,  1029,   181,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,  1030,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,  1031,   513,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1032,     0,     0,   185,     0,     0,
     491,   492,   493,   494,   495,   496,   497,   186,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   187,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,  1033,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   391,
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
       0,     0,     0,   174,   718,     0,  1034,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,   178,     0,     0,   179,   180,     0,     0,
    1040,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,  1044,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1205,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,  1444,     0,     0,   185,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   186,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,  1445,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,   187,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   192,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   193,   194,   195,
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
       0,     0,     0,     0,     0,     0,     0,   172,   173,     0,
       0,     0,     0,  1456,     0,   174,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,   178,     0,     0,   179,   180,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,     0,  1466,     0,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,  1482,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   957,     0,     0,   491,   492,   493,
     494,   495,   496,   497,  1483,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1484,     0,
       0,   185,     0,     0,   491,   492,   493,   494,   495,   496,
     497,   186,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
    1487,     0,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,   187,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,  1488,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,     0,     0,  1432,     0,     0,     0,     0,
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
     173,     0,  1961,     0,     0,   992,     0,   174,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   178,     0,     0,
     179,   180,     0,     0,     0,     0,     0,     0,     0,   181,
       0,   993,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,  1417,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,  1433,   491,   492,   493,   494,   495,   496,   497,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   772,
       0,     0,     0,   185,     0,     0,   491,   492,   493,   494,
     495,   496,   497,   186,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   956,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,   187,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,   192,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   193,   194,   195,   196,   197,   198,   199,   200,   201,
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
       0,   172,   173,   962,     0,     0,     0,     0,     0,   174,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   178,
       0,     0,   179,   180,     0,     0,     0,     0,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   963,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1422,     0,     0,     0,     0,
       0,   491,   492,   493,   494,   495,   496,   497,   964,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   965,     0,     0,     0,   185,     0,     0,   491,   492,
     493,   494,   495,   496,   497,   186,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   966,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,   187,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,   967,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,   192,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,     0,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   280,   281,   282,     0,     0,
       0,     0,   283,   284,   285,   286,     0,     0,   287,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,   972,     0,     0,     0,     0,
       0,   174,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   178,     0,     0,   179,   180,   491,   492,   493,   494,
     495,   496,   497,   181,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,   976,  1918,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   977,   513,   491,   492,   493,   494,   495,   496,   497,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   978,     0,     0,     0,   185,     0,     0,
     491,   492,   493,   494,   495,   496,   497,   186,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   982,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   187,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,   984,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,   192,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   193,   194,   195,   196,   197,
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
       0,     0,     0,     0,     0,   172,   173,   985,     0,     0,
       0,     0,     0,   174,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,   986,     0,   178,     0,     0,   179,   180,   491,   492,
     493,   494,   495,   496,   497,   181,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   995,     0,     0,     0,     0,     0,  1920,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   491,   492,   493,   494,   495,   496,   497,   996,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,   997,     0,     0,     0,   185,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   186,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   998,     0,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,   187,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,   999,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,   192,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   193,   194,   195,
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
       0,     0,     0,     0,     0,     0,     0,   172,   173,  1000,
       0,     0,     0,     0,     0,   174,   491,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,  1001,     0,   178,     0,     0,   179,   180,
     491,   492,   493,   494,   495,   496,   497,   181,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,   491,
     492,   493,   494,   495,   496,   497,  1002,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,   491,   492,   493,   494,   495,   496,
     497,  1006,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1019,     0,     0,
       0,   185,     0,     0,   491,   492,   493,   494,   495,   496,
     497,   186,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,  1020,
       0,     0,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,   187,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,  1021,     0,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,   192,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   193,
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
     285,   286,     0,     0,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,  1022,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,   491,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,  1023,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,   491,   492,   493,
     494,   495,   496,   497,  1024,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,  1025,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,  1026,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,  1037,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,  1038,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,  1039,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,   491,   492,   493,
     494,   495,   496,   497,  1043,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,  1068,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,   491,   492,   493,   494,   495,
     496,   497,  1436,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,  1441,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   491,   492,   493,   494,   495,
     496,   497,  1442,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,  1443,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,  1446,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,  1447,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   491,   492,   493,   494,   495,
     496,   497,  1448,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,  1449,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   491,   492,   493,   494,   495,
     496,   497,  1450,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
     491,   492,   493,   494,   495,   496,   497,  1451,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,  1454,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,   491,   492,   493,   494,   495,
     496,   497,  1455,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,   491,   492,   493,   494,   495,   496,
     497,  1467,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,   491,   492,   493,   494,   495,   496,   497,
    1468,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1481,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1485,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1486,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,  1495,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,  1496,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1566,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1768,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1834,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,   491,   492,
     493,   494,   495,   496,   497,  1895,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,  1926,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,   491,   492,   493,   494,   495,   496,   497,
    1927,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,     0,   513,     0,     0,
       0,     0,   491,   492,   493,   494,   495,   496,   497,  1928,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,   491,   492,   493,   494,   495,   496,   497,  1929,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,  1930,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,  1939,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,  1956,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,  1957,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,  1958,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,   491,   492,   493,   494,   495,   496,   497,  1959,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,   491,   492,   493,   494,
     495,   496,   497,  1960,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,     0,
     513,     0,     0,     0,     0,     0,     0,     0,  1962,     0,
     491,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,  1963,   513,   491,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,   491,   492,   493,   494,
     495,   496,   497,  1986,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,  1310,
     513,     0,     0,     0,     0,     0,     0,     0,  1992,     0,
       0,     0,  1769,  1770,     0,     0,     0,  1771,  1311,  1772,
       0,     0,     0,     0,     0,     0,     0,  1312,     0,     0,
    1313,     0,  1314,     0,     0,  1315,     0,  1996,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1316,     0,  1773,  1774,     0,  1775,     0,  1317,  1318,   491,
     492,   493,   494,   495,   496,   497,  2001,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513,     0,     0,     0,     0,     0,     1,
       0,  2103,  1319,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1320,
       0,     0,     0,     0,     0,     0,  2109,     0,     0,     0,
       3,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       0,  2133,     0,  1321,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1322,  2146,     0,     0,     0,     0,     0,     0,
    1323,     0,     0,     0,     0,     0,  1776,  1777,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,     8,
       0,  2156,     0,     0,     0,     0,     0,   945,     0,     0,
       9,    10,    11,   577,   578,     0,   579,     0,   580,   581,
       0,     0,     0,     0,     0,     0,  2157,     0,     0,     0,
    1324,     0,     0,     0,   582,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,  2195,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
       0,     0,     0,     0,     0,   587,     0,     0,     0,     0,
       0,     0,    15,    16,   588,     0,     0,     0,     0,     0,
    1203,     0,     0,     0,     0,     0,     0,    17,     0,     0,
      18,     0,     0,     0,   589,     0,     0,     0,     0,    19,
       0,     0,   590,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   591,     0,     0,
       0,     0,     0,     0,   592,     0,     0,   593,     0,     0,
     594,   595,     0,     0,     0,     0,     0,     0,     0,     0,
     491,   492,   493,   494,   495,   496,   497,   596,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,     0,   513,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   597,   598,     0,     0,   599,   600,     0,     0,     0,
       0,   601,     0,   602,     0,     0,     0,     0,   603,   604,
       0,     0,     0,     0,   605,     0,   606,     0,     0,     0,
       0,     0,   607,     0,   608,   609,     0,     0,     0,     0,
     610,   491,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,     0,   513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   491,   492,   493,
     494,   495,   496,   497,  1211,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,   491,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1747,
       0,     0,     0,     0,     0,     0,     0,   490,     0,     0,
       0,     0,     0,  1202,   491,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1428,
       0,     0,     0,   514,     0,   491,   492,   493,   494,   495,
     496,   497,  1748,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,     0,   513,
       0,     0,     0,     0,     0,     0,     0,   491,   492,   493,
     494,   495,   496,   497,   987,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
       0,   513,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,  1053,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   513,     0,     0,     0,     0,     0,     0,   491,
     492,   493,   494,   495,   496,   497,  1269,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,     0,   513
};

static const yytype_int16 yycheck[] =
{
      96,  1072,  1292,  1128,   304,   298,  1159,   645,  1088,  1089,
     294,  1396,  1411,  1394,  1094,   134,     4,   348,  1143,     5,
     878,   879,   940,    47,   942,    20,   884,   818,   886,  1154,
      20,   943,   152,   134,  1732,     3,     8,  1520,   534,     3,
       4,     5,     6,     7,     8,     3,  1180,   197,    76,    34,
       3,    34,     6,    88,    95,    46,   157,     3,     3,   106,
       4,   197,    46,     3,    18,   161,   162,    85,   298,   152,
    1738,    16,   365,  1307,  1308,    49,   172,   173,   174,    97,
     238,   131,   178,     6,   238,    18,   110,    76,    69,    85,
     275,    49,  1326,   217,   214,     3,     4,     5,     6,     7,
       8,    53,   152,   111,   132,   122,   123,   134,     4,     5,
       6,     7,     3,    52,    53,   133,   275,     3,  1791,  1792,
       3,     3,   250,   141,     3,   195,   250,     3,    69,  1802,
    1803,   214,   137,    72,   105,  1047,   105,     3,   558,     3,
    2199,  1522,     3,    10,    11,    12,    13,    14,    15,    16,
     238,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   134,    34,   272,   807,
     272,   199,   264,   191,    70,   111,  2235,  2236,   152,   170,
     228,   383,   384,   191,   152,   823,   155,    69,  1470,  1471,
       3,   287,    69,   613,   264,   200,    82,  1479,  1480,    82,
      82,   386,  2261,   148,   195,    82,   174,    83,   256,   256,
     199,   195,   165,    26,   154,   265,   243,    83,   171,   165,
     111,   256,   240,   516,   383,   171,   267,   191,   386,  1309,
     384,   259,  1357,   201,   215,   226,   386,   191,   182,   523,
     214,    76,   226,  1368,  1397,   369,   234,   235,   193,   182,
     386,   247,  1369,   225,   206,   191,   273,  1382,  1931,  1932,
    1933,  1934,  1935,  1936,   384,   239,   349,   386,   191,   208,
     259,  1062,  1945,  1407,   215,   246,  1949,  1195,   154,  1197,
    1953,  1764,   386,   191,   386,   386,   239,   256,   154,   275,
     154,   387,   930,   154,   386,   391,   384,   132,    72,  1533,
     383,   384,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     3,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,  2027,
     426,   427,   428,   829,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   644,  1733,  1734,     3,  1267,   452,   453,   349,   383,
    2028,   457,   458,   317,   199,   349,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   383,   485,
     486,   487,    47,   383,   264,   491,   492,   493,   494,   495,
     385,   264,   385,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,  1817,   839,
     840,   385,   518,   250,   259,   383,   379,   657,   524,   849,
     660,   384,     3,   379,   208,   331,   332,   333,   384,  1510,
    1557,   374,   375,   376,   377,   675,   325,   326,   327,   328,
       3,  1576,  1569,  1578,   275,   110,   122,   123,    38,     3,
       3,   105,   202,     3,   154,  2138,   135,   264,     5,  2142,
      72,   264,    72,     3,   264,   272,   896,   897,   898,  1337,
      18,  1339,  1340,   264,    18,     3,    96,  1604,   384,   264,
      36,    18,    67,   239,    85,   257,    71,   250,  1615,  1781,
    1782,  1783,  1784,  1785,  1786,   154,    97,    34,     3,  1894,
       3,  1793,    18,  1912,   384,  1797,   278,   175,  1635,  1801,
     387,   384,     3,   269,    61,   105,   266,    73,   812,   198,
    1820,    49,  1649,   864,   865,  2208,  2209,   147,  2211,  2212,
      46,  1658,   133,    49,     5,    51,   642,   239,    54,    76,
     141,   126,    98,    93,    49,   213,    98,    95,    14,    20,
     106,    95,    18,    69,   233,   386,     3,   987,   988,     3,
      76,    77,   118,   669,   670,   155,   118,   269,   674,  1075,
     250,  1698,  1078,   154,   111,   681,   383,   817,   190,   386,
     190,   384,    26,  1718,   384,    49,    10,   382,     3,  1724,
     191,   154,     0,   384,    58,   111,   208,   273,   208,   384,
     154,   154,   256,    10,    11,    12,    13,    14,    15,    16,
     920,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   238,    34,   238,   185,
    2237,     9,  1280,   181,   153,    49,    49,   181,    37,   240,
     385,   386,    20,   162,    58,    58,   162,   195,    49,   239,
     206,   195,    69,  1743,    69,  2262,  2263,    58,    57,    76,
    1090,     3,   593,     5,     3,  2074,   256,    82,   599,    93,
     601,   101,    93,     3,   275,   191,   100,   783,   784,   384,
     786,   385,   386,   199,  2291,   791,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     3,
      34,   267,   136,   137,   144,   132,   137,   101,   101,   136,
     214,   101,   152,   385,   386,   154,  2135,  1890,  1855,   153,
      43,    44,   153,  1860,  1869,     3,   153,   153,   101,    31,
      32,     3,    34,   259,   174,   162,   221,   222,    60,  1884,
       3,  1886,    64,   385,   386,   385,   386,  1060,  1068,  2150,
     144,   144,    80,    81,   144,     3,   385,   386,   152,   152,
    2062,     3,   152,   157,  2066,     3,   200,  2077,   153,   200,
     250,   144,   199,   384,    30,    31,    32,   893,    34,   152,
     174,   174,   244,   217,   174,   219,   217,  2206,   219,     3,
     112,   225,   169,   115,   225,     3,    13,    14,  1048,    16,
     134,   174,    19,   385,   386,   385,   386,  1057,   130,   386,
     244,   245,   871,   872,     3,   874,   875,   876,   386,   250,
       3,   880,   881,   882,     3,   259,   885,   279,   150,   945,
       3,   947,   259,   385,   386,   384,   158,    49,   954,   955,
       3,   957,   385,   386,   195,   961,   385,   386,   385,   386,
     385,   386,   968,   969,   970,   971,   384,   973,   974,   975,
     279,  1998,   385,   386,   980,   981,   195,   983,   385,   386,
       3,   385,   386,   989,   990,   991,  2021,  2014,  1969,     4,
       5,  2183,  2184,     3,  2186,  2187,   384,  1003,  1004,  1005,
     383,  1007,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1018,    34,     4,     5,   385,   386,   385,   386,
       3,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,   279,
    1036,  1171,   385,   386,  1040,   247,  1042,   249,  1044,   385,
     386,   279,   385,   386,   279,   369,   279,  1053,   369,  1055,
    1056,   385,   386,   385,   386,   195,   268,   580,   581,   582,
     583,     3,   585,  1069,  2091,   588,   589,   590,   279,  1399,
    1076,   279,   595,   596,   597,   385,   386,   600,   385,   386,
      10,    11,    12,    13,    14,    15,    16,     4,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     3,    34,     8,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1126,    34,   279,   385,   386,   385,   386,   243,  1268,   385,
     386,  1271,   383,  1273,     9,  1275,   384,    10,    11,    12,
      13,    14,    15,    16,    34,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     386,    34,   386,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    42,    34,   384,  1185,
     385,   386,  1188,   385,   386,   385,   386,   384,  1194,   384,
      26,    27,    28,    29,    30,    31,    32,  1203,    34,  1205,
     385,   386,   385,   386,   384,  1211,  1212,   385,   386,   385,
     386,   385,   386,   384,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   384,    34,    11,
      12,    13,    14,    15,    16,   384,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   384,    34,  1269,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   384,    34,  1295,
     385,   386,   385,   386,   385,   386,   384,  1303,   385,   386,
     385,   386,    10,    11,    12,    13,    14,    15,    16,   384,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   384,    34,   385,   386,    55,
      56,   385,   386,   384,    10,    11,    12,    13,    14,    15,
      16,   384,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   384,    34,   384,
      10,    11,    12,    13,    14,    15,    16,   384,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,  1389,    34,   384,    74,   385,   386,    10,
      11,    12,    13,    14,    15,    16,   384,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   384,    34,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,  1432,    34,   384,  1435,
     385,   386,   384,   179,   385,   386,   385,   386,  1444,  1445,
     384,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    1456,    34,   385,   386,     3,   385,   386,   385,   386,  1465,
    1466,   385,   386,   151,   385,   386,    55,    56,   383,   384,
      49,   385,   386,   161,   383,   384,  1482,  1483,  1484,   385,
     386,  1487,  1488,   384,  1490,   384,  1492,   175,  1494,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     188,    34,  1508,  1509,   385,   386,   385,   386,   385,   386,
     384,  1517,  1518,   386,   384,     3,     4,     5,     6,     7,
       8,   384,    10,   384,    12,   213,   385,   386,    16,    17,
      18,  1537,    20,   825,   826,  1541,    24,    25,    26,    27,
      28,   384,  1064,  1065,   384,  1551,  1514,  1515,   236,   384,
      38,   384,   384,   384,   384,   384,   384,   384,   384,  1565,
      48,    49,   384,   384,    52,   384,   384,   384,   384,    57,
      58,    59,    60,    61,   384,   384,    64,   384,    66,    67,
      68,   384,   384,    71,    72,   384,    74,    75,    76,   385,
     386,   384,    80,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,    94,   384,   384,   384,
     384,    99,    51,   384,   384,   384,   104,   105,   106,   384,
     384,   384,   384,   111,   112,   384,   114,   115,   116,   117,
     384,   384,   120,   384,   122,   123,   124,   125,    51,   127,
     386,   129,   130,   384,   132,   384,   134,   135,   384,   137,
     138,   139,   140,   384,   384,   384,   384,   384,   146,   384,
     148,   384,   150,   151,   384,   153,   154,   155,   156,   157,
     158,     3,   160,   161,   162,   163,   164,   385,   386,    69,
     275,   243,     3,     3,   195,     3,   195,   175,   279,   177,
       3,   179,     3,   195,   279,     3,     3,    26,     3,     3,
     188,     3,   190,   191,   192,   193,   194,   195,   196,   385,
     386,   199,   200,     3,     3,     3,     3,   205,     3,   207,
     208,   209,     3,   211,     3,   213,     3,   215,   216,   217,
     218,    34,     3,     3,   387,   385,   386,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,  1753,  1754,   237,
     238,   239,   385,  1759,     5,  1761,   385,   385,   385,   247,
     385,   249,   250,   251,   385,   386,   384,     3,   256,     3,
     258,   259,   260,     3,     3,   385,   264,     3,   161,   194,
     268,   269,     3,     3,   272,   273,   274,   275,     5,   275,
      40,   279,    10,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     3,    34,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   243,     3,     3,
     377,     3,   320,   321,   322,   323,   324,    10,    11,    12,
      13,    14,    15,    16,     5,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       3,    34,   384,     5,     5,   384,   384,   384,    62,   384,
     384,   384,   384,     3,  1880,     3,     3,     3,   385,     3,
     386,     3,   385,   195,    49,  1891,   195,     3,   279,   195,
       3,     3,     3,   385,   382,   383,   384,   385,   386,   196,
     388,   385,   239,   385,   348,   348,   348,   385,   348,    10,
      11,    12,    13,    14,    15,    16,  1922,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,  1938,    34,    12,    13,    14,    15,    16,   348,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,  1961,    34,   239,   384,   384,
    1966,   384,   384,   134,   162,   386,   162,   162,   161,  1975,
     195,   161,   195,     3,     4,     5,     6,     7,     8,   195,
      10,     3,    12,  1989,  1990,   220,    16,    17,    18,   220,
      20,    34,     3,     5,    24,    25,    26,    27,    28,   243,
     243,     5,     5,     4,   191,     5,     5,     5,    38,   387,
     384,   384,   211,   266,     3,     3,     3,   138,    48,    49,
       3,    92,    52,     3,     3,   195,   195,    57,    58,    59,
      60,    61,    61,   177,    64,    20,    66,    67,    68,   384,
     197,    71,    72,    89,    74,    75,    76,   387,     4,   385,
      80,   159,   348,   348,   348,   348,   348,   348,   384,   384,
     384,     5,   348,     5,    94,   348,   139,   384,   348,    99,
     384,   239,     3,   138,   104,   105,   106,     3,     3,     3,
     162,   111,   112,   384,   114,   115,   116,   117,   162,     3,
     120,     3,   122,   123,   124,   125,     3,   127,  2104,   129,
     130,   385,   132,    76,   134,   135,   384,   137,   138,   139,
     140,   385,   385,   385,   266,  2121,   146,   385,   148,   385,
     150,   151,   384,   153,   154,   155,   156,   157,   158,   384,
     160,   161,   162,   163,   164,   384,   384,   384,    58,   243,
     195,   138,     3,   266,     3,   175,     3,   177,   162,   179,
       3,   384,   384,   162,     4,     6,   384,   384,   188,     4,
     190,   191,   192,   193,   194,   195,   196,   385,   386,   199,
     200,     4,   384,   386,   210,   205,   162,   207,   208,   209,
       3,   211,     3,   213,   384,   215,   216,   217,   218,    61,
     161,   146,     3,   385,   385,    20,   385,  2203,     3,   191,
       3,    50,     3,   162,     4,   162,   211,   237,   238,   239,
     386,     5,   385,   386,   238,     4,     4,   247,   384,   249,
     250,   251,   384,     3,   384,   384,   256,   385,   258,   259,
     260,   384,     3,   384,   264,   384,   384,   384,   268,   269,
     385,     3,   272,   273,   274,   275,   385,   385,   385,   279,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     3,    34,   384,   266,   384,   384,   384,
     116,   384,   384,     3,   385,   386,   384,   384,   384,   384,
     320,   321,   322,   323,   324,   384,   384,   384,   264,   384,
       3,   266,     3,   138,   384,   384,   256,   384,   384,    20,
     195,   386,     4,   348,     3,     4,     5,     6,     7,     8,
     348,    10,   349,    12,   385,   385,   385,    16,    17,    18,
       3,    20,   385,   385,   384,    24,    25,    26,    27,    28,
       3,     3,    49,     3,     5,     3,     5,   384,     5,    38,
     384,   384,   382,   383,   384,   385,   386,     4,   388,    48,
      49,    58,   385,    52,    58,   385,   385,   385,    57,    58,
      59,    60,    61,   386,   384,    64,   215,    66,    67,    68,
     386,   275,    71,    72,   266,    74,    75,    76,   384,   384,
     384,    80,   269,   384,   162,   162,     3,    61,    86,   196,
     384,     3,    20,   384,   386,    94,    41,   385,   384,   384,
      99,   385,    18,   385,     3,   104,   105,   106,   385,   162,
       3,   385,   111,   112,   384,   114,   115,   116,   117,    58,
     384,   120,   385,   122,   123,   124,   125,   385,   127,   385,
     129,   130,     3,   132,    76,   134,   135,   384,   137,   138,
     139,   140,   134,     3,   384,   384,   384,   146,     3,   148,
      61,   150,   151,    61,   153,   154,   155,   156,   157,   158,
       3,   160,   161,   162,   163,   164,     3,     3,   384,    61,
     385,   385,   385,   348,   348,   348,   175,   385,   177,   385,
     179,   212,   348,   138,     3,   385,   205,   267,     3,   188,
       3,   190,   191,   192,   193,   194,   195,   196,     5,     5,
     199,   200,    58,    75,   385,   129,   205,   154,   207,   208,
     209,   164,   211,   274,   213,   205,   215,   216,   217,   218,
     384,     5,   384,     3,   202,    20,     3,     3,   386,    99,
     386,   385,   385,   385,   385,   385,   157,   385,   237,   238,
     239,   385,   384,   384,     3,   385,   384,   384,   247,   385,
     249,   250,   251,   385,     5,   385,     3,   256,   385,   258,
     259,   260,     3,     3,   384,   264,   384,   384,     3,   268,
     269,     3,   386,   272,   273,   274,   275,   229,   229,   384,
     279,    10,    11,    12,    13,    14,    15,    16,   385,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   205,    34,     3,     3,     3,    20,
       3,     3,   385,   178,   385,   385,   386,   178,   386,     3,
     243,   320,   321,   322,   323,   324,     3,     3,   385,   238,
     385,   385,   384,   384,   384,     3,   227,   385,   385,   385,
     385,     5,     3,   226,   385,     3,     4,     5,     6,     7,
       8,     5,    10,     3,    12,   384,   149,    95,    16,    17,
      18,   172,    20,   269,   248,   195,    24,    25,    26,    27,
      28,   195,   189,   189,     5,     5,   103,  1056,   392,  1205,
      38,   960,  1821,   382,   383,   384,   385,   386,  1511,   388,
      48,    49,  1752,   518,    52,  1299,   129,   646,   653,    57,
      58,    59,    60,    61,   528,   835,    64,  1083,    66,    67,
      68,  2225,    91,    71,    72,   543,    74,    75,    76,   381,
     941,  1922,    80,  2267,  1409,  1890,   659,  1386,  1398,   165,
    1555,   357,    -1,   883,   900,   574,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
      -1,    -1,    -1,   111,   112,    -1,   114,   115,   116,   117,
      -1,    -1,   120,    -1,   122,   123,   124,   125,    -1,   127,
      -1,   129,   130,    -1,   132,    -1,   134,   135,    -1,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,   146,    -1,
     148,    -1,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     188,    -1,   190,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,    -1,    -1,   205,    -1,   207,
     208,   209,    -1,   211,    -1,   213,    -1,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     238,   239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,   249,   250,   251,    -1,    -1,    -1,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,    -1,
     268,   269,    -1,    -1,   272,   273,   274,   275,    -1,    -1,
      -1,   279,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,
      -1,    -1,   320,   321,   322,   323,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,   382,   383,   384,   385,   386,    -1,
     388,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    64,    -1,    66,
      67,    68,    -1,    -1,    71,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111,   112,    -1,   114,   115,   116,
     117,    -1,    -1,   120,    -1,   122,   123,   124,   125,    -1,
     127,    -1,   129,   130,    -1,   132,    -1,   134,   135,    -1,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,   146,
      -1,   148,    -1,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
      -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,    -1,
     207,   208,   209,    -1,   211,    -1,   213,    -1,   215,   216,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,   249,   250,   251,    -1,    -1,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,
      -1,   268,   269,    -1,    -1,   272,   273,   274,   275,    -1,
      -1,    -1,   279,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,    -1,    -1,   320,   321,   322,   323,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,   382,   383,   384,   385,   386,
      -1,   388,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    -1,    -1,    64,    -1,
      66,    67,    68,    -1,    -1,    71,    72,    -1,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,   104,   105,
     106,    -1,    -1,    -1,    -1,   111,   112,    -1,   114,   115,
     116,   117,    -1,    -1,   120,    -1,   122,   123,   124,   125,
      -1,   127,    -1,   129,   130,    -1,   132,    -1,   134,   135,
      -1,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
     146,    -1,   148,    -1,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,   177,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,
      -1,   207,   208,   209,    -1,   211,    -1,   213,    -1,   215,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,   249,   250,   251,    -1,    -1,    -1,    -1,
     256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
      -1,    -1,   268,   269,    -1,    -1,   272,   273,   274,   275,
      -1,    -1,    -1,   279,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,
      -1,    -1,    -1,    -1,   320,   321,   322,   323,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,   382,   383,   384,   385,
     386,    -1,   388,    48,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    64,
      -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,   114,
     115,   116,   117,    -1,    -1,   120,    -1,   122,   123,   124,
     125,    -1,   127,    -1,   129,   130,    -1,   132,    -1,   134,
     135,    -1,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,   146,    -1,   148,    -1,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,
     205,    -1,   207,   208,   209,    -1,   211,    -1,   213,    -1,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,   249,   250,   251,    -1,    -1,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,    -1,    -1,   268,   269,    -1,    -1,   272,   273,   274,
     275,    -1,    -1,    -1,   279,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,    -1,   320,   321,   322,   323,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   382,   383,   384,
     385,   386,    -1,   388,    48,    49,    -1,    -1,    52,    -1,
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
     264,    -1,    -1,    -1,   268,   269,    -1,    -1,   272,   273,
     274,   275,    -1,    -1,    -1,   279,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   386,    -1,    -1,    -1,    -1,   320,   321,   322,   323,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,   382,   383,
     384,   385,   386,    -1,   388,    48,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,    72,
      -1,    74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,   117,    -1,    -1,   120,    -1,   122,
     123,   124,   125,    -1,   127,    -1,   129,   130,    -1,   132,
      -1,   134,   135,    -1,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,   146,    -1,   148,    -1,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,   177,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,
      -1,    -1,   205,    -1,   207,   208,   209,    -1,   211,    -1,
     213,    -1,   215,   216,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   237,   238,   239,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,   249,   250,   251,    -1,
      -1,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,    -1,    -1,   268,   269,    -1,    -1,   272,
     273,   274,   275,    -1,    -1,    -1,   279,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   386,    -1,    -1,    -1,    -1,   320,   321,   322,
     323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,   382,
     383,   384,   385,   386,    -1,   388,    48,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,   117,    -1,    -1,   120,    -1,
     122,   123,   124,   125,    -1,   127,    -1,   129,   130,    -1,
     132,    -1,   134,   135,    -1,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,   146,    -1,   148,    -1,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,    -1,   160,   161,
     162,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,   179,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,    -1,    -1,   205,    -1,   207,   208,   209,    -1,   211,
      -1,   213,    -1,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,   238,   239,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,   249,   250,   251,
      -1,    -1,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,    -1,    -1,   268,   269,    -1,    -1,
     272,   273,   274,   275,    -1,    -1,    -1,   279,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,   320,   321,
     322,   323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
     382,   383,   384,   385,   386,    -1,   388,    48,    49,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    64,    -1,    66,    67,    68,    -1,    -1,
      71,    72,    -1,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,
     111,   112,    -1,   114,   115,   116,   117,    -1,    -1,   120,
      -1,   122,   123,   124,   125,    -1,   127,    -1,   129,   130,
      -1,   132,    -1,   134,   135,    -1,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,   146,    -1,   148,    -1,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,   177,    -1,   179,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,    -1,    -1,   199,   200,
      -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,    -1,
     211,    -1,   213,    -1,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,   238,   239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   249,   250,
     251,    -1,    -1,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,    -1,    -1,   268,   269,    -1,
      -1,   272,   273,   274,   275,    -1,    -1,    -1,   279,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,   320,
     321,   322,   323,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,   382,   383,   384,   385,   386,    -1,   388,    48,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    -1,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    71,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,    -1,
      -1,   111,   112,    -1,   114,   115,   116,   117,    -1,    -1,
     120,    -1,   122,   123,   124,   125,    -1,   127,    -1,   129,
     130,    -1,   132,    -1,   134,   135,    -1,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,   146,    -1,   148,    -1,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,   179,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
     200,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,
      -1,   211,    -1,   213,    -1,   215,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   238,   239,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   249,
     250,   251,    -1,    -1,    -1,    -1,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,    -1,    -1,   268,   269,
      -1,    -1,   272,   273,   274,   275,    -1,    -1,    -1,   279,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,
     320,   321,   322,   323,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,   382,   383,   384,   385,   386,    -1,   388,    48,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    -1,    -1,    64,    -1,    66,    67,    68,
      -1,    -1,    71,    72,    -1,    74,    75,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,   117,    -1,
      -1,   120,    -1,   122,   123,   124,   125,    -1,   127,    -1,
     129,   130,    -1,   132,    -1,   134,   135,    -1,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,   146,    -1,   148,
      -1,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
      -1,   160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,    -1,
     179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,
      -1,   190,   191,   192,   193,   194,   195,   196,    -1,    -1,
     199,   200,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,
     209,    -1,   211,    -1,   213,    -1,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   238,
     239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
     249,   250,   251,    -1,    -1,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,    -1,    -1,   268,
     269,    -1,    -1,   272,   273,   274,   275,    -1,    -1,    -1,
     279,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,
      -1,   320,   321,   322,   323,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,   382,   383,   384,   385,   386,    -1,   388,
      48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    -1,    -1,    64,    -1,    66,    67,
      68,    -1,    -1,    71,    72,    -1,    74,    75,    76,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
      -1,    -1,    -1,   111,   112,    -1,   114,   115,   116,   117,
      -1,    -1,   120,    -1,   122,   123,   124,   125,    -1,   127,
      -1,   129,   130,    -1,   132,    -1,   134,   135,    -1,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,   146,    -1,
     148,    -1,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,   177,
      -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     188,    -1,   190,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,    -1,    -1,   205,    -1,   207,
     208,   209,    -1,   211,    -1,   213,    -1,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     238,   239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,   249,   250,   251,    -1,    -1,    -1,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,    -1,
     268,   269,    -1,    -1,   272,   273,   274,   275,    -1,    -1,
      -1,   279,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,
      -1,    -1,   320,   321,   322,   323,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,   382,   383,   384,   385,   386,    -1,
     388,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    64,    -1,    66,
      67,    68,    -1,    -1,    71,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111,   112,    -1,   114,   115,   116,
     117,    -1,    -1,   120,    -1,   122,   123,   124,   125,    -1,
     127,    -1,   129,   130,    -1,   132,    -1,   134,   135,    -1,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,   146,
      -1,   148,    -1,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,   163,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     177,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
      -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,    -1,
     207,   208,   209,    -1,   211,    -1,   213,    -1,   215,   216,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
     237,   238,   239,    -1,    -1,    -1,    -1,    17,    18,    -1,
     247,    -1,   249,   250,   251,    25,    26,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,    -1,   264,    38,    -1,
      -1,   268,   269,    -1,    -1,   272,   273,   274,   275,    -1,
      -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,   386,    -1,
      -1,    -1,    -1,   320,   321,   322,   323,   324,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,   108,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   382,   383,   384,   385,   386,
      -1,   388,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   191,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   223,   224,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,   236,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   261,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,    -1,   318,    -1,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,    -1,    -1,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,    -1,
     370,   371,   372,   373,    -1,    -1,    -1,    -1,   378,   379,
     380,   381,    -1,    -1,   384,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    10,    11,    12,    13,    14,    15,    16,    87,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   386,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   176,    34,
     386,    -1,    -1,   181,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   191,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    10,    11,    12,
      13,    14,    15,    16,   386,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,   252,    -1,    10,    11,    12,    13,
      14,    15,    16,   261,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,    -1,
     318,    -1,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,    -1,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,    -1,   370,   371,   372,   373,    -1,    -1,    -1,    -1,
     378,   379,   380,   381,    -1,    -1,   384,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,   386,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    70,    34,    -1,    -1,   386,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   386,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   386,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   386,    -1,    -1,   181,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   191,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   386,    -1,    -1,    -1,   223,    -1,    -1,
      13,    14,    15,    16,   230,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,   386,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   261,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,    -1,   318,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,    -1,    -1,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,    -1,   370,   371,   372,   373,    -1,    -1,
      -1,    -1,   378,   379,   380,   381,    -1,    -1,   384,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   386,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,   386,    87,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   386,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   386,    34,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   386,    -1,    -1,   181,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   191,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   223,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,
      -1,    -1,    -1,    -1,    -1,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,    -1,   318,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,    -1,    -1,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,    -1,   370,   371,   372,   373,
      -1,    -1,    -1,    -1,   378,   379,   380,   381,    -1,    -1,
     384,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,   386,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,    -1,
     386,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   386,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     386,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,   386,    -1,    -1,   181,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   191,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   386,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   223,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   261,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    -1,   318,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,    -1,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
      -1,    -1,   384,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,   386,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,   386,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   386,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   386,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,   181,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   191,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
     386,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   223,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   261,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,    -1,   318,    -1,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,    -1,    -1,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,    -1,
     370,   371,   372,   373,    -1,    -1,    -1,    -1,   378,   379,
     380,   381,    -1,    -1,   384,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,   386,    -1,    -1,   319,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   111,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   385,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,    -1,    -1,   181,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   191,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,   385,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   223,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   261,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,    -1,
     318,    -1,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,    -1,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,    -1,   370,   371,   372,   373,    -1,    -1,    -1,    -1,
     378,   379,   380,   381,    -1,    -1,   384,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,   385,    -1,    -1,    -1,    -1,    -1,    25,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   385,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   385,    -1,    -1,    -1,   181,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   191,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,   385,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   223,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   261,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,    -1,   318,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,    -1,    -1,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,    -1,   370,   371,   372,   373,    -1,    -1,
      -1,    -1,   378,   379,   380,   381,    -1,    -1,   384,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,   385,    -1,    -1,    -1,    -1,
      -1,    25,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    10,    11,    12,    13,
      14,    15,    16,    87,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,   385,   111,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   385,    34,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   385,    -1,    -1,    -1,   181,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   191,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,   385,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   223,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   261,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,    -1,   318,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,    -1,    -1,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,    -1,   370,   371,   372,   373,
      -1,    -1,    -1,    -1,   378,   379,   380,   381,    -1,    -1,
     384,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,   385,    -1,    -1,
      -1,    -1,    -1,    25,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,   385,    -1,    75,    -1,    -1,    78,    79,    10,    11,
      12,    13,    14,    15,    16,    87,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,   385,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   385,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,   181,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   191,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   223,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   261,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    -1,   318,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,    -1,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,   378,   379,   380,   381,
      -1,    -1,   384,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,   385,
      -1,    -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,   385,    -1,    75,    -1,    -1,    78,    79,
      10,    11,    12,    13,    14,    15,    16,    87,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   385,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    10,    11,    12,    13,    14,    15,
      16,   385,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,
      -1,   181,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   191,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   223,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   261,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,    -1,   318,    -1,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,    -1,    -1,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,    -1,
     370,   371,   372,   373,    -1,    -1,    -1,    -1,   378,   379,
     380,   381,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   385,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   385,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   385,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,   385,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   385,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   385,
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
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   385,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    10,    11,    12,
      13,    14,    15,    16,   385,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   385,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   385,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   385,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   385,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   385,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   385,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    13,    14,
      15,    16,   385,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   385,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     385,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     385,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   385,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     385,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     385,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    10,    11,    12,    13,    14,    15,    16,
     385,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   385,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   385,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   385,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   385,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   385,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   385,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   385,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    10,    11,    12,    13,    14,    15,    16,   385,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    10,    11,    12,    13,
      14,    15,    16,   385,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   385,    34,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   385,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    18,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,   107,    37,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    -1,    51,    -1,    -1,    54,    -1,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,   142,   143,    -1,   145,    -1,    76,    77,    10,
      11,    12,    13,    14,    15,    16,   385,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    35,
      -1,   385,   111,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,   385,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,   385,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,   155,
      -1,   385,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,
     166,   167,   168,    59,    60,    -1,    62,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,
     259,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
     206,   385,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   130,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
     256,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,   265,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,    -1,    -1,    -1,   180,    -1,    -1,   183,    -1,    -1,
     186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   203,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   237,   238,    -1,    -1,   241,   242,    -1,    -1,    -1,
      -1,   247,    -1,   249,    -1,    -1,    -1,    -1,   254,   255,
      -1,    -1,    -1,    -1,   260,    -1,   262,    -1,    -1,    -1,
      -1,    -1,   268,    -1,   270,   271,    -1,    -1,    -1,    -1,
     276,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   134,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,   122,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    49,    -1,    10,    11,    12,    13,    14,
      15,    16,   110,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    49,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    48,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    48,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    35,    39,    66,    71,    84,   105,   106,   155,   166,
     167,   168,   204,   206,   214,   238,   239,   253,   256,   265,
     390,   429,   430,   469,   473,   475,   478,   479,   482,   483,
     484,   485,   486,   488,   491,   498,   499,   501,   517,   518,
     527,   530,   532,   533,   534,   557,   560,   567,   568,   571,
     574,   575,   578,   217,   250,   369,   250,     3,    10,    93,
     100,   136,   137,   153,   200,   217,   219,   225,   244,   245,
     259,   369,   539,     3,   470,    93,   137,   153,   200,   217,
     219,   225,   250,   369,   509,     3,     3,     3,    26,   250,
     250,   509,     8,   225,   558,   559,   448,   250,   509,   528,
       3,    93,     0,   382,   481,     3,     3,     3,     3,   384,
     214,   154,   531,     3,   153,     3,     3,    83,   154,     3,
       3,     3,   531,   244,   153,   531,   250,   519,     3,   134,
     152,   174,   201,   471,     3,   154,     3,   154,     3,     3,
     154,     3,   154,     3,     3,   154,     3,   154,     3,   154,
     101,   144,   152,   157,   174,   510,   169,   386,     3,     3,
     510,     9,    20,     3,   111,   386,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    38,    70,    75,    78,
      79,    87,   104,   108,   144,   181,   191,   223,   224,   231,
     232,   236,   261,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   318,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   370,
     371,   372,   373,   378,   379,   380,   381,   384,   391,   449,
     450,     3,   152,   174,     3,   165,   171,   379,   384,   452,
     453,   454,   455,   458,   468,     3,   390,    52,    53,    72,
     208,   275,   383,   487,    98,   118,    36,    73,    98,   106,
     118,   185,   206,   267,    53,   206,   576,     3,     4,     5,
       6,     7,     8,   191,   385,   569,   570,   137,   200,   279,
       3,    49,     3,   384,   195,     3,   154,   279,   384,    37,
      57,   572,   195,     3,     3,    83,   154,     3,   531,   384,
     520,   383,   472,     3,   471,   134,   386,   279,   279,   279,
     279,   195,   279,    72,   208,   474,   279,   279,     3,     4,
     243,     3,   391,   391,   559,   383,   384,     9,   391,   391,
     391,   273,   391,   428,   383,   384,    34,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   391,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    34,    49,   451,   134,   157,   386,   386,
     383,   451,   384,     3,   384,   430,   452,   238,   386,    74,
     151,   175,   188,   213,   236,   459,   461,    49,   457,   457,
      51,    51,    42,     3,   106,   256,   489,    69,    82,     3,
      82,    69,   215,     3,    69,    82,    69,   215,     3,    82,
       3,    69,    82,    69,   275,   243,    18,   182,   374,   375,
     376,   377,   577,   385,   386,     3,     3,    59,    60,    62,
      64,    65,    80,   112,   113,   114,   115,   121,   130,   150,
     158,   173,   180,   183,   186,   187,   203,   237,   238,   241,
     242,   247,   249,   254,   255,   260,   262,   268,   270,   271,
     276,   553,   195,     3,    16,   148,   193,   561,   562,   563,
       3,   195,   279,     3,   561,   105,   155,   256,   573,     3,
     195,     3,   154,   279,   576,     3,     3,   521,   134,   243,
     522,    26,   272,   431,   264,   452,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   238,   384,   511,     3,   238,
     511,     3,   391,   396,   400,   391,   391,   428,   122,   123,
     273,     3,     3,   387,   398,   405,   391,    63,   176,   252,
     391,   426,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   385,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   385,   391,   391,
     391,   385,   391,   391,   391,   391,   391,   391,    26,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     385,   385,   385,   385,   385,   391,   391,   385,   385,   385,
     391,   391,     5,   385,   385,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   385,   391,   391,
     391,   385,   385,   391,   391,   391,   391,   391,     6,    18,
     191,   317,   384,    13,    14,    16,    19,   391,    38,    45,
     230,   384,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,     3,   452,     3,   450,
       3,   480,     3,   131,   152,   265,   465,   456,   451,   391,
     385,   385,     3,   529,   453,   175,   213,   462,   454,   161,
     194,   460,     3,     3,     5,   487,    40,    40,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   553,     3,
     243,     3,     3,     3,     5,     3,   377,     5,     5,   275,
       5,    61,     5,   570,   384,   384,   384,   549,   549,   549,
     549,   549,   549,   384,   549,   549,   549,    62,   550,   550,
     549,   549,   549,   384,   550,   549,   550,   384,   384,   384,
      18,    34,    76,   111,     3,   553,     3,     3,     3,   385,
     386,   264,   384,     3,     3,   195,   385,   195,    49,   492,
       3,   195,   279,     3,   152,   214,   349,   383,   384,   555,
     556,   385,   386,     4,   234,   235,   523,   391,   196,   441,
     452,   431,   472,   474,     3,   516,     3,   512,   269,   430,
     516,   269,   430,   386,   385,   251,   122,   123,   391,   391,
     385,   391,   397,   430,   134,   386,   385,   134,   391,   386,
     386,   386,   385,   385,   385,   385,   385,   385,   386,   386,
     386,   386,   385,   386,   386,   386,   385,   385,   385,   385,
     386,   386,   385,   386,   385,   385,   385,    49,   386,   386,
     386,   386,   319,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   386,   386,   386,   385,   386,   348,   348,
     348,   385,   386,   385,   386,   385,   348,   348,   386,   385,
     385,   385,   385,   385,   385,   385,   385,   386,   386,   386,
     386,   386,   386,   386,   386,   385,   386,   385,   385,   385,
     386,   385,   386,   385,   386,     6,   191,   401,   403,   391,
     391,   384,   391,    48,   384,   384,   384,   392,   387,   431,
     134,   386,   451,   162,   162,   162,   430,   465,   385,    20,
     383,   386,   431,   460,   460,   161,   195,   454,   161,    43,
      44,   489,   195,   195,    76,   132,   199,   259,   553,   553,
       3,   220,   220,   548,   553,     3,   243,   243,     5,     5,
     561,   561,     5,   551,   552,   551,   551,     4,   554,   551,
     551,   551,   552,   552,   551,   551,   551,   554,   552,   551,
     552,     5,     5,     5,   191,   387,   384,   391,   384,   553,
     553,   553,   211,   563,   266,     3,   325,   326,   327,   328,
     476,   477,   264,   384,   195,     3,    49,    58,     3,   221,
     222,   138,   493,   264,   384,     3,     3,   195,    92,     3,
      69,    76,   132,   136,   153,   162,   199,   259,   540,   541,
     547,   457,     3,    85,    97,   133,   141,   191,   240,   275,
     384,   524,   525,   526,    61,   177,   444,   431,    20,   197,
     386,   502,   385,   386,   384,   513,   502,   513,   502,   396,
     391,   391,   122,   251,    89,   386,   387,   385,   391,   391,
     391,   134,   159,   427,   427,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   553,   553,   391,   391,
     391,     4,   348,   348,   348,   348,   348,   348,   391,   391,
     391,   391,   384,   384,   384,   348,     5,   348,     5,   348,
     384,   384,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   396,   430,   402,   404,    48,
     391,   395,   391,   393,   399,   394,   399,   430,   139,   432,
     452,     3,   465,   138,   466,   466,   466,   385,   457,   391,
       3,     3,   441,   454,   391,   195,   264,   463,   464,   454,
       3,   490,   490,   384,   162,   162,   384,   548,   548,   553,
      18,    37,    46,    49,    51,    54,    69,    76,    77,   111,
     128,   162,   191,   199,   259,   500,   548,     3,     3,   385,
     385,   385,   386,   257,   278,    80,    81,   385,   386,   385,
     385,   385,   385,    76,   391,   476,    60,    64,   112,   115,
     130,   150,   158,   247,   249,   268,   564,   384,   384,   384,
     384,   384,   385,   386,   266,   476,     3,   264,   384,    58,
     565,   138,    38,   105,   155,   239,   256,   243,   494,   266,
     476,   264,   384,   195,     3,     3,   384,   555,     3,   384,
     162,   153,   162,   384,   384,   162,   384,   385,   386,     3,
     430,     4,    85,   247,     6,     4,     4,   384,   525,   386,
       3,     5,   442,   443,   391,   210,   579,   111,   391,   162,
       3,     3,   111,   391,   515,   386,   502,   502,   122,   391,
     384,   397,   138,   385,   385,   386,   385,   391,   391,   385,
     385,   385,   385,   385,   386,   386,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   386,   385,   384,   384,
     384,   384,   384,   384,   385,   386,   386,   385,   385,   406,
     407,   408,   384,   385,   386,   384,   385,   386,   384,   424,
     425,   385,   386,   386,   386,   385,   385,   386,   386,   385,
     386,   385,   386,   385,   386,   385,   385,   385,   385,   396,
     430,   391,   430,   430,   385,   430,   385,   385,    61,   146,
     436,   431,   161,   384,   384,   384,     3,    20,    20,   383,
     444,   391,   384,   464,   386,   275,   391,   384,   384,     3,
     546,   500,   500,   548,   191,     3,   384,   384,   384,    50,
       3,   384,     4,     4,     5,     6,     7,    70,   331,   332,
     333,   384,   162,   162,   500,   211,    49,    58,     5,   238,
       4,   552,     4,   552,   552,   384,   385,   385,    49,    58,
     476,     3,     3,     3,     3,     3,   384,   385,   384,   266,
     476,   565,     3,     4,     5,     6,     7,     8,    10,    12,
      16,    17,    18,    20,    24,    25,    26,    27,    28,    38,
      48,    49,    52,    57,    58,    59,    60,    61,    64,    66,
      67,    68,    71,    72,    74,    75,    76,    80,    94,    99,
     104,   105,   106,   111,   112,   114,   115,   116,   117,   120,
     122,   123,   124,   125,   127,   129,   130,   132,   134,   135,
     137,   138,   139,   140,   146,   148,   150,   151,   153,   154,
     155,   156,   157,   158,   160,   161,   162,   163,   164,   175,
     177,   179,   188,   190,   191,   192,   193,   194,   195,   196,
     199,   200,   205,   207,   208,   209,   211,   213,   215,   216,
     217,   218,   237,   238,   239,   247,   249,   250,   251,   256,
     258,   259,   260,   264,   268,   269,   272,   273,   274,   275,
     279,   320,   321,   322,   323,   324,   382,   383,   384,   385,
     386,   388,   566,   116,     3,   495,   264,   496,   384,   385,
     266,   476,     3,   264,   384,   138,   540,    76,   132,   199,
     259,   391,   384,   384,   384,     3,   447,   447,   384,   546,
     536,   555,   541,   553,   525,   385,   526,    47,   110,   383,
     434,   434,   386,   179,   386,     3,    26,   580,   256,    20,
     385,   386,   514,   195,   504,     4,   391,   391,   385,   102,
     103,   107,   109,   142,   143,   145,   276,   277,   391,   391,
     391,   410,   411,   409,   412,   413,   414,   391,   391,   349,
     437,   437,   437,   415,   348,     4,     5,   419,   348,     4,
       5,   423,   437,   437,   391,   391,   391,   391,   391,   391,
     391,   391,   385,   385,   385,   385,   385,   391,   433,   391,
     441,   432,     3,   467,   467,   467,   384,   391,   391,     3,
     579,   447,     3,     5,   385,     3,   543,     3,   542,   385,
     386,   500,     5,   391,     5,    49,    76,   199,   259,   391,
     384,   384,   384,   391,   564,    58,   565,   385,     4,   391,
      58,   565,   385,   385,   385,   385,   386,   476,   476,   384,
     385,   122,   565,   565,   565,   565,   565,   565,   215,   386,
     384,   275,   497,   476,   384,   385,   384,   266,   476,   269,
     385,   384,   162,   162,   384,   385,   543,   447,   447,   385,
     386,   385,   542,   385,    46,   170,   195,   226,   349,   535,
     548,   385,     3,   443,   391,   391,   386,   503,   111,   391,
     111,   391,   384,    86,   579,   385,   385,   385,   385,   385,
     385,   437,   437,   437,   437,   437,   437,   385,   386,   385,
      61,   196,   439,   439,   439,   437,   384,   385,   385,   437,
     384,   385,   385,   437,   439,   439,   385,   385,   385,   385,
     385,   386,   385,   385,   434,   275,   386,   435,   444,   436,
     385,   386,   385,   385,     3,    20,   385,    41,    18,   385,
     386,   385,   386,     3,   385,   386,   385,   385,   386,   384,
     384,   162,   385,   385,   385,   385,   385,    49,    58,   565,
     122,   385,   565,   122,     3,   385,   385,   476,   122,   122,
     122,   122,   122,   122,    58,     3,   391,    76,   385,   476,
     476,   384,   385,   134,   536,   555,   391,   384,   384,   546,
     385,   385,   385,     3,   385,     5,    20,   384,     3,    61,
      61,   434,     3,     3,   508,   515,   384,   505,   439,   439,
     439,   439,   439,   439,   391,     3,   438,    61,   385,   385,
     385,   439,   416,   348,   348,   439,   420,   348,   348,   439,
     385,   385,   391,   212,   391,   138,   445,   441,     3,   385,
     391,   267,   205,     3,     3,     5,    55,    56,     5,   391,
     391,    58,   565,   122,   122,   385,   385,    75,   129,   154,
     164,   274,   565,   385,   384,   385,   385,   476,   384,   385,
     543,   542,   385,   205,     5,     3,   105,   246,   202,   266,
     202,    20,   386,   385,     3,    99,   506,   385,   385,   385,
     385,   385,   385,   385,   386,     3,   440,   385,   437,   384,
     384,   385,   437,   384,   384,   385,   385,   434,   228,   256,
     157,   446,   444,     3,   385,   385,   385,   385,   565,   122,
     122,   391,   385,     5,   385,   385,     3,   385,     3,     3,
     384,   384,   384,   391,     3,   385,   386,    88,   256,     3,
     434,   386,   439,   417,   418,   439,   421,   422,   229,   229,
     447,   384,    55,    56,   122,   385,   385,   205,   383,   384,
       3,     3,     3,    20,     3,   507,     3,   385,   437,   437,
     385,   437,   437,   178,   178,     3,   544,   243,     3,     3,
     544,   385,   385,   385,   391,   238,   434,   439,   439,   439,
     439,   385,   386,   384,   383,   384,   384,   385,   384,   227,
     508,   385,   385,   385,   385,   545,     3,     5,     3,   544,
     544,   545,   226,   537,   538,     5,    18,    95,   181,   195,
     385,   384,   385,   385,    18,     3,   385,   386,    95,   267,
     149,   135,   198,   233,   105,   256,   544,   545,   545,   269,
     538,    96,   147,    72,   190,   208,   238,    72,   190,   208,
     238,   385,   172,   111,   191,   111,   191,   545,   248,     4,
     182,   195,   195,   189,   189,     5,     5
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
#line 480 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 486 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 487 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 489 "parser/evoparser.y"
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
#line 502 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 504 "parser/evoparser.y"
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
#line 532 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 540 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 548 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 554 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 561 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 562 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 563 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 564 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 565 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 566 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 567 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 568 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 569 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 570 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 571 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 572 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 573 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 574 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 575 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 576 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 577 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 578 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 579 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 581 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 586 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 587 "parser/evoparser.y"
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
#line 595 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 596 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 597 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 598 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 599 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 600 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 605 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 607 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 610 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 611 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 612 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 613 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 614 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 617 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 618 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 622 "parser/evoparser.y"
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
#line 631 "parser/evoparser.y"
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
#line 649 "parser/evoparser.y"
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
#line 658 "parser/evoparser.y"
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
#line 677 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 678 "parser/evoparser.y"
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
#line 738 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 747 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 753 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 758 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 760 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 762 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 767 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 772 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 778 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 67:
#line 782 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 68:
#line 782 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 69:
#line 783 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 70:
#line 783 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 71:
#line 784 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 72:
#line 785 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 73:
#line 792 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 74:
#line 793 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 75:
#line 800 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 76:
#line 801 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 77:
#line 811 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 78:
#line 815 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 79:
#line 816 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 80:
#line 817 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 81:
#line 818 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 82:
#line 819 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 83:
#line 820 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 84:
#line 821 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 85:
#line 822 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 86:
#line 826 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 87:
#line 827 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 88:
#line 828 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 89:
#line 829 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 90:
#line 830 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 91:
#line 831 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 92:
#line 833 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 93:
#line 834 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 94:
#line 835 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 95:
#line 836 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 96:
#line 837 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 97:
#line 838 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 98:
#line 839 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 99:
#line 840 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 100:
#line 841 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 101:
#line 842 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 102:
#line 843 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 844 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 104:
#line 846 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 847 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 106:
#line 848 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 107:
#line 849 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 108:
#line 850 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 109:
#line 851 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 110:
#line 852 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 111:
#line 853 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 112:
#line 854 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 855 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 114:
#line 856 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 115:
#line 857 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 116:
#line 858 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 117:
#line 859 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 118:
#line 860 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 119:
#line 861 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 120:
#line 863 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 121:
#line 864 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 122:
#line 865 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 123:
#line 866 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 124:
#line 867 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 125:
#line 868 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 126:
#line 871 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 127:
#line 872 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 128:
#line 873 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 129:
#line 874 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 130:
#line 875 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 131:
#line 876 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 132:
#line 877 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 133:
#line 878 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 134:
#line 879 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 135:
#line 880 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 136:
#line 881 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 137:
#line 882 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 138:
#line 883 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 139:
#line 884 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 140:
#line 885 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 141:
#line 886 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 142:
#line 887 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 143:
#line 888 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 144:
#line 889 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 145:
#line 890 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 146:
#line 891 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 147:
#line 892 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 148:
#line 893 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 149:
#line 894 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 150:
#line 895 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 151:
#line 896 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 152:
#line 897 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 153:
#line 898 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 154:
#line 899 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 155:
#line 900 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 156:
#line 901 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 157:
#line 902 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 158:
#line 903 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 159:
#line 904 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 160:
#line 906 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 161:
#line 907 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 162:
#line 908 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 163:
#line 909 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 164:
#line 910 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 165:
#line 911 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 166:
#line 912 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 167:
#line 913 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 168:
#line 915 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 169:
#line 916 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 170:
#line 917 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 171:
#line 918 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 172:
#line 919 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 173:
#line 920 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 174:
#line 921 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 175:
#line 922 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 176:
#line 923 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 177:
#line 924 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 178:
#line 925 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 179:
#line 926 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 180:
#line 927 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 181:
#line 928 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 182:
#line 929 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 183:
#line 930 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 184:
#line 931 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 185:
#line 932 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 186:
#line 933 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 187:
#line 934 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 188:
#line 935 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 189:
#line 936 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 190:
#line 938 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 191:
#line 939 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 192:
#line 940 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 193:
#line 941 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 194:
#line 942 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 195:
#line 944 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 196:
#line 945 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 197:
#line 947 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 198:
#line 948 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 199:
#line 949 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 200:
#line 951 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 201:
#line 952 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 202:
#line 953 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 203:
#line 954 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 204:
#line 961 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 205:
#line 968 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 206:
#line 975 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 207:
#line 979 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 208:
#line 983 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 209:
#line 987 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 210:
#line 991 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 211:
#line 995 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 212:
#line 1001 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 213:
#line 1002 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 214:
#line 1003 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 215:
#line 1007 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 216:
#line 1013 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 217:
#line 1019 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 218:
#line 1020 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 219:
#line 1021 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 220:
#line 1022 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 221:
#line 1023 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 222:
#line 1024 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 223:
#line 1025 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 224:
#line 1026 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 225:
#line 1027 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 226:
#line 1031 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 227:
#line 1033 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 228:
#line 1035 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 229:
#line 1037 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 230:
#line 1041 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 231:
#line 1049 "parser/evoparser.y"
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
#line 1059 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 233:
#line 1060 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 234:
#line 1063 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 235:
#line 1064 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 236:
#line 1068 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 237:
#line 1076 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 238:
#line 1084 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 239:
#line 1092 "parser/evoparser.y"
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
#line 1106 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 241:
#line 1115 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 242:
#line 1120 "parser/evoparser.y"
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
#line 1133 "parser/evoparser.y"
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
#line 1146 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 247:
#line 1148 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 248:
#line 1151 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 249:
#line 1158 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 250:
#line 1166 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 1167 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 252:
#line 1168 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1171 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 254:
#line 1172 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 256:
#line 1176 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1185 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 260:
#line 1187 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 263:
#line 1195 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 264:
#line 1197 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 269:
#line 1209 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 270:
#line 1215 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 271:
#line 1222 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 272:
#line 1230 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 273:
#line 1231 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 274:
#line 1232 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 275:
#line 1233 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 276:
#line 1236 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 277:
#line 1237 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 278:
#line 1238 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 279:
#line 1239 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 280:
#line 1240 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 282:
#line 1244 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 283:
#line 1247 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 284:
#line 1248 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1251 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 286:
#line 1252 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 287:
#line 1253 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 288:
#line 1254 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 289:
#line 1255 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 290:
#line 1256 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 291:
#line 1257 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 292:
#line 1258 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 293:
#line 1259 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 294:
#line 1262 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 295:
#line 1263 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 296:
#line 1265 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 297:
#line 1273 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 298:
#line 1278 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 299:
#line 1279 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 300:
#line 1280 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 301:
#line 1283 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1284 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 305:
#line 1293 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 306:
#line 1301 "parser/evoparser.y"
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
#line 1310 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 308:
#line 1311 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 309:
#line 1313 "parser/evoparser.y"
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
#line 1322 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 311:
#line 1327 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 312:
#line 1333 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 313:
#line 1340 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 314:
#line 1344 "parser/evoparser.y"
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
#line 1364 "parser/evoparser.y"
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
#line 1390 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 319:
#line 1392 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 320:
#line 1394 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 321:
#line 1396 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 322:
#line 1398 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 323:
#line 1401 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 324:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 325:
#line 1403 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 326:
#line 1406 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 327:
#line 1407 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 328:
#line 1410 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 329:
#line 1411 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 330:
#line 1414 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 331:
#line 1415 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 332:
#line 1416 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 335:
#line 1423 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 336:
#line 1424 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 337:
#line 1429 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 338:
#line 1431 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 339:
#line 1433 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 341:
#line 1437 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1438 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 343:
#line 1441 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 344:
#line 1442 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 345:
#line 1445 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 346:
#line 1450 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 347:
#line 1460 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 348:
#line 1467 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 349:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 350:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 351:
#line 1470 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1475 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 353:
#line 1479 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1481 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 357:
#line 1487 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 358:
#line 1492 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 359:
#line 1499 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 360:
#line 1506 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 362:
#line 1518 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 363:
#line 1519 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 364:
#line 1524 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 365:
#line 1531 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 366:
#line 1538 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 367:
#line 1546 "parser/evoparser.y"
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
#line 1556 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 369:
#line 1564 "parser/evoparser.y"
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
#line 1574 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 371:
#line 1582 "parser/evoparser.y"
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
#line 1591 "parser/evoparser.y"
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
#line 1600 "parser/evoparser.y"
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
#line 1610 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 375:
#line 1618 "parser/evoparser.y"
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
#line 1627 "parser/evoparser.y"
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
#line 1636 "parser/evoparser.y"
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
#line 1646 "parser/evoparser.y"
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
#line 1655 "parser/evoparser.y"
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
#line 1667 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 381:
#line 1672 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 382:
#line 1677 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 383:
#line 1683 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 384:
#line 1690 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 385:
#line 1697 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 386:
#line 1704 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 387:
#line 1714 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 388:
#line 1721 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 389:
#line 1730 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 390:
#line 1737 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 391:
#line 1743 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 392:
#line 1751 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 393:
#line 1757 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 395:
#line 1765 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 396:
#line 1766 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 397:
#line 1767 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 398:
#line 1768 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 399:
#line 1784 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 400:
#line 1785 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 401:
#line 1786 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 402:
#line 1790 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 403:
#line 1796 "parser/evoparser.y"
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
#line 1807 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 405:
#line 1813 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 406:
#line 1820 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 407:
#line 1826 "parser/evoparser.y"
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
#line 1842 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 409:
#line 1849 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1858 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 411:
#line 1866 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 412:
#line 1872 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 414:
#line 1889 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 415:
#line 1893 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 416:
#line 1902 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 418:
#line 1917 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 419:
#line 1921 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 420:
#line 1926 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 421:
#line 1933 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 422:
#line 1938 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 423:
#line 1945 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1949 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 425:
#line 1950 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 426:
#line 1956 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 427:
#line 1965 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 428:
#line 1966 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 429:
#line 1967 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 430:
#line 1971 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 431:
#line 1972 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 432:
#line 1973 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 433:
#line 1974 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 434:
#line 1975 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 435:
#line 1976 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 438:
#line 1985 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 439:
#line 1986 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 441:
#line 1991 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 443:
#line 1996 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 444:
#line 2001 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 445:
#line 2010 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 446:
#line 2016 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 447:
#line 2022 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 448:
#line 2029 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 449:
#line 2035 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 450:
#line 2042 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 451:
#line 2048 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 452:
#line 2054 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 453:
#line 2060 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 454:
#line 2066 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 455:
#line 2072 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 456:
#line 2078 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 457:
#line 2084 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 458:
#line 2090 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 459:
#line 2096 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 460:
#line 2102 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 461:
#line 2108 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 462:
#line 2114 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 463:
#line 2120 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 464:
#line 2126 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 465:
#line 2132 "parser/evoparser.y"
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
#line 2145 "parser/evoparser.y"
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
#line 2156 "parser/evoparser.y"
    { ;}
    break;

  case 468:
#line 2157 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 469:
#line 2158 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 470:
#line 2162 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 471:
#line 2170 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 472:
#line 2176 "parser/evoparser.y"
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
#line 2189 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 475:
#line 2189 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 478:
#line 2197 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 479:
#line 2198 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 480:
#line 2199 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 481:
#line 2203 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 482:
#line 2204 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 483:
#line 2205 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 484:
#line 2209 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 485:
#line 2217 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 486:
#line 2226 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 487:
#line 2227 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 488:
#line 2228 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 489:
#line 2229 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 490:
#line 2230 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 494:
#line 2237 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 495:
#line 2241 "parser/evoparser.y"
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
#line 2251 "parser/evoparser.y"
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
#line 2263 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 498:
#line 2264 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 499:
#line 2264 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 500:
#line 2267 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 501:
#line 2268 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 502:
#line 2269 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 503:
#line 2270 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 504:
#line 2274 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 505:
#line 2277 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 506:
#line 2278 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 507:
#line 2279 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 508:
#line 2280 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 509:
#line 2286 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 510:
#line 2292 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 511:
#line 2297 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 512:
#line 2302 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 513:
#line 2306 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 514:
#line 2310 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 515:
#line 2312 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 518:
#line 2318 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 519:
#line 2319 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 520:
#line 2323 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 521:
#line 2324 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 522:
#line 2328 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 523:
#line 2329 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 524:
#line 2330 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 531:
#line 2345 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 532:
#line 2346 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 533:
#line 2347 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 534:
#line 2348 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 535:
#line 2349 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 536:
#line 2350 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 537:
#line 2351 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 538:
#line 2352 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 539:
#line 2357 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 540:
#line 2366 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 541:
#line 2373 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 542:
#line 2374 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 543:
#line 2375 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 544:
#line 2380 "parser/evoparser.y"
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
#line 2391 "parser/evoparser.y"
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
#line 2403 "parser/evoparser.y"
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
#line 2414 "parser/evoparser.y"
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
#line 2429 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 549:
#line 2433 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 550:
#line 2437 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 551:
#line 2438 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 552:
#line 2443 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 553:
#line 2445 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 554:
#line 2447 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 555:
#line 2449 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 556:
#line 2452 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 557:
#line 2453 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 558:
#line 2459 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 559:
#line 2464 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 560:
#line 2466 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 561:
#line 2468 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 562:
#line 2470 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 563:
#line 2472 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 564:
#line 2476 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 565:
#line 2480 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 566:
#line 2481 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 567:
#line 2486 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 568:
#line 2496 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 570:
#line 2509 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 571:
#line 2517 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 572:
#line 2525 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 574:
#line 2533 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 575:
#line 2534 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 576:
#line 2535 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 577:
#line 2536 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 578:
#line 2538 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 579:
#line 2540 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 580:
#line 2542 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 583:
#line 2550 "parser/evoparser.y"
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
#line 2565 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 585:
#line 2573 "parser/evoparser.y"
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
#line 2587 "parser/evoparser.y"
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
#line 2601 "parser/evoparser.y"
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
#line 2615 "parser/evoparser.y"
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
#line 2627 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 590:
#line 2628 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 591:
#line 2629 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 592:
#line 2632 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 593:
#line 2633 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 594:
#line 2636 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 595:
#line 2637 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 596:
#line 2638 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 597:
#line 2639 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 598:
#line 2640 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 599:
#line 2641 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 600:
#line 2642 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 601:
#line 2643 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 602:
#line 2645 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 603:
#line 2647 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 604:
#line 2649 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 605:
#line 2651 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 606:
#line 2653 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 607:
#line 2655 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 608:
#line 2658 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 609:
#line 2659 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 610:
#line 2662 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 611:
#line 2663 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 612:
#line 2666 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 613:
#line 2667 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 615:
#line 2671 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 616:
#line 2672 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 617:
#line 2673 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 618:
#line 2674 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 619:
#line 2675 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 620:
#line 2676 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 621:
#line 2677 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 622:
#line 2678 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 623:
#line 2679 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 624:
#line 2680 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 625:
#line 2681 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 626:
#line 2682 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 627:
#line 2683 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 628:
#line 2684 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 629:
#line 2685 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 630:
#line 2686 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 631:
#line 2687 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 632:
#line 2690 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 633:
#line 2691 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 634:
#line 2694 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 635:
#line 2696 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 636:
#line 2704 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 637:
#line 2705 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 639:
#line 2707 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 640:
#line 2708 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 641:
#line 2709 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 642:
#line 2710 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 643:
#line 2711 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 644:
#line 2712 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 645:
#line 2713 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 646:
#line 2714 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 647:
#line 2715 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 648:
#line 2722 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 649:
#line 2723 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 650:
#line 2724 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 651:
#line 2725 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 652:
#line 2726 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 653:
#line 2727 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 654:
#line 2728 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 655:
#line 2729 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 656:
#line 2730 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 657:
#line 2731 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 658:
#line 2732 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 659:
#line 2733 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 660:
#line 2734 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 661:
#line 2735 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 662:
#line 2736 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 663:
#line 2737 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 664:
#line 2738 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 665:
#line 2739 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 666:
#line 2740 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 667:
#line 2741 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 668:
#line 2742 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 669:
#line 2745 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 670:
#line 2746 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 671:
#line 2747 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 672:
#line 2750 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 673:
#line 2751 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 674:
#line 2754 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 675:
#line 2755 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 676:
#line 2756 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 678:
#line 2760 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 679:
#line 2761 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 680:
#line 2765 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 681:
#line 2766 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 682:
#line 2767 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 683:
#line 2768 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 684:
#line 2769 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 685:
#line 2770 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 686:
#line 2771 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 687:
#line 2772 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 688:
#line 2773 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 689:
#line 2774 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 690:
#line 2775 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 691:
#line 2776 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 692:
#line 2777 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 693:
#line 2778 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 694:
#line 2779 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 695:
#line 2780 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 696:
#line 2781 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 697:
#line 2782 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 698:
#line 2783 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 699:
#line 2784 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 700:
#line 2785 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 701:
#line 2786 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 702:
#line 2787 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 703:
#line 2788 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 704:
#line 2789 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 705:
#line 2790 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 706:
#line 2791 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 707:
#line 2792 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 708:
#line 2793 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 709:
#line 2794 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 710:
#line 2795 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 711:
#line 2796 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 712:
#line 2797 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 713:
#line 2798 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 714:
#line 2799 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 715:
#line 2802 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 716:
#line 2803 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 717:
#line 2807 "parser/evoparser.y"
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

  case 718:
#line 2819 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 719:
#line 2820 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 720:
#line 2821 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 721:
#line 2825 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 722:
#line 2828 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 723:
#line 2829 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 727:
#line 2833 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 728:
#line 2834 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 729:
#line 2842 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 730:
#line 2847 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 731:
#line 2853 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 732:
#line 2859 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 733:
#line 2866 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 734:
#line 2873 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 735:
#line 2879 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 736:
#line 2885 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 737:
#line 2892 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 742:
#line 2908 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 743:
#line 2909 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 744:
#line 2910 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 745:
#line 2911 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 746:
#line 2914 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 747:
#line 2915 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 748:
#line 2916 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 749:
#line 2917 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 750:
#line 2918 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 751:
#line 2919 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 752:
#line 2920 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 753:
#line 2921 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 754:
#line 2922 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 755:
#line 2923 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 764:
#line 2940 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 765:
#line 2941 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 886:
#line 2959 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 887:
#line 2966 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 888:
#line 2971 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 889:
#line 2977 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 890:
#line 2983 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 891:
#line 2989 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 892:
#line 3000 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 893:
#line 3005 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 894:
#line 3011 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 897:
#line 3022 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 898:
#line 3023 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 899:
#line 3024 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 900:
#line 3025 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 901:
#line 3026 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 902:
#line 3027 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 903:
#line 3028 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 904:
#line 3035 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 905:
#line 3040 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 906:
#line 3047 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 907:
#line 3048 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 908:
#line 3051 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 909:
#line 3052 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 910:
#line 3053 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 911:
#line 3056 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 912:
#line 3061 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 913:
#line 3067 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 914:
#line 3076 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 915:
#line 3084 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 916:
#line 3094 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 917:
#line 3099 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 920:
#line 3112 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 921:
#line 3113 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 922:
#line 3114 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 923:
#line 3115 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 924:
#line 3116 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 925:
#line 3117 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 926:
#line 3118 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 927:
#line 3119 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 928:
#line 3122 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 929:
#line 3127 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 930:
#line 3133 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 931:
#line 3143 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 932:
#line 3150 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 933:
#line 3157 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 934:
#line 3165 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 936:
#line 3175 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 938:
#line 3179 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 939:
#line 3180 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11179 "parser/evoparser.tab.c"
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


#line 3183 "parser/evoparser.y"

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
