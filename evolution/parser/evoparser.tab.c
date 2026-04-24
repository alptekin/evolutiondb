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
     VEC_INNER_OP = 275,
     VEC_L2_OP = 276,
     SHIFT = 277,
     MOD = 278,
     JSON_ARROW_TEXT = 279,
     JSON_ARROW = 280,
     UMINUS = 281,
     ALTER = 282,
     ADD = 283,
     AFTER = 284,
     ALL = 285,
     ANALYZE = 286,
     HISTOGRAM = 287,
     BUCKETS = 288,
     SAMPLE = 289,
     PERCENT = 290,
     ROWS = 291,
     ANY = 292,
     AUTO_INCREMENT = 293,
     ASC = 294,
     AND = 295,
     AS = 296,
     ALWAYS = 297,
     IDENTITY = 298,
     CONTINUE = 299,
     RESTART = 300,
     GENERATED = 301,
     STORED = 302,
     VIRTUAL = 303,
     BEFORE = 304,
     BEGINWORK = 305,
     BLOB = 306,
     BOOLEAN = 307,
     BY = 308,
     BINARY = 309,
     BOTH = 310,
     BIGINT = 311,
     BIT = 312,
     CALL = 313,
     CLOSE = 314,
     CURSOR = 315,
     CONSTRAINT = 316,
     CURRENT_TIMESTAMP = 317,
     CREATE = 318,
     CASCADE = 319,
     CHANGE = 320,
     CROSS = 321,
     CASE = 322,
     CHECK = 323,
     COMMENT = 324,
     CURRENT_DATE = 325,
     CURRENT_TIME = 326,
     CHAR = 327,
     COLLATE = 328,
     COLUMN = 329,
     CONCURRENTLY = 330,
     COPY = 331,
     CSV = 332,
     CONFLICT = 333,
     EXCLUDED = 334,
     NOTHING = 335,
     AGAINST = 336,
     MATERIALIZED = 337,
     REFRESH = 338,
     OF = 339,
     DATABASE = 340,
     DECLARE = 341,
     DEFERRABLE = 342,
     DEFERRED = 343,
     DELIMITER = 344,
     DISABLE = 345,
     DO = 346,
     DOMAIN = 347,
     DELAYED = 348,
     DAY_HOUR = 349,
     DAY_MICROSECOND = 350,
     DISTINCT = 351,
     DELETE = 352,
     DROP = 353,
     DAY_MINUTE = 354,
     DISTINCTROW = 355,
     DAY_SECOND = 356,
     DESC = 357,
     DEFAULT = 358,
     DOUBLE = 359,
     DATETIME = 360,
     DECIMAL = 361,
     DATE = 362,
     EACH = 363,
     ELSEIF = 364,
     ENABLE = 365,
     ESCAPED = 366,
     EXCEPT = 367,
     ENUM = 368,
     END = 369,
     ELSE = 370,
     EXECUTE = 371,
     EXIT = 372,
     EXPLAIN = 373,
     FETCH = 374,
     FIRST = 375,
     FOREACH = 376,
     FLOAT = 377,
     FORCE = 378,
     FOREIGN = 379,
     FORMAT = 380,
     FROM = 381,
     FULL = 382,
     FULLTEXT = 383,
     FUNCTION = 384,
     FOR = 385,
     GROUP = 386,
     HANDLER = 387,
     HEADER = 388,
     HOUR_MINUTE = 389,
     HOUR_MICROSECOND = 390,
     HIGH_PRIORITY = 391,
     HOUR_SECOND = 392,
     HAVING = 393,
     IMMEDIATE = 394,
     INOUT = 395,
     INITIALLY = 396,
     INTEGER = 397,
     INNER = 398,
     IGNORE = 399,
     INDEX = 400,
     IF = 401,
     INSERT = 402,
     INTERSECT = 403,
     INTO = 404,
     INT = 405,
     INTERVAL = 406,
     ITERATE = 407,
     JOIN = 408,
     KEY = 409,
     LEAVE = 410,
     LOOP = 411,
     LATERAL = 412,
     LISTEN = 413,
     NOTIFY = 414,
     UNLISTEN = 415,
     SELF = 416,
     INHERITS = 417,
     ONLY = 418,
     LESS = 419,
     LONGTEXT = 420,
     LOW_PRIORITY = 421,
     LEFT = 422,
     LEADING = 423,
     LIMIT = 424,
     LOCKED = 425,
     OFFSET = 426,
     LONGBLOB = 427,
     MATCH = 428,
     MAXVALUE = 429,
     MEDIUMTEXT = 430,
     MINUS = 431,
     MODIFY = 432,
     MEDIUMBLOB = 433,
     MEDIUMINT = 434,
     NATURAL = 435,
     NODE = 436,
     NO_ACTION = 437,
     NULLX = 438,
     OPEN = 439,
     OUT = 440,
     OUTER = 441,
     ON = 442,
     ORDER = 443,
     ONDUPLICATE = 444,
     PARTIAL = 445,
     PRIMARY = 446,
     PROCEDURE = 447,
     QUICK = 448,
     RANGE = 449,
     REAL = 450,
     RECLAIM = 451,
     REFERENCES = 452,
     RENAME = 453,
     RESIGNAL = 454,
     RESTRICT = 455,
     RETURN = 456,
     RETURNING = 457,
     RETURNS = 458,
     ROLLUP = 459,
     RIGHT = 460,
     REPLACE = 461,
     ROW = 462,
     SIGNAL = 463,
     TRIGGER = 464,
     UNTIL = 465,
     POLICY = 466,
     SECURITY = 467,
     PERMISSIVE = 468,
     RESTRICTIVE = 469,
     CURRENT_USER = 470,
     SQL_SMALL_RESULT = 471,
     SCHEMA = 472,
     SHARD = 473,
     SHARDS = 474,
     SHARE = 475,
     SKIP = 476,
     SOME = 477,
     SQL_CALC_FOUND_ROWS = 478,
     SQL_BIG_RESULT = 479,
     SIMPLE = 480,
     STDIN = 481,
     STDOUT = 482,
     STRAIGHT_JOIN = 483,
     SMALLINT = 484,
     SET = 485,
     SELECT = 486,
     QUOTE = 487,
     TINYTEXT = 488,
     TINYINT = 489,
     TO = 490,
     TEMPORARY = 491,
     GLOBAL = 492,
     PRESERVE = 493,
     TEXT = 494,
     THAN = 495,
     TIMESTAMP = 496,
     TABLE = 497,
     THEN = 498,
     TRAILING = 499,
     TRUNCATE = 500,
     TINYBLOB = 501,
     TIME = 502,
     UPDATE = 503,
     UNSIGNED = 504,
     UNION = 505,
     UNIQUE = 506,
     UUID = 507,
     ARRAY = 508,
     JSON = 509,
     VIEW = 510,
     USING = 511,
     USE = 512,
     HASH = 513,
     VALIDATE = 514,
     VARCHAR = 515,
     VALUES = 516,
     VARBINARY = 517,
     VECTOR = 518,
     WHERE = 519,
     WHEN = 520,
     WHILE = 521,
     WITH = 522,
     YEAR = 523,
     YEAR_MONTH = 524,
     ZEROFILL = 525,
     EXISTS = 526,
     FSUBSTRING = 527,
     FTRIM = 528,
     FDATE_ADD = 529,
     FDATE_SUB = 530,
     FDATEDIFF = 531,
     FYEAR = 532,
     FMONTH = 533,
     FDAY = 534,
     FHOUR = 535,
     FMINUTE = 536,
     FSECOND = 537,
     FNOW = 538,
     FLEFT = 539,
     FRIGHT = 540,
     FLPAD = 541,
     FRPAD = 542,
     FREVERSE = 543,
     FREPEAT = 544,
     FINSTR = 545,
     FLOCATE = 546,
     FABS = 547,
     FCEIL = 548,
     FFLOOR = 549,
     FROUND = 550,
     FPOWER = 551,
     FSQRT = 552,
     FMOD = 553,
     FRAND = 554,
     FLOG = 555,
     FLOG10 = 556,
     FSIGN = 557,
     FPI = 558,
     FCAST = 559,
     FCONVERT = 560,
     FNULLIF = 561,
     FIFNULL = 562,
     FIF = 563,
     UNKNOWN = 564,
     FGROUP_CONCAT = 565,
     SEPARATOR = 566,
     FCOUNT = 567,
     FSUM = 568,
     FAVG = 569,
     FMIN = 570,
     FMAX = 571,
     FUPPER = 572,
     FLOWER = 573,
     FLENGTH = 574,
     FCONCAT = 575,
     FREPLACE = 576,
     FCOALESCE = 577,
     FGEN_RANDOM_UUID = 578,
     FGEN_RANDOM_UUID_V7 = 579,
     FSNOWFLAKE_ID = 580,
     FLAST_INSERT_ID = 581,
     FSCOPE_IDENTITY = 582,
     FAT_IDENTITY = 583,
     FAT_LAST_INSERT_ID = 584,
     FEVO_SLEEP = 585,
     FEVO_JITTER = 586,
     FROW_NUMBER = 587,
     FRANK = 588,
     FDENSE_RANK = 589,
     FLEAD = 590,
     FLAG = 591,
     FNTILE = 592,
     FPERCENT_RANK = 593,
     FCUME_DIST = 594,
     OVER = 595,
     PARTITION = 596,
     FJSON_EXTRACT = 597,
     FJSON_UNQUOTE = 598,
     FJSON_TYPE = 599,
     FJSON_LENGTH = 600,
     FJSON_DEPTH = 601,
     FJSON_VALID = 602,
     FJSON_KEYS = 603,
     FJSON_PRETTY = 604,
     FJSON_QUOTE = 605,
     FJSON_SET = 606,
     FJSON_INSERT = 607,
     FJSON_REPLACE = 608,
     FJSON_REMOVE = 609,
     FJSON_CONTAINS = 610,
     FJSON_CONTAINS_PATH = 611,
     FJSON_SEARCH = 612,
     FJSON_OBJECT = 613,
     FJSON_ARRAY = 614,
     FJSON_ARRAYAGG = 615,
     SEQUENCE = 616,
     FNEXTVAL = 617,
     FCURRVAL = 618,
     FSETVAL = 619,
     FLASTVAL = 620,
     START = 621,
     INCREMENT = 622,
     MINVALUE = 623,
     CYCLE = 624,
     FARRAY_LENGTH = 625,
     FUNNEST = 626,
     FEVO_NOTIFY = 627,
     FPG_LISTENING_CHANNELS = 628,
     FCOSINE_DIST = 629,
     FL2_DIST = 630,
     FINNER_PRODUCT = 631,
     FL1_DIST = 632,
     FVECTOR_DIM = 633,
     FVECTOR_NORM = 634,
     FVECTOR_NORMALIZE = 635,
     HNSW = 636,
     FHNSW_KNN = 637
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
#define VEC_INNER_OP 275
#define VEC_L2_OP 276
#define SHIFT 277
#define MOD 278
#define JSON_ARROW_TEXT 279
#define JSON_ARROW 280
#define UMINUS 281
#define ALTER 282
#define ADD 283
#define AFTER 284
#define ALL 285
#define ANALYZE 286
#define HISTOGRAM 287
#define BUCKETS 288
#define SAMPLE 289
#define PERCENT 290
#define ROWS 291
#define ANY 292
#define AUTO_INCREMENT 293
#define ASC 294
#define AND 295
#define AS 296
#define ALWAYS 297
#define IDENTITY 298
#define CONTINUE 299
#define RESTART 300
#define GENERATED 301
#define STORED 302
#define VIRTUAL 303
#define BEFORE 304
#define BEGINWORK 305
#define BLOB 306
#define BOOLEAN 307
#define BY 308
#define BINARY 309
#define BOTH 310
#define BIGINT 311
#define BIT 312
#define CALL 313
#define CLOSE 314
#define CURSOR 315
#define CONSTRAINT 316
#define CURRENT_TIMESTAMP 317
#define CREATE 318
#define CASCADE 319
#define CHANGE 320
#define CROSS 321
#define CASE 322
#define CHECK 323
#define COMMENT 324
#define CURRENT_DATE 325
#define CURRENT_TIME 326
#define CHAR 327
#define COLLATE 328
#define COLUMN 329
#define CONCURRENTLY 330
#define COPY 331
#define CSV 332
#define CONFLICT 333
#define EXCLUDED 334
#define NOTHING 335
#define AGAINST 336
#define MATERIALIZED 337
#define REFRESH 338
#define OF 339
#define DATABASE 340
#define DECLARE 341
#define DEFERRABLE 342
#define DEFERRED 343
#define DELIMITER 344
#define DISABLE 345
#define DO 346
#define DOMAIN 347
#define DELAYED 348
#define DAY_HOUR 349
#define DAY_MICROSECOND 350
#define DISTINCT 351
#define DELETE 352
#define DROP 353
#define DAY_MINUTE 354
#define DISTINCTROW 355
#define DAY_SECOND 356
#define DESC 357
#define DEFAULT 358
#define DOUBLE 359
#define DATETIME 360
#define DECIMAL 361
#define DATE 362
#define EACH 363
#define ELSEIF 364
#define ENABLE 365
#define ESCAPED 366
#define EXCEPT 367
#define ENUM 368
#define END 369
#define ELSE 370
#define EXECUTE 371
#define EXIT 372
#define EXPLAIN 373
#define FETCH 374
#define FIRST 375
#define FOREACH 376
#define FLOAT 377
#define FORCE 378
#define FOREIGN 379
#define FORMAT 380
#define FROM 381
#define FULL 382
#define FULLTEXT 383
#define FUNCTION 384
#define FOR 385
#define GROUP 386
#define HANDLER 387
#define HEADER 388
#define HOUR_MINUTE 389
#define HOUR_MICROSECOND 390
#define HIGH_PRIORITY 391
#define HOUR_SECOND 392
#define HAVING 393
#define IMMEDIATE 394
#define INOUT 395
#define INITIALLY 396
#define INTEGER 397
#define INNER 398
#define IGNORE 399
#define INDEX 400
#define IF 401
#define INSERT 402
#define INTERSECT 403
#define INTO 404
#define INT 405
#define INTERVAL 406
#define ITERATE 407
#define JOIN 408
#define KEY 409
#define LEAVE 410
#define LOOP 411
#define LATERAL 412
#define LISTEN 413
#define NOTIFY 414
#define UNLISTEN 415
#define SELF 416
#define INHERITS 417
#define ONLY 418
#define LESS 419
#define LONGTEXT 420
#define LOW_PRIORITY 421
#define LEFT 422
#define LEADING 423
#define LIMIT 424
#define LOCKED 425
#define OFFSET 426
#define LONGBLOB 427
#define MATCH 428
#define MAXVALUE 429
#define MEDIUMTEXT 430
#define MINUS 431
#define MODIFY 432
#define MEDIUMBLOB 433
#define MEDIUMINT 434
#define NATURAL 435
#define NODE 436
#define NO_ACTION 437
#define NULLX 438
#define OPEN 439
#define OUT 440
#define OUTER 441
#define ON 442
#define ORDER 443
#define ONDUPLICATE 444
#define PARTIAL 445
#define PRIMARY 446
#define PROCEDURE 447
#define QUICK 448
#define RANGE 449
#define REAL 450
#define RECLAIM 451
#define REFERENCES 452
#define RENAME 453
#define RESIGNAL 454
#define RESTRICT 455
#define RETURN 456
#define RETURNING 457
#define RETURNS 458
#define ROLLUP 459
#define RIGHT 460
#define REPLACE 461
#define ROW 462
#define SIGNAL 463
#define TRIGGER 464
#define UNTIL 465
#define POLICY 466
#define SECURITY 467
#define PERMISSIVE 468
#define RESTRICTIVE 469
#define CURRENT_USER 470
#define SQL_SMALL_RESULT 471
#define SCHEMA 472
#define SHARD 473
#define SHARDS 474
#define SHARE 475
#define SKIP 476
#define SOME 477
#define SQL_CALC_FOUND_ROWS 478
#define SQL_BIG_RESULT 479
#define SIMPLE 480
#define STDIN 481
#define STDOUT 482
#define STRAIGHT_JOIN 483
#define SMALLINT 484
#define SET 485
#define SELECT 486
#define QUOTE 487
#define TINYTEXT 488
#define TINYINT 489
#define TO 490
#define TEMPORARY 491
#define GLOBAL 492
#define PRESERVE 493
#define TEXT 494
#define THAN 495
#define TIMESTAMP 496
#define TABLE 497
#define THEN 498
#define TRAILING 499
#define TRUNCATE 500
#define TINYBLOB 501
#define TIME 502
#define UPDATE 503
#define UNSIGNED 504
#define UNION 505
#define UNIQUE 506
#define UUID 507
#define ARRAY 508
#define JSON 509
#define VIEW 510
#define USING 511
#define USE 512
#define HASH 513
#define VALIDATE 514
#define VARCHAR 515
#define VALUES 516
#define VARBINARY 517
#define VECTOR 518
#define WHERE 519
#define WHEN 520
#define WHILE 521
#define WITH 522
#define YEAR 523
#define YEAR_MONTH 524
#define ZEROFILL 525
#define EXISTS 526
#define FSUBSTRING 527
#define FTRIM 528
#define FDATE_ADD 529
#define FDATE_SUB 530
#define FDATEDIFF 531
#define FYEAR 532
#define FMONTH 533
#define FDAY 534
#define FHOUR 535
#define FMINUTE 536
#define FSECOND 537
#define FNOW 538
#define FLEFT 539
#define FRIGHT 540
#define FLPAD 541
#define FRPAD 542
#define FREVERSE 543
#define FREPEAT 544
#define FINSTR 545
#define FLOCATE 546
#define FABS 547
#define FCEIL 548
#define FFLOOR 549
#define FROUND 550
#define FPOWER 551
#define FSQRT 552
#define FMOD 553
#define FRAND 554
#define FLOG 555
#define FLOG10 556
#define FSIGN 557
#define FPI 558
#define FCAST 559
#define FCONVERT 560
#define FNULLIF 561
#define FIFNULL 562
#define FIF 563
#define UNKNOWN 564
#define FGROUP_CONCAT 565
#define SEPARATOR 566
#define FCOUNT 567
#define FSUM 568
#define FAVG 569
#define FMIN 570
#define FMAX 571
#define FUPPER 572
#define FLOWER 573
#define FLENGTH 574
#define FCONCAT 575
#define FREPLACE 576
#define FCOALESCE 577
#define FGEN_RANDOM_UUID 578
#define FGEN_RANDOM_UUID_V7 579
#define FSNOWFLAKE_ID 580
#define FLAST_INSERT_ID 581
#define FSCOPE_IDENTITY 582
#define FAT_IDENTITY 583
#define FAT_LAST_INSERT_ID 584
#define FEVO_SLEEP 585
#define FEVO_JITTER 586
#define FROW_NUMBER 587
#define FRANK 588
#define FDENSE_RANK 589
#define FLEAD 590
#define FLAG 591
#define FNTILE 592
#define FPERCENT_RANK 593
#define FCUME_DIST 594
#define OVER 595
#define PARTITION 596
#define FJSON_EXTRACT 597
#define FJSON_UNQUOTE 598
#define FJSON_TYPE 599
#define FJSON_LENGTH 600
#define FJSON_DEPTH 601
#define FJSON_VALID 602
#define FJSON_KEYS 603
#define FJSON_PRETTY 604
#define FJSON_QUOTE 605
#define FJSON_SET 606
#define FJSON_INSERT 607
#define FJSON_REPLACE 608
#define FJSON_REMOVE 609
#define FJSON_CONTAINS 610
#define FJSON_CONTAINS_PATH 611
#define FJSON_SEARCH 612
#define FJSON_OBJECT 613
#define FJSON_ARRAY 614
#define FJSON_ARRAYAGG 615
#define SEQUENCE 616
#define FNEXTVAL 617
#define FCURRVAL 618
#define FSETVAL 619
#define FLASTVAL 620
#define START 621
#define INCREMENT 622
#define MINVALUE 623
#define CYCLE 624
#define FARRAY_LENGTH 625
#define FUNNEST 626
#define FEVO_NOTIFY 627
#define FPG_LISTENING_CHANNELS 628
#define FCOSINE_DIST 629
#define FL2_DIST 630
#define FINNER_PRODUCT 631
#define FL1_DIST 632
#define FVECTOR_DIM 633
#define FVECTOR_NORM 634
#define FVECTOR_NORMALIZE 635
#define HNSW 636
#define FHNSW_KNN 637




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
#line 931 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 944 "parser/evoparser.tab.c"

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
#define YYLAST   13933

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  196
/* YYNRULES -- Number of rules.  */
#define YYNRULES  958
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2380

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   637

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     395,   396,    28,    26,   397,    27,   394,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   393,
       2,   399,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   398,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    23,     2,     2,     2,     2,     2,
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
      15,    16,    18,    19,    20,    21,    22,    25,    31,    33,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    44,
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392
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
     232,   237,   244,   249,   256,   260,   267,   274,   281,   288,
     293,   298,   303,   307,   311,   322,   323,   325,   326,   333,
     334,   342,   343,   350,   351,   359,   360,   366,   371,   376,
     381,   386,   391,   396,   401,   406,   413,   414,   424,   425,
     435,   436,   446,   447,   458,   459,   470,   471,   482,   483,
     494,   495,   506,   507,   518,   519,   530,   531,   544,   545,
     560,   561,   576,   577,   588,   589,   602,   603,   618,   619,
     634,   635,   646,   647,   657,   658,   668,   677,   684,   691,
     700,   705,   713,   720,   725,   730,   735,   742,   751,   758,
     765,   772,   781,   790,   795,   802,   809,   816,   821,   826,
     831,   838,   843,   850,   855,   862,   866,   871,   876,   881,
     885,   889,   896,   901,   906,   911,   916,   921,   926,   933,
     938,   943,   948,   953,   958,   963,   968,   973,   982,   991,
    1000,  1007,  1014,  1023,  1032,  1039,  1050,  1055,  1062,  1071,
    1076,  1081,  1086,  1093,  1102,  1106,  1113,  1120,  1127,  1134,
    1143,  1147,  1156,  1167,  1171,  1175,  1179,  1183,  1187,  1189,
    1191,  1196,  1203,  1205,  1207,  1209,  1216,  1223,  1227,  1231,
    1235,  1239,  1243,  1247,  1251,  1255,  1259,  1264,  1271,  1275,
    1281,  1286,  1292,  1296,  1301,  1305,  1310,  1312,  1314,  1316,
    1318,  1320,  1324,  1337,  1350,  1351,  1354,  1355,  1360,  1363,
    1368,  1369,  1371,  1373,  1374,  1377,  1378,  1381,  1382,  1386,
    1388,  1392,  1393,  1397,  1400,  1405,  1406,  1410,  1412,  1416,
    1419,  1424,  1427,  1428,  1431,  1436,  1441,  1442,  1445,  1448,
    1453,  1458,  1459,  1462,  1464,  1468,  1469,  1472,  1475,  1478,
    1481,  1484,  1487,  1490,  1493,  1495,  1499,  1501,  1504,  1507,
    1509,  1510,  1512,  1516,  1518,  1520,  1524,  1529,  1535,  1539,
    1543,  1548,  1555,  1565,  1569,  1570,  1576,  1578,  1579,  1585,
    1589,  1595,  1602,  1608,  1609,  1611,  1613,  1614,  1616,  1618,
    1620,  1623,  1626,  1627,  1628,  1630,  1633,  1638,  1645,  1652,
    1659,  1660,  1663,  1664,  1666,  1670,  1674,  1676,  1685,  1688,
    1691,  1694,  1695,  1702,  1705,  1710,  1711,  1714,  1722,  1724,
    1729,  1736,  1737,  1739,  1741,  1743,  1752,  1762,  1773,  1783,
    1795,  1806,  1819,  1831,  1845,  1855,  1867,  1878,  1891,  1903,
    1916,  1929,  1944,  1945,  1947,  1948,  1953,  1955,  1959,  1963,
    1965,  1969,  1971,  1976,  1981,  1986,  1993,  1995,  1999,  2002,
    2006,  2012,  2014,  2018,  2019,  2022,  2025,  2029,  2033,  2035,
    2037,  2039,  2042,  2046,  2049,  2052,  2055,  2060,  2062,  2066,
    2068,  2073,  2080,  2081,  2086,  2091,  2094,  2095,  2100,  2108,
    2113,  2115,  2119,  2121,  2123,  2125,  2136,  2137,  2140,  2143,
    2144,  2147,  2150,  2153,  2156,  2159,  2160,  2163,  2165,  2169,
    2170,  2175,  2176,  2182,  2188,  2199,  2210,  2228,  2241,  2261,
    2273,  2280,  2289,  2296,  2303,  2310,  2320,  2327,  2333,  2342,
    2350,  2360,  2369,  2380,  2390,  2398,  2406,  2407,  2409,  2412,
    2414,  2425,  2432,  2433,  2434,  2440,  2441,  2446,  2447,  2451,
    2456,  2459,  2460,  2466,  2470,  2476,  2477,  2480,  2483,  2486,
    2489,  2491,  2492,  2493,  2497,  2499,  2503,  2507,  2508,  2515,
    2517,  2519,  2523,  2527,  2535,  2539,  2543,  2549,  2555,  2557,
    2566,  2574,  2582,  2584,  2585,  2593,  2594,  2598,  2600,  2604,
    2606,  2608,  2610,  2612,  2614,  2615,  2617,  2622,  2626,  2628,
    2632,  2635,  2638,  2641,  2643,  2646,  2649,  2652,  2654,  2656,
    2666,  2667,  2670,  2673,  2677,  2683,  2689,  2697,  2703,  2705,
    2710,  2715,  2719,  2725,  2729,  2735,  2736,  2739,  2741,  2747,
    2755,  2763,  2773,  2785,  2787,  2790,  2794,  2796,  2807,  2808,
    2813,  2825,  2844,  2845,  2850,  2854,  2860,  2866,  2876,  2887,
    2895,  2897,  2901,  2911,  2921,  2931,  2938,  2950,  2959,  2960,
    2962,  2965,  2967,  2971,  2977,  2985,  2990,  2995,  3001,  3007,
    3012,  3019,  3031,  3045,  3059,  3075,  3080,  3087,  3089,  3093,
    3095,  3099,  3101,  3105,  3106,  3111,  3117,  3122,  3128,  3133,
    3139,  3144,  3150,  3155,  3160,  3164,  3168,  3172,  3175,  3179,
    3184,  3189,  3191,  3195,  3196,  3201,  3202,  3206,  3209,  3213,
    3217,  3221,  3225,  3231,  3237,  3243,  3247,  3253,  3256,  3264,
    3270,  3278,  3284,  3287,  3291,  3294,  3298,  3301,  3305,  3311,
    3316,  3322,  3330,  3339,  3348,  3356,  3363,  3370,  3376,  3377,
    3381,  3387,  3388,  3390,  3391,  3394,  3397,  3398,  3403,  3407,
    3410,  3414,  3418,  3422,  3426,  3430,  3434,  3438,  3442,  3446,
    3450,  3452,  3454,  3456,  3458,  3460,  3464,  3470,  3473,  3478,
    3480,  3482,  3484,  3486,  3490,  3494,  3498,  3502,  3508,  3514,
    3516,  3518,  3520,  3525,  3529,  3531,  3535,  3539,  3540,  3542,
    3544,  3546,  3550,  3554,  3557,  3559,  3563,  3567,  3571,  3573,
    3584,  3594,  3607,  3619,  3632,  3644,  3659,  3673,  3674,  3676,
    3678,  3682,  3685,  3689,  3693,  3697,  3699,  3701,  3703,  3705,
    3707,  3709,  3711,  3713,  3715,  3717,  3718,  3721,  3726,  3732,
    3738,  3744,  3750,  3756,  3758,  3760,  3762,  3764,  3766,  3768,
    3770,  3772,  3774,  3776,  3778,  3780,  3782,  3784,  3786,  3788,
    3790,  3792,  3794,  3796,  3798,  3800,  3802,  3804,  3806,  3808,
    3810,  3812,  3814,  3816,  3818,  3820,  3822,  3824,  3826,  3828,
    3830,  3832,  3834,  3836,  3838,  3840,  3842,  3844,  3846,  3848,
    3850,  3852,  3854,  3856,  3858,  3860,  3862,  3864,  3866,  3868,
    3870,  3872,  3874,  3876,  3878,  3880,  3882,  3884,  3886,  3888,
    3890,  3892,  3894,  3896,  3898,  3900,  3902,  3904,  3906,  3908,
    3910,  3912,  3914,  3916,  3918,  3920,  3922,  3924,  3926,  3928,
    3930,  3932,  3934,  3936,  3938,  3940,  3942,  3944,  3946,  3948,
    3950,  3952,  3954,  3956,  3958,  3960,  3962,  3964,  3966,  3968,
    3970,  3972,  3974,  3976,  3978,  3980,  3982,  3984,  3986,  3988,
    3990,  3992,  3994,  3996,  3998,  4000,  4002,  4004,  4008,  4014,
    4018,  4024,  4026,  4031,  4037,  4039,  4043,  4045,  4047,  4049,
    4051,  4053,  4055,  4057,  4059,  4073,  4075,  4077,  4079,  4081,
    4083,  4085,  4089,  4095,  4100,  4105,  4107,  4113,  4114,  4117,
    4121,  4124,  4128,  4131,  4134,  4137,  4139,  4142,  4144,  4148,
    4154,  4159,  4164,  4171,  4178,  4179,  4182,  4185,  4187
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     401,     0,    -1,   440,   393,    -1,   440,   393,   401,    -1,
       3,    -1,     3,   394,     3,    -1,    89,   394,     3,    -1,
     183,   395,     3,   396,    91,   395,     4,   396,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   402,    26,   402,    -1,   402,    27,   402,    -1,   402,
      28,   402,    -1,   402,    29,   402,    -1,   402,    30,   402,
      -1,   402,    31,   402,    -1,    27,   402,    -1,   395,   402,
     396,    -1,   402,    12,   402,    -1,   402,    10,   402,    -1,
     402,    11,   402,    -1,   402,    23,   402,    -1,   402,    24,
     402,    -1,   402,    32,   402,    -1,   402,    25,   402,    -1,
     402,    34,   402,    -1,   402,    33,   402,    -1,    18,   402,
      -1,    17,   402,    -1,   402,    20,   402,    -1,    -1,   402,
      20,   395,   403,   441,   396,    -1,    -1,   402,    20,    47,
     395,   404,   441,   396,    -1,    -1,   402,    20,   232,   395,
     405,   441,   396,    -1,    -1,   402,    20,    40,   395,   406,
     441,   396,    -1,   402,    20,    47,   395,   410,   396,    -1,
     402,    20,   232,   395,   410,   396,    -1,   402,    15,   193,
      -1,   402,    15,    18,   193,    -1,   402,    15,     6,    -1,
     402,    15,    18,     6,    -1,     8,     9,   402,    -1,   402,
      19,   402,    50,   402,    -1,   402,    18,    19,   402,    50,
     402,    -1,   402,    -1,   402,   397,   407,    -1,   402,    -1,
     402,   397,   408,    -1,    -1,   263,    36,   409,   408,   398,
      -1,   263,    36,   398,    -1,   402,    36,   402,   398,    -1,
     402,    -1,   380,   395,   402,   396,    -1,   380,   395,   402,
     397,   402,   396,    -1,   381,   395,   402,   396,    -1,   382,
     395,   402,   397,   402,   396,    -1,   383,   395,   396,    -1,
     384,   395,   402,   397,   402,   396,    -1,   385,   395,   402,
     397,   402,   396,    -1,   386,   395,   402,   397,   402,   396,
      -1,   387,   395,   402,   397,   402,   396,    -1,   388,   395,
     402,   396,    -1,   389,   395,   402,   396,    -1,   390,   395,
     402,   396,    -1,   402,    22,   402,    -1,   402,    21,   402,
      -1,   392,   395,   402,   397,   402,   397,   402,   397,     5,
     396,    -1,    -1,   407,    -1,    -1,   402,    16,   395,   412,
     407,   396,    -1,    -1,   402,    18,    16,   395,   413,   407,
     396,    -1,    -1,   402,    16,   395,   414,   441,   396,    -1,
      -1,   402,    18,    16,   395,   415,   441,   396,    -1,    -1,
     281,   395,   416,   441,   396,    -1,     3,   395,   411,   396,
      -1,   322,   395,    28,   396,    -1,   322,   395,   402,   396,
      -1,   323,   395,   402,   396,    -1,   324,   395,   402,   396,
      -1,   325,   395,   402,   396,    -1,   326,   395,   402,   396,
      -1,   320,   395,   402,   396,    -1,   320,   395,   402,   321,
       4,   396,    -1,    -1,   342,   395,   396,   350,   395,   417,
     448,   450,   396,    -1,    -1,   343,   395,   396,   350,   395,
     418,   448,   450,   396,    -1,    -1,   344,   395,   396,   350,
     395,   419,   448,   450,   396,    -1,    -1,   323,   395,   402,
     396,   350,   395,   420,   448,   450,   396,    -1,    -1,   322,
     395,    28,   396,   350,   395,   421,   448,   450,   396,    -1,
      -1,   322,   395,   402,   396,   350,   395,   422,   448,   450,
     396,    -1,    -1,   324,   395,   402,   396,   350,   395,   423,
     448,   450,   396,    -1,    -1,   325,   395,   402,   396,   350,
     395,   424,   448,   450,   396,    -1,    -1,   326,   395,   402,
     396,   350,   395,   425,   448,   450,   396,    -1,    -1,   345,
     395,   402,   396,   350,   395,   426,   448,   450,   396,    -1,
      -1,   345,   395,   402,   397,     5,   396,   350,   395,   427,
     448,   450,   396,    -1,    -1,   345,   395,   402,   397,     5,
     397,     4,   396,   350,   395,   428,   448,   450,   396,    -1,
      -1,   345,   395,   402,   397,     5,   397,     5,   396,   350,
     395,   429,   448,   450,   396,    -1,    -1,   346,   395,   402,
     396,   350,   395,   430,   448,   450,   396,    -1,    -1,   346,
     395,   402,   397,     5,   396,   350,   395,   431,   448,   450,
     396,    -1,    -1,   346,   395,   402,   397,     5,   397,     4,
     396,   350,   395,   432,   448,   450,   396,    -1,    -1,   346,
     395,   402,   397,     5,   397,     5,   396,   350,   395,   433,
     448,   450,   396,    -1,    -1,   347,   395,     5,   396,   350,
     395,   434,   448,   450,   396,    -1,    -1,   348,   395,   396,
     350,   395,   435,   448,   450,   396,    -1,    -1,   349,   395,
     396,   350,   395,   436,   448,   450,   396,    -1,   282,   395,
     402,   397,   402,   397,   402,   396,    -1,   282,   395,   402,
     397,   402,   396,    -1,   282,   395,   402,   136,   402,   396,
      -1,   282,   395,   402,   136,   402,   140,   402,   396,    -1,
     283,   395,   402,   396,    -1,   283,   395,   437,   402,   136,
     402,   396,    -1,   283,   395,   437,   136,   402,   396,    -1,
     327,   395,   402,   396,    -1,   328,   395,   402,   396,    -1,
     329,   395,   402,   396,    -1,   330,   395,   402,   397,   402,
     396,    -1,   331,   395,   402,   397,   402,   397,   402,   396,
      -1,   332,   395,   402,   397,   402,   396,    -1,   294,   395,
     402,   397,   402,   396,    -1,   295,   395,   402,   397,   402,
     396,    -1,   296,   395,   402,   397,   402,   397,   402,   396,
      -1,   297,   395,   402,   397,   402,   397,   402,   396,    -1,
     298,   395,   402,   396,    -1,   299,   395,   402,   397,   402,
     396,    -1,   300,   395,   402,   397,   402,   396,    -1,   301,
     395,   402,   397,   402,   396,    -1,   302,   395,   402,   396,
      -1,   303,   395,   402,   396,    -1,   304,   395,   402,   396,
      -1,   305,   395,   402,   397,   402,   396,    -1,   305,   395,
     402,   396,    -1,   306,   395,   402,   397,   402,   396,    -1,
     307,   395,   402,   396,    -1,   308,   395,   402,   397,   402,
     396,    -1,   309,   395,   396,    -1,   310,   395,   402,   396,
      -1,   311,   395,   402,   396,    -1,   312,   395,   402,   396,
      -1,   313,   395,   396,    -1,   293,   395,   396,    -1,   286,
     395,   402,   397,   402,   396,    -1,   287,   395,   402,   396,
      -1,   288,   395,   402,   396,    -1,   289,   395,   402,   396,
      -1,   290,   395,   402,   396,    -1,   291,   395,   402,   396,
      -1,   292,   395,   402,   396,    -1,   352,   395,   402,   397,
     402,   396,    -1,   353,   395,   402,   396,    -1,   354,   395,
     402,   396,    -1,   355,   395,   402,   396,    -1,   356,   395,
     402,   396,    -1,   357,   395,   402,   396,    -1,   358,   395,
     402,   396,    -1,   359,   395,   402,   396,    -1,   360,   395,
     402,   396,    -1,   361,   395,   402,   397,   402,   397,   402,
     396,    -1,   362,   395,   402,   397,   402,   397,   402,   396,
      -1,   363,   395,   402,   397,   402,   397,   402,   396,    -1,
     364,   395,   402,   397,   402,   396,    -1,   365,   395,   402,
     397,   402,   396,    -1,   366,   395,   402,   397,   402,   397,
     402,   396,    -1,   367,   395,   402,   397,   402,   397,   402,
     396,    -1,   368,   395,   402,   397,   402,   396,    -1,   368,
     395,   402,   397,   402,   397,   402,   397,   402,   396,    -1,
     369,   395,   402,   396,    -1,   369,   395,   402,   397,   402,
     396,    -1,   369,   395,   402,   397,   402,   397,   402,   396,
      -1,   370,   395,   402,   396,    -1,   372,   395,   402,   396,
      -1,   373,   395,   402,   396,    -1,   374,   395,   402,   397,
     402,   396,    -1,   374,   395,   402,   397,   402,   397,   402,
     396,    -1,   375,   395,   396,    -1,   314,   395,   402,    51,
     568,   396,    -1,   315,   395,   402,   397,   568,   396,    -1,
     316,   395,   402,   397,   402,   396,    -1,   317,   395,   402,
     397,   402,   396,    -1,   318,   395,   402,   397,   402,   397,
     402,   396,    -1,   402,    15,   319,    -1,   330,   395,   402,
     397,   402,   397,   402,   396,    -1,   330,   395,   402,   397,
     402,   397,   402,   397,   402,   396,    -1,   333,   395,   396,
      -1,   334,   395,   396,    -1,   335,   395,   396,    -1,   336,
     395,   396,    -1,   337,   395,   396,    -1,   338,    -1,   339,
      -1,   340,   395,   402,   396,    -1,   341,   395,   402,   397,
     402,   396,    -1,   178,    -1,   254,    -1,    65,    -1,   284,
     395,   402,   397,   438,   396,    -1,   285,   395,   402,   397,
     438,   396,    -1,   161,   402,   278,    -1,   161,   402,   104,
      -1,   161,   402,   105,    -1,   161,   402,   109,    -1,   161,
     402,   111,    -1,   161,   402,   279,    -1,   161,   402,   145,
      -1,   161,   402,   144,    -1,   161,   402,   147,    -1,    77,
     402,   439,   124,    -1,    77,   402,   439,   125,   402,   124,
      -1,    77,   439,   124,    -1,    77,   439,   125,   402,   124,
      -1,   275,   402,   253,   402,    -1,   439,   275,   402,   253,
     402,    -1,   402,    14,   402,    -1,   402,    18,    14,   402,
      -1,   402,    13,   402,    -1,   402,    18,    13,   402,    -1,
      72,    -1,    80,    -1,    81,    -1,   225,    -1,   441,    -1,
     241,   459,   460,    -1,   241,   459,   460,   136,   463,   442,
     443,   447,   452,   455,   456,   457,    -1,   241,   459,   460,
     159,     3,   136,   463,   442,   443,   447,   452,   455,    -1,
      -1,   274,   402,    -1,    -1,   141,    63,   444,   446,    -1,
     402,   445,    -1,   444,   397,   402,   445,    -1,    -1,    49,
      -1,   112,    -1,    -1,   277,   214,    -1,    -1,   148,   402,
      -1,    -1,   351,    63,   449,    -1,     3,    -1,   449,   397,
       3,    -1,    -1,   198,    63,   451,    -1,     3,   445,    -1,
     451,   397,     3,   445,    -1,    -1,   198,    63,   453,    -1,
     454,    -1,   453,   397,   454,    -1,     3,   445,    -1,     3,
     394,     3,   445,    -1,     5,   445,    -1,    -1,   179,   402,
      -1,   179,   402,   397,   402,    -1,   179,   402,   181,   402,
      -1,    -1,   140,   258,    -1,   140,   230,    -1,   140,   258,
     231,   180,    -1,   140,   230,   231,   180,    -1,    -1,   159,
     458,    -1,     3,    -1,   458,   397,     3,    -1,    -1,   459,
      40,    -1,   459,   106,    -1,   459,   110,    -1,   459,   146,
      -1,   459,   238,    -1,   459,   226,    -1,   459,   234,    -1,
     459,   233,    -1,   461,    -1,   460,   397,   461,    -1,    28,
      -1,   402,   462,    -1,    51,     3,    -1,     3,    -1,    -1,
     464,    -1,   463,   397,   464,    -1,   465,    -1,   469,    -1,
       3,   462,   476,    -1,   173,     3,   462,   476,    -1,     3,
     394,     3,   462,   476,    -1,   479,   468,     3,    -1,   466,
     468,     3,    -1,   381,   395,   402,   396,    -1,   381,   395,
     402,   396,   468,     3,    -1,   381,   395,   402,   396,   468,
       3,   395,     3,   396,    -1,   395,   463,   396,    -1,    -1,
     167,   395,   467,   441,   396,    -1,    51,    -1,    -1,   464,
     470,   163,   465,   474,    -1,   464,   238,   465,    -1,   464,
     238,   465,   197,   402,    -1,   464,   472,   471,   163,   465,
     475,    -1,   464,   190,   473,   163,   465,    -1,    -1,   153,
      -1,    76,    -1,    -1,   196,    -1,   177,    -1,   215,    -1,
     177,   471,    -1,   215,   471,    -1,    -1,    -1,   475,    -1,
     197,   402,    -1,   266,   395,   458,   396,    -1,   267,   164,
     477,   395,   478,   396,    -1,   154,   164,   477,   395,   478,
     396,    -1,   133,   164,   477,   395,   478,   396,    -1,    -1,
     140,   163,    -1,    -1,     3,    -1,   478,   397,     3,    -1,
     395,   441,   396,    -1,   480,    -1,   107,   481,   136,     3,
     442,   452,   455,   594,    -1,   481,   176,    -1,   481,   203,
      -1,   481,   154,    -1,    -1,   107,   481,   482,   136,   463,
     442,    -1,     3,   483,    -1,   482,   397,     3,   483,    -1,
      -1,   394,    28,    -1,   107,   481,   136,   482,   266,   463,
     442,    -1,   484,    -1,   108,   252,     3,   485,    -1,   108,
     252,   156,   281,     3,   485,    -1,    -1,    74,    -1,   210,
      -1,   486,    -1,    73,   155,     3,   197,     3,   395,   491,
     396,    -1,    73,   138,   155,     3,   197,     3,   395,   491,
     396,    -1,    73,   155,   156,   281,     3,   197,     3,   395,
     491,   396,    -1,    73,   261,   155,     3,   197,     3,   395,
     491,   396,    -1,    73,   261,   155,   156,   281,     3,   197,
       3,   395,   491,   396,    -1,    73,   155,     3,   197,     3,
     266,   268,   395,   491,   396,    -1,    73,   155,   156,   281,
       3,   197,     3,   266,   268,   395,   491,   396,    -1,    73,
     261,   155,     3,   197,     3,   266,   268,   395,   491,   396,
      -1,    73,   261,   155,   156,   281,     3,   197,     3,   266,
     268,   395,   491,   396,    -1,    73,   155,    85,     3,   197,
       3,   395,   491,   396,    -1,    73,   155,    85,   156,   281,
       3,   197,     3,   395,   491,   396,    -1,    73,   261,   155,
      85,     3,   197,     3,   395,   491,   396,    -1,    73,   261,
     155,    85,   156,   281,     3,   197,     3,   395,   491,   396,
      -1,    73,   155,    85,     3,   197,     3,   266,   268,   395,
     491,   396,    -1,    73,   261,   155,    85,     3,   197,     3,
     266,   268,   395,   491,   396,    -1,    73,   155,     3,   197,
       3,   266,   391,   395,     3,   487,   396,   488,    -1,    73,
     155,   156,   281,     3,   197,     3,   266,   391,   395,     3,
     487,   396,   488,    -1,    -1,     3,    -1,    -1,   277,   395,
     489,   396,    -1,   490,    -1,   489,   397,   490,    -1,     3,
      20,     5,    -1,     3,    -1,   491,   397,     3,    -1,   492,
      -1,   327,   395,     3,   396,    -1,   328,   395,     3,   396,
      -1,   329,   395,     3,   396,    -1,   330,   395,     3,   397,
       3,   396,    -1,   493,    -1,   108,   155,     3,    -1,   494,
     496,    -1,   255,   252,     3,    -1,   255,   252,     3,   397,
     495,    -1,     3,    -1,   495,   397,     3,    -1,    -1,   496,
      74,    -1,   496,   210,    -1,   496,    55,    53,    -1,   496,
      54,    53,    -1,   497,    -1,   498,    -1,   499,    -1,   168,
       3,    -1,   168,     3,   171,    -1,   170,     3,    -1,   170,
      28,    -1,   169,     3,    -1,   169,     3,   397,     4,    -1,
     500,    -1,   206,   252,     3,    -1,   501,    -1,   503,     3,
     502,   504,    -1,   503,     3,   394,     3,   502,   504,    -1,
      -1,   277,    44,     5,    45,    -1,   277,    44,     5,    46,
      -1,    41,   252,    -1,    -1,   258,    42,   197,   505,    -1,
     258,    42,   197,   505,   277,     5,    43,    -1,   108,    42,
     197,   505,    -1,     3,    -1,   505,   397,     3,    -1,   514,
      -1,   506,    -1,   513,    -1,    73,   221,     3,   197,     3,
     507,   508,   509,   511,   512,    -1,    -1,    51,   223,    -1,
      51,   224,    -1,    -1,   140,    40,    -1,   140,   241,    -1,
     140,   157,    -1,   140,   258,    -1,   140,   107,    -1,    -1,
     245,   510,    -1,     3,    -1,   510,   397,     3,    -1,    -1,
     266,   395,   402,   396,    -1,    -1,   277,    78,   395,   402,
     396,    -1,   108,   221,     3,   197,     3,    -1,    37,   252,
       3,    38,    71,     3,    78,   395,   402,   396,    -1,    37,
     252,     3,    38,    71,     3,   261,   395,   561,   396,    -1,
      37,   252,     3,    38,    71,     3,   134,   164,   395,   558,
     396,   207,     3,   395,   559,   396,   560,    -1,    37,   252,
       3,    38,    71,     3,    78,   395,   402,   396,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   134,   164,   395,
     558,   396,   207,     3,   395,   559,   396,   560,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   201,   164,   395,
     557,   396,    -1,    37,   252,     3,   108,    71,     3,    -1,
      37,   252,     3,   208,    71,     3,   245,     3,    -1,    37,
     252,     3,   120,    71,     3,    -1,    37,   252,     3,   100,
      71,     3,    -1,    37,   252,     3,   269,    71,     3,    -1,
      37,   252,     3,    38,    84,     3,   568,   563,   515,    -1,
      37,   252,     3,   108,    84,     3,    -1,    37,   252,     3,
     108,     3,    -1,    37,   252,     3,   208,    84,     3,   245,
       3,    -1,    37,   252,     3,   208,     3,   245,     3,    -1,
      37,   252,     3,   187,    84,     3,   568,   563,   515,    -1,
      37,   252,     3,   187,     3,   568,   563,   515,    -1,    37,
     252,     3,    75,    84,     3,     3,   568,   563,   515,    -1,
      37,   252,     3,    75,     3,     3,   568,   563,   515,    -1,
      37,   252,     3,   120,   217,     3,   222,    -1,    37,   252,
       3,   100,   217,     3,   222,    -1,    -1,   130,    -1,    39,
       3,    -1,   516,    -1,   157,   524,   525,     3,   526,   271,
     528,   517,   519,   594,    -1,   157,   524,   525,     3,   526,
     441,    -1,    -1,    -1,   199,   164,   258,   518,   523,    -1,
      -1,   197,    88,   520,   521,    -1,    -1,   395,     3,   396,
      -1,   395,     3,   397,     3,    -1,   101,    90,    -1,    -1,
     101,   258,   522,   240,   523,    -1,     3,    20,   402,    -1,
     523,   397,     3,    20,   402,    -1,    -1,   524,   176,    -1,
     524,   103,    -1,   524,   146,    -1,   524,   154,    -1,   159,
      -1,    -1,    -1,   395,   527,   396,    -1,     3,    -1,   527,
     397,     3,    -1,   395,   530,   396,    -1,    -1,   528,   397,
     529,   395,   530,   396,    -1,   402,    -1,   113,    -1,   530,
     397,   402,    -1,   530,   397,   113,    -1,   157,   524,   525,
       3,   240,   531,   517,    -1,     3,    20,   402,    -1,     3,
      20,   113,    -1,   531,   397,     3,    20,   402,    -1,   531,
     397,     3,    20,   113,    -1,   532,    -1,   216,   524,   525,
       3,   526,   271,   528,   517,    -1,   216,   524,   525,     3,
     240,   531,   517,    -1,   216,   524,   525,     3,   526,   441,
     517,    -1,   533,    -1,    -1,    86,     3,   534,   535,   537,
     538,   539,    -1,    -1,   395,   536,   396,    -1,     3,    -1,
     536,   397,     3,    -1,   136,    -1,   245,    -1,     4,    -1,
     236,    -1,   237,    -1,    -1,   540,    -1,   277,   395,   540,
     396,    -1,   395,   540,   396,    -1,   541,    -1,   540,   397,
     541,    -1,   135,    87,    -1,   135,   249,    -1,    99,     4,
      -1,   143,    -1,   143,     6,    -1,   193,     4,    -1,   242,
       4,    -1,    87,    -1,   542,    -1,   258,   543,   463,   240,
     544,   442,   452,   455,   594,    -1,    -1,   524,   176,    -1,
     524,   154,    -1,     3,    20,   402,    -1,     3,   394,     3,
      20,   402,    -1,   544,   397,     3,    20,   402,    -1,   544,
     397,     3,   394,     3,    20,   402,    -1,   208,   252,     3,
     245,     3,    -1,   545,    -1,    73,    95,   546,     3,    -1,
      73,   227,   546,     3,    -1,   108,    95,     3,    -1,   108,
      95,   156,   281,     3,    -1,   108,   227,     3,    -1,   108,
     227,   156,   281,     3,    -1,    -1,   156,   281,    -1,   547,
      -1,    73,   102,     3,    51,   568,    -1,    73,   102,     3,
      51,   568,   113,   402,    -1,    73,   102,     3,    51,   568,
      18,   193,    -1,    73,   102,     3,    51,   568,    78,   395,
     402,   396,    -1,    73,   102,     3,    51,   568,    18,   193,
      78,   395,   402,   396,    -1,   548,    -1,   267,     3,    -1,
     267,    95,     3,    -1,   549,    -1,    73,   554,   252,   546,
       3,   395,   555,   396,   551,   550,    -1,    -1,   172,   395,
       3,   396,    -1,    73,   554,   252,   546,     3,   394,     3,
     395,   555,   396,   551,    -1,    73,   554,   252,   546,     3,
     351,    94,     3,   140,   271,   136,   395,     5,   396,   245,
     395,     5,   396,    -1,    -1,   551,    48,    20,     5,    -1,
     551,    48,     5,    -1,   551,   197,     3,   107,     3,    -1,
     551,   197,     3,   248,     3,    -1,   551,   228,    63,   268,
     395,     3,   396,   229,     5,    -1,   551,   228,    63,   204,
     395,     3,   396,   395,   552,   396,    -1,   551,   351,    63,
     204,   395,     3,   396,    -1,   553,    -1,   552,   397,   553,
      -1,   228,     3,   271,   174,   250,     4,   197,   191,     5,
      -1,   228,     3,   271,   174,   250,   184,   197,   191,     5,
      -1,    73,   554,   252,   546,     3,   395,   555,   396,   570,
      -1,    73,   554,   252,   546,     3,   570,    -1,    73,   554,
     252,   546,     3,   394,     3,   395,   555,   396,   570,    -1,
      73,   554,   252,   546,     3,   394,     3,   570,    -1,    -1,
     246,    -1,   247,   246,    -1,   556,    -1,   555,   397,   556,
      -1,   201,   164,   395,   557,   396,    -1,    71,     3,   201,
     164,   395,   557,   396,    -1,   164,   395,   458,   396,    -1,
     155,   395,   458,   396,    -1,   138,   155,   395,   458,   396,
      -1,   138,   164,   395,   458,   396,    -1,    78,   395,   402,
     396,    -1,    71,     3,    78,   395,   402,   396,    -1,   134,
     164,   395,   558,   396,   207,     3,   395,   559,   396,   560,
      -1,   134,   164,   395,   558,   396,   207,     3,   394,     3,
     395,   559,   396,   560,    -1,    71,     3,   134,   164,   395,
     558,   396,   207,     3,   395,   559,   396,   560,    -1,    71,
       3,   134,   164,   395,   558,   396,   207,     3,   394,     3,
     395,   559,   396,   560,    -1,   261,   395,   561,   396,    -1,
      71,     3,   261,   395,   561,   396,    -1,     3,    -1,   557,
     397,     3,    -1,     3,    -1,   558,   397,     3,    -1,     3,
      -1,   559,   397,     3,    -1,    -1,   560,   197,   107,    74,
      -1,   560,   197,   107,   240,   193,    -1,   560,   197,   107,
     210,    -1,   560,   197,   107,   240,   113,    -1,   560,   197,
     258,    74,    -1,   560,   197,   258,   240,   193,    -1,   560,
     197,   258,   210,    -1,   560,   197,   258,   240,   113,    -1,
     560,   197,   107,   192,    -1,   560,   197,   258,   192,    -1,
     560,   183,   137,    -1,   560,   183,   235,    -1,   560,   183,
     200,    -1,   560,    97,    -1,   560,    18,    97,    -1,   560,
      97,   151,    98,    -1,   560,    97,   151,   149,    -1,     3,
      -1,   561,   397,     3,    -1,    -1,   562,     3,   568,   563,
      -1,    -1,   563,    18,   193,    -1,   563,   193,    -1,   563,
     113,     4,    -1,   563,   113,     5,    -1,   563,   113,     7,
      -1,   563,   113,     6,    -1,   563,   113,   333,   395,   396,
      -1,   563,   113,   334,   395,   396,    -1,   563,   113,   335,
     395,   396,    -1,   563,   113,    72,    -1,   563,   113,   395,
     402,   396,    -1,   563,    48,    -1,   563,    48,   395,     5,
     397,     5,   396,    -1,   563,    48,   395,     5,   396,    -1,
     563,    53,   395,     5,   397,     5,   396,    -1,   563,    53,
     395,     5,   396,    -1,   563,    53,    -1,   563,   261,   164,
      -1,   563,   261,    -1,   563,   201,   164,    -1,   563,   164,
      -1,   563,    79,     4,    -1,   563,    78,   395,   402,   396,
      -1,   563,    71,     3,   261,    -1,   563,    71,     3,   201,
     164,    -1,   563,    71,     3,    78,   395,   402,   396,    -1,
     563,    56,    52,    51,   395,   402,   396,    57,    -1,   563,
      56,    52,    51,   395,   402,   396,    58,    -1,   563,    56,
      52,    51,   395,   402,   396,    -1,   563,    51,   395,   402,
     396,    57,    -1,   563,    51,   395,   402,   396,    58,    -1,
     563,    51,   395,   402,   396,    -1,    -1,   395,     5,   396,
      -1,   395,     5,   397,     5,   396,    -1,    -1,    64,    -1,
      -1,   566,   259,    -1,   566,   280,    -1,    -1,   567,    82,
     240,     4,    -1,   567,    83,     4,    -1,    67,   564,    -1,
     244,   564,   566,    -1,   239,   564,   566,    -1,   189,   564,
     566,    -1,   160,   564,   566,    -1,   152,   564,   566,    -1,
      66,   564,   566,    -1,   205,   564,   566,    -1,   114,   564,
     566,    -1,   132,   564,   566,    -1,   116,   564,   566,    -1,
     117,    -1,   257,    -1,   251,    -1,   115,    -1,   278,    -1,
      82,   564,   567,    -1,   270,   395,     5,   396,   567,    -1,
      64,   564,    -1,   272,   395,     5,   396,    -1,   256,    -1,
      61,    -1,   188,    -1,   182,    -1,   243,   565,   567,    -1,
     249,   565,   567,    -1,   185,   565,   567,    -1,   175,   565,
     567,    -1,   123,   395,   569,   396,   567,    -1,   240,   395,
     569,   396,   567,    -1,    62,    -1,   262,    -1,   264,    -1,
     273,   395,     5,   396,    -1,   568,    36,   398,    -1,     4,
      -1,   569,   397,     4,    -1,   571,   468,   441,    -1,    -1,
     154,    -1,   216,    -1,   572,    -1,   240,   227,     3,    -1,
     240,   227,   113,    -1,   240,   573,    -1,   574,    -1,   573,
     397,   574,    -1,     8,    20,   402,    -1,     8,     9,   402,
      -1,   575,    -1,    73,   202,     3,   395,   576,   396,    51,
      60,   580,   124,    -1,    73,   202,     3,   395,   576,   396,
      60,   580,   124,    -1,    73,    10,   216,   202,     3,   395,
     576,   396,    51,    60,   580,   124,    -1,    73,    10,   216,
     202,     3,   395,   576,   396,    60,   580,   124,    -1,    73,
     139,     3,   395,   576,   396,   213,   579,    51,    60,   580,
     124,    -1,    73,   139,     3,   395,   576,   396,   213,   579,
      60,   580,   124,    -1,    73,    10,   216,   139,     3,   395,
     576,   396,   213,   579,    51,    60,   580,   124,    -1,    73,
      10,   216,   139,     3,   395,   576,   396,   213,   579,    60,
     580,   124,    -1,    -1,   577,    -1,   578,    -1,   577,   397,
     578,    -1,     3,   568,    -1,    16,     3,   568,    -1,   195,
       3,   568,    -1,   150,     3,   568,    -1,   152,    -1,   160,
      -1,   270,    -1,   249,    -1,    62,    -1,   132,    -1,   114,
      -1,    66,    -1,   117,    -1,   251,    -1,    -1,   580,   581,
      -1,   580,    60,   580,   124,    -1,   580,   156,   580,   124,
     156,    -1,   580,   276,   580,   124,   276,    -1,   580,   166,
     580,   124,   166,    -1,   580,   131,   580,   124,   131,    -1,
     580,    77,   580,   124,    77,    -1,     3,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,    -1,
      10,    -1,    12,    -1,    16,    -1,    50,    -1,   241,    -1,
     157,    -1,   258,    -1,   107,    -1,   136,    -1,   274,    -1,
     240,    -1,   159,    -1,   271,    -1,    73,    -1,   108,    -1,
     252,    -1,   155,    -1,   253,    -1,   125,    -1,   119,    -1,
      96,    -1,   101,    -1,    68,    -1,   211,    -1,   165,    -1,
     162,    -1,    70,    -1,   194,    -1,   129,    -1,    69,    -1,
     142,    -1,   127,    -1,   195,    -1,   150,    -1,   140,    -1,
      54,    -1,   218,    -1,   209,    -1,   126,    -1,   220,    -1,
      59,    -1,   118,    -1,   217,    -1,   219,    -1,    51,    -1,
     197,    -1,   198,    -1,    63,    -1,   141,    -1,   148,    -1,
     179,    -1,   181,    -1,   163,    -1,   177,    -1,   215,    -1,
     153,    -1,   196,    -1,   137,    -1,    76,    -1,   190,    -1,
     266,    -1,   193,    -1,   113,    -1,   201,    -1,   164,    -1,
     261,    -1,    78,    -1,   134,    -1,   207,    -1,    74,    -1,
     210,    -1,   192,    -1,   152,    -1,   160,    -1,   270,    -1,
     249,    -1,    62,    -1,   132,    -1,   114,    -1,    66,    -1,
     117,    -1,   251,    -1,   239,    -1,   116,    -1,    82,    -1,
     262,    -1,    61,    -1,   260,    -1,   122,    -1,   158,    -1,
      40,    -1,   106,    -1,   281,    -1,   275,    -1,   277,    -1,
     202,    -1,   139,    -1,   213,    -1,   395,    -1,   396,    -1,
     397,    -1,   393,    -1,   394,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    17,    -1,   399,    -1,
     322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
       8,    -1,   582,    -1,   108,   202,     3,    -1,   108,   202,
     156,   281,     3,    -1,   108,   139,     3,    -1,   108,   139,
     156,   281,     3,    -1,   583,    -1,    68,     3,   395,   396,
      -1,    68,     3,   395,   584,   396,    -1,   585,    -1,   584,
     397,   585,    -1,     5,    -1,     4,    -1,     7,    -1,   193,
      -1,     6,    -1,     3,    -1,     8,    -1,   586,    -1,    73,
     219,     3,   587,   588,   197,     3,   140,   118,   217,    60,
     580,   124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,
      -1,   107,    -1,   589,    -1,   108,   219,     3,    -1,   108,
     219,   156,   281,     3,    -1,    37,   219,     3,   120,    -1,
      37,   219,     3,   100,    -1,   590,    -1,    73,   371,   546,
       3,   591,    -1,    -1,   591,   592,    -1,   376,   277,     5,
      -1,   376,     5,    -1,   377,    63,     5,    -1,   377,     5,
      -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,    18,
     379,    -1,   593,    -1,   108,   371,     3,    -1,   108,   371,
     156,   281,     3,    -1,    37,   371,     3,   591,    -1,    37,
     371,     3,    55,    -1,    37,   371,     3,    55,   277,     5,
      -1,    37,   371,     3,   208,   245,     3,    -1,    -1,   212,
      28,    -1,   212,   595,    -1,     3,    -1,   595,   397,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   484,   484,   485,   490,   497,   498,   499,   513,   514,
     542,   550,   558,   564,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   597,   597,   606,   606,   608,   608,
     610,   610,   615,   617,   621,   622,   623,   624,   625,   628,
     629,   632,   641,   659,   668,   688,   688,   748,   757,   764,
     768,   770,   772,   777,   782,   790,   792,   794,   796,   798,
     800,   802,   804,   806,   808,   817,   818,   821,   821,   822,
     822,   823,   823,   831,   831,   839,   839,   850,   854,   855,
     856,   857,   858,   859,   860,   861,   865,   865,   867,   867,
     869,   869,   872,   872,   874,   874,   876,   876,   878,   878,
     880,   880,   882,   882,   885,   885,   887,   887,   889,   889,
     891,   891,   893,   893,   895,   895,   897,   897,   899,   899,
     902,   902,   904,   904,   906,   906,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     924,   925,   926,   927,   928,   929,   930,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     945,   946,   947,   948,   949,   950,   951,   952,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     977,   978,   979,   980,   981,   983,   984,   986,   987,   988,
     990,   991,   992,   993,  1000,  1007,  1014,  1018,  1022,  1026,
    1030,  1034,  1040,  1041,  1042,  1045,  1051,  1058,  1059,  1060,
    1061,  1062,  1063,  1064,  1065,  1066,  1069,  1071,  1073,  1075,
    1079,  1087,  1098,  1099,  1102,  1103,  1106,  1114,  1122,  1130,
    1144,  1154,  1155,  1168,  1184,  1185,  1186,  1187,  1190,  1197,
    1205,  1206,  1207,  1210,  1211,  1214,  1215,  1219,  1220,  1223,
    1225,  1229,  1230,  1233,  1235,  1239,  1240,  1243,  1244,  1247,
    1253,  1260,  1269,  1270,  1271,  1272,  1275,  1276,  1277,  1278,
    1279,  1282,  1283,  1286,  1287,  1290,  1291,  1292,  1293,  1294,
    1295,  1296,  1297,  1298,  1301,  1302,  1303,  1311,  1317,  1318,
    1319,  1322,  1323,  1326,  1327,  1331,  1339,  1349,  1350,  1351,
    1360,  1365,  1371,  1379,  1383,  1383,  1423,  1424,  1428,  1430,
    1432,  1434,  1436,  1440,  1441,  1442,  1445,  1446,  1449,  1450,
    1453,  1454,  1455,  1458,  1459,  1462,  1463,  1467,  1469,  1471,
    1473,  1476,  1477,  1480,  1481,  1484,  1488,  1498,  1506,  1507,
    1508,  1509,  1513,  1517,  1519,  1523,  1523,  1525,  1530,  1537,
    1544,  1556,  1557,  1558,  1562,  1569,  1576,  1584,  1594,  1602,
    1612,  1620,  1629,  1638,  1648,  1656,  1665,  1674,  1684,  1693,
    1710,  1718,  1730,  1731,  1745,  1746,  1749,  1750,  1762,  1772,
    1777,  1782,  1788,  1795,  1802,  1809,  1819,  1826,  1835,  1842,
    1848,  1856,  1862,  1870,  1871,  1872,  1873,  1874,  1890,  1891,
    1892,  1895,  1901,  1912,  1918,  1925,  1931,  1947,  1954,  1963,
    1971,  1977,  1992,  1994,  1998,  2007,  2020,  2022,  2026,  2031,
    2038,  2043,  2051,  2055,  2056,  2060,  2071,  2072,  2073,  2077,
    2078,  2079,  2080,  2081,  2082,  2085,  2087,  2091,  2092,  2095,
    2097,  2100,  2102,  2106,  2115,  2121,  2127,  2134,  2140,  2147,
    2153,  2159,  2165,  2171,  2177,  2183,  2189,  2195,  2201,  2207,
    2213,  2219,  2225,  2231,  2237,  2250,  2262,  2263,  2264,  2267,
    2275,  2281,  2294,  2295,  2295,  2299,  2300,  2303,  2304,  2305,
    2309,  2310,  2310,  2314,  2322,  2332,  2333,  2334,  2335,  2336,
    2339,  2339,  2342,  2343,  2346,  2356,  2369,  2370,  2370,  2373,
    2374,  2375,  2376,  2379,  2383,  2384,  2385,  2386,  2392,  2395,
    2401,  2406,  2412,  2416,  2416,  2421,  2422,  2424,  2425,  2429,
    2430,  2434,  2435,  2436,  2439,  2440,  2441,  2442,  2446,  2447,
    2451,  2452,  2453,  2454,  2455,  2456,  2457,  2458,  2462,  2470,
    2479,  2480,  2481,  2485,  2496,  2508,  2519,  2534,  2539,  2543,
    2544,  2548,  2550,  2552,  2554,  2558,  2559,  2565,  2569,  2571,
    2573,  2575,  2577,  2582,  2586,  2587,  2591,  2600,  2613,  2614,
    2622,  2630,  2638,  2639,  2640,  2641,  2642,  2643,  2645,  2647,
    2651,  2652,  2655,  2670,  2677,  2692,  2705,  2720,  2733,  2734,
    2735,  2738,  2739,  2742,  2743,  2744,  2745,  2746,  2747,  2748,
    2749,  2750,  2752,  2754,  2756,  2758,  2760,  2764,  2765,  2768,
    2769,  2772,  2773,  2776,  2777,  2778,  2779,  2780,  2781,  2782,
    2783,  2784,  2785,  2786,  2787,  2788,  2789,  2790,  2791,  2792,
    2793,  2796,  2797,  2800,  2800,  2810,  2811,  2812,  2813,  2814,
    2815,  2816,  2817,  2818,  2819,  2820,  2821,  2828,  2829,  2830,
    2831,  2832,  2833,  2834,  2835,  2836,  2837,  2838,  2839,  2840,
    2841,  2842,  2843,  2844,  2845,  2846,  2847,  2848,  2851,  2852,
    2853,  2856,  2857,  2860,  2861,  2862,  2865,  2866,  2867,  2871,
    2872,  2873,  2874,  2875,  2876,  2877,  2878,  2879,  2880,  2881,
    2882,  2883,  2884,  2885,  2886,  2887,  2888,  2889,  2890,  2891,
    2892,  2893,  2894,  2895,  2896,  2897,  2898,  2899,  2900,  2901,
    2902,  2903,  2904,  2905,  2908,  2909,  2912,  2925,  2926,  2927,
    2931,  2934,  2935,  2936,  2937,  2937,  2939,  2940,  2948,  2952,
    2958,  2964,  2971,  2978,  2984,  2990,  2997,  3006,  3007,  3010,
    3011,  3014,  3015,  3016,  3017,  3020,  3021,  3022,  3023,  3024,
    3025,  3026,  3027,  3028,  3029,  3036,  3037,  3038,  3039,  3040,
    3041,  3042,  3043,  3046,  3047,  3048,  3048,  3048,  3049,  3049,
    3049,  3049,  3049,  3049,  3050,  3050,  3050,  3050,  3050,  3050,
    3050,  3050,  3050,  3051,  3051,  3051,  3051,  3051,  3051,  3051,
    3052,  3052,  3052,  3052,  3053,  3053,  3053,  3053,  3053,  3053,
    3053,  3053,  3053,  3053,  3053,  3053,  3054,  3054,  3054,  3054,
    3054,  3054,  3054,  3054,  3055,  3055,  3055,  3055,  3055,  3055,
    3055,  3055,  3056,  3056,  3056,  3056,  3056,  3056,  3056,  3056,
    3056,  3057,  3057,  3057,  3057,  3057,  3057,  3057,  3057,  3058,
    3058,  3058,  3059,  3059,  3059,  3059,  3059,  3059,  3059,  3059,
    3060,  3060,  3060,  3060,  3060,  3060,  3060,  3061,  3061,  3061,
    3061,  3061,  3061,  3061,  3062,  3062,  3062,  3062,  3063,  3063,
    3063,  3063,  3063,  3063,  3063,  3063,  3063,  3063,  3063,  3063,
    3064,  3064,  3064,  3064,  3064,  3065,  3072,  3076,  3082,  3088,
    3094,  3106,  3110,  3116,  3124,  3125,  3128,  3129,  3130,  3131,
    3132,  3133,  3134,  3141,  3145,  3153,  3154,  3157,  3158,  3159,
    3162,  3166,  3172,  3181,  3189,  3200,  3204,  3213,  3214,  3218,
    3219,  3220,  3221,  3222,  3223,  3224,  3225,  3228,  3232,  3238,
    3248,  3255,  3262,  3270,  3280,  3281,  3282,  3285,  3286
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "REGEXP", "LIKE",
  "IS", "IN", "'!'", "NOT", "BETWEEN", "COMPARISON", "VEC_INNER_OP",
  "VEC_L2_OP", "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "MOD", "'^'", "JSON_ARROW_TEXT", "JSON_ARROW", "UMINUS", "'['", "ALTER",
  "ADD", "AFTER", "ALL", "ANALYZE", "HISTOGRAM", "BUCKETS", "SAMPLE",
  "PERCENT", "ROWS", "ANY", "AUTO_INCREMENT", "ASC", "AND", "AS", "ALWAYS",
  "IDENTITY", "CONTINUE", "RESTART", "GENERATED", "STORED", "VIRTUAL",
  "BEFORE", "BEGINWORK", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH",
  "BIGINT", "BIT", "CALL", "CLOSE", "CURSOR", "CONSTRAINT",
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
  "FEVO_NOTIFY", "FPG_LISTENING_CHANNELS", "FCOSINE_DIST", "FL2_DIST",
  "FINNER_PRODUCT", "FL1_DIST", "FVECTOR_DIM", "FVECTOR_NORM",
  "FVECTOR_NORMALIZE", "HNSW", "FHNSW_KNN", "';'", "'.'", "'('", "')'",
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
  "opt_hnsw_opclass", "opt_hnsw_with", "hnsw_with_list", "hnsw_with_item",
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
     274,   275,   276,   124,    38,   277,    43,    45,    42,    47,
      37,   278,    94,   279,   280,   281,    91,   282,   283,   284,
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
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   400,   401,   401,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   403,   402,   404,   402,   405,   402,
     406,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   407,   407,   408,   408,   409,   402,   402,   402,   410,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   411,   411,   412,   402,   413,
     402,   414,   402,   415,   402,   416,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   417,   402,   418,   402,
     419,   402,   420,   402,   421,   402,   422,   402,   423,   402,
     424,   402,   425,   402,   426,   402,   427,   402,   428,   402,
     429,   402,   430,   402,   431,   402,   432,   402,   433,   402,
     434,   402,   435,   402,   436,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   437,   437,   437,   402,   402,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   402,   402,   402,   402,
     439,   439,   402,   402,   402,   402,   402,   402,   402,   402,
     440,   441,   441,   441,   442,   442,   443,   443,   444,   444,
     445,   445,   445,   446,   446,   447,   447,   448,   448,   449,
     449,   450,   450,   451,   451,   452,   452,   453,   453,   454,
     454,   454,   455,   455,   455,   455,   456,   456,   456,   456,
     456,   457,   457,   458,   458,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   460,   460,   460,   461,   462,   462,
     462,   463,   463,   464,   464,   465,   465,   465,   465,   465,
     465,   465,   465,   465,   467,   466,   468,   468,   469,   469,
     469,   469,   469,   470,   470,   470,   471,   471,   472,   472,
     473,   473,   473,   474,   474,   475,   475,   476,   476,   476,
     476,   477,   477,   478,   478,   479,   440,   480,   481,   481,
     481,   481,   480,   482,   482,   483,   483,   480,   440,   484,
     484,   485,   485,   485,   440,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   487,   487,   488,   488,   489,   489,   490,   491,
     491,   491,   492,   492,   492,   492,   440,   493,   440,   494,
     494,   495,   495,   496,   496,   496,   496,   496,   440,   440,
     440,   497,   497,   498,   498,   499,   499,   440,   500,   440,
     501,   501,   502,   502,   502,   503,   504,   504,   504,   504,
     505,   505,   440,   440,   440,   506,   507,   507,   507,   508,
     508,   508,   508,   508,   508,   509,   509,   510,   510,   511,
     511,   512,   512,   513,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   515,   515,   515,   440,
     516,   516,   517,   518,   517,   519,   519,   520,   520,   520,
     521,   522,   521,   523,   523,   524,   524,   524,   524,   524,
     525,   525,   526,   526,   527,   527,   528,   529,   528,   530,
     530,   530,   530,   516,   531,   531,   531,   531,   440,   532,
     532,   532,   440,   534,   533,   535,   535,   536,   536,   537,
     537,   538,   538,   538,   539,   539,   539,   539,   540,   540,
     541,   541,   541,   541,   541,   541,   541,   541,   440,   542,
     543,   543,   543,   544,   544,   544,   544,   440,   440,   545,
     545,   440,   440,   440,   440,   546,   546,   440,   547,   547,
     547,   547,   547,   440,   548,   548,   440,   549,   550,   550,
     549,   549,   551,   551,   551,   551,   551,   551,   551,   551,
     552,   552,   553,   553,   549,   549,   549,   549,   554,   554,
     554,   555,   555,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   557,   557,   558,
     558,   559,   559,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   560,   560,   560,   560,   560,   560,   560,   560,
     560,   561,   561,   562,   556,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   564,   564,
     564,   565,   565,   566,   566,   566,   567,   567,   567,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   568,   569,   569,   570,   571,   571,   571,
     440,   572,   572,   572,   573,   573,   574,   574,   440,   575,
     575,   575,   575,   575,   575,   575,   575,   576,   576,   577,
     577,   578,   578,   578,   578,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   580,   580,   580,   580,   580,
     580,   580,   580,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   440,   582,   582,   582,
     582,   440,   583,   583,   584,   584,   585,   585,   585,   585,
     585,   585,   585,   440,   586,   587,   587,   588,   588,   588,
     440,   589,   589,   440,   440,   440,   590,   591,   591,   592,
     592,   592,   592,   592,   592,   592,   592,   440,   593,   593,
     440,   440,   440,   440,   594,   594,   594,   595,   595
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
       4,     6,     4,     6,     3,     6,     6,     6,     6,     4,
       4,     4,     3,     3,    10,     0,     1,     0,     6,     0,
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
      12,    14,     0,     1,     0,     4,     1,     3,     3,     1,
       3,     1,     4,     4,     4,     6,     1,     3,     2,     3,
       5,     1,     3,     0,     2,     2,     3,     3,     1,     1,
       1,     2,     3,     2,     2,     2,     4,     1,     3,     1,
       4,     6,     0,     4,     4,     2,     0,     4,     7,     4,
       1,     3,     1,     1,     1,    10,     0,     2,     2,     0,
       2,     2,     2,     2,     2,     0,     2,     1,     3,     0,
       4,     0,     5,     5,    10,    10,    17,    12,    19,    11,
       6,     8,     6,     6,     6,     9,     6,     5,     8,     7,
       9,     8,    10,     9,     7,     7,     0,     1,     2,     1,
      10,     6,     0,     0,     5,     0,     4,     0,     3,     4,
       2,     0,     5,     3,     5,     0,     2,     2,     2,     2,
       1,     0,     0,     3,     1,     3,     3,     0,     6,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     1,     8,
       7,     7,     1,     0,     7,     0,     3,     1,     3,     1,
       1,     1,     1,     1,     0,     1,     4,     3,     1,     3,
       2,     2,     2,     1,     2,     2,     2,     1,     1,     9,
       0,     2,     2,     3,     5,     5,     7,     5,     1,     4,
       4,     3,     5,     3,     5,     0,     2,     1,     5,     7,
       7,     9,    11,     1,     2,     3,     1,    10,     0,     4,
      11,    18,     0,     4,     3,     5,     5,     9,    10,     7,
       1,     3,     9,     9,     9,     6,    11,     8,     0,     1,
       2,     1,     3,     5,     7,     4,     4,     5,     5,     4,
       6,    11,    13,    13,    15,     4,     6,     1,     3,     1,
       3,     1,     3,     0,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     4,     3,     3,     3,     2,     3,     4,
       4,     1,     3,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     5,     5,     5,     3,     5,     2,     7,     5,
       7,     5,     2,     3,     2,     3,     2,     3,     5,     4,
       5,     7,     8,     8,     7,     6,     6,     5,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       1,     1,     4,     3,     1,     3,     3,     0,     1,     1,
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
       0,     0,     0,     0,   608,     0,   361,     0,   505,     0,
       0,     0,     0,     0,   505,     0,   295,     0,   560,     0,
       0,     0,   250,   356,   368,   374,   406,   413,   418,   419,
     420,   427,   429,     0,   443,   444,   442,   489,   528,   532,
     558,   568,   577,   583,   586,   740,   748,   906,   911,   923,
     930,   935,   947,     0,     0,     0,   435,     0,     0,   575,
       0,     0,     0,     0,     0,     0,     0,   575,   609,     0,
       0,   575,     0,   533,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   511,   421,   425,   423,   424,     0,
       0,   511,     0,     0,   743,   744,     0,     0,     0,     0,
     584,     0,     1,     2,   408,   432,     0,     0,   937,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   610,     0,     0,   575,   535,   365,     0,
     360,   358,   359,     0,   571,     0,   909,     0,   407,   907,
       0,   931,     0,     0,   573,     0,   371,     0,   948,     0,
     507,   508,   509,   510,   506,     0,   422,     0,   428,     0,
       0,     0,     0,   741,   742,     0,     4,     9,    10,    12,
      11,     8,     0,     0,     0,   306,   296,   246,     0,   247,
     248,     0,   297,   298,   299,     0,    13,   249,   301,   303,
     302,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   310,   251,   304,   409,
     562,   561,   310,     0,     0,     0,     0,     0,   311,   313,
     327,   314,   327,   585,     3,     0,     0,   414,   415,     0,
       0,   436,   934,   933,     0,     0,     0,     0,     0,     0,
       0,     0,   951,     0,   950,   921,   917,   916,   920,   918,
     922,   919,   912,     0,   914,     0,     0,   576,   569,     0,
       0,   757,     0,     0,     0,     0,   757,   926,   925,     0,
       0,   570,     0,     0,     0,   937,     0,     0,     0,     0,
     363,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,   373,   369,     0,     0,   512,   426,     0,   512,
     747,   746,   745,     0,    75,     0,    32,    31,    20,     0,
       0,     0,     0,     0,    55,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   309,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   307,     0,     0,     0,     0,     0,   350,
     324,   310,     0,     0,     0,     0,     0,   335,   334,   338,
     342,   339,     0,     0,   336,   326,     0,     0,   417,   416,
       0,   432,     0,     0,   430,     0,     0,     0,     0,     0,
       0,   477,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   945,
     938,   913,     0,     0,     0,   720,   729,   688,   688,   688,
     688,   688,   713,   688,   710,     0,   688,   688,   688,   691,
     722,   691,   721,   688,   688,   688,     0,   691,   688,   691,
     712,   719,   711,   730,   731,     0,     0,     0,   714,   578,
       0,     0,     0,     0,     0,     0,   758,   759,     0,     0,
       0,     0,     0,   929,   927,   928,     0,   446,     0,     0,
       0,     0,   936,   737,   537,     0,   539,   540,     0,   366,
       0,   275,     0,   254,   365,   572,   910,   908,   932,   463,
     574,   371,   949,     0,     0,     0,   567,     0,     0,     5,
      51,    76,     0,    48,     0,     0,   238,     0,     0,     6,
       0,    57,     0,     0,     0,   224,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    23,
      24,    22,   244,   242,    46,     0,    44,   210,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    33,    73,
      72,    25,    26,    28,    14,    15,    16,    17,    18,    19,
      27,    30,    29,     0,   308,   254,     0,   305,   411,   410,
     310,     0,     0,     0,   315,     0,   350,     0,   355,   323,
       0,   254,   312,   336,   336,     0,   329,     0,   337,     0,
     319,   318,     0,   436,     0,     0,     0,     0,     0,     0,
     473,     0,   470,   476,   472,     0,   655,     0,     0,     0,
       0,   474,   952,   953,   946,   944,   940,     0,   942,     0,
     943,   915,   757,   757,     0,   717,   693,   699,   696,   693,
     693,     0,   693,   693,   693,   692,   696,   696,   693,   693,
     693,     0,   696,   693,   696,     0,     0,     0,     0,     0,
       0,     0,     0,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   449,     0,     0,
       0,     0,   738,   739,     0,     0,   653,   605,   327,   536,
       0,   541,   542,   543,   544,   255,     0,   282,   254,   362,
     364,   370,     0,   492,   514,     0,     0,   491,   492,     0,
     492,     0,    87,     0,   236,     0,     0,     0,     0,    53,
       0,     0,     0,     0,   140,     0,     0,     0,     0,     0,
     172,   173,   174,   175,   176,   177,     0,     0,     0,     0,
     153,     0,     0,     0,   157,   158,   159,   161,     0,     0,
     163,     0,   166,   167,   168,     0,     0,     0,     0,     0,
       0,    94,    88,    89,    90,    91,    92,    93,   143,   144,
     145,     0,     0,     0,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   180,   181,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,   196,     0,   199,   200,   201,     0,    60,
       0,    62,     0,     0,     0,     0,     0,    69,    70,    71,
       0,    47,    45,     0,     0,   245,   243,    79,     0,     0,
      40,    36,    38,     0,    58,   256,     0,     0,   350,   352,
     352,   352,     0,   316,   320,     0,     0,     0,   275,   340,
     341,     0,     0,   343,     0,   433,   434,   431,     0,     0,
       0,     0,     0,     0,   655,   655,     0,   485,   484,   486,
     655,   479,     0,     0,   939,   941,     0,     0,     0,   705,
     715,   707,   709,   734,     0,   708,   704,   703,   726,   725,
     702,   706,   701,     0,   723,   700,   724,     0,     0,     0,
     580,   733,     0,   579,     0,   762,   764,   763,     0,   760,
       0,     0,   399,     0,     0,     0,     0,     0,   401,     0,
       0,     0,     0,     0,   775,     0,   447,   448,     0,   455,
       0,     0,     0,     0,     0,     0,   737,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   611,     0,     0,   538,
     557,     0,     0,   553,     0,     0,     0,     0,   534,   545,
     548,     0,     0,   954,   367,     0,     0,     0,   523,   513,
       0,     0,   492,   530,   492,   531,    52,   240,     0,   239,
       0,     0,     0,    56,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      98,   100,     0,     0,     0,     0,     0,   132,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    59,     0,     0,     0,     0,     0,
       0,   265,   254,   412,   317,     0,     0,     0,     0,   325,
       0,   563,     0,     0,   282,   332,   330,     0,     0,   328,
     344,     0,   440,   439,   437,     0,     0,     0,     0,   486,
     486,   655,     0,     0,   667,     0,   672,     0,     0,     0,
       0,     0,   487,   676,   657,     0,   674,   481,   486,   471,
     478,     0,     0,   689,     0,   694,   695,     0,     0,   696,
       0,   696,   696,   718,   732,     0,     0,     0,   769,   772,
     771,   773,   770,   765,   766,   768,   774,   767,     0,     0,
       0,     0,     0,     0,     0,   375,     0,     0,     0,     0,
       0,     0,   775,     0,     0,   450,   454,   452,   451,   453,
       0,   459,     0,     0,     0,     0,     0,     0,     0,   653,
     607,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     592,   653,     0,   736,   552,   550,   551,   554,   555,   556,
       0,     0,     0,   260,   260,   276,   277,   283,     0,   357,
     525,   524,     0,     0,   515,   520,   519,     0,   517,   495,
     529,   237,   241,     0,    54,     0,   138,   137,     0,   142,
       0,     0,   225,   226,   171,   149,   150,     0,     0,   154,
     155,   156,   160,   162,   164,   205,   206,   207,   208,     0,
      95,   104,   106,   102,   108,   110,   112,   146,     0,     0,
     148,   221,   267,   267,   267,   114,     0,     0,   122,     0,
       0,   130,   267,   267,   178,     0,     0,     0,   190,   191,
       0,     0,   194,     0,   197,     0,   202,     0,    61,    63,
      65,    66,    67,    68,     0,    78,    82,     0,     0,    50,
       0,     0,    42,     0,    43,    35,     0,     0,   275,   256,
     351,     0,     0,     0,   321,     0,     0,     0,   954,   345,
       0,   331,     0,     0,     0,     0,     0,   651,     0,   475,
     483,   486,   656,   488,     0,     0,     0,     0,     0,     0,
     677,   658,   659,   661,   660,   665,     0,     0,     0,     0,
     675,   673,   480,     0,     0,   775,     0,     0,   698,   727,
     735,   728,   716,     0,   581,   376,     0,   775,     0,   392,
       0,     0,     0,     0,   400,     0,   384,     0,     0,     0,
       0,     0,   783,   784,   785,   787,   786,   905,   790,   791,
     792,   898,   789,   788,   893,   894,   895,   896,   897,   880,
     793,   834,   825,   830,   775,   876,   866,   837,   869,   812,
     819,   816,   803,   859,   848,   775,   856,   874,   810,   811,
     881,   797,   804,   852,   868,   873,   870,   831,   809,   878,
     750,   808,   828,   821,   818,   775,   867,   857,   798,   847,
     886,   824,   838,   820,   839,   823,   862,   845,   806,   775,
     795,   879,   801,   863,   815,   842,   854,   814,   775,   843,
     840,   841,   849,   861,   851,   817,   822,   846,   835,   836,
     853,   885,   858,   827,   860,   813,   887,   844,   832,   826,
     833,   829,   872,   800,   794,   865,   871,   805,   807,   796,
     877,   855,   875,   850,   864,   802,   799,   883,   775,   884,
     882,   900,   901,   902,   903,   904,   891,   892,   888,   889,
     890,   899,   776,     0,   457,   456,     0,   461,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,     0,     0,     0,     0,
     588,   604,   612,   655,     0,   547,   549,   261,   262,     0,
     279,   281,     0,     0,     0,   957,   955,   956,   493,     0,
     516,     0,     0,     0,   954,     0,     0,     0,   141,   228,
     229,   230,   231,   234,   233,   235,   227,   232,     0,     0,
       0,   267,   267,   267,   267,   267,   267,     0,     0,     0,
     271,   271,   271,   267,     0,     0,     0,   267,     0,     0,
       0,   267,   271,   271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    84,    41,    37,    39,   260,   263,
     266,   282,   265,   353,     0,     0,     0,     0,   564,   565,
       0,   559,     0,   441,     0,   464,   629,     0,   627,     0,
     465,     0,   482,     0,     0,     0,     0,     0,     0,   679,
       0,     0,     0,     0,     0,     0,   775,     0,   690,   697,
       0,   775,     0,   380,   393,     0,   402,   403,   404,     0,
       0,     0,     0,     0,   377,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,     0,     0,   386,
       0,     0,     0,     0,   592,     0,     0,     0,     0,   619,
       0,     0,     0,   616,     0,   615,     0,   625,     0,     0,
       0,     0,     0,   587,   654,   546,   260,   278,   285,   284,
       0,     0,   527,   526,   522,   521,     0,   497,   490,     7,
     139,   136,   151,   152,   209,   271,   271,   271,   271,   271,
     271,   211,     0,   147,     0,     0,     0,     0,     0,   271,
     116,     0,     0,   271,   124,     0,     0,   271,     0,     0,
     187,   188,   189,   192,   193,     0,   198,   203,     0,   258,
       0,     0,   257,   286,   275,   349,     0,   348,   347,     0,
       0,   346,   438,     0,     0,     0,   469,     0,   652,   669,
       0,   687,   671,     0,     0,     0,   680,   678,   662,   663,
     664,   666,     0,   775,     0,   752,   582,     0,   754,   394,
       0,   388,   385,     0,   392,   777,     0,     0,     0,     0,
       0,   775,   458,     0,     0,   382,     0,     0,     0,   379,
       0,   590,   606,     0,     0,     0,     0,     0,   617,   618,
     294,   613,   594,     0,     0,     0,     0,     0,   280,   958,
       0,   494,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   268,     0,    97,    99,   101,     0,   267,
       0,     0,     0,   267,     0,     0,     0,   133,   135,     0,
       0,   264,   260,     0,   291,   282,   354,   322,   566,   467,
       0,   630,   628,     0,   685,   686,     0,     0,     0,   775,
       0,   751,   753,     0,   390,   405,   381,     0,   782,   781,
     778,   780,   779,     0,   460,     0,   389,   387,     0,     0,
     620,     0,     0,   626,     0,   593,     0,     0,     0,     0,
       0,     0,     0,     0,   518,     0,     0,   496,   105,   107,
     103,   109,   111,   113,   212,     0,   260,   272,   115,   271,
     118,   120,   123,   271,   126,   128,   131,   195,    74,   259,
     288,   287,     0,   252,   253,     0,   668,   670,   684,   681,
       0,   756,     0,   394,   924,     0,   383,     0,     0,   614,
       0,   589,   595,   596,     0,     0,     0,   503,     0,   498,
       0,   500,   501,   270,   273,     0,     0,   267,   267,     0,
     267,   267,     0,     0,   292,     0,   682,   683,   755,     0,
       0,   396,   391,   462,     0,     0,     0,     0,     0,     0,
       0,     0,   499,     0,   260,   117,   271,   271,   125,   271,
     271,   290,   289,   631,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,   599,   504,     0,   274,     0,     0,
       0,     0,   633,     0,   398,   397,     0,     0,     0,     0,
     633,     0,     0,   502,   119,   121,   127,   129,   466,   632,
       0,     0,     0,     0,   621,     0,     0,   600,   597,     0,
     647,     0,     0,   591,     0,   633,   633,     0,     0,   598,
       0,   648,   468,     0,   644,   646,   645,     0,     0,     0,
     623,   622,     0,   601,   649,   650,   634,   642,   636,     0,
     638,   643,   640,     0,   633,     0,   637,   635,   641,   639,
     624,     0,     0,     0,     0,     0,     0,     0,   602,   603
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   680,  1093,  1315,  1317,  1313,   681,   980,   692,
    1316,   682,  1083,  1309,  1084,  1310,   693,  1512,  1513,  1514,
    1833,  1831,  1832,  1834,  1835,  1836,  1843,  2119,  2247,  2248,
    1847,  2123,  2250,  2251,  1851,  1522,  1523,   699,  1250,   401,
      21,    22,   661,  1321,  1869,  1800,  2022,  1558,  1840,  2113,
    1996,  2197,   957,  1455,  1456,  1223,  2134,  2213,  1786,    96,
     297,   298,   533,   307,   308,   309,   310,   845,   556,   311,
     553,   859,   554,   855,  1339,  1340,   844,  1326,  1874,   312,
      23,    74,   133,   370,    24,   383,    25,  1915,  2154,  2260,
    2261,  1177,  1178,    26,    27,   839,   104,    28,    29,    30,
      31,    32,   321,    33,   564,  1343,    34,   937,  1189,  1421,
    1765,  1767,  1936,    35,    36,  1367,    37,  1228,  1971,  1814,
    2104,  2187,  2273,  2101,    84,   155,   675,   965,  1232,  1812,
    1467,   963,    38,    39,   127,   368,   655,   658,   954,  1218,
    1219,  1220,    40,    99,   851,    41,   112,    42,    43,    44,
    1963,  1790,  2326,  2327,    72,  1205,  1206,  1889,  1887,  2284,
    2318,  1578,  1207,  1129,   895,   906,  1139,  1140,   629,  1144,
     947,   948,    45,    94,    95,    46,   635,   636,   637,  1398,
    1413,  1762,    47,    48,   343,   344,    49,   359,   646,    50,
      51,   334,   590,    52,  1459,  1807
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1745
static const yytype_int16 yypact[] =
{
   13325,  -147,  -152,    99,   456,   175, -1745,   449, -1745,   183,
     261,   485,   -63,   -55, -1745,    27, -1745,   221,   631,    92,
     487,   122, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745,   499, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745,   565,   580,   697, -1745,   316,   536,   591,
     776,   609,   784,    59,   791,   802,   807,   591, -1745,   572,
     674,   591,   592, -1745,   528,    76,   297,   880,   498,   503,
     885,   504,   506,   515,   657,   675,   488, -1745, -1745,   894,
     896,   657,    84,   191,   514, -1745,  6702,   913,   728,    80,
   -1745,   935, -1745, 13325,   402,  -190,   626,   482,   457,    45,
     535,   662,   946,   900,   964,   578,   786,   531,   694,   590,
     137,   818,   998, -1745,   467,  1022,   591,   622,   649,  1072,
   -1745, -1745, -1745,   -99, -1745,   768, -1745,   796, -1745, -1745,
     805, -1745,   823,   925, -1745,   864,   -17,   870, -1745,   873,
   -1745, -1745, -1745, -1745, -1745,  1159, -1745,  1176, -1745,   944,
    1204, 10632, 10632, -1745, -1745,  1223,  -203, -1745, -1745, -1745,
   -1745,  1239, 10632, 10632, 10632, -1745, -1745, -1745,  7881, -1745,
   -1745,   856, -1745, -1745, -1745,   881, -1745, -1745, -1745, -1745,
   -1745, -1745,  1222,   887,   895,   915,   923,   950,   968,   986,
    1031,  1033,  1041,  1043,  1045,  1063,  1084,  1086,  1090,  1113,
    1120,  1121,  1127,  1128,  1130,  1131,  1132,  1133,  1139,  1140,
    1142,  1150,  1154,  1155,  1156,  1169,  1175,  1177,  1178,  1179,
    1180,  1184,  1185,  1186,  1187,  1190,  1195,  1198,  1203,  1205,
    1208,  1210,  1213,  1218,  1219,  1220,  1221,  1224, -1745, -1745,
    1226,  1229,  1236,  1244,  1245,  1246,  1247,  1248,  1249,  1250,
    1251,  1253,  1255,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1264,  1266,  1278,  1279,  1280,  1281,  1283,  1287,  1289,  1291,
    1296,  1297,  1298,  1299,  1300,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1317,  1319, 10632, 13750,  -100, -1745,   911,
     738,   778,    23,  1321,  1461,  1322,    15,  -185,   576, -1745,
    1516, -1745,  1516, -1745, -1745,  1538,  1564, -1745, -1745,  1652,
    1715,   -45, -1745, -1745,    19,   475,   398,   683,   427,   483,
     690,  1649,  1447,  1481,   184, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745,    83, -1745,  1724,  1726, -1745, -1745, 13374,
    1536,    53,  1731,  1540,  1454,  1735,    53, -1745, -1745,   351,
    1736, -1745,  1545,   552,  1462, -1745,  1745,  1746,   527,  1722,
   -1745,   532,  -167,    80,  1749,  1751,  1752,  1753,  1754,  1755,
    1756, -1745, -1745, -1745,  1764,  1782,  -129, -1745,  1784,  -128,
   13897, 13897, -1745,  1785, 10632, 10632,  1087,  1087,  1717, 10632,
   13212,    97,  1786,  1788,  1392, -1745, 10632,  7095, 10632, 10632,
   10632, 10632, 10632, 10632, 10632, 10632, 10632,  1408, 10632, 10632,
   10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632,
   10632, 10632, 10632,  1426, 10632, 10632, 10632,  1438, 10632, 10632,
   10632, 10632, 10632, 10632,  8274, 10632, 10632, 10632, 10632, 10632,
   10632, 10632, 10632, 10632, 10632,  1440,  1441,  1443,  1444,  1445,
   10632, 10632,  1446,  1448,  1449, 10632, 10632,  1838,  1450,  1451,
   10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632,
   10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632,
   10632, 10632,  1452, 10632, 10632, 10632,  1455, 10632, 10632, 10632,
   10632, 10632, 10632, 10632, 10632,  9573, -1745, 10632, 10632, 10632,
   10632, 10632,    40,  1457,   939, 10632,  7488, 10632, 10632, 10632,
   10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632, 10632,
   10632, 10632,  1847, -1745,    80,  1850, 10632,  1851,  1852,   -47,
   -1745,   730, 10632,  1460,   479,  1854,    80, -1745, -1745, -1745,
      13, -1745,    80,  1695,  1663, -1745,  1857,  1858, -1745, -1745,
    1863,  1585,  1828,  1829, -1745,  1869,  1870,  1871,  1872,  1873,
    1874, -1745,  1875,  1876,  1878,  1880, 13374,  1881,  1637,  1882,
    1883,  1884,  1909,  1885,  1537,  1912,    18,    86,  1913, -1745,
   -1745, -1745,   566,  1525,  1526, -1745, -1745,  1527,  1527,  1527,
    1527,  1527, -1745,  1527, -1745,  1528,  1527,  1527,  1527,  1860,
   -1745,  1860, -1745,  1527,  1527,  1527,  1531,  1860,  1527,  1860,
   -1745, -1745, -1745, -1745, -1745,  1532,  1541,  1543, -1745,   687,
    1936, 13374,  1937,  1941,  1943,  1551,  1553, -1745,   -86,  1953,
    1954,  1761,  1563, -1745, -1745, -1745,  1763,  1910,  1959,  1766,
    1683,  1963,   184,   294, -1745,   494, -1745, -1745,    25, -1745,
   10632,  1769,    80,  -186,   649, -1745, -1745, -1745, -1745, -1745,
   -1745,   -17, -1745,  1965,  1966,   222, -1745,  1965,   474, -1745,
    1787, -1745,  1574, 13897, 13239,   567, -1745, 10632, 10632, -1745,
    1575, -1745, 10632,  1732,   141, -1745, -1745, -1745,  9669,  8667,
    1879,  2197,  2547,  9869,  9918,  9952,  9979, 10022, 10062, -1745,
    2897,  3247,  3597,  3947, 10257,  4297,  4647,  4997, 10311, 10358,
   10415,   260,  5347, 10455,  5697, -1745, 10650, 10704, 10737, -1745,
   13797,  6047,  6397,  6803,  6831,  9482,  1576, 10764, 10808, 10848,
   11029, 11056, 11083, 11116, 11143,  6878,  7105,  7183, -1745, -1745,
   -1745, -1745, -1745, 11187,  7211,  1624,  1627,  1628,   606,   837,
    1584,  1631,  1632,  7238, 11227, 11254, 11281, 11308, 11335, 11362,
   11390, 11417,  7271,  7303,  7571,  7600,  7627,  7711,  7891,  7918,
    1008, 11444, 11471, 11504,  7962, -1745,  1069, 11531,  7989, -1745,
    8016,  8057,  8099,  8298, 11566, 11606, 11633,  8369, -1745,  2591,
    2940,  3289,  3639,  3639, -1745,    36, -1745, -1745,  1742, 10632,
   10632,  1594, 10632, 13831,  1595,  1597,  1601, 10632,  1344,  1391,
    1391,  1529,  1799,  1423,   958,   958,   862,   862,   862,   862,
     804,  1717,  1717,   107, -1745,  -186,  1861, -1745, -1745,  1603,
     730,  1840,  1841,  1842, -1745,  1732,   -47, 11660, -1745, -1745,
      24,   -89,   576,  1663,  1663,  1845,  1812,    80, -1745,  1848,
   -1745, -1745,   863,   -45,  1813,  1815,   412, 13374, 13374,  2010,
   -1745,  1792, -1745, -1745, -1745,  1793,  1980, 13374,  2014,  1773,
    1774, -1745, -1745, -1745, -1745, -1745, -1745,  2015, -1745,  2017,
   -1745, -1745,    53,    53,  2018, -1745, -1745, -1745, -1745, -1745,
   -1745,  2020, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745,  2020, -1745, -1745, -1745,  2022,  2023,  2024,  1832,  1636,
    1635, 10632,  1640,  1980, 13374, 13374, 13374,  1823,    53,   331,
     155,   186,  1843,  2034,    41,  2042,   696,  1906,   194,  2045,
    2050,  1866, -1745, -1745,  1961,  2055,   446, -1745,  1516, -1745,
    2057, -1745, -1745, -1745,   404, 13897,  2005,  1891,  -186, -1745,
   -1745, -1745,  2051,  -172, -1745,   534,  1677, -1745,  -172,  1677,
    1877, 10632, -1745, 10632, -1745, 10632, 13643, 13321,  1983,  8396,
    1681,  1696, 10632, 10632, -1745, 10632, 13575,  1932,  1932, 10632,
   -1745, -1745, -1745, -1745, -1745, -1745, 10632, 10632, 10632, 10632,
   -1745, 10632, 10632, 10632, -1745, -1745, -1745, -1745, 10632, 10632,
   -1745, 10632, -1745, -1745, -1745, 13374, 13374, 10632, 10632, 10632,
    2090, -1745,  1747,  1748,  1757,  1758,  1759,  1760, -1745, -1745,
   -1745, 10632, 10632, 10632, -1745, 10632,  1700,  1701,  1704,  1762,
    2095,  1775,  2096,  1778,  1708,  1710, 10632, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, 10632, 10632, 10632, 10632, 10632,
   10632, 10632, 10632, -1745, 10632, -1745, -1745, -1745, 10632, -1745,
   10632, -1745, 10632, 10632, 10632, 10632, 10632, -1745, -1745, -1745,
   10632, -1745, -1745, 10632,  1732,  3639,  3639,  1888, 13864, 10632,
   -1745, 10632, 10632,  1732, -1745,  1970,    80,  2110,   -47,  1974,
    1974,  1974,  1720, -1745,   737, 10632,  2121,  2127,  1769, -1745,
   -1745,    80, 10632,   284,    80, -1745, -1745, -1745,  2128,  2128,
    1738,  1973,  1975,  1765,  1980,  1980, 13374, -1745, -1745,   679,
    1980, -1745,  2138,  2145, -1745, -1745,  1767,  1771,   537,  -170,
     865,  -170,  -170, -1745,   560,  -170,  -170,  -170,   865,   865,
    -170,  -170,  -170,   574,   865,  -170,   865,  1772,  1776,  1777,
    2071, -1745, 10632, 13897,   155,  1980,  1980,  1980,   676, -1745,
    1794,  1795, -1745,  1797,  1798,  1802,  1803,   585, -1745,  1886,
     155,  2147,   198,  2091, -1745,  2012, -1745, -1745,   409,  1908,
    1887,   155,   205,  1960,  2153,  2155,  -135,  2156,  1808,  1997,
     564,  1810,  1819,  1998,  1837,   601, -1745,  2166,  1732, -1745,
   -1745,  2167,   -26,  2164,  2175,  2176,  1846,     7, -1745,  1791,
   -1745,   779, 10632,  1969, -1745,  9060,  2030,  2179, -1745, -1745,
    2232,  9453,  -171, -1745,  -171, -1745, -1745, 13897, 13670, -1745,
   10632,  1849, 10632, -1745, -1745,  9525,  1145, 11687, 10632, 10632,
    1844,  1856, 11714, 11741, 11769,  8450,  8490, 11796, 11823, 11850,
   11883, 11910, 11945,   -23,     4, 11985, 12012,  8686,  1859,  1864,
    1865,  1867,  1868,  1889,  1893,  1172,  8749, 12039, 12066, -1745,
   -1745, -1745,  1894,   603,  1895,   608,  1899, -1745, -1745, 12093,
    8786,  8843,  8883, 12120, 12148,  9078,  9166,  1241,  1273,  1301,
   12175, 12202, 12229, 12262, 12289, 12324,  9193,  1862,  1890, 10632,
    1732, 10632,  1196,  1732, 13897,  1732,  1900,  1732,  1901,  1902,
    2173,  2097,  -186, -1745, -1745,  2075,  1905,  1911,  1914, -1745,
    2240, 13897,  2226,    51,  1891, -1745, 13897, 10632,  1915, -1745,
   -1745,   284, -1745,  1916,   302, 10632,  1917,  1919,  2250,   679,
     679,  1980,  2061,  2253,  1921,  1922,  1928,  2209,  2263,  1933,
    2264,   109, -1745, -1745, -1745,  2103,  2105, -1745,   679, -1745,
   -1745,  2058,   735, -1745,  2265, -1745, -1745,  2032,  2269, -1745,
    2270, -1745, -1745, -1745, -1745,  1935, 12364,   611, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,   761,   155,
    2272,  2274,  2304,  2305,  2308, -1745,  2324,  1938,   614,  1944,
     380,   155, -1745,  1470,  2213, -1745, -1745, -1745, -1745, -1745,
    2329,  2074,  1947,   617,  2078,   155,  2344,   311,  2214,   446,
   -1745,   509, 10632,  1964,  1967,  1968,  2352,  2352,  1971,  2250,
      -6,   446, 13374, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
       7,   655,     7,   -28,   663,  1972, -1745,  1328,   721, -1745,
   -1745, 13897,  2098,  2338, -1745, -1745, 13897,   660, -1745,  2163,
   -1745, -1745, 13897,  2357, -1745, 10632, -1745, -1745, 10632, -1745,
   12391, 13176, -1745, -1745, -1745, -1745, -1745, 10632, 10632, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, 10632,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, 10632, 10632,
   -1745, -1745,  2013,  2013,  2013, -1745,  2025,  1054, -1745,  2027,
    1059, -1745,  2013,  2013, -1745, 10632, 10632, 10632, -1745, -1745,
   10632, 10632, -1745, 10632, -1745, 10632, -1745, 10632, -1745, -1745,
   -1745, -1745, -1745, -1745, 10632, -1745, -1745,  1976,  1977,  1196,
    1978,  1982, -1745,  1984, -1745, -1745, 10632, 10632,  1769,  1970,
   -1745,  2362,  2362,  2362,  1989, 10632, 10632,  2364,  1969, 13897,
    2352, -1745,  2365,  2380, 12418,  2367,  2383, -1745,   671, -1745,
   -1745,   679, -1745, -1745,  2385, 10632,  2390,  2345,    -3, 10632,
   -1745, -1745, -1745, -1745, -1745, -1745,  2003,  2008,  2026, 10632,
   -1745, -1745, -1745,   676,  2348, -1745,  2009,  2406, -1745,   865,
   -1745,   865,   865, 10632, -1745, -1745,  2353, -1745,   673,  2415,
    2028,  2033,  2040,  2029, -1745,   155, -1745,   155,  2047,  2048,
     743,  1925, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745,  2202, -1745,  2049,  2053,  2143,   155, -1745,
    2054,   746,  2056,  2154,   155,  2174,   751,  2060,  2280,  2286,
    2062, 12445,  2367,  2352,  2352, -1745,   753,   813,  2383,   815,
      12, -1745, -1745,  1980,   817, -1745, -1745, -1745, -1745,  2450,
   -1745, -1745,   779, 10632, 10632, -1745, -1745,  2063, -1745,  9846,
   -1745, 10239,  2064,  2370,  1969,  2065, 12472, 12499, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, 12527, 12554,
   12581,  2013,  2013,  2013,  2013,  2013,  2013,  1750, 12608,  2399,
    2266,  2266,  2266,  2013,  2068,  2070,  2079,  2013,  2083,  2084,
    2085,  2013,  2266,  2266, 12641, 12668, 12703, 12743, 12770,  9236,
   12797, 12824,  9276, -1745, -1745, -1745, -1745, -1745, 13702,   372,
   13897,  1891,  2097, -1745,   839,   841,   843,  2471, 13897, 13897,
    2459, -1745,   846, -1745,  2440,  2469, -1745,   848, -1745,   850,
   -1745,  2486, -1745,   882, 12851,   884,  2101,  2102,  2327, -1745,
   12878,  2104,  2106,  2107, 12906,   764, -1745,  2275, -1745, -1745,
   12933, -1745,  2625, -1745, -1745,  2108, -1745, -1745, -1745,  2495,
     987,   989,   155,  2496, -1745, -1745,  2975,  3325,  3675,  4025,
    4375,  4725,  2441,  2502, 10632,  2428, -1745,   991,   155, -1745,
     155,  2112,   993,  2372,    -6, 10632,  2114,  2115,  2250, -1745,
     997,   999,  1001, -1745,  2508, -1745,  1003, -1745,   472,  2117,
    2510,  2454,  2455, -1745,  2186, -1745,   663, -1745, 13897, 13897,
    2516,  2517, -1745, 13897, -1745, 13897,  9453,  2126, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745,  2266,  2266,  2266,  2266,  2266,
    2266, -1745, 10632, -1745,  2519,  2460,  2129,  2133,  2134,  2266,
   -1745,  2181,  2182,  2266, -1745,  2184,  2188,  2266,  2144,  2146,
   -1745, -1745, -1745, -1745, -1745, 10632, -1745, -1745,  2534, -1745,
    2330, 10632, -1745,  2403,  1769, -1745,  2544, -1745, -1745,  2152,
   10632, -1745, -1745,  2284,  2347,  2552, -1745,  2561, -1745, -1745,
    2577,  1015, -1745,  2579, 10632, 10632, -1745, -1745, -1745, -1745,
   -1745, -1745,  2525, -1745,  5075, -1745, -1745,  5425, -1745,  2309,
    2191, -1745, -1745,  1005,  2415, -1745,  2511,  2458,  2434,  2425,
    2316, -1745, -1745, 12960,  2198, -1745,  1010,  1012,   155, -1745,
    2200,   -14, -1745, 12987,  2367,  2383,  1014,  2389, -1745, -1745,
   -1745, -1745, -1745,  2603,  2623,   -43,   468,  2430, -1745, -1745,
    2616,  2241,  1036,  2636,  2539,  2248,  2251,  2252,  2254,  2260,
    2261, 13020, -1745,  2249,  2646, -1745, -1745, -1745,  2262,  2013,
    2267,  2268,  2271,  2013,  2278,  2282,  2285, -1745, -1745, 13047,
    2287, -1745, 13702,  -134,  2500,  1891, -1745, -1745, 13897, -1745,
    2657, -1745, -1745,  2293, -1745, -1745,  2294, 13082, 13122, -1745,
    5775, -1745, -1745,  2283, -1745, -1745, -1745,  2296, -1745, -1745,
   -1745, -1745, -1745,  6125, -1745, 10632, -1745, -1745,  1046,  2656,
   -1745,  1048,  1050, -1745,  2661, -1745,  2300,  2663,  2677,  2302,
    2310,  2311, 10632,  2679, -1745,  1066,   -52, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745,  2697,   663,  2307, -1745,  2266,
   -1745, -1745, -1745,  2266, -1745, -1745, -1745, -1745, -1745, -1745,
    2477,  2478,  2352, -1745, -1745,  2315, -1745, -1745,  1067, -1745,
    6475, -1745,  2708,  2309, -1745, 13149, -1745,  2317,  2505, -1745,
     739, -1745, -1745, -1745,  2711,  2712,  2713, 13897,  2698, -1745,
    2714, -1745, -1745, -1745, -1745,  2716,  2326,  2013,  2013,  2328,
    2013,  2013,  2540,  2543,  2331,  2722, -1745, -1745, -1745,  2707,
    1071, -1745, -1745, -1745,  2484,  2727,  2731,  2722,  2339,  2340,
    2341, 10632, -1745,  2506,   663, -1745,  2266,  2266, -1745,  2266,
    2266, -1745, -1745, -1745,  1075,  2735, -1745,  2708,  2350,  1089,
    2358,  1095,  2360,  2529, -1745, 13897,  2517, -1745,  2373,  2374,
    2375,  2376, -1745,  2745, -1745, -1745,  2755,  2760,  2722,  2722,
   -1745,  2546,  2763,  2241, -1745, -1745, -1745, -1745,   501, -1745,
    2396,  2381,  1098,  1105,   558,  2776,  1108, -1745, -1745,   -12,
    2635,   548,   -27, -1745,  2722, -1745, -1745,  2696,  2523, -1745,
    2546, -1745, -1745,   374, -1745, -1745, -1745,   469,   533,  1110,
     558,   558,  2621, -1745, -1745, -1745, -1745, -1745, -1745,   296,
   -1745, -1745, -1745,   355, -1745,  2548, -1745, -1745, -1745, -1745,
     558,    43,  2599,  2600,  2608,  2609,  2796,  2798, -1745, -1745
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1745,  2702,   -96, -1745, -1745, -1745, -1745,  -938,  1565, -1745,
    1716, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,  1821,  2410,
   -1745,  -239,  -656,  1252, -1745, -1452, -1745,   940, -1306, -1745,
   -1744, -1745, -1107, -1745,  1011, -1331, -1745, -1745, -1423, -1745,
   -1745,  2288,  -291,  -300,  2279,  -536, -1745, -1745,  -307, -1745,
   -1745,   658, -1745, -1745, -1745,  1473,  -792,   413,   -44, -1745,
   -1745, -1745,  2687,  2165, -1745,  2157, -1745,   766,   610, -1745,
     544, -1160, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1745, -1745,  2276, -1745,  1985,  1727, -1745, -1745, -1745, -1745,
   -1745, -1745, -1745, -1745, -1745, -1131, -1745,  -927, -1745, -1745,
   -1745, -1745, -1745,   543,   821,  2750,  2461, -1745,  1892, -1745,
     871,  2172, -1745, -1745, -1745, -1745, -1745, -1745, -1745, -1745,
   -1149,  1399, -1745, -1745, -1745, -1745,   752, -1745, -1745, -1745,
   -1745,   908, -1745,   513, -1745,  1425,  1414, -1718, -1743, -1614,
   -1534, -1427, -1745, -1115,   447,   215,   228,  -882,  -430,  1945,
   -1188, -1745, -1745, -1745,  2692, -1745,  -339, -1745,  1930,  1256,
   -1143, -1745, -1745, -1745, -1745,  2277, -1745, -1745, -1745, -1745,
   -1745,  2497, -1745, -1745, -1546, -1745
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -738
static const yytype_int16 yytable[] =
{
     296,  1334,  1801,  1568,  1387,   557,   544,   959,  1430,  1349,
    1350,   539,  1789,   919,  1787,  1368,   856,   642,   302,   942,
    1408,  1797,  1881,   886,  1148,  1149,   506,  1226,  1226,   951,
    1154,  1423,  1156,  1236,  1958,    92,   534,   373,  2241,  1950,
     919,  1233,  1081,  1235,  1105,  -737,   804,  2372,   335,   336,
     337,   338,   339,   340,  1103,   545,   631,   381,   805,   535,
    1958,  1445,   116,   562,  2177,   390,   391,   543,  1451,   632,
    1956,  1566,    53,   663,   532,  1897,   396,   397,   398,   134,
    2347,   943,   400,   302,  1798,  2341,   841,   319,   660,  1375,
     565,   888,  1183,   161,  1210,   100,  2210,  1997,  1998,   662,
      56,  1184,    57,   566,   162,    54,  1211,   842,  2008,  2009,
    1376,   673,   677,  1591,  1592,  1593,  1594,   507,   508,   509,
     510,   511,   512,   513,  2211,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,  1212,   531,   117,  1307,   876,  1882,   942,   889,
    1213,   507,   508,   509,   510,   511,   512,   513,  1172,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   357,   531,    73,  1095,
     929,  1595,   303,  1960,  1959,   660,    85,   101,   304,    89,
     853,   393,   394,   382,   163,  1108,   358,    90,  1898,   505,
    1214,   923,   584,   633,   320,  2178,  2242,  1841,  1842,  1960,
     943,   546,   546,   563,  1961,   118,  1852,  1853,  1579,  1580,
     843,   686,   687,  1446,    55,  1227,  1468,  2373,   854,  1082,
     374,  2348,   135,   806,   835,  -737,  1581,  1602,   341,  1618,
    1961,  2105,  2106,  2107,  2108,  2109,  2110,   303,   634,  1215,
     846,  1630,  1791,   304,    93,  2118,    16,  2342,  1899,  2122,
    1429,   952,   953,  2126,    86,  1771,   674,   674,  1978,  1631,
     507,   508,   509,   510,   511,   512,   513,   982,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   887,   531,   536,   374,   683,
     136,  1794,  1224,   684,   164,  1469,  1324,  1470,  1107,   930,
     694,   698,   700,   701,   702,   703,   704,   705,   706,   707,
     708,  1113,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   724,  1962,   726,   727,
     728,  2171,   730,   731,   732,   733,   734,   735,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   807,
    1951,  1952,   958,  1962,   753,   754,  1799,  2172,   585,   758,
     759,  1547,   688,  1495,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   305,   786,   787,   788,
    1496,   790,   791,   792,   793,   794,   795,   796,   797,  2366,
     306,   799,   800,   801,   802,   803,  2019,   538,  1106,   813,
     818,   819,   820,   821,   822,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   967,  1124,  1125,   970,
     296,   342,  1596,  1597,  1598,  1567,   847,  1130,   942,  1415,
    1892,  1871,  1179,   137,   981,  2246,   315,   316,   643,  2249,
    1190,   305,  1907,    16,  1410,  1920,    58,  1921,  2368,   569,
     362,  1424,  2354,    97,  1912,   306,   317,  2092,   567,   591,
     592,  1337,  1173,  1174,  1175,  1176,   576,   102,    87,  2367,
    1120,  1210,  2093,   966,  1165,  1166,  1167,  1609,   574,  1611,
    1612,   139,   105,  1211,  1599,  1094,   141,   144,   644,   146,
     943,  1926,   332,    88,  2098,   103,  1416,  1197,   148,  2329,
     324,  2086,  1927,  2355,  1198,  1985,  1986,  1987,  1988,  1989,
    1990,   128,  2298,  2299,   353,  2300,  2301,  1999,   983,  1212,
    2023,  2003,  1928,  2356,    75,  2007,  1121,  1213,  2369,  1098,
    1338,    59,   363,  1136,  1137,   649,  1929,   325,    60,   568,
     586,   587,   588,   589,   955,  1930,  1417,   577,   106,   335,
     336,   337,   338,   339,   340,  1335,  2337,  1773,  1341,  1573,
    1199,  1180,   326,   107,  1200,  1263,  1264,  1777,    76,  1191,
     327,   976,   977,  1411,    61,    62,   979,  1214,  2330,  1170,
    1425,  1201,   328,   986,    77,  1931,  1102,  2360,  1937,   645,
    1202,    63,   318,  1122,  1942,   570,   507,   508,   509,   510,
     511,   512,   513,   364,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,  1208,   531,  1778,   575,   944,  1215,  1203,  1628,  2020,
    1418,    78,   547,  2291,   140,  2330,  1007,  1008,    64,   142,
     145,  2357,   147,   656,   129,   333,  1559,  1419,    79,   329,
      80,   149,  2179,  1123,   345,    65,    81,    66,  1964,  2358,
    2209,  1216,   130,    67,  2331,  2344,   571,   354,   945,   946,
     330,   974,   975,   578,  2322,  2323,  1351,  1352,  2332,  1572,
     108,    82,    68,    69,   131,   918,  1774,  1204,   650,  2359,
    1779,   109,  1797,  1085,  1086,    16,  1088,    70,  1353,  1434,
    2349,   505,  1171,   919,  1805,  2361,   322,  1354,  1435,   548,
    1355,   132,  1356,   506,  -505,  1357,  2180,   346,  1388,  -333,
    -327,  2331,  1389,  2362,  2244,   969,   323,   111,  2345,  1806,
    1358,   331,   110,   549,   572,  2332,  2082,  1359,  1360,   341,
     150,   579,  2063,  2054,   114,   920,   550,   573,  2057,  2021,
    1780,  1629,   657,  2363,   580,  1798,  2324,  -505,  2076,   113,
    2077,   532,  1453,  2346,  1454,  -505,  1604,   115,   555,  2254,
    1390,   551,  1361,  1391,   119,  1605,  1322,  1330,  -365,  1217,
     921,  2350,  2351,   151,  2214,   120,   660,  -505,  1392,  1362,
     121,   152,  1616,  2199,   552,  2052,   153,  2203,   123,   122,
      83,  1617,  2297,   125,  2053,  1163,   907,    71,  1393,   124,
    2370,   150,   912,   154,   914,    91,  1394,   529,   530,    98,
     531,  -509,   688,  1363,   126,  1308,   156,   507,   508,   509,
     510,   511,   512,   513,  1319,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,  1364,   531,   151,   849,   546,  1237,   366,  1238,
    1365,  -506,   300,   138,  -509,   157,  1245,  1246,   143,  1247,
     949,   950,  -509,  1252,   528,   529,   530,   158,   531,   159,
    1253,  1254,  1255,  1256,   301,  1257,  1258,  1259,  1115,  1116,
    2150,   165,  1260,  1261,  -509,  1262,   299,  2135,  2168,  1186,
    1187,  1265,  1266,  1267,  -506,  1395,   369,  1396,  2163,  -365,
    1229,  1230,  -506,  1373,  1374,  1275,  1276,  1277,   313,  1278,
    1366,  2276,  2277,   347,  2279,  2280,  1397,  1377,  1378,   348,
    1289,   349,   809,   810,  -506,   811,  1379,  1380,   812,  1290,
    1291,  1292,  1293,  1294,  1295,  1296,  1297,   350,  1298,  1443,
    1381,  1380,  1299,   351,  1300,   355,  1301,  1302,  1303,  1304,
    1305,  1405,  1406,   352,  1306,   356,   524,   525,   526,   527,
     528,   529,   530,  1312,   531,  1314,  1314,  1440,  1441,  1516,
    1517,   361,  1039,  1040,  1519,  1520,  2220,  1615,  1406,  1331,
    1626,  1406,  1793,  1769,  1406,   360,  1336,   367,   507,   508,
     509,   510,   511,   512,   513,   365,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   369,   531,   896,   897,   898,   899,   375,
     900,  1795,  1452,   902,   903,   904,  1810,  1811,  1845,  1846,
     908,   909,   910,  1849,  1850,   913,  1386,  1890,  1891,  1913,
    1406,  1548,  2144,  2145,  1550,   371,  1551,   376,  1553,   507,
     508,   509,   510,   511,   512,   513,   377,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   378,   531,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   379,   531,  2256,  2257,  1457,  1141,  1142,  1461,
    1145,  1146,  1147,  2266,  2267,  1466,  1150,  1151,  1152,  1924,
    1406,  1155,  1939,  1406,  1472,   380,   979,  1944,  1441,  1953,
    1954,   384,  1480,  1481,   385,   507,   508,   509,   510,   511,
     512,   513,   386,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     387,   531,   507,   508,   509,   510,   511,   512,   513,   388,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   389,   531,  1955,
    1954,  1957,  1891,  1965,  1452,  1549,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,    92,   531,  1041,  1042,  2025,  2026,  2027,  2026,  2028,
    2026,  1569,  2031,  1954,  2034,  2035,  2036,  2037,   395,  1574,
     402,   507,   508,   509,   510,   511,   512,   513,   404,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   403,   531,  2039,  2040,
    2042,  2043,   405,   507,   508,   509,   510,   511,   512,   513,
     406,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   537,   531,
     407,   507,   508,   509,   510,   511,   512,   513,   408,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,  1781,   531,   507,   508,
     509,   510,   511,   512,   513,   409,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   410,   531,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,  1816,
     531,   411,  1817,  2061,  1406,  2062,  1406,  2075,  1406,  2079,
    1406,  1828,  1829,  2087,  2035,  2088,  1954,  2089,  1954,  2091,
    2037,  2156,  1406,  1830,  1063,  1064,  2166,  1406,  2167,  1406,
    2173,  1891,  1837,  1838,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   412,   531,   413,  1854,
    1855,  1856,  2184,  1811,  1857,  1858,   414,  1859,   415,  1860,
     416,  1861,  2226,  1406,  2228,  2035,  2229,  2037,  1862,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   417,   531,
    1868,  1870,  2239,  2240,   541,  1069,  1070,  2286,  2287,  1878,
    1879,  2302,  2303,  1632,  1633,  1634,  1635,  1636,  1637,   418,
    1638,   419,  1639,  2307,  2308,   420,  1640,  1641,  1642,  1894,
    1643,  2310,  2303,  1900,  2335,  2303,  1644,  1645,  1646,  1647,
    1648,  2336,  2303,  1904,  2339,  2340,  2364,  2303,   421,  1803,
    1649,  1109,  1110,  1327,  1328,   422,   423,  1910,  1875,  1876,
    1650,  1651,   424,   425,  1652,   426,   427,   428,   429,  1653,
    1654,  1655,  1656,  1657,   430,   431,  1658,   432,  1659,  1660,
    1661,  1477,  1478,  1662,  1663,   433,  1664,  1665,  1666,   434,
     435,   436,  1667,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   437,   531,  1668,   555,  1507,  1508,
     438,  1669,   439,   440,   441,   442,  1670,  1671,  1672,   443,
     444,   445,   446,  1673,  1674,   447,  1675,  1676,  1677,  1678,
     448,   558,  1679,   449,  1680,  1681,  1682,  1683,   450,  1684,
     451,  1685,  1686,   452,  1687,   453,  1688,  1689,   454,  1690,
    1691,  1692,  1693,   455,   456,   457,   458,   559,  1694,   459,
    1695,   460,  1696,  1697,   461,  1698,  1699,  1700,  1701,  1702,
    1703,   462,  1704,  1705,  1706,  1707,  1708,  1532,  1533,   463,
     464,   465,   466,   467,   468,   469,   470,  1709,   471,  1710,
     472,  1711,   473,   474,   475,   476,   477,   478,   479,   480,
    1712,   481,  1713,  1714,  1715,  1716,  1717,  1718,  1719,  1534,
    1535,  1720,  1721,   482,   483,   484,   485,  1722,   486,  1723,
    1724,  1725,   487,  1726,   488,  1727,   489,  1728,  1729,  1730,
    1731,   490,   491,   492,   493,   494,   560,  1536,  1537,   495,
     496,   497,   498,   499,   500,   501,   502,  1968,  1969,  1732,
    1733,  1734,   503,  1973,   504,  1975,   540,   542,   561,  1735,
     581,  1736,  1737,  1738,   582,  1804,   583,   593,  1739,   594,
    1740,  1741,  1742,   630,   638,   640,  1743,   639,   641,   647,
    1744,  1745,   648,   651,  1746,  1747,  1748,  1749,   653,   654,
     659,  1750,   664,   531,   665,   666,   667,   668,   669,   670,
     507,   508,   509,   510,   511,   512,   513,   671,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   672,   531,   676,   679,   689,
     691,   690,  1751,  1752,  1753,  1754,  1755,   507,   508,   509,
     510,   511,   512,   513,   709,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   725,   531,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   729,   531,   748,   749,  2073,   750,
     751,   752,   755,   760,   756,   757,   761,   762,   785,  2083,
     834,   789,   808,   836,   838,   840,   848,   850,   857,   858,
     860,   861,   319,  1756,  1757,  1758,  1759,  1760,   862,  1761,
     864,   865,   866,   867,   868,   869,   870,   871,   872,   873,
    1466,   874,   878,   875,   877,   879,   880,   881,   883,   507,
     508,   509,   510,   511,   512,   513,  2111,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   882,   531,   884,   885,   890,  2129,
     892,   893,   894,   901,   905,  2132,   911,   915,  1632,  1633,
    1634,  1635,  1636,  1637,  2138,  1638,   916,  1639,   917,   922,
     924,  1640,  1641,  1642,   925,  1643,   926,   927,  2147,  2148,
     928,  1644,  1645,  1646,  1647,  1648,   931,   932,   933,   934,
     935,   936,   938,   939,   940,  1649,   941,   956,   962,   964,
     972,   978,  1022,    16,  1036,  1650,  1651,  1037,  1038,  1652,
    1043,  1044,  1045,   -81,  1653,  1654,  1655,  1656,  1657,  1087,
    1090,  1658,  1091,  1659,  1660,  1661,  1092,  1096,  1662,  1663,
    1097,  1664,  1665,  1666,  1099,  1100,  1101,  1667,  1111,  1112,
    1118,  1114,  1119,  1126,  1127,  1128,   919,  1131,  1132,  1133,
    1134,  1668,  1135,  1138,  1143,  1160,  1669,  1157,  1158,  1159,
    1162,  1670,  1671,  1672,  1161,  1164,  1168,  1182,  1673,  1674,
    1181,  1675,  1676,  1677,  1678,  1185,  1188,  1679,  1192,  1925,
    1681,  1682,  1683,  1193,  1684,  1195,  1685,  1686,  1196,  1687,
    1209,  1688,  1689,  1194,  1690,  1691,  1692,  1693,  1221,  2225,
    1222,  1225,  1231,  1694,  1241,  1695,  1226,  1696,  1697,  1243,
    1698,  1699,  1700,  1701,  1702,  1703,  2237,  1704,  1705,  1706,
    1707,  1708,  1244,  1249,  1268,  1279,  1280,  1269,  1270,  1281,
    1283,  1285,  1709,  1287,  1710,  1288,  1711,  1271,  1272,  1273,
    1274,  1320,  1282,  1323,  1325,  1712,  1329,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,  1332,  1284,  1720,  1721,  1286,   -83,
    1333,  1342,  1722,  1345,  1723,  1724,  1725,  1346,  1726,  1347,
    1727,  1369,  1728,  1729,  1730,  1731,  1991,  1992,  1370,  1385,
    1409,  1412,  1414,  1420,  1407,  1422,  1427,  1426,  1428,  1431,
    1348,  1433,  1438,  1371,  1732,  1733,  1734,  1372,  1382,  1442,
    1447,  1444,  1383,  1384,  1735,  2295,  1736,  1737,  1738,  1448,
    1449,  1458,  1463,  1739,   971,  1740,  1741,  1742,  1452,  1399,
    1400,  1743,  1401,  1402,  1462,  1744,  1745,  1403,  1404,  1746,
    1747,  1748,  1749,  1432,  1352,  1436,  1750,   507,   508,   509,
     510,   511,   512,   513,  1437,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,  1439,   531,  1354,  1464,  1556,  1355,  1560,  1356,
    1482,  1450,  1357,  1564,  1473,  1557,  1565,  1751,  1752,  1753,
    1754,  1755,  1483,  1577,  1582,  1500,  1583,  1358,  1545,  1501,
    1502,  1587,  1503,  1504,  1359,  1360,  1588,  1600,  1590,  1601,
    1606,  1603,  1607,  1608,  1610,  1619,   987,  1620,  1632,  1633,
    1634,  1635,  1636,  1637,  1505,  1638,  1546,  1639,  1506,  1515,
    1518,  1640,  1641,  1642,  1521,  1643,  1552,  1554,  1555,  1361,
    1561,  1644,  1645,  1646,  1647,  1648,  1562,  1621,  1622,  1563,
    1570,  1623,  1575,  1572,  1576,  1649,  1584,  1585,  1756,  1757,
    1758,  1759,  1760,  1586,  1761,  1650,  1651,  1624,  1589,  1652,
    1613,  1763,  1764,  1625,  1653,  1654,  1655,  1656,  1657,  1627,
    1766,  1658,  1768,  1659,  1660,  1661,  1770,  1772,  1662,  1663,
    1363,  1664,  1665,  1666,  1775,  1785,  1808,  1667,  1809,  1782,
    1813,  1815,  1783,  1784,  1839,  1873,  1788,  1880,  1883,  1802,
    1886,  1668,  1863,  1864,  1865,  1844,  1669,  1848,  1866,  1364,
    1867,  1670,  1671,  1672,  1877,  1884,  1888,  1365,  1673,  1674,
    1893,  1675,  1676,  1677,  1678,  1895,  1896,  1679,  1901,  2055,
    1681,  1682,  1683,  1902,  1684,  1908,  1685,  1686,  1906,  1687,
    1909,  1688,  1689,  1911,  1690,  1691,  1692,  1693,  1914,  1932,
    1935,  1903,  1941,  1694,  1916,  1695,  1919,  1696,  1697,  1917,
    1698,  1699,  1700,  1701,  1702,  1703,  1918,  1704,  1705,  1706,
    1707,  1708,  1922,  1923,  1946,  1943,  1933,  1366,  1934,  1938,
    1947,  1940,  1709,  1966,  1710,  1945,  1711,  1948,  1977,  1976,
    1970,  1979,  1994,  2000,  1995,  1712,  2001,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,  2029,  2002,  1720,  1721,  2004,  2030,
    2005,  2006,  1722,  2032,  1723,  1724,  1725,  2033,  1726,  2038,
    1727,  2046,  1728,  1729,  1730,  1731,  2044,  2045,  2060,  2064,
    2048,  2071,  2049,  2050,  2059,  2072,  2074,  2078,  2080,  2084,
    2085,  2090,  2094,  2095,  1732,  1733,  1734,  2096,  2097,  2099,
    2100,  2103,  2112,  2114,  1735,  2115,  1736,  1737,  1738,  2116,
    2117,  2120,  2121,  1739,  2124,  1740,  1741,  1742,  2125,  2130,
    2127,  1743,  2128,  2133,  2131,  1744,  1745,  2136,  2137,  1746,
    1747,  1748,  1749,  2139,  2140,  2141,  1750,   507,   508,   509,
     510,   511,   512,   513,  2142,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,  2143,   531,  2146,  2149,  2153,  2155,  2158,  2159,
    2160,  2161,  2162,  2165,   988,  2169,  2174,  1751,  1752,  1753,
    1754,  1755,   508,   509,   510,   511,   512,   513,  2175,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,  2176,   531,  1632,  1633,
    1634,  1635,  1636,  1637,  2181,  1638,  2182,  1639,  2183,  2185,
    2186,  1640,  1641,  1642,  2188,  1643,  2195,  2189,  2190,  2196,
    2191,  1644,  1645,  1646,  1647,  1648,  2192,  2193,  2198,  2212,
    2215,  2227,  2200,  2201,  2230,  1649,  2232,  2202,  1756,  1757,
    1758,  1759,  1760,  2204,  1761,  1650,  1651,  2205,  2222,  1652,
    2233,  2206,  2238,  2208,  1653,  1654,  1655,  1656,  1657,  2216,
    2217,  1658,  2223,  1659,  1660,  1661,  2231,  2234,  1662,  1663,
    2243,  1664,  1665,  1666,  2245,  2235,  2236,  1667,  2252,  2253,
    2255,  2259,  2265,  2264,  2268,  2269,  2270,  2272,  2271,  2274,
    2281,  1668,  2275,  2282,  2278,  2283,  1669,  2285,  1954,  2288,
    2289,  1670,  1671,  1672,  2290,  2292,  2293,  2294,  1673,  1674,
    2304,  1675,  1676,  1677,  1678,  2306,  2296,  1679,  2319,  2058,
    1681,  1682,  1683,  2309,  1684,  2311,  1685,  1686,  2312,  1687,
    2320,  1688,  1689,  2321,  1690,  1691,  1692,  1693,  2328,  2314,
    2315,  2316,  2317,  1694,  2325,  1695,  2334,  1696,  1697,  2338,
    1698,  1699,  1700,  1701,  1702,  1703,  2343,  1704,  1705,  1706,
    1707,  1708,  2333,  2341,  2352,  2365,  2374,  2375,  2371,  2376,
    2377,  2378,  1709,  2379,  1710,   314,  1711,  1474,  1318,  1251,
     685,  1872,  2024,  1967,  1571,  1712,   372,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,   837,   852,  1720,  1721,   961,   960,
    2157,  2305,  1722,  2262,  1723,  1724,  1725,   863,  1726,  2313,
    1727,   160,  1728,  1729,  1730,  1731,  1344,  2102,  1117,   968,
     678,  1796,  2081,  2353,  1776,  1792,  1153,   392,  1169,  1905,
       0,  1234,   652,     0,  1732,  1733,  1734,     0,     0,   891,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   989,     0,     0,  1751,  1752,  1753,
    1754,  1755,   509,   510,   511,   512,   513,     0,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2065,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   996,     0,     0,  1751,  1752,  1753,
    1754,  1755,   510,   511,   512,   513,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2066,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   997,     0,     0,  1751,  1752,  1753,
    1754,  1755,  -738,  -738,  -738,  -738,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2067,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   998,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2068,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   999,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2069,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1001,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2070,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1002,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2151,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1003,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2152,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1009,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2221,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1011,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2224,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1732,  1733,  1734,     0,     0,     0,
       0,     0,     0,     0,  1735,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,     0,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1016,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1632,  1633,
    1634,  1635,  1636,  1637,     0,  1638,     0,  1639,     0,     0,
       0,  1640,  1641,  1642,     0,  1643,     0,     0,     0,     0,
       0,  1644,  1645,  1646,  1647,  1648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1649,     0,     0,  1756,  1757,
    1758,  1759,  1760,     0,  1761,  1650,  1651,     0,     0,  1652,
       0,     0,     0,     0,  1653,  1654,  1655,  1656,  1657,     0,
       0,  1658,     0,  1659,  1660,  1661,     0,     0,  1662,  1663,
       0,  1664,  1665,  1666,     0,     0,     0,  1667,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,     0,  1669,     0,     0,     0,
       0,  1670,  1671,  1672,     0,     0,     0,     0,  1673,  1674,
       0,  1675,  1676,  1677,  1678,     0,     0,  1679,     0,  2258,
    1681,  1682,  1683,     0,  1684,     0,  1685,  1686,     0,  1687,
       0,  1688,  1689,     0,  1690,  1691,  1692,  1693,     0,     0,
       0,     0,     0,  1694,     0,  1695,     0,  1696,  1697,     0,
    1698,  1699,  1700,  1701,  1702,  1703,     0,  1704,  1705,  1706,
    1707,  1708,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,  1710,     0,  1711,     0,     0,     0,
       0,     0,     0,     0,     0,  1712,     0,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,     0,     0,  1720,  1721,     0,     0,
       0,     0,  1722,     0,  1723,  1724,  1725,     0,  1726,     0,
    1727,     0,  1728,  1729,  1730,  1731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,     0,     0,     0,  1732,  1733,  1734,     0,     0,   172,
     173,     0,     0,     0,  1735,     0,  1736,  1737,  1738,   174,
     175,     0,     0,  1739,     0,  1740,  1741,  1742,     0,     0,
       0,  1743,   176,     0,     0,  1744,  1745,     0,     0,  1746,
    1747,  1748,  1749,     0,     0,     0,  1750,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   178,
       0,     0,   179,   180,     0,     0,     0,     0,     0,     0,
       0,   181,     0,     0,  1017,     0,     0,  1751,  1752,  1753,
    1754,  1755,     0,     0,     0,     0,     0,     0,   182,     0,
       0,     0,   183,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,   507,   508,   509,   510,   511,   512,   513,   184,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,  1756,  1757,
    1758,  1759,  1760,     0,  1761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,   507,   508,
     509,   510,   511,   512,   513,   186,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,   188,     0,
       0,     0,     0,     0,     0,   189,   190,     0,     0,     0,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
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
       0,     0,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,     0,   294,     0,     0,   295,   166,   167,
     168,   169,   170,   171,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,     0,   507,   508,   509,   510,   511,
     512,   513,   174,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     695,     0,     0,     0,     0,     0,     0,   177,     0,     0,
       0,     0,   178,     0,     0,   179,   180,     0,     0,     0,
       0,     0,     0,     0,   181,     0,     0,     0,     0,     0,
       0,     0,     0,   507,   508,   509,   510,   511,   512,   513,
    1018,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,   507,   508,   509,   510,   511,   512,   513,  1019,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   696,   531,  1031,     0,     0,   185,     0,
       0,   507,   508,   509,   510,   511,   512,   513,   186,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,     0,     0,
       0,     0,     0,   507,   508,   509,   510,   511,   512,   513,
     187,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   697,
       0,     0,     0,     0,     0,     0,     0,     0,   192,     0,
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
     282,     0,     0,     0,     0,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,     0,   294,     0,     0,
     295,   166,   167,   168,   169,   170,   171,     0,     0,     0,
       0,     0,  1032,     0,     0,   172,   173,     0,     0,     0,
       0,     0,     0,     0,     0,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   814,     0,
       0,     0,     0,     0,     0,   815,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,   178,     0,     0,   179,   180,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
    1033,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,  1035,     0,
     507,   508,   509,   510,   511,   512,   513,     0,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,  1046,   531,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,  1055,     0,
       0,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1056,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   187,     0,     0,     0,     0,     0,     0,
     816,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,     0,     0,
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,     0,
     294,     0,     0,   817,   166,   167,   168,   169,   170,   171,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,   507,   508,   509,   510,   511,   512,   513,   174,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   177,   531,     0,     0,     0,   178,     0,
       0,   179,   180,     0,     0,     0,     0,     0,  1057,     0,
     181,     0,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,  1058,   531,   507,
     508,   509,   510,   511,   512,   513,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,  1059,   531,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,   507,   508,   509,
     510,   511,   512,   513,   186,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   187,     0,  1060,   507,
     508,   509,   510,   511,   512,   513,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   399,     0,     0,     0,
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
       0,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,     0,   294,     0,     0,   295,   166,   167,   168,
     169,   170,   171,     0,     0,     0,     0,     0,  1061,     0,
       0,   172,   173,     0,     0,     0,     0,     0,     0,     0,
       0,   174,   736,     0,     0,     0,     0,     0,   507,   508,
     509,   510,   511,   512,   513,  1062,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   178,     0,     0,   179,   180,     0,     0,     0,  1068,
       0,     0,     0,   181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   507,
     508,   509,   510,   511,   512,   513,  1072,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,   507,   508,   509,   510,
     511,   512,   513,  1073,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1074,     0,     0,   185,     0,     0,
     507,   508,   509,   510,   511,   512,   513,   186,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1075,     0,     0,   187,
     507,   508,   509,   510,   511,   512,   513,     0,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
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
       0,     0,     0,     0,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,     0,   294,     0,     0,   295,
     166,   167,   168,   169,   170,   171,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   173,     0,     0,     0,     0,
       0,     0,     0,     0,   174,  1076,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,   178,     0,     0,   179,   180,     0,
       0,     0,     0,     0,     0,     0,   181,     0,     0,   507,
     508,   509,   510,   511,   512,   513,  1080,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,     0,     0,
       0,     0,     0,  1242,     0,     0,   507,   508,   509,   510,
     511,   512,   513,   985,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1487,     0,     0,
     185,     0,     0,   507,   508,   509,   510,   511,   512,   513,
     186,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,     0,  1488,     0,     0,
       0,     0,   187,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     286,   287,   288,   289,   290,   291,   292,   293,     0,   294,
       0,     0,   295,   166,   167,   168,   169,   170,   171,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   173,     0,
       0,     0,     0,  1499,     0,     0,     0,   174,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   178,     0,     0,
     179,   180,     0,     0,     0,     0,  1509,     0,     0,   181,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1460,     0,     0,   507,   508,   509,   510,
     511,   512,   513,  1525,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1526,     0,     0,   185,     0,     0,   507,   508,   509,   510,
     511,   512,   513,   186,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
    1527,     0,     0,     0,     0,   187,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
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
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,     0,   294,     0,     0,   295,   166,   167,   168,   169,
     170,   171,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   173,     0,     0,     0,  1530,     0,     0,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
       0,     0,     0,     0,     0,   177,     0,     0,     0,     0,
     178,     0,     0,   179,   180,   507,   508,   509,   510,   511,
     512,   513,   181,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,     0,  1531,     0,     0,  1465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   507,   508,   509,   510,   511,   512,   513,
    1544,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2015,     0,     0,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1475,     0,     0,     0,     0,
       0,     0,     0,  2018,     0,     0,     0,     0,   187,   507,
     508,   509,   510,   511,   512,   513,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     0,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,  1020,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   280,   281,   282,     0,
       0,     0,     0,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,     0,   294,     0,     0,   295,   166,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,   174,     0,     0,     0,     0,  1021,   507,
     508,   509,   510,   511,   512,   513,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,  1476,     0,   178,     0,     0,   179,   180,   507,   508,
     509,   510,   511,   512,   513,   181,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,  1972,
       0,     0,   507,   508,   509,   510,   511,   512,   513,   798,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,   507,
     508,   509,   510,   511,   512,   513,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
       0,     0,   507,   508,   509,   510,   511,   512,   513,   186,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
       0,     0,     0,     0,     0,   984,     0,     0,     0,     0,
       0,   187,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     287,   288,   289,   290,   291,   292,   293,     0,   294,     0,
       0,   295,   166,   167,   168,   169,   170,   171,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   173,     0,     0,
       0,     0,     0,     0,     0,   990,   174,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,   991,     0,   178,     0,     0,   179,
     180,   507,   508,   509,   510,   511,   512,   513,   181,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   992,     0,
       0,     0,  1974,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   507,   508,
     509,   510,   511,   512,   513,   993,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,   185,     0,     0,   507,   508,   509,   510,   511,
     512,   513,   186,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,     0,     0,     0,     0,     0,     0,   995,     0,
       0,     0,     0,     0,   187,   507,   508,   509,   510,   511,
     512,   513,     0,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,     0,     0,     0,     0,     0,     0,     0,
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
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
       0,   294,     0,     0,   295,   166,   167,   168,   169,   170,
     171,     0,     0,     0,     0,     0,     0,     0,     0,   172,
     173,     0,     0,  1000,     0,     0,     0,     0,     0,   174,
     507,   508,   509,   510,   511,   512,   513,     0,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,  1004,     0,   178,
       0,     0,   179,   180,   507,   508,   509,   510,   511,   512,
     513,   181,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,     0,     0,     0,     0,     0,     0,   507,   508,   509,
     510,   511,   512,   513,  1005,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,   507,   508,   509,   510,   511,   512,
     513,     0,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1006,     0,     0,     0,   185,     0,     0,   507,   508,
     509,   510,   511,   512,   513,   186,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,  1010,     0,     0,     0,     0,     0,   187,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
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
       0,     0,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,     0,   294,     0,     0,   295,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   507,
     508,   509,   510,   511,   512,   513,  1012,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,   507,   508,   509,   510,
     511,   512,   513,     0,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,   507,   508,   509,   510,   511,   512,   513,
    1013,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,   507,   508,   509,   510,
     511,   512,   513,  1014,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,   507,   508,   509,   510,   511,   512,   513,
    1023,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   507,   508,   509,
     510,   511,   512,   513,  1024,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   507,   508,   509,
     510,   511,   512,   513,  1025,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,   507,   508,   509,   510,   511,   512,
     513,     0,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   507,   508,
     509,   510,   511,   512,   513,     0,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,   507,   508,   509,   510,   511,
     512,   513,     0,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
     507,   508,   509,   510,   511,   512,   513,     0,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,  1026,   531,   507,   508,   509,
     510,   511,   512,   513,     0,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,  1027,   531,   507,   508,   509,   510,   511,   512,
     513,     0,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,  1028,
     531,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,     0,     0,
       0,     0,  1029,     0,   507,   508,   509,   510,   511,   512,
     513,     0,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,  1030,
     531,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,     0,     0,
       0,     0,     0,     0,     0,     0,   507,   508,   509,   510,
     511,   512,   513,  1034,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   507,   508,   509,   510,
     511,   512,   513,  1047,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,   507,   508,   509,   510,   511,   512,   513,
    1048,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     507,   508,   509,   510,   511,   512,   513,  1049,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,   507,   508,   509,
     510,   511,   512,   513,  1050,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,   507,   508,   509,   510,   511,   512,
     513,  1051,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,   507,   508,   509,   510,   511,   512,   513,  1052,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,     0,   507,
     508,   509,   510,   511,   512,   513,  1053,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,   507,   508,   509,   510,
     511,   512,   513,  1054,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,   507,   508,   509,   510,   511,   512,   513,
    1065,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     507,   508,   509,   510,   511,   512,   513,  1066,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,     0,     0,
       0,     0,     0,   507,   508,   509,   510,   511,   512,   513,
    1067,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     507,   508,   509,   510,   511,   512,   513,  1071,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,     0,     0,
       0,     0,     0,     0,     0,   507,   508,   509,   510,   511,
     512,   513,  1077,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   507,   508,   509,   510,   511,
     512,   513,  1078,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,   507,   508,   509,   510,   511,   512,   513,  1079,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,   507,
     508,   509,   510,   511,   512,   513,  1104,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,   507,   508,   509,   510,
     511,   512,   513,  1479,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,   507,   508,   509,   510,   511,   512,   513,
    1484,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     507,   508,   509,   510,   511,   512,   513,  1485,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,   507,   508,
     509,   510,   511,   512,   513,  1486,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,   507,   508,   509,   510,   511,
     512,   513,  1489,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,   507,   508,   509,   510,   511,   512,   513,  1490,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,   507,
     508,   509,   510,   511,   512,   513,  1491,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,     0,     0,
       0,     0,   507,   508,   509,   510,   511,   512,   513,  1492,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,   507,
     508,   509,   510,   511,   512,   513,  1493,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,     0,     0,     0,
       0,     0,     0,     0,   507,   508,   509,   510,   511,   512,
     513,  1494,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   507,   508,   509,   510,   511,   512,
     513,  1497,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,   507,   508,   509,   510,   511,   512,   513,  1498,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   507,   508,
     509,   510,   511,   512,   513,  1510,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,   507,   508,   509,   510,   511,
     512,   513,  1511,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,   507,   508,   509,   510,   511,   512,   513,  1524,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,   507,
     508,   509,   510,   511,   512,   513,  1528,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,     0,   507,   508,   509,
     510,   511,   512,   513,  1529,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,   507,   508,   509,   510,   511,   512,
     513,  1538,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,   507,   508,   509,   510,   511,   512,   513,  1539,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   507,   508,
     509,   510,   511,   512,   513,  1540,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,   507,   508,   509,   510,   511,   512,   513,  1541,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   507,   508,
     509,   510,   511,   512,   513,  1542,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,     0,     0,     0,     0,
       0,     0,     0,   507,   508,   509,   510,   511,   512,   513,
    1543,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   507,   508,   509,   510,   511,   512,   513,
    1614,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     507,   508,   509,   510,   511,   512,   513,  1818,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,   507,   508,   509,
     510,   511,   512,   513,  1885,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,   507,   508,   509,   510,   511,   512,
     513,  1949,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,   507,   508,   509,   510,   511,   512,   513,  1980,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,   507,   508,
     509,   510,   511,   512,   513,  1981,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,     0,   531,     0,   507,   508,   509,   510,
     511,   512,   513,  1982,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,   507,   508,   509,   510,   511,   512,   513,
    1983,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     507,   508,   509,   510,   511,   512,   513,  1984,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,   507,   508,   509,
     510,   511,   512,   513,  1993,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
     507,   508,   509,   510,   511,   512,   513,  2010,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,   507,   508,   509,
     510,   511,   512,   513,  2011,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,     0,   507,   508,   509,   510,   511,   512,   513,  2012,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   507,   508,   509,   510,   511,   512,   513,  2013,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,   507,
     508,   509,   510,   511,   512,   513,  2014,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,   531,   507,   508,   509,   510,
     511,   512,   513,  2016,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,     0,   531,     0,     0,     0,     0,     0,     0,     0,
    2017,     0,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,  2041,   531,   507,
     508,   509,   510,   511,   512,   513,     0,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,  2047,   531,     0,     0,     0,     0,
    1819,  1820,     0,     0,     0,  1821,     0,  1822,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2051,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1823,  1824,     0,  1825,     0,     0,     0,     0,     0,  2056,
       0,   507,   508,   509,   510,   511,   512,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,  2164,   531,     0,     0,
       0,     0,     1,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,  2194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     7,     0,   595,   596,     0,   597,     0,
     598,   599,     0,  2207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1826,  1827,   600,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2218,     0,
       0,     0,     8,     0,     0,     0,     0,   399,   601,   602,
     603,   604,   973,     9,    10,    11,     0,   605,     0,     0,
       0,     0,     0,     0,     0,     0,   606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2219,     0,
       0,     0,     0,     0,     0,     0,   607,     0,     0,     0,
       0,    12,     0,    13,   608,     0,     0,     0,     0,     0,
       0,    14,     0,     0,     0,  2263,     0,     0,     0,   609,
       0,     0,     0,     0,     0,     0,   610,     0,     0,   611,
       0,     0,   612,   613,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,  1240,     0,     0,     0,     0,   614,
      17,     0,     0,    18,     0,   507,   508,   509,   510,   511,
     512,   513,    19,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
       0,   531,     0,   615,   616,     0,     0,   617,   618,     0,
       0,     0,     0,   619,     0,   620,     0,     0,     0,     0,
     621,   622,     0,     0,     0,     0,   623,     0,   624,     0,
       0,     0,     0,     0,   625,     0,   626,   627,     0,     0,
       0,     0,   628,   507,   508,   509,   510,   511,   512,   513,
       0,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,     0,   531,
     507,   508,   509,   510,   511,   512,   513,     0,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,     0,     0,
       0,  1248,   507,   508,   509,   510,   511,   512,   513,     0,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,   531,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1797,     0,   506,     0,     0,     0,     0,     0,     0,
     507,   508,   509,   510,   511,   512,   513,  1239,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,   531,     0,     0,     0,
       0,     0,     0,     0,  1471,     0,     0,     0,     0,     0,
       0,   532,     0,     0,     0,     0,     0,   507,   508,   509,
     510,   511,   512,   513,  1798,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531,     0,     0,     0,     0,     0,     0,
       0,   507,   508,   509,   510,   511,   512,   513,  1015,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,     0,   531,     0,     0,
       0,     0,     0,     0,   507,   508,   509,   510,   511,   512,
     513,  1089,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
     531,     0,     0,     0,     0,     0,     0,   507,   508,   509,
     510,   511,   512,   513,  1311,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,   531
};

static const yytype_int16 yycheck[] =
{
      96,  1108,  1454,  1334,  1164,   312,   306,   663,  1196,  1124,
    1125,   302,  1439,    36,  1437,  1130,   552,   356,     3,   154,
    1180,    49,  1568,     5,   906,   907,     3,   199,   199,     4,
     912,  1191,   914,   971,    48,     8,   136,   136,    90,  1782,
      36,   968,     6,   970,    20,    51,     6,     4,     3,     4,
       5,     6,     7,     8,   846,   240,     3,    74,    18,   159,
      48,    87,     3,   108,   107,   161,   162,   306,  1217,    16,
    1788,    20,   219,   373,    51,    78,   172,   173,   174,     3,
     107,   216,   178,     3,   112,    97,   133,   277,   274,   259,
      71,     5,    51,     9,    87,     3,   230,  1841,  1842,   266,
     252,    60,     3,    84,    20,   252,    99,   154,  1852,  1853,
     280,   240,   240,     4,     5,     6,     7,    10,    11,    12,
      13,    14,    15,    16,   258,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   135,    36,    85,  1083,   576,  1570,   154,    63,
     143,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    39,    36,     3,   835,
     266,    72,   167,   197,   172,   274,     3,    95,   173,   252,
     177,   394,   395,   210,     3,   851,    59,   252,   201,   295,
     193,   631,    18,   150,   394,   248,   258,  1513,  1514,   197,
     216,   397,   397,   258,   228,   156,  1522,  1523,  1349,  1350,
     267,   124,   125,   249,   371,   397,   397,   184,   215,   193,
     397,   258,   156,   193,   534,   241,  1351,  1368,   193,  1399,
     228,  1985,  1986,  1987,  1988,  1989,  1990,   167,   195,   242,
     541,  1411,  1440,   173,   227,  1999,   241,   269,   261,  2003,
     395,   236,   237,  2007,     3,  1425,   395,   395,  1814,  1412,
      10,    11,    12,    13,    14,    15,    16,   136,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   277,    36,   397,   397,   395,
       3,  1450,   958,   399,   113,  1232,  1098,  1234,   397,   395,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   857,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   351,   434,   435,
     436,  2084,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   319,
    1783,  1784,   662,   351,   460,   461,   394,  2085,   184,   465,
     466,  1309,   275,   396,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   381,   493,   494,   495,
     396,   497,   498,   499,   500,   501,   502,   503,   504,   113,
     395,   507,   508,   509,   510,   511,  1868,   394,   394,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   675,   867,   868,   678,
     536,   396,   333,   334,   335,   394,   542,   877,   154,    40,
    1581,  1558,   266,   156,   693,  2199,    54,    55,   107,  2203,
     266,   381,  1605,   241,   266,  1625,    10,  1627,   113,    71,
       3,   266,    98,   252,  1617,   395,    74,     5,     3,   396,
     397,   197,   327,   328,   329,   330,     3,     0,     3,   193,
      78,    87,    20,   271,   924,   925,   926,  1379,    71,  1381,
    1382,     3,     3,    99,   395,   398,     3,     3,   157,     3,
     216,  1654,    55,    28,  1966,   393,   107,    71,     3,    18,
      38,  1948,  1665,   149,    78,  1831,  1832,  1833,  1834,  1835,
    1836,     3,  2276,  2277,     3,  2279,  2280,  1843,   397,   135,
    1871,  1847,  1685,    74,    95,  1851,   134,   143,   193,   840,
     266,    95,    85,   892,   893,     3,  1699,    75,   102,    84,
     376,   377,   378,   379,   660,  1708,   157,    84,     3,     3,
       4,     5,     6,     7,     8,  1111,    18,   266,  1114,   277,
     134,   395,   100,     3,   138,  1015,  1016,    78,   139,   395,
     108,   687,   688,   395,   138,   139,   692,   193,    97,   268,
     395,   155,   120,   699,   155,  1748,   845,    74,  1768,   258,
     164,   155,   210,   201,  1774,   217,    10,    11,    12,    13,
      14,    15,    16,   156,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   948,    36,   134,   217,   351,   242,   201,   268,   277,
     241,   202,    76,  2267,   156,    97,   396,   397,   202,   156,
     156,   192,   156,   136,   136,   208,  1322,   258,   219,   187,
     221,   156,   204,   261,   139,   219,   227,   221,  1793,   210,
    2132,   277,   154,   227,   183,   137,     3,   156,   394,   395,
     208,   124,   125,     3,  2308,  2309,  1126,    18,   197,   397,
       3,   252,   246,   247,   176,    18,   395,   261,   156,   240,
     201,   395,    49,   809,   810,   241,   812,   261,    39,   155,
    2334,   817,   391,    36,     3,   192,   100,    48,   164,   153,
      51,   203,    53,     3,   103,    56,   268,   202,    62,   163,
       3,   183,    66,   210,  2196,   271,   120,   156,   200,    28,
      71,   269,   216,   177,    71,   197,  1944,    78,    79,   193,
     103,    71,  1922,  1906,   155,    78,   190,    84,  1911,   397,
     261,   391,   245,   240,    84,   112,  2310,   146,  1938,     3,
    1940,    51,     3,   235,     5,   154,    51,     3,    51,  2212,
     114,   215,   113,   117,     3,    60,  1096,  1104,   266,   395,
     113,  2335,  2336,   146,  2135,     3,   274,   176,   132,   130,
       3,   154,    51,  2119,   238,    51,   159,  2123,   246,    67,
     371,    60,  2274,    71,    60,   921,   611,   371,   152,   155,
    2364,   103,   617,   176,   619,    14,   160,    33,    34,    18,
      36,   103,   275,   164,   252,  1084,   171,    10,    11,    12,
      13,    14,    15,    16,  1093,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   193,    36,   146,   396,   397,   973,   126,   975,
     201,   103,   154,     3,   146,   397,   982,   983,     3,   985,
     396,   397,   154,   989,    32,    33,    34,     3,    36,     3,
     996,   997,   998,   999,   176,  1001,  1002,  1003,    45,    46,
    2053,   397,  1008,  1009,   176,  1011,     3,  2024,  2078,   223,
     224,  1017,  1018,  1019,   146,   249,   394,   251,  2071,   397,
     396,   397,   154,   396,   397,  1031,  1032,  1033,     3,  1035,
     261,  2247,  2248,   281,  2250,  2251,   270,    82,    83,     3,
    1046,    51,    13,    14,   176,    16,   396,   397,    19,  1055,
    1056,  1057,  1058,  1059,  1060,  1061,  1062,     3,  1064,  1208,
     396,   397,  1068,   395,  1070,   281,  1072,  1073,  1074,  1075,
    1076,   396,   397,   197,  1080,   395,    28,    29,    30,    31,
      32,    33,    34,  1089,    36,  1091,  1092,   396,   397,   396,
     397,     3,   396,   397,   396,   397,  2149,   396,   397,  1105,
     396,   397,  1442,   396,   397,   197,  1112,   395,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   394,    36,   598,   599,   600,   601,   281,
     603,   396,   397,   606,   607,   608,   396,   397,     4,     5,
     613,   614,   615,     4,     5,   618,  1162,   396,   397,   396,
     397,  1310,    57,    58,  1313,     3,  1315,   281,  1317,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   281,    36,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   197,    36,    57,    58,  1222,   899,   900,  1225,
     902,   903,   904,   394,   395,  1231,   908,   909,   910,   396,
     397,   913,   396,   397,  1240,   281,  1242,   396,   397,   396,
     397,   281,  1248,  1249,   281,    10,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       4,    36,    10,    11,    12,    13,    14,    15,    16,   245,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,   396,
     397,   396,   397,   396,   397,  1311,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     8,    36,   396,   397,   396,   397,   396,   397,   396,
     397,  1337,   396,   397,   396,   397,   396,   397,     9,  1345,
     394,    10,    11,    12,    13,    14,    15,    16,    36,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   395,    36,   396,   397,
     396,   397,   395,    10,    11,    12,    13,    14,    15,    16,
     395,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   397,    36,
     395,    10,    11,    12,    13,    14,    15,    16,   395,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,  1432,    36,    10,    11,
      12,    13,    14,    15,    16,   395,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   395,    36,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  1475,
      36,   395,  1478,   396,   397,   396,   397,   396,   397,   396,
     397,  1487,  1488,   396,   397,   396,   397,   396,   397,   396,
     397,   396,   397,  1499,   396,   397,   396,   397,   396,   397,
     396,   397,  1508,  1509,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   395,    36,   395,  1525,
    1526,  1527,   396,   397,  1530,  1531,   395,  1533,   395,  1535,
     395,  1537,   396,   397,   396,   397,   396,   397,  1544,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   395,    36,
    1556,  1557,   396,   397,     3,   396,   397,   396,   397,  1565,
    1566,   396,   397,     3,     4,     5,     6,     7,     8,   395,
      10,   395,    12,   394,   395,   395,    16,    17,    18,  1585,
      20,   396,   397,  1589,   396,   397,    26,    27,    28,    29,
      30,   396,   397,  1599,   396,   397,   396,   397,   395,   181,
      40,   853,   854,  1100,  1101,   395,   395,  1613,  1562,  1563,
      50,    51,   395,   395,    54,   395,   395,   395,   395,    59,
      60,    61,    62,    63,   395,   395,    66,   395,    68,    69,
      70,   396,   397,    73,    74,   395,    76,    77,    78,   395,
     395,   395,    82,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   395,    36,    96,    51,   396,   397,
     395,   101,   395,   395,   395,   395,   106,   107,   108,   395,
     395,   395,   395,   113,   114,   395,   116,   117,   118,   119,
     395,    53,   122,   395,   124,   125,   126,   127,   395,   129,
     395,   131,   132,   395,   134,   395,   136,   137,   395,   139,
     140,   141,   142,   395,   395,   395,   395,    53,   148,   395,
     150,   395,   152,   153,   395,   155,   156,   157,   158,   159,
     160,   395,   162,   163,   164,   165,   166,   396,   397,   395,
     395,   395,   395,   395,   395,   395,   395,   177,   395,   179,
     395,   181,   395,   395,   395,   395,   395,   395,   395,   395,
     190,   395,   192,   193,   194,   195,   196,   197,   198,   396,
     397,   201,   202,   395,   395,   395,   395,   207,   395,   209,
     210,   211,   395,   213,   395,   215,   395,   217,   218,   219,
     220,   395,   395,   395,   395,   395,    44,   396,   397,   395,
     395,   395,   395,   395,   395,   395,   395,  1803,  1804,   239,
     240,   241,   395,  1809,   395,  1811,   395,   395,     3,   249,
      71,   251,   252,   253,   277,   397,   245,     3,   258,     3,
     260,   261,   262,   197,     3,   281,   266,   197,     3,     3,
     270,   271,   197,   281,   274,   275,   276,   277,     3,     3,
      28,   281,     3,    36,     3,     3,     3,     3,     3,     3,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     3,    36,     3,     3,     3,
     398,     3,   322,   323,   324,   325,   326,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   396,    36,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   396,    36,   396,   396,  1934,   396,
     396,   396,   396,     5,   396,   396,   396,   396,   396,  1945,
       3,   396,   395,     3,     3,     3,   396,     3,   163,   196,
       3,     3,   277,   393,   394,   395,   396,   397,     5,   399,
      42,    42,     3,     3,     3,     3,     3,     3,     3,     3,
    1976,     3,   245,     3,     3,     3,     3,     3,     3,    10,
      11,    12,    13,    14,    15,    16,  1992,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     5,    36,   379,     5,     5,  2015,
     395,   395,   395,   395,    64,  2021,   395,   395,     3,     4,
       5,     6,     7,     8,  2030,    10,   395,    12,   395,     3,
       3,    16,    17,    18,     3,    20,     3,   396,  2044,  2045,
     397,    26,    27,    28,    29,    30,     3,     3,   197,   396,
     197,    51,     3,   197,   281,    40,     3,   198,     3,     3,
     396,   396,   396,   241,   350,    50,    51,   350,   350,    54,
     396,   350,   350,   241,    59,    60,    61,    62,    63,   395,
     395,    66,   395,    68,    69,    70,   395,   136,    73,    74,
     397,    76,    77,    78,   164,   164,   164,    82,   163,   197,
     197,   163,   197,     3,   222,   222,    36,     3,   245,   245,
       5,    96,     5,     5,     4,   193,   101,     5,     5,     5,
     395,   106,   107,   108,   398,   395,   213,     3,   113,   114,
     197,   116,   117,   118,   119,     3,   140,   122,     3,   124,
     125,   126,   127,     3,   129,    94,   131,   132,     3,   134,
       3,   136,   137,   197,   139,   140,   141,   142,    63,  2165,
     179,    20,   395,   148,    91,   150,   199,   152,   153,   398,
     155,   156,   157,   158,   159,   160,  2182,   162,   163,   164,
     165,   166,   396,   161,     4,   395,   395,   350,   350,   395,
       5,     5,   177,   395,   179,   395,   181,   350,   350,   350,
     350,   141,   350,     3,   140,   190,   396,   192,   193,   194,
     195,   196,   197,   198,     3,   350,   201,   202,   350,   241,
       3,     3,   207,   395,   209,   210,   211,   164,   213,   164,
     215,     3,   217,   218,   219,   220,   396,   397,     3,    78,
       3,    60,   140,   245,   268,   268,     3,   197,     3,     3,
     395,   164,   164,   396,   239,   240,   241,   396,   396,     3,
       6,     4,   396,   396,   249,  2271,   251,   252,   253,     4,
       4,   212,     3,   258,   397,   260,   261,   262,   397,   395,
     395,   266,   395,   395,   164,   270,   271,   395,   395,   274,
     275,   276,   277,   395,    18,   395,   281,    10,    11,    12,
      13,    14,    15,    16,   395,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   395,    36,    48,     3,    63,    51,   163,    53,
     396,   395,    56,     3,   395,   148,    20,   322,   323,   324,
     325,   326,   396,     3,   193,   396,     3,    71,   396,   395,
     395,    52,   395,   395,    78,    79,     3,   164,     4,   164,
       5,   213,   240,     4,     4,     3,   397,     3,     3,     4,
       5,     6,     7,     8,   395,    10,   396,    12,   395,   395,
     395,    16,    17,    18,   395,    20,   396,   396,   396,   113,
     395,    26,    27,    28,    29,    30,   395,     3,     3,   395,
     395,     3,   395,   397,   395,    40,   395,   395,   393,   394,
     395,   396,   397,   395,   399,    50,    51,     3,   395,    54,
     395,   118,     3,   395,    59,    60,    61,    62,    63,   395,
     266,    66,   395,    68,    69,    70,   268,     3,    73,    74,
     164,    76,    77,    78,   140,     3,   258,    82,    20,   395,
     197,     4,   395,   395,   351,     3,   395,     3,     3,   397,
       3,    96,   396,   396,   396,   350,   101,   350,   396,   193,
     396,   106,   107,   108,   395,     5,     3,   201,   113,   114,
       5,   116,   117,   118,   119,     5,    51,   122,   395,   124,
     125,   126,   127,   395,   129,   396,   131,   132,    60,   134,
       4,   136,   137,    60,   139,   140,   141,   142,     3,   217,
     277,   395,   268,   148,   396,   150,   397,   152,   153,   396,
     155,   156,   157,   158,   159,   160,   396,   162,   163,   164,
     165,   166,   395,   395,   164,   271,   397,   261,   395,   395,
     164,   395,   177,     3,   179,   395,   181,   395,    88,   395,
     397,   396,    63,   395,   198,   190,   396,   192,   193,   194,
     195,   196,   197,   198,     3,   396,   201,   202,   395,    20,
     396,   396,   207,    43,   209,   210,   211,    18,   213,     3,
     215,   164,   217,   218,   219,   220,   395,   395,     3,     3,
     396,    60,   396,   396,   396,     3,    78,   395,   136,   395,
     395,     3,   395,     3,   239,   240,   241,    63,    63,     3,
       3,   395,     3,    63,   249,   396,   251,   252,   253,   396,
     396,   350,   350,   258,   350,   260,   261,   262,   350,     5,
     396,   266,   396,   140,   214,   270,   271,     3,   396,   274,
     275,   276,   277,   269,   207,     3,   281,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     5,    36,     5,    60,   277,   396,    77,   131,
     156,   166,   276,   395,   397,   395,   207,   322,   323,   324,
     325,   326,    11,    12,    13,    14,    15,    16,     5,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    36,     3,     4,
       5,     6,     7,     8,   204,    10,    20,    12,   397,     3,
     101,    16,    17,    18,   396,    20,   397,   396,   396,     3,
     396,    26,    27,    28,    29,    30,   396,   396,   396,   159,
       3,     5,   395,   395,     3,    40,     3,   396,   393,   394,
     395,   396,   397,   395,   399,    50,    51,   395,   395,    54,
       3,   396,     3,   396,    59,    60,    61,    62,    63,   396,
     396,    66,   396,    68,    69,    70,   396,   395,    73,    74,
       3,    76,    77,    78,   397,   395,   395,    82,   231,   231,
     395,     3,   207,   396,     3,     3,     3,     3,    20,     3,
     180,    96,   396,   180,   396,     3,   101,    20,   397,   245,
       3,   106,   107,   108,     3,   396,   396,   396,   113,   114,
       5,   116,   117,   118,   119,   395,   240,   122,     3,   124,
     125,   126,   127,   395,   129,   395,   131,   132,   229,   134,
       5,   136,   137,     3,   139,   140,   141,   142,     5,   396,
     396,   396,   396,   148,   228,   150,   395,   152,   153,     3,
     155,   156,   157,   158,   159,   160,   151,   162,   163,   164,
     165,   166,   396,    97,   271,   174,   197,   197,   250,   191,
     191,     5,   177,     5,   179,   103,   181,  1242,  1092,   988,
     400,  1559,  1872,  1802,  1341,   190,   129,   192,   193,   194,
     195,   196,   197,   198,   536,   546,   201,   202,   671,   664,
    2064,  2287,   207,  2223,   209,   210,   211,   561,   213,  2296,
     215,    91,   217,   218,   219,   220,  1119,  1976,   863,   677,
     389,  1452,  1944,  2340,  1429,  1441,   911,   165,   928,  1603,
      -1,   969,   365,    -1,   239,   240,   241,    -1,    -1,   592,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   393,   394,
     395,   396,   397,    -1,   399,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,    -1,   131,   132,    -1,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
     165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,    17,
      18,    -1,    -1,    -1,   249,    -1,   251,   252,   253,    27,
      28,    -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,
      -1,   266,    40,    -1,    -1,   270,   271,    -1,    -1,   274,
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,   397,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    10,    11,    12,    13,    14,    15,    16,   146,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   393,   394,
     395,   396,   397,    -1,   399,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,    -1,   320,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    -1,    -1,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,    -1,   372,   373,   374,   375,    -1,    -1,
      -1,    -1,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,    -1,   392,    -1,    -1,   395,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    10,    11,    12,    13,    14,
      15,    16,    27,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     397,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    10,    11,    12,    13,    14,    15,    16,   397,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   178,    36,   397,    -1,    -1,   183,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   193,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     225,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    -1,   320,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,    -1,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,    -1,   372,   373,   374,
     375,    -1,    -1,    -1,    -1,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,    -1,   392,    -1,    -1,
     395,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,   397,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
     397,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   397,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   397,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,   397,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
     232,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,    -1,   320,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,    -1,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,    -1,
     372,   373,   374,   375,    -1,    -1,    -1,    -1,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,    -1,
     392,    -1,    -1,   395,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    10,    11,    12,    13,    14,    15,    16,    27,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    72,    36,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    -1,   397,    -1,
      89,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   397,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   397,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   193,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,   397,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,
      -1,    -1,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      -1,   320,    -1,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,    -1,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,    -1,   372,   373,   374,   375,    -1,    -1,    -1,
      -1,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,    -1,   392,    -1,    -1,   395,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,   397,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   397,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,   397,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   397,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   397,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,   225,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,    -1,   320,    -1,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    -1,    -1,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,    -1,   372,   373,   374,   375,
      -1,    -1,    -1,    -1,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,    -1,   392,    -1,    -1,   395,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,   397,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   397,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   397,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   136,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,
     183,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     193,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,
      -1,    -1,   225,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    -1,   320,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,    -1,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,    -1,   372,
     373,   374,   375,    -1,    -1,    -1,    -1,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,    -1,   392,
      -1,    -1,   395,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,   397,    -1,    -1,    -1,    27,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,   397,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   397,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     397,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     397,    -1,    -1,    -1,    -1,   225,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,    -1,
     320,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      -1,    -1,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,    -1,   372,   373,   374,   375,    -1,    -1,    -1,    -1,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,    -1,   392,    -1,    -1,   395,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,   397,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    10,    11,    12,    13,    14,
      15,    16,    89,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   397,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     397,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   397,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   397,    -1,    -1,    -1,    -1,   225,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    -1,   320,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   321,    -1,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,    -1,   372,   373,   374,   375,    -1,
      -1,    -1,    -1,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,    -1,   392,    -1,    -1,   395,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   396,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,   396,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,
      -1,   225,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,    -1,   320,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,    -1,   372,   373,
     374,   375,    -1,    -1,    -1,    -1,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,    -1,   392,    -1,
      -1,   395,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   396,    27,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,   396,    -1,    77,    -1,    -1,    80,
      81,    10,    11,    12,    13,    14,    15,    16,    89,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,   396,    -1,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   396,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   193,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,   225,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    -1,   320,
      -1,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
      -1,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
      -1,   372,   373,   374,   375,    -1,    -1,    -1,    -1,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
      -1,   392,    -1,    -1,   395,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    27,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,   396,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,    -1,    -1,   225,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,    -1,   320,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    -1,    -1,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,    -1,   372,   373,   374,   375,    -1,    -1,
      -1,    -1,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,    -1,   392,    -1,    -1,   395,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   396,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   396,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   396,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   396,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   396,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,   396,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   396,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   396,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   396,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   396,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   396,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   396,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   396,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   396,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   396,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   396,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   396,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   396,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   396,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   396,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   396,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   396,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   396,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   396,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   396,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   396,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   396,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   396,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   396,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   396,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   396,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   396,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   396,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   396,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   396,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   396,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   396,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   396,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   396,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   396,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    10,    11,    12,    13,
      14,    15,    16,   396,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     396,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   396,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   396,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   396,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   396,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   396,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   396,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   396,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   396,    36,    -1,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,    -1,   147,    -1,    -1,    -1,    -1,    -1,   396,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   396,    36,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,   396,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,   108,    -1,    61,    62,    -1,    64,    -1,
      66,    67,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   278,   279,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,   275,   114,   115,
     116,   117,   253,   168,   169,   170,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   206,    -1,   208,   160,    -1,    -1,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,   396,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,
      -1,    -1,   188,   189,    -1,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,   205,
     255,    -1,    -1,   258,    -1,    10,    11,    12,    13,    14,
      15,    16,   267,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   239,   240,    -1,    -1,   243,   244,    -1,
      -1,    -1,    -1,   249,    -1,   251,    -1,    -1,    -1,    -1,
     256,   257,    -1,    -1,    -1,    -1,   262,    -1,   264,    -1,
      -1,    -1,    -1,    -1,   270,    -1,   272,   273,    -1,    -1,
      -1,    -1,   278,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   136,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   124,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   112,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    51,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    50,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    50,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     401,   440,   441,   480,   484,   486,   493,   494,   497,   498,
     499,   500,   501,   503,   506,   513,   514,   516,   532,   533,
     542,   545,   547,   548,   549,   572,   575,   582,   583,   586,
     589,   590,   593,   219,   252,   371,   252,     3,    10,    95,
     102,   138,   139,   155,   202,   219,   221,   227,   246,   247,
     261,   371,   554,     3,   481,    95,   139,   155,   202,   219,
     221,   227,   252,   371,   524,     3,     3,     3,    28,   252,
     252,   524,     8,   227,   573,   574,   459,   252,   524,   543,
       3,    95,     0,   393,   496,     3,     3,     3,     3,   395,
     216,   156,   546,     3,   155,     3,     3,    85,   156,     3,
       3,     3,   546,   246,   155,   546,   252,   534,     3,   136,
     154,   176,   203,   482,     3,   156,     3,   156,     3,     3,
     156,     3,   156,     3,     3,   156,     3,   156,     3,   156,
     103,   146,   154,   159,   176,   525,   171,   397,     3,     3,
     525,     9,    20,     3,   113,   397,     3,     4,     5,     6,
       7,     8,    17,    18,    27,    28,    40,    72,    77,    80,
      81,    89,   106,   110,   146,   183,   193,   225,   226,   233,
     234,   238,   263,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   320,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   372,
     373,   374,   375,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   392,   395,   402,   460,   461,     3,
     154,   176,     3,   167,   173,   381,   395,   463,   464,   465,
     466,   469,   479,     3,   401,    54,    55,    74,   210,   277,
     394,   502,   100,   120,    38,    75,   100,   108,   120,   187,
     208,   269,    55,   208,   591,     3,     4,     5,     6,     7,
       8,   193,   396,   584,   585,   139,   202,   281,     3,    51,
       3,   395,   197,     3,   156,   281,   395,    39,    59,   587,
     197,     3,     3,    85,   156,     3,   546,   395,   535,   394,
     483,     3,   482,   136,   397,   281,   281,   281,   281,   197,
     281,    74,   210,   485,   281,   281,     3,     4,   245,     3,
     402,   402,   574,   394,   395,     9,   402,   402,   402,   275,
     402,   439,   394,   395,    36,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   402,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    36,    51,   462,   136,   159,   397,   397,   394,   462,
     395,     3,   395,   441,   463,   240,   397,    76,   153,   177,
     190,   215,   238,   470,   472,    51,   468,   468,    53,    53,
      44,     3,   108,   258,   504,    71,    84,     3,    84,    71,
     217,     3,    71,    84,    71,   217,     3,    84,     3,    71,
      84,    71,   277,   245,    18,   184,   376,   377,   378,   379,
     592,   396,   397,     3,     3,    61,    62,    64,    66,    67,
      82,   114,   115,   116,   117,   123,   132,   152,   160,   175,
     182,   185,   188,   189,   205,   239,   240,   243,   244,   249,
     251,   256,   257,   262,   264,   270,   272,   273,   278,   568,
     197,     3,    16,   150,   195,   576,   577,   578,     3,   197,
     281,     3,   576,   107,   157,   258,   588,     3,   197,     3,
     156,   281,   591,     3,     3,   536,   136,   245,   537,    28,
     274,   442,   266,   463,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   240,   395,   526,     3,   240,   526,     3,
     402,   407,   411,   402,   402,   439,   124,   125,   275,     3,
       3,   398,   409,   416,   402,    65,   178,   254,   402,   437,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   396,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   396,   402,   402,   402,   396,
     402,   402,   402,   402,   402,   402,    28,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   396,   396,
     396,   396,   396,   402,   402,   396,   396,   396,   402,   402,
       5,   396,   396,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   396,   402,   402,   402,   396,
     402,   402,   402,   402,   402,   402,   402,   402,   396,   402,
     402,   402,   402,   402,     6,    18,   193,   319,   395,    13,
      14,    16,    19,   402,    40,    47,   232,   395,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,     3,   463,     3,   461,     3,   495,
       3,   133,   154,   267,   476,   467,   462,   402,   396,   396,
       3,   544,   464,   177,   215,   473,   465,   163,   196,   471,
       3,     3,     5,   502,    42,    42,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   568,     3,   245,     3,
       3,     3,     5,     3,   379,     5,     5,   277,     5,    63,
       5,   585,   395,   395,   395,   564,   564,   564,   564,   564,
     564,   395,   564,   564,   564,    64,   565,   565,   564,   564,
     564,   395,   565,   564,   565,   395,   395,   395,    18,    36,
      78,   113,     3,   568,     3,     3,     3,   396,   397,   266,
     395,     3,     3,   197,   396,   197,    51,   507,     3,   197,
     281,     3,   154,   216,   351,   394,   395,   570,   571,   396,
     397,     4,   236,   237,   538,   402,   198,   452,   463,   442,
     483,   485,     3,   531,     3,   527,   271,   441,   531,   271,
     441,   397,   396,   253,   124,   125,   402,   402,   396,   402,
     408,   441,   136,   397,   396,   136,   402,   397,   397,   397,
     396,   396,   396,   396,   396,   396,   397,   397,   397,   397,
     396,   397,   397,   397,   396,   396,   396,   396,   397,   397,
     396,   397,   396,   396,   396,    51,   397,   397,   397,   397,
     321,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   397,   397,   397,   396,   397,   350,   350,   350,   396,
     397,   396,   397,   396,   350,   350,   397,   396,   396,   396,
     396,   396,   396,   396,   396,   397,   397,   397,   397,   397,
     397,   397,   397,   396,   397,   396,   396,   396,   397,   396,
     397,   396,   397,   397,   397,   397,   397,   396,   396,   396,
     397,     6,   193,   412,   414,   402,   402,   395,   402,    50,
     395,   395,   395,   403,   398,   442,   136,   397,   462,   164,
     164,   164,   441,   476,   396,    20,   394,   397,   442,   471,
     471,   163,   197,   465,   163,    45,    46,   504,   197,   197,
      78,   134,   201,   261,   568,   568,     3,   222,   222,   563,
     568,     3,   245,   245,     5,     5,   576,   576,     5,   566,
     567,   566,   566,     4,   569,   566,   566,   566,   567,   567,
     566,   566,   566,   569,   567,   566,   567,     5,     5,     5,
     193,   398,   395,   402,   395,   568,   568,   568,   213,   578,
     268,   391,     3,   327,   328,   329,   330,   491,   492,   266,
     395,   197,     3,    51,    60,     3,   223,   224,   140,   508,
     266,   395,     3,     3,   197,    94,     3,    71,    78,   134,
     138,   155,   164,   201,   261,   555,   556,   562,   468,     3,
      87,    99,   135,   143,   193,   242,   277,   395,   539,   540,
     541,    63,   179,   455,   442,    20,   199,   397,   517,   396,
     397,   395,   528,   517,   528,   517,   407,   402,   402,   124,
     253,    91,   397,   398,   396,   402,   402,   402,   136,   161,
     438,   438,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   568,   568,   402,   402,   402,     4,   350,
     350,   350,   350,   350,   350,   402,   402,   402,   402,   395,
     395,   395,   350,     5,   350,     5,   350,   395,   395,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   407,   441,   413,
     415,    50,   402,   406,   402,   404,   410,   405,   410,   441,
     141,   443,   463,     3,   476,   140,   477,   477,   477,   396,
     468,   402,     3,     3,   452,   465,   402,   197,   266,   474,
     475,   465,     3,   505,   505,   395,   164,   164,   395,   563,
     563,   568,    18,    39,    48,    51,    53,    56,    71,    78,
      79,   113,   130,   164,   193,   201,   261,   515,   563,     3,
       3,   396,   396,   396,   397,   259,   280,    82,    83,   396,
     397,   396,   396,   396,   396,    78,   402,   491,    62,    66,
     114,   117,   132,   152,   160,   249,   251,   270,   579,   395,
     395,   395,   395,   395,   395,   396,   397,   268,   491,     3,
     266,   395,    60,   580,   140,    40,   107,   157,   241,   258,
     245,   509,   268,   491,   266,   395,   197,     3,     3,   395,
     570,     3,   395,   164,   155,   164,   395,   395,   164,   395,
     396,   397,     3,   441,     4,    87,   249,     6,     4,     4,
     395,   540,   397,     3,     5,   453,   454,   402,   212,   594,
     113,   402,   164,     3,     3,   113,   402,   530,   397,   517,
     517,   124,   402,   395,   408,   140,   396,   396,   397,   396,
     402,   402,   396,   396,   396,   396,   396,   397,   397,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   397,
     396,   395,   395,   395,   395,   395,   395,   396,   397,   397,
     396,   396,   417,   418,   419,   395,   396,   397,   395,   396,
     397,   395,   435,   436,   396,   397,   397,   397,   396,   396,
     397,   397,   396,   397,   396,   397,   396,   397,   396,   396,
     396,   396,   396,   396,   397,   396,   396,   407,   441,   402,
     441,   441,   396,   441,   396,   396,    63,   148,   447,   442,
     163,   395,   395,   395,     3,    20,    20,   394,   455,   402,
     395,   475,   397,   277,   402,   395,   395,     3,   561,   515,
     515,   563,   193,     3,   395,   395,   395,    52,     3,   395,
       4,     4,     5,     6,     7,    72,   333,   334,   335,   395,
     164,   164,   515,   213,    51,    60,     5,   240,     4,   567,
       4,   567,   567,   395,   396,   396,    51,    60,   491,     3,
       3,     3,     3,     3,     3,   395,   396,   395,   268,   391,
     491,   580,     3,     4,     5,     6,     7,     8,    10,    12,
      16,    17,    18,    20,    26,    27,    28,    29,    30,    40,
      50,    51,    54,    59,    60,    61,    62,    63,    66,    68,
      69,    70,    73,    74,    76,    77,    78,    82,    96,   101,
     106,   107,   108,   113,   114,   116,   117,   118,   119,   122,
     124,   125,   126,   127,   129,   131,   132,   134,   136,   137,
     139,   140,   141,   142,   148,   150,   152,   153,   155,   156,
     157,   158,   159,   160,   162,   163,   164,   165,   166,   177,
     179,   181,   190,   192,   193,   194,   195,   196,   197,   198,
     201,   202,   207,   209,   210,   211,   213,   215,   217,   218,
     219,   220,   239,   240,   241,   249,   251,   252,   253,   258,
     260,   261,   262,   266,   270,   271,   274,   275,   276,   277,
     281,   322,   323,   324,   325,   326,   393,   394,   395,   396,
     397,   399,   581,   118,     3,   510,   266,   511,   395,   396,
     268,   491,     3,   266,   395,   140,   555,    78,   134,   201,
     261,   402,   395,   395,   395,     3,   458,   458,   395,   561,
     551,   570,   556,   568,   540,   396,   541,    49,   112,   394,
     445,   445,   397,   181,   397,     3,    28,   595,   258,    20,
     396,   397,   529,   197,   519,     4,   402,   402,   396,   104,
     105,   109,   111,   144,   145,   147,   278,   279,   402,   402,
     402,   421,   422,   420,   423,   424,   425,   402,   402,   351,
     448,   448,   448,   426,   350,     4,     5,   430,   350,     4,
       5,   434,   448,   448,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   396,   396,   396,   396,   396,   402,   444,
     402,   452,   443,     3,   478,   478,   478,   395,   402,   402,
       3,   594,   458,     3,     5,   396,     3,   558,     3,   557,
     396,   397,   515,     5,   402,     5,    51,    78,   201,   261,
     402,   395,   395,   395,   402,   579,    60,   580,   396,     4,
     402,    60,   580,   396,     3,   487,   396,   396,   396,   397,
     491,   491,   395,   395,   396,   124,   580,   580,   580,   580,
     580,   580,   217,   397,   395,   277,   512,   491,   395,   396,
     395,   268,   491,   271,   396,   395,   164,   164,   395,   396,
     558,   458,   458,   396,   397,   396,   557,   396,    48,   172,
     197,   228,   351,   550,   563,   396,     3,   454,   402,   402,
     397,   518,   113,   402,   113,   402,   395,    88,   594,   396,
     396,   396,   396,   396,   396,   448,   448,   448,   448,   448,
     448,   396,   397,   396,    63,   198,   450,   450,   450,   448,
     395,   396,   396,   448,   395,   396,   396,   448,   450,   450,
     396,   396,   396,   396,   396,   397,   396,   396,   397,   445,
     277,   397,   446,   455,   447,   396,   397,   396,   396,     3,
      20,   396,    43,    18,   396,   397,   396,   397,     3,   396,
     397,   396,   396,   397,   395,   395,   164,   396,   396,   396,
     396,   396,    51,    60,   580,   124,   396,   580,   124,   396,
       3,   396,   396,   491,     3,   124,   124,   124,   124,   124,
     124,    60,     3,   402,    78,   396,   491,   491,   395,   396,
     136,   551,   570,   402,   395,   395,   561,   396,   396,   396,
       3,   396,     5,    20,   395,     3,    63,    63,   445,     3,
       3,   523,   530,   395,   520,   450,   450,   450,   450,   450,
     450,   402,     3,   449,    63,   396,   396,   396,   450,   427,
     350,   350,   450,   431,   350,   350,   450,   396,   396,   402,
       5,   214,   402,   140,   456,   452,     3,   396,   402,   269,
     207,     3,     3,     5,    57,    58,     5,   402,   402,    60,
     580,   124,   124,   277,   488,   396,   396,   487,    77,   131,
     156,   166,   276,   580,   396,   395,   396,   396,   491,   395,
     396,   558,   557,   396,   207,     5,     3,   107,   248,   204,
     268,   204,    20,   397,   396,     3,   101,   521,   396,   396,
     396,   396,   396,   396,   396,   397,     3,   451,   396,   448,
     395,   395,   396,   448,   395,   395,   396,   396,   396,   445,
     230,   258,   159,   457,   455,     3,   396,   396,   396,   396,
     580,   124,   395,   396,   124,   402,   396,     5,   396,   396,
       3,   396,     3,     3,   395,   395,   395,   402,     3,   396,
     397,    90,   258,     3,   445,   397,   450,   428,   429,   450,
     432,   433,   231,   231,   458,   395,    57,    58,   124,     3,
     489,   490,   488,   396,   396,   207,   394,   395,     3,     3,
       3,    20,     3,   522,     3,   396,   448,   448,   396,   448,
     448,   180,   180,     3,   559,    20,   396,   397,   245,     3,
       3,   559,   396,   396,   396,   402,   240,   445,   450,   450,
     450,   450,   396,   397,     5,   490,   395,   394,   395,   395,
     396,   395,   229,   523,   396,   396,   396,   396,   560,     3,
       5,     3,   559,   559,   560,   228,   552,   553,     5,    18,
      97,   183,   197,   396,   395,   396,   396,    18,     3,   396,
     397,    97,   269,   151,   137,   200,   235,   107,   258,   559,
     560,   560,   271,   553,    98,   149,    74,   192,   210,   240,
      74,   192,   210,   240,   396,   174,   113,   193,   113,   193,
     560,   250,     4,   184,   197,   197,   191,   191,     5,     5
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
#line 491 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 497 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 498 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 500 "parser/evoparser.y"
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
#line 513 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 515 "parser/evoparser.y"
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
#line 543 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 551 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 559 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 565 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 572 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 573 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 574 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 575 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 576 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 577 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 578 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 579 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 580 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 581 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 582 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 583 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 584 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 585 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 586 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 587 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 588 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 589 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 590 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 592 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 597 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 598 "parser/evoparser.y"
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
#line 606 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 607 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 608 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 609 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 610 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 611 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 616 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 618 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 621 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 622 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 623 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 624 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 625 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 628 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 629 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 633 "parser/evoparser.y"
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
#line 642 "parser/evoparser.y"
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
#line 660 "parser/evoparser.y"
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
#line 669 "parser/evoparser.y"
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
#line 688 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 689 "parser/evoparser.y"
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
#line 749 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 758 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 764 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 769 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 771 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 773 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 778 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 783 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 791 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 66:
#line 793 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 67:
#line 795 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 68:
#line 797 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 69:
#line 799 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 70:
#line 801 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 71:
#line 803 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 72:
#line 805 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 73:
#line 807 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 74:
#line 809 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 75:
#line 817 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 77:
#line 821 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 78:
#line 821 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 79:
#line 822 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 80:
#line 822 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 81:
#line 823 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 82:
#line 824 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 83:
#line 831 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 84:
#line 832 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 85:
#line 839 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 86:
#line 840 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 87:
#line 850 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 88:
#line 854 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 89:
#line 855 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 90:
#line 856 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 91:
#line 857 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 92:
#line 858 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 859 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 860 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 95:
#line 861 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 96:
#line 865 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 97:
#line 866 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 98:
#line 867 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 99:
#line 868 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 100:
#line 869 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 101:
#line 870 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 102:
#line 872 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 103:
#line 873 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 104:
#line 874 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 105:
#line 875 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 106:
#line 876 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 107:
#line 877 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 108:
#line 878 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 109:
#line 879 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 110:
#line 880 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 111:
#line 881 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 112:
#line 882 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 883 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 114:
#line 885 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 115:
#line 886 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 116:
#line 887 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 117:
#line 888 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 118:
#line 889 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 119:
#line 890 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 120:
#line 891 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 121:
#line 892 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 122:
#line 893 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 123:
#line 894 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 124:
#line 895 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 125:
#line 896 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 126:
#line 897 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 127:
#line 898 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 128:
#line 899 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 129:
#line 900 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 130:
#line 902 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 131:
#line 903 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 132:
#line 904 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 133:
#line 905 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 134:
#line 906 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 135:
#line 907 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 136:
#line 910 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 137:
#line 911 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 138:
#line 912 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 139:
#line 913 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 140:
#line 914 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 141:
#line 915 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 142:
#line 916 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 143:
#line 917 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 144:
#line 918 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 145:
#line 919 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 146:
#line 920 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 147:
#line 921 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 148:
#line 922 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 149:
#line 923 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 150:
#line 924 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 151:
#line 925 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 152:
#line 926 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 153:
#line 927 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 154:
#line 928 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 155:
#line 929 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 156:
#line 930 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 157:
#line 931 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 158:
#line 932 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 159:
#line 933 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 160:
#line 934 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 161:
#line 935 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 162:
#line 936 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 163:
#line 937 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 164:
#line 938 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 165:
#line 939 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 166:
#line 940 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 167:
#line 941 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 168:
#line 942 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 169:
#line 943 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 170:
#line 945 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 171:
#line 946 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 172:
#line 947 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 173:
#line 948 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 174:
#line 949 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 175:
#line 950 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 176:
#line 951 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 177:
#line 952 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 178:
#line 954 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 179:
#line 955 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 180:
#line 956 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 181:
#line 957 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 182:
#line 958 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 183:
#line 959 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 184:
#line 960 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 185:
#line 961 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 186:
#line 962 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 187:
#line 963 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 188:
#line 964 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 189:
#line 965 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 190:
#line 966 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 191:
#line 967 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 192:
#line 968 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 193:
#line 969 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 194:
#line 970 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 195:
#line 971 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 196:
#line 972 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 197:
#line 973 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 198:
#line 974 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 199:
#line 975 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 200:
#line 977 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 201:
#line 978 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 202:
#line 979 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 203:
#line 980 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 204:
#line 981 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 205:
#line 983 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 206:
#line 984 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 207:
#line 986 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 208:
#line 987 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 209:
#line 988 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 210:
#line 990 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 211:
#line 991 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 212:
#line 992 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 213:
#line 993 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 214:
#line 1000 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 215:
#line 1007 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 216:
#line 1014 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 217:
#line 1018 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 218:
#line 1022 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 219:
#line 1026 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1030 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 221:
#line 1034 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 222:
#line 1040 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 223:
#line 1041 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 224:
#line 1042 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 225:
#line 1046 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 226:
#line 1052 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 227:
#line 1058 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 228:
#line 1059 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 229:
#line 1060 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 230:
#line 1061 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 231:
#line 1062 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1063 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 233:
#line 1064 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 234:
#line 1065 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 235:
#line 1066 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 236:
#line 1070 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 237:
#line 1072 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 238:
#line 1074 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 239:
#line 1076 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 240:
#line 1080 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 241:
#line 1088 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 242:
#line 1098 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 243:
#line 1099 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 244:
#line 1102 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 245:
#line 1103 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 246:
#line 1107 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 247:
#line 1115 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 248:
#line 1123 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 249:
#line 1131 "parser/evoparser.y"
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

  case 250:
#line 1145 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 251:
#line 1154 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 252:
#line 1159 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 253:
#line 1172 "parser/evoparser.y"
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

  case 255:
#line 1185 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 257:
#line 1187 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 258:
#line 1190 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 259:
#line 1197 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 260:
#line 1205 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 261:
#line 1206 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 262:
#line 1207 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 263:
#line 1210 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1211 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 266:
#line 1215 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 269:
#line 1224 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 270:
#line 1226 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 273:
#line 1234 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 274:
#line 1236 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 279:
#line 1248 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 280:
#line 1254 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 281:
#line 1261 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 282:
#line 1269 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 283:
#line 1270 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 284:
#line 1271 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 285:
#line 1272 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 286:
#line 1275 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 287:
#line 1276 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 288:
#line 1277 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 289:
#line 1278 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 290:
#line 1279 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 292:
#line 1283 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 293:
#line 1286 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 294:
#line 1287 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 295:
#line 1290 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 296:
#line 1291 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 297:
#line 1292 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 298:
#line 1293 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 299:
#line 1294 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 300:
#line 1295 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 301:
#line 1296 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 302:
#line 1297 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 303:
#line 1298 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 304:
#line 1301 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 305:
#line 1302 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 306:
#line 1304 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 307:
#line 1312 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 308:
#line 1317 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 309:
#line 1318 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 310:
#line 1319 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 311:
#line 1322 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1323 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 315:
#line 1332 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 316:
#line 1340 "parser/evoparser.y"
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

  case 317:
#line 1349 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 318:
#line 1350 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 319:
#line 1352 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 320:
#line 1361 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 321:
#line 1366 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 322:
#line 1372 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 323:
#line 1379 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 324:
#line 1383 "parser/evoparser.y"
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

  case 325:
#line 1403 "parser/evoparser.y"
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

  case 328:
#line 1429 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 329:
#line 1431 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 330:
#line 1433 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 331:
#line 1435 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 332:
#line 1437 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 333:
#line 1440 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 334:
#line 1441 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 335:
#line 1442 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 336:
#line 1445 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 337:
#line 1446 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 338:
#line 1449 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 339:
#line 1450 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 340:
#line 1453 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 341:
#line 1454 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 342:
#line 1455 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 345:
#line 1462 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 346:
#line 1463 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 347:
#line 1468 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 348:
#line 1470 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 349:
#line 1472 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 351:
#line 1476 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 352:
#line 1477 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 353:
#line 1480 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1481 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 355:
#line 1484 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 356:
#line 1489 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 357:
#line 1499 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 358:
#line 1506 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 359:
#line 1507 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 360:
#line 1508 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 361:
#line 1509 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 362:
#line 1514 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 363:
#line 1518 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 364:
#line 1520 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 367:
#line 1526 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 368:
#line 1531 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 369:
#line 1538 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 370:
#line 1545 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 372:
#line 1557 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 373:
#line 1558 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 374:
#line 1563 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 375:
#line 1570 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 376:
#line 1577 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 377:
#line 1585 "parser/evoparser.y"
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

  case 378:
#line 1595 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 379:
#line 1603 "parser/evoparser.y"
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

  case 380:
#line 1613 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 381:
#line 1621 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 382:
#line 1630 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 383:
#line 1639 "parser/evoparser.y"
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

  case 384:
#line 1649 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 385:
#line 1657 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 386:
#line 1666 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 387:
#line 1675 "parser/evoparser.y"
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

  case 388:
#line 1685 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 389:
#line 1694 "parser/evoparser.y"
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

  case 390:
#line 1711 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 391:
#line 1719 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX IF NOT EXISTS %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval), (yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval));
        free((yyvsp[(5) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(11) - (14)].strval));
    ;}
    break;

  case 392:
#line 1730 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 393:
#line 1732 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(1) - (1)].strval), "vector_cosine_ops") == 0)        (yyval.intval) = 0;
        else if (strcasecmp((yyvsp[(1) - (1)].strval), "vector_l2_ops") == 0)       (yyval.intval) = 1;
        else if (strcasecmp((yyvsp[(1) - (1)].strval), "vector_ip_ops") == 0 ||
                 strcasecmp((yyvsp[(1) - (1)].strval), "vector_inner_ops") == 0)    (yyval.intval) = 2;
        else if (strcasecmp((yyvsp[(1) - (1)].strval), "vector_l1_ops") == 0)       (yyval.intval) = 3;
        else (yyval.intval) = 0;   /* unknown opclass: fall back to cosine */
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 394:
#line 1745 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 395:
#line 1746 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 396:
#line 1749 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 397:
#line 1751 "parser/evoparser.y"
    {
        int lm = ((yyvsp[(1) - (3)].intval) >> 16) & 0xFFFF, le = (yyvsp[(1) - (3)].intval) & 0xFFFF;
        int rm = ((yyvsp[(3) - (3)].intval) >> 16) & 0xFFFF, re = (yyvsp[(3) - (3)].intval) & 0xFFFF;
        /* Later entries override earlier ones; 0 means "not set in this item". */
        int m  = rm ? rm : lm;
        int ef = re ? re : le;
        (yyval.intval) = (m << 16) | ef;
    ;}
    break;

  case 398:
#line 1763 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 399:
#line 1773 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 400:
#line 1778 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 401:
#line 1783 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 402:
#line 1789 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 403:
#line 1796 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 404:
#line 1803 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 405:
#line 1810 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 406:
#line 1820 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 407:
#line 1827 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 408:
#line 1836 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 409:
#line 1843 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1849 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 411:
#line 1857 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 412:
#line 1863 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 414:
#line 1871 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 415:
#line 1872 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 416:
#line 1873 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 417:
#line 1874 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 418:
#line 1890 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 419:
#line 1891 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 420:
#line 1892 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 421:
#line 1896 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 422:
#line 1902 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 423:
#line 1913 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 424:
#line 1919 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 425:
#line 1926 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 426:
#line 1932 "parser/evoparser.y"
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

  case 427:
#line 1948 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 428:
#line 1955 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 429:
#line 1964 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 430:
#line 1972 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 431:
#line 1978 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 433:
#line 1995 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 434:
#line 1999 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 435:
#line 2008 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 437:
#line 2023 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 438:
#line 2027 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 439:
#line 2032 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 440:
#line 2039 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 441:
#line 2044 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 442:
#line 2051 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 443:
#line 2055 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 444:
#line 2056 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 445:
#line 2062 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 446:
#line 2071 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 447:
#line 2072 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 448:
#line 2073 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 449:
#line 2077 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 450:
#line 2078 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 451:
#line 2079 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 452:
#line 2080 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 453:
#line 2081 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 454:
#line 2082 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 457:
#line 2091 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 458:
#line 2092 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 460:
#line 2097 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 462:
#line 2102 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 463:
#line 2107 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 464:
#line 2116 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 465:
#line 2122 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 466:
#line 2128 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 467:
#line 2135 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 468:
#line 2141 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 469:
#line 2148 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 470:
#line 2154 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 471:
#line 2160 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 472:
#line 2166 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 473:
#line 2172 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 474:
#line 2178 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 475:
#line 2184 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 476:
#line 2190 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 477:
#line 2196 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 478:
#line 2202 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 479:
#line 2208 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 480:
#line 2214 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 481:
#line 2220 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 482:
#line 2226 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 483:
#line 2232 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 484:
#line 2238 "parser/evoparser.y"
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

  case 485:
#line 2251 "parser/evoparser.y"
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

  case 486:
#line 2262 "parser/evoparser.y"
    { ;}
    break;

  case 487:
#line 2263 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 488:
#line 2264 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 489:
#line 2268 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 490:
#line 2276 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 491:
#line 2282 "parser/evoparser.y"
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

  case 493:
#line 2295 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 494:
#line 2295 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 497:
#line 2303 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 498:
#line 2304 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 499:
#line 2305 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 500:
#line 2309 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 501:
#line 2310 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 502:
#line 2311 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 503:
#line 2315 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 504:
#line 2323 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 505:
#line 2332 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 506:
#line 2333 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 507:
#line 2334 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 508:
#line 2335 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 509:
#line 2336 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 513:
#line 2343 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 514:
#line 2347 "parser/evoparser.y"
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

  case 515:
#line 2357 "parser/evoparser.y"
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

  case 516:
#line 2369 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 517:
#line 2370 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 518:
#line 2370 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 519:
#line 2373 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 520:
#line 2374 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 521:
#line 2375 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 522:
#line 2376 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 523:
#line 2380 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 524:
#line 2383 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 525:
#line 2384 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 526:
#line 2385 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 527:
#line 2386 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 528:
#line 2392 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 529:
#line 2398 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 530:
#line 2403 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 531:
#line 2408 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 532:
#line 2412 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 533:
#line 2416 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 534:
#line 2418 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 537:
#line 2424 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 538:
#line 2425 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 539:
#line 2429 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 540:
#line 2430 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 541:
#line 2434 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 542:
#line 2435 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 543:
#line 2436 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 550:
#line 2451 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 551:
#line 2452 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 552:
#line 2453 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 553:
#line 2454 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 554:
#line 2455 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 555:
#line 2456 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 556:
#line 2457 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 557:
#line 2458 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 558:
#line 2463 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 559:
#line 2472 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 560:
#line 2479 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 561:
#line 2480 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 562:
#line 2481 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 563:
#line 2486 "parser/evoparser.y"
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

  case 564:
#line 2497 "parser/evoparser.y"
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

  case 565:
#line 2509 "parser/evoparser.y"
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

  case 566:
#line 2520 "parser/evoparser.y"
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

  case 567:
#line 2535 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 568:
#line 2539 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 569:
#line 2543 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 570:
#line 2544 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 571:
#line 2549 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 572:
#line 2551 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 573:
#line 2553 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 574:
#line 2555 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 575:
#line 2558 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 576:
#line 2559 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 577:
#line 2565 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 578:
#line 2570 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 579:
#line 2572 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 580:
#line 2574 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 581:
#line 2576 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 582:
#line 2578 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 583:
#line 2582 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 584:
#line 2586 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 585:
#line 2587 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 586:
#line 2592 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 587:
#line 2602 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 589:
#line 2615 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 590:
#line 2623 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 591:
#line 2631 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 593:
#line 2639 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 594:
#line 2640 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 595:
#line 2641 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 596:
#line 2642 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 597:
#line 2644 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 598:
#line 2646 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 599:
#line 2648 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 602:
#line 2656 "parser/evoparser.y"
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

  case 603:
#line 2671 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 604:
#line 2679 "parser/evoparser.y"
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

  case 605:
#line 2693 "parser/evoparser.y"
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

  case 606:
#line 2707 "parser/evoparser.y"
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

  case 607:
#line 2721 "parser/evoparser.y"
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

  case 608:
#line 2733 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 609:
#line 2734 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 610:
#line 2735 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 611:
#line 2738 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 612:
#line 2739 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 613:
#line 2742 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 614:
#line 2743 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 615:
#line 2744 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 616:
#line 2745 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 617:
#line 2746 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 618:
#line 2747 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 619:
#line 2748 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 620:
#line 2749 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 621:
#line 2751 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 622:
#line 2753 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 623:
#line 2755 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 624:
#line 2757 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 625:
#line 2759 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 626:
#line 2761 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 627:
#line 2764 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 628:
#line 2765 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 629:
#line 2768 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 630:
#line 2769 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 631:
#line 2772 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 632:
#line 2773 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 634:
#line 2777 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 635:
#line 2778 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 636:
#line 2779 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 637:
#line 2780 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 638:
#line 2781 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 639:
#line 2782 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 640:
#line 2783 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 641:
#line 2784 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 642:
#line 2785 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 643:
#line 2786 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 644:
#line 2787 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 645:
#line 2788 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 646:
#line 2789 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 647:
#line 2790 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 648:
#line 2791 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 649:
#line 2792 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 650:
#line 2793 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 651:
#line 2796 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 652:
#line 2797 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 653:
#line 2800 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 654:
#line 2802 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 655:
#line 2810 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 656:
#line 2811 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 658:
#line 2813 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 659:
#line 2814 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 660:
#line 2815 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 661:
#line 2816 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 662:
#line 2817 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 663:
#line 2818 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 664:
#line 2819 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 665:
#line 2820 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 666:
#line 2821 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 667:
#line 2828 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 668:
#line 2829 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 669:
#line 2830 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 670:
#line 2831 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 671:
#line 2832 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 672:
#line 2833 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 673:
#line 2834 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 674:
#line 2835 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 675:
#line 2836 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 676:
#line 2837 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 677:
#line 2838 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 678:
#line 2839 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 679:
#line 2840 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 680:
#line 2841 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 681:
#line 2842 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 682:
#line 2843 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 683:
#line 2844 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 684:
#line 2845 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 685:
#line 2846 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 686:
#line 2847 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 687:
#line 2848 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 688:
#line 2851 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 689:
#line 2852 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 690:
#line 2853 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 691:
#line 2856 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 692:
#line 2857 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 693:
#line 2860 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 694:
#line 2861 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 695:
#line 2862 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 697:
#line 2866 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 698:
#line 2867 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 699:
#line 2871 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 700:
#line 2872 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 701:
#line 2873 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 702:
#line 2874 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 703:
#line 2875 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 704:
#line 2876 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 705:
#line 2877 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 706:
#line 2878 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 707:
#line 2879 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 708:
#line 2880 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 709:
#line 2881 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 710:
#line 2882 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 711:
#line 2883 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 712:
#line 2884 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 713:
#line 2885 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 714:
#line 2886 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 715:
#line 2887 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 716:
#line 2888 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 717:
#line 2889 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 718:
#line 2890 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 719:
#line 2891 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 720:
#line 2892 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 721:
#line 2893 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 722:
#line 2894 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 723:
#line 2895 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 724:
#line 2896 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 725:
#line 2897 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 726:
#line 2898 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 727:
#line 2899 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 728:
#line 2900 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 729:
#line 2901 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 730:
#line 2902 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 731:
#line 2903 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 732:
#line 2904 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 733:
#line 2905 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 734:
#line 2908 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 735:
#line 2909 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 736:
#line 2913 "parser/evoparser.y"
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

  case 737:
#line 2925 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 738:
#line 2926 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 739:
#line 2927 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 740:
#line 2931 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 741:
#line 2934 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 742:
#line 2935 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 746:
#line 2939 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 747:
#line 2940 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 748:
#line 2948 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 749:
#line 2953 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 750:
#line 2959 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 751:
#line 2965 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 752:
#line 2972 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 753:
#line 2979 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 754:
#line 2985 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 755:
#line 2991 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 756:
#line 2998 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 761:
#line 3014 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 762:
#line 3015 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 763:
#line 3016 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 764:
#line 3017 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 765:
#line 3020 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 766:
#line 3021 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 767:
#line 3022 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 768:
#line 3023 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 769:
#line 3024 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 770:
#line 3025 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 771:
#line 3026 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 772:
#line 3027 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 773:
#line 3028 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 774:
#line 3029 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 783:
#line 3046 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 784:
#line 3047 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 905:
#line 3065 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 906:
#line 3072 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 907:
#line 3077 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 908:
#line 3083 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 909:
#line 3089 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 910:
#line 3095 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 911:
#line 3106 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 912:
#line 3111 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 913:
#line 3117 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 916:
#line 3128 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 917:
#line 3129 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 918:
#line 3130 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 919:
#line 3131 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 920:
#line 3132 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 921:
#line 3133 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 922:
#line 3134 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 923:
#line 3141 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 924:
#line 3146 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 925:
#line 3153 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 926:
#line 3154 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 927:
#line 3157 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 928:
#line 3158 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 929:
#line 3159 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 930:
#line 3162 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 931:
#line 3167 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 932:
#line 3173 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 933:
#line 3182 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 934:
#line 3190 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 935:
#line 3200 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 936:
#line 3205 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 939:
#line 3218 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 940:
#line 3219 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 941:
#line 3220 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 942:
#line 3221 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 943:
#line 3222 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 944:
#line 3223 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 945:
#line 3224 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 946:
#line 3225 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 947:
#line 3228 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 948:
#line 3233 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 949:
#line 3239 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 950:
#line 3249 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 951:
#line 3256 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 952:
#line 3263 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 953:
#line 3271 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 955:
#line 3281 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 957:
#line 3285 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 958:
#line 3286 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11574 "parser/evoparser.tab.c"
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


#line 3289 "parser/evoparser.y"

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
