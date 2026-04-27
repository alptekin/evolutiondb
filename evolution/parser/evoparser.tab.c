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
     FHNSW_KNN = 637,
     FHNSW_FILTER_KNN = 638,
     FHNSW_HYBRID_EXPLAIN = 639,
     CHECKPOINT = 640,
     STORE = 641,
     RETENTION = 642,
     PUT = 643,
     GET = 644,
     LIST = 645,
     WRITES = 646,
     THREAD = 647,
     AT = 648
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
#define FHNSW_FILTER_KNN 638
#define FHNSW_HYBRID_EXPLAIN 639
#define CHECKPOINT 640
#define STORE 641
#define RETENTION 642
#define PUT 643
#define GET 644
#define LIST 645
#define WRITES 646
#define THREAD 647
#define AT 648




/* Copy the first part of user declarations.  */
#line 4 "parser/evoparser.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"
	#include "../db/expression.h"
	#include "../db/Checkpoint.h"

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
#line 71 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 954 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 967 "parser/evoparser.tab.c"

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
#define YYFINAL  113
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13938

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  411
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  203
/* YYNRULES -- Number of rules.  */
#define YYNRULES  980
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2485

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   648

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     406,   407,    28,    26,   408,    27,   405,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   404,
       2,   410,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   409,    32,     2,     2,     2,     2,     2,
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403
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
     293,   298,   303,   307,   311,   322,   335,   348,   349,   351,
     352,   359,   360,   368,   369,   376,   377,   385,   386,   392,
     397,   402,   407,   412,   417,   422,   427,   432,   439,   440,
     450,   451,   461,   462,   472,   473,   484,   485,   496,   497,
     508,   509,   520,   521,   532,   533,   544,   545,   556,   557,
     570,   571,   586,   587,   602,   603,   614,   615,   628,   629,
     644,   645,   660,   661,   672,   673,   683,   684,   694,   703,
     710,   717,   726,   731,   739,   746,   751,   756,   761,   768,
     777,   784,   791,   798,   807,   816,   821,   828,   835,   842,
     847,   852,   857,   864,   869,   876,   881,   888,   892,   897,
     902,   907,   911,   915,   922,   927,   932,   937,   942,   947,
     952,   959,   964,   969,   974,   979,   984,   989,   994,   999,
    1008,  1017,  1026,  1033,  1040,  1049,  1058,  1065,  1076,  1081,
    1088,  1097,  1102,  1107,  1112,  1119,  1128,  1132,  1139,  1146,
    1153,  1160,  1169,  1173,  1182,  1193,  1197,  1201,  1205,  1209,
    1213,  1215,  1217,  1222,  1229,  1231,  1233,  1235,  1242,  1249,
    1253,  1257,  1261,  1265,  1269,  1273,  1277,  1281,  1285,  1290,
    1297,  1301,  1307,  1312,  1318,  1322,  1327,  1331,  1336,  1338,
    1340,  1342,  1344,  1346,  1350,  1363,  1376,  1377,  1380,  1381,
    1386,  1389,  1394,  1395,  1397,  1399,  1400,  1403,  1404,  1407,
    1408,  1412,  1414,  1418,  1419,  1423,  1426,  1431,  1432,  1436,
    1438,  1442,  1445,  1450,  1453,  1454,  1457,  1462,  1467,  1468,
    1471,  1474,  1479,  1484,  1485,  1488,  1490,  1494,  1495,  1498,
    1501,  1504,  1507,  1510,  1513,  1516,  1519,  1521,  1525,  1527,
    1530,  1533,  1535,  1536,  1538,  1542,  1544,  1546,  1550,  1555,
    1561,  1565,  1569,  1574,  1581,  1591,  1595,  1596,  1602,  1604,
    1605,  1611,  1615,  1621,  1628,  1634,  1635,  1637,  1639,  1640,
    1642,  1644,  1646,  1649,  1652,  1653,  1654,  1656,  1659,  1664,
    1671,  1678,  1685,  1686,  1689,  1690,  1692,  1696,  1700,  1702,
    1711,  1714,  1717,  1720,  1721,  1728,  1731,  1736,  1737,  1740,
    1748,  1750,  1755,  1762,  1763,  1765,  1767,  1769,  1778,  1788,
    1799,  1809,  1821,  1832,  1845,  1857,  1871,  1881,  1893,  1904,
    1917,  1929,  1942,  1955,  1970,  1971,  1973,  1974,  1979,  1981,
    1985,  1989,  1991,  1995,  1997,  2002,  2007,  2012,  2019,  2021,
    2025,  2028,  2032,  2038,  2040,  2044,  2045,  2048,  2051,  2055,
    2059,  2061,  2063,  2065,  2067,  2069,  2075,  2083,  2084,  2091,
    2096,  2102,  2109,  2111,  2113,  2115,  2136,  2158,  2160,  2162,
    2169,  2178,  2185,  2194,  2197,  2201,  2204,  2207,  2210,  2215,
    2217,  2221,  2223,  2228,  2235,  2236,  2241,  2246,  2249,  2250,
    2255,  2263,  2268,  2270,  2274,  2276,  2278,  2280,  2291,  2292,
    2295,  2298,  2299,  2302,  2305,  2308,  2311,  2314,  2315,  2318,
    2320,  2324,  2325,  2330,  2331,  2337,  2343,  2354,  2365,  2383,
    2396,  2416,  2428,  2435,  2444,  2451,  2458,  2465,  2475,  2482,
    2488,  2497,  2505,  2515,  2524,  2535,  2545,  2553,  2561,  2562,
    2564,  2567,  2569,  2580,  2587,  2588,  2589,  2595,  2596,  2601,
    2602,  2606,  2611,  2614,  2615,  2621,  2625,  2631,  2632,  2635,
    2638,  2641,  2644,  2646,  2647,  2648,  2652,  2654,  2658,  2662,
    2663,  2670,  2672,  2674,  2678,  2682,  2690,  2694,  2698,  2704,
    2710,  2712,  2721,  2729,  2737,  2739,  2740,  2748,  2749,  2753,
    2755,  2759,  2761,  2763,  2765,  2767,  2769,  2770,  2772,  2777,
    2781,  2783,  2787,  2790,  2793,  2796,  2798,  2801,  2804,  2807,
    2809,  2811,  2821,  2822,  2825,  2828,  2832,  2838,  2844,  2852,
    2858,  2860,  2865,  2870,  2874,  2880,  2884,  2890,  2891,  2894,
    2896,  2902,  2910,  2918,  2928,  2940,  2942,  2945,  2949,  2951,
    2962,  2963,  2968,  2980,  2999,  3000,  3005,  3009,  3015,  3021,
    3031,  3042,  3050,  3052,  3056,  3066,  3076,  3086,  3093,  3105,
    3114,  3115,  3117,  3120,  3122,  3126,  3132,  3140,  3145,  3150,
    3156,  3162,  3167,  3174,  3186,  3200,  3214,  3230,  3235,  3242,
    3244,  3248,  3250,  3254,  3256,  3260,  3261,  3266,  3272,  3277,
    3283,  3288,  3294,  3299,  3305,  3310,  3315,  3319,  3323,  3327,
    3330,  3334,  3339,  3344,  3346,  3350,  3351,  3356,  3357,  3361,
    3364,  3368,  3372,  3376,  3380,  3386,  3392,  3398,  3402,  3408,
    3411,  3419,  3425,  3433,  3439,  3442,  3446,  3449,  3453,  3456,
    3460,  3466,  3471,  3477,  3485,  3494,  3503,  3511,  3518,  3525,
    3531,  3532,  3536,  3542,  3543,  3545,  3546,  3549,  3552,  3553,
    3558,  3562,  3565,  3569,  3573,  3577,  3581,  3585,  3589,  3593,
    3597,  3601,  3605,  3607,  3609,  3611,  3613,  3615,  3619,  3625,
    3628,  3633,  3635,  3637,  3639,  3641,  3645,  3649,  3653,  3657,
    3663,  3669,  3671,  3673,  3675,  3680,  3684,  3686,  3690,  3694,
    3695,  3697,  3699,  3701,  3705,  3709,  3712,  3714,  3718,  3722,
    3726,  3728,  3739,  3749,  3762,  3774,  3787,  3799,  3814,  3828,
    3829,  3831,  3833,  3837,  3840,  3844,  3848,  3852,  3854,  3856,
    3858,  3860,  3862,  3864,  3866,  3868,  3870,  3872,  3873,  3876,
    3881,  3887,  3893,  3899,  3905,  3911,  3913,  3915,  3917,  3919,
    3921,  3923,  3925,  3927,  3929,  3931,  3933,  3935,  3937,  3939,
    3941,  3943,  3945,  3947,  3949,  3951,  3953,  3955,  3957,  3959,
    3961,  3963,  3965,  3967,  3969,  3971,  3973,  3975,  3977,  3979,
    3981,  3983,  3985,  3987,  3989,  3991,  3993,  3995,  3997,  3999,
    4001,  4003,  4005,  4007,  4009,  4011,  4013,  4015,  4017,  4019,
    4021,  4023,  4025,  4027,  4029,  4031,  4033,  4035,  4037,  4039,
    4041,  4043,  4045,  4047,  4049,  4051,  4053,  4055,  4057,  4059,
    4061,  4063,  4065,  4067,  4069,  4071,  4073,  4075,  4077,  4079,
    4081,  4083,  4085,  4087,  4089,  4091,  4093,  4095,  4097,  4099,
    4101,  4103,  4105,  4107,  4109,  4111,  4113,  4115,  4117,  4119,
    4121,  4123,  4125,  4127,  4129,  4131,  4133,  4135,  4137,  4139,
    4141,  4143,  4145,  4147,  4149,  4151,  4153,  4155,  4157,  4159,
    4163,  4169,  4173,  4179,  4181,  4186,  4192,  4194,  4198,  4200,
    4202,  4204,  4206,  4208,  4210,  4212,  4214,  4228,  4230,  4232,
    4234,  4236,  4238,  4240,  4244,  4250,  4255,  4260,  4262,  4268,
    4269,  4272,  4276,  4279,  4283,  4286,  4289,  4292,  4294,  4297,
    4299,  4303,  4309,  4314,  4319,  4326,  4333,  4334,  4337,  4340,
    4342
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     412,     0,    -1,   451,   404,    -1,   451,   404,   412,    -1,
       3,    -1,     3,   405,     3,    -1,    89,   405,     3,    -1,
     183,   406,     3,   407,    91,   406,     4,   407,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   413,    26,   413,    -1,   413,    27,   413,    -1,   413,
      28,   413,    -1,   413,    29,   413,    -1,   413,    30,   413,
      -1,   413,    31,   413,    -1,    27,   413,    -1,   406,   413,
     407,    -1,   413,    12,   413,    -1,   413,    10,   413,    -1,
     413,    11,   413,    -1,   413,    23,   413,    -1,   413,    24,
     413,    -1,   413,    32,   413,    -1,   413,    25,   413,    -1,
     413,    34,   413,    -1,   413,    33,   413,    -1,    18,   413,
      -1,    17,   413,    -1,   413,    20,   413,    -1,    -1,   413,
      20,   406,   414,   452,   407,    -1,    -1,   413,    20,    47,
     406,   415,   452,   407,    -1,    -1,   413,    20,   232,   406,
     416,   452,   407,    -1,    -1,   413,    20,    40,   406,   417,
     452,   407,    -1,   413,    20,    47,   406,   421,   407,    -1,
     413,    20,   232,   406,   421,   407,    -1,   413,    15,   193,
      -1,   413,    15,    18,   193,    -1,   413,    15,     6,    -1,
     413,    15,    18,     6,    -1,     8,     9,   413,    -1,   413,
      19,   413,    50,   413,    -1,   413,    18,    19,   413,    50,
     413,    -1,   413,    -1,   413,   408,   418,    -1,   413,    -1,
     413,   408,   419,    -1,    -1,   263,    36,   420,   419,   409,
      -1,   263,    36,   409,    -1,   413,    36,   413,   409,    -1,
     413,    -1,   380,   406,   413,   407,    -1,   380,   406,   413,
     408,   413,   407,    -1,   381,   406,   413,   407,    -1,   382,
     406,   413,   408,   413,   407,    -1,   383,   406,   407,    -1,
     384,   406,   413,   408,   413,   407,    -1,   385,   406,   413,
     408,   413,   407,    -1,   386,   406,   413,   408,   413,   407,
      -1,   387,   406,   413,   408,   413,   407,    -1,   388,   406,
     413,   407,    -1,   389,   406,   413,   407,    -1,   390,   406,
     413,   407,    -1,   413,    22,   413,    -1,   413,    21,   413,
      -1,   392,   406,   413,   408,   413,   408,   413,   408,     5,
     407,    -1,   393,   406,   413,   408,   413,   408,   413,   408,
       5,   408,     4,   407,    -1,   394,   406,   413,   408,   413,
     408,   413,   408,     5,   408,     4,   407,    -1,    -1,   418,
      -1,    -1,   413,    16,   406,   423,   418,   407,    -1,    -1,
     413,    18,    16,   406,   424,   418,   407,    -1,    -1,   413,
      16,   406,   425,   452,   407,    -1,    -1,   413,    18,    16,
     406,   426,   452,   407,    -1,    -1,   281,   406,   427,   452,
     407,    -1,     3,   406,   422,   407,    -1,   322,   406,    28,
     407,    -1,   322,   406,   413,   407,    -1,   323,   406,   413,
     407,    -1,   324,   406,   413,   407,    -1,   325,   406,   413,
     407,    -1,   326,   406,   413,   407,    -1,   320,   406,   413,
     407,    -1,   320,   406,   413,   321,     4,   407,    -1,    -1,
     342,   406,   407,   350,   406,   428,   459,   461,   407,    -1,
      -1,   343,   406,   407,   350,   406,   429,   459,   461,   407,
      -1,    -1,   344,   406,   407,   350,   406,   430,   459,   461,
     407,    -1,    -1,   323,   406,   413,   407,   350,   406,   431,
     459,   461,   407,    -1,    -1,   322,   406,    28,   407,   350,
     406,   432,   459,   461,   407,    -1,    -1,   322,   406,   413,
     407,   350,   406,   433,   459,   461,   407,    -1,    -1,   324,
     406,   413,   407,   350,   406,   434,   459,   461,   407,    -1,
      -1,   325,   406,   413,   407,   350,   406,   435,   459,   461,
     407,    -1,    -1,   326,   406,   413,   407,   350,   406,   436,
     459,   461,   407,    -1,    -1,   345,   406,   413,   407,   350,
     406,   437,   459,   461,   407,    -1,    -1,   345,   406,   413,
     408,     5,   407,   350,   406,   438,   459,   461,   407,    -1,
      -1,   345,   406,   413,   408,     5,   408,     4,   407,   350,
     406,   439,   459,   461,   407,    -1,    -1,   345,   406,   413,
     408,     5,   408,     5,   407,   350,   406,   440,   459,   461,
     407,    -1,    -1,   346,   406,   413,   407,   350,   406,   441,
     459,   461,   407,    -1,    -1,   346,   406,   413,   408,     5,
     407,   350,   406,   442,   459,   461,   407,    -1,    -1,   346,
     406,   413,   408,     5,   408,     4,   407,   350,   406,   443,
     459,   461,   407,    -1,    -1,   346,   406,   413,   408,     5,
     408,     5,   407,   350,   406,   444,   459,   461,   407,    -1,
      -1,   347,   406,     5,   407,   350,   406,   445,   459,   461,
     407,    -1,    -1,   348,   406,   407,   350,   406,   446,   459,
     461,   407,    -1,    -1,   349,   406,   407,   350,   406,   447,
     459,   461,   407,    -1,   282,   406,   413,   408,   413,   408,
     413,   407,    -1,   282,   406,   413,   408,   413,   407,    -1,
     282,   406,   413,   136,   413,   407,    -1,   282,   406,   413,
     136,   413,   140,   413,   407,    -1,   283,   406,   413,   407,
      -1,   283,   406,   448,   413,   136,   413,   407,    -1,   283,
     406,   448,   136,   413,   407,    -1,   327,   406,   413,   407,
      -1,   328,   406,   413,   407,    -1,   329,   406,   413,   407,
      -1,   330,   406,   413,   408,   413,   407,    -1,   331,   406,
     413,   408,   413,   408,   413,   407,    -1,   332,   406,   413,
     408,   413,   407,    -1,   294,   406,   413,   408,   413,   407,
      -1,   295,   406,   413,   408,   413,   407,    -1,   296,   406,
     413,   408,   413,   408,   413,   407,    -1,   297,   406,   413,
     408,   413,   408,   413,   407,    -1,   298,   406,   413,   407,
      -1,   299,   406,   413,   408,   413,   407,    -1,   300,   406,
     413,   408,   413,   407,    -1,   301,   406,   413,   408,   413,
     407,    -1,   302,   406,   413,   407,    -1,   303,   406,   413,
     407,    -1,   304,   406,   413,   407,    -1,   305,   406,   413,
     408,   413,   407,    -1,   305,   406,   413,   407,    -1,   306,
     406,   413,   408,   413,   407,    -1,   307,   406,   413,   407,
      -1,   308,   406,   413,   408,   413,   407,    -1,   309,   406,
     407,    -1,   310,   406,   413,   407,    -1,   311,   406,   413,
     407,    -1,   312,   406,   413,   407,    -1,   313,   406,   407,
      -1,   293,   406,   407,    -1,   286,   406,   413,   408,   413,
     407,    -1,   287,   406,   413,   407,    -1,   288,   406,   413,
     407,    -1,   289,   406,   413,   407,    -1,   290,   406,   413,
     407,    -1,   291,   406,   413,   407,    -1,   292,   406,   413,
     407,    -1,   352,   406,   413,   408,   413,   407,    -1,   353,
     406,   413,   407,    -1,   354,   406,   413,   407,    -1,   355,
     406,   413,   407,    -1,   356,   406,   413,   407,    -1,   357,
     406,   413,   407,    -1,   358,   406,   413,   407,    -1,   359,
     406,   413,   407,    -1,   360,   406,   413,   407,    -1,   361,
     406,   413,   408,   413,   408,   413,   407,    -1,   362,   406,
     413,   408,   413,   408,   413,   407,    -1,   363,   406,   413,
     408,   413,   408,   413,   407,    -1,   364,   406,   413,   408,
     413,   407,    -1,   365,   406,   413,   408,   413,   407,    -1,
     366,   406,   413,   408,   413,   408,   413,   407,    -1,   367,
     406,   413,   408,   413,   408,   413,   407,    -1,   368,   406,
     413,   408,   413,   407,    -1,   368,   406,   413,   408,   413,
     408,   413,   408,   413,   407,    -1,   369,   406,   413,   407,
      -1,   369,   406,   413,   408,   413,   407,    -1,   369,   406,
     413,   408,   413,   408,   413,   407,    -1,   370,   406,   413,
     407,    -1,   372,   406,   413,   407,    -1,   373,   406,   413,
     407,    -1,   374,   406,   413,   408,   413,   407,    -1,   374,
     406,   413,   408,   413,   408,   413,   407,    -1,   375,   406,
     407,    -1,   314,   406,   413,    51,   586,   407,    -1,   315,
     406,   413,   408,   586,   407,    -1,   316,   406,   413,   408,
     413,   407,    -1,   317,   406,   413,   408,   413,   407,    -1,
     318,   406,   413,   408,   413,   408,   413,   407,    -1,   413,
      15,   319,    -1,   330,   406,   413,   408,   413,   408,   413,
     407,    -1,   330,   406,   413,   408,   413,   408,   413,   408,
     413,   407,    -1,   333,   406,   407,    -1,   334,   406,   407,
      -1,   335,   406,   407,    -1,   336,   406,   407,    -1,   337,
     406,   407,    -1,   338,    -1,   339,    -1,   340,   406,   413,
     407,    -1,   341,   406,   413,   408,   413,   407,    -1,   178,
      -1,   254,    -1,    65,    -1,   284,   406,   413,   408,   449,
     407,    -1,   285,   406,   413,   408,   449,   407,    -1,   161,
     413,   278,    -1,   161,   413,   104,    -1,   161,   413,   105,
      -1,   161,   413,   109,    -1,   161,   413,   111,    -1,   161,
     413,   279,    -1,   161,   413,   145,    -1,   161,   413,   144,
      -1,   161,   413,   147,    -1,    77,   413,   450,   124,    -1,
      77,   413,   450,   125,   413,   124,    -1,    77,   450,   124,
      -1,    77,   450,   125,   413,   124,    -1,   275,   413,   253,
     413,    -1,   450,   275,   413,   253,   413,    -1,   413,    14,
     413,    -1,   413,    18,    14,   413,    -1,   413,    13,   413,
      -1,   413,    18,    13,   413,    -1,    72,    -1,    80,    -1,
      81,    -1,   225,    -1,   452,    -1,   241,   470,   471,    -1,
     241,   470,   471,   136,   474,   453,   454,   458,   463,   466,
     467,   468,    -1,   241,   470,   471,   159,     3,   136,   474,
     453,   454,   458,   463,   466,    -1,    -1,   274,   413,    -1,
      -1,   141,    63,   455,   457,    -1,   413,   456,    -1,   455,
     408,   413,   456,    -1,    -1,    49,    -1,   112,    -1,    -1,
     277,   214,    -1,    -1,   148,   413,    -1,    -1,   351,    63,
     460,    -1,     3,    -1,   460,   408,     3,    -1,    -1,   198,
      63,   462,    -1,     3,   456,    -1,   462,   408,     3,   456,
      -1,    -1,   198,    63,   464,    -1,   465,    -1,   464,   408,
     465,    -1,     3,   456,    -1,     3,   405,     3,   456,    -1,
       5,   456,    -1,    -1,   179,   413,    -1,   179,   413,   408,
     413,    -1,   179,   413,   181,   413,    -1,    -1,   140,   258,
      -1,   140,   230,    -1,   140,   258,   231,   180,    -1,   140,
     230,   231,   180,    -1,    -1,   159,   469,    -1,     3,    -1,
     469,   408,     3,    -1,    -1,   470,    40,    -1,   470,   106,
      -1,   470,   110,    -1,   470,   146,    -1,   470,   238,    -1,
     470,   226,    -1,   470,   234,    -1,   470,   233,    -1,   472,
      -1,   471,   408,   472,    -1,    28,    -1,   413,   473,    -1,
      51,     3,    -1,     3,    -1,    -1,   475,    -1,   474,   408,
     475,    -1,   476,    -1,   480,    -1,     3,   473,   487,    -1,
     173,     3,   473,   487,    -1,     3,   405,     3,   473,   487,
      -1,   490,   479,     3,    -1,   477,   479,     3,    -1,   381,
     406,   413,   407,    -1,   381,   406,   413,   407,   479,     3,
      -1,   381,   406,   413,   407,   479,     3,   406,     3,   407,
      -1,   406,   474,   407,    -1,    -1,   167,   406,   478,   452,
     407,    -1,    51,    -1,    -1,   475,   481,   163,   476,   485,
      -1,   475,   238,   476,    -1,   475,   238,   476,   197,   413,
      -1,   475,   483,   482,   163,   476,   486,    -1,   475,   190,
     484,   163,   476,    -1,    -1,   153,    -1,    76,    -1,    -1,
     196,    -1,   177,    -1,   215,    -1,   177,   482,    -1,   215,
     482,    -1,    -1,    -1,   486,    -1,   197,   413,    -1,   266,
     406,   469,   407,    -1,   267,   164,   488,   406,   489,   407,
      -1,   154,   164,   488,   406,   489,   407,    -1,   133,   164,
     488,   406,   489,   407,    -1,    -1,   140,   163,    -1,    -1,
       3,    -1,   489,   408,     3,    -1,   406,   452,   407,    -1,
     491,    -1,   107,   492,   136,     3,   453,   463,   466,   612,
      -1,   492,   176,    -1,   492,   203,    -1,   492,   154,    -1,
      -1,   107,   492,   493,   136,   474,   453,    -1,     3,   494,
      -1,   493,   408,     3,   494,    -1,    -1,   405,    28,    -1,
     107,   492,   136,   493,   266,   474,   453,    -1,   495,    -1,
     108,   252,     3,   496,    -1,   108,   252,   156,   281,     3,
     496,    -1,    -1,    74,    -1,   210,    -1,   497,    -1,    73,
     155,     3,   197,     3,   406,   502,   407,    -1,    73,   138,
     155,     3,   197,     3,   406,   502,   407,    -1,    73,   155,
     156,   281,     3,   197,     3,   406,   502,   407,    -1,    73,
     261,   155,     3,   197,     3,   406,   502,   407,    -1,    73,
     261,   155,   156,   281,     3,   197,     3,   406,   502,   407,
      -1,    73,   155,     3,   197,     3,   266,   268,   406,   502,
     407,    -1,    73,   155,   156,   281,     3,   197,     3,   266,
     268,   406,   502,   407,    -1,    73,   261,   155,     3,   197,
       3,   266,   268,   406,   502,   407,    -1,    73,   261,   155,
     156,   281,     3,   197,     3,   266,   268,   406,   502,   407,
      -1,    73,   155,    85,     3,   197,     3,   406,   502,   407,
      -1,    73,   155,    85,   156,   281,     3,   197,     3,   406,
     502,   407,    -1,    73,   261,   155,    85,     3,   197,     3,
     406,   502,   407,    -1,    73,   261,   155,    85,   156,   281,
       3,   197,     3,   406,   502,   407,    -1,    73,   155,    85,
       3,   197,     3,   266,   268,   406,   502,   407,    -1,    73,
     261,   155,    85,     3,   197,     3,   266,   268,   406,   502,
     407,    -1,    73,   155,     3,   197,     3,   266,   391,   406,
       3,   498,   407,   499,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   391,   406,     3,   498,   407,   499,    -1,
      -1,     3,    -1,    -1,   277,   406,   500,   407,    -1,   501,
      -1,   500,   408,   501,    -1,     3,    20,     5,    -1,     3,
      -1,   502,   408,     3,    -1,   503,    -1,   327,   406,     3,
     407,    -1,   328,   406,     3,   407,    -1,   329,   406,     3,
     407,    -1,   330,   406,     3,   408,     3,   407,    -1,   504,
      -1,   108,   155,     3,    -1,   505,   507,    -1,   255,   252,
       3,    -1,   255,   252,     3,   408,   506,    -1,     3,    -1,
     506,   408,     3,    -1,    -1,   507,    74,    -1,   507,   210,
      -1,   507,    55,    53,    -1,   507,    54,    53,    -1,   515,
      -1,   516,    -1,   517,    -1,   508,    -1,   510,    -1,    73,
     395,   396,     3,   509,    -1,    73,   395,   396,   156,   281,
       3,   509,    -1,    -1,   277,   406,   397,    20,     4,   407,
      -1,   108,   395,   396,     3,    -1,   108,   395,   396,     3,
      74,    -1,   108,   395,   396,   156,   281,     3,    -1,   511,
      -1,   513,    -1,   514,    -1,   395,   398,   159,     3,   271,
     406,   512,   408,   512,   408,   512,   408,   512,   408,   512,
     408,   512,   408,   512,   407,    -1,   395,   398,   401,   159,
       3,   271,   406,   512,   408,   512,   408,   512,   408,   512,
     408,   512,   408,   512,   408,   512,   407,    -1,     4,    -1,
     193,    -1,   395,   399,   136,     3,   402,     4,    -1,   395,
     399,   136,     3,   402,     4,   403,     4,    -1,   395,   400,
     136,     3,   402,     4,    -1,   395,   400,   136,     3,   402,
       4,   179,     5,    -1,   168,     3,    -1,   168,     3,   171,
      -1,   170,     3,    -1,   170,    28,    -1,   169,     3,    -1,
     169,     3,   408,     4,    -1,   518,    -1,   206,   252,     3,
      -1,   519,    -1,   521,     3,   520,   522,    -1,   521,     3,
     405,     3,   520,   522,    -1,    -1,   277,    44,     5,    45,
      -1,   277,    44,     5,    46,    -1,    41,   252,    -1,    -1,
     258,    42,   197,   523,    -1,   258,    42,   197,   523,   277,
       5,    43,    -1,   108,    42,   197,   523,    -1,     3,    -1,
     523,   408,     3,    -1,   532,    -1,   524,    -1,   531,    -1,
      73,   221,     3,   197,     3,   525,   526,   527,   529,   530,
      -1,    -1,    51,   223,    -1,    51,   224,    -1,    -1,   140,
      40,    -1,   140,   241,    -1,   140,   157,    -1,   140,   258,
      -1,   140,   107,    -1,    -1,   245,   528,    -1,     3,    -1,
     528,   408,     3,    -1,    -1,   266,   406,   413,   407,    -1,
      -1,   277,    78,   406,   413,   407,    -1,   108,   221,     3,
     197,     3,    -1,    37,   252,     3,    38,    71,     3,    78,
     406,   413,   407,    -1,    37,   252,     3,    38,    71,     3,
     261,   406,   579,   407,    -1,    37,   252,     3,    38,    71,
       3,   134,   164,   406,   576,   407,   207,     3,   406,   577,
     407,   578,    -1,    37,   252,     3,    38,    71,     3,    78,
     406,   413,   407,    18,   269,    -1,    37,   252,     3,    38,
      71,     3,   134,   164,   406,   576,   407,   207,     3,   406,
     577,   407,   578,    18,   269,    -1,    37,   252,     3,    38,
      71,     3,   201,   164,   406,   575,   407,    -1,    37,   252,
       3,   108,    71,     3,    -1,    37,   252,     3,   208,    71,
       3,   245,     3,    -1,    37,   252,     3,   120,    71,     3,
      -1,    37,   252,     3,   100,    71,     3,    -1,    37,   252,
       3,   269,    71,     3,    -1,    37,   252,     3,    38,    84,
       3,   586,   581,   533,    -1,    37,   252,     3,   108,    84,
       3,    -1,    37,   252,     3,   108,     3,    -1,    37,   252,
       3,   208,    84,     3,   245,     3,    -1,    37,   252,     3,
     208,     3,   245,     3,    -1,    37,   252,     3,   187,    84,
       3,   586,   581,   533,    -1,    37,   252,     3,   187,     3,
     586,   581,   533,    -1,    37,   252,     3,    75,    84,     3,
       3,   586,   581,   533,    -1,    37,   252,     3,    75,     3,
       3,   586,   581,   533,    -1,    37,   252,     3,   120,   217,
       3,   222,    -1,    37,   252,     3,   100,   217,     3,   222,
      -1,    -1,   130,    -1,    39,     3,    -1,   534,    -1,   157,
     542,   543,     3,   544,   271,   546,   535,   537,   612,    -1,
     157,   542,   543,     3,   544,   452,    -1,    -1,    -1,   199,
     164,   258,   536,   541,    -1,    -1,   197,    88,   538,   539,
      -1,    -1,   406,     3,   407,    -1,   406,     3,   408,     3,
      -1,   101,    90,    -1,    -1,   101,   258,   540,   240,   541,
      -1,     3,    20,   413,    -1,   541,   408,     3,    20,   413,
      -1,    -1,   542,   176,    -1,   542,   103,    -1,   542,   146,
      -1,   542,   154,    -1,   159,    -1,    -1,    -1,   406,   545,
     407,    -1,     3,    -1,   545,   408,     3,    -1,   406,   548,
     407,    -1,    -1,   546,   408,   547,   406,   548,   407,    -1,
     413,    -1,   113,    -1,   548,   408,   413,    -1,   548,   408,
     113,    -1,   157,   542,   543,     3,   240,   549,   535,    -1,
       3,    20,   413,    -1,     3,    20,   113,    -1,   549,   408,
       3,    20,   413,    -1,   549,   408,     3,    20,   113,    -1,
     550,    -1,   216,   542,   543,     3,   544,   271,   546,   535,
      -1,   216,   542,   543,     3,   240,   549,   535,    -1,   216,
     542,   543,     3,   544,   452,   535,    -1,   551,    -1,    -1,
      86,     3,   552,   553,   555,   556,   557,    -1,    -1,   406,
     554,   407,    -1,     3,    -1,   554,   408,     3,    -1,   136,
      -1,   245,    -1,     4,    -1,   236,    -1,   237,    -1,    -1,
     558,    -1,   277,   406,   558,   407,    -1,   406,   558,   407,
      -1,   559,    -1,   558,   408,   559,    -1,   135,    87,    -1,
     135,   249,    -1,    99,     4,    -1,   143,    -1,   143,     6,
      -1,   193,     4,    -1,   242,     4,    -1,    87,    -1,   560,
      -1,   258,   561,   474,   240,   562,   453,   463,   466,   612,
      -1,    -1,   542,   176,    -1,   542,   154,    -1,     3,    20,
     413,    -1,     3,   405,     3,    20,   413,    -1,   562,   408,
       3,    20,   413,    -1,   562,   408,     3,   405,     3,    20,
     413,    -1,   208,   252,     3,   245,     3,    -1,   563,    -1,
      73,    95,   564,     3,    -1,    73,   227,   564,     3,    -1,
     108,    95,     3,    -1,   108,    95,   156,   281,     3,    -1,
     108,   227,     3,    -1,   108,   227,   156,   281,     3,    -1,
      -1,   156,   281,    -1,   565,    -1,    73,   102,     3,    51,
     586,    -1,    73,   102,     3,    51,   586,   113,   413,    -1,
      73,   102,     3,    51,   586,    18,   193,    -1,    73,   102,
       3,    51,   586,    78,   406,   413,   407,    -1,    73,   102,
       3,    51,   586,    18,   193,    78,   406,   413,   407,    -1,
     566,    -1,   267,     3,    -1,   267,    95,     3,    -1,   567,
      -1,    73,   572,   252,   564,     3,   406,   573,   407,   569,
     568,    -1,    -1,   172,   406,     3,   407,    -1,    73,   572,
     252,   564,     3,   405,     3,   406,   573,   407,   569,    -1,
      73,   572,   252,   564,     3,   351,    94,     3,   140,   271,
     136,   406,     5,   407,   245,   406,     5,   407,    -1,    -1,
     569,    48,    20,     5,    -1,   569,    48,     5,    -1,   569,
     197,     3,   107,     3,    -1,   569,   197,     3,   248,     3,
      -1,   569,   228,    63,   268,   406,     3,   407,   229,     5,
      -1,   569,   228,    63,   204,   406,     3,   407,   406,   570,
     407,    -1,   569,   351,    63,   204,   406,     3,   407,    -1,
     571,    -1,   570,   408,   571,    -1,   228,     3,   271,   174,
     250,     4,   197,   191,     5,    -1,   228,     3,   271,   174,
     250,   184,   197,   191,     5,    -1,    73,   572,   252,   564,
       3,   406,   573,   407,   588,    -1,    73,   572,   252,   564,
       3,   588,    -1,    73,   572,   252,   564,     3,   405,     3,
     406,   573,   407,   588,    -1,    73,   572,   252,   564,     3,
     405,     3,   588,    -1,    -1,   246,    -1,   247,   246,    -1,
     574,    -1,   573,   408,   574,    -1,   201,   164,   406,   575,
     407,    -1,    71,     3,   201,   164,   406,   575,   407,    -1,
     164,   406,   469,   407,    -1,   155,   406,   469,   407,    -1,
     138,   155,   406,   469,   407,    -1,   138,   164,   406,   469,
     407,    -1,    78,   406,   413,   407,    -1,    71,     3,    78,
     406,   413,   407,    -1,   134,   164,   406,   576,   407,   207,
       3,   406,   577,   407,   578,    -1,   134,   164,   406,   576,
     407,   207,     3,   405,     3,   406,   577,   407,   578,    -1,
      71,     3,   134,   164,   406,   576,   407,   207,     3,   406,
     577,   407,   578,    -1,    71,     3,   134,   164,   406,   576,
     407,   207,     3,   405,     3,   406,   577,   407,   578,    -1,
     261,   406,   579,   407,    -1,    71,     3,   261,   406,   579,
     407,    -1,     3,    -1,   575,   408,     3,    -1,     3,    -1,
     576,   408,     3,    -1,     3,    -1,   577,   408,     3,    -1,
      -1,   578,   197,   107,    74,    -1,   578,   197,   107,   240,
     193,    -1,   578,   197,   107,   210,    -1,   578,   197,   107,
     240,   113,    -1,   578,   197,   258,    74,    -1,   578,   197,
     258,   240,   193,    -1,   578,   197,   258,   210,    -1,   578,
     197,   258,   240,   113,    -1,   578,   197,   107,   192,    -1,
     578,   197,   258,   192,    -1,   578,   183,   137,    -1,   578,
     183,   235,    -1,   578,   183,   200,    -1,   578,    97,    -1,
     578,    18,    97,    -1,   578,    97,   151,    98,    -1,   578,
      97,   151,   149,    -1,     3,    -1,   579,   408,     3,    -1,
      -1,   580,     3,   586,   581,    -1,    -1,   581,    18,   193,
      -1,   581,   193,    -1,   581,   113,     4,    -1,   581,   113,
       5,    -1,   581,   113,     7,    -1,   581,   113,     6,    -1,
     581,   113,   333,   406,   407,    -1,   581,   113,   334,   406,
     407,    -1,   581,   113,   335,   406,   407,    -1,   581,   113,
      72,    -1,   581,   113,   406,   413,   407,    -1,   581,    48,
      -1,   581,    48,   406,     5,   408,     5,   407,    -1,   581,
      48,   406,     5,   407,    -1,   581,    53,   406,     5,   408,
       5,   407,    -1,   581,    53,   406,     5,   407,    -1,   581,
      53,    -1,   581,   261,   164,    -1,   581,   261,    -1,   581,
     201,   164,    -1,   581,   164,    -1,   581,    79,     4,    -1,
     581,    78,   406,   413,   407,    -1,   581,    71,     3,   261,
      -1,   581,    71,     3,   201,   164,    -1,   581,    71,     3,
      78,   406,   413,   407,    -1,   581,    56,    52,    51,   406,
     413,   407,    57,    -1,   581,    56,    52,    51,   406,   413,
     407,    58,    -1,   581,    56,    52,    51,   406,   413,   407,
      -1,   581,    51,   406,   413,   407,    57,    -1,   581,    51,
     406,   413,   407,    58,    -1,   581,    51,   406,   413,   407,
      -1,    -1,   406,     5,   407,    -1,   406,     5,   408,     5,
     407,    -1,    -1,    64,    -1,    -1,   584,   259,    -1,   584,
     280,    -1,    -1,   585,    82,   240,     4,    -1,   585,    83,
       4,    -1,    67,   582,    -1,   244,   582,   584,    -1,   239,
     582,   584,    -1,   189,   582,   584,    -1,   160,   582,   584,
      -1,   152,   582,   584,    -1,    66,   582,   584,    -1,   205,
     582,   584,    -1,   114,   582,   584,    -1,   132,   582,   584,
      -1,   116,   582,   584,    -1,   117,    -1,   257,    -1,   251,
      -1,   115,    -1,   278,    -1,    82,   582,   585,    -1,   270,
     406,     5,   407,   585,    -1,    64,   582,    -1,   272,   406,
       5,   407,    -1,   256,    -1,    61,    -1,   188,    -1,   182,
      -1,   243,   583,   585,    -1,   249,   583,   585,    -1,   185,
     583,   585,    -1,   175,   583,   585,    -1,   123,   406,   587,
     407,   585,    -1,   240,   406,   587,   407,   585,    -1,    62,
      -1,   262,    -1,   264,    -1,   273,   406,     5,   407,    -1,
     586,    36,   409,    -1,     4,    -1,   587,   408,     4,    -1,
     589,   479,   452,    -1,    -1,   154,    -1,   216,    -1,   590,
      -1,   240,   227,     3,    -1,   240,   227,   113,    -1,   240,
     591,    -1,   592,    -1,   591,   408,   592,    -1,     8,    20,
     413,    -1,     8,     9,   413,    -1,   593,    -1,    73,   202,
       3,   406,   594,   407,    51,    60,   598,   124,    -1,    73,
     202,     3,   406,   594,   407,    60,   598,   124,    -1,    73,
      10,   216,   202,     3,   406,   594,   407,    51,    60,   598,
     124,    -1,    73,    10,   216,   202,     3,   406,   594,   407,
      60,   598,   124,    -1,    73,   139,     3,   406,   594,   407,
     213,   597,    51,    60,   598,   124,    -1,    73,   139,     3,
     406,   594,   407,   213,   597,    60,   598,   124,    -1,    73,
      10,   216,   139,     3,   406,   594,   407,   213,   597,    51,
      60,   598,   124,    -1,    73,    10,   216,   139,     3,   406,
     594,   407,   213,   597,    60,   598,   124,    -1,    -1,   595,
      -1,   596,    -1,   595,   408,   596,    -1,     3,   586,    -1,
      16,     3,   586,    -1,   195,     3,   586,    -1,   150,     3,
     586,    -1,   152,    -1,   160,    -1,   270,    -1,   249,    -1,
      62,    -1,   132,    -1,   114,    -1,    66,    -1,   117,    -1,
     251,    -1,    -1,   598,   599,    -1,   598,    60,   598,   124,
      -1,   598,   156,   598,   124,   156,    -1,   598,   276,   598,
     124,   276,    -1,   598,   166,   598,   124,   166,    -1,   598,
     131,   598,   124,   131,    -1,   598,    77,   598,   124,    77,
      -1,     3,    -1,     4,    -1,     5,    -1,     7,    -1,     6,
      -1,    20,    -1,    18,    -1,    10,    -1,    12,    -1,    16,
      -1,    50,    -1,   241,    -1,   157,    -1,   258,    -1,   107,
      -1,   136,    -1,   274,    -1,   240,    -1,   159,    -1,   271,
      -1,    73,    -1,   108,    -1,   252,    -1,   155,    -1,   253,
      -1,   125,    -1,   119,    -1,    96,    -1,   101,    -1,    68,
      -1,   211,    -1,   165,    -1,   162,    -1,    70,    -1,   194,
      -1,   129,    -1,    69,    -1,   142,    -1,   127,    -1,   195,
      -1,   150,    -1,   140,    -1,    54,    -1,   218,    -1,   209,
      -1,   126,    -1,   220,    -1,    59,    -1,   118,    -1,   217,
      -1,   219,    -1,    51,    -1,   197,    -1,   198,    -1,    63,
      -1,   141,    -1,   148,    -1,   179,    -1,   181,    -1,   163,
      -1,   177,    -1,   215,    -1,   153,    -1,   196,    -1,   137,
      -1,    76,    -1,   190,    -1,   266,    -1,   193,    -1,   113,
      -1,   201,    -1,   164,    -1,   261,    -1,    78,    -1,   134,
      -1,   207,    -1,    74,    -1,   210,    -1,   192,    -1,   152,
      -1,   160,    -1,   270,    -1,   249,    -1,    62,    -1,   132,
      -1,   114,    -1,    66,    -1,   117,    -1,   251,    -1,   239,
      -1,   116,    -1,    82,    -1,   262,    -1,    61,    -1,   260,
      -1,   122,    -1,   158,    -1,    40,    -1,   106,    -1,   281,
      -1,   275,    -1,   277,    -1,   202,    -1,   139,    -1,   213,
      -1,   406,    -1,   407,    -1,   408,    -1,   404,    -1,   405,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,    17,    -1,   410,    -1,   322,    -1,   323,    -1,   324,
      -1,   325,    -1,   326,    -1,     8,    -1,   600,    -1,   108,
     202,     3,    -1,   108,   202,   156,   281,     3,    -1,   108,
     139,     3,    -1,   108,   139,   156,   281,     3,    -1,   601,
      -1,    68,     3,   406,   407,    -1,    68,     3,   406,   602,
     407,    -1,   603,    -1,   602,   408,   603,    -1,     5,    -1,
       4,    -1,     7,    -1,   193,    -1,     6,    -1,     3,    -1,
       8,    -1,   604,    -1,    73,   219,     3,   605,   606,   197,
       3,   140,   118,   217,    60,   598,   124,    -1,    59,    -1,
      39,    -1,   157,    -1,   258,    -1,   107,    -1,   607,    -1,
     108,   219,     3,    -1,   108,   219,   156,   281,     3,    -1,
      37,   219,     3,   120,    -1,    37,   219,     3,   100,    -1,
     608,    -1,    73,   371,   564,     3,   609,    -1,    -1,   609,
     610,    -1,   376,   277,     5,    -1,   376,     5,    -1,   377,
      63,     5,    -1,   377,     5,    -1,   378,     5,    -1,   184,
       5,    -1,   379,    -1,    18,   379,    -1,   611,    -1,   108,
     371,     3,    -1,   108,   371,   156,   281,     3,    -1,    37,
     371,     3,   609,    -1,    37,   371,     3,    55,    -1,    37,
     371,     3,    55,   277,     5,    -1,    37,   371,     3,   208,
     245,     3,    -1,    -1,   212,    28,    -1,   212,   613,    -1,
       3,    -1,   613,   408,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   490,   490,   491,   496,   503,   504,   505,   519,   520,
     548,   556,   564,   570,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   603,   603,   612,   612,   614,   614,
     616,   616,   621,   623,   627,   628,   629,   630,   631,   634,
     635,   638,   647,   665,   674,   694,   694,   754,   763,   770,
     774,   776,   778,   783,   788,   796,   798,   800,   802,   804,
     806,   808,   810,   812,   814,   821,   832,   843,   844,   847,
     847,   848,   848,   849,   849,   857,   857,   865,   865,   876,
     880,   881,   882,   883,   884,   885,   886,   887,   891,   891,
     893,   893,   895,   895,   898,   898,   900,   900,   902,   902,
     904,   904,   906,   906,   908,   908,   911,   911,   913,   913,
     915,   915,   917,   917,   919,   919,   921,   921,   923,   923,
     925,   925,   928,   928,   930,   930,   932,   932,   936,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   971,   972,   973,   974,   975,   976,   977,   978,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1003,  1004,  1005,  1006,  1007,  1009,  1010,  1012,
    1013,  1014,  1016,  1017,  1018,  1019,  1026,  1033,  1040,  1044,
    1048,  1052,  1056,  1060,  1066,  1067,  1068,  1071,  1077,  1084,
    1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1095,  1097,
    1099,  1101,  1105,  1113,  1124,  1125,  1128,  1129,  1132,  1140,
    1148,  1156,  1170,  1180,  1181,  1194,  1210,  1211,  1212,  1213,
    1216,  1223,  1231,  1232,  1233,  1236,  1237,  1240,  1241,  1245,
    1246,  1249,  1251,  1255,  1256,  1259,  1261,  1265,  1266,  1269,
    1270,  1273,  1279,  1286,  1295,  1296,  1297,  1298,  1301,  1302,
    1303,  1304,  1305,  1308,  1309,  1312,  1313,  1316,  1317,  1318,
    1319,  1320,  1321,  1322,  1323,  1324,  1327,  1328,  1329,  1337,
    1343,  1344,  1345,  1348,  1349,  1352,  1353,  1357,  1365,  1375,
    1376,  1377,  1386,  1391,  1397,  1405,  1409,  1409,  1449,  1450,
    1454,  1456,  1458,  1460,  1462,  1466,  1467,  1468,  1471,  1472,
    1475,  1476,  1479,  1480,  1481,  1484,  1485,  1488,  1489,  1493,
    1495,  1497,  1499,  1502,  1503,  1506,  1507,  1510,  1514,  1524,
    1532,  1533,  1534,  1535,  1539,  1543,  1545,  1549,  1549,  1551,
    1556,  1563,  1570,  1582,  1583,  1584,  1588,  1595,  1602,  1610,
    1620,  1628,  1638,  1646,  1655,  1664,  1674,  1682,  1691,  1700,
    1710,  1719,  1736,  1744,  1756,  1757,  1771,  1772,  1775,  1776,
    1788,  1798,  1803,  1808,  1814,  1821,  1828,  1835,  1845,  1852,
    1861,  1868,  1874,  1882,  1888,  1896,  1897,  1898,  1899,  1900,
    1916,  1917,  1918,  1927,  1928,  1932,  1942,  1958,  1959,  1963,
    1971,  1980,  2003,  2004,  2005,  2009,  2026,  2048,  2049,  2054,
    2063,  2077,  2086,  2098,  2104,  2115,  2121,  2128,  2134,  2150,
    2157,  2166,  2174,  2180,  2195,  2197,  2201,  2210,  2223,  2225,
    2229,  2234,  2241,  2246,  2254,  2258,  2259,  2263,  2274,  2275,
    2276,  2280,  2281,  2282,  2283,  2284,  2285,  2288,  2290,  2294,
    2295,  2298,  2300,  2303,  2305,  2309,  2318,  2324,  2330,  2337,
    2343,  2350,  2356,  2362,  2368,  2374,  2380,  2386,  2392,  2398,
    2404,  2410,  2416,  2422,  2428,  2434,  2440,  2453,  2465,  2466,
    2467,  2470,  2478,  2484,  2497,  2498,  2498,  2502,  2503,  2506,
    2507,  2508,  2512,  2513,  2513,  2517,  2525,  2535,  2536,  2537,
    2538,  2539,  2542,  2542,  2545,  2546,  2549,  2559,  2572,  2573,
    2573,  2576,  2577,  2578,  2579,  2582,  2586,  2587,  2588,  2589,
    2595,  2598,  2604,  2609,  2615,  2619,  2619,  2624,  2625,  2627,
    2628,  2632,  2633,  2637,  2638,  2639,  2642,  2643,  2644,  2645,
    2649,  2650,  2654,  2655,  2656,  2657,  2658,  2659,  2660,  2661,
    2665,  2673,  2682,  2683,  2684,  2688,  2699,  2711,  2722,  2737,
    2742,  2746,  2747,  2751,  2753,  2755,  2757,  2761,  2762,  2768,
    2772,  2774,  2776,  2778,  2780,  2785,  2789,  2790,  2794,  2803,
    2816,  2817,  2825,  2833,  2841,  2842,  2843,  2844,  2845,  2846,
    2848,  2850,  2854,  2855,  2858,  2873,  2880,  2895,  2908,  2923,
    2936,  2937,  2938,  2941,  2942,  2945,  2946,  2947,  2948,  2949,
    2950,  2951,  2952,  2953,  2955,  2957,  2959,  2961,  2963,  2967,
    2968,  2971,  2972,  2975,  2976,  2979,  2980,  2981,  2982,  2983,
    2984,  2985,  2986,  2987,  2988,  2989,  2990,  2991,  2992,  2993,
    2994,  2995,  2996,  2999,  3000,  3003,  3003,  3013,  3014,  3015,
    3016,  3017,  3018,  3019,  3020,  3021,  3022,  3023,  3024,  3031,
    3032,  3033,  3034,  3035,  3036,  3037,  3038,  3039,  3040,  3041,
    3042,  3043,  3044,  3045,  3046,  3047,  3048,  3049,  3050,  3051,
    3054,  3055,  3056,  3059,  3060,  3063,  3064,  3065,  3068,  3069,
    3070,  3074,  3075,  3076,  3077,  3078,  3079,  3080,  3081,  3082,
    3083,  3084,  3085,  3086,  3087,  3088,  3089,  3090,  3091,  3092,
    3093,  3094,  3095,  3096,  3097,  3098,  3099,  3100,  3101,  3102,
    3103,  3104,  3105,  3106,  3107,  3108,  3111,  3112,  3115,  3128,
    3129,  3130,  3134,  3137,  3138,  3139,  3140,  3140,  3142,  3143,
    3151,  3155,  3161,  3167,  3174,  3181,  3187,  3193,  3200,  3209,
    3210,  3213,  3214,  3217,  3218,  3219,  3220,  3223,  3224,  3225,
    3226,  3227,  3228,  3229,  3230,  3231,  3232,  3239,  3240,  3241,
    3242,  3243,  3244,  3245,  3246,  3249,  3250,  3251,  3251,  3251,
    3252,  3252,  3252,  3252,  3252,  3252,  3253,  3253,  3253,  3253,
    3253,  3253,  3253,  3253,  3253,  3254,  3254,  3254,  3254,  3254,
    3254,  3254,  3255,  3255,  3255,  3255,  3256,  3256,  3256,  3256,
    3256,  3256,  3256,  3256,  3256,  3256,  3256,  3256,  3257,  3257,
    3257,  3257,  3257,  3257,  3257,  3257,  3258,  3258,  3258,  3258,
    3258,  3258,  3258,  3258,  3259,  3259,  3259,  3259,  3259,  3259,
    3259,  3259,  3259,  3260,  3260,  3260,  3260,  3260,  3260,  3260,
    3260,  3261,  3261,  3261,  3262,  3262,  3262,  3262,  3262,  3262,
    3262,  3262,  3263,  3263,  3263,  3263,  3263,  3263,  3263,  3264,
    3264,  3264,  3264,  3264,  3264,  3264,  3265,  3265,  3265,  3265,
    3266,  3266,  3266,  3266,  3266,  3266,  3266,  3266,  3266,  3266,
    3266,  3266,  3267,  3267,  3267,  3267,  3267,  3268,  3275,  3279,
    3285,  3291,  3297,  3309,  3313,  3319,  3327,  3328,  3331,  3332,
    3333,  3334,  3335,  3336,  3337,  3344,  3348,  3356,  3357,  3360,
    3361,  3362,  3365,  3369,  3375,  3384,  3392,  3403,  3407,  3416,
    3417,  3421,  3422,  3423,  3424,  3425,  3426,  3427,  3428,  3431,
    3435,  3441,  3451,  3458,  3465,  3473,  3483,  3484,  3485,  3488,
    3489
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
  "FVECTOR_NORMALIZE", "HNSW", "FHNSW_KNN", "FHNSW_FILTER_KNN",
  "FHNSW_HYBRID_EXPLAIN", "CHECKPOINT", "STORE", "RETENTION", "PUT", "GET",
  "LIST", "WRITES", "THREAD", "AT", "';'", "'.'", "'('", "')'", "','",
  "']'", "'='", "$accept", "stmt_list", "expr", "@1", "@2", "@3", "@4",
  "val_list", "array_val_list", "@5", "any_array_arg", "opt_val_list",
  "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16",
  "@17", "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26",
  "@27", "@28", "@29", "@30", "trim_ltb", "interval_exp", "case_list",
  "stmt", "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_window_partition",
  "window_partition_list", "opt_window_orderby", "window_orderby_list",
  "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
  "opt_for_update", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "opt_as_alias", "table_references",
  "table_reference", "table_factor", "lateral_subquery", "@31", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "opt_drop_cascade", "create_index_stmt",
  "opt_hnsw_opclass", "opt_hnsw_with", "hnsw_with_list", "hnsw_with_item",
  "index_col_list", "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "truncate_extra_tables", "opt_truncate_options",
  "create_checkpoint_store_stmt", "opt_ck_with",
  "drop_checkpoint_store_stmt", "ck_put_stmt", "ck_put_val", "ck_get_stmt",
  "ck_list_stmt", "listen_stmt", "unlisten_stmt", "notify_stmt",
  "reclaim_table_stmt", "analyze_table_stmt", "sample_clause_opt",
  "analyze_table_prefix", "hist_clause_opt", "hist_col_list",
  "create_policy_stmt", "opt_policy_as", "opt_policy_for", "opt_policy_to",
  "policy_role_list", "opt_policy_using", "opt_policy_check",
  "drop_policy_stmt", "alter_table_stmt", "opt_col_position",
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
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,    59,    46,    40,    41,    44,    93,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   411,   412,   412,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   414,   413,   415,   413,   416,   413,
     417,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   418,   418,   419,   419,   420,   413,   413,   413,   421,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   422,   422,   423,
     413,   424,   413,   425,   413,   426,   413,   427,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   428,   413,
     429,   413,   430,   413,   431,   413,   432,   413,   433,   413,
     434,   413,   435,   413,   436,   413,   437,   413,   438,   413,
     439,   413,   440,   413,   441,   413,   442,   413,   443,   413,
     444,   413,   445,   413,   446,   413,   447,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   448,   448,   448,   413,   413,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   413,   413,
     413,   413,   450,   450,   413,   413,   413,   413,   413,   413,
     413,   413,   451,   452,   452,   452,   453,   453,   454,   454,
     455,   455,   456,   456,   456,   457,   457,   458,   458,   459,
     459,   460,   460,   461,   461,   462,   462,   463,   463,   464,
     464,   465,   465,   465,   466,   466,   466,   466,   467,   467,
     467,   467,   467,   468,   468,   469,   469,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   471,   471,   471,   472,
     473,   473,   473,   474,   474,   475,   475,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   478,   477,   479,   479,
     480,   480,   480,   480,   480,   481,   481,   481,   482,   482,
     483,   483,   484,   484,   484,   485,   485,   486,   486,   487,
     487,   487,   487,   488,   488,   489,   489,   490,   451,   491,
     492,   492,   492,   492,   491,   493,   493,   494,   494,   491,
     451,   495,   495,   496,   496,   496,   451,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   498,   498,   499,   499,   500,   500,
     501,   502,   502,   502,   503,   503,   503,   503,   451,   504,
     451,   505,   505,   506,   506,   507,   507,   507,   507,   507,
     451,   451,   451,   451,   451,   508,   508,   509,   509,   510,
     510,   510,   451,   451,   451,   511,   511,   512,   512,   513,
     513,   514,   514,   515,   515,   516,   516,   517,   517,   451,
     518,   451,   519,   519,   520,   520,   520,   521,   522,   522,
     522,   522,   523,   523,   451,   451,   451,   524,   525,   525,
     525,   526,   526,   526,   526,   526,   526,   527,   527,   528,
     528,   529,   529,   530,   530,   531,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   533,   533,
     533,   451,   534,   534,   535,   536,   535,   537,   537,   538,
     538,   538,   539,   540,   539,   541,   541,   542,   542,   542,
     542,   542,   543,   543,   544,   544,   545,   545,   546,   547,
     546,   548,   548,   548,   548,   534,   549,   549,   549,   549,
     451,   550,   550,   550,   451,   552,   551,   553,   553,   554,
     554,   555,   555,   556,   556,   556,   557,   557,   557,   557,
     558,   558,   559,   559,   559,   559,   559,   559,   559,   559,
     451,   560,   561,   561,   561,   562,   562,   562,   562,   451,
     451,   563,   563,   451,   451,   451,   451,   564,   564,   451,
     565,   565,   565,   565,   565,   451,   566,   566,   451,   567,
     568,   568,   567,   567,   569,   569,   569,   569,   569,   569,
     569,   569,   570,   570,   571,   571,   567,   567,   567,   567,
     572,   572,   572,   573,   573,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   574,   574,   574,   574,   574,   575,
     575,   576,   576,   577,   577,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   579,   579,   580,   574,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     582,   582,   582,   583,   583,   584,   584,   584,   585,   585,
     585,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   587,   587,   588,   589,
     589,   589,   451,   590,   590,   590,   591,   591,   592,   592,
     451,   593,   593,   593,   593,   593,   593,   593,   593,   594,
     594,   595,   595,   596,   596,   596,   596,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   597,   598,   598,   598,
     598,   598,   598,   598,   598,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   451,   600,
     600,   600,   600,   451,   601,   601,   602,   602,   603,   603,
     603,   603,   603,   603,   603,   451,   604,   605,   605,   606,
     606,   606,   451,   607,   607,   451,   451,   451,   608,   609,
     609,   610,   610,   610,   610,   610,   610,   610,   610,   451,
     611,   611,   451,   451,   451,   451,   612,   612,   612,   613,
     613
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
       4,     4,     3,     3,    10,    12,    12,     0,     1,     0,
       6,     0,     7,     0,     6,     0,     7,     0,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     0,     9,
       0,     9,     0,     9,     0,    10,     0,    10,     0,    10,
       0,    10,     0,    10,     0,    10,     0,    10,     0,    12,
       0,    14,     0,    14,     0,    10,     0,    12,     0,    14,
       0,    14,     0,    10,     0,     9,     0,     9,     8,     6,
       6,     8,     4,     7,     6,     4,     4,     4,     6,     8,
       6,     6,     6,     8,     8,     4,     6,     6,     6,     4,
       4,     4,     6,     4,     6,     4,     6,     3,     4,     4,
       4,     3,     3,     6,     4,     4,     4,     4,     4,     4,
       6,     4,     4,     4,     4,     4,     4,     4,     4,     8,
       8,     8,     6,     6,     8,     8,     6,    10,     4,     6,
       8,     4,     4,     4,     6,     8,     3,     6,     6,     6,
       6,     8,     3,     8,    10,     3,     3,     3,     3,     3,
       1,     1,     4,     6,     1,     1,     1,     6,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       3,     5,     4,     5,     3,     4,     3,     4,     1,     1,
       1,     1,     1,     3,    12,    12,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     1,     3,     0,     3,     2,     4,     0,     3,     1,
       3,     2,     4,     2,     0,     2,     4,     4,     0,     2,
       2,     4,     4,     0,     2,     1,     3,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     1,     2,
       2,     1,     0,     1,     3,     1,     1,     3,     4,     5,
       3,     3,     4,     6,     9,     3,     0,     5,     1,     0,
       5,     3,     5,     6,     5,     0,     1,     1,     0,     1,
       1,     1,     2,     2,     0,     0,     1,     2,     4,     6,
       6,     6,     0,     2,     0,     1,     3,     3,     1,     8,
       2,     2,     2,     0,     6,     2,     4,     0,     2,     7,
       1,     4,     6,     0,     1,     1,     1,     8,     9,    10,
       9,    11,    10,    12,    11,    13,     9,    11,    10,    12,
      11,    12,    12,    14,     0,     1,     0,     4,     1,     3,
       3,     1,     3,     1,     4,     4,     4,     6,     1,     3,
       2,     3,     5,     1,     3,     0,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     5,     7,     0,     6,     4,
       5,     6,     1,     1,     1,    20,    21,     1,     1,     6,
       8,     6,     8,     2,     3,     2,     2,     2,     4,     1,
       3,     1,     4,     6,     0,     4,     4,     2,     0,     4,
       7,     4,     1,     3,     1,     1,     1,    10,     0,     2,
       2,     0,     2,     2,     2,     2,     2,     0,     2,     1,
       3,     0,     4,     0,     5,     5,    10,    10,    17,    12,
      19,    11,     6,     8,     6,     6,     6,     9,     6,     5,
       8,     7,     9,     8,    10,     9,     7,     7,     0,     1,
       2,     1,    10,     6,     0,     0,     5,     0,     4,     0,
       3,     4,     2,     0,     5,     3,     5,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     1,     3,     3,     0,
       6,     1,     1,     3,     3,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     0,     7,     0,     3,     1,
       3,     1,     1,     1,     1,     1,     0,     1,     4,     3,
       1,     3,     2,     2,     2,     1,     2,     2,     2,     1,
       1,     9,     0,     2,     2,     3,     5,     5,     7,     5,
       1,     4,     4,     3,     5,     3,     5,     0,     2,     1,
       5,     7,     7,     9,    11,     1,     2,     3,     1,    10,
       0,     4,    11,    18,     0,     4,     3,     5,     5,     9,
      10,     7,     1,     3,     9,     9,     9,     6,    11,     8,
       0,     1,     2,     1,     3,     5,     7,     4,     4,     5,
       5,     4,     6,    11,    13,    13,    15,     4,     6,     1,
       3,     1,     3,     1,     3,     0,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     4,     3,     3,     3,     2,
       3,     4,     4,     1,     3,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     5,     5,     5,     3,     5,     2,
       7,     5,     7,     5,     2,     3,     2,     3,     2,     3,
       5,     4,     5,     7,     8,     8,     7,     6,     6,     5,
       0,     3,     5,     0,     1,     0,     2,     2,     0,     4,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3,     5,     2,
       4,     1,     1,     1,     1,     3,     3,     3,     3,     5,
       5,     1,     1,     1,     4,     3,     1,     3,     3,     0,
       1,     1,     1,     3,     3,     2,     1,     3,     3,     3,
       1,    10,     9,    12,    11,    12,    11,    14,    13,     0,
       1,     1,     3,     2,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     4,
       5,     5,     5,     5,     5,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     3,     5,     1,     4,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,    13,     1,     1,     1,
       1,     1,     1,     3,     5,     4,     4,     1,     5,     0,
       2,     3,     2,     3,     2,     2,     2,     1,     2,     1,
       3,     5,     4,     4,     6,     6,     0,     2,     2,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   630,     0,   363,     0,   527,     0,
       0,     0,     0,     0,   527,     0,   297,     0,   582,     0,
       0,     0,     0,   252,   358,   370,   376,   408,   415,   423,
     424,   432,   433,   434,   420,   421,   422,   449,   451,     0,
     465,   466,   464,   511,   550,   554,   580,   590,   599,   605,
     608,   762,   770,   928,   933,   945,   952,   957,   969,     0,
       0,     0,   457,     0,     0,   597,     0,     0,     0,     0,
       0,     0,     0,   597,   631,     0,     0,   597,     0,     0,
     555,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   533,   443,   447,   445,   446,     0,     0,   533,
       0,     0,   765,   766,     0,     0,     0,     0,   606,     0,
       0,     0,     0,     1,     2,   410,   454,     0,     0,   959,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   632,     0,     0,     0,   597,   557,
     367,     0,   362,   360,   361,     0,   593,     0,   931,     0,
     409,   929,     0,   953,     0,     0,   595,     0,   373,     0,
     970,     0,     0,   529,   530,   531,   532,   528,     0,   444,
       0,   450,     0,     0,     0,     0,   763,   764,     0,     4,
       9,    10,    12,    11,     8,     0,     0,     0,   308,   298,
     248,     0,   249,   250,     0,   299,   300,   301,     0,    13,
     251,   303,   305,   304,   302,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   253,   306,   411,   584,   583,   312,     0,     0,
       0,     0,     0,   313,   315,   329,   316,   329,   607,     0,
       0,     0,     0,     3,     0,     0,   416,   417,     0,     0,
     458,   956,   955,     0,     0,     0,     0,     0,     0,     0,
       0,   973,     0,   972,   943,   939,   938,   942,   940,   944,
     941,   934,     0,   936,     0,     0,   598,   591,     0,     0,
     779,     0,     0,     0,     0,   779,   948,   947,     0,     0,
     592,     0,     0,     0,   959,   427,     0,     0,     0,     0,
       0,   365,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   374,   375,   371,     0,     0,   429,     0,   534,
     448,     0,   534,   769,   768,   767,     0,    77,     0,    32,
      31,    20,     0,     0,     0,     0,     0,    55,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   309,     0,
       0,     0,     0,     0,   352,   326,   312,     0,     0,     0,
       0,     0,   337,   336,   340,   344,   341,     0,     0,   338,
     328,     0,     0,     0,     0,     0,     0,   419,   418,     0,
     454,     0,     0,   452,     0,     0,     0,     0,     0,     0,
     499,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   967,   960,
     935,     0,     0,     0,   742,   751,   710,   710,   710,   710,
     710,   735,   710,   732,     0,   710,   710,   710,   713,   744,
     713,   743,   710,   710,   710,     0,   713,   710,   713,   734,
     741,   733,   752,   753,     0,     0,     0,   736,   600,     0,
       0,     0,     0,     0,     0,   780,   781,     0,     0,     0,
       0,     0,   951,   949,   950,     0,   468,     0,     0,     0,
       0,   958,     0,   425,     0,   759,   559,     0,   561,   562,
       0,   368,     0,   277,     0,   256,   367,   594,   932,   930,
     954,   485,   596,   373,   971,   430,     0,     0,     0,     0,
     589,     0,     0,     5,    51,    78,     0,    48,     0,     0,
     240,     0,     0,     6,     0,    57,     0,     0,     0,   226,
     224,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   216,   217,   218,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
       0,     0,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    23,    24,    22,   246,   244,
      46,     0,    44,   212,    79,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    33,    73,    72,    25,    26,    28,
      14,    15,    16,    17,    18,    19,    27,    30,    29,     0,
     310,   256,     0,   307,   413,   412,   312,     0,     0,     0,
     317,     0,   352,     0,   357,   325,     0,   256,   314,   338,
     338,     0,   331,     0,   339,     0,   321,   320,     0,     0,
       0,     0,     0,   458,     0,     0,     0,     0,     0,     0,
     495,     0,   492,   498,   494,     0,   677,     0,     0,     0,
       0,   496,   974,   975,   968,   966,   962,     0,   964,     0,
     965,   937,   779,   779,     0,   739,   715,   721,   718,   715,
     715,     0,   715,   715,   715,   714,   718,   718,   715,   715,
     715,     0,   718,   715,   718,     0,     0,     0,     0,     0,
       0,     0,     0,   783,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   471,     0,     0,
       0,     0,     0,   427,   760,   761,     0,     0,   675,   627,
     329,   558,     0,   563,   564,   565,   566,   257,     0,   284,
     256,   364,   366,   372,   431,     0,   514,   536,     0,     0,
     513,   514,     0,   514,     0,    89,     0,   238,     0,     0,
       0,     0,    53,     0,     0,     0,     0,   142,     0,     0,
       0,     0,     0,   174,   175,   176,   177,   178,   179,     0,
       0,     0,     0,   155,     0,     0,     0,   159,   160,   161,
     163,     0,     0,   165,     0,   168,   169,   170,     0,     0,
       0,     0,     0,     0,    96,    90,    91,    92,    93,    94,
      95,   145,   146,   147,     0,     0,     0,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     181,   182,   183,   184,   185,   186,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,   198,     0,   201,   202,
     203,     0,    60,     0,    62,     0,     0,     0,     0,     0,
      69,    70,    71,     0,     0,     0,    47,    45,     0,     0,
     247,   245,    81,     0,     0,    40,    36,    38,     0,    58,
     258,     0,     0,   352,   354,   354,   354,     0,   318,   322,
       0,     0,     0,   277,   342,   343,     0,     0,   345,     0,
       0,     0,   439,   441,   455,   456,   453,     0,     0,     0,
       0,     0,     0,   677,   677,     0,   507,   506,   508,   677,
     501,     0,     0,   961,   963,     0,     0,     0,   727,   737,
     729,   731,   756,     0,   730,   726,   725,   748,   747,   724,
     728,   723,     0,   745,   722,   746,     0,     0,     0,   602,
     755,     0,   601,     0,   784,   786,   785,     0,   782,     0,
       0,   401,     0,     0,     0,     0,     0,   403,     0,     0,
       0,     0,     0,   797,     0,   469,   470,     0,   477,     0,
       0,     0,     0,     0,     0,   426,     0,   759,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   633,     0,     0,
     560,   579,     0,     0,   575,     0,     0,     0,     0,   556,
     567,   570,     0,     0,   976,   369,     0,     0,     0,   545,
     535,     0,     0,   514,   552,   514,   553,    52,   242,     0,
     241,     0,     0,     0,    56,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,   100,   102,     0,     0,     0,     0,     0,   134,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    59,     0,     0,
       0,     0,     0,     0,   267,   256,   414,   319,     0,     0,
       0,     0,   327,     0,   585,     0,     0,   284,   334,   332,
       0,     0,   330,   346,     0,   437,   438,     0,     0,     0,
       0,   462,   461,   459,     0,     0,     0,     0,   508,   508,
     677,     0,     0,   689,     0,   694,     0,     0,     0,     0,
       0,   509,   698,   679,     0,   696,   503,   508,   493,   500,
       0,     0,   711,     0,   716,   717,     0,     0,   718,     0,
     718,   718,   740,   754,     0,     0,     0,   791,   794,   793,
     795,   792,   787,   788,   790,   796,   789,     0,     0,     0,
       0,     0,     0,     0,   377,     0,     0,     0,     0,     0,
       0,   797,     0,     0,   472,   476,   474,   473,   475,     0,
     481,     0,     0,     0,     0,     0,     0,     0,     0,   675,
     629,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     614,   675,     0,   758,   574,   572,   573,   576,   577,   578,
       0,     0,     0,   262,   262,   278,   279,   285,     0,   359,
     547,   546,     0,     0,   537,   542,   541,     0,   539,   517,
     551,   239,   243,     0,    54,     0,   140,   139,     0,   144,
       0,     0,   227,   228,   173,   151,   152,     0,     0,   156,
     157,   158,   162,   164,   166,   207,   208,   209,   210,     0,
      97,   106,   108,   104,   110,   112,   114,   148,     0,     0,
     150,   223,   269,   269,   269,   116,     0,     0,   124,     0,
       0,   132,   269,   269,   180,     0,     0,     0,   192,   193,
       0,     0,   196,     0,   199,     0,   204,     0,    61,    63,
      65,    66,    67,    68,     0,     0,     0,    80,    84,     0,
       0,    50,     0,     0,    42,     0,    43,    35,     0,     0,
     277,   258,   353,     0,     0,     0,   323,     0,     0,     0,
     976,   347,     0,   333,     0,     0,   440,   442,     0,     0,
       0,     0,     0,   673,     0,   497,   505,   508,   678,   510,
       0,     0,     0,     0,     0,     0,   699,   680,   681,   683,
     682,   687,     0,     0,     0,     0,   697,   695,   502,     0,
       0,   797,     0,     0,   720,   749,   757,   750,   738,     0,
     603,   378,     0,   797,     0,   394,     0,     0,     0,     0,
     402,     0,   386,     0,     0,     0,     0,     0,   805,   806,
     807,   809,   808,   927,   812,   813,   814,   920,   811,   810,
     915,   916,   917,   918,   919,   902,   815,   856,   847,   852,
     797,   898,   888,   859,   891,   834,   841,   838,   825,   881,
     870,   797,   878,   896,   832,   833,   903,   819,   826,   874,
     890,   895,   892,   853,   831,   900,   772,   830,   850,   843,
     840,   797,   889,   879,   820,   869,   908,   846,   860,   842,
     861,   845,   884,   867,   828,   797,   817,   901,   823,   885,
     837,   864,   876,   836,   797,   865,   862,   863,   871,   883,
     873,   839,   844,   868,   857,   858,   875,   907,   880,   849,
     882,   835,   909,   866,   854,   848,   855,   851,   894,   822,
     816,   887,   893,   827,   829,   818,   899,   877,   897,   872,
     886,   824,   821,   905,   797,   906,   904,   922,   923,   924,
     925,   926,   913,   914,   910,   911,   912,   921,   798,     0,
     479,   478,     0,   483,     0,   380,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,     0,     0,     0,     0,   610,   626,   634,
     677,     0,   569,   571,   263,   264,     0,   281,   283,     0,
       0,     0,   979,   977,   978,   515,     0,   538,     0,     0,
       0,   976,     0,     0,     0,   143,   230,   231,   232,   233,
     236,   235,   237,   229,   234,     0,     0,     0,   269,   269,
     269,   269,   269,   269,     0,     0,     0,   273,   273,   273,
     269,     0,     0,     0,   269,     0,     0,     0,   269,   273,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,    86,    41,    37,    39,   262,   265,   268,
     284,   267,   355,     0,     0,     0,     0,   586,   587,     0,
     581,     0,     0,     0,   463,     0,   486,   651,     0,   649,
       0,   487,     0,   504,     0,     0,     0,     0,     0,     0,
     701,     0,     0,     0,     0,     0,     0,   797,     0,   712,
     719,     0,   797,     0,   382,   395,     0,   404,   405,   406,
       0,     0,     0,     0,     0,   379,   771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,     0,
     388,     0,     0,     0,   428,     0,   614,     0,     0,     0,
       0,   641,     0,     0,     0,   638,     0,   637,     0,   647,
       0,     0,     0,     0,     0,   609,   676,   568,   262,   280,
     287,   286,     0,     0,   549,   548,   544,   543,     0,   519,
     512,     7,   141,   138,   153,   154,   211,   273,   273,   273,
     273,   273,   273,   213,     0,   149,     0,     0,     0,     0,
       0,   273,   118,     0,     0,   273,   126,     0,     0,   273,
       0,     0,   189,   190,   191,   194,   195,     0,   200,   205,
       0,     0,     0,   260,     0,     0,   259,   288,   277,   351,
       0,   350,   349,     0,     0,   348,     0,     0,   460,     0,
       0,     0,   491,     0,   674,   691,     0,   709,   693,     0,
       0,     0,   702,   700,   684,   685,   686,   688,     0,   797,
       0,   774,   604,     0,   776,   396,     0,   390,   387,     0,
     394,   799,     0,     0,     0,     0,     0,   797,   480,     0,
       0,   384,     0,     0,     0,   381,     0,   612,   628,     0,
       0,     0,     0,     0,   639,   640,   296,   635,   616,     0,
       0,     0,     0,     0,   282,   980,     0,   516,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   271,   270,
       0,    99,   101,   103,     0,   269,     0,     0,     0,   269,
       0,     0,     0,   135,   137,     0,     0,     0,     0,   266,
     262,     0,   293,   284,   356,   324,   588,     0,     0,   489,
       0,   652,   650,     0,   707,   708,     0,     0,     0,   797,
       0,   773,   775,     0,   392,   407,   383,     0,   804,   803,
     800,   802,   801,     0,   482,     0,   391,   389,     0,     0,
     642,     0,     0,   648,     0,   615,     0,     0,     0,     0,
       0,     0,     0,     0,   540,     0,     0,   518,   107,   109,
     105,   111,   113,   115,   214,     0,   262,   274,   117,   273,
     120,   122,   125,   273,   128,   130,   133,   197,    74,     0,
       0,   261,   290,   289,     0,   254,   255,     0,     0,     0,
     690,   692,   706,   703,     0,   778,     0,   396,   946,     0,
     385,     0,     0,   636,     0,   611,   617,   618,     0,     0,
       0,   525,     0,   520,     0,   522,   523,   272,   275,     0,
       0,   269,   269,     0,   269,   269,     0,     0,     0,     0,
     294,     0,     0,     0,   704,   705,   777,     0,     0,   398,
     393,   484,     0,     0,     0,     0,     0,     0,     0,     0,
     521,     0,   262,   119,   273,   273,   127,   273,   273,    75,
      76,   292,   291,     0,     0,   653,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,   621,   526,     0,   276,
       0,     0,     0,     0,     0,     0,   655,     0,   400,   399,
       0,     0,     0,     0,   655,     0,     0,   524,   121,   123,
     129,   131,     0,     0,   488,   654,     0,     0,     0,     0,
     643,     0,     0,   622,   619,     0,     0,     0,   669,     0,
       0,   613,     0,   655,   655,     0,     0,   620,     0,     0,
       0,   670,   490,     0,   666,   668,   667,     0,     0,     0,
     645,   644,     0,   623,     0,     0,   671,   672,   656,   664,
     658,     0,   660,   665,   662,     0,   655,     0,   435,     0,
     659,   657,   663,   661,   646,     0,   436,     0,     0,     0,
       0,     0,     0,   624,   625
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,   714,  1138,  1368,  1370,  1366,   715,  1023,   726,
    1369,   716,  1128,  1362,  1129,  1363,   727,  1572,  1573,  1574,
    1900,  1898,  1899,  1901,  1902,  1903,  1910,  2195,  2331,  2332,
    1914,  2199,  2334,  2335,  1918,  1582,  1583,   733,  1301,   424,
      22,    23,   693,  1374,  1938,  1867,  2096,  1620,  1907,  2189,
    2068,  2277,   999,  1515,  1516,  1274,  2212,  2295,  1853,   104,
     312,   313,   558,   322,   323,   324,   325,   881,   581,   326,
     578,   895,   579,   891,  1392,  1393,   880,  1379,  1943,   327,
      24,    81,   145,   391,    25,   404,    26,  1986,  2234,  2348,
    2349,  1226,  1227,    27,    28,   875,   115,    29,   683,    30,
      31,  1397,    32,    33,    34,    35,    36,    37,    38,   340,
      39,   593,  1402,    40,   977,  1238,  1480,  1831,  1833,  2007,
      41,    42,  1426,    43,  1279,  2043,  1881,  2180,  2267,  2361,
    2177,    92,   168,   709,  1008,  1283,  1879,  1527,  1006,    44,
      45,   139,   389,   687,   690,   996,  1269,  1270,  1271,    46,
     107,   887,    47,   123,    48,    49,    50,  2035,  1857,  2422,
    2423,    79,  1256,  1257,  1960,  1958,  2376,  2414,  1644,  1258,
    1178,   935,   946,  1188,  1189,   658,  1193,   989,   990,    51,
     102,   103,    52,   664,   665,   666,  1457,  1472,  1828,    53,
      54,   362,   363,    55,   378,   675,    56,    57,   353,   619,
      58,  1519,  1874
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1857
static const yytype_int16 yypact[] =
{
   13229,   -80,   -62,   205,   613,   215, -1857,   454, -1857,   270,
     548,   537,   260,   304, -1857,    34, -1857,   309,   600,   127,
     409,   607,   178, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,   618,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,   657,
     661,   665, -1857,   207,   456,   520,   683,   533,   690,    76,
     724,   727,   734,   520, -1857,   461,   590,   520,   344,   495,
   -1857,   526,    70,   121,   750,   140,   143,   755,   146,   148,
     159,   368,   523,   615,   353, -1857, -1857,   793,   799,   523,
     681,   474,   363, -1857,  6880,   801,   602,    72, -1857,   803,
    -121,   641,   648, -1857, 13229,    78,  -137,    79,    47,    23,
      19,   396,   538,   836,   737,   838,   411,   654,   163,   577,
     457,   141,   676,   900, -1857,   142,   910,   226,   520,   517,
     472,   912, -1857, -1857, -1857,  -107, -1857,   637, -1857,   644,
   -1857, -1857,   664, -1857,   668,   754, -1857,   687,    85,   692,
   -1857,   721,   317, -1857, -1857, -1857, -1857, -1857,   952, -1857,
    1000, -1857,   765,  1013, 10800, 10800, -1857, -1857,  1015,   139,
   -1857, -1857, -1857, -1857,  1017, 10800, 10800, 10800, -1857, -1857,
   -1857,  8056, -1857, -1857,   626, -1857, -1857, -1857,   642, -1857,
   -1857, -1857, -1857, -1857, -1857,  1005,   650,   662,   670,   688,
     703,   708,   710,   712,   720,   738,   745,   782,   788,   798,
     816,   825,   843,   853,   867,   879,   914,   922,   940,   942,
     950,   968,   980,   990,  1008,  1027,  1048,  1064,  1069,  1073,
    1074,  1078,  1079,  1082,  1084,  1086,  1088,  1089,  1090,  1091,
    1092,  1093,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,
    1105, -1857, -1857,  1106,  1107,  1112,  1113,  1115,  1116,  1119,
    1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,  1129,
    1130,  1131,  1133,  1135,  1136,  1137,  1138,  1139,  1140,  1142,
    1143,  1144,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1154,
    1156,  1157,  1158,  1159,  1160,  1161,  1163,  1164,  1166,  1168,
   10800, 13746,  -102, -1857,   646,   609,   635,    49,  1190,  1174,
    1191,    52,  -171,   521, -1857,  1267, -1857,  1267, -1857,  1444,
    1012,  1475,  1537, -1857,  1540,  1547, -1857, -1857,  1563,  1606,
     -28, -1857, -1857,   471,   511,    92,   126,   408,   531,   507,
    1541,  1334,  1368,   108, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857,   288, -1857,  1614,  1616, -1857, -1857, 13390,  1423,
      51,  1620,  1432,  1349,  1628,    51, -1857, -1857,    27,  1629,
   -1857,  1437,   319,  1354, -1857,  1359,  1356,  1636,  1637,    -9,
    1613, -1857,   258,  -138,    72,  1639,  1640,  1641,  1642,  1643,
    1644,  1648, -1857, -1857, -1857,  1650,  1651,  1581,  1375,  -149,
   -1857,  1659,  -122, 13902, 13902, -1857,  1660, 10800, 10800,  1861,
    1861,  1633, 10800, 13298,    46,  1662,  1667,  1264, -1857, 10800,
    7272, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
    1270, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
   10800, 10800, 10800, 10800, 10800, 10800,  1271, 10800, 10800, 10800,
    1272, 10800, 10800, 10800, 10800, 10800, 10800,  8448, 10800, 10800,
   10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,  1274,  1275,
    1276,  1278,  1279, 10800, 10800,  1280,  1281,  1282, 10800, 10800,
    1687,  1286,  1288, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
   10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
   10800, 10800, 10800, 10800, 10800,  1289, 10800, 10800, 10800,  1290,
   10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
    9696, -1857, 10800, 10800, 10800, 10800, 10800,    59,  1292,   784,
   10800,  7664, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
   10800, 10800, 10800, 10800, 10800, 10800, 10800,  1697, -1857,    72,
    1698, 10800,  1699,  1700,   347, -1857,   508, 10800,  1300,   384,
    1705,    72, -1857, -1857, -1857,    -1, -1857,    72,  1546,  1514,
   -1857,  1723,  1725,  1460,  1730,  1340,  1341, -1857, -1857,  1731,
    1464,  1702,  1703, -1857,  1746,  1749,  1756,  1762,  1766,  1767,
   -1857,  1768,  1770,  1773,  1775, 13390,  1777,  1538,  1779,  1781,
    1782,  1784,  1794,  1425,  1797,    31,   536,  1805, -1857, -1857,
   -1857,   188,  1406,  1408, -1857, -1857,  1413,  1413,  1413,  1413,
    1413, -1857,  1413, -1857,  1414,  1413,  1413,  1413,  1758, -1857,
    1758, -1857,  1413,  1413,  1413,  1417,  1758,  1413,  1758, -1857,
   -1857, -1857, -1857, -1857,  1418,  1419,  1420, -1857,   503,  1824,
   13390,  1827,  1828,  1829,  1426,  1427, -1857,  -116,  1831,  1833,
    1645,  1433, -1857, -1857, -1857,  1646,  1790,  1841,  1649,  1564,
    1845,   108,  1446, -1857,  1850,   -95, -1857,   414, -1857, -1857,
      42, -1857, 10800,  1656,    72,  -184,   472, -1857, -1857, -1857,
   -1857, -1857, -1857,    85, -1857, -1857,  1852,  1854,  1858,   -66,
   -1857,  1854,   -54, -1857,  2282, -1857,  1455, 13902,  2238,   383,
   -1857, 10800, 10800, -1857,  1458, -1857, 10800,  1625,   621, -1857,
   -1857, -1857,  9728,  8840,  2643,  3004,  3365,  9772,  9808,  9842,
   10039, 10126, 10162, -1857,  3675,  3726,  4036,  4087, 10206,  4397,
    4448,  4758, 10240, 10429, 10480,   868,  4809, 10516,  5119, -1857,
   10552, 10596, 10630, -1857, 13794,  5170,  5480,  5531,  5841,  9452,
    1463, 10819, 10880, 10914, 10942, 10986, 11020, 11189, 11217,  5892,
    6202,  6253, -1857, -1857, -1857, -1857, -1857, 11244,  6563,  1517,
    1521,  1526,  1059,  1109,  1470,  1528,  1548,  6608, 11278, 11312,
   11340, 11376, 11410, 11437, 11464, 11491,  6981,  7009,  7056,  7282,
    7344,  7372,  7400,  7456,  1187, 11518, 11545, 11579,  7489, -1857,
    1214, 11607,  7745, -1857,  7773,  7800,  7888,  8066, 11634, 11668,
   11702,  8093,  8136,  8164, -1857,  7108,  1134,  7694,  7847,  7847,
   -1857,    50, -1857, -1857,  1655, 10800, 10800,  1493, 10800, 13836,
    1494,  1496,  1497, 10800,  1556,  1238,  1238,  1072,  1351,   933,
     814,   814,   780,   780,   780,   780,   746,  1633,  1633,    83,
   -1857,  -184,  1769, -1857, -1857,  1498,   508,  1740,  1743,  1744,
   -1857,  1625,   347, 11730, -1857, -1857,    29,   195,   521,  1514,
    1514,  1747,  1712,    72, -1857,  1748, -1857, -1857,  1506,  1647,
    1911,  1912,   781,   -28,  1720,  1722,    10, 13390, 13390,  1922,
   -1857,  1704, -1857, -1857, -1857,  1706,  1891, 13390,  1926,  1685,
    1686, -1857, -1857, -1857, -1857, -1857, -1857,  1927, -1857,  1928,
   -1857, -1857,    51,    51,  1929, -1857, -1857, -1857, -1857, -1857,
   -1857,  1931, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857,  1931, -1857, -1857, -1857,  1932,  1933,  1934,  1752,  1527,
    1534, 10800,  1535,  1891, 13390, 13390, 13390,  1729,    51,   203,
     161,  -109,  1751,  1943,   672,  1944,   606,  1809,  -106,  1947,
    1949,  1757,  1558,  1359, -1857, -1857,  1859,  1953,   549, -1857,
    1267, -1857,  1954, -1857, -1857, -1857,   417, 13902,  1895,  1780,
    -184, -1857, -1857, -1857, -1857,  1941,  -146, -1857,   428,  1562,
   -1857,  -146,  1562,  1771, 10800, -1857, 10800, -1857, 10800, 13687,
   13396,  1881,  8191,  1565,  1566, 10800, 10800, -1857, 10800, 13660,
    1817,  1817, 10800, -1857, -1857, -1857, -1857, -1857, -1857, 10800,
   10800, 10800, 10800, -1857, 10800, 10800, 10800, -1857, -1857, -1857,
   -1857, 10800, 10800, -1857, 10800, -1857, -1857, -1857, 13390, 13390,
   10800, 10800, 10800,  1976, -1857,  1631,  1632,  1634,  1657,  1664,
    1665, -1857, -1857, -1857, 10800, 10800, 10800, -1857, 10800,  1584,
    1586,  1587,  1673,  1989,  1674,  1990,  1676,  1590,  1591, 10800,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, 10800, 10800,
   10800, 10800, 10800, 10800, 10800, 10800, -1857, 10800, -1857, -1857,
   -1857, 10800, -1857, 10800, -1857, 10800, 10800, 10800, 10800, 10800,
   -1857, -1857, -1857, 10800, 10800, 10800, -1857, -1857, 10800,  1625,
    7847,  7847,  1760, 13869, 10800, -1857, 10800, 10800,  1625, -1857,
    1857,    72,  2009,   347,  1890,  1890,  1890,  1624, -1857,   519,
   10800,  2031,  2035,  1656, -1857, -1857,    72, 10800,   330,    72,
      56,  1638,  1653,  1860, -1857, -1857, -1857,  2037,  2037,  1652,
    1878,  1879,  1658,  1891,  1891, 13390, -1857, -1857,  1520,  1891,
   -1857,  2042,  2043, -1857, -1857,  1654,  1661,   430,   291,   771,
     291,   291, -1857,   448,   291,   291,   291,   771,   771,   291,
     291,   291,   460,   771,   291,   771,  1663,  1672,  1675,  1969,
   -1857, 10800, 13902,   161,  1891,  1891,  1891,   440, -1857,  1668,
    1681, -1857,  1683,  1688,  1691,  1696,   498, -1857,  1783,   161,
    2045,   264,  1992, -1857,  1909, -1857, -1857,    24,  1808,  1786,
     161,   265,  1853,  2054,  2039, -1857,  2059,   -93,  2060,  1707,
    1905,   569,  1714,  1721,  1907,  1724,   501, -1857,  2077,  1625,
   -1857, -1857,  2088,   -11,  2097,  2100,  2101,  1726,   627, -1857,
    1718, -1857,   580, 10800,  1894, -1857,  9232,  1946,  2105, -1857,
   -1857,  2125,  9624,  -141, -1857,  -141, -1857, -1857, 13902, 13714,
   -1857, 10800,  1727, 10800, -1857, -1857,  9649,  1283, 11766, 10800,
   10800,  1728,  1732, 11800, 11827, 11854,  8232,  8279, 11881, 11908,
   11935, 11969, 11997, 12024,     4,     8, 12058, 12092,  8535,  1735,
    1737,  1738,  1739,  1741,  1742,  1753,  1311,  8564, 12120, 12156,
   -1857, -1857, -1857,  1759,   509,  1761,   512,  1765, -1857, -1857,
   12190,  8591,  8632,  8670, 12217, 12244,  8850,  8877,  1379,  2592,
    2953, 12271, 12298, 12325, 12359, 12387, 12414,  8926,  8982,  9061,
    1755,  1774, 10800,  1625, 10800,  1396,  1625, 13902,  1625,  1776,
    1625,  1778,  1785,  2066,  1983,  -184, -1857, -1857,  1971,  1787,
    1788,  1789, -1857,  2134, 13902,  2126,    30,  1780, -1857, 13902,
   10800,  1791, -1857, -1857,   330, -1857, -1857,  1772,    56,  2146,
    2158, -1857,  1793,  -188, 10800,  1796,  1798,  2161,  1520,  1520,
    1891,  1980,  2172,  1799,  1800,  1801,  2130,  2181,  1803,  2182,
     131, -1857, -1857, -1857,  2023,  2024, -1857,  1520, -1857, -1857,
    1977,   674, -1857,  2184, -1857, -1857,  1951,  2192, -1857,  2199,
   -1857, -1857, -1857, -1857,  1807, 12448,   524, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857,   709,   161,  2211,
    2212,  2213,  2215,  2219, -1857,  2220,  1818,   546,  1820,   214,
     161, -1857,  1598,  2109, -1857, -1857, -1857, -1857, -1857,  2225,
    1965,  1826,   568,  1970,   161,  2234,   272,  2235,  2102,   549,
   -1857,    14, 10800,  1835,  1837,  1838,  2242,  2242,  1840,  2161,
       0,   549, 13390, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
     627,   570,   627,    71,   116,  1839, -1857,  1339,   574, -1857,
   -1857, 13902,  2015,  2255, -1857, -1857, 13902,   572, -1857,  2079,
   -1857, -1857, 13902,  2273, -1857, 10800, -1857, -1857, 10800, -1857,
   12482, 13335, -1857, -1857, -1857, -1857, -1857, 10800, 10800, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, 10800,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, 10800, 10800,
   -1857, -1857,  1935,  1935,  1935, -1857,  1930,   906, -1857,  1937,
     929, -1857,  1935,  1935, -1857, 10800, 10800, 10800, -1857, -1857,
   10800, 10800, -1857, 10800, -1857, 10800, -1857, 10800, -1857, -1857,
   -1857, -1857, -1857, -1857, 10800, 10800, 10800, -1857, -1857,  1871,
    1872,  1396,  1882,  1883, -1857,  1884, -1857, -1857, 10800, 10800,
    1656,  1857, -1857,  2285,  2285,  2285,  1893, 10800, 10800,  2314,
    1894, 13902,  2242, -1857,    56,  1913, -1857, -1857,  2316,  2315,
   12510,  2319,  2326, -1857,   579, -1857, -1857,  1520, -1857, -1857,
    2328, 10800,  2329,  2280,    75, 10800, -1857, -1857, -1857, -1857,
   -1857, -1857,  1936,  1938,  1939, 10800, -1857, -1857, -1857,   440,
    2275, -1857,  1945,  2335, -1857,   771, -1857,   771,   771, 10800,
   -1857, -1857,  2281, -1857,   581,  2340,  1948,  1950,  1952,  1960,
   -1857,   161, -1857,   161,  1955,  1956,   583,  1959, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,  2136,
   -1857,  1964,  1967,  2074,   161, -1857,  1972,   585,  1978,  2086,
     161,  1968,  2085,   610,  1979,  2194,  2223,  1985, 12546,  2319,
    2242,  2242, -1857,   630,   632,  2326,   653,    26, -1857, -1857,
    1891,   656, -1857, -1857, -1857, -1857,  2373, -1857, -1857,   580,
   10800, 10800, -1857, -1857,  1984, -1857, 10016, -1857, 10408,  1993,
    2289,  1894,  1988, 12580, 12607, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, 12634, 12661, 12688,  1935,  1935,
    1935,  1935,  1935,  1935,  3314, 12715,  2337,  2203,  2203,  2203,
    1935,  1997,  1998,  1999,  1935,  2001,  2002,  2003,  1935,  2203,
    2203, 12749, 12777, 12804, 12838, 12872,  9250, 12900, 12936,  9328,
    9355,  9408, -1857, -1857, -1857, -1857, -1857, 13505,  -136, 13902,
    1780,  1983, -1857,   659,   704,   766,  2401, 13902, 13902,  2388,
   -1857,   768,  2004,    56, -1857,  2368,  2395, -1857,   772, -1857,
     774, -1857,  2411, -1857,   776, 12970,   778,  2011,  2012,  2251,
   -1857, 12997,  2013,  2016,  2017, 13024,   714, -1857,  2320, -1857,
   -1857, 13051, -1857,  2681, -1857, -1857,  2018, -1857, -1857, -1857,
    2416,   783,   785,   161,  2419, -1857, -1857,  3042,  3403,  3764,
    4125,  4486,  4847,  2369,  2427, 10800,  2353, -1857,   844,   161,
   -1857,   161,  2026,   846, -1857,  2299,     0, 10800,  2034,  2044,
    2161, -1857,   848,   850,   870, -1857,  2438, -1857,   872, -1857,
     599,  2047,  2440,  2385,  2392, -1857,  1750, -1857,   116, -1857,
   13902, 13902,  2455,  2460, -1857, 13902, -1857, 13902,  9624,  2058,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857,  2203,  2203,  2203,
    2203,  2203,  2203, -1857, 10800, -1857,  2462,  2403,  2062,  2064,
    2067,  2203, -1857,  2117,  2131,  2203, -1857,  2137,  2138,  2203,
    2082,  2083, -1857, -1857, -1857, -1857, -1857, 10800, -1857, -1857,
    2487,  2488,  2489, -1857,  2284, 10800, -1857,  2355,  1656, -1857,
    2493, -1857, -1857,  2093, 10800, -1857,    56,  2094, -1857,  2236,
    2296,  2501, -1857,  2503, -1857, -1857,  2502,   924, -1857,  2504,
   10800, 10800, -1857, -1857, -1857, -1857, -1857, -1857,  2448, -1857,
    5208, -1857, -1857,  5569, -1857,  2243,  2104, -1857, -1857,   874,
    2340, -1857,  2442,  2393,  2367,  2359,  2250, -1857, -1857, 13078,
    2122, -1857,   876,   880,   161, -1857,  2128,    36, -1857, 13105,
    2319,  2326,   882,  2325, -1857, -1857, -1857, -1857, -1857,  2531,
    2538,    18,   296,  2338, -1857, -1857,  2523,  2139,   884,  2541,
    2444,  2141,  2142,  2143,  2144,  2145,  2147, 13139, -1857,  2148,
    2543, -1857, -1857, -1857,  2150,  1935,  2149,  2152,  2155,  1935,
    2157,  2159,  2160, -1857, -1857, 13167,  2163,  2156,  2166, -1857,
   13505,   -56,  2394,  1780, -1857, -1857, 13902,  2167,    56, -1857,
    2563, -1857, -1857,  2169, -1857, -1857,  2170, 13194, 13228, -1857,
    5930, -1857, -1857,  2162, -1857, -1857, -1857,  2176, -1857, -1857,
   -1857, -1857, -1857,  6291, -1857, 10800, -1857, -1857,  1028,  2574,
   -1857,  1030,  1032, -1857,  2581, -1857,  2178,  2584,  2585,  2183,
    2186,  2187, 10800,  2595, -1857,  1034,   -18, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857,  2596,   116,  2201, -1857,  2203,
   -1857, -1857, -1857,  2203, -1857, -1857, -1857, -1857, -1857,  2623,
    2625, -1857,  2399,  2400,  2242, -1857, -1857,    56,  2224,  2227,
   -1857, -1857,   977, -1857,  6652, -1857,  2597,  2243, -1857, 13262,
   -1857,  2228,  2429, -1857,  1040, -1857, -1857, -1857,  2631,  2634,
    2635, 13902,  2619, -1857,  2637, -1857, -1857, -1857, -1857,  2638,
    2240,  1935,  1935,  2241,  1935,  1935,  2244,  2245,  2469,  2470,
    2252,  2270,    56,  2677, -1857, -1857, -1857,  2661,  1041, -1857,
   -1857, -1857,  2437,  2680,  2689,  2677,  2287,  2288,  2293, 10800,
   -1857,  2456,   116, -1857,  2203,  2203, -1857,  2203,  2203, -1857,
   -1857, -1857, -1857,    56,  2294, -1857,  1043,  2698, -1857,  2597,
    2298,  1047,  2300,  1049,  2306,  2476, -1857, 13902,  2460, -1857,
    2307,  2308,  2309,  2310,  2305,    56, -1857,  2715, -1857, -1857,
    2714,  2717,  2677,  2677, -1857,  2494,  2718,  2139, -1857, -1857,
   -1857, -1857,    56,  2321,   365, -1857,  2327,  2330,  1051,  1053,
     370,  2730,  1055, -1857, -1857,  2331,    56,   -34,  2586,   366,
     348, -1857,  2677, -1857, -1857,  2641,  2474, -1857,  2494,    56,
    2344, -1857, -1857,   435, -1857, -1857, -1857,   398,   469,  1061,
     370,   370,  2572, -1857,  2341,    56, -1857, -1857, -1857, -1857,
   -1857,    60, -1857, -1857, -1857,    94, -1857,  2506, -1857,  2346,
   -1857, -1857, -1857, -1857,   370,    58, -1857,  2564,  2565,  2569,
    2573,  2760,  2761, -1857, -1857
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1857,  2653,  -104, -1857, -1857, -1857, -1857,  -986,  1476, -1857,
    1635, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1857,  1745,  2345,
   -1857,  -253,  -683,  1153, -1857, -1510, -1857,   829, -1405, -1857,
   -1340, -1857, -1152, -1857,   902, -1382, -1857, -1857, -1476, -1857,
   -1857,  2214,  -303,  -308,  2202,  -570, -1857, -1857,  -325, -1857,
   -1857,   582, -1857, -1857, -1857,  1384,  -862,   328,  -148, -1857,
   -1857, -1857,  2639,  2087, -1857,  2076, -1857,   645,   477, -1857,
     402, -1210, -1857, -1857, -1857, -1857, -1857, -1857,  1810, -1857,
   -1857, -1390, -1857, -1857, -1857, -1857, -1857, -1857, -1857,  2196,
   -1857,  1887,  1623, -1857, -1857, -1857, -1857, -1857, -1857, -1857,
   -1857, -1857, -1361, -1857,  -978, -1857, -1857, -1857, -1857, -1857,
     404,   168,  2697,  2389, -1857,  1792, -1857,   761,  2091, -1857,
   -1857, -1857, -1857, -1857, -1857, -1857, -1857, -1227,  1299, -1857,
   -1857, -1857, -1857,   112, -1857, -1857, -1857, -1857,   800, -1857,
     376, -1857,  1330,  1323, -1837, -1804, -1856, -1661, -1484, -1857,
   -1163,   415,   147,   -78,  -915,  -447,  1874, -1241, -1857, -1857,
   -1857,  2648, -1857,  -358, -1857,  1862,  1173, -1462, -1857, -1857,
   -1857, -1857,  2206, -1857, -1857, -1857, -1857, -1857,  2451, -1857,
   -1857, -1587, -1857
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -760
static const yytype_int16 yytable[] =
{
     311,  1387,   582,  1446,  1868,  1630,  1490,   892,  1635,  1697,
    1408,  1409,  1001,   569,   564,  1856,  1427,   671,  2028,  1467,
    1148,  1854,   354,   355,   356,   357,   358,   359,  1287,   394,
    1482,  1197,  1198,  1284,   559,  1286,   926,  1203,   329,  1205,
     959,  1511,   100,  1950,   959,  2022,   993,  1645,  1646,  1150,
    1628,  -759,   531,  1277,   660,   317,  1126,   560,  1277,   984,
    1395,   984,  2477,  2441,  1474,   840,  1668,   661,   568,   570,
     413,   414,  2325,   146,  2030,   317,  1505,   841,   351,   127,
     591,   419,   420,   421,  2030,   343,   695,   423,  1169,  1639,
     692,   707,  1844,   532,   533,   534,   535,   536,   537,   538,
     557,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   711,   556,
    1864,   985,   344,   985,   148,  2257,   613,   688,   694,   600,
     108,  1475,   334,   335,   672,  1657,  1658,  1659,  1660,    59,
     338,  2094,  1360,   151,  1170,   381,   153,   345,  1845,   156,
     969,   158,   336,  1968,   984,   346,  1951,  1228,   916,   402,
    1239,   128,   160,   598,  1221,  1864,   372,   347,  1908,  1909,
     720,   721,    60,  2470,  2292,    16,   889,  1919,  1920,   341,
     376,  1476,    99,  1865,   673,   133,   106,    16,  1140,   136,
      62,   354,   355,   356,   357,   358,   359,   601,  2031,   342,
     377,   662,  2293,  1661,  1153,  1009,   530,  2472,    63,  1978,
     602,  1171,   360,   963,   890,  1846,   985,  1012,    80,   318,
    1638,  1983,   109,  2032,   571,   319,   147,   382,  1865,   385,
     592,   352,   129,  2032,   348,  2442,   689,   571,  1506,   318,
    2326,  -759,  2478,  1127,  1952,   319,   663,  1647,  1684,  1396,
     387,   871,   842,  2471,  2033,   349,   986,   708,  1997,  1858,
    1696,   101,  1278,   882,  2033,  1477,  2258,  1528,   339,  1998,
     395,  1172,  2095,    93,  1837,  1847,  1969,   149,   994,   995,
     330,  1377,  1478,  1861,   708,   674,  1963,  2473,   337,  1999,
     970,    61,   614,    16,  2050,   403,   152,  1229,   383,   154,
    1240,   395,   157,  2000,   159,  1529,   561,  1530,   927,   599,
     987,   988,  2001,  1489,   717,   161,   350,  1275,   718,   373,
     407,   722,   678,  1158,  2252,   728,   732,   734,   735,   736,
     737,   738,   739,   740,   741,   742,  1970,   744,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   755,   756,
     757,   758,  2002,   760,   761,   762,  2251,   764,   765,   766,
     767,   768,   769,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,  2023,  2024,  1609,  2034,   843,   787,
     788,   360,   386,  2427,   792,   793,  1000,  2034,  2435,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,   815,   816,   817,
     818,  1555,   820,   821,   822,  1556,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   361,  2093,   835,   836,
     837,   838,   839,   320,  1151,  1629,   849,   854,   855,   856,
     857,   858,   859,   860,   861,   862,   863,   864,   865,   866,
     867,   868,   869,   320,   563,  2447,  1010,   311,   321,  1013,
    1173,  1174,  2428,   883,  1662,  1663,  1664,  2428,  1940,   692,
    1179,  1219,  2458,   408,  1024,   679,  1866,   176,   321,   603,
     877,  1991,  1694,  1992,   615,   616,   617,   618,  1222,  1223,
    1224,  1225,  1139,  2057,  2058,  2059,  2060,  2061,  2062,  2383,
    2259,   878,  1447,  2444,  1261,  2071,  1448,  1017,  1018,  2075,
     607,   531,    97,  2079,   596,  2130,  1262,  1214,  1215,  1216,
    2133,   958,  -329,  1675,  -367,  1677,  1678,  1390,  2174,   140,
    1469,  1483,   692,  2456,   605,   364,  2162,  1665,  1839,   959,
      95,   928,   594,  2462,   416,   417,  2418,  2419,  2429,    82,
    1434,    94,  1263,  2429,  1449,   595,    98,  1450,  2097,   557,
    1264,   105,  2430,  2107,  2260,    96,  2445,  2430,  2069,  2070,
     580,  1435,  1451,  1143,  1185,  1186,  2449,  1872,   608,  2080,
    2081,   960,   114,  1513,  2457,  1514,  1388,   177,   997,  1394,
    2459,   609,  1452,    83,  1220,   597,  1391,   572,   365,   929,
    1453,  2446,  1873,  1152,  2168,  1695,  2448,   113,  2460,    84,
    1265,  1314,  1315,   120,   879,   606,   961,  1019,  1020,  2169,
    1248,   116,  1022,    64,  2008,   604,   163,  1249,  1147,  1029,
    2013,   532,   533,   534,   535,   536,   537,   538,  2461,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,    85,   556,   722,  1266,
     117,  2463,   141,   390,   118,  1259,  -367,  2230,   119,   164,
    1470,  1484,   121,    86,   573,    87,   122,   165,  1840,  2464,
     142,    88,   166,  1250,  -335,  2243,   124,  1251,   125,  1454,
     174,  1455,  1621,   126,  1267,   620,   621,  2036,   574,   167,
    2291,   175,   143,  -527,  1252,   163,    89,   134,    65,  2465,
    1456,   575,  -531,  1253,  1261,    66,  2217,  2181,  2182,  2183,
    2184,  2185,  2186,  1232,  1494,  1670,  1262,   130,  1410,   144,
     131,  2194,  1233,  1495,  1671,  2198,   576,   132,  -528,  2202,
     137,  1130,  1131,  2420,  1133,   135,  -527,   138,   164,   530,
    1254,    67,    68,   150,  -527,  -531,   315,  1025,   155,   577,
    1682,   170,  1263,  -531,   162,  2128,  2328,  2304,    69,  1683,
    1264,   178,  2450,  2451,  2129,  2158,  -527,   331,   316,   554,
     555,  -528,   556,  2139,   332,  -531,   169,   947,   368,  -528,
    2279,   885,   571,   952,  2283,   954,   171,   845,   846,  2152,
     847,  2153,   172,   848,   314,  2474,   328,   110,   111,   112,
    1255,  -528,   553,   554,   555,    70,   556,   370,  2340,   366,
    1265,   991,   992,  1268,  1383,    90,  1164,  1165,  2298,  1235,
    1236,  2296,    71,  1375,    72,  1280,  1281,  1432,  1433,   367,
      73,   369,   549,   550,   551,   552,   553,   554,   555,    91,
     556,   371,  2389,  1436,  1437,  1438,  1439,  1212,   374,    74,
      75,  1190,  1191,   375,  1194,  1195,  1196,  1440,  1439,  1266,
    1199,  1200,  1201,   379,    76,  1204,  1361,   390,   532,   533,
     534,   535,   536,   537,   538,  1372,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   380,   556,  1464,  1465,  2341,  1500,  1501,
    1912,  1913,  1288,   384,  1289,   392,  1576,  1577,   396,  1579,
    1580,  1296,  1297,   388,  1298,   397,  2364,  2365,  1303,  2367,
    2368,  1681,  1465,  1916,  1917,  1304,  1305,  1306,  1307,  2330,
    1308,  1309,  1310,  2333,  2248,   398,  2213,  1311,  1312,   399,
    1313,   400,  2374,  1692,  1465,   409,  1316,  1317,  1318,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   401,   556,
    1326,  1327,  1328,   405,  1329,  1835,  1465,  1862,  1512,  1877,
    1878,  2224,  2225,  2394,    77,  1340,  1961,  1962,  1984,  1465,
    1995,  1465,  2010,  1465,  1341,  1342,  1343,  1344,  1345,  1346,
    1347,  1348,   406,  1349,   410,  2413,  1503,  1350,    78,  1351,
     411,  1352,  1353,  1354,  1355,  1356,   412,  2016,  1501,  1357,
    1358,  1359,  2425,   100,  2390,  2391,   418,  2392,  2393,  1026,
    1365,   425,  1367,  1367,  2344,  2345,  2440,  2025,  2026,  2027,
    2026,   427,   936,   937,   938,   939,  1384,   940,   426,  2454,
     942,   943,   944,  1389,   562,  1860,   428,   948,   949,   950,
    2029,  1962,   953,  2037,  1512,  2469,  2099,  2100,   429,   532,
     533,   534,   535,   536,   537,   538,   430,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   431,   556,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,  1445,   556,   432,
    1610,  2101,  2100,  1612,   433,  1613,   434,  1615,   435,   532,
     533,   534,   535,   536,   537,   538,   436,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   437,   556,   534,   535,   536,   537,
     538,   438,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,  1517,
     556,   584,  1521,  2102,  2100,  2105,  2026,   566,  1526,  2110,
    2111,  2112,  2113,  2115,  2116,  2118,  2119,  1532,   439,  1022,
    2137,  1465,  2138,  1465,   440,  1540,  1541,   532,   533,   534,
     535,   536,   537,   538,   441,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   442,   556,   532,   533,   534,   535,   536,   537,
     538,   443,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   444,
     556,  2151,  1465,  2155,  1465,  2163,  2111,  2164,  2026,   445,
    1611,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   446,   556,  1050,  1051,  2165,  2026,  2167,
    2113,  2236,  1465,  2246,  1465,   447,  1631,  2247,  1465,  2253,
    1962,  2264,  1878,   532,   533,   534,   535,   536,   537,   538,
    1640,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   580,   556,
     448,   532,   533,   534,   535,   536,   537,   538,   449,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   450,   556,   451,   532,
     533,   534,   535,   536,   537,   538,   452,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   453,   556,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   454,   556,  1848,   532,
     533,   534,   535,   536,   537,   538,   455,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   456,   556,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,  1883,   556,   457,  1884,  2310,  1465,  2312,  2111,  2313,
    2113,  2323,  2324,  1895,  1896,  2354,  2355,   583,  2378,  2379,
    2396,  2397,  2401,  2402,   458,  1897,  2404,  2397,  2433,  2397,
    2434,  2397,  2437,  2438,  1904,  1905,  1082,  1083,  2466,  2397,
     459,  1154,  1155,  1380,  1381,   460,  1944,  1945,   585,   461,
     462,  1921,  1922,  1923,   463,   464,  1924,  1925,   465,  1926,
     466,  1927,   467,  1928,   468,   469,   470,   471,   472,   473,
    1929,  1930,  1931,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,  1937,  1939,  1084,  1085,   485,   486,
    1870,   487,   488,  1947,  1948,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,  1411,   502,
     586,   503,   504,   505,   506,   507,   508,  1965,   509,   510,
     511,  1971,   512,   513,   514,   515,   516,   517,   518,  1412,
     519,  1975,   520,   521,   522,   523,   524,   525,  1413,   526,
     527,  1414,   528,  1415,   529,  1981,  1416,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,  1417,   556,   587,  1106,  1107,   565,   567,  1418,  1419,
     588,  1698,  1699,  1700,  1701,  1702,  1703,   589,  1704,   590,
    1705,   611,   610,   612,  1706,  1707,  1708,   622,  1709,   623,
     659,  1112,  1113,   667,  1710,  1711,  1712,  1713,  1714,   668,
     669,   670,   676,  1420,   677,   680,   682,   684,  1715,   685,
     686,   691,   696,   697,   698,   699,   700,   701,  1716,  1717,
    1421,   702,  1718,   703,   704,   705,   706,  1719,  1720,  1721,
    1722,  1723,   710,   713,  1724,   723,  1725,  1726,  1727,   556,
     724,  1728,  1729,   725,  1730,  1731,  1732,   743,   759,   763,
    1733,   782,   783,   784,  1422,   785,   786,   789,   790,   791,
    1537,  1538,   794,   795,  1734,   796,   819,   823,   844,  1735,
     870,   872,   874,   876,  1736,  1737,  1738,   884,   886,   893,
     894,  1739,  1740,  1423,  1741,  1742,  1743,  1744,  1567,  1568,
    1745,  1424,  1746,  1747,  1748,  1749,   896,  1750,   897,  1751,
    1752,   898,  1753,   899,  1754,  1755,   902,  1756,  1757,  1758,
    1759,   338,   900,   901,   904,   905,  1760,  1871,  1761,   906,
    1762,  1763,   907,  1764,  1765,  1766,  1767,  1768,  1769,   908,
    1770,  1771,  1772,  1773,  1774,   909,  2040,  2041,  1411,   910,
     911,   912,  2045,   913,  2047,  1775,   914,  1776,   915,  1777,
     917,  1425,   919,   918,   920,   921,  1592,  1593,  1778,   922,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,   923,  1413,  1786,
    1787,  1414,   925,  1415,   924,  1788,  1416,  1789,  1790,  1791,
     930,  1792,   932,  1793,   933,  1794,  1795,  1796,  1797,   934,
     941,  1417,   945,   951,   955,   956,   957,   962,  1418,  1419,
     964,   965,   966,   967,   971,   968,   972,  1798,  1799,  1800,
     974,   976,   973,   975,   978,   980,   979,  1801,   981,  1802,
    1803,  1804,   982,   983,   998,  1004,  1805,  1005,  1806,  1807,
    1808,  1007,  1015,  1420,  1809,  1021,    16,  1079,  1810,  1811,
    1065,  1080,  1812,  1813,  1814,  1815,  1081,  1086,  1087,  1816,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   -83,   556,  1088,  1132,
    1135,  2149,  1136,  1137,  1144,  1141,  1142,  1145,  1146,  1157,
    1156,  1159,  1160,  2159,  1422,  1162,  1163,  1167,  1161,  1168,
    1817,  1818,  1819,  1820,  1821,  1175,  1176,   959,  1177,  1180,
    1181,  1182,  1183,  1184,  1187,  1192,  1210,  1206,  1207,  1208,
    1211,  1213,  1217,  1423,  1526,  1209,  1231,  1234,  1230,  1237,
    1241,  1424,  1242,  1246,  1243,  1244,  1247,  1260,  1272,  1273,
    2187,  1276,  1698,  1699,  1700,  1701,  1702,  1703,  1282,  1704,
    1277,  1705,  1292,  1295,  1294,  1706,  1707,  1708,  1300,  1709,
    1319,  1320,  1321,  2205,  1322,  1710,  1711,  1712,  1713,  1714,
    1330,  2210,  1331,  1332,  1334,  1336,  1338,  1339,  1373,  1715,
    2216,   -85,  1822,  1823,  1824,  1825,  1826,  1323,  1827,  1716,
    1717,  1425,  1376,  1718,  1324,  1325,  2227,  2228,  1719,  1720,
    1721,  1722,  1723,  1333,  1335,  1724,  1337,  1725,  1726,  1727,
    1378,  1382,  1728,  1729,  1385,  1730,  1731,  1732,  1386,  1400,
    1401,  1733,  1405,  1406,  1398,  1428,  1429,  1444,  1468,  1473,
    1485,  1466,  1471,  1479,  1481,  1734,  1399,  1486,  1404,  1487,
    1735,  1430,  1488,  1491,  1407,  1736,  1737,  1738,  1431,  1493,
    1441,  1498,  1739,  1740,  1458,  1741,  1742,  1743,  1744,  1442,
    1502,  1745,  1443,  1996,  1747,  1748,  1749,  1459,  1750,  1460,
    1751,  1752,  1504,  1753,  1461,  1754,  1755,  1462,  1756,  1757,
    1758,  1759,  1463,  1507,  1508,  1509,  1518,  1760,  1523,  1761,
    1522,  1762,  1763,  1492,  1764,  1765,  1766,  1767,  1768,  1769,
    1496,  1770,  1771,  1772,  1773,  1774,  1512,  1497,  1524,  1618,
    1499,  1619,  1510,  1533,  1622,  1542,  1775,  1626,  1776,  1543,
    1777,  2309,  1560,  1561,  1562,  1563,  1627,  1564,  1565,  1778,
    1636,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  2321,  1566,
    1786,  1787,  1607,  1637,  1643,  1575,  1788,  1578,  1789,  1790,
    1791,  1581,  1792,  1648,  1793,  1649,  1794,  1795,  1796,  1797,
    1634,  1608,  1653,  1614,  1654,  1616,  1656,  1666,  1667,  1672,
    1669,  1673,  1617,  1623,  1624,  1625,  1674,  1632,  1798,  1799,
    1800,  1638,  1641,  1676,  1642,  1650,  1651,  1652,  1801,  1655,
    1802,  1803,  1804,  1679,  1685,  1686,  1687,  1805,  1688,  1806,
    1807,  1808,  1689,  1690,  1691,  1809,  1693,  1829,  1830,  1810,
    1811,  1832,  1834,  1812,  1813,  1814,  1815,  1838,  1836,  1841,
    1816,  1849,  1842,  1850,  1851,  1852,  1855,  1869,   532,   533,
     534,   535,   536,   537,   538,  2387,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,  1875,   556,  1876,  1880,  1882,  1932,  1933,
    1911,  1817,  1818,  1819,  1820,  1821,  1906,  1915,  1942,  1934,
    1935,  1936,   532,   533,   534,   535,   536,   537,   538,  1946,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,  1949,   556,  1954,
    1955,  1953,  1957,  1698,  1699,  1700,  1701,  1702,  1703,  1959,
    1704,  1967,  1705,  1964,  1966,  1977,  1706,  1707,  1708,  1980,
    1709,  1982,  1972,  1985,  1973,  1974,  1710,  1711,  1712,  1713,
    1714,  2006,  1979,  2003,  2012,  1987,  2015,  1988,  2018,  1989,
    1715,  1993,  1994,  1822,  1823,  1824,  1825,  1826,  1990,  1827,
    1716,  1717,  2004,  2005,  1718,  2014,  2038,  2049,  2009,  1719,
    1720,  1721,  1722,  1723,  2011,  2017,  1724,  2019,  1725,  1726,
    1727,  2020,  2042,  1728,  1729,  2051,  1730,  1731,  1732,  2048,
    2066,  2067,  1733,  2072,  2103,  2073,  2074,  2076,  2104,  2077,
    2078,  2108,  2106,  2109,  2114,  2122,  1734,  2120,  2121,  2136,
    2124,  1735,  2140,  2125,  2126,  2135,  1736,  1737,  1738,  2147,
    2148,  2150,  2154,  1739,  1740,  2156,  1741,  1742,  1743,  1744,
    2160,  2166,  1745,  2171,  2131,  1747,  1748,  1749,  2172,  1750,
    2161,  1751,  1752,  2170,  1753,  2173,  1754,  1755,  2175,  1756,
    1757,  1758,  1759,  2176,  2179,  2188,  2190,  2196,  1760,  2191,
    1761,  2192,  1762,  1763,  2193,  1764,  1765,  1766,  1767,  1768,
    1769,  2197,  1770,  1771,  1772,  1773,  1774,  2200,  2201,  2203,
    2204,  1016,  2206,  2207,  2208,  2211,  2214,  1775,  2209,  1776,
    2215,  1777,  2218,  2220,  2221,  2219,  2222,  2223,  2229,  2226,
    1778,  2235,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  2238,
    2233,  1786,  1787,  2240,  2239,  2241,  2242,  1788,  2245,  1789,
    1790,  1791,  2254,  1792,  2249,  1793,  2255,  1794,  1795,  1796,
    1797,  2256,  2261,  2262,  2265,  2266,  2276,  2263,  2268,  2269,
    2270,  2271,  2272,  2294,  2273,  2280,  2275,  2278,  2281,  1798,
    1799,  1800,  2282,  2284,  2289,  2285,  2299,  2286,  2306,  1801,
    2288,  1802,  1803,  1804,  2290,  2297,  2300,  2301,  1805,  2311,
    1806,  1807,  1808,  2307,  2314,  2315,  1809,  2316,  2317,  2318,
    1810,  1811,  2319,  2320,  1812,  1813,  1814,  1815,  2322,  2327,
    2347,  1816,   532,   533,   534,   535,   536,   537,   538,  2329,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,  2336,   556,  2337,
    2338,  2339,  2342,  2343,  2356,  2352,  2353,  2357,  2358,  2359,
    2360,  2362,  1817,  1818,  1819,  1820,  1821,  2363,  2366,  2371,
    2372,  2369,  2370,   532,   533,   534,   535,   536,   537,   538,
    2026,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,  2373,   556,
    2375,  2377,  2380,  2381,  1698,  1699,  1700,  1701,  1702,  1703,
    1014,  1704,  2382,  1705,  2384,  2385,  2388,  1706,  1707,  1708,
    2386,  1709,  2395,  2398,  2400,  2406,  2403,  1710,  1711,  1712,
    1713,  1714,  2405,  2412,  2408,  2409,  2410,  2411,  2415,  2416,
    2417,  1715,  2421,  2424,  1822,  1823,  1824,  1825,  1826,  2426,
    1827,  1716,  1717,  2436,  2431,  1718,  2432,  2443,  2441,  2439,
    1719,  1720,  1721,  1722,  1723,  2452,  2467,  1724,  2468,  1725,
    1726,  1727,  2455,  2476,  1728,  1729,  2475,  1730,  1731,  1732,
    2481,  2479,  2480,  1733,  2482,  2483,  2484,   333,   719,  1534,
    2098,  2039,  1371,   888,  1941,   873,  1302,  1734,  1633,  1003,
     393,  2399,  1735,  1002,  2350,  2237,   903,  1736,  1737,  1738,
    1166,  1403,  2407,  1245,  1739,  1740,   173,  1741,  1742,  1743,
    1744,   712,  1011,  1745,  1285,  2134,  1747,  1748,  1749,  2178,
    1750,  1863,  1751,  1752,  2453,  1753,  2157,  1754,  1755,  1843,
    1756,  1757,  1758,  1759,  1859,  1202,   415,   931,     0,  1760,
    1218,  1761,     0,  1762,  1763,   681,  1764,  1765,  1766,  1767,
    1768,  1769,  1976,  1770,  1771,  1772,  1773,  1774,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1775,     0,
    1776,     0,  1777,     0,     0,     0,     0,     0,     0,     0,
       0,  1778,     0,  1779,  1780,  1781,  1782,  1783,  1784,  1785,
       0,     0,  1786,  1787,     0,     0,     0,     0,  1788,     0,
    1789,  1790,  1791,     0,  1792,     0,  1793,     0,  1794,  1795,
    1796,  1797,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1798,  1799,  1800,     0,     0,     0,     0,     0,     0,     0,
    1801,     0,  1802,  1803,  1804,     0,     0,     0,     0,  1805,
       0,  1806,  1807,  1808,     0,     0,     0,  1809,     0,     0,
       0,  1810,  1811,     0,     0,  1812,  1813,  1814,  1815,     0,
       0,     0,  1816,   532,   533,   534,   535,   536,   537,   538,
       0,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,     0,   556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1594,
    1595,     0,     0,  1817,  1818,  1819,  1820,  1821,     0,     0,
       0,     0,     0,     0,   532,   533,   534,   535,   536,   537,
     538,     0,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,  1698,  1699,  1700,  1701,  1702,
    1703,  1030,  1704,     0,  1705,     0,     0,     0,  1706,  1707,
    1708,     0,  1709,     0,     0,     0,     0,     0,  1710,  1711,
    1712,  1713,  1714,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1715,     0,     0,  1822,  1823,  1824,  1825,  1826,
       0,  1827,  1716,  1717,     0,     0,  1718,     0,     0,     0,
       0,  1719,  1720,  1721,  1722,  1723,     0,     0,  1724,     0,
    1725,  1726,  1727,     0,     0,  1728,  1729,     0,  1730,  1731,
    1732,     0,     0,     0,  1733,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1734,     0,
       0,     0,     0,  1735,     0,     0,     0,     0,  1736,  1737,
    1738,     0,     0,     0,     0,  1739,  1740,     0,  1741,  1742,
    1743,  1744,     0,     0,  1745,     0,  2141,  1747,  1748,  1749,
       0,  1750,     0,  1751,  1752,     0,  1753,     0,  1754,  1755,
       0,  1756,  1757,  1758,  1759,     0,     0,     0,     0,     0,
    1760,     0,  1761,     0,  1762,  1763,     0,  1764,  1765,  1766,
    1767,  1768,  1769,     0,  1770,  1771,  1772,  1773,  1774,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1775,
       0,  1776,     0,  1777,     0,     0,     0,     0,     0,     0,
       0,     0,  1778,     0,  1779,  1780,  1781,  1782,  1783,  1784,
    1785,     0,     0,  1786,  1787,     0,     0,     0,     0,  1788,
       0,  1789,  1790,  1791,     0,  1792,     0,  1793,     0,  1794,
    1795,  1796,  1797,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1798,  1799,  1800,     0,     0,     0,     0,     0,     0,
       0,  1801,     0,  1802,  1803,  1804,     0,     0,     0,     0,
    1805,     0,  1806,  1807,  1808,     0,     0,     0,  1809,     0,
       0,     0,  1810,  1811,     0,     0,  1812,  1813,  1814,  1815,
       0,     0,     0,  1816,   532,   533,   534,   535,   536,   537,
     538,     0,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1596,  1597,     0,     0,  1817,  1818,  1819,  1820,  1821,     0,
       0,     0,     0,     0,     0,   532,   533,   534,   535,   536,
     537,   538,     0,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,  1698,  1699,  1700,  1701,
    1702,  1703,  1031,  1704,     0,  1705,     0,     0,     0,  1706,
    1707,  1708,     0,  1709,     0,     0,     0,     0,     0,  1710,
    1711,  1712,  1713,  1714,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1715,     0,     0,  1822,  1823,  1824,  1825,
    1826,     0,  1827,  1716,  1717,     0,     0,  1718,     0,     0,
       0,     0,  1719,  1720,  1721,  1722,  1723,     0,     0,  1724,
       0,  1725,  1726,  1727,     0,     0,  1728,  1729,     0,  1730,
    1731,  1732,     0,     0,     0,  1733,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1734,
       0,     0,     0,     0,  1735,     0,     0,     0,     0,  1736,
    1737,  1738,     0,     0,     0,     0,  1739,  1740,     0,  1741,
    1742,  1743,  1744,     0,     0,  1745,     0,  2142,  1747,  1748,
    1749,     0,  1750,     0,  1751,  1752,     0,  1753,     0,  1754,
    1755,     0,  1756,  1757,  1758,  1759,     0,     0,     0,     0,
       0,  1760,     0,  1761,     0,  1762,  1763,     0,  1764,  1765,
    1766,  1767,  1768,  1769,     0,  1770,  1771,  1772,  1773,  1774,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1775,     0,  1776,     0,  1777,     0,     0,     0,     0,     0,
       0,     0,     0,  1778,     0,  1779,  1780,  1781,  1782,  1783,
    1784,  1785,     0,     0,  1786,  1787,     0,     0,     0,     0,
    1788,     0,  1789,  1790,  1791,     0,  1792,     0,  1793,     0,
    1794,  1795,  1796,  1797,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1798,  1799,  1800,     0,     0,     0,     0,     0,
       0,     0,  1801,     0,  1802,  1803,  1804,     0,     0,     0,
       0,  1805,     0,  1806,  1807,  1808,     0,     0,     0,  1809,
       0,     0,     0,  1810,  1811,     0,     0,  1812,  1813,  1814,
    1815,     0,     0,     0,  1816,   532,   533,   534,   535,   536,
     537,   538,     0,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2063,  2064,     0,     0,  1817,  1818,  1819,  1820,  1821,
       0,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,  1698,  1699,  1700,
    1701,  1702,  1703,  1032,  1704,     0,  1705,     0,     0,     0,
    1706,  1707,  1708,     0,  1709,     0,     0,     0,     0,     0,
    1710,  1711,  1712,  1713,  1714,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1715,     0,     0,  1822,  1823,  1824,
    1825,  1826,     0,  1827,  1716,  1717,     0,     0,  1718,     0,
       0,     0,     0,  1719,  1720,  1721,  1722,  1723,     0,     0,
    1724,     0,  1725,  1726,  1727,     0,     0,  1728,  1729,     0,
    1730,  1731,  1732,     0,     0,     0,  1733,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1734,     0,     0,     0,     0,  1735,     0,     0,     0,     0,
    1736,  1737,  1738,     0,     0,     0,     0,  1739,  1740,     0,
    1741,  1742,  1743,  1744,     0,     0,  1745,     0,  2143,  1747,
    1748,  1749,     0,  1750,     0,  1751,  1752,     0,  1753,     0,
    1754,  1755,     0,  1756,  1757,  1758,  1759,     0,     0,     0,
       0,     0,  1760,     0,  1761,     0,  1762,  1763,     0,  1764,
    1765,  1766,  1767,  1768,  1769,     0,  1770,  1771,  1772,  1773,
    1774,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1775,     0,  1776,     0,  1777,     0,     0,     0,     0,
       0,     0,     0,     0,  1778,     0,  1779,  1780,  1781,  1782,
    1783,  1784,  1785,     0,     0,  1786,  1787,     0,     0,     0,
       0,  1788,     0,  1789,  1790,  1791,     0,  1792,     0,  1793,
       0,  1794,  1795,  1796,  1797,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1798,  1799,  1800,     0,     0,     0,     0,
       0,     0,     0,  1801,     0,  1802,  1803,  1804,     0,     0,
       0,     0,  1805,     0,  1806,  1807,  1808,     0,     0,     0,
    1809,     0,     0,     0,  1810,  1811,     0,     0,  1812,  1813,
    1814,  1815,     0,     0,     0,  1816,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1039,     0,     0,  1817,  1818,  1819,  1820,
    1821,     0,     0,     0,     0,     0,     0,   532,   533,   534,
     535,   536,   537,   538,     0,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,     0,     0,     0,     0,  1698,  1699,
    1700,  1701,  1702,  1703,  1040,  1704,     0,  1705,     0,     0,
       0,  1706,  1707,  1708,     0,  1709,     0,     0,     0,     0,
       0,  1710,  1711,  1712,  1713,  1714,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1715,     0,     0,  1822,  1823,
    1824,  1825,  1826,     0,  1827,  1716,  1717,     0,     0,  1718,
       0,     0,     0,     0,  1719,  1720,  1721,  1722,  1723,     0,
       0,  1724,     0,  1725,  1726,  1727,     0,     0,  1728,  1729,
       0,  1730,  1731,  1732,     0,     0,     0,  1733,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1734,     0,     0,     0,     0,  1735,     0,     0,     0,
       0,  1736,  1737,  1738,     0,     0,     0,     0,  1739,  1740,
       0,  1741,  1742,  1743,  1744,     0,     0,  1745,     0,  2144,
    1747,  1748,  1749,     0,  1750,     0,  1751,  1752,     0,  1753,
       0,  1754,  1755,     0,  1756,  1757,  1758,  1759,     0,     0,
       0,     0,     0,  1760,     0,  1761,     0,  1762,  1763,     0,
    1764,  1765,  1766,  1767,  1768,  1769,     0,  1770,  1771,  1772,
    1773,  1774,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1775,     0,  1776,     0,  1777,     0,     0,     0,
       0,     0,     0,     0,     0,  1778,     0,  1779,  1780,  1781,
    1782,  1783,  1784,  1785,     0,     0,  1786,  1787,     0,     0,
       0,     0,  1788,     0,  1789,  1790,  1791,     0,  1792,     0,
    1793,     0,  1794,  1795,  1796,  1797,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1798,  1799,  1800,     0,     0,     0,
       0,     0,     0,     0,  1801,     0,  1802,  1803,  1804,     0,
       0,     0,     0,  1805,     0,  1806,  1807,  1808,     0,     0,
       0,  1809,     0,     0,     0,  1810,  1811,     0,     0,  1812,
    1813,  1814,  1815,     0,     0,     0,  1816,   532,   533,   534,
     535,   536,   537,   538,     0,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1041,     0,     0,  1817,  1818,  1819,
    1820,  1821,     0,     0,     0,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,  1698,
    1699,  1700,  1701,  1702,  1703,  1042,  1704,     0,  1705,     0,
       0,     0,  1706,  1707,  1708,     0,  1709,     0,     0,     0,
       0,     0,  1710,  1711,  1712,  1713,  1714,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1715,     0,     0,  1822,
    1823,  1824,  1825,  1826,     0,  1827,  1716,  1717,     0,     0,
    1718,     0,     0,     0,     0,  1719,  1720,  1721,  1722,  1723,
       0,     0,  1724,     0,  1725,  1726,  1727,     0,     0,  1728,
    1729,     0,  1730,  1731,  1732,     0,     0,     0,  1733,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1734,     0,     0,     0,     0,  1735,     0,     0,
       0,     0,  1736,  1737,  1738,     0,     0,     0,     0,  1739,
    1740,     0,  1741,  1742,  1743,  1744,     0,     0,  1745,     0,
    2145,  1747,  1748,  1749,     0,  1750,     0,  1751,  1752,     0,
    1753,     0,  1754,  1755,     0,  1756,  1757,  1758,  1759,     0,
       0,     0,     0,     0,  1760,     0,  1761,     0,  1762,  1763,
       0,  1764,  1765,  1766,  1767,  1768,  1769,     0,  1770,  1771,
    1772,  1773,  1774,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1775,     0,  1776,     0,  1777,     0,     0,
       0,     0,     0,     0,     0,     0,  1778,     0,  1779,  1780,
    1781,  1782,  1783,  1784,  1785,     0,     0,  1786,  1787,     0,
       0,     0,     0,  1788,     0,  1789,  1790,  1791,     0,  1792,
       0,  1793,     0,  1794,  1795,  1796,  1797,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1798,  1799,  1800,     0,     0,
       0,     0,     0,     0,     0,  1801,     0,  1802,  1803,  1804,
       0,     0,     0,     0,  1805,     0,  1806,  1807,  1808,     0,
       0,     0,  1809,     0,     0,     0,  1810,  1811,     0,     0,
    1812,  1813,  1814,  1815,     0,     0,     0,  1816,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1044,     0,     0,  1817,  1818,
    1819,  1820,  1821,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,     0,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
    1698,  1699,  1700,  1701,  1702,  1703,  1045,  1704,     0,  1705,
       0,     0,     0,  1706,  1707,  1708,     0,  1709,     0,     0,
       0,     0,     0,  1710,  1711,  1712,  1713,  1714,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1715,     0,     0,
    1822,  1823,  1824,  1825,  1826,     0,  1827,  1716,  1717,     0,
       0,  1718,     0,     0,     0,     0,  1719,  1720,  1721,  1722,
    1723,     0,     0,  1724,     0,  1725,  1726,  1727,     0,     0,
    1728,  1729,     0,  1730,  1731,  1732,     0,     0,     0,  1733,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1734,     0,     0,     0,     0,  1735,     0,
       0,     0,     0,  1736,  1737,  1738,     0,     0,     0,     0,
    1739,  1740,     0,  1741,  1742,  1743,  1744,     0,     0,  1745,
       0,  2146,  1747,  1748,  1749,     0,  1750,     0,  1751,  1752,
       0,  1753,     0,  1754,  1755,     0,  1756,  1757,  1758,  1759,
       0,     0,     0,     0,     0,  1760,     0,  1761,     0,  1762,
    1763,     0,  1764,  1765,  1766,  1767,  1768,  1769,     0,  1770,
    1771,  1772,  1773,  1774,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1775,     0,  1776,     0,  1777,     0,
       0,     0,     0,     0,     0,     0,     0,  1778,     0,  1779,
    1780,  1781,  1782,  1783,  1784,  1785,     0,     0,  1786,  1787,
       0,     0,     0,     0,  1788,     0,  1789,  1790,  1791,     0,
    1792,     0,  1793,     0,  1794,  1795,  1796,  1797,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1798,  1799,  1800,     0,
       0,     0,     0,     0,     0,     0,  1801,     0,  1802,  1803,
    1804,     0,     0,     0,     0,  1805,     0,  1806,  1807,  1808,
       0,     0,     0,  1809,     0,     0,     0,  1810,  1811,     0,
       0,  1812,  1813,  1814,  1815,     0,     0,     0,  1816,   532,
     533,   534,   535,   536,   537,   538,     0,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1046,     0,     0,  1817,
    1818,  1819,  1820,  1821,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,  1698,  1699,  1700,  1701,  1702,  1703,  1052,  1704,     0,
    1705,     0,     0,     0,  1706,  1707,  1708,     0,  1709,     0,
       0,     0,     0,     0,  1710,  1711,  1712,  1713,  1714,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1715,     0,
       0,  1822,  1823,  1824,  1825,  1826,     0,  1827,  1716,  1717,
       0,     0,  1718,     0,     0,     0,     0,  1719,  1720,  1721,
    1722,  1723,     0,     0,  1724,     0,  1725,  1726,  1727,     0,
       0,  1728,  1729,     0,  1730,  1731,  1732,     0,     0,     0,
    1733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1734,     0,     0,     0,     0,  1735,
       0,     0,     0,     0,  1736,  1737,  1738,     0,     0,     0,
       0,  1739,  1740,     0,  1741,  1742,  1743,  1744,     0,     0,
    1745,     0,  2231,  1747,  1748,  1749,     0,  1750,     0,  1751,
    1752,     0,  1753,     0,  1754,  1755,     0,  1756,  1757,  1758,
    1759,     0,     0,     0,     0,     0,  1760,     0,  1761,     0,
    1762,  1763,     0,  1764,  1765,  1766,  1767,  1768,  1769,     0,
    1770,  1771,  1772,  1773,  1774,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1775,     0,  1776,     0,  1777,
       0,     0,     0,     0,     0,     0,     0,     0,  1778,     0,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,     0,     0,  1786,
    1787,     0,     0,     0,     0,  1788,     0,  1789,  1790,  1791,
       0,  1792,     0,  1793,     0,  1794,  1795,  1796,  1797,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1798,  1799,  1800,
       0,     0,     0,     0,     0,     0,     0,  1801,     0,  1802,
    1803,  1804,     0,     0,     0,     0,  1805,     0,  1806,  1807,
    1808,     0,     0,     0,  1809,     0,     0,     0,  1810,  1811,
       0,     0,  1812,  1813,  1814,  1815,     0,     0,     0,  1816,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1054,     0,     0,
    1817,  1818,  1819,  1820,  1821,     0,     0,     0,     0,     0,
       0,   532,   533,   534,   535,   536,   537,   538,     0,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,     0,     0,
       0,     0,  1698,  1699,  1700,  1701,  1702,  1703,  1059,  1704,
       0,  1705,     0,     0,     0,  1706,  1707,  1708,     0,  1709,
       0,     0,     0,     0,     0,  1710,  1711,  1712,  1713,  1714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1715,
       0,     0,  1822,  1823,  1824,  1825,  1826,     0,  1827,  1716,
    1717,     0,     0,  1718,     0,     0,     0,     0,  1719,  1720,
    1721,  1722,  1723,     0,     0,  1724,     0,  1725,  1726,  1727,
       0,     0,  1728,  1729,     0,  1730,  1731,  1732,     0,     0,
       0,  1733,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1734,     0,     0,     0,     0,
    1735,     0,     0,     0,     0,  1736,  1737,  1738,     0,     0,
       0,     0,  1739,  1740,     0,  1741,  1742,  1743,  1744,     0,
       0,  1745,     0,  2232,  1747,  1748,  1749,     0,  1750,     0,
    1751,  1752,     0,  1753,     0,  1754,  1755,     0,  1756,  1757,
    1758,  1759,     0,     0,     0,     0,     0,  1760,     0,  1761,
       0,  1762,  1763,     0,  1764,  1765,  1766,  1767,  1768,  1769,
       0,  1770,  1771,  1772,  1773,  1774,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1775,     0,  1776,     0,
    1777,     0,     0,     0,     0,     0,     0,     0,     0,  1778,
       0,  1779,  1780,  1781,  1782,  1783,  1784,  1785,     0,     0,
    1786,  1787,     0,     0,     0,     0,  1788,     0,  1789,  1790,
    1791,     0,  1792,     0,  1793,     0,  1794,  1795,  1796,  1797,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1798,  1799,
    1800,     0,     0,     0,     0,     0,     0,     0,  1801,     0,
    1802,  1803,  1804,     0,     0,     0,     0,  1805,     0,  1806,
    1807,  1808,     0,     0,     0,  1809,     0,     0,     0,  1810,
    1811,     0,     0,  1812,  1813,  1814,  1815,     0,     0,     0,
    1816,   532,   533,   534,   535,   536,   537,   538,     0,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1060,     0,
       0,  1817,  1818,  1819,  1820,  1821,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,     0,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,  1698,  1699,  1700,  1701,  1702,  1703,  1061,
    1704,     0,  1705,     0,     0,     0,  1706,  1707,  1708,     0,
    1709,     0,     0,     0,     0,     0,  1710,  1711,  1712,  1713,
    1714,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1715,     0,     0,  1822,  1823,  1824,  1825,  1826,     0,  1827,
    1716,  1717,     0,     0,  1718,     0,     0,     0,     0,  1719,
    1720,  1721,  1722,  1723,     0,     0,  1724,     0,  1725,  1726,
    1727,     0,     0,  1728,  1729,     0,  1730,  1731,  1732,     0,
       0,     0,  1733,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1734,     0,     0,     0,
       0,  1735,     0,     0,     0,     0,  1736,  1737,  1738,     0,
       0,     0,     0,  1739,  1740,     0,  1741,  1742,  1743,  1744,
       0,     0,  1745,     0,  2305,  1747,  1748,  1749,     0,  1750,
       0,  1751,  1752,     0,  1753,     0,  1754,  1755,     0,  1756,
    1757,  1758,  1759,     0,     0,     0,     0,     0,  1760,     0,
    1761,     0,  1762,  1763,     0,  1764,  1765,  1766,  1767,  1768,
    1769,     0,  1770,  1771,  1772,  1773,  1774,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1775,     0,  1776,
       0,  1777,     0,     0,     0,     0,     0,     0,     0,     0,
    1778,     0,  1779,  1780,  1781,  1782,  1783,  1784,  1785,     0,
       0,  1786,  1787,     0,     0,     0,     0,  1788,     0,  1789,
    1790,  1791,     0,  1792,     0,  1793,     0,  1794,  1795,  1796,
    1797,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1798,
    1799,  1800,     0,     0,     0,     0,     0,     0,     0,  1801,
       0,  1802,  1803,  1804,     0,     0,     0,     0,  1805,     0,
    1806,  1807,  1808,     0,     0,     0,  1809,     0,     0,     0,
    1810,  1811,     0,     0,  1812,  1813,  1814,  1815,     0,     0,
       0,  1816,   532,   533,   534,   535,   536,   537,   538,     0,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1062,
       0,     0,  1817,  1818,  1819,  1820,  1821,     0,     0,     0,
       0,     0,     0,   532,   533,   534,   535,   536,   537,   538,
       0,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,     0,   556,
       0,     0,     0,     0,  1698,  1699,  1700,  1701,  1702,  1703,
    1074,  1704,     0,  1705,     0,     0,     0,  1706,  1707,  1708,
       0,  1709,     0,     0,     0,     0,     0,  1710,  1711,  1712,
    1713,  1714,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1715,     0,     0,  1822,  1823,  1824,  1825,  1826,     0,
    1827,  1716,  1717,     0,     0,  1718,     0,     0,     0,     0,
    1719,  1720,  1721,  1722,  1723,     0,     0,  1724,     0,  1725,
    1726,  1727,     0,     0,  1728,  1729,     0,  1730,  1731,  1732,
       0,     0,     0,  1733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1734,     0,     0,
       0,     0,  1735,     0,     0,     0,     0,  1736,  1737,  1738,
       0,     0,     0,     0,  1739,  1740,     0,  1741,  1742,  1743,
    1744,     0,     0,  1745,     0,  2308,  1747,  1748,  1749,     0,
    1750,     0,  1751,  1752,     0,  1753,     0,  1754,  1755,     0,
    1756,  1757,  1758,  1759,     0,     0,     0,     0,     0,  1760,
       0,  1761,     0,  1762,  1763,     0,  1764,  1765,  1766,  1767,
    1768,  1769,     0,  1770,  1771,  1772,  1773,  1774,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1775,     0,
    1776,     0,  1777,     0,     0,     0,     0,     0,     0,     0,
       0,  1778,     0,  1779,  1780,  1781,  1782,  1783,  1784,  1785,
       0,     0,  1786,  1787,     0,     0,     0,     0,  1788,     0,
    1789,  1790,  1791,     0,  1792,     0,  1793,     0,  1794,  1795,
    1796,  1797,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1798,  1799,  1800,     0,     0,     0,     0,     0,     0,     0,
    1801,     0,  1802,  1803,  1804,     0,     0,     0,     0,  1805,
       0,  1806,  1807,  1808,     0,     0,     0,  1809,     0,     0,
       0,  1810,  1811,     0,     0,  1812,  1813,  1814,  1815,     0,
       0,     0,  1816,   532,   533,   534,   535,   536,   537,   538,
       0,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,     0,   556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1075,     0,     0,  1817,  1818,  1819,  1820,  1821,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1698,  1699,  1700,  1701,  1702,
    1703,  1076,  1704,     0,  1705,     0,     0,     0,  1706,  1707,
    1708,     0,  1709,     0,     0,     0,     0,     0,  1710,  1711,
    1712,  1713,  1714,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1715,     0,     0,  1822,  1823,  1824,  1825,  1826,
       0,  1827,  1716,  1717,     0,     0,  1718,     0,     0,     0,
       0,  1719,  1720,  1721,  1722,  1723,     0,     0,  1724,     0,
    1725,  1726,  1727,     0,     0,  1728,  1729,     0,  1730,  1731,
    1732,     0,     0,     0,  1733,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1734,     0,
       0,     0,     0,  1735,     0,     0,     0,     0,  1736,  1737,
    1738,     0,     0,     0,     0,  1739,  1740,     0,  1741,  1742,
    1743,  1744,     0,     0,  1745,     0,  2346,  1747,  1748,  1749,
       0,  1750,     0,  1751,  1752,     0,  1753,     0,  1754,  1755,
       0,  1756,  1757,  1758,  1759,     0,     0,     0,     0,     0,
    1760,     0,  1761,     0,  1762,  1763,     0,  1764,  1765,  1766,
    1767,  1768,  1769,     0,  1770,  1771,  1772,  1773,  1774,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1775,
       0,  1776,     0,  1777,     0,     0,     0,     0,     0,     0,
       0,     0,  1778,     0,  1779,  1780,  1781,  1782,  1783,  1784,
    1785,     0,     0,  1786,  1787,     0,     0,     0,     0,  1788,
       0,  1789,  1790,  1791,     0,  1792,     0,  1793,     0,  1794,
    1795,  1796,  1797,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   180,   181,   182,   183,   184,     0,
       0,  1798,  1799,  1800,     0,     0,     0,   185,   186,     0,
       0,  1801,     0,  1802,  1803,  1804,     0,   187,   188,     0,
    1805,     0,  1806,  1807,  1808,     0,     0,     0,  1809,     0,
     189,     0,  1810,  1811,     0,     0,  1812,  1813,  1814,  1815,
       0,     0,     0,  1816,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,     0,     0,     0,   191,     0,     0,
     192,   193,     0,     0,     0,     0,     0,     0,     0,   194,
       0,  1078,     0,     0,  1817,  1818,  1819,  1820,  1821,     0,
       0,     0,     0,     0,     0,     0,   195,     0,     0,     0,
     196,   532,   533,   534,   535,   536,   537,   538,     0,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,  1089,   556,     0,   532,
     533,   534,   535,   536,   537,   538,   197,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1822,  1823,  1824,  1825,
    1826,     0,  1827,   198,     0,     0,   532,   533,   534,   535,
     536,   537,   538,   199,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   201,     0,     0,     0,
       0,     0,     0,   202,   203,     0,     0,     0,   204,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   205,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,     0,
     244,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,     0,   292,   293,   294,   295,     0,     0,     0,     0,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,     0,   307,   308,   309,   179,   180,   181,   182,   183,
     184,     0,     0,     0,     0,     0,   310,     0,     0,   185,
     186,     0,   532,   533,   534,   535,   536,   537,   538,   187,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   729,     0,     0,
       0,     0,     0,     0,   190,     0,     0,     0,     0,   191,
       0,     0,   192,   193,   532,   533,   534,   535,   536,   537,
     538,   194,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,   532,   533,   534,   535,   536,   537,   538,  1098,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
     532,   533,   534,   535,   536,   537,   538,  1099,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,     0,  1100,   199,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,   200,     0,   532,
     533,   534,   535,   536,   537,   538,     0,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,   731,     0,     0,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,     0,   244,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,     0,   292,   293,   294,   295,     0,     0,
       0,     0,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,     0,   307,   308,   309,   179,   180,   181,
     182,   183,   184,     0,     0,     0,     0,     0,   310,     0,
       0,   185,   186,     0,     0,     0,     0,     0,     0,     0,
    1101,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   850,     0,     0,   535,   536,   537,
     538,   851,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,   191,     0,     0,   192,   193,     0,     0,     0,     0,
       0,     0,  1102,   194,     0,   532,   533,   534,   535,   536,
     537,   538,     0,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
    1103,   556,     0,   532,   533,   534,   535,   536,   537,   538,
       0,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,  1104,   556,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   199,     0,     0,
    -760,  -760,  -760,  -760,  1105,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,     0,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,   852,  1111,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,     0,   244,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,     0,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,     0,   292,   293,   294,   295,
       0,     0,     0,     0,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,     0,   307,   308,   309,   179,
     180,   181,   182,   183,   184,     0,     0,     0,     0,     0,
     853,     0,     0,   185,   186,     0,   532,   533,   534,   535,
     536,   537,   538,   187,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,   532,   533,   534,   535,   536,   537,   538,
       0,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   190,   556,
       0,     0,     0,   191,     0,     0,   192,   193,     0,     0,
       0,     0,     0,     0,     0,   194,   532,   533,   534,   535,
     536,   537,   538,  1115,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,   532,   533,   534,   535,   536,   537,
     538,  1116,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,   532,   533,   534,   535,   536,   537,   538,  1117,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,   532,   533,   534,   535,   536,   537,   538,   199,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1118,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   422,     0,     0,     0,     0,     0,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,     0,   244,     0,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,     0,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,     0,   292,   293,
     294,   295,     0,     0,     0,     0,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,     0,   307,   308,
     309,   179,   180,   181,   182,   183,   184,     0,     0,     0,
       0,     0,   310,     0,     0,   185,   186,     0,     0,     0,
       0,     0,     0,     0,  1119,   187,   770,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,     0,     0,     0,     0,   191,     0,     0,   192,   193,
       0,     0,     0,     0,     0,     0,     0,   194,     0,     0,
       0,     0,     0,     0,  1124,   532,   533,   534,   535,   536,
     537,   538,     0,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,  1125,     0,   532,   533,   534,   535,   536,   537,
     538,     0,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,  1293,
     556,   532,   533,   534,   535,   536,   537,   538,     0,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,     0,     0,
       0,   198,     0,     0,     0,     0,     0,     0,     0,     0,
    1547,   199,   532,   533,   534,   535,   536,   537,   538,     0,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  1548,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,     0,   244,     0,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,     0,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,     0,
     292,   293,   294,   295,     0,     0,     0,     0,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,     0,
     307,   308,   309,   179,   180,   181,   182,   183,   184,     0,
       0,     0,     0,     0,   310,     0,     0,   185,   186,     0,
     532,   533,   534,   535,   536,   537,   538,   187,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,   532,   533,   534,
     535,   536,   537,   538,     0,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   190,   556,     0,     0,     0,   191,     0,     0,
     192,   193,     0,     0,     0,     0,     0,     0,     0,   194,
       0,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1559,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1569,     0,     0,     0,  1028,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1585,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,     0,
    1586,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
       0,   532,   533,   534,   535,   536,   537,   538,  1587,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,     0,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,     0,
     244,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,     0,   292,   293,   294,   295,     0,     0,     0,     0,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,     0,   307,   308,   309,   179,   180,   181,   182,   183,
     184,     0,     0,     0,     0,     0,   310,     0,     0,   185,
     186,     0,     0,     0,     0,     0,     0,     0,  1590,   187,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,  1591,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   190,     0,     0,     0,     0,   191,
       0,     0,   192,   193,     0,     0,     0,     0,     0,     0,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1604,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,  1520,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,   532,   533,   534,   535,   536,
     537,   538,     0,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
    1605,   556,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,   532,   533,
     534,   535,   536,   537,   538,   199,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1606,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,     0,   244,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,     0,   292,   293,   294,   295,     0,     0,
       0,     0,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,     0,   307,   308,   309,   179,   180,   181,
     182,   183,   184,     0,     0,     0,     0,     0,   310,     0,
       0,   185,   186,     0,     0,     0,     0,     0,     0,     0,
       0,   187,     0,     0,     0,     0,     0,     0,  2087,   532,
     533,   534,   535,   536,   537,   538,     0,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,   191,     0,     0,   192,   193,   532,   533,   534,   535,
     536,   537,   538,   194,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,  2090,  1525,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,  2091,   556,     0,     0,     0,     0,     0,
       0,     0,     0,  1063,     0,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1535,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   198,   556,     0,
       0,     0,     0,     0,     0,     0,  2092,   199,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,   200,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1064,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,     0,   244,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,     0,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,     0,   292,   293,   294,   295,
       0,     0,     0,     0,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,     0,   307,   308,   309,   179,
     180,   181,   182,   183,   184,     0,     0,     0,     0,     0,
     310,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,   187,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1536,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   190,     0,
       0,     0,     0,   191,     0,     0,   192,   193,     0,     0,
       0,     0,     0,   834,     0,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2044,
       0,     0,     0,     0,     0,  1027,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1033,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,  1034,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   200,   556,     0,     0,     0,     0,     0,     0,  1035,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,     0,   244,     0,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,     0,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,     0,   292,   293,
     294,   295,     0,     0,     0,     0,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,     0,   307,   308,
     309,   179,   180,   181,   182,   183,   184,     0,     0,     0,
       0,     0,   310,     0,     0,   185,   186,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1036,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,     0,     0,     0,     0,   191,     0,     0,   192,   193,
     532,   533,   534,   535,   536,   537,   538,   194,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,  2046,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1037,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1038,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,   198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1043,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,   200,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  1047,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,     0,   244,     0,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,     0,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,     0,
     292,   293,   294,   295,     0,     0,     0,     0,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,     0,
     307,   308,   309,   179,   180,   181,   182,   183,   184,     0,
       0,     0,     0,     0,   310,     0,     0,   185,   186,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,   532,
     533,   534,   535,   536,   537,   538,  1048,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,     0,     0,     0,   191,     0,     0,
     192,   193,     0,     0,     0,     0,     0,  1049,     0,   194,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,  1053,   532,   533,   534,   535,   536,   537,
     538,     0,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,   532,   533,   534,   535,   536,   537,   538,  1055,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1056,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,   200,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  1057,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,     0,
     244,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,     0,   292,   293,   294,   295,     0,     0,     0,     0,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,     0,   307,   308,   309,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,   310,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,  1066,   532,   533,   534,
     535,   536,   537,   538,     0,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,     0,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,  1067,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,  1068,   532,   533,   534,   535,   536,   537,   538,     0,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,  1069,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1070,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  1071,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,   532,   533,   534,
     535,   536,   537,   538,     0,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,     0,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,   532,   533,   534,   535,   536,   537,   538,     0,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,   532,   533,
     534,   535,   536,   537,   538,     0,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,   532,   533,   534,   535,   536,
     537,   538,     0,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1072,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,   532,   533,   534,
     535,   536,   537,   538,  1073,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  1077,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,  1090,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1091,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
     532,   533,   534,   535,   536,   537,   538,  1092,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1093,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  1094,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,   532,   533,   534,
     535,   536,   537,   538,  1095,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  1096,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,   532,   533,   534,   535,   536,   537,   538,  1097,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,   532,   533,
     534,   535,   536,   537,   538,  1108,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,   532,   533,   534,   535,   536,
     537,   538,  1109,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1110,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,   532,   533,   534,
     535,   536,   537,   538,  1114,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  1120,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,  1121,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1122,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
     532,   533,   534,   535,   536,   537,   538,  1149,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1539,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  1544,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,   532,   533,   534,
     535,   536,   537,   538,  1545,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  1546,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,   532,   533,   534,   535,   536,   537,   538,  1549,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,   532,   533,
     534,   535,   536,   537,   538,  1550,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,   532,   533,   534,   535,   536,
     537,   538,  1551,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1552,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,   532,   533,   534,
     535,   536,   537,   538,  1553,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  1554,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,  1557,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1558,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
     532,   533,   534,   535,   536,   537,   538,  1570,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  1571,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  1584,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,   532,   533,   534,
     535,   536,   537,   538,  1588,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  1589,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,   532,   533,   534,   535,   536,   537,   538,  1598,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,   532,   533,
     534,   535,   536,   537,   538,  1599,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,   532,   533,   534,   535,   536,
     537,   538,  1600,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1601,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,   532,   533,   534,
     535,   536,   537,   538,  1602,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  1603,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,  1680,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1885,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556,     0,
     532,   533,   534,   535,   536,   537,   538,  1956,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,  2021,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   536,   537,   538,  2052,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,   532,   533,   534,
     535,   536,   537,   538,  2053,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  2054,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,   532,   533,   534,   535,   536,   537,   538,  2055,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,     0,   556,   532,   533,
     534,   535,   536,   537,   538,  2056,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,   532,   533,   534,   535,   536,
     537,   538,  2065,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  2082,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,   532,   533,   534,
     535,   536,   537,   538,  2083,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,  2084,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,   532,   533,
     534,   535,   536,   537,   538,  2085,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     1,     0,     0,     0,
       2,     0,   532,   533,   534,   535,   536,   537,   538,  2086,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     3,   556,     0,
       0,     0,     4,     0,     0,     0,     0,  2088,   532,   533,
     534,   535,   536,   537,   538,     5,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,     0,   556,     0,     6,     7,     0,     0,
       0,     0,     0,  2089,     0,   532,   533,   534,   535,   536,
     537,   538,     0,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,     0,     0,     0,     0,     0,  2117,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,  2123,     0,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,  2127,   556,     0,     0,    12,     0,    13,     0,  1886,
    1887,     0,     0,     0,  1888,    14,  1889,     0,     0,     0,
       0,   624,   625,     0,   626,     0,   627,   628,  2132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,   629,     0,     0,     0,     0,     0,     0,  1890,
    1891,     0,  1892,     0,    17,  2244,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,   630,   631,   632,   633,     0,     0,
       0,     0,  2250,   634,     0,   532,   533,   534,   535,   536,
     537,   538,   635,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
       0,   556,   636,     0,     0,     0,  2274,     0,     0,     0,
     637,     0,     0,     0,  1864,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   638,     0,     0,     0,     0,
       0,     0,   639,   422,  2287,   640,     0,     0,   641,   642,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   643,     0,     0,     0,     0,
       0,  2302,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1893,  1894,     0,     0,  1865,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,   644,
     645,     0,     0,   646,   647,  2303,     0,     0,     0,   648,
       0,   649,     0,     0,     0,     0,   650,   651,     0,  1291,
       0,     0,   652,     0,   653,     0,     0,     0,     0,     0,
     654,     0,   655,   656,     0,     0,     0,     0,   657,  2351,
     532,   533,   534,   535,   536,   537,   538,     0,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,     0,   556,   532,   533,   534,
     535,   536,   537,   538,     0,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,     0,   556,   532,   533,   534,   535,   536,   537,
     538,     0,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   531,
     556,     0,     0,     0,     0,     0,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1299,   557,     0,     0,
       0,     0,     0,     0,   532,   533,   534,   535,   536,   537,
     538,  1290,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,     0,
     556,     0,     0,     0,     0,     0,     0,     0,  1531,     0,
       0,     0,     0,     0,     0,  1058,   532,   533,   534,   535,
     536,   537,   538,     0,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,     0,   556,     0,     0,     0,     0,     0,     0,   532,
     533,   534,   535,   536,   537,   538,  1134,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,     0,   556,     0,     0,     0,     0,
       0,     0,   532,   533,   534,   535,   536,   537,   538,  1364,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     0,   556
};

static const yytype_int16 yycheck[] =
{
     104,  1153,   327,  1213,  1514,  1387,  1247,   577,  1398,  1471,
    1173,  1174,   695,   321,   317,  1499,  1179,   375,  1855,  1229,
     882,  1497,     3,     4,     5,     6,     7,     8,  1014,   136,
    1240,   946,   947,  1011,   136,  1013,     5,   952,   159,   954,
      36,  1268,     8,  1630,    36,  1849,     4,  1408,  1409,    20,
      20,    51,     3,   199,     3,     3,     6,   159,   199,   154,
       4,   154,     4,    97,    40,     6,  1427,    16,   321,   240,
     174,   175,    90,     3,    48,     3,    87,    18,    55,     3,
     108,   185,   186,   187,    48,    38,   394,   191,    78,   277,
     274,   240,    78,    10,    11,    12,    13,    14,    15,    16,
      51,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   240,    36,
      49,   216,    75,   216,     3,   107,    18,   136,   266,     3,
       3,   107,    54,    55,   107,     4,     5,     6,     7,   219,
     277,   277,  1128,     3,   134,     3,     3,   100,   134,     3,
     266,     3,    74,    78,   154,   108,  1632,   266,   605,    74,
     266,    85,     3,    71,     3,    49,     3,   120,  1573,  1574,
     124,   125,   252,   113,   230,   241,   177,  1582,  1583,   100,
      39,   157,    14,   112,   157,    73,    18,   241,   871,    77,
     252,     3,     4,     5,     6,     7,     8,    71,   172,   120,
      59,   150,   258,    72,   887,   271,   310,   113,     3,  1671,
      84,   201,   193,   660,   215,   201,   216,   271,     3,   167,
     408,  1683,    95,   197,   408,   173,   156,    85,   112,     3,
     258,   208,   156,   197,   187,   269,   245,   408,   249,   167,
     258,   241,   184,   193,  1634,   173,   195,  1410,  1458,   193,
     138,   559,   193,   193,   228,   208,   351,   406,  1720,  1500,
    1470,   227,   408,   566,   228,   241,   248,   408,   405,  1731,
     408,   261,   408,     3,  1484,   261,   201,   156,   236,   237,
     401,  1143,   258,  1510,   406,   258,  1647,   193,   210,  1751,
     406,   371,   184,   241,  1881,   210,   156,   406,   156,   156,
     406,   408,   156,  1765,   156,  1283,   408,  1285,   277,   217,
     405,   406,  1774,   406,   418,   156,   269,  1000,   422,   156,
       3,   275,     3,   893,  2161,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   261,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,  1814,   457,   458,   459,  2160,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,  1850,  1851,  1362,   351,   319,   483,
     484,   193,   156,    18,   488,   489,   694,   351,    18,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   407,   516,   517,   518,   407,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   407,  1937,   532,   533,
     534,   535,   536,   381,   405,   405,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   381,   405,   107,   709,   561,   406,   712,
     907,   908,    97,   567,   333,   334,   335,    97,  1620,   274,
     917,   268,    74,   156,   727,   156,   405,     3,   406,    71,
     133,  1691,   268,  1693,   376,   377,   378,   379,   327,   328,
     329,   330,   409,  1898,  1899,  1900,  1901,  1902,  1903,  2355,
     204,   154,    62,   137,    87,  1910,    66,   124,   125,  1914,
       3,     3,   252,  1918,     3,  1977,    99,   964,   965,   966,
    1982,    18,     3,  1438,   266,  1440,  1441,   197,  2038,     3,
     266,   266,   274,    98,     3,   139,  2020,   406,   266,    36,
       3,     5,    71,    74,   405,   406,  2402,  2403,   183,    95,
     259,     3,   135,   183,   114,    84,   252,   117,  1940,    51,
     143,   252,   197,  1953,   268,    28,   200,   197,  1908,  1909,
      51,   280,   132,   876,   932,   933,  2432,     3,    71,  1919,
    1920,    78,   404,     3,   149,     5,  1156,   113,   692,  1159,
     192,    84,   152,   139,   391,    84,   266,    76,   202,    63,
     160,   235,    28,   408,     5,   391,   258,     0,   210,   155,
     193,  1058,  1059,   406,   267,    84,   113,   721,   722,    20,
      71,     3,   726,    10,  1834,   217,   103,    78,   881,   733,
    1840,    10,    11,    12,    13,    14,    15,    16,   240,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   202,    36,   275,   242,
       3,   192,   136,   405,     3,   990,   408,  2129,     3,   146,
     406,   406,   216,   219,   153,   221,   156,   154,   406,   210,
     154,   227,   159,   134,   163,  2147,     3,   138,   155,   249,
       9,   251,  1375,     3,   277,   407,   408,  1860,   177,   176,
    2210,    20,   176,   103,   155,   103,   252,   246,    95,   240,
     270,   190,   103,   164,    87,   102,  2106,  2057,  2058,  2059,
    2060,  2061,  2062,    51,   155,    51,    99,     3,  1175,   203,
       3,  2071,    60,   164,    60,  2075,   215,     3,   103,  2079,
     396,   845,   846,  2404,   848,   155,   146,   252,   146,   853,
     201,   138,   139,     3,   154,   146,   154,   136,     3,   238,
      51,   408,   135,   154,   396,    51,  2276,  2229,   155,    60,
     143,   408,  2433,  2434,    60,  2016,   176,   136,   176,    33,
      34,   146,    36,  1993,   136,   176,   171,   640,    51,   154,
    2195,   407,   408,   646,  2199,   648,     3,    13,    14,  2009,
      16,  2011,     3,    19,     3,  2466,     3,   398,   399,   400,
     261,   176,    32,    33,    34,   202,    36,   406,  2294,   281,
     193,   407,   408,   406,  1149,   371,    45,    46,  2218,   223,
     224,  2213,   219,  1141,   221,   407,   408,   407,   408,     3,
     227,     3,    28,    29,    30,    31,    32,    33,    34,   395,
      36,   197,  2362,    82,    83,   407,   408,   961,   281,   246,
     247,   939,   940,   406,   942,   943,   944,   407,   408,   242,
     948,   949,   950,   197,   261,   953,  1129,   405,    10,    11,
      12,    13,    14,    15,    16,  1138,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     3,    36,   407,   408,  2297,   407,   408,
       4,     5,  1016,     3,  1018,     3,   407,   408,   281,   407,
     408,  1025,  1026,   406,  1028,   281,  2331,  2332,  1032,  2334,
    2335,   407,   408,     4,     5,  1039,  1040,  1041,  1042,  2279,
    1044,  1045,  1046,  2283,  2154,   281,  2098,  1051,  1052,   281,
    1054,   197,  2342,   407,   408,     3,  1060,  1061,  1062,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   281,    36,
    1074,  1075,  1076,   281,  1078,   407,   408,   407,   408,   407,
     408,    57,    58,  2373,   371,  1089,   407,   408,   407,   408,
     407,   408,   407,   408,  1098,  1099,  1100,  1101,  1102,  1103,
    1104,  1105,   281,  1107,     4,  2395,  1259,  1111,   395,  1113,
     245,  1115,  1116,  1117,  1118,  1119,     3,   407,   408,  1123,
    1124,  1125,  2412,     8,  2364,  2365,     9,  2367,  2368,   408,
    1134,   405,  1136,  1137,    57,    58,  2426,   407,   408,   407,
     408,    36,   627,   628,   629,   630,  1150,   632,   406,  2439,
     635,   636,   637,  1157,   408,  1502,   406,   642,   643,   644,
     407,   408,   647,   407,   408,  2455,   407,   408,   406,    10,
      11,    12,    13,    14,    15,    16,   406,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   406,    36,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,  1211,    36,   406,
    1363,   407,   408,  1366,   406,  1368,   406,  1370,   406,    10,
      11,    12,    13,    14,    15,    16,   406,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   406,    36,    12,    13,    14,    15,
      16,   406,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  1273,
      36,   159,  1276,   407,   408,   407,   408,     3,  1282,   407,
     408,   407,   408,   407,   408,   407,   408,  1291,   406,  1293,
     407,   408,   407,   408,   406,  1299,  1300,    10,    11,    12,
      13,    14,    15,    16,   406,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   406,    36,    10,    11,    12,    13,    14,    15,
      16,   406,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   406,
      36,   407,   408,   407,   408,   407,   408,   407,   408,   406,
    1364,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   406,    36,   407,   408,   407,   408,   407,
     408,   407,   408,   407,   408,   406,  1390,   407,   408,   407,
     408,   407,   408,    10,    11,    12,    13,    14,    15,    16,
    1404,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    51,    36,
     406,    10,    11,    12,    13,    14,    15,    16,   406,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   406,    36,   406,    10,
      11,    12,    13,    14,    15,    16,   406,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   406,    36,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   406,    36,  1492,    10,
      11,    12,    13,    14,    15,    16,   406,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   406,    36,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  1535,    36,   406,  1538,   407,   408,   407,   408,   407,
     408,   407,   408,  1547,  1548,   405,   406,     3,   407,   408,
     407,   408,   405,   406,   406,  1559,   407,   408,   407,   408,
     407,   408,   407,   408,  1568,  1569,   407,   408,   407,   408,
     406,   889,   890,  1145,  1146,   406,  1624,  1625,     3,   406,
     406,  1585,  1586,  1587,   406,   406,  1590,  1591,   406,  1593,
     406,  1595,   406,  1597,   406,   406,   406,   406,   406,   406,
    1604,  1605,  1606,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,  1618,  1619,   407,   408,   406,   406,
     181,   406,   406,  1627,  1628,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,    18,   406,
       3,   406,   406,   406,   406,   406,   406,  1651,   406,   406,
     406,  1655,   406,   406,   406,   406,   406,   406,   406,    39,
     406,  1665,   406,   406,   406,   406,   406,   406,    48,   406,
     406,    51,   406,    53,   406,  1679,    56,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    71,    36,    53,   407,   408,   406,   406,    78,    79,
      53,     3,     4,     5,     6,     7,     8,    44,    10,     3,
      12,   277,    71,   245,    16,    17,    18,     3,    20,     3,
     197,   407,   408,     3,    26,    27,    28,    29,    30,   197,
     281,     3,     3,   113,   197,   281,   277,   281,    40,     3,
       3,    28,     3,     3,     3,     3,     3,     3,    50,    51,
     130,     3,    54,     3,     3,    74,   281,    59,    60,    61,
      62,    63,     3,     3,    66,     3,    68,    69,    70,    36,
       3,    73,    74,   409,    76,    77,    78,   407,   407,   407,
      82,   407,   407,   407,   164,   407,   407,   407,   407,   407,
     407,   408,     5,   407,    96,   407,   407,   407,   406,   101,
       3,     3,     3,     3,   106,   107,   108,   407,     3,   163,
     196,   113,   114,   193,   116,   117,   118,   119,   407,   408,
     122,   201,   124,   125,   126,   127,     3,   129,     3,   131,
     132,   271,   134,     3,   136,   137,     5,   139,   140,   141,
     142,   277,   402,   402,    42,    42,   148,   408,   150,     3,
     152,   153,     3,   155,   156,   157,   158,   159,   160,     3,
     162,   163,   164,   165,   166,     3,  1870,  1871,    18,     3,
       3,     3,  1876,     3,  1878,   177,     3,   179,     3,   181,
       3,   261,     3,   245,     3,     3,   407,   408,   190,     5,
     192,   193,   194,   195,   196,   197,   198,     3,    48,   201,
     202,    51,     5,    53,   379,   207,    56,   209,   210,   211,
       5,   213,   406,   215,   406,   217,   218,   219,   220,   406,
     406,    71,    64,   406,   406,   406,   406,     3,    78,    79,
       3,     3,     3,   407,     3,   408,     3,   239,   240,   241,
     407,    51,   197,   197,     3,   281,   197,   249,     3,   251,
     252,   253,   406,     3,   198,     3,   258,     3,   260,   261,
     262,     3,   407,   113,   266,   407,   241,   350,   270,   271,
     407,   350,   274,   275,   276,   277,   350,   407,   350,   281,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   241,    36,   350,   406,
     406,  2005,   406,   406,   164,   136,   408,   164,   164,   197,
     163,   163,   406,  2017,   164,     4,     4,   197,   271,   197,
     322,   323,   324,   325,   326,     3,   222,    36,   222,     3,
     245,   245,     5,     5,     5,     4,   409,     5,     5,     5,
     406,   406,   213,   193,  2048,   193,     3,     3,   197,   140,
       3,   201,     3,    94,   197,   397,     3,     3,    63,   179,
    2064,    20,     3,     4,     5,     6,     7,     8,   406,    10,
     199,    12,    91,   407,   409,    16,    17,    18,   161,    20,
       4,   350,   350,  2087,   350,    26,    27,    28,    29,    30,
     406,  2095,   406,   406,     5,     5,   406,   406,   141,    40,
    2104,   241,   404,   405,   406,   407,   408,   350,   410,    50,
      51,   261,     3,    54,   350,   350,  2120,  2121,    59,    60,
      61,    62,    63,   350,   350,    66,   350,    68,    69,    70,
     140,   407,    73,    74,     3,    76,    77,    78,     3,   179,
       3,    82,   164,   164,   406,     3,     3,    78,     3,   140,
     197,   268,    60,   245,   268,    96,   403,     3,   406,    20,
     101,   407,     3,     3,   406,   106,   107,   108,   407,   164,
     407,   164,   113,   114,   406,   116,   117,   118,   119,   407,
       3,   122,   407,   124,   125,   126,   127,   406,   129,   406,
     131,   132,     4,   134,   406,   136,   137,   406,   139,   140,
     141,   142,   406,     6,     4,     4,   212,   148,     3,   150,
     164,   152,   153,   406,   155,   156,   157,   158,   159,   160,
     406,   162,   163,   164,   165,   166,   408,   406,     3,    63,
     406,   148,   406,   406,   163,   407,   177,     3,   179,   407,
     181,  2245,   407,   406,   406,   406,    20,   406,   406,   190,
       4,   192,   193,   194,   195,   196,   197,   198,  2262,   406,
     201,   202,   407,     5,     3,   406,   207,   406,   209,   210,
     211,   406,   213,   193,   215,     3,   217,   218,   219,   220,
     408,   407,    52,   407,     3,   407,     4,   164,   164,     5,
     213,   240,   407,   406,   406,   406,     4,   406,   239,   240,
     241,   408,   406,     4,   406,   406,   406,   406,   249,   406,
     251,   252,   253,   406,     3,     3,     3,   258,     3,   260,
     261,   262,     3,     3,   406,   266,   406,   118,     3,   270,
     271,   266,   406,   274,   275,   276,   277,     3,   268,     4,
     281,   406,   140,   406,   406,     3,   406,   408,    10,    11,
      12,    13,    14,    15,    16,  2359,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   258,    36,    20,   197,     4,   407,   407,
     350,   322,   323,   324,   325,   326,   351,   350,     3,   407,
     407,   407,    10,    11,    12,    13,    14,    15,    16,   406,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     3,    36,     3,
       5,   408,     3,     3,     4,     5,     6,     7,     8,     3,
      10,    51,    12,     5,     5,    60,    16,    17,    18,     4,
      20,    60,   406,     3,   406,   406,    26,    27,    28,    29,
      30,   277,   407,   217,   268,   407,   271,   407,   164,   407,
      40,   406,   406,   404,   405,   406,   407,   408,   408,   410,
      50,    51,   408,   406,    54,   407,     3,    88,   406,    59,
      60,    61,    62,    63,   406,   406,    66,   164,    68,    69,
      70,   406,   408,    73,    74,   407,    76,    77,    78,   406,
      63,   198,    82,   406,     3,   407,   407,   406,    20,   407,
     407,    43,   408,    18,     3,   164,    96,   406,   406,     3,
     407,   101,     3,   407,   407,   407,   106,   107,   108,    60,
       3,    78,   406,   113,   114,   136,   116,   117,   118,   119,
     406,     3,   122,     3,   124,   125,   126,   127,    63,   129,
     406,   131,   132,   406,   134,    63,   136,   137,     3,   139,
     140,   141,   142,     3,   406,     3,    63,   350,   148,   407,
     150,   407,   152,   153,   407,   155,   156,   157,   158,   159,
     160,   350,   162,   163,   164,   165,   166,   350,   350,   407,
     407,   253,     5,     5,     5,   140,     3,   177,   214,   179,
     407,   181,   408,   207,     3,   269,     3,     5,    60,     5,
     190,   407,   192,   193,   194,   195,   196,   197,   198,    77,
     277,   201,   202,   156,   131,   166,   276,   207,   406,   209,
     210,   211,   207,   213,   406,   215,     5,   217,   218,   219,
     220,     3,   204,    20,     3,   101,     3,   408,   407,   407,
     407,   407,   407,   159,   407,   406,   408,   407,   406,   239,
     240,   241,   407,   406,   408,   406,     3,   407,   406,   249,
     407,   251,   252,   253,   408,   408,   407,   407,   258,     5,
     260,   261,   262,   407,     3,   407,   266,     3,     3,   406,
     270,   271,   406,   406,   274,   275,   276,   277,     3,     3,
       3,   281,    10,    11,    12,    13,    14,    15,    16,   408,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     4,    36,     4,
     231,   231,   408,   406,     3,   407,   207,     3,     3,    20,
       3,     3,   322,   323,   324,   325,   326,   407,   407,   180,
     180,   407,   407,    10,    11,    12,    13,    14,    15,    16,
     408,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   408,    36,
       3,    20,   245,     3,     3,     4,     5,     6,     7,     8,
     408,    10,     3,    12,   407,   407,   240,    16,    17,    18,
     407,    20,   408,     5,   406,   229,   406,    26,    27,    28,
      29,    30,   406,   408,   407,   407,   407,   407,     3,     5,
       3,    40,   228,     5,   404,   405,   406,   407,   408,   408,
     410,    50,    51,     3,   407,    54,   406,   151,    97,   408,
      59,    60,    61,    62,    63,   271,   174,    66,   407,    68,
      69,    70,   408,   407,    73,    74,   250,    76,    77,    78,
     191,   197,   197,    82,   191,     5,     5,   114,   423,  1293,
    1941,  1869,  1137,   571,  1621,   561,  1031,    96,  1394,   703,
     141,  2379,   101,   696,  2307,  2140,   590,   106,   107,   108,
     903,  1168,  2388,   983,   113,   114,    99,   116,   117,   118,
     119,   412,   711,   122,  1012,   124,   125,   126,   127,  2048,
     129,  1512,   131,   132,  2438,   134,  2016,   136,   137,  1489,
     139,   140,   141,   142,  1501,   951,   178,   621,    -1,   148,
     968,   150,    -1,   152,   153,   384,   155,   156,   157,   158,
     159,   160,  1669,   162,   163,   164,   165,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
     179,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
      -1,    -1,   201,   202,    -1,    -1,    -1,    -1,   207,    -1,
     209,   210,   211,    -1,   213,    -1,   215,    -1,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,   251,   252,   253,    -1,    -1,    -1,    -1,   258,
      -1,   260,   261,   262,    -1,    -1,    -1,   266,    -1,    -1,
      -1,   270,   271,    -1,    -1,   274,   275,   276,   277,    -1,
      -1,    -1,   281,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   407,
     408,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,   408,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   404,   405,   406,   407,   408,
      -1,   410,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,   122,    -1,   124,   125,   126,   127,
      -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,   137,
      -1,   139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,
     148,    -1,   150,    -1,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,    -1,   162,   163,   164,   165,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,   179,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,   202,    -1,    -1,    -1,    -1,   207,
      -1,   209,   210,   211,    -1,   213,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   249,    -1,   251,   252,   253,    -1,    -1,    -1,    -1,
     258,    -1,   260,   261,   262,    -1,    -1,    -1,   266,    -1,
      -1,    -1,   270,   271,    -1,    -1,   274,   275,   276,   277,
      -1,    -1,    -1,   281,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     407,   408,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,   408,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,   404,   405,   406,   407,
     408,    -1,   410,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
     107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,   122,    -1,   124,   125,   126,
     127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,
     137,    -1,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
      -1,   148,    -1,   150,    -1,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,    -1,   162,   163,   164,   165,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,   179,    -1,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,    -1,   192,   193,   194,   195,   196,
     197,   198,    -1,    -1,   201,   202,    -1,    -1,    -1,    -1,
     207,    -1,   209,   210,   211,    -1,   213,    -1,   215,    -1,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   249,    -1,   251,   252,   253,    -1,    -1,    -1,
      -1,   258,    -1,   260,   261,   262,    -1,    -1,    -1,   266,
      -1,    -1,    -1,   270,   271,    -1,    -1,   274,   275,   276,
     277,    -1,    -1,    -1,   281,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   407,   408,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,   408,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   404,   405,   406,
     407,   408,    -1,   410,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,
     116,   117,   118,   119,    -1,    -1,   122,    -1,   124,   125,
     126,   127,    -1,   129,    -1,   131,   132,    -1,   134,    -1,
     136,   137,    -1,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,    -1,   148,    -1,   150,    -1,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,    -1,   162,   163,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,    -1,   179,    -1,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,    -1,   192,   193,   194,   195,
     196,   197,   198,    -1,    -1,   201,   202,    -1,    -1,    -1,
      -1,   207,    -1,   209,   210,   211,    -1,   213,    -1,   215,
      -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,    -1,   251,   252,   253,    -1,    -1,
      -1,    -1,   258,    -1,   260,   261,   262,    -1,    -1,    -1,
     266,    -1,    -1,    -1,   270,   271,    -1,    -1,   274,   275,
     276,   277,    -1,    -1,    -1,   281,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   408,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,   408,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   404,   405,
     406,   407,   408,    -1,   410,    50,    51,    -1,    -1,    54,
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
      -1,    -1,    -1,    -1,   408,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,   408,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   404,
     405,   406,   407,   408,    -1,   410,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,    -1,   116,   117,   118,   119,    -1,    -1,   122,    -1,
     124,   125,   126,   127,    -1,   129,    -1,   131,   132,    -1,
     134,    -1,   136,   137,    -1,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,    -1,   148,    -1,   150,    -1,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
     164,   165,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,   179,    -1,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,    -1,    -1,   201,   202,    -1,
      -1,    -1,    -1,   207,    -1,   209,   210,   211,    -1,   213,
      -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,    -1,   251,   252,   253,
      -1,    -1,    -1,    -1,   258,    -1,   260,   261,   262,    -1,
      -1,    -1,   266,    -1,    -1,    -1,   270,   271,    -1,    -1,
     274,   275,   276,   277,    -1,    -1,    -1,   281,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,   408,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
     404,   405,   406,   407,   408,    -1,   410,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,   114,    -1,   116,   117,   118,   119,    -1,    -1,   122,
      -1,   124,   125,   126,   127,    -1,   129,    -1,   131,   132,
      -1,   134,    -1,   136,   137,    -1,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,    -1,   148,    -1,   150,    -1,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,    -1,   162,
     163,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,   179,    -1,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,    -1,    -1,   201,   202,
      -1,    -1,    -1,    -1,   207,    -1,   209,   210,   211,    -1,
     213,    -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,   251,   252,
     253,    -1,    -1,    -1,    -1,   258,    -1,   260,   261,   262,
      -1,    -1,    -1,   266,    -1,    -1,    -1,   270,   271,    -1,
      -1,   274,   275,   276,   277,    -1,    -1,    -1,   281,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,   408,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   404,   405,   406,   407,   408,    -1,   410,    50,    51,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,   114,    -1,   116,   117,   118,   119,    -1,    -1,
     122,    -1,   124,   125,   126,   127,    -1,   129,    -1,   131,
     132,    -1,   134,    -1,   136,   137,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,    -1,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,    -1,
     162,   163,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,    -1,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
     202,    -1,    -1,    -1,    -1,   207,    -1,   209,   210,   211,
      -1,   213,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,   251,
     252,   253,    -1,    -1,    -1,    -1,   258,    -1,   260,   261,
     262,    -1,    -1,    -1,   266,    -1,    -1,    -1,   270,   271,
      -1,    -1,   274,   275,   276,   277,    -1,    -1,    -1,   281,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,   408,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,   404,   405,   406,   407,   408,    -1,   410,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,   114,    -1,   116,   117,   118,   119,    -1,
      -1,   122,    -1,   124,   125,   126,   127,    -1,   129,    -1,
     131,   132,    -1,   134,    -1,   136,   137,    -1,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,
      -1,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
      -1,   162,   163,   164,   165,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,   179,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,    -1,    -1,
     201,   202,    -1,    -1,    -1,    -1,   207,    -1,   209,   210,
     211,    -1,   213,    -1,   215,    -1,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
     251,   252,   253,    -1,    -1,    -1,    -1,   258,    -1,   260,
     261,   262,    -1,    -1,    -1,   266,    -1,    -1,    -1,   270,
     271,    -1,    -1,   274,   275,   276,   277,    -1,    -1,    -1,
     281,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,   408,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   404,   405,   406,   407,   408,    -1,   410,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,   119,
      -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,   129,
      -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,   139,
     140,   141,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,
     150,    -1,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,    -1,   162,   163,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,   179,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,    -1,
      -1,   201,   202,    -1,    -1,    -1,    -1,   207,    -1,   209,
     210,   211,    -1,   213,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,   251,   252,   253,    -1,    -1,    -1,    -1,   258,    -1,
     260,   261,   262,    -1,    -1,    -1,   266,    -1,    -1,    -1,
     270,   271,    -1,    -1,   274,   275,   276,   277,    -1,    -1,
      -1,   281,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
     408,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,   404,   405,   406,   407,   408,    -1,
     410,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,   118,
     119,    -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,
     129,    -1,   131,   132,    -1,   134,    -1,   136,   137,    -1,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,   148,
      -1,   150,    -1,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,    -1,   162,   163,   164,   165,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
     179,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
      -1,    -1,   201,   202,    -1,    -1,    -1,    -1,   207,    -1,
     209,   210,   211,    -1,   213,    -1,   215,    -1,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,   251,   252,   253,    -1,    -1,    -1,    -1,   258,
      -1,   260,   261,   262,    -1,    -1,    -1,   266,    -1,    -1,
      -1,   270,   271,    -1,    -1,   274,   275,   276,   277,    -1,
      -1,    -1,   281,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    -1,    -1,   322,   323,   324,   325,   326,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,   408,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   404,   405,   406,   407,   408,
      -1,   410,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,   122,    -1,   124,   125,   126,   127,
      -1,   129,    -1,   131,   132,    -1,   134,    -1,   136,   137,
      -1,   139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,
     148,    -1,   150,    -1,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,    -1,   162,   163,   164,   165,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,   179,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,   192,   193,   194,   195,   196,   197,
     198,    -1,    -1,   201,   202,    -1,    -1,    -1,    -1,   207,
      -1,   209,   210,   211,    -1,   213,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,   239,   240,   241,    -1,    -1,    -1,    17,    18,    -1,
      -1,   249,    -1,   251,   252,   253,    -1,    27,    28,    -1,
     258,    -1,   260,   261,   262,    -1,    -1,    -1,   266,    -1,
      40,    -1,   270,   271,    -1,    -1,   274,   275,   276,   277,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,   408,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
     110,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   408,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   146,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   404,   405,   406,   407,
     408,    -1,   410,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   234,    -1,    -1,    -1,   238,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   263,    36,    -1,    -1,    -1,    -1,    -1,
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
     390,    -1,   392,   393,   394,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,    17,
      18,    -1,    10,    11,    12,    13,    14,    15,    16,    27,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,   408,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   408,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   408,   193,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   225,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   254,    -1,    -1,    -1,
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
     388,   389,   390,    -1,   392,   393,   394,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    13,    14,    15,
      16,    47,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,   408,    89,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     408,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   408,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      13,    14,    15,    16,   408,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,   232,   408,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,   263,    -1,    -1,
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
     386,   387,   388,   389,   390,    -1,   392,   393,   394,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
     406,    -1,    -1,    17,    18,    -1,    10,    11,    12,    13,
      14,    15,    16,    27,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    72,    36,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    10,    11,    12,    13,
      14,    15,    16,   408,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   408,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   408,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   408,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   275,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,
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
     384,   385,   386,   387,   388,   389,   390,    -1,   392,   393,
     394,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,   406,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   408,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   408,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,   408,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   408,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   408,
      36,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     408,   193,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   408,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
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
     392,   393,   394,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    17,    18,    -1,
      10,    11,    12,    13,    14,    15,    16,    27,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    72,    36,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   408,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   408,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   408,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   408,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
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
     390,    -1,   392,   393,   394,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    27,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   408,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   408,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   113,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     408,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   408,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
     388,   389,   390,    -1,   392,   393,   394,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,   408,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,   408,   113,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   408,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   140,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   183,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   408,   193,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
     386,   387,   388,   389,   390,    -1,   392,   393,   394,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
     406,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,   407,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,   407,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,   407,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   225,    36,    -1,    -1,    -1,    -1,    -1,    -1,   407,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,   263,
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
     384,   385,   386,   387,   388,   389,   390,    -1,   392,   393,
     394,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,   406,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
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
     392,   393,   394,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,   407,    -1,    89,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,   407,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
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
     390,    -1,   392,   393,   394,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   406,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   407,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,   407,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   407,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   407,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
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
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   407,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   407,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   407,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   407,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   407,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   407,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   407,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   407,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   407,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   407,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   407,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   407,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   407,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   407,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    37,    -1,    -1,    -1,
      41,    -1,    10,    11,    12,    13,    14,    15,    16,   407,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    68,    36,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,   407,    10,    11,
      12,    13,    14,    15,    16,    86,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,   407,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,   407,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,   169,   170,
      -1,    -1,    -1,    -1,   407,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   407,    36,    -1,    -1,   206,    -1,   208,    -1,   104,
     105,    -1,    -1,    -1,   109,   216,   111,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    -1,    66,    67,   407,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,    -1,   147,    -1,   255,   407,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   407,   123,    -1,    10,    11,    12,    13,    14,
      15,    16,   132,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,   152,    -1,    -1,    -1,   407,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,   182,   275,   407,   185,    -1,    -1,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
      -1,   407,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   278,   279,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,   239,
     240,    -1,    -1,   243,   244,   407,    -1,    -1,    -1,   249,
      -1,   251,    -1,    -1,    -1,    -1,   256,   257,    -1,   253,
      -1,    -1,   262,    -1,   264,    -1,    -1,    -1,    -1,    -1,
     270,    -1,   272,   273,    -1,    -1,    -1,    -1,   278,   407,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     3,
      36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   124,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    50,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    50,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   412,   451,   452,   491,   495,   497,   504,   505,   508,
     510,   511,   513,   514,   515,   516,   517,   518,   519,   521,
     524,   531,   532,   534,   550,   551,   560,   563,   565,   566,
     567,   590,   593,   600,   601,   604,   607,   608,   611,   219,
     252,   371,   252,     3,    10,    95,   102,   138,   139,   155,
     202,   219,   221,   227,   246,   247,   261,   371,   395,   572,
       3,   492,    95,   139,   155,   202,   219,   221,   227,   252,
     371,   395,   542,     3,     3,     3,    28,   252,   252,   542,
       8,   227,   591,   592,   470,   252,   542,   561,     3,    95,
     398,   399,   400,     0,   404,   507,     3,     3,     3,     3,
     406,   216,   156,   564,     3,   155,     3,     3,    85,   156,
       3,     3,     3,   564,   246,   155,   564,   396,   252,   552,
       3,   136,   154,   176,   203,   493,     3,   156,     3,   156,
       3,     3,   156,     3,   156,     3,     3,   156,     3,   156,
       3,   156,   396,   103,   146,   154,   159,   176,   543,   171,
     408,     3,     3,   543,     9,    20,     3,   113,   408,     3,
       4,     5,     6,     7,     8,    17,    18,    27,    28,    40,
      72,    77,    80,    81,    89,   106,   110,   146,   183,   193,
     225,   226,   233,   234,   238,   263,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   320,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   372,   373,   374,   375,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   392,   393,   394,
     406,   413,   471,   472,     3,   154,   176,     3,   167,   173,
     381,   406,   474,   475,   476,   477,   480,   490,     3,   159,
     401,   136,   136,   412,    54,    55,    74,   210,   277,   405,
     520,   100,   120,    38,    75,   100,   108,   120,   187,   208,
     269,    55,   208,   609,     3,     4,     5,     6,     7,     8,
     193,   407,   602,   603,   139,   202,   281,     3,    51,     3,
     406,   197,     3,   156,   281,   406,    39,    59,   605,   197,
       3,     3,    85,   156,     3,     3,   156,   564,   406,   553,
     405,   494,     3,   493,   136,   408,   281,   281,   281,   281,
     197,   281,    74,   210,   496,   281,   281,     3,   156,     3,
       4,   245,     3,   413,   413,   592,   405,   406,     9,   413,
     413,   413,   275,   413,   450,   405,   406,    36,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     413,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    36,    51,   473,   136,
     159,   408,   408,   405,   473,   406,     3,   406,   452,   474,
     240,   408,    76,   153,   177,   190,   215,   238,   481,   483,
      51,   479,   479,     3,   159,     3,     3,    53,    53,    44,
       3,   108,   258,   522,    71,    84,     3,    84,    71,   217,
       3,    71,    84,    71,   217,     3,    84,     3,    71,    84,
      71,   277,   245,    18,   184,   376,   377,   378,   379,   610,
     407,   408,     3,     3,    61,    62,    64,    66,    67,    82,
     114,   115,   116,   117,   123,   132,   152,   160,   175,   182,
     185,   188,   189,   205,   239,   240,   243,   244,   249,   251,
     256,   257,   262,   264,   270,   272,   273,   278,   586,   197,
       3,    16,   150,   195,   594,   595,   596,     3,   197,   281,
       3,   594,   107,   157,   258,   606,     3,   197,     3,   156,
     281,   609,   277,   509,   281,     3,     3,   554,   136,   245,
     555,    28,   274,   453,   266,   474,     3,     3,     3,     3,
       3,     3,     3,     3,     3,    74,   281,   240,   406,   544,
       3,   240,   544,     3,   413,   418,   422,   413,   413,   450,
     124,   125,   275,     3,     3,   409,   420,   427,   413,    65,
     178,   254,   413,   448,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   407,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   407,
     413,   413,   413,   407,   413,   413,   413,   413,   413,   413,
      28,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   407,   407,   407,   407,   407,   413,   413,   407,
     407,   407,   413,   413,     5,   407,   407,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   407,
     413,   413,   413,   407,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   407,   413,   413,   413,   413,   413,
       6,    18,   193,   319,   406,    13,    14,    16,    19,   413,
      40,    47,   232,   406,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
       3,   474,     3,   472,     3,   506,     3,   133,   154,   267,
     487,   478,   473,   413,   407,   407,     3,   562,   475,   177,
     215,   484,   476,   163,   196,   482,     3,     3,   271,     3,
     402,   402,     5,   520,    42,    42,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,   586,     3,   245,     3,
       3,     3,     5,     3,   379,     5,     5,   277,     5,    63,
       5,   603,   406,   406,   406,   582,   582,   582,   582,   582,
     582,   406,   582,   582,   582,    64,   583,   583,   582,   582,
     582,   406,   583,   582,   583,   406,   406,   406,    18,    36,
      78,   113,     3,   586,     3,     3,     3,   407,   408,   266,
     406,     3,     3,   197,   407,   197,    51,   525,     3,   197,
     281,     3,   406,     3,   154,   216,   351,   405,   406,   588,
     589,   407,   408,     4,   236,   237,   556,   413,   198,   463,
     474,   453,   494,   496,     3,     3,   549,     3,   545,   271,
     452,   549,   271,   452,   408,   407,   253,   124,   125,   413,
     413,   407,   413,   419,   452,   136,   408,   407,   136,   413,
     408,   408,   408,   407,   407,   407,   407,   407,   407,   408,
     408,   408,   408,   407,   408,   408,   408,   407,   407,   407,
     407,   408,   408,   407,   408,   407,   407,   407,    51,   408,
     408,   408,   408,   321,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   408,   408,   408,   407,   408,   350,
     350,   350,   407,   408,   407,   408,   407,   350,   350,   408,
     407,   407,   407,   407,   407,   407,   407,   407,   408,   408,
     408,   408,   408,   408,   408,   408,   407,   408,   407,   407,
     407,   408,   407,   408,   407,   408,   408,   408,   408,   408,
     407,   407,   407,   408,   408,   408,     6,   193,   423,   425,
     413,   413,   406,   413,    50,   406,   406,   406,   414,   409,
     453,   136,   408,   473,   164,   164,   164,   452,   487,   407,
      20,   405,   408,   453,   482,   482,   163,   197,   476,   163,
     406,   271,     4,     4,    45,    46,   522,   197,   197,    78,
     134,   201,   261,   586,   586,     3,   222,   222,   581,   586,
       3,   245,   245,     5,     5,   594,   594,     5,   584,   585,
     584,   584,     4,   587,   584,   584,   584,   585,   585,   584,
     584,   584,   587,   585,   584,   585,     5,     5,     5,   193,
     409,   406,   413,   406,   586,   586,   586,   213,   596,   268,
     391,     3,   327,   328,   329,   330,   502,   503,   266,   406,
     197,     3,    51,    60,     3,   223,   224,   140,   526,   266,
     406,     3,     3,   197,   397,   509,    94,     3,    71,    78,
     134,   138,   155,   164,   201,   261,   573,   574,   580,   479,
       3,    87,    99,   135,   143,   193,   242,   277,   406,   557,
     558,   559,    63,   179,   466,   453,    20,   199,   408,   535,
     407,   408,   406,   546,   535,   546,   535,   418,   413,   413,
     124,   253,    91,   408,   409,   407,   413,   413,   413,   136,
     161,   449,   449,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   586,   586,   413,   413,   413,     4,
     350,   350,   350,   350,   350,   350,   413,   413,   413,   413,
     406,   406,   406,   350,     5,   350,     5,   350,   406,   406,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     418,   452,   424,   426,    50,   413,   417,   413,   415,   421,
     416,   421,   452,   141,   454,   474,     3,   487,   140,   488,
     488,   488,   407,   479,   413,     3,     3,   463,   476,   413,
     197,   266,   485,   486,   476,     4,   193,   512,   406,   403,
     179,     3,   523,   523,   406,   164,   164,   406,   581,   581,
     586,    18,    39,    48,    51,    53,    56,    71,    78,    79,
     113,   130,   164,   193,   201,   261,   533,   581,     3,     3,
     407,   407,   407,   408,   259,   280,    82,    83,   407,   408,
     407,   407,   407,   407,    78,   413,   502,    62,    66,   114,
     117,   132,   152,   160,   249,   251,   270,   597,   406,   406,
     406,   406,   406,   406,   407,   408,   268,   502,     3,   266,
     406,    60,   598,   140,    40,   107,   157,   241,   258,   245,
     527,   268,   502,   266,   406,   197,     3,    20,     3,   406,
     588,     3,   406,   164,   155,   164,   406,   406,   164,   406,
     407,   408,     3,   452,     4,    87,   249,     6,     4,     4,
     406,   558,   408,     3,     5,   464,   465,   413,   212,   612,
     113,   413,   164,     3,     3,   113,   413,   548,   408,   535,
     535,   124,   413,   406,   419,   140,   407,   407,   408,   407,
     413,   413,   407,   407,   407,   407,   407,   408,   408,   407,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     407,   406,   406,   406,   406,   406,   406,   407,   408,   408,
     407,   407,   428,   429,   430,   406,   407,   408,   406,   407,
     408,   406,   446,   447,   407,   408,   408,   408,   407,   407,
     408,   408,   407,   408,   407,   408,   407,   408,   407,   407,
     407,   407,   407,   407,   408,   408,   408,   407,   407,   418,
     452,   413,   452,   452,   407,   452,   407,   407,    63,   148,
     458,   453,   163,   406,   406,   406,     3,    20,    20,   405,
     466,   413,   406,   486,   408,   512,     4,     5,   408,   277,
     413,   406,   406,     3,   579,   533,   533,   581,   193,     3,
     406,   406,   406,    52,     3,   406,     4,     4,     5,     6,
       7,    72,   333,   334,   335,   406,   164,   164,   533,   213,
      51,    60,     5,   240,     4,   585,     4,   585,   585,   406,
     407,   407,    51,    60,   502,     3,     3,     3,     3,     3,
       3,   406,   407,   406,   268,   391,   502,   598,     3,     4,
       5,     6,     7,     8,    10,    12,    16,    17,    18,    20,
      26,    27,    28,    29,    30,    40,    50,    51,    54,    59,
      60,    61,    62,    63,    66,    68,    69,    70,    73,    74,
      76,    77,    78,    82,    96,   101,   106,   107,   108,   113,
     114,   116,   117,   118,   119,   122,   124,   125,   126,   127,
     129,   131,   132,   134,   136,   137,   139,   140,   141,   142,
     148,   150,   152,   153,   155,   156,   157,   158,   159,   160,
     162,   163,   164,   165,   166,   177,   179,   181,   190,   192,
     193,   194,   195,   196,   197,   198,   201,   202,   207,   209,
     210,   211,   213,   215,   217,   218,   219,   220,   239,   240,
     241,   249,   251,   252,   253,   258,   260,   261,   262,   266,
     270,   271,   274,   275,   276,   277,   281,   322,   323,   324,
     325,   326,   404,   405,   406,   407,   408,   410,   599,   118,
       3,   528,   266,   529,   406,   407,   268,   502,     3,   266,
     406,     4,   140,   573,    78,   134,   201,   261,   413,   406,
     406,   406,     3,   469,   469,   406,   579,   569,   588,   574,
     586,   558,   407,   559,    49,   112,   405,   456,   456,   408,
     181,   408,     3,    28,   613,   258,    20,   407,   408,   547,
     197,   537,     4,   413,   413,   407,   104,   105,   109,   111,
     144,   145,   147,   278,   279,   413,   413,   413,   432,   433,
     431,   434,   435,   436,   413,   413,   351,   459,   459,   459,
     437,   350,     4,     5,   441,   350,     4,     5,   445,   459,
     459,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   407,   407,   407,   407,   407,   413,   455,   413,
     463,   454,     3,   489,   489,   489,   406,   413,   413,     3,
     612,   469,   512,   408,     3,     5,   407,     3,   576,     3,
     575,   407,   408,   533,     5,   413,     5,    51,    78,   201,
     261,   413,   406,   406,   406,   413,   597,    60,   598,   407,
       4,   413,    60,   598,   407,     3,   498,   407,   407,   407,
     408,   502,   502,   406,   406,   407,   124,   598,   598,   598,
     598,   598,   598,   217,   408,   406,   277,   530,   502,   406,
     407,   406,   268,   502,   407,   271,   407,   406,   164,   164,
     406,   407,   576,   469,   469,   407,   408,   407,   575,   407,
      48,   172,   197,   228,   351,   568,   581,   407,     3,   465,
     413,   413,   408,   536,   113,   413,   113,   413,   406,    88,
     612,   407,   407,   407,   407,   407,   407,   459,   459,   459,
     459,   459,   459,   407,   408,   407,    63,   198,   461,   461,
     461,   459,   406,   407,   407,   459,   406,   407,   407,   459,
     461,   461,   407,   407,   407,   407,   407,   408,   407,   407,
     408,   408,   408,   456,   277,   408,   457,   466,   458,   407,
     408,   407,   407,     3,    20,   407,   408,   512,    43,    18,
     407,   408,   407,   408,     3,   407,   408,   407,   407,   408,
     406,   406,   164,   407,   407,   407,   407,   407,    51,    60,
     598,   124,   407,   598,   124,   407,     3,   407,   407,   502,
       3,   124,   124,   124,   124,   124,   124,    60,     3,   413,
      78,   407,   502,   502,   406,   407,   136,   569,   588,   413,
     406,   406,   579,   407,   407,   407,     3,   407,     5,    20,
     406,     3,    63,    63,   456,     3,     3,   541,   548,   406,
     538,   461,   461,   461,   461,   461,   461,   413,     3,   460,
      63,   407,   407,   407,   461,   438,   350,   350,   461,   442,
     350,   350,   461,   407,   407,   413,     5,     5,     5,   214,
     413,   140,   467,   463,     3,   407,   413,   512,   408,   269,
     207,     3,     3,     5,    57,    58,     5,   413,   413,    60,
     598,   124,   124,   277,   499,   407,   407,   498,    77,   131,
     156,   166,   276,   598,   407,   406,   407,   407,   502,   406,
     407,   576,   575,   407,   207,     5,     3,   107,   248,   204,
     268,   204,    20,   408,   407,     3,   101,   539,   407,   407,
     407,   407,   407,   407,   407,   408,     3,   462,   407,   459,
     406,   406,   407,   459,   406,   406,   407,   407,   407,   408,
     408,   456,   230,   258,   159,   468,   466,   408,   512,     3,
     407,   407,   407,   407,   598,   124,   406,   407,   124,   413,
     407,     5,   407,   407,     3,   407,     3,     3,   406,   406,
     406,   413,     3,   407,   408,    90,   258,     3,   456,   408,
     461,   439,   440,   461,   443,   444,     4,     4,   231,   231,
     469,   512,   408,   406,    57,    58,   124,     3,   500,   501,
     499,   407,   407,   207,   405,   406,     3,     3,     3,    20,
       3,   540,     3,   407,   459,   459,   407,   459,   459,   407,
     407,   180,   180,   408,   512,     3,   577,    20,   407,   408,
     245,     3,     3,   577,   407,   407,   407,   413,   240,   456,
     461,   461,   461,   461,   512,   408,   407,   408,     5,   501,
     406,   405,   406,   406,   407,   406,   229,   541,   407,   407,
     407,   407,   408,   512,   578,     3,     5,     3,   577,   577,
     578,   228,   570,   571,     5,   512,   408,    18,    97,   183,
     197,   407,   406,   407,   407,    18,     3,   407,   408,   408,
     512,    97,   269,   151,   137,   200,   235,   107,   258,   577,
     578,   578,   271,   571,   512,   408,    98,   149,    74,   192,
     210,   240,    74,   192,   210,   240,   407,   174,   407,   512,
     113,   193,   113,   193,   578,   250,   407,     4,   184,   197,
     197,   191,   191,     5,     5
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
#line 497 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 503 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 504 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 506 "parser/evoparser.y"
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
#line 519 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 521 "parser/evoparser.y"
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
#line 549 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 557 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 565 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 571 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 578 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 579 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 580 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 581 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 582 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 583 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 584 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 585 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 586 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 587 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 588 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 589 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 590 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 591 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 592 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 593 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 594 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 595 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 596 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 598 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 603 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 604 "parser/evoparser.y"
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
#line 612 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 613 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 614 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 615 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 616 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 617 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 622 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 624 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 627 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 628 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 629 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 630 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 631 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 634 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 635 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 639 "parser/evoparser.y"
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
#line 648 "parser/evoparser.y"
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
#line 666 "parser/evoparser.y"
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
#line 675 "parser/evoparser.y"
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
#line 694 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 695 "parser/evoparser.y"
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
#line 755 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 764 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 770 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 775 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 777 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 779 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 784 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 789 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 797 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 66:
#line 799 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 67:
#line 801 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 68:
#line 803 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 69:
#line 805 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 70:
#line 807 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 71:
#line 809 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 72:
#line 811 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 73:
#line 813 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 74:
#line 815 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 75:
#line 822 "parser/evoparser.y"
    {
        /* Task 203: hnsw_filter_knn(tbl, idx, query, k, 'col=val[:mode]').
         * The 5th arg is a string literal — eval-time code splits it into
         * column/value (and optional strategy mode: auto/pre/post). */
        emit("CALL 5 HNSW_FILTER_KNN %d %s", (yyvsp[(9) - (12)].intval), (yyvsp[(11) - (12)].strval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_FILTER_KNN, (yyvsp[(3) - (12)].exprval), (yyvsp[(5) - (12)].exprval), (yyvsp[(7) - (12)].exprval), "HNSW_FILTER_KNN");
        if (n) { n->val.intval = (yyvsp[(9) - (12)].intval); n->subquery_sql = strdup((yyvsp[(11) - (12)].strval)); }
        free((yyvsp[(11) - (12)].strval));
        (yyval.exprval) = n;
    ;}
    break;

  case 76:
#line 833 "parser/evoparser.y"
    {
        /* Diagnostic sibling — same arg shape, returns strategy string. */
        emit("CALL 5 HNSW_HYBRID_EXPLAIN %d %s", (yyvsp[(9) - (12)].intval), (yyvsp[(11) - (12)].strval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_HYBRID_EXPLAIN, (yyvsp[(3) - (12)].exprval), (yyvsp[(5) - (12)].exprval), (yyvsp[(7) - (12)].exprval), "HNSW_HYBRID_EXPLAIN");
        if (n) { n->val.intval = (yyvsp[(9) - (12)].intval); n->subquery_sql = strdup((yyvsp[(11) - (12)].strval)); }
        free((yyvsp[(11) - (12)].strval));
        (yyval.exprval) = n;
    ;}
    break;

  case 77:
#line 843 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 79:
#line 847 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 80:
#line 847 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 81:
#line 848 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 82:
#line 848 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 83:
#line 849 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 84:
#line 850 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 85:
#line 857 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 86:
#line 858 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 87:
#line 865 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 88:
#line 866 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 89:
#line 876 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 90:
#line 880 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 91:
#line 881 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 92:
#line 882 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 883 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 884 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 885 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 886 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 97:
#line 887 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 891 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 99:
#line 892 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 100:
#line 893 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 101:
#line 894 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 102:
#line 895 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 103:
#line 896 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 104:
#line 898 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 899 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 106:
#line 900 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 107:
#line 901 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 108:
#line 902 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 109:
#line 903 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 110:
#line 904 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 111:
#line 905 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 112:
#line 906 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 907 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 114:
#line 908 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 115:
#line 909 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 116:
#line 911 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 117:
#line 912 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 118:
#line 913 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 119:
#line 914 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 120:
#line 915 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 121:
#line 916 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 122:
#line 917 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 123:
#line 918 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 124:
#line 919 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 125:
#line 920 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 126:
#line 921 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 127:
#line 922 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 128:
#line 923 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 129:
#line 924 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 130:
#line 925 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 131:
#line 926 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 132:
#line 928 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 133:
#line 929 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 134:
#line 930 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 135:
#line 931 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 136:
#line 932 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 137:
#line 933 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 138:
#line 936 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 139:
#line 937 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 140:
#line 938 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 939 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 142:
#line 940 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 143:
#line 941 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 144:
#line 942 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 145:
#line 943 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 146:
#line 944 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 945 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 946 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 149:
#line 947 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 150:
#line 948 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 151:
#line 949 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 152:
#line 950 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 153:
#line 951 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 154:
#line 952 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 155:
#line 953 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 156:
#line 954 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 157:
#line 955 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 158:
#line 956 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 159:
#line 957 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 160:
#line 958 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 161:
#line 959 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 162:
#line 960 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 163:
#line 961 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 962 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 165:
#line 963 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 166:
#line 964 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 167:
#line 965 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 168:
#line 966 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 169:
#line 967 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 170:
#line 968 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 171:
#line 969 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 172:
#line 971 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 173:
#line 972 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 174:
#line 973 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 175:
#line 974 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 176:
#line 975 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 177:
#line 976 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 178:
#line 977 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 179:
#line 978 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 180:
#line 980 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 181:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 182:
#line 982 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 183:
#line 983 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 184:
#line 984 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 185:
#line 985 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 186:
#line 986 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 187:
#line 987 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 188:
#line 988 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 189:
#line 989 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 190:
#line 990 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 191:
#line 991 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 192:
#line 992 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 193:
#line 993 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 194:
#line 994 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 195:
#line 995 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 196:
#line 996 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 197:
#line 997 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 198:
#line 998 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 199:
#line 999 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 1000 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 1001 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 202:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 203:
#line 1004 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 204:
#line 1005 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 205:
#line 1006 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1007 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 207:
#line 1009 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 208:
#line 1010 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1012 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 210:
#line 1013 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 211:
#line 1014 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 212:
#line 1016 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 213:
#line 1017 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 214:
#line 1018 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 215:
#line 1019 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 216:
#line 1026 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1033 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 218:
#line 1040 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 219:
#line 1044 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1048 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1052 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1056 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 223:
#line 1060 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 224:
#line 1066 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 225:
#line 1067 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 226:
#line 1068 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 227:
#line 1072 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 228:
#line 1078 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 229:
#line 1084 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 230:
#line 1085 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 231:
#line 1086 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1087 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1088 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1089 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 235:
#line 1090 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 236:
#line 1091 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1092 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1096 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 239:
#line 1098 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 240:
#line 1100 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 241:
#line 1102 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 242:
#line 1106 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 243:
#line 1114 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 244:
#line 1124 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 245:
#line 1125 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 246:
#line 1128 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 247:
#line 1129 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 248:
#line 1133 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 249:
#line 1141 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1149 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1157 "parser/evoparser.y"
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

  case 252:
#line 1171 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 253:
#line 1180 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 254:
#line 1185 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 255:
#line 1198 "parser/evoparser.y"
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

  case 257:
#line 1211 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1213 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 260:
#line 1216 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 261:
#line 1223 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 262:
#line 1231 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 263:
#line 1232 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1233 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 265:
#line 1236 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1237 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1241 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 271:
#line 1250 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 272:
#line 1252 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 275:
#line 1260 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 276:
#line 1262 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 281:
#line 1274 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 282:
#line 1280 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 283:
#line 1287 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 284:
#line 1295 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 285:
#line 1296 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 286:
#line 1297 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 287:
#line 1298 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1301 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 289:
#line 1302 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 290:
#line 1303 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 291:
#line 1304 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 292:
#line 1305 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 294:
#line 1309 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 295:
#line 1312 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 296:
#line 1313 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 297:
#line 1316 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 298:
#line 1317 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 299:
#line 1318 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 300:
#line 1319 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 301:
#line 1320 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 302:
#line 1321 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 303:
#line 1322 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 304:
#line 1323 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 305:
#line 1324 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 306:
#line 1327 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 307:
#line 1328 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 308:
#line 1330 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 309:
#line 1338 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 310:
#line 1343 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 311:
#line 1344 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 312:
#line 1345 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 313:
#line 1348 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 314:
#line 1349 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 317:
#line 1358 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 318:
#line 1366 "parser/evoparser.y"
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

  case 319:
#line 1375 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 320:
#line 1376 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 321:
#line 1378 "parser/evoparser.y"
    {
        emit("LATERAL %s", (yyvsp[(3) - (3)].strval));
        if (g_qctx && g_pending_lateral_sql) {
            AddLateralTable(g_pending_lateral_sql, (yyvsp[(3) - (3)].strval));
        }
        if (g_pending_lateral_sql) { free(g_pending_lateral_sql); g_pending_lateral_sql = NULL; }
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 322:
#line 1387 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 323:
#line 1392 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 324:
#line 1398 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 325:
#line 1405 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 326:
#line 1409 "parser/evoparser.y"
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

  case 327:
#line 1429 "parser/evoparser.y"
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

  case 330:
#line 1455 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 331:
#line 1457 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 332:
#line 1459 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 333:
#line 1461 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 334:
#line 1463 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 335:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 336:
#line 1467 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 337:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 338:
#line 1471 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1472 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 340:
#line 1475 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 341:
#line 1476 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 342:
#line 1479 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 343:
#line 1480 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 344:
#line 1481 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 347:
#line 1488 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 348:
#line 1489 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 349:
#line 1494 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 350:
#line 1496 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 351:
#line 1498 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1502 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1503 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 355:
#line 1506 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 356:
#line 1507 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 357:
#line 1510 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 358:
#line 1515 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 359:
#line 1525 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 360:
#line 1532 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 361:
#line 1533 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 362:
#line 1534 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 363:
#line 1535 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 364:
#line 1540 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 365:
#line 1544 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 366:
#line 1546 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 369:
#line 1552 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1557 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 371:
#line 1564 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 372:
#line 1571 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 374:
#line 1583 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 375:
#line 1584 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 376:
#line 1589 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 377:
#line 1596 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 378:
#line 1603 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 379:
#line 1611 "parser/evoparser.y"
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

  case 380:
#line 1621 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 381:
#line 1629 "parser/evoparser.y"
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

  case 382:
#line 1639 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 383:
#line 1647 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 384:
#line 1656 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 385:
#line 1665 "parser/evoparser.y"
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

  case 386:
#line 1675 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 387:
#line 1683 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 388:
#line 1692 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 389:
#line 1701 "parser/evoparser.y"
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

  case 390:
#line 1711 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 391:
#line 1720 "parser/evoparser.y"
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

  case 392:
#line 1737 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 393:
#line 1745 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX IF NOT EXISTS %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval), (yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(12) - (14)].intval), (yyvsp[(14) - (14)].intval) >> 16, (yyvsp[(14) - (14)].intval) & 0xFFFF);
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (14)].strval), (yyvsp[(7) - (14)].strval), (yyvsp[(11) - (14)].strval));
        free((yyvsp[(5) - (14)].strval)); free((yyvsp[(7) - (14)].strval)); free((yyvsp[(11) - (14)].strval));
    ;}
    break;

  case 394:
#line 1756 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 395:
#line 1758 "parser/evoparser.y"
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

  case 396:
#line 1771 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 397:
#line 1772 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 398:
#line 1775 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 399:
#line 1777 "parser/evoparser.y"
    {
        int lm = ((yyvsp[(1) - (3)].intval) >> 16) & 0xFFFF, le = (yyvsp[(1) - (3)].intval) & 0xFFFF;
        int rm = ((yyvsp[(3) - (3)].intval) >> 16) & 0xFFFF, re = (yyvsp[(3) - (3)].intval) & 0xFFFF;
        /* Later entries override earlier ones; 0 means "not set in this item". */
        int m  = rm ? rm : lm;
        int ef = re ? re : le;
        (yyval.intval) = (m << 16) | ef;
    ;}
    break;

  case 400:
#line 1789 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 401:
#line 1799 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 402:
#line 1804 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 403:
#line 1809 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 404:
#line 1815 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 405:
#line 1822 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 406:
#line 1829 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 407:
#line 1836 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 408:
#line 1846 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 409:
#line 1853 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1862 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 411:
#line 1869 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 412:
#line 1875 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 413:
#line 1883 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 414:
#line 1889 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 416:
#line 1897 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 417:
#line 1898 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 418:
#line 1899 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 419:
#line 1900 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 420:
#line 1916 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 421:
#line 1917 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 422:
#line 1918 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 423:
#line 1927 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1928 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1933 "parser/evoparser.y"
    {
        emit("CREATE CHECKPOINT STORE %s", (yyvsp[(4) - (5)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(5) - (5)].strval)) SetCheckpointStoreRetention((yyvsp[(5) - (5)].strval));
        CreateCheckpointStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(5) - (5)].strval)) free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 426:
#line 1943 "parser/evoparser.y"
    {
        /* "IF NOT EXISTS" is tokenized by the lexer as IF EXISTS with the
         * subtok flag set on EXISTS. Mirrors CREATE INDEX IF NOT EXISTS. */
        emit("CREATE CHECKPOINT STORE IF NOT EXISTS %s", (yyvsp[(6) - (7)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (7)].strval));
        if ((yyvsp[(7) - (7)].strval)) SetCheckpointStoreRetention((yyvsp[(7) - (7)].strval));
        CreateCheckpointStoreProcess(1);
        free((yyvsp[(6) - (7)].strval));
        if ((yyvsp[(7) - (7)].strval)) free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 427:
#line 1958 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 428:
#line 1959 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 429:
#line 1964 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 430:
#line 1972 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (5)].strval));
        SetCheckpointStoreCascade(1);
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 431:
#line 1981 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 432:
#line 2003 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 433:
#line 2004 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 434:
#line 2005 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 435:
#line 2010 "parser/evoparser.y"
    {
        emit("CHECKPOINT PUT INTO %s", (yyvsp[(4) - (20)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (20)].strval));
        SetCheckpointPutField(0, (yyvsp[(7) - (20)].strval));
        SetCheckpointPutField(1, (yyvsp[(9) - (20)].strval));
        SetCheckpointPutField(2, (yyvsp[(11) - (20)].strval));
        SetCheckpointPutField(3, (yyvsp[(13) - (20)].strval));
        SetCheckpointPutField(4, (yyvsp[(15) - (20)].strval));
        SetCheckpointPutField(5, (yyvsp[(17) - (20)].strval));
        SetCheckpointPutField(6, (yyvsp[(19) - (20)].strval));
        CheckpointPutProcess(0);
        free((yyvsp[(4) - (20)].strval));
        if ((yyvsp[(7) - (20)].strval)) free((yyvsp[(7) - (20)].strval)); if ((yyvsp[(9) - (20)].strval)) free((yyvsp[(9) - (20)].strval)); if ((yyvsp[(11) - (20)].strval)) free((yyvsp[(11) - (20)].strval)); if ((yyvsp[(13) - (20)].strval)) free((yyvsp[(13) - (20)].strval));
        if ((yyvsp[(15) - (20)].strval)) free((yyvsp[(15) - (20)].strval)); if ((yyvsp[(17) - (20)].strval)) free((yyvsp[(17) - (20)].strval)); if ((yyvsp[(19) - (20)].strval)) free((yyvsp[(19) - (20)].strval));
    ;}
    break;

  case 436:
#line 2027 "parser/evoparser.y"
    {
        emit("CHECKPOINT PUT WRITES INTO %s", (yyvsp[(5) - (21)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(5) - (21)].strval));
        SetCheckpointPutField(0, (yyvsp[(8) - (21)].strval));
        SetCheckpointPutField(1, (yyvsp[(10) - (21)].strval));
        SetCheckpointPutField(2, (yyvsp[(12) - (21)].strval));
        SetCheckpointPutField(3, (yyvsp[(14) - (21)].strval));
        SetCheckpointPutField(4, (yyvsp[(16) - (21)].strval));
        SetCheckpointPutField(5, (yyvsp[(18) - (21)].strval));
        SetCheckpointPutField(6, (yyvsp[(20) - (21)].strval));
        CheckpointPutProcess(1);
        free((yyvsp[(5) - (21)].strval));
        if ((yyvsp[(8) - (21)].strval))  free((yyvsp[(8) - (21)].strval));  if ((yyvsp[(10) - (21)].strval)) free((yyvsp[(10) - (21)].strval)); if ((yyvsp[(12) - (21)].strval)) free((yyvsp[(12) - (21)].strval)); if ((yyvsp[(14) - (21)].strval)) free((yyvsp[(14) - (21)].strval));
        if ((yyvsp[(16) - (21)].strval)) free((yyvsp[(16) - (21)].strval)); if ((yyvsp[(18) - (21)].strval)) free((yyvsp[(18) - (21)].strval)); if ((yyvsp[(20) - (21)].strval)) free((yyvsp[(20) - (21)].strval));
    ;}
    break;

  case 437:
#line 2048 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 438:
#line 2049 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 439:
#line 2055 "parser/evoparser.y"
    {
        emit("CHECKPOINT GET FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointGetProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 440:
#line 2064 "parser/evoparser.y"
    {
        emit("CHECKPOINT GET FROM %s THREAD %s AT %s", (yyvsp[(4) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (8)].strval));
        SetCheckpointThread((yyvsp[(6) - (8)].strval));
        SetCheckpointAtId((yyvsp[(8) - (8)].strval));
        CheckpointGetProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 441:
#line 2078 "parser/evoparser.y"
    {
        emit("CHECKPOINT LIST FROM %s THREAD %s", (yyvsp[(4) - (6)].strval), (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (6)].strval));
        SetCheckpointThread((yyvsp[(6) - (6)].strval));
        CheckpointListProcess();
        free((yyvsp[(4) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 442:
#line 2087 "parser/evoparser.y"
    {
        emit("CHECKPOINT LIST FROM %s THREAD %s LIMIT %d", (yyvsp[(4) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].intval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (8)].strval));
        SetCheckpointThread((yyvsp[(6) - (8)].strval));
        SetCheckpointLimit((yyvsp[(8) - (8)].intval));
        CheckpointListProcess();
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 443:
#line 2099 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 444:
#line 2105 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 445:
#line 2116 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 446:
#line 2122 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 447:
#line 2129 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 448:
#line 2135 "parser/evoparser.y"
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

  case 449:
#line 2151 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 450:
#line 2158 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 451:
#line 2167 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 452:
#line 2175 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 453:
#line 2181 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 455:
#line 2198 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 456:
#line 2202 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 457:
#line 2211 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 459:
#line 2226 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 460:
#line 2230 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 461:
#line 2235 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 462:
#line 2242 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 463:
#line 2247 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 464:
#line 2254 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 465:
#line 2258 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 466:
#line 2259 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 467:
#line 2265 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 468:
#line 2274 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 469:
#line 2275 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 470:
#line 2276 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 471:
#line 2280 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 472:
#line 2281 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 473:
#line 2282 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 474:
#line 2283 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 475:
#line 2284 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 476:
#line 2285 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 479:
#line 2294 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 480:
#line 2295 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 482:
#line 2300 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 484:
#line 2305 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 485:
#line 2310 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 486:
#line 2319 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 487:
#line 2325 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 488:
#line 2331 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 489:
#line 2338 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 490:
#line 2344 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 491:
#line 2351 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 492:
#line 2357 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 493:
#line 2363 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 494:
#line 2369 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 495:
#line 2375 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 496:
#line 2381 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 497:
#line 2387 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 498:
#line 2393 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 499:
#line 2399 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 500:
#line 2405 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 501:
#line 2411 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 502:
#line 2417 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 503:
#line 2423 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 504:
#line 2429 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 505:
#line 2435 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 506:
#line 2441 "parser/evoparser.y"
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

  case 507:
#line 2454 "parser/evoparser.y"
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

  case 508:
#line 2465 "parser/evoparser.y"
    { ;}
    break;

  case 509:
#line 2466 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 510:
#line 2467 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 511:
#line 2471 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 512:
#line 2479 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 513:
#line 2485 "parser/evoparser.y"
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

  case 515:
#line 2498 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 516:
#line 2498 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 519:
#line 2506 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 520:
#line 2507 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 521:
#line 2508 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 522:
#line 2512 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 523:
#line 2513 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 524:
#line 2514 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 525:
#line 2518 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 526:
#line 2526 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 527:
#line 2535 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 528:
#line 2536 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 529:
#line 2537 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 530:
#line 2538 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 531:
#line 2539 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 535:
#line 2546 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 536:
#line 2550 "parser/evoparser.y"
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

  case 537:
#line 2560 "parser/evoparser.y"
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

  case 538:
#line 2572 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 539:
#line 2573 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 540:
#line 2573 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 541:
#line 2576 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 542:
#line 2577 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 543:
#line 2578 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 544:
#line 2579 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 545:
#line 2583 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 546:
#line 2586 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 547:
#line 2587 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 548:
#line 2588 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 549:
#line 2589 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 550:
#line 2595 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 551:
#line 2601 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 552:
#line 2606 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 553:
#line 2611 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 554:
#line 2615 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 555:
#line 2619 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 556:
#line 2621 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 559:
#line 2627 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 560:
#line 2628 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 561:
#line 2632 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 562:
#line 2633 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 563:
#line 2637 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 564:
#line 2638 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 565:
#line 2639 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 572:
#line 2654 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 573:
#line 2655 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 574:
#line 2656 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 575:
#line 2657 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 576:
#line 2658 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 577:
#line 2659 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 578:
#line 2660 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 579:
#line 2661 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 580:
#line 2666 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 581:
#line 2675 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 582:
#line 2682 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 583:
#line 2683 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 584:
#line 2684 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 585:
#line 2689 "parser/evoparser.y"
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

  case 586:
#line 2700 "parser/evoparser.y"
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

  case 587:
#line 2712 "parser/evoparser.y"
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

  case 588:
#line 2723 "parser/evoparser.y"
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

  case 589:
#line 2738 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 590:
#line 2742 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 591:
#line 2746 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 592:
#line 2747 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 593:
#line 2752 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 594:
#line 2754 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 595:
#line 2756 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 596:
#line 2758 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 597:
#line 2761 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 598:
#line 2762 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 599:
#line 2768 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 600:
#line 2773 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 601:
#line 2775 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 602:
#line 2777 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 603:
#line 2779 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 604:
#line 2781 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 605:
#line 2785 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 606:
#line 2789 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 607:
#line 2790 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 608:
#line 2795 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 609:
#line 2805 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 611:
#line 2818 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 612:
#line 2826 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 613:
#line 2834 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 615:
#line 2842 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 616:
#line 2843 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 617:
#line 2844 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 618:
#line 2845 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 619:
#line 2847 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 620:
#line 2849 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 621:
#line 2851 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 624:
#line 2859 "parser/evoparser.y"
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

  case 625:
#line 2874 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 626:
#line 2882 "parser/evoparser.y"
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

  case 627:
#line 2896 "parser/evoparser.y"
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

  case 628:
#line 2910 "parser/evoparser.y"
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

  case 629:
#line 2924 "parser/evoparser.y"
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

  case 630:
#line 2936 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 631:
#line 2937 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 632:
#line 2938 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 633:
#line 2941 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 634:
#line 2942 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 635:
#line 2945 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 636:
#line 2946 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 637:
#line 2947 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 638:
#line 2948 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 639:
#line 2949 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 640:
#line 2950 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 641:
#line 2951 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 642:
#line 2952 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 643:
#line 2954 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 644:
#line 2956 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 645:
#line 2958 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 646:
#line 2960 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 647:
#line 2962 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 648:
#line 2964 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 649:
#line 2967 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 650:
#line 2968 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 651:
#line 2971 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 652:
#line 2972 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 653:
#line 2975 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 654:
#line 2976 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 656:
#line 2980 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 657:
#line 2981 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 658:
#line 2982 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 659:
#line 2983 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 660:
#line 2984 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 661:
#line 2985 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 662:
#line 2986 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 663:
#line 2987 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 664:
#line 2988 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 665:
#line 2989 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 666:
#line 2990 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 667:
#line 2991 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 668:
#line 2992 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 669:
#line 2993 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 670:
#line 2994 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 671:
#line 2995 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 672:
#line 2996 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 673:
#line 2999 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 674:
#line 3000 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 675:
#line 3003 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 676:
#line 3005 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 677:
#line 3013 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 678:
#line 3014 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 680:
#line 3016 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 681:
#line 3017 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 682:
#line 3018 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 683:
#line 3019 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 684:
#line 3020 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 685:
#line 3021 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 686:
#line 3022 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 687:
#line 3023 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 688:
#line 3024 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 689:
#line 3031 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 690:
#line 3032 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 691:
#line 3033 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 692:
#line 3034 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 693:
#line 3035 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 694:
#line 3036 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 695:
#line 3037 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 696:
#line 3038 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 697:
#line 3039 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 698:
#line 3040 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 699:
#line 3041 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 700:
#line 3042 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 701:
#line 3043 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 702:
#line 3044 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 703:
#line 3045 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 704:
#line 3046 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 705:
#line 3047 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 706:
#line 3048 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 707:
#line 3049 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 708:
#line 3050 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 709:
#line 3051 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 710:
#line 3054 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 711:
#line 3055 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 712:
#line 3056 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 713:
#line 3059 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 714:
#line 3060 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 715:
#line 3063 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 716:
#line 3064 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 717:
#line 3065 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 719:
#line 3069 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 720:
#line 3070 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 721:
#line 3074 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 722:
#line 3075 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 723:
#line 3076 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 724:
#line 3077 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 725:
#line 3078 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 726:
#line 3079 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 727:
#line 3080 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 728:
#line 3081 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 729:
#line 3082 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 730:
#line 3083 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 731:
#line 3084 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 732:
#line 3085 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 733:
#line 3086 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 734:
#line 3087 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 735:
#line 3088 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 736:
#line 3089 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 737:
#line 3090 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 738:
#line 3091 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 739:
#line 3092 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 740:
#line 3093 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 741:
#line 3094 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 742:
#line 3095 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 743:
#line 3096 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 744:
#line 3097 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 745:
#line 3098 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 746:
#line 3099 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 747:
#line 3100 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 748:
#line 3101 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 749:
#line 3102 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 750:
#line 3103 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 751:
#line 3104 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 752:
#line 3105 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 753:
#line 3106 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 754:
#line 3107 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 755:
#line 3108 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 756:
#line 3111 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 757:
#line 3112 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 758:
#line 3116 "parser/evoparser.y"
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

  case 759:
#line 3128 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 760:
#line 3129 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 761:
#line 3130 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 762:
#line 3134 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 763:
#line 3137 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 764:
#line 3138 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 768:
#line 3142 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 769:
#line 3143 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 770:
#line 3151 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 771:
#line 3156 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 772:
#line 3162 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 773:
#line 3168 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 774:
#line 3175 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 775:
#line 3182 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 776:
#line 3188 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 777:
#line 3194 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 778:
#line 3201 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 783:
#line 3217 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 784:
#line 3218 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 785:
#line 3219 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 786:
#line 3220 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 787:
#line 3223 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 788:
#line 3224 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 789:
#line 3225 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 790:
#line 3226 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 791:
#line 3227 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 792:
#line 3228 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 793:
#line 3229 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 794:
#line 3230 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 795:
#line 3231 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 796:
#line 3232 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 805:
#line 3249 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 806:
#line 3250 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 927:
#line 3268 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 928:
#line 3275 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 929:
#line 3280 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 930:
#line 3286 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 931:
#line 3292 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 932:
#line 3298 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 933:
#line 3309 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 934:
#line 3314 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 935:
#line 3320 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 938:
#line 3331 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 939:
#line 3332 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 940:
#line 3333 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 941:
#line 3334 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 942:
#line 3335 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 943:
#line 3336 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 944:
#line 3337 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 945:
#line 3344 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 946:
#line 3349 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 947:
#line 3356 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 948:
#line 3357 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 949:
#line 3360 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 950:
#line 3361 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 951:
#line 3362 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 952:
#line 3365 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 953:
#line 3370 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 954:
#line 3376 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 955:
#line 3385 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 956:
#line 3393 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 957:
#line 3403 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 958:
#line 3408 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 961:
#line 3421 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 962:
#line 3422 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 963:
#line 3423 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 964:
#line 3424 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 965:
#line 3425 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 966:
#line 3426 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 967:
#line 3427 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 968:
#line 3428 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 969:
#line 3431 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 970:
#line 3436 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 971:
#line 3442 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 972:
#line 3452 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 973:
#line 3459 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 974:
#line 3466 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 975:
#line 3474 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 977:
#line 3484 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 979:
#line 3488 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 980:
#line 3489 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11888 "parser/evoparser.tab.c"
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


#line 3492 "parser/evoparser.y"

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
