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
     WRITES = 646
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
#line 950 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 963 "parser/evoparser.tab.c"

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
#define YYFINAL  106
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13906

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  409
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  199
/* YYNRULES -- Number of rules.  */
#define YYNRULES  969
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2427

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   646

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     404,   405,    28,    26,   406,    27,   403,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   402,
       2,   408,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   407,    32,     2,     2,     2,     2,     2,
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
     395,   396,   397,   398,   399,   400,   401
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
    2096,  2102,  2109,  2112,  2116,  2119,  2122,  2125,  2130,  2132,
    2136,  2138,  2143,  2150,  2151,  2156,  2161,  2164,  2165,  2170,
    2178,  2183,  2185,  2189,  2191,  2193,  2195,  2206,  2207,  2210,
    2213,  2214,  2217,  2220,  2223,  2226,  2229,  2230,  2233,  2235,
    2239,  2240,  2245,  2246,  2252,  2258,  2269,  2280,  2298,  2311,
    2331,  2343,  2350,  2359,  2366,  2373,  2380,  2390,  2397,  2403,
    2412,  2420,  2430,  2439,  2450,  2460,  2468,  2476,  2477,  2479,
    2482,  2484,  2495,  2502,  2503,  2504,  2510,  2511,  2516,  2517,
    2521,  2526,  2529,  2530,  2536,  2540,  2546,  2547,  2550,  2553,
    2556,  2559,  2561,  2562,  2563,  2567,  2569,  2573,  2577,  2578,
    2585,  2587,  2589,  2593,  2597,  2605,  2609,  2613,  2619,  2625,
    2627,  2636,  2644,  2652,  2654,  2655,  2663,  2664,  2668,  2670,
    2674,  2676,  2678,  2680,  2682,  2684,  2685,  2687,  2692,  2696,
    2698,  2702,  2705,  2708,  2711,  2713,  2716,  2719,  2722,  2724,
    2726,  2736,  2737,  2740,  2743,  2747,  2753,  2759,  2767,  2773,
    2775,  2780,  2785,  2789,  2795,  2799,  2805,  2806,  2809,  2811,
    2817,  2825,  2833,  2843,  2855,  2857,  2860,  2864,  2866,  2877,
    2878,  2883,  2895,  2914,  2915,  2920,  2924,  2930,  2936,  2946,
    2957,  2965,  2967,  2971,  2981,  2991,  3001,  3008,  3020,  3029,
    3030,  3032,  3035,  3037,  3041,  3047,  3055,  3060,  3065,  3071,
    3077,  3082,  3089,  3101,  3115,  3129,  3145,  3150,  3157,  3159,
    3163,  3165,  3169,  3171,  3175,  3176,  3181,  3187,  3192,  3198,
    3203,  3209,  3214,  3220,  3225,  3230,  3234,  3238,  3242,  3245,
    3249,  3254,  3259,  3261,  3265,  3266,  3271,  3272,  3276,  3279,
    3283,  3287,  3291,  3295,  3301,  3307,  3313,  3317,  3323,  3326,
    3334,  3340,  3348,  3354,  3357,  3361,  3364,  3368,  3371,  3375,
    3381,  3386,  3392,  3400,  3409,  3418,  3426,  3433,  3440,  3446,
    3447,  3451,  3457,  3458,  3460,  3461,  3464,  3467,  3468,  3473,
    3477,  3480,  3484,  3488,  3492,  3496,  3500,  3504,  3508,  3512,
    3516,  3520,  3522,  3524,  3526,  3528,  3530,  3534,  3540,  3543,
    3548,  3550,  3552,  3554,  3556,  3560,  3564,  3568,  3572,  3578,
    3584,  3586,  3588,  3590,  3595,  3599,  3601,  3605,  3609,  3610,
    3612,  3614,  3616,  3620,  3624,  3627,  3629,  3633,  3637,  3641,
    3643,  3654,  3664,  3677,  3689,  3702,  3714,  3729,  3743,  3744,
    3746,  3748,  3752,  3755,  3759,  3763,  3767,  3769,  3771,  3773,
    3775,  3777,  3779,  3781,  3783,  3785,  3787,  3788,  3791,  3796,
    3802,  3808,  3814,  3820,  3826,  3828,  3830,  3832,  3834,  3836,
    3838,  3840,  3842,  3844,  3846,  3848,  3850,  3852,  3854,  3856,
    3858,  3860,  3862,  3864,  3866,  3868,  3870,  3872,  3874,  3876,
    3878,  3880,  3882,  3884,  3886,  3888,  3890,  3892,  3894,  3896,
    3898,  3900,  3902,  3904,  3906,  3908,  3910,  3912,  3914,  3916,
    3918,  3920,  3922,  3924,  3926,  3928,  3930,  3932,  3934,  3936,
    3938,  3940,  3942,  3944,  3946,  3948,  3950,  3952,  3954,  3956,
    3958,  3960,  3962,  3964,  3966,  3968,  3970,  3972,  3974,  3976,
    3978,  3980,  3982,  3984,  3986,  3988,  3990,  3992,  3994,  3996,
    3998,  4000,  4002,  4004,  4006,  4008,  4010,  4012,  4014,  4016,
    4018,  4020,  4022,  4024,  4026,  4028,  4030,  4032,  4034,  4036,
    4038,  4040,  4042,  4044,  4046,  4048,  4050,  4052,  4054,  4056,
    4058,  4060,  4062,  4064,  4066,  4068,  4070,  4072,  4074,  4078,
    4084,  4088,  4094,  4096,  4101,  4107,  4109,  4113,  4115,  4117,
    4119,  4121,  4123,  4125,  4127,  4129,  4143,  4145,  4147,  4149,
    4151,  4153,  4155,  4159,  4165,  4170,  4175,  4177,  4183,  4184,
    4187,  4191,  4194,  4198,  4201,  4204,  4207,  4209,  4212,  4214,
    4218,  4224,  4229,  4234,  4241,  4248,  4249,  4252,  4255,  4257
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     410,     0,    -1,   449,   402,    -1,   449,   402,   410,    -1,
       3,    -1,     3,   403,     3,    -1,    89,   403,     3,    -1,
     183,   404,     3,   405,    91,   404,     4,   405,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   411,    26,   411,    -1,   411,    27,   411,    -1,   411,
      28,   411,    -1,   411,    29,   411,    -1,   411,    30,   411,
      -1,   411,    31,   411,    -1,    27,   411,    -1,   404,   411,
     405,    -1,   411,    12,   411,    -1,   411,    10,   411,    -1,
     411,    11,   411,    -1,   411,    23,   411,    -1,   411,    24,
     411,    -1,   411,    32,   411,    -1,   411,    25,   411,    -1,
     411,    34,   411,    -1,   411,    33,   411,    -1,    18,   411,
      -1,    17,   411,    -1,   411,    20,   411,    -1,    -1,   411,
      20,   404,   412,   450,   405,    -1,    -1,   411,    20,    47,
     404,   413,   450,   405,    -1,    -1,   411,    20,   232,   404,
     414,   450,   405,    -1,    -1,   411,    20,    40,   404,   415,
     450,   405,    -1,   411,    20,    47,   404,   419,   405,    -1,
     411,    20,   232,   404,   419,   405,    -1,   411,    15,   193,
      -1,   411,    15,    18,   193,    -1,   411,    15,     6,    -1,
     411,    15,    18,     6,    -1,     8,     9,   411,    -1,   411,
      19,   411,    50,   411,    -1,   411,    18,    19,   411,    50,
     411,    -1,   411,    -1,   411,   406,   416,    -1,   411,    -1,
     411,   406,   417,    -1,    -1,   263,    36,   418,   417,   407,
      -1,   263,    36,   407,    -1,   411,    36,   411,   407,    -1,
     411,    -1,   380,   404,   411,   405,    -1,   380,   404,   411,
     406,   411,   405,    -1,   381,   404,   411,   405,    -1,   382,
     404,   411,   406,   411,   405,    -1,   383,   404,   405,    -1,
     384,   404,   411,   406,   411,   405,    -1,   385,   404,   411,
     406,   411,   405,    -1,   386,   404,   411,   406,   411,   405,
      -1,   387,   404,   411,   406,   411,   405,    -1,   388,   404,
     411,   405,    -1,   389,   404,   411,   405,    -1,   390,   404,
     411,   405,    -1,   411,    22,   411,    -1,   411,    21,   411,
      -1,   392,   404,   411,   406,   411,   406,   411,   406,     5,
     405,    -1,   393,   404,   411,   406,   411,   406,   411,   406,
       5,   406,     4,   405,    -1,   394,   404,   411,   406,   411,
     406,   411,   406,     5,   406,     4,   405,    -1,    -1,   416,
      -1,    -1,   411,    16,   404,   421,   416,   405,    -1,    -1,
     411,    18,    16,   404,   422,   416,   405,    -1,    -1,   411,
      16,   404,   423,   450,   405,    -1,    -1,   411,    18,    16,
     404,   424,   450,   405,    -1,    -1,   281,   404,   425,   450,
     405,    -1,     3,   404,   420,   405,    -1,   322,   404,    28,
     405,    -1,   322,   404,   411,   405,    -1,   323,   404,   411,
     405,    -1,   324,   404,   411,   405,    -1,   325,   404,   411,
     405,    -1,   326,   404,   411,   405,    -1,   320,   404,   411,
     405,    -1,   320,   404,   411,   321,     4,   405,    -1,    -1,
     342,   404,   405,   350,   404,   426,   457,   459,   405,    -1,
      -1,   343,   404,   405,   350,   404,   427,   457,   459,   405,
      -1,    -1,   344,   404,   405,   350,   404,   428,   457,   459,
     405,    -1,    -1,   323,   404,   411,   405,   350,   404,   429,
     457,   459,   405,    -1,    -1,   322,   404,    28,   405,   350,
     404,   430,   457,   459,   405,    -1,    -1,   322,   404,   411,
     405,   350,   404,   431,   457,   459,   405,    -1,    -1,   324,
     404,   411,   405,   350,   404,   432,   457,   459,   405,    -1,
      -1,   325,   404,   411,   405,   350,   404,   433,   457,   459,
     405,    -1,    -1,   326,   404,   411,   405,   350,   404,   434,
     457,   459,   405,    -1,    -1,   345,   404,   411,   405,   350,
     404,   435,   457,   459,   405,    -1,    -1,   345,   404,   411,
     406,     5,   405,   350,   404,   436,   457,   459,   405,    -1,
      -1,   345,   404,   411,   406,     5,   406,     4,   405,   350,
     404,   437,   457,   459,   405,    -1,    -1,   345,   404,   411,
     406,     5,   406,     5,   405,   350,   404,   438,   457,   459,
     405,    -1,    -1,   346,   404,   411,   405,   350,   404,   439,
     457,   459,   405,    -1,    -1,   346,   404,   411,   406,     5,
     405,   350,   404,   440,   457,   459,   405,    -1,    -1,   346,
     404,   411,   406,     5,   406,     4,   405,   350,   404,   441,
     457,   459,   405,    -1,    -1,   346,   404,   411,   406,     5,
     406,     5,   405,   350,   404,   442,   457,   459,   405,    -1,
      -1,   347,   404,     5,   405,   350,   404,   443,   457,   459,
     405,    -1,    -1,   348,   404,   405,   350,   404,   444,   457,
     459,   405,    -1,    -1,   349,   404,   405,   350,   404,   445,
     457,   459,   405,    -1,   282,   404,   411,   406,   411,   406,
     411,   405,    -1,   282,   404,   411,   406,   411,   405,    -1,
     282,   404,   411,   136,   411,   405,    -1,   282,   404,   411,
     136,   411,   140,   411,   405,    -1,   283,   404,   411,   405,
      -1,   283,   404,   446,   411,   136,   411,   405,    -1,   283,
     404,   446,   136,   411,   405,    -1,   327,   404,   411,   405,
      -1,   328,   404,   411,   405,    -1,   329,   404,   411,   405,
      -1,   330,   404,   411,   406,   411,   405,    -1,   331,   404,
     411,   406,   411,   406,   411,   405,    -1,   332,   404,   411,
     406,   411,   405,    -1,   294,   404,   411,   406,   411,   405,
      -1,   295,   404,   411,   406,   411,   405,    -1,   296,   404,
     411,   406,   411,   406,   411,   405,    -1,   297,   404,   411,
     406,   411,   406,   411,   405,    -1,   298,   404,   411,   405,
      -1,   299,   404,   411,   406,   411,   405,    -1,   300,   404,
     411,   406,   411,   405,    -1,   301,   404,   411,   406,   411,
     405,    -1,   302,   404,   411,   405,    -1,   303,   404,   411,
     405,    -1,   304,   404,   411,   405,    -1,   305,   404,   411,
     406,   411,   405,    -1,   305,   404,   411,   405,    -1,   306,
     404,   411,   406,   411,   405,    -1,   307,   404,   411,   405,
      -1,   308,   404,   411,   406,   411,   405,    -1,   309,   404,
     405,    -1,   310,   404,   411,   405,    -1,   311,   404,   411,
     405,    -1,   312,   404,   411,   405,    -1,   313,   404,   405,
      -1,   293,   404,   405,    -1,   286,   404,   411,   406,   411,
     405,    -1,   287,   404,   411,   405,    -1,   288,   404,   411,
     405,    -1,   289,   404,   411,   405,    -1,   290,   404,   411,
     405,    -1,   291,   404,   411,   405,    -1,   292,   404,   411,
     405,    -1,   352,   404,   411,   406,   411,   405,    -1,   353,
     404,   411,   405,    -1,   354,   404,   411,   405,    -1,   355,
     404,   411,   405,    -1,   356,   404,   411,   405,    -1,   357,
     404,   411,   405,    -1,   358,   404,   411,   405,    -1,   359,
     404,   411,   405,    -1,   360,   404,   411,   405,    -1,   361,
     404,   411,   406,   411,   406,   411,   405,    -1,   362,   404,
     411,   406,   411,   406,   411,   405,    -1,   363,   404,   411,
     406,   411,   406,   411,   405,    -1,   364,   404,   411,   406,
     411,   405,    -1,   365,   404,   411,   406,   411,   405,    -1,
     366,   404,   411,   406,   411,   406,   411,   405,    -1,   367,
     404,   411,   406,   411,   406,   411,   405,    -1,   368,   404,
     411,   406,   411,   405,    -1,   368,   404,   411,   406,   411,
     406,   411,   406,   411,   405,    -1,   369,   404,   411,   405,
      -1,   369,   404,   411,   406,   411,   405,    -1,   369,   404,
     411,   406,   411,   406,   411,   405,    -1,   370,   404,   411,
     405,    -1,   372,   404,   411,   405,    -1,   373,   404,   411,
     405,    -1,   374,   404,   411,   406,   411,   405,    -1,   374,
     404,   411,   406,   411,   406,   411,   405,    -1,   375,   404,
     405,    -1,   314,   404,   411,    51,   580,   405,    -1,   315,
     404,   411,   406,   580,   405,    -1,   316,   404,   411,   406,
     411,   405,    -1,   317,   404,   411,   406,   411,   405,    -1,
     318,   404,   411,   406,   411,   406,   411,   405,    -1,   411,
      15,   319,    -1,   330,   404,   411,   406,   411,   406,   411,
     405,    -1,   330,   404,   411,   406,   411,   406,   411,   406,
     411,   405,    -1,   333,   404,   405,    -1,   334,   404,   405,
      -1,   335,   404,   405,    -1,   336,   404,   405,    -1,   337,
     404,   405,    -1,   338,    -1,   339,    -1,   340,   404,   411,
     405,    -1,   341,   404,   411,   406,   411,   405,    -1,   178,
      -1,   254,    -1,    65,    -1,   284,   404,   411,   406,   447,
     405,    -1,   285,   404,   411,   406,   447,   405,    -1,   161,
     411,   278,    -1,   161,   411,   104,    -1,   161,   411,   105,
      -1,   161,   411,   109,    -1,   161,   411,   111,    -1,   161,
     411,   279,    -1,   161,   411,   145,    -1,   161,   411,   144,
      -1,   161,   411,   147,    -1,    77,   411,   448,   124,    -1,
      77,   411,   448,   125,   411,   124,    -1,    77,   448,   124,
      -1,    77,   448,   125,   411,   124,    -1,   275,   411,   253,
     411,    -1,   448,   275,   411,   253,   411,    -1,   411,    14,
     411,    -1,   411,    18,    14,   411,    -1,   411,    13,   411,
      -1,   411,    18,    13,   411,    -1,    72,    -1,    80,    -1,
      81,    -1,   225,    -1,   450,    -1,   241,   468,   469,    -1,
     241,   468,   469,   136,   472,   451,   452,   456,   461,   464,
     465,   466,    -1,   241,   468,   469,   159,     3,   136,   472,
     451,   452,   456,   461,   464,    -1,    -1,   274,   411,    -1,
      -1,   141,    63,   453,   455,    -1,   411,   454,    -1,   453,
     406,   411,   454,    -1,    -1,    49,    -1,   112,    -1,    -1,
     277,   214,    -1,    -1,   148,   411,    -1,    -1,   351,    63,
     458,    -1,     3,    -1,   458,   406,     3,    -1,    -1,   198,
      63,   460,    -1,     3,   454,    -1,   460,   406,     3,   454,
      -1,    -1,   198,    63,   462,    -1,   463,    -1,   462,   406,
     463,    -1,     3,   454,    -1,     3,   403,     3,   454,    -1,
       5,   454,    -1,    -1,   179,   411,    -1,   179,   411,   406,
     411,    -1,   179,   411,   181,   411,    -1,    -1,   140,   258,
      -1,   140,   230,    -1,   140,   258,   231,   180,    -1,   140,
     230,   231,   180,    -1,    -1,   159,   467,    -1,     3,    -1,
     467,   406,     3,    -1,    -1,   468,    40,    -1,   468,   106,
      -1,   468,   110,    -1,   468,   146,    -1,   468,   238,    -1,
     468,   226,    -1,   468,   234,    -1,   468,   233,    -1,   470,
      -1,   469,   406,   470,    -1,    28,    -1,   411,   471,    -1,
      51,     3,    -1,     3,    -1,    -1,   473,    -1,   472,   406,
     473,    -1,   474,    -1,   478,    -1,     3,   471,   485,    -1,
     173,     3,   471,   485,    -1,     3,   403,     3,   471,   485,
      -1,   488,   477,     3,    -1,   475,   477,     3,    -1,   381,
     404,   411,   405,    -1,   381,   404,   411,   405,   477,     3,
      -1,   381,   404,   411,   405,   477,     3,   404,     3,   405,
      -1,   404,   472,   405,    -1,    -1,   167,   404,   476,   450,
     405,    -1,    51,    -1,    -1,   473,   479,   163,   474,   483,
      -1,   473,   238,   474,    -1,   473,   238,   474,   197,   411,
      -1,   473,   481,   480,   163,   474,   484,    -1,   473,   190,
     482,   163,   474,    -1,    -1,   153,    -1,    76,    -1,    -1,
     196,    -1,   177,    -1,   215,    -1,   177,   480,    -1,   215,
     480,    -1,    -1,    -1,   484,    -1,   197,   411,    -1,   266,
     404,   467,   405,    -1,   267,   164,   486,   404,   487,   405,
      -1,   154,   164,   486,   404,   487,   405,    -1,   133,   164,
     486,   404,   487,   405,    -1,    -1,   140,   163,    -1,    -1,
       3,    -1,   487,   406,     3,    -1,   404,   450,   405,    -1,
     489,    -1,   107,   490,   136,     3,   451,   461,   464,   606,
      -1,   490,   176,    -1,   490,   203,    -1,   490,   154,    -1,
      -1,   107,   490,   491,   136,   472,   451,    -1,     3,   492,
      -1,   491,   406,     3,   492,    -1,    -1,   403,    28,    -1,
     107,   490,   136,   491,   266,   472,   451,    -1,   493,    -1,
     108,   252,     3,   494,    -1,   108,   252,   156,   281,     3,
     494,    -1,    -1,    74,    -1,   210,    -1,   495,    -1,    73,
     155,     3,   197,     3,   404,   500,   405,    -1,    73,   138,
     155,     3,   197,     3,   404,   500,   405,    -1,    73,   155,
     156,   281,     3,   197,     3,   404,   500,   405,    -1,    73,
     261,   155,     3,   197,     3,   404,   500,   405,    -1,    73,
     261,   155,   156,   281,     3,   197,     3,   404,   500,   405,
      -1,    73,   155,     3,   197,     3,   266,   268,   404,   500,
     405,    -1,    73,   155,   156,   281,     3,   197,     3,   266,
     268,   404,   500,   405,    -1,    73,   261,   155,     3,   197,
       3,   266,   268,   404,   500,   405,    -1,    73,   261,   155,
     156,   281,     3,   197,     3,   266,   268,   404,   500,   405,
      -1,    73,   155,    85,     3,   197,     3,   404,   500,   405,
      -1,    73,   155,    85,   156,   281,     3,   197,     3,   404,
     500,   405,    -1,    73,   261,   155,    85,     3,   197,     3,
     404,   500,   405,    -1,    73,   261,   155,    85,   156,   281,
       3,   197,     3,   404,   500,   405,    -1,    73,   155,    85,
       3,   197,     3,   266,   268,   404,   500,   405,    -1,    73,
     261,   155,    85,     3,   197,     3,   266,   268,   404,   500,
     405,    -1,    73,   155,     3,   197,     3,   266,   391,   404,
       3,   496,   405,   497,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   391,   404,     3,   496,   405,   497,    -1,
      -1,     3,    -1,    -1,   277,   404,   498,   405,    -1,   499,
      -1,   498,   406,   499,    -1,     3,    20,     5,    -1,     3,
      -1,   500,   406,     3,    -1,   501,    -1,   327,   404,     3,
     405,    -1,   328,   404,     3,   405,    -1,   329,   404,     3,
     405,    -1,   330,   404,     3,   406,     3,   405,    -1,   502,
      -1,   108,   155,     3,    -1,   503,   505,    -1,   255,   252,
       3,    -1,   255,   252,     3,   406,   504,    -1,     3,    -1,
     504,   406,     3,    -1,    -1,   505,    74,    -1,   505,   210,
      -1,   505,    55,    53,    -1,   505,    54,    53,    -1,   509,
      -1,   510,    -1,   511,    -1,   506,    -1,   508,    -1,    73,
     395,   396,     3,   507,    -1,    73,   395,   396,   156,   281,
       3,   507,    -1,    -1,   277,   404,   397,    20,     4,   405,
      -1,   108,   395,   396,     3,    -1,   108,   395,   396,     3,
      74,    -1,   108,   395,   396,   156,   281,     3,    -1,   168,
       3,    -1,   168,     3,   171,    -1,   170,     3,    -1,   170,
      28,    -1,   169,     3,    -1,   169,     3,   406,     4,    -1,
     512,    -1,   206,   252,     3,    -1,   513,    -1,   515,     3,
     514,   516,    -1,   515,     3,   403,     3,   514,   516,    -1,
      -1,   277,    44,     5,    45,    -1,   277,    44,     5,    46,
      -1,    41,   252,    -1,    -1,   258,    42,   197,   517,    -1,
     258,    42,   197,   517,   277,     5,    43,    -1,   108,    42,
     197,   517,    -1,     3,    -1,   517,   406,     3,    -1,   526,
      -1,   518,    -1,   525,    -1,    73,   221,     3,   197,     3,
     519,   520,   521,   523,   524,    -1,    -1,    51,   223,    -1,
      51,   224,    -1,    -1,   140,    40,    -1,   140,   241,    -1,
     140,   157,    -1,   140,   258,    -1,   140,   107,    -1,    -1,
     245,   522,    -1,     3,    -1,   522,   406,     3,    -1,    -1,
     266,   404,   411,   405,    -1,    -1,   277,    78,   404,   411,
     405,    -1,   108,   221,     3,   197,     3,    -1,    37,   252,
       3,    38,    71,     3,    78,   404,   411,   405,    -1,    37,
     252,     3,    38,    71,     3,   261,   404,   573,   405,    -1,
      37,   252,     3,    38,    71,     3,   134,   164,   404,   570,
     405,   207,     3,   404,   571,   405,   572,    -1,    37,   252,
       3,    38,    71,     3,    78,   404,   411,   405,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   134,   164,   404,
     570,   405,   207,     3,   404,   571,   405,   572,    18,   269,
      -1,    37,   252,     3,    38,    71,     3,   201,   164,   404,
     569,   405,    -1,    37,   252,     3,   108,    71,     3,    -1,
      37,   252,     3,   208,    71,     3,   245,     3,    -1,    37,
     252,     3,   120,    71,     3,    -1,    37,   252,     3,   100,
      71,     3,    -1,    37,   252,     3,   269,    71,     3,    -1,
      37,   252,     3,    38,    84,     3,   580,   575,   527,    -1,
      37,   252,     3,   108,    84,     3,    -1,    37,   252,     3,
     108,     3,    -1,    37,   252,     3,   208,    84,     3,   245,
       3,    -1,    37,   252,     3,   208,     3,   245,     3,    -1,
      37,   252,     3,   187,    84,     3,   580,   575,   527,    -1,
      37,   252,     3,   187,     3,   580,   575,   527,    -1,    37,
     252,     3,    75,    84,     3,     3,   580,   575,   527,    -1,
      37,   252,     3,    75,     3,     3,   580,   575,   527,    -1,
      37,   252,     3,   120,   217,     3,   222,    -1,    37,   252,
       3,   100,   217,     3,   222,    -1,    -1,   130,    -1,    39,
       3,    -1,   528,    -1,   157,   536,   537,     3,   538,   271,
     540,   529,   531,   606,    -1,   157,   536,   537,     3,   538,
     450,    -1,    -1,    -1,   199,   164,   258,   530,   535,    -1,
      -1,   197,    88,   532,   533,    -1,    -1,   404,     3,   405,
      -1,   404,     3,   406,     3,    -1,   101,    90,    -1,    -1,
     101,   258,   534,   240,   535,    -1,     3,    20,   411,    -1,
     535,   406,     3,    20,   411,    -1,    -1,   536,   176,    -1,
     536,   103,    -1,   536,   146,    -1,   536,   154,    -1,   159,
      -1,    -1,    -1,   404,   539,   405,    -1,     3,    -1,   539,
     406,     3,    -1,   404,   542,   405,    -1,    -1,   540,   406,
     541,   404,   542,   405,    -1,   411,    -1,   113,    -1,   542,
     406,   411,    -1,   542,   406,   113,    -1,   157,   536,   537,
       3,   240,   543,   529,    -1,     3,    20,   411,    -1,     3,
      20,   113,    -1,   543,   406,     3,    20,   411,    -1,   543,
     406,     3,    20,   113,    -1,   544,    -1,   216,   536,   537,
       3,   538,   271,   540,   529,    -1,   216,   536,   537,     3,
     240,   543,   529,    -1,   216,   536,   537,     3,   538,   450,
     529,    -1,   545,    -1,    -1,    86,     3,   546,   547,   549,
     550,   551,    -1,    -1,   404,   548,   405,    -1,     3,    -1,
     548,   406,     3,    -1,   136,    -1,   245,    -1,     4,    -1,
     236,    -1,   237,    -1,    -1,   552,    -1,   277,   404,   552,
     405,    -1,   404,   552,   405,    -1,   553,    -1,   552,   406,
     553,    -1,   135,    87,    -1,   135,   249,    -1,    99,     4,
      -1,   143,    -1,   143,     6,    -1,   193,     4,    -1,   242,
       4,    -1,    87,    -1,   554,    -1,   258,   555,   472,   240,
     556,   451,   461,   464,   606,    -1,    -1,   536,   176,    -1,
     536,   154,    -1,     3,    20,   411,    -1,     3,   403,     3,
      20,   411,    -1,   556,   406,     3,    20,   411,    -1,   556,
     406,     3,   403,     3,    20,   411,    -1,   208,   252,     3,
     245,     3,    -1,   557,    -1,    73,    95,   558,     3,    -1,
      73,   227,   558,     3,    -1,   108,    95,     3,    -1,   108,
      95,   156,   281,     3,    -1,   108,   227,     3,    -1,   108,
     227,   156,   281,     3,    -1,    -1,   156,   281,    -1,   559,
      -1,    73,   102,     3,    51,   580,    -1,    73,   102,     3,
      51,   580,   113,   411,    -1,    73,   102,     3,    51,   580,
      18,   193,    -1,    73,   102,     3,    51,   580,    78,   404,
     411,   405,    -1,    73,   102,     3,    51,   580,    18,   193,
      78,   404,   411,   405,    -1,   560,    -1,   267,     3,    -1,
     267,    95,     3,    -1,   561,    -1,    73,   566,   252,   558,
       3,   404,   567,   405,   563,   562,    -1,    -1,   172,   404,
       3,   405,    -1,    73,   566,   252,   558,     3,   403,     3,
     404,   567,   405,   563,    -1,    73,   566,   252,   558,     3,
     351,    94,     3,   140,   271,   136,   404,     5,   405,   245,
     404,     5,   405,    -1,    -1,   563,    48,    20,     5,    -1,
     563,    48,     5,    -1,   563,   197,     3,   107,     3,    -1,
     563,   197,     3,   248,     3,    -1,   563,   228,    63,   268,
     404,     3,   405,   229,     5,    -1,   563,   228,    63,   204,
     404,     3,   405,   404,   564,   405,    -1,   563,   351,    63,
     204,   404,     3,   405,    -1,   565,    -1,   564,   406,   565,
      -1,   228,     3,   271,   174,   250,     4,   197,   191,     5,
      -1,   228,     3,   271,   174,   250,   184,   197,   191,     5,
      -1,    73,   566,   252,   558,     3,   404,   567,   405,   582,
      -1,    73,   566,   252,   558,     3,   582,    -1,    73,   566,
     252,   558,     3,   403,     3,   404,   567,   405,   582,    -1,
      73,   566,   252,   558,     3,   403,     3,   582,    -1,    -1,
     246,    -1,   247,   246,    -1,   568,    -1,   567,   406,   568,
      -1,   201,   164,   404,   569,   405,    -1,    71,     3,   201,
     164,   404,   569,   405,    -1,   164,   404,   467,   405,    -1,
     155,   404,   467,   405,    -1,   138,   155,   404,   467,   405,
      -1,   138,   164,   404,   467,   405,    -1,    78,   404,   411,
     405,    -1,    71,     3,    78,   404,   411,   405,    -1,   134,
     164,   404,   570,   405,   207,     3,   404,   571,   405,   572,
      -1,   134,   164,   404,   570,   405,   207,     3,   403,     3,
     404,   571,   405,   572,    -1,    71,     3,   134,   164,   404,
     570,   405,   207,     3,   404,   571,   405,   572,    -1,    71,
       3,   134,   164,   404,   570,   405,   207,     3,   403,     3,
     404,   571,   405,   572,    -1,   261,   404,   573,   405,    -1,
      71,     3,   261,   404,   573,   405,    -1,     3,    -1,   569,
     406,     3,    -1,     3,    -1,   570,   406,     3,    -1,     3,
      -1,   571,   406,     3,    -1,    -1,   572,   197,   107,    74,
      -1,   572,   197,   107,   240,   193,    -1,   572,   197,   107,
     210,    -1,   572,   197,   107,   240,   113,    -1,   572,   197,
     258,    74,    -1,   572,   197,   258,   240,   193,    -1,   572,
     197,   258,   210,    -1,   572,   197,   258,   240,   113,    -1,
     572,   197,   107,   192,    -1,   572,   197,   258,   192,    -1,
     572,   183,   137,    -1,   572,   183,   235,    -1,   572,   183,
     200,    -1,   572,    97,    -1,   572,    18,    97,    -1,   572,
      97,   151,    98,    -1,   572,    97,   151,   149,    -1,     3,
      -1,   573,   406,     3,    -1,    -1,   574,     3,   580,   575,
      -1,    -1,   575,    18,   193,    -1,   575,   193,    -1,   575,
     113,     4,    -1,   575,   113,     5,    -1,   575,   113,     7,
      -1,   575,   113,     6,    -1,   575,   113,   333,   404,   405,
      -1,   575,   113,   334,   404,   405,    -1,   575,   113,   335,
     404,   405,    -1,   575,   113,    72,    -1,   575,   113,   404,
     411,   405,    -1,   575,    48,    -1,   575,    48,   404,     5,
     406,     5,   405,    -1,   575,    48,   404,     5,   405,    -1,
     575,    53,   404,     5,   406,     5,   405,    -1,   575,    53,
     404,     5,   405,    -1,   575,    53,    -1,   575,   261,   164,
      -1,   575,   261,    -1,   575,   201,   164,    -1,   575,   164,
      -1,   575,    79,     4,    -1,   575,    78,   404,   411,   405,
      -1,   575,    71,     3,   261,    -1,   575,    71,     3,   201,
     164,    -1,   575,    71,     3,    78,   404,   411,   405,    -1,
     575,    56,    52,    51,   404,   411,   405,    57,    -1,   575,
      56,    52,    51,   404,   411,   405,    58,    -1,   575,    56,
      52,    51,   404,   411,   405,    -1,   575,    51,   404,   411,
     405,    57,    -1,   575,    51,   404,   411,   405,    58,    -1,
     575,    51,   404,   411,   405,    -1,    -1,   404,     5,   405,
      -1,   404,     5,   406,     5,   405,    -1,    -1,    64,    -1,
      -1,   578,   259,    -1,   578,   280,    -1,    -1,   579,    82,
     240,     4,    -1,   579,    83,     4,    -1,    67,   576,    -1,
     244,   576,   578,    -1,   239,   576,   578,    -1,   189,   576,
     578,    -1,   160,   576,   578,    -1,   152,   576,   578,    -1,
      66,   576,   578,    -1,   205,   576,   578,    -1,   114,   576,
     578,    -1,   132,   576,   578,    -1,   116,   576,   578,    -1,
     117,    -1,   257,    -1,   251,    -1,   115,    -1,   278,    -1,
      82,   576,   579,    -1,   270,   404,     5,   405,   579,    -1,
      64,   576,    -1,   272,   404,     5,   405,    -1,   256,    -1,
      61,    -1,   188,    -1,   182,    -1,   243,   577,   579,    -1,
     249,   577,   579,    -1,   185,   577,   579,    -1,   175,   577,
     579,    -1,   123,   404,   581,   405,   579,    -1,   240,   404,
     581,   405,   579,    -1,    62,    -1,   262,    -1,   264,    -1,
     273,   404,     5,   405,    -1,   580,    36,   407,    -1,     4,
      -1,   581,   406,     4,    -1,   583,   477,   450,    -1,    -1,
     154,    -1,   216,    -1,   584,    -1,   240,   227,     3,    -1,
     240,   227,   113,    -1,   240,   585,    -1,   586,    -1,   585,
     406,   586,    -1,     8,    20,   411,    -1,     8,     9,   411,
      -1,   587,    -1,    73,   202,     3,   404,   588,   405,    51,
      60,   592,   124,    -1,    73,   202,     3,   404,   588,   405,
      60,   592,   124,    -1,    73,    10,   216,   202,     3,   404,
     588,   405,    51,    60,   592,   124,    -1,    73,    10,   216,
     202,     3,   404,   588,   405,    60,   592,   124,    -1,    73,
     139,     3,   404,   588,   405,   213,   591,    51,    60,   592,
     124,    -1,    73,   139,     3,   404,   588,   405,   213,   591,
      60,   592,   124,    -1,    73,    10,   216,   139,     3,   404,
     588,   405,   213,   591,    51,    60,   592,   124,    -1,    73,
      10,   216,   139,     3,   404,   588,   405,   213,   591,    60,
     592,   124,    -1,    -1,   589,    -1,   590,    -1,   589,   406,
     590,    -1,     3,   580,    -1,    16,     3,   580,    -1,   195,
       3,   580,    -1,   150,     3,   580,    -1,   152,    -1,   160,
      -1,   270,    -1,   249,    -1,    62,    -1,   132,    -1,   114,
      -1,    66,    -1,   117,    -1,   251,    -1,    -1,   592,   593,
      -1,   592,    60,   592,   124,    -1,   592,   156,   592,   124,
     156,    -1,   592,   276,   592,   124,   276,    -1,   592,   166,
     592,   124,   166,    -1,   592,   131,   592,   124,   131,    -1,
     592,    77,   592,   124,    77,    -1,     3,    -1,     4,    -1,
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
     202,    -1,   139,    -1,   213,    -1,   404,    -1,   405,    -1,
     406,    -1,   402,    -1,   403,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    17,    -1,   408,    -1,
     322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
       8,    -1,   594,    -1,   108,   202,     3,    -1,   108,   202,
     156,   281,     3,    -1,   108,   139,     3,    -1,   108,   139,
     156,   281,     3,    -1,   595,    -1,    68,     3,   404,   405,
      -1,    68,     3,   404,   596,   405,    -1,   597,    -1,   596,
     406,   597,    -1,     5,    -1,     4,    -1,     7,    -1,   193,
      -1,     6,    -1,     3,    -1,     8,    -1,   598,    -1,    73,
     219,     3,   599,   600,   197,     3,   140,   118,   217,    60,
     592,   124,    -1,    59,    -1,    39,    -1,   157,    -1,   258,
      -1,   107,    -1,   601,    -1,   108,   219,     3,    -1,   108,
     219,   156,   281,     3,    -1,    37,   219,     3,   120,    -1,
      37,   219,     3,   100,    -1,   602,    -1,    73,   371,   558,
       3,   603,    -1,    -1,   603,   604,    -1,   376,   277,     5,
      -1,   376,     5,    -1,   377,    63,     5,    -1,   377,     5,
      -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,    18,
     379,    -1,   605,    -1,   108,   371,     3,    -1,   108,   371,
     156,   281,     3,    -1,    37,   371,     3,   603,    -1,    37,
     371,     3,    55,    -1,    37,   371,     3,    55,   277,     5,
      -1,    37,   371,     3,   208,   245,     3,    -1,    -1,   212,
      28,    -1,   212,   607,    -1,     3,    -1,   607,   406,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   489,   489,   490,   495,   502,   503,   504,   518,   519,
     547,   555,   563,   569,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   602,   602,   611,   611,   613,   613,
     615,   615,   620,   622,   626,   627,   628,   629,   630,   633,
     634,   637,   646,   664,   673,   693,   693,   753,   762,   769,
     773,   775,   777,   782,   787,   795,   797,   799,   801,   803,
     805,   807,   809,   811,   813,   820,   831,   842,   843,   846,
     846,   847,   847,   848,   848,   856,   856,   864,   864,   875,
     879,   880,   881,   882,   883,   884,   885,   886,   890,   890,
     892,   892,   894,   894,   897,   897,   899,   899,   901,   901,
     903,   903,   905,   905,   907,   907,   910,   910,   912,   912,
     914,   914,   916,   916,   918,   918,   920,   920,   922,   922,
     924,   924,   927,   927,   929,   929,   931,   931,   935,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   970,   971,   972,   973,   974,   975,   976,   977,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1002,  1003,  1004,  1005,  1006,  1008,  1009,  1011,
    1012,  1013,  1015,  1016,  1017,  1018,  1025,  1032,  1039,  1043,
    1047,  1051,  1055,  1059,  1065,  1066,  1067,  1070,  1076,  1083,
    1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1094,  1096,
    1098,  1100,  1104,  1112,  1123,  1124,  1127,  1128,  1131,  1139,
    1147,  1155,  1169,  1179,  1180,  1193,  1209,  1210,  1211,  1212,
    1215,  1222,  1230,  1231,  1232,  1235,  1236,  1239,  1240,  1244,
    1245,  1248,  1250,  1254,  1255,  1258,  1260,  1264,  1265,  1268,
    1269,  1272,  1278,  1285,  1294,  1295,  1296,  1297,  1300,  1301,
    1302,  1303,  1304,  1307,  1308,  1311,  1312,  1315,  1316,  1317,
    1318,  1319,  1320,  1321,  1322,  1323,  1326,  1327,  1328,  1336,
    1342,  1343,  1344,  1347,  1348,  1351,  1352,  1356,  1364,  1374,
    1375,  1376,  1385,  1390,  1396,  1404,  1408,  1408,  1448,  1449,
    1453,  1455,  1457,  1459,  1461,  1465,  1466,  1467,  1470,  1471,
    1474,  1475,  1478,  1479,  1480,  1483,  1484,  1487,  1488,  1492,
    1494,  1496,  1498,  1501,  1502,  1505,  1506,  1509,  1513,  1523,
    1531,  1532,  1533,  1534,  1538,  1542,  1544,  1548,  1548,  1550,
    1555,  1562,  1569,  1581,  1582,  1583,  1587,  1594,  1601,  1609,
    1619,  1627,  1637,  1645,  1654,  1663,  1673,  1681,  1690,  1699,
    1709,  1718,  1735,  1743,  1755,  1756,  1770,  1771,  1774,  1775,
    1787,  1797,  1802,  1807,  1813,  1820,  1827,  1834,  1844,  1851,
    1860,  1867,  1873,  1881,  1887,  1895,  1896,  1897,  1898,  1899,
    1915,  1916,  1917,  1926,  1927,  1931,  1941,  1957,  1958,  1962,
    1970,  1979,  1989,  1995,  2006,  2012,  2019,  2025,  2041,  2048,
    2057,  2065,  2071,  2086,  2088,  2092,  2101,  2114,  2116,  2120,
    2125,  2132,  2137,  2145,  2149,  2150,  2154,  2165,  2166,  2167,
    2171,  2172,  2173,  2174,  2175,  2176,  2179,  2181,  2185,  2186,
    2189,  2191,  2194,  2196,  2200,  2209,  2215,  2221,  2228,  2234,
    2241,  2247,  2253,  2259,  2265,  2271,  2277,  2283,  2289,  2295,
    2301,  2307,  2313,  2319,  2325,  2331,  2344,  2356,  2357,  2358,
    2361,  2369,  2375,  2388,  2389,  2389,  2393,  2394,  2397,  2398,
    2399,  2403,  2404,  2404,  2408,  2416,  2426,  2427,  2428,  2429,
    2430,  2433,  2433,  2436,  2437,  2440,  2450,  2463,  2464,  2464,
    2467,  2468,  2469,  2470,  2473,  2477,  2478,  2479,  2480,  2486,
    2489,  2495,  2500,  2506,  2510,  2510,  2515,  2516,  2518,  2519,
    2523,  2524,  2528,  2529,  2530,  2533,  2534,  2535,  2536,  2540,
    2541,  2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,  2556,
    2564,  2573,  2574,  2575,  2579,  2590,  2602,  2613,  2628,  2633,
    2637,  2638,  2642,  2644,  2646,  2648,  2652,  2653,  2659,  2663,
    2665,  2667,  2669,  2671,  2676,  2680,  2681,  2685,  2694,  2707,
    2708,  2716,  2724,  2732,  2733,  2734,  2735,  2736,  2737,  2739,
    2741,  2745,  2746,  2749,  2764,  2771,  2786,  2799,  2814,  2827,
    2828,  2829,  2832,  2833,  2836,  2837,  2838,  2839,  2840,  2841,
    2842,  2843,  2844,  2846,  2848,  2850,  2852,  2854,  2858,  2859,
    2862,  2863,  2866,  2867,  2870,  2871,  2872,  2873,  2874,  2875,
    2876,  2877,  2878,  2879,  2880,  2881,  2882,  2883,  2884,  2885,
    2886,  2887,  2890,  2891,  2894,  2894,  2904,  2905,  2906,  2907,
    2908,  2909,  2910,  2911,  2912,  2913,  2914,  2915,  2922,  2923,
    2924,  2925,  2926,  2927,  2928,  2929,  2930,  2931,  2932,  2933,
    2934,  2935,  2936,  2937,  2938,  2939,  2940,  2941,  2942,  2945,
    2946,  2947,  2950,  2951,  2954,  2955,  2956,  2959,  2960,  2961,
    2965,  2966,  2967,  2968,  2969,  2970,  2971,  2972,  2973,  2974,
    2975,  2976,  2977,  2978,  2979,  2980,  2981,  2982,  2983,  2984,
    2985,  2986,  2987,  2988,  2989,  2990,  2991,  2992,  2993,  2994,
    2995,  2996,  2997,  2998,  2999,  3002,  3003,  3006,  3019,  3020,
    3021,  3025,  3028,  3029,  3030,  3031,  3031,  3033,  3034,  3042,
    3046,  3052,  3058,  3065,  3072,  3078,  3084,  3091,  3100,  3101,
    3104,  3105,  3108,  3109,  3110,  3111,  3114,  3115,  3116,  3117,
    3118,  3119,  3120,  3121,  3122,  3123,  3130,  3131,  3132,  3133,
    3134,  3135,  3136,  3137,  3140,  3141,  3142,  3142,  3142,  3143,
    3143,  3143,  3143,  3143,  3143,  3144,  3144,  3144,  3144,  3144,
    3144,  3144,  3144,  3144,  3145,  3145,  3145,  3145,  3145,  3145,
    3145,  3146,  3146,  3146,  3146,  3147,  3147,  3147,  3147,  3147,
    3147,  3147,  3147,  3147,  3147,  3147,  3147,  3148,  3148,  3148,
    3148,  3148,  3148,  3148,  3148,  3149,  3149,  3149,  3149,  3149,
    3149,  3149,  3149,  3150,  3150,  3150,  3150,  3150,  3150,  3150,
    3150,  3150,  3151,  3151,  3151,  3151,  3151,  3151,  3151,  3151,
    3152,  3152,  3152,  3153,  3153,  3153,  3153,  3153,  3153,  3153,
    3153,  3154,  3154,  3154,  3154,  3154,  3154,  3154,  3155,  3155,
    3155,  3155,  3155,  3155,  3155,  3156,  3156,  3156,  3156,  3157,
    3157,  3157,  3157,  3157,  3157,  3157,  3157,  3157,  3157,  3157,
    3157,  3158,  3158,  3158,  3158,  3158,  3159,  3166,  3170,  3176,
    3182,  3188,  3200,  3204,  3210,  3218,  3219,  3222,  3223,  3224,
    3225,  3226,  3227,  3228,  3235,  3239,  3247,  3248,  3251,  3252,
    3253,  3256,  3260,  3266,  3275,  3283,  3294,  3298,  3307,  3308,
    3312,  3313,  3314,  3315,  3316,  3317,  3318,  3319,  3322,  3326,
    3332,  3342,  3349,  3356,  3364,  3374,  3375,  3376,  3379,  3380
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
  "LIST", "WRITES", "';'", "'.'", "'('", "')'", "','", "']'", "'='",
  "$accept", "stmt_list", "expr", "@1", "@2", "@3", "@4", "val_list",
  "array_val_list", "@5", "any_array_arg", "opt_val_list", "@6", "@7",
  "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26", "@27",
  "@28", "@29", "@30", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
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
  "drop_checkpoint_store_stmt", "listen_stmt", "unlisten_stmt",
  "notify_stmt", "reclaim_table_stmt", "analyze_table_stmt",
  "sample_clause_opt", "analyze_table_prefix", "hist_clause_opt",
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
     645,   646,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   409,   410,   410,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   412,   411,   413,   411,   414,   411,
     415,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   416,   416,   417,   417,   418,   411,   411,   411,   419,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   420,   420,   421,
     411,   422,   411,   423,   411,   424,   411,   425,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   426,   411,
     427,   411,   428,   411,   429,   411,   430,   411,   431,   411,
     432,   411,   433,   411,   434,   411,   435,   411,   436,   411,
     437,   411,   438,   411,   439,   411,   440,   411,   441,   411,
     442,   411,   443,   411,   444,   411,   445,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   446,   446,   446,   411,   411,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   411,   411,
     411,   411,   448,   448,   411,   411,   411,   411,   411,   411,
     411,   411,   449,   450,   450,   450,   451,   451,   452,   452,
     453,   453,   454,   454,   454,   455,   455,   456,   456,   457,
     457,   458,   458,   459,   459,   460,   460,   461,   461,   462,
     462,   463,   463,   463,   464,   464,   464,   464,   465,   465,
     465,   465,   465,   466,   466,   467,   467,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   469,   469,   469,   470,
     471,   471,   471,   472,   472,   473,   473,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   476,   475,   477,   477,
     478,   478,   478,   478,   478,   479,   479,   479,   480,   480,
     481,   481,   482,   482,   482,   483,   483,   484,   484,   485,
     485,   485,   485,   486,   486,   487,   487,   488,   449,   489,
     490,   490,   490,   490,   489,   491,   491,   492,   492,   489,
     449,   493,   493,   494,   494,   494,   449,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   496,   496,   497,   497,   498,   498,
     499,   500,   500,   500,   501,   501,   501,   501,   449,   502,
     449,   503,   503,   504,   504,   505,   505,   505,   505,   505,
     449,   449,   449,   449,   449,   506,   506,   507,   507,   508,
     508,   508,   509,   509,   510,   510,   511,   511,   449,   512,
     449,   513,   513,   514,   514,   514,   515,   516,   516,   516,
     516,   517,   517,   449,   449,   449,   518,   519,   519,   519,
     520,   520,   520,   520,   520,   520,   521,   521,   522,   522,
     523,   523,   524,   524,   525,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   527,   527,   527,
     449,   528,   528,   529,   530,   529,   531,   531,   532,   532,
     532,   533,   534,   533,   535,   535,   536,   536,   536,   536,
     536,   537,   537,   538,   538,   539,   539,   540,   541,   540,
     542,   542,   542,   542,   528,   543,   543,   543,   543,   449,
     544,   544,   544,   449,   546,   545,   547,   547,   548,   548,
     549,   549,   550,   550,   550,   551,   551,   551,   551,   552,
     552,   553,   553,   553,   553,   553,   553,   553,   553,   449,
     554,   555,   555,   555,   556,   556,   556,   556,   449,   449,
     557,   557,   449,   449,   449,   449,   558,   558,   449,   559,
     559,   559,   559,   559,   449,   560,   560,   449,   561,   562,
     562,   561,   561,   563,   563,   563,   563,   563,   563,   563,
     563,   564,   564,   565,   565,   561,   561,   561,   561,   566,
     566,   566,   567,   567,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   569,   569,
     570,   570,   571,   571,   572,   572,   572,   572,   572,   572,
     572,   572,   572,   572,   572,   572,   572,   572,   572,   572,
     572,   572,   573,   573,   574,   568,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   576,
     576,   576,   577,   577,   578,   578,   578,   579,   579,   579,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   580,   581,   581,   582,   583,   583,
     583,   449,   584,   584,   584,   585,   585,   586,   586,   449,
     587,   587,   587,   587,   587,   587,   587,   587,   588,   588,
     589,   589,   590,   590,   590,   590,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   592,   592,   592,   592,
     592,   592,   592,   592,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   449,   594,   594,
     594,   594,   449,   595,   595,   596,   596,   597,   597,   597,
     597,   597,   597,   597,   449,   598,   599,   599,   600,   600,
     600,   449,   601,   601,   449,   449,   449,   602,   603,   603,
     604,   604,   604,   604,   604,   604,   604,   604,   449,   605,
     605,   449,   449,   449,   449,   606,   606,   606,   607,   607
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
       5,     6,     2,     3,     2,     2,     2,     4,     1,     3,
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
       0,     0,     0,     0,   619,     0,   363,     0,   516,     0,
       0,     0,     0,     0,   516,     0,   297,     0,   571,     0,
       0,     0,   252,   358,   370,   376,   408,   415,   423,   424,
     420,   421,   422,   438,   440,     0,   454,   455,   453,   500,
     539,   543,   569,   579,   588,   594,   597,   751,   759,   917,
     922,   934,   941,   946,   958,     0,     0,     0,   446,     0,
       0,   586,     0,     0,     0,     0,     0,     0,     0,   586,
     620,     0,     0,   586,     0,     0,   544,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   522,   432,
     436,   434,   435,     0,     0,   522,     0,     0,   754,   755,
       0,     0,     0,     0,   595,     0,     1,     2,   410,   443,
       0,     0,   948,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   621,     0,     0,
       0,   586,   546,   367,     0,   362,   360,   361,     0,   582,
       0,   920,     0,   409,   918,     0,   942,     0,     0,   584,
       0,   373,     0,   959,     0,     0,   518,   519,   520,   521,
     517,     0,   433,     0,   439,     0,     0,     0,     0,   752,
     753,     0,     4,     9,    10,    12,    11,     8,     0,     0,
       0,   308,   298,   248,     0,   249,   250,     0,   299,   300,
     301,     0,    13,   251,   303,   305,   304,   302,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   312,   253,   306,   411,   573,   572,
     312,     0,     0,     0,     0,     0,   313,   315,   329,   316,
     329,   596,     3,     0,     0,   416,   417,     0,     0,   447,
     945,   944,     0,     0,     0,     0,     0,     0,     0,     0,
     962,     0,   961,   932,   928,   927,   931,   929,   933,   930,
     923,     0,   925,     0,     0,   587,   580,     0,     0,   768,
       0,     0,     0,     0,   768,   937,   936,     0,     0,   581,
       0,     0,     0,   948,   427,     0,     0,     0,     0,     0,
     365,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   374,   375,   371,     0,     0,   429,     0,   523,   437,
       0,   523,   758,   757,   756,     0,    77,     0,    32,    31,
      20,     0,     0,     0,     0,     0,    55,    87,     0,     0,
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
     311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   309,     0,     0,
       0,     0,     0,   352,   326,   312,     0,     0,     0,     0,
       0,   337,   336,   340,   344,   341,     0,     0,   338,   328,
       0,     0,   419,   418,     0,   443,     0,     0,   441,     0,
       0,     0,     0,     0,     0,   488,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   956,   949,   924,     0,     0,     0,   731,
     740,   699,   699,   699,   699,   699,   724,   699,   721,     0,
     699,   699,   699,   702,   733,   702,   732,   699,   699,   699,
       0,   702,   699,   702,   723,   730,   722,   741,   742,     0,
       0,     0,   725,   589,     0,     0,     0,     0,     0,     0,
     769,   770,     0,     0,     0,     0,     0,   940,   938,   939,
       0,   457,     0,     0,     0,     0,   947,     0,   425,     0,
     748,   548,     0,   550,   551,     0,   368,     0,   277,     0,
     256,   367,   583,   921,   919,   943,   474,   585,   373,   960,
     430,     0,     0,     0,     0,   578,     0,     0,     5,    51,
      78,     0,    48,     0,     0,   240,     0,     0,     6,     0,
      57,     0,     0,     0,   226,   224,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,     0,     0,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      23,    24,    22,   246,   244,    46,     0,    44,   212,    79,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    33,
      73,    72,    25,    26,    28,    14,    15,    16,    17,    18,
      19,    27,    30,    29,     0,   310,   256,     0,   307,   413,
     412,   312,     0,     0,     0,   317,     0,   352,     0,   357,
     325,     0,   256,   314,   338,   338,     0,   331,     0,   339,
       0,   321,   320,     0,   447,     0,     0,     0,     0,     0,
       0,   484,     0,   481,   487,   483,     0,   666,     0,     0,
       0,     0,   485,   963,   964,   957,   955,   951,     0,   953,
       0,   954,   926,   768,   768,     0,   728,   704,   710,   707,
     704,   704,     0,   704,   704,   704,   703,   707,   707,   704,
     704,   704,     0,   707,   704,   707,     0,     0,     0,     0,
       0,     0,     0,     0,   772,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   460,     0,
       0,     0,     0,     0,   427,   749,   750,     0,     0,   664,
     616,   329,   547,     0,   552,   553,   554,   555,   257,     0,
     284,   256,   364,   366,   372,   431,     0,   503,   525,     0,
       0,   502,   503,     0,   503,     0,    89,     0,   238,     0,
       0,     0,     0,    53,     0,     0,     0,     0,   142,     0,
       0,     0,     0,     0,   174,   175,   176,   177,   178,   179,
       0,     0,     0,     0,   155,     0,     0,     0,   159,   160,
     161,   163,     0,     0,   165,     0,   168,   169,   170,     0,
       0,     0,     0,     0,     0,    96,    90,    91,    92,    93,
      94,    95,   145,   146,   147,     0,     0,     0,   222,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   188,     0,
       0,     0,     0,     0,     0,     0,     0,   198,     0,   201,
     202,   203,     0,    60,     0,    62,     0,     0,     0,     0,
       0,    69,    70,    71,     0,     0,     0,    47,    45,     0,
       0,   247,   245,    81,     0,     0,    40,    36,    38,     0,
      58,   258,     0,     0,   352,   354,   354,   354,     0,   318,
     322,     0,     0,     0,   277,   342,   343,     0,     0,   345,
       0,   444,   445,   442,     0,     0,     0,     0,     0,     0,
     666,   666,     0,   496,   495,   497,   666,   490,     0,     0,
     950,   952,     0,     0,     0,   716,   726,   718,   720,   745,
       0,   719,   715,   714,   737,   736,   713,   717,   712,     0,
     734,   711,   735,     0,     0,     0,   591,   744,     0,   590,
       0,   773,   775,   774,     0,   771,     0,     0,   401,     0,
       0,     0,     0,     0,   403,     0,     0,     0,     0,     0,
     786,     0,   458,   459,     0,   466,     0,     0,     0,     0,
       0,     0,   426,     0,   748,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   622,     0,     0,   549,   568,     0,
       0,   564,     0,     0,     0,     0,   545,   556,   559,     0,
       0,   965,   369,     0,     0,     0,   534,   524,     0,     0,
     503,   541,   503,   542,    52,   242,     0,   241,     0,     0,
       0,    56,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   100,   102,
       0,     0,     0,     0,     0,   134,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    59,     0,     0,     0,     0,     0,
       0,   267,   256,   414,   319,     0,     0,     0,     0,   327,
       0,   574,     0,     0,   284,   334,   332,     0,     0,   330,
     346,     0,   451,   450,   448,     0,     0,     0,     0,   497,
     497,   666,     0,     0,   678,     0,   683,     0,     0,     0,
       0,     0,   498,   687,   668,     0,   685,   492,   497,   482,
     489,     0,     0,   700,     0,   705,   706,     0,     0,   707,
       0,   707,   707,   729,   743,     0,     0,     0,   780,   783,
     782,   784,   781,   776,   777,   779,   785,   778,     0,     0,
       0,     0,     0,     0,     0,   377,     0,     0,     0,     0,
       0,     0,   786,     0,     0,   461,   465,   463,   462,   464,
       0,   470,     0,     0,     0,     0,     0,     0,     0,     0,
     664,   618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   603,   664,     0,   747,   563,   561,   562,   565,   566,
     567,     0,     0,     0,   262,   262,   278,   279,   285,     0,
     359,   536,   535,     0,     0,   526,   531,   530,     0,   528,
     506,   540,   239,   243,     0,    54,     0,   140,   139,     0,
     144,     0,     0,   227,   228,   173,   151,   152,     0,     0,
     156,   157,   158,   162,   164,   166,   207,   208,   209,   210,
       0,    97,   106,   108,   104,   110,   112,   114,   148,     0,
       0,   150,   223,   269,   269,   269,   116,     0,     0,   124,
       0,     0,   132,   269,   269,   180,     0,     0,     0,   192,
     193,     0,     0,   196,     0,   199,     0,   204,     0,    61,
      63,    65,    66,    67,    68,     0,     0,     0,    80,    84,
       0,     0,    50,     0,     0,    42,     0,    43,    35,     0,
       0,   277,   258,   353,     0,     0,     0,   323,     0,     0,
       0,   965,   347,     0,   333,     0,     0,     0,     0,     0,
     662,     0,   486,   494,   497,   667,   499,     0,     0,     0,
       0,     0,     0,   688,   669,   670,   672,   671,   676,     0,
       0,     0,     0,   686,   684,   491,     0,     0,   786,     0,
       0,   709,   738,   746,   739,   727,     0,   592,   378,     0,
     786,     0,   394,     0,     0,     0,     0,   402,     0,   386,
       0,     0,     0,     0,     0,   794,   795,   796,   798,   797,
     916,   801,   802,   803,   909,   800,   799,   904,   905,   906,
     907,   908,   891,   804,   845,   836,   841,   786,   887,   877,
     848,   880,   823,   830,   827,   814,   870,   859,   786,   867,
     885,   821,   822,   892,   808,   815,   863,   879,   884,   881,
     842,   820,   889,   761,   819,   839,   832,   829,   786,   878,
     868,   809,   858,   897,   835,   849,   831,   850,   834,   873,
     856,   817,   786,   806,   890,   812,   874,   826,   853,   865,
     825,   786,   854,   851,   852,   860,   872,   862,   828,   833,
     857,   846,   847,   864,   896,   869,   838,   871,   824,   898,
     855,   843,   837,   844,   840,   883,   811,   805,   876,   882,
     816,   818,   807,   888,   866,   886,   861,   875,   813,   810,
     894,   786,   895,   893,   911,   912,   913,   914,   915,   902,
     903,   899,   900,   901,   910,   787,     0,   468,   467,     0,
     472,     0,   380,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,     0,     0,     0,   599,   615,   623,   666,     0,   558,
     560,   263,   264,     0,   281,   283,     0,     0,     0,   968,
     966,   967,   504,     0,   527,     0,     0,     0,   965,     0,
       0,     0,   143,   230,   231,   232,   233,   236,   235,   237,
     229,   234,     0,     0,     0,   269,   269,   269,   269,   269,
     269,     0,     0,     0,   273,   273,   273,   269,     0,     0,
       0,   269,     0,     0,     0,   269,   273,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
      86,    41,    37,    39,   262,   265,   268,   284,   267,   355,
       0,     0,     0,     0,   575,   576,     0,   570,     0,   452,
       0,   475,   640,     0,   638,     0,   476,     0,   493,     0,
       0,     0,     0,     0,     0,   690,     0,     0,     0,     0,
       0,     0,   786,     0,   701,   708,     0,   786,     0,   382,
     395,     0,   404,   405,   406,     0,     0,     0,     0,     0,
     379,   760,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   456,     0,     0,   388,     0,     0,     0,   428,
       0,   603,     0,     0,     0,     0,   630,     0,     0,     0,
     627,     0,   626,     0,   636,     0,     0,     0,     0,     0,
     598,   665,   557,   262,   280,   287,   286,     0,     0,   538,
     537,   533,   532,     0,   508,   501,     7,   141,   138,   153,
     154,   211,   273,   273,   273,   273,   273,   273,   213,     0,
     149,     0,     0,     0,     0,     0,   273,   118,     0,     0,
     273,   126,     0,     0,   273,     0,     0,   189,   190,   191,
     194,   195,     0,   200,   205,     0,     0,     0,   260,     0,
       0,   259,   288,   277,   351,     0,   350,   349,     0,     0,
     348,   449,     0,     0,     0,   480,     0,   663,   680,     0,
     698,   682,     0,     0,     0,   691,   689,   673,   674,   675,
     677,     0,   786,     0,   763,   593,     0,   765,   396,     0,
     390,   387,     0,   394,   788,     0,     0,     0,     0,     0,
     786,   469,     0,     0,   384,     0,     0,     0,   381,     0,
     601,   617,     0,     0,     0,     0,     0,   628,   629,   296,
     624,   605,     0,     0,     0,     0,     0,   282,   969,     0,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   271,   270,     0,    99,   101,   103,     0,   269,     0,
       0,     0,   269,     0,     0,     0,   135,   137,     0,     0,
       0,     0,   266,   262,     0,   293,   284,   356,   324,   577,
     478,     0,   641,   639,     0,   696,   697,     0,     0,     0,
     786,     0,   762,   764,     0,   392,   407,   383,     0,   793,
     792,   789,   791,   790,     0,   471,     0,   391,   389,     0,
       0,   631,     0,     0,   637,     0,   604,     0,     0,     0,
       0,     0,     0,     0,     0,   529,     0,     0,   507,   107,
     109,   105,   111,   113,   115,   214,     0,   262,   274,   117,
     273,   120,   122,   125,   273,   128,   130,   133,   197,    74,
       0,     0,   261,   290,   289,     0,   254,   255,     0,   679,
     681,   695,   692,     0,   767,     0,   396,   935,     0,   385,
       0,     0,   625,     0,   600,   606,   607,     0,     0,     0,
     514,     0,   509,     0,   511,   512,   272,   275,     0,     0,
     269,   269,     0,   269,   269,     0,     0,     0,     0,   294,
       0,   693,   694,   766,     0,     0,   398,   393,   473,     0,
       0,     0,     0,     0,     0,     0,     0,   510,     0,   262,
     119,   273,   273,   127,   273,   273,    75,    76,   292,   291,
     642,     0,     0,   397,     0,     0,     0,     0,     0,     0,
       0,   610,   515,     0,   276,     0,     0,     0,     0,   644,
       0,   400,   399,     0,     0,     0,     0,   644,     0,     0,
     513,   121,   123,   129,   131,   477,   643,     0,     0,     0,
       0,   632,     0,     0,   611,   608,     0,   658,     0,     0,
     602,     0,   644,   644,     0,     0,   609,     0,   659,   479,
       0,   655,   657,   656,     0,     0,     0,   634,   633,     0,
     612,   660,   661,   645,   653,   647,     0,   649,   654,   651,
       0,   644,     0,   648,   646,   652,   650,   635,     0,     0,
       0,     0,     0,     0,     0,   613,   614
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   699,  1119,  1345,  1347,  1343,   700,  1004,   711,
    1346,   701,  1109,  1339,  1110,  1340,   712,  1543,  1544,  1545,
    1867,  1865,  1866,  1868,  1869,  1870,  1877,  2158,  2290,  2291,
    1881,  2162,  2293,  2294,  1885,  1553,  1554,   718,  1278,   413,
      21,    22,   678,  1351,  1905,  1834,  2061,  1591,  1874,  2152,
    2033,  2238,   980,  1486,  1487,  1251,  2175,  2256,  1820,   100,
     305,   306,   547,   315,   316,   317,   318,   866,   570,   319,
     567,   880,   568,   876,  1369,  1370,   865,  1356,  1910,   320,
      23,    77,   138,   380,    24,   393,    25,  1951,  2195,  2305,
    2306,  1203,  1204,    26,    27,   860,   108,    28,   668,    29,
      30,    31,    32,    33,    34,   329,    35,   578,  1373,    36,
     958,  1215,  1451,  1798,  1800,  1972,    37,    38,  1397,    39,
    1256,  2008,  1848,  2143,  2228,  2318,  2140,    88,   161,   694,
     989,  1260,  1846,  1498,   987,    40,    41,   132,   378,   672,
     675,   977,  1246,  1247,  1248,    42,   103,   872,    43,   116,
      44,    45,    46,  2000,  1824,  2373,  2374,    75,  1233,  1234,
    1925,  1923,  2331,  2365,  1611,  1235,  1155,   916,   927,  1165,
    1166,   643,  1170,   970,   971,    47,    98,    99,    48,   649,
     650,   651,  1428,  1443,  1795,    49,    50,   351,   352,    51,
     367,   660,    52,    53,   342,   604,    54,  1490,  1841
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1837
static const yytype_int16 yypact[] =
{
   13312,   -70,   -53,   488,   520,   510, -1837,   521, -1837,   525,
     530,   512,   289,   304, -1837,    27, -1837,   310,   444,   168,
     612,   194, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837,   611, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837,   651,   669,   677, -1837,   308,
     498,   560,   718,   573,   729,    79,   731,   733,   743,   560,
   -1837,   507,   589,   560,   369,   508, -1837,    57,    69,   121,
     775,   125,   127,   784,   128,   132,   137,   375,   626,   637,
     404, -1837, -1837,   810,   841,   626,   548,   465,   447, -1837,
    6832,   854,   622,    70, -1837,   857, -1837, 13312,    88,   196,
     460,   474,    89,    49,   364,   583,   883,   839,   893,   494,
     706,   138,   633,   501,   528,   720,   921, -1837,    80,   925,
     143,   560,   536,   555,   931, -1837, -1837, -1837,  -117, -1837,
     655, -1837,   665, -1837, -1837,   712, -1837,   714,   806, -1837,
     726,    59,   744, -1837,   765,   160, -1837, -1837, -1837, -1837,
   -1837,   984, -1837,  1060, -1837,   826,  1077, 10752, 10752, -1837,
   -1837,  1091,   221, -1837, -1837, -1837, -1837,  1092, 10752, 10752,
   10752, -1837, -1837, -1837,  8008, -1837, -1837,   709, -1837, -1837,
   -1837,   754, -1837, -1837, -1837, -1837, -1837, -1837,  1094,   771,
     785,   803,   819,   843,   861,   889,   912,   920,   938,   946,
     979,   981,  1006,  1016,  1034,  1041,  1051,  1059,  1061,  1063,
    1067,  1068,  1069,  1070,  1074,  1075,  1076,  1078,  1079,  1080,
    1081,  1082,  1083,  1084,  1087,  1088,  1089,  1090,  1110,  1112,
    1115,  1116,  1117,  1119,  1120,  1121,  1124,  1125,  1126,  1127,
    1129,  1131,  1132,  1133, -1837, -1837,  1134,  1160,  1162,  1163,
    1164,  1165,  1166,  1167,  1176,  1178,  1179,  1180,  1184,  1186,
    1187,  1188,  1189,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,  1209,  1210,  1211,  1212,  1213,  1214,  1217,  1218,
    1220,  1221,  1222,  1223,  1229,  1232,  1236,  1237,  1240,  1244,
    1245,  1246,  1248, 10752, 13728,   -98, -1837,   742,   704,   713,
      44,  1249,  1208,  1250,    72,  -175,   693, -1837,  1118, -1837,
    1118, -1837, -1837,  1257,  1299, -1837, -1837,  1371,  1478,   -18,
   -1837, -1837,   123,   165,    87,   487,    95,   180,   505,  1424,
    1219,  1272,   118, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837,   321, -1837,  1524,  1607, -1837, -1837, 13325,  1437,    71,
    1652,  1459,  1376,  1655,    71, -1837, -1837,   -30,  1656, -1837,
    1463,   215,  1380, -1837,  1385,  1386,  1663,  1665,   341,  1641,
   -1837,   307,   110,    70,  1668,  1669,  1670,  1671,  1675,  1676,
    1677, -1837, -1837, -1837,  1678,  1681,  1615,  1409,  -174, -1837,
    1689,  -170, 13870, 13870, -1837,  1694, 10752, 10752,  1113,  1113,
    1666, 10752, 13196,    31,  1696,  1701,  1300, -1837, 10752,  7224,
   10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752,  1309,
   10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752,
   10752, 10752, 10752, 10752, 10752,  1310, 10752, 10752, 10752,  1311,
   10752, 10752, 10752, 10752, 10752, 10752,  8400, 10752, 10752, 10752,
   10752, 10752, 10752, 10752, 10752, 10752, 10752,  1313,  1315,  1318,
    1325,  1331, 10752, 10752,  1335,  1336,  1337, 10752, 10752,  1739,
    1342,  1344, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752,
   10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752,
   10752, 10752, 10752, 10752,  1348, 10752, 10752, 10752,  1349, 10752,
   10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752,  9371,
   -1837, 10752, 10752, 10752, 10752, 10752,   273,  1351,   790, 10752,
    7616, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752, 10752,
   10752, 10752, 10752, 10752, 10752, 10752,  1753, -1837,    70,  1754,
   10752,  1755,  1765,   411, -1837,   164, 10752,  1368,   353,  1772,
      70, -1837, -1837, -1837,     2, -1837,    70,  1618,  1587, -1837,
    1782,  1787, -1837, -1837,  1786,  1516,  1752,  1756, -1837,  1792,
    1793,  1794,  1798,  1799,  1800, -1837,  1801,  1802,  1803,  1804,
   13325,  1808,  1567,  1810,  1811,  1812,  1814,  1813,  1438,  1818,
      26,   538,  1819, -1837, -1837, -1837,   531,  1421,  1422, -1837,
   -1837,  1428,  1428,  1428,  1428,  1428, -1837,  1428, -1837,  1429,
    1428,  1428,  1428,  1764, -1837,  1764, -1837,  1428,  1428,  1428,
    1432,  1764,  1428,  1764, -1837, -1837, -1837, -1837, -1837,  1433,
    1434,  1443, -1837,   491,  1838, 13325,  1839,  1845,  1846,  1458,
    1460, -1837,   114,  1862,  1864,  1672,  1466, -1837, -1837, -1837,
    1679,  1817,  1869,  1680,  1592,  1871,   118,  1471, -1837,  1875,
     315, -1837,   378, -1837, -1837,    37, -1837, 10752,  1682,    70,
    -183,   555, -1837, -1837, -1837, -1837, -1837, -1837,    59, -1837,
   -1837,  1876,  1878,  1880,   -61, -1837,  1878,   243, -1837,  2259,
   -1837,  1481, 13870, 13225,   398, -1837, 10752, 10752, -1837,  1482,
   -1837, 10752,  1643,   675, -1837, -1837, -1837,  9403,  8792,  2618,
    2928,  2977,  9599,  9648,  9680,  9709,  9799,  9987, -1837,  3287,
    3336,  3646,  3695, 10076,  4005,  4054,  4364, 10105, 10144, 10187,
     616,  4413, 10383,  4723, -1837, 10432, 10464, 10493, -1837, 13770,
    4772,  5082,  5131,  5441,  9280,  1483, 10544, 10583, 10771, 10832,
   10860, 10889, 10940, 10971,  5490,  5800,  5849, -1837, -1837, -1837,
   -1837, -1837, 11139,  6159,  1539,  1540,  1546,   807,  1029,  1492,
    1548,  1549,  6208, 11167, 11194, 11228, 11256, 11285, 11328, 11359,
   11386,  6518,  6563,  6934,  6961,  7008,  7234,  7296,  7323,  1095,
   11413, 11440, 11467,  7350, -1837,  1206, 11494,  7408, -1837,  7440,
    7712,  7739,  7806, 11527, 11555, 11582,  7839,  8018,  8045, -1837,
    7060,  7646,  1230,  7764,  7764, -1837,    39, -1837, -1837,  1659,
   10752, 10752,  1497, 10752, 13804,  1498,  1499,  1500, 10752,  1369,
    1479,  1479,  1828,   935,  1395,   980,   980,   758,   758,   758,
     758,   741,  1666,  1666,    86, -1837,  -183,  1769, -1837, -1837,
    1501,   164,  1742,  1744,  1745, -1837,  1643,   411, 11616, -1837,
   -1837,    16,  -182,   693,  1587,  1587,  1747,  1714,    70, -1837,
    1749, -1837, -1837,   750,   -18,  1718,  1719,    11, 13325, 13325,
    1914, -1837,  1697, -1837, -1837, -1837,  1698,  1882, 13325,  1918,
    1683,  1685, -1837, -1837, -1837, -1837, -1837, -1837,  1919, -1837,
    1920, -1837, -1837,    71,    71,  1921, -1837, -1837, -1837, -1837,
   -1837, -1837,  1923, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837,  1923, -1837, -1837, -1837,  1926,  1927,  1928,  1730,
    1530,  1532, 10752,  1534,  1882, 13325, 13325, 13325,  1726,    71,
    -134,   171,   199,  1743,  1944,   533,  1946,   576,  1821,   253,
    1948,  1950,  1760,  1562,  1385, -1837, -1837,  1868,  1960,   711,
   -1837,  1118, -1837,  1967, -1837, -1837, -1837,   662, 13870,  1913,
    1806,  -183, -1837, -1837, -1837, -1837,  1959,  -150, -1837,   442,
    1576, -1837,  -150,  1576,  1788, 10752, -1837, 10752, -1837, 10752,
   13621, 13308,  1890,  8080,  1579,  1585, 10752, 10752, -1837, 10752,
   13594,  1830,  1830, 10752, -1837, -1837, -1837, -1837, -1837, -1837,
   10752, 10752, 10752, 10752, -1837, 10752, 10752, 10752, -1837, -1837,
   -1837, -1837, 10752, 10752, -1837, 10752, -1837, -1837, -1837, 13325,
   13325, 10752, 10752, 10752,  1989, -1837,  1644,  1645,  1646,  1653,
    1660,  1667, -1837, -1837, -1837, 10752, 10752, 10752, -1837, 10752,
    1598,  1601,  1605,  1673,  2008,  1674,  2013,  1686,  1617,  1621,
   10752, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, 10752,
   10752, 10752, 10752, 10752, 10752, 10752, 10752, -1837, 10752, -1837,
   -1837, -1837, 10752, -1837, 10752, -1837, 10752, 10752, 10752, 10752,
   10752, -1837, -1837, -1837, 10752, 10752, 10752, -1837, -1837, 10752,
    1643,  7764,  7764,  1778, 13837, 10752, -1837, 10752, 10752,  1643,
   -1837,  1881,    70,  2023,   411,  1887,  1887,  1887,  1623, -1837,
     169, 10752,  2026,  2027,  1682, -1837, -1837,    70, 10752,   286,
      70, -1837, -1837, -1837,  2028,  2028,  1628,  1873,  1874,  1629,
    1882,  1882, 13325, -1837, -1837,  1721,  1882, -1837,  2032,  2037,
   -1837, -1837,  1636,  1637,   457,   -83,   786,   -83,   -83, -1837,
     466,   -83,   -83,   -83,   786,   786,   -83,   -83,   -83,   471,
     786,   -83,   786,  1638,  1642,  1648,  1970, -1837, 10752, 13870,
     171,  1882,  1882,  1882,   603, -1837,  1654,  1657, -1837,  1662,
    1664,  1688,  1695,   473, -1837,  1781,   171,  2047,   258,  1999,
   -1837,  1931, -1837, -1837,    18,  1831,  1805,   171,   259,  1884,
    2079,  2063, -1837,  2081,   -95,  2082,  1703,  1925,   445,  1704,
    1705,  1941,  1706,   476, -1837,  2084,  1643, -1837, -1837,  2107,
      36,  2106,  2109,  2110,  1712,   658, -1837,  1715, -1837,   592,
   10752,  1906, -1837,  9184,  1956,  2119, -1837, -1837,  2121,  9576,
    -136, -1837,  -136, -1837, -1837, 13870, 13648, -1837, 10752,  1722,
   10752, -1837, -1837,  9313,  1258, 11644, 10752, 10752,  1720,  1724,
   11673, 11716, 11747,  8110,  8137, 11774, 11801, 11828, 11855, 11882,
   11915,    50,    52, 11943, 11970,  8195,  1732,  1723,  1734,  1737,
    1738,  1740,  1746,  1307,  8228, 12004, 12032, -1837, -1837, -1837,
    1748,   489,  1750,   496,  1757, -1837, -1837, 12061,  8434,  8481,
    8508, 12104, 12135,  8535,  8584,  1346,  1529,  2210, 12162, 12189,
   12216, 12243, 12270, 12303,  8617,  8802,  8879,  1741,  1758, 10752,
    1643, 10752,  1275,  1643, 13870,  1643,  1759,  1643,  1761,  1762,
    2080,  2011,  -183, -1837, -1837,  1997,  1766,  1767,  1768, -1837,
    2159, 13870,  2145,    17,  1806, -1837, 13870, 10752,  1770, -1837,
   -1837,   286, -1837,  1763,  -184, 10752,  1771,  1776,  2165,  1721,
    1721,  1882,  1980,  2173,  1777,  1779,  1780,  2130,  2182,  1784,
    2188,   147, -1837, -1837, -1837,  2022,  2029, -1837,  1721, -1837,
   -1837,  1981,   617, -1837,  2190, -1837, -1837,  1957,  2197, -1837,
    2198, -1837, -1837, -1837, -1837,  1807, 12331,   532, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,   619,   171,
    2200,  2202,  2203,  2204,  2207, -1837,  2214,  1823,   539,  1841,
     -91,   171, -1837,  1569,  2100, -1837, -1837, -1837, -1837, -1837,
    2244,  1982,  1847,   543,  1984,   171,  2246,   263,  2249,  2114,
     711, -1837,    25, 10752,  1851,  1852,  1853,  2247,  2247,  1854,
    2165,    30,   711, 13325, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837,   658,   545,   658,    45,   458,  1859, -1837,  1172,   547,
   -1837, -1837, 13870,  2001,  2248, -1837, -1837, 13870,   568, -1837,
    2069, -1837, -1837, 13870,  2263, -1837, 10752, -1837, -1837, 10752,
   -1837, 12358, 13168, -1837, -1837, -1837, -1837, -1837, 10752, 10752,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   10752, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, 10752,
   10752, -1837, -1837,  1943,  1943,  1943, -1837,  1947,   906, -1837,
    1949,   948, -1837,  1943,  1943, -1837, 10752, 10752, 10752, -1837,
   -1837, 10752, 10752, -1837, 10752, -1837, 10752, -1837, 10752, -1837,
   -1837, -1837, -1837, -1837, -1837, 10752, 10752, 10752, -1837, -1837,
    1891,  1893,  1275,  1901,  1903, -1837,  1905, -1837, -1837, 10752,
   10752,  1682,  1881, -1837,  2273,  2273,  2273,  1907, 10752, 10752,
    2309,  1906, 13870,  2247, -1837,  2313,  2314, 12392,  2315,  2317,
   -1837,   570, -1837, -1837,  1721, -1837, -1837,  2316, 10752,  2323,
    2271,   -32, 10752, -1837, -1837, -1837, -1837, -1837, -1837,  1929,
    1930,  1932, 10752, -1837, -1837, -1837,   603,  2269, -1837,  1933,
    2326, -1837,   786, -1837,   786,   786, 10752, -1837, -1837,  2272,
   -1837,   572,  2328,  1934,  1940,  1945,  1955, -1837,   171, -1837,
     171,  1951,  1958,   584,  1938, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837,  2118, -1837,  1962,  1965,
    2072,   171, -1837,  1968,   596,  1972,  2085,   171,  1973,  2083,
     614,  1976,  2213,  2217,  1978, 12420,  2315,  2247,  2247, -1837,
     624,   630,  2317,   668,   320, -1837, -1837,  1882,   673, -1837,
   -1837, -1837, -1837,  2349, -1837, -1837,   592, 10752, 10752, -1837,
   -1837,  1977, -1837,  9968, -1837, 10360,  1983,  2276,  1906,  1979,
   12449, 12492, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, 12523, 12550, 12577,  1943,  1943,  1943,  1943,  1943,
    1943,  2569, 12604,  2322,  2191,  2191,  2191,  1943,  1986,  1987,
    1990,  1943,  1992,  1994,  1995,  1943,  2191,  2191, 12631, 12658,
   12691, 12719, 12746,  8924, 12780, 12808,  8982,  9014,  9202, -1837,
   -1837, -1837, -1837, -1837, 13675,  -145, 13870,  1806,  2011, -1837,
     680,   684,   686,  2383, 13870, 13870,  2368, -1837,   688, -1837,
    2348,  2376, -1837,   691, -1837,   698, -1837,  2394, -1837,   746,
   12837,   749,  1998,  2002,  2237, -1837, 12880,  2003,  2004,  2007,
   12911,   632, -1837,  2297, -1837, -1837, 12938, -1837,  2656, -1837,
   -1837,  2012, -1837, -1837, -1837,  2404,   751,   755,   171,  2415,
   -1837, -1837,  3015,  3374,  3733,  4092,  4451,  4810,  2360,  2422,
   10752,  2352, -1837,   757,   171, -1837,   171,  2031,   759, -1837,
    2291,    30, 10752,  2036,  2038,  2165, -1837,   761,   766,   768,
   -1837,  2429, -1837,   773, -1837,   176,  2039,  2438,  2381,  2385,
   -1837,  1333, -1837,   458, -1837, 13870, 13870,  2443,  2448, -1837,
   13870, -1837, 13870,  9576,  2054, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837,  2191,  2191,  2191,  2191,  2191,  2191, -1837, 10752,
   -1837,  2461,  2402,  2061,  2062,  2064,  2191, -1837,  2120,  2122,
    2191, -1837,  2123,  2125,  2191,  2066,  2074, -1837, -1837, -1837,
   -1837, -1837, 10752, -1837, -1837,  2463,  2472,  2475, -1837,  2267,
   10752, -1837,  2342,  1682, -1837,  2480, -1837, -1837,  2091, 10752,
   -1837, -1837,  2215,  2278,  2483, -1837,  2485, -1837, -1837,  2492,
    1123, -1837,  2495, 10752, 10752, -1837, -1837, -1837, -1837, -1837,
   -1837,  2441, -1837,  5169, -1837, -1837,  5528, -1837,  2225,  2098,
   -1837, -1837,   804,  2328, -1837,  2428,  2378,  2355,  2347,  2242,
   -1837, -1837, 12965,  2115, -1837,   809,   907,   171, -1837,  2116,
     -36, -1837, 12992,  2315,  2317,   909,  2318, -1837, -1837, -1837,
   -1837, -1837,  2516,  2519,    66,   274,  2319, -1837, -1837,  2504,
    2124,   939,  2523,  2426,  2126,  2127,  2128,  2129,  2134,  2135,
   13019, -1837,  2136,  2525, -1837, -1837, -1837,  2138,  1943,  2131,
    2137,  2139,  1943,  2141,  2143,  2146, -1837, -1837, 13046,  2147,
    2148,  2150, -1837, 13675,   -60,  2370,  1806, -1837, -1837, 13870,
   -1837,  2550, -1837, -1837,  2155, -1837, -1837,  2156, 13079, 13107,
   -1837,  5887, -1837, -1837,  2158, -1837, -1837, -1837,  2160, -1837,
   -1837, -1837, -1837, -1837,  6246, -1837, 10752, -1837, -1837,   941,
    2559, -1837,   943,   949, -1837,  2563, -1837,  2164,  2567,  2572,
    2172,  2205,  2206, 10752,  2574, -1837,   982,   -42, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837,  2583,   458,  2201, -1837,
    2191, -1837, -1837, -1837,  2191, -1837, -1837, -1837, -1837, -1837,
    2600,  2602, -1837,  2377,  2380,  2247, -1837, -1837,  2208, -1837,
   -1837,  1350, -1837,  6605, -1837,  2610,  2225, -1837, 13134, -1837,
    2209,  2410, -1837,  1010, -1837, -1837, -1837,  2615,  2621,  2622,
   13870,  2606, -1837,  2624, -1837, -1837, -1837, -1837,  2632,  2250,
    1943,  1943,  2251,  1943,  1943,  2252,  2253,  2473,  2487,  2264,
    2666, -1837, -1837, -1837,  2651,  1011, -1837, -1837, -1837,  2430,
    2674,  2675,  2666,  2274,  2275,  2282, 10752, -1837,  2449,   458,
   -1837,  2191,  2191, -1837,  2191,  2191, -1837, -1837, -1837, -1837,
   -1837,  1027,  2676, -1837,  2610,  2284,  1033,  2286,  1036,  2287,
    2464, -1837, 13870,  2448, -1837,  2289,  2290,  2292,  2293, -1837,
    2689, -1837, -1837,  2699,  2705,  2666,  2666, -1837,  2481,  2706,
    2124, -1837, -1837, -1837, -1837,   554, -1837,  2307,  2310,  1038,
    1042,   567,  2710,  1044, -1837, -1837,   -63,  2570,    13,   -31,
   -1837,  2666, -1837, -1837,  2623,  2452, -1837,  2481, -1837, -1837,
     434, -1837, -1837, -1837,    55,   413,  1046,   567,   567,  2553,
   -1837, -1837, -1837, -1837, -1837, -1837,    65, -1837, -1837, -1837,
      82, -1837,  2478, -1837, -1837, -1837, -1837,   567,    60,  2534,
    2538,  2545,  2546,  2734,  2735, -1837, -1837
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1837,  2634,  -100, -1837, -1837, -1837, -1837,  -972,  1472, -1837,
    1625, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837,  1733,  2332,
   -1837,  -245,  -671,  1154, -1837, -1458, -1837,   840, -1406, -1837,
   -1836, -1837, -1133, -1837,   911, -1361, -1837, -1837, -1443, -1837,
   -1837,  2199,  -300,  -298,  2193,  -549, -1837, -1837,  -316, -1837,
   -1837,   579, -1837, -1837, -1837,  1379,  -837,   333,  -126, -1837,
   -1837, -1837,  2617,  2073, -1837,  2067, -1837,   653,   492, -1837,
     425, -1188, -1837, -1837, -1837, -1837, -1837, -1837,  1796, -1837,
   -1837, -1837, -1837, -1837, -1837,  2186, -1837,  1883,  1620, -1837,
   -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1837, -1336, -1837,
    -970, -1837, -1837, -1837, -1837, -1837,   423,   191,  2673,  2375,
   -1837,  1791, -1837,   764,  2075, -1837, -1837, -1837, -1837, -1837,
   -1837, -1837, -1837, -1213,  1296, -1837, -1837, -1837, -1837,   486,
   -1837, -1837, -1837, -1837,   805, -1837,   402, -1837,  1334,  1319,
   -1807, -1774, -1802, -1464, -1459, -1837, -1143,   455,   -23,   103,
    -907,  -519,  1867, -1219, -1837, -1837, -1837,  2629, -1837,  -350,
   -1837,  1856,  1171, -1436, -1837, -1837, -1837, -1837,  2195, -1837,
   -1837, -1837, -1837, -1837,  2437, -1837, -1837, -1568, -1837
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -749
static const yytype_int16 yytable[] =
{
     304,  1364,  1417,  1601,   571,  1461,  1664,  1379,  1380,   982,
     553,  1823,  1995,  1398,   656,  1993,   558,   877,  1438,   383,
    1174,  1175,  1261,  1264,  1263,  1821,  1180,  1835,  1182,  1453,
    1129,   907,  1482,  1917,  2388,    96,  1131,  1599,   548,  2034,
    2035,   974,  1987,  1612,  1613,  1107,  1933,   520,  2284,  1254,
    2045,  2046,   343,   344,   345,   346,   347,   348,  1445,   965,
     133,   549,  1635,  1254,  2419,   559,   692,   402,   403,   557,
     696,   897,   139,   310,   645,   310,  2394,   657,   408,   409,
     410,  -748,   120,   370,   412,   680,   940,   646,   940,  1146,
     576,   677,   677,  1606,  1831,   546,   521,   522,   523,   524,
     525,   526,   527,  1811,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   966,   545,  1476,   141,  1446,   944,   658,   144,  2403,
     146,   149,  2059,   391,  1196,   151,   598,  1337,  1875,  1876,
     153,   361,   323,   324,   340,  1147,   374,  1886,  1887,    55,
    2391,  1624,  1625,  1626,  1627,   705,   706,  1832,   583,  1812,
    1918,  1997,   325,   396,   121,   371,   588,   520,   581,  1934,
    2253,   104,  -329,  2218,  1198,  1447,  1405,  1661,  2413,   874,
      16,  2131,    56,   590,   965,  1121,  2144,  2145,  2146,  2147,
    2148,  2149,  1998,   134,   579,  2415,  2132,  1406,  2254,    58,
    2157,  1134,  1943,   519,  2161,    95,  2389,   580,  2165,   102,
     990,   135,  1148,  2392,  1948,   546,  2285,   875,   663,  1628,
     569,   647,  1605,   560,  1133,   140,  1813,  2395,   659,  1935,
     693,   560,  1108,   136,   693,   122,   372,   311,  1614,   311,
     577,  1651,   349,   312,  2420,   312,   966,  2404,  2393,   582,
     856,  1962,  1825,  1663,    97,   867,  1255,  1197,  2414,  1448,
     137,  2060,  1963,   105,   591,  2405,   648,  1804,  1828,   392,
    1499,  -748,  1149,   975,   976,  2416,  1449,   142,  1928,   825,
    2015,   145,  1964,   147,   150,  1477,  1814,  1354,   152,   384,
    1500,   826,  1501,   154,   362,  2406,  1965,   341,   326,   375,
    1662,    57,   599,   908,   584,  1966,   707,   702,   550,  1460,
    1252,   703,   589,    16,  2219,  1999,   397,  2213,   713,   717,
     719,   720,   721,   722,   723,   724,   725,   726,   727,  1139,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,  1967,   745,   746,   747,  2212,
     749,   750,   751,   752,   753,   754,   756,   757,   758,   759,
     760,   761,   762,   763,   764,   765,   766,  1580,  1995,  1150,
    1151,   664,   772,   773,  1988,  1989,   679,   777,   778,  1156,
     950,   981,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,  2289,   805,   806,   807,  2292,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,  1132,
    1600,   820,   821,   822,   823,   824,  1191,  1192,  1193,   834,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   850,   851,   852,   853,   854,  2058,   552,  1833,   991,
     304,   313,   994,   313,   350,  1526,   868,  1527,  1907,  2022,
    2023,  2024,  2025,  2026,  2027,  1205,   827,  1005,   169,   965,
    1956,  2036,  1957,   327,   314,  2040,   314,   673,  2220,  2044,
    1629,  1630,  1631,  1367,    16,  2345,  2346,  2407,  2347,  2348,
     585,    59,  1996,  1120,   600,   601,   602,   603,  1199,  1200,
    1201,  1202,  1642,   353,  1644,  1645,  2093,  1831,   592,   939,
    2338,  2096,   332,    76,   993,    91,   384,  1997,   951,  1216,
    1291,  1292,   998,   999,  1440,  1454,  2125,   940,    89,  1806,
      60,   966,  2401,    90,   343,   344,   345,   346,   347,   348,
      92,    93,  2221,   909,   862,  2137,  2062,  -516,  1998,   333,
    1839,  1632,  1368,  2369,  2370,   126,    94,   167,   586,   129,
     330,  1124,   101,  1162,  1163,   863,   354,   365,   168,   941,
    1832,   587,  2376,  -367,   334,  1840,   593,   978,   170,  2396,
     331,   677,   335,  2402,  1209,  2384,   674,   366,  1365,   594,
    -516,  1371,   828,  1210,   336,  1484,   107,  1485,  -516,   328,
    1465,   910,   928,  1206,   942,  2408,  1000,  1001,   933,  1466,
     935,  1003,   106,  1973,   109,    61,    78,   376,  1010,  1978,
    -516,  1128,    62,  2409,   405,   406,   521,   522,   523,   524,
     525,   526,   527,  1381,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,  2377,   545,  2410,   110,  1236,  2191,  1217,    63,    64,
      79,   337,  1441,  1455,  2377,  1418,   967,  1807,  1637,  1419,
    1649,  1999,   111,   707,  2204,    65,    80,  1638,   864,  1650,
     112,  1592,   338,  2091,  2001,   521,   522,   523,   524,   525,
     526,   527,  2092,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     379,   545,   113,  -367,   114,  2252,   115,  1420,   968,   969,
    1421,   117,    66,    81,   349,   156,   605,   606,   118,   156,
    1111,  1112,   119,  1114,   123,  1422,   124,  2378,   519,    67,
      82,    68,    83,   339,   128,  1238,   125,    69,    84,  1238,
    2378,  2379,  2240,   127,  2263,  1423,  2244,  1239,   870,   560,
     131,  1239,  2121,  1424,  2379,   130,    70,    71,   157,   561,
    2102,   155,   157,    85,   543,   544,   308,   545,   143,  2287,
     158,    72,  1225,   972,   973,   159,  2115,   148,  2116,  1226,
     542,   543,   544,  1240,   545,  1141,  1142,  1240,   309,  1212,
    1213,  1241,   160,   830,   831,  1241,   832,  -520,   162,   833,
     163,  1006,  2299,   164,  1360,  2257,  -517,   521,   522,   523,
     524,   525,   526,   527,  1352,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,  1189,   545,   165,  1227,   562,  1257,  1258,  1228,
    -520,  1242,  1425,   171,  1426,  1242,  -335,   307,  -520,  -517,
     321,  2344,  1403,  1404,   355,  1338,  1229,  -517,  1407,  1408,
     563,  1409,  1410,  1427,  1349,  1230,  1411,  1410,  1435,  1436,
    -520,  1471,  1472,   564,  2321,  2322,   356,  2324,  2325,  -517,
     357,    73,    86,  2371,  1547,  1548,   358,  1265,   359,  1266,
    1243,  1550,  1551,   360,  1243,   364,  1273,  1274,   565,  1275,
    1879,  1880,  1231,  1280,   363,    74,    87,   368,  2397,  2398,
    1281,  1282,  1283,  1284,   369,  1285,  1286,  1287,   373,  2209,
    2176,   566,  1288,  1289,   381,  1290,   385,  1648,  1436,  1244,
     377,  1293,  1294,  1295,  1659,  1436,   386,  2417,  1802,  1436,
    1829,  1483,  1883,  1884,  1827,  1303,  1304,  1305,   379,  1306,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
    1317,   545,  1232,  1844,  1845,  1926,  1927,  1949,  1436,  1318,
    1319,  1320,  1321,  1322,  1323,  1324,  1325,   398,  1326,  1960,
    1436,  1474,  1327,   387,  1328,   388,  1329,  1330,  1331,  1332,
    1333,  1975,  1436,   389,  1334,  1335,  1336,   390,   538,   539,
     540,   541,   542,   543,   544,  1342,   545,  1344,  1344,  1981,
    1472,  1031,  1032,  1167,  1168,   394,  1171,  1172,  1173,  1990,
    1991,  1361,  1176,  1177,  1178,  1992,  1991,  1181,  1366,   521,
     522,   523,   524,   525,   526,   527,   395,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   399,   545,  1245,   917,   918,   919,
     920,   400,   921,  1994,  1927,   923,   924,   925,  2002,  1483,
     401,  1007,   929,   930,   931,  2064,  2065,   934,  1416,  2066,
    2065,  2067,  2065,  2070,  1991,  1581,  2073,  2074,  1583,    96,
    1584,   407,  1586,  2075,  2076,   521,   522,   523,   524,   525,
     526,   527,   414,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     416,   545,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   551,   545,
    1488,  2078,  2079,  1492,  2081,  2082,  2100,  1436,   415,  1497,
    2101,  1436,  2114,  1436,  2118,  1436,  2126,  2074,  1503,   569,
    1003,  2127,  1991,  2128,  1991,   417,  1511,  1512,  2130,  2076,
    2185,  2186,   521,   522,   523,   524,   525,   526,   527,   418,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   419,   545,  2197,
    1436,   555,  1063,  1064,  2207,  1436,   521,   522,   523,   524,
     525,   526,   527,   420,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,  1582,   545,   524,   525,   526,   527,   421,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   422,   545,  1602,   521,   522,
     523,   524,   525,   526,   527,  1607,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   423,   545,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     572,   545,  2208,  1436,  2214,  1927,   424,   521,   522,   523,
     524,   525,   526,   527,   425,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   426,   545,  2225,  1845,  2269,  1436,  2271,  2074,
     427,  1382,   573,  1837,  2272,  2076,   521,   522,   523,   524,
     525,   526,   527,  1815,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,  1384,   545,   428,  1385,   429,  1386,  2282,  2283,  1387,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,  1388,   545,  1850,  2301,  2302,  1851,
     430,  1389,  1390,  2311,  2312,   574,  2333,  2334,  1862,  1863,
     431,   536,   537,   538,   539,   540,   541,   542,   543,   544,
    1864,   545,  2349,  2350,  1065,  1066,  2354,  2355,   432,  1871,
    1872,  2357,  2350,  2382,  2350,   433,  1391,  2383,  2350,  2386,
    2387,  2411,  2350,  1135,  1136,   434,  1888,  1889,  1890,  1357,
    1358,  1891,  1892,   435,  1893,   436,  1894,   437,  1895,  1911,
    1912,   438,   439,   440,   441,  1896,  1897,  1898,   442,   443,
     444,   575,   445,   446,   447,   448,   449,   450,   451,  1904,
    1906,   452,   453,   454,   455,   595,   596,  1393,  1914,  1915,
    1087,  1088,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   456,   545,   457,   597,  1930,   458,
     459,   460,  1936,   461,   462,   463,  1394,   607,   464,   465,
     466,   467,  1940,   468,  1395,   469,   470,   471,   472,   521,
     522,   523,   524,   525,   526,   527,  1946,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   473,   545,   474,   475,   476,   477,
     478,   479,  1665,  1666,  1667,  1668,  1669,  1670,  1838,  1671,
     480,  1672,   481,   482,   483,  1673,  1674,  1675,   484,  1676,
     485,   486,   487,   488,  1396,  1677,  1678,  1679,  1680,  1681,
     489,   490,   491,   492,   493,   494,   495,   496,   497,  1682,
     608,  1093,  1094,   498,   499,   500,   501,   502,   503,  1683,
    1684,   504,   505,  1685,   506,   507,   508,   509,  1686,  1687,
    1688,  1689,  1690,   510,   644,  1691,   511,  1692,  1693,  1694,
     512,   513,  1695,  1696,   514,  1697,  1698,  1699,   515,   516,
     517,  1700,   518,   554,   556,   652,   653,   654,   655,   661,
     662,   665,   667,  1508,  1509,  1701,   670,   669,   671,   676,
    1702,   681,   682,   683,   684,  1703,  1704,  1705,   685,   686,
     687,   688,  1706,  1707,   689,  1708,  1709,  1710,  1711,   690,
     691,  1712,   695,  1713,  1714,  1715,  1716,   698,  1717,   708,
    1718,  1719,   545,  1720,   709,  1721,  1722,   710,  1723,  1724,
    1725,  1726,  1538,  1539,   728,   744,   748,  1727,   767,  1728,
     768,  1729,  1730,   769,  1731,  1732,  1733,  1734,  1735,  1736,
     770,  1737,  1738,  1739,  1740,  1741,   771,  2005,  2006,  1382,
     774,   775,   776,  2010,   779,  2012,  1742,   780,  1743,   781,
    1744,  1563,  1564,   804,   808,   829,   855,   857,   859,  1745,
    1383,  1746,  1747,  1748,  1749,  1750,  1751,  1752,   861,  1384,
    1753,  1754,  1385,   869,  1386,   871,  1755,  1387,  1756,  1757,
    1758,   878,  1759,   879,  1760,   881,  1761,  1762,  1763,  1764,
     882,   883,  1388,   327,   885,   887,   888,   889,   886,  1389,
    1390,   890,   891,   892,   893,   894,   895,   896,  1765,  1766,
    1767,   898,   899,   900,   901,   902,   904,   905,  1768,   903,
    1769,  1770,  1771,   906,   911,   913,   914,  1772,   926,  1773,
    1774,  1775,   915,   922,  1391,  1776,   932,   936,   937,  1777,
    1778,   943,   945,  1779,  1780,  1781,  1782,   938,   946,   947,
    1783,  1392,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   948,   545,   952,   949,   953,   957,   954,
    2112,   955,   959,   961,   962,   963,   956,   960,   964,   985,
     979,   986,  2122,   988,    16,  1393,   996,  1002,  1046,  1060,
    1061,  1784,  1785,  1786,  1787,  1788,  1062,  1067,  1068,  1069,
     -83,  1113,  1116,  1117,  1118,  1122,  1125,  1123,  1126,  1127,
    1137,  1138,  1140,  1497,  1394,  1144,  1145,  1152,   940,  1153,
    1154,  1157,  1395,  1186,  1160,  1161,  1164,  1169,  1158,  2150,
    1159,  1183,  1184,  1185,  1565,  1566,  1188,  1187,  1190,  1194,
    1207,  1665,  1666,  1667,  1668,  1669,  1670,  1208,  1671,  1211,
    1672,  1218,  2168,  1219,  1673,  1674,  1675,  1220,  1676,  1221,
    2173,  1214,  1223,  1224,  1677,  1678,  1679,  1680,  1681,  2179,
    1237,  1789,  1790,  1791,  1792,  1793,  1249,  1794,  1682,  1253,
    1259,  1269,  1396,  2188,  2189,  1250,  1271,  1254,  1683,  1684,
    1272,  1277,  1685,  1296,  1297,  1298,  1299,  1686,  1687,  1688,
    1689,  1690,  1307,  1300,  1691,  1308,  1692,  1693,  1694,  1309,
    1301,  1695,  1696,  1311,  1697,  1698,  1699,  1302,  1313,   -85,
    1700,  1315,  1350,  1310,  1312,  1316,  1353,  1355,  1359,  1362,
    1363,  1372,  1375,  1378,  1701,  1399,  1314,  1376,  1377,  1702,
    1400,  1401,  1402,  1412,  1703,  1704,  1705,  1413,  1415,  1437,
    1439,  1706,  1707,  1414,  1708,  1709,  1710,  1711,  1429,  1442,
    1712,  1430,  1961,  1714,  1715,  1716,  1431,  1717,  1432,  1718,
    1719,  1444,  1720,  1452,  1721,  1722,  1450,  1723,  1724,  1725,
    1726,  1456,  1457,  1458,  1459,  1462,  1727,  1473,  1728,  1464,
    1729,  1730,  1433,  1731,  1732,  1733,  1734,  1735,  1736,  1434,
    1737,  1738,  1739,  1740,  1741,  1469,  2268,  1463,  1467,  1468,
    1470,  1475,  1478,  1479,  1480,  1742,  1481,  1743,  1489,  1744,
    1493,  1483,  1494,  2280,  1495,  1513,  1504,  1532,  1745,  1514,
    1746,  1747,  1748,  1749,  1750,  1751,  1752,  1531,  1533,  1753,
    1754,  1534,  1535,  1589,  1536,  1755,  1578,  1756,  1757,  1758,
    1537,  1759,  1546,  1760,  1549,  1761,  1762,  1763,  1764,  1590,
    1593,  1552,  1597,  1579,  1585,  1598,  1587,  1588,  1610,  1605,
    1594,  1595,  1596,  1615,  1603,  1608,  1616,  1765,  1766,  1767,
    1609,  1617,  1620,  1618,  1619,  1621,  1633,  1768,  1622,  1769,
    1770,  1771,  1623,  1634,  1636,  1639,  1772,  1640,  1773,  1774,
    1775,  1641,  1643,  1652,  1776,  1653,  1654,  1655,  1777,  1778,
    1656,  1646,  1779,  1780,  1781,  1782,  2342,  1657,  1796,  1783,
     521,   522,   523,   524,   525,   526,   527,  1658,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,  1660,   545,  1797,  1799,  1805,
    1819,  1801,  1803,  1808,  1809,  1816,  1817,  1818,  1822,  1842,
    1784,  1785,  1786,  1787,  1788,  1836,  1847,  1849,  1843,   521,
     522,   523,   524,   525,   526,   527,  1909,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,  1873,   545,  1899,  1878,  1900,  1882,
    1665,  1666,  1667,  1668,  1669,  1670,  1901,  1671,  1902,  1672,
    1903,  1913,  1916,  1673,  1674,  1675,  1919,  1676,  1922,  1920,
    1924,  1929,  1932,  1677,  1678,  1679,  1680,  1681,  1931,  1942,
    1945,  1950,  1947,  1937,  1938,  1968,  1939,  1682,  1944,  1952,
    1789,  1790,  1791,  1792,  1793,  1953,  1794,  1683,  1684,  1971,
    1954,  1685,  2003,  1977,  1980,  1958,  1686,  1687,  1688,  1689,
    1690,  1955,  1959,  1691,  2014,  1692,  1693,  1694,  1969,  1970,
    1695,  1696,  1974,  1697,  1698,  1699,  1976,  1983,  1979,  1700,
    1982,  1984,  1985,  2007,  2016,  2031,  2068,  2013,  2069,  2032,
    2037,  2071,  2038,  1701,  2072,  2039,  2041,  2077,  1702,  2042,
    2043,  2085,  2083,  1703,  1704,  1705,  2084,  2099,  2087,  2088,
    1706,  1707,  2089,  1708,  1709,  1710,  1711,  2098,  2103,  1712,
    2110,  2094,  1714,  1715,  1716,  2111,  1717,  2119,  1718,  1719,
    2113,  1720,  2129,  1721,  1722,  2117,  1723,  1724,  1725,  1726,
    2123,  2134,  2124,  2133,  2135,  1727,  2138,  1728,  2136,  1729,
    1730,  2139,  1731,  1732,  1733,  1734,  1735,  1736,  2142,  1737,
    1738,  1739,  1740,  1741,  2151,  2153,  2154,  2155,  2169,  2156,
    2159,  2166,  2160,  2163,  1742,  2164,  1743,  2170,  1744,  2167,
    2171,  2172,  2174,  2177,  2180,  2181,  2182,  1745,  2183,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,  2178,  2184,  1753,  1754,
    2187,  2190,  2194,  2196,  1755,  2199,  1756,  1757,  1758,  2200,
    1759,  2201,  1760,  2202,  1761,  1762,  1763,  1764,  2203,  2206,
    2210,  2216,  2217,  2222,  2223,  2215,  2226,  2227,  2237,  2255,
    2224,  2229,  2230,  2231,  2232,  2241,  1765,  1766,  1767,  2233,
    2234,  2242,  2236,  2239,  2243,  2245,  1768,  2246,  1769,  1770,
    1771,  2247,  2249,  2258,  2250,  1772,  2251,  1773,  1774,  1775,
    2259,  2260,  2265,  1776,  2270,  2266,  2273,  1777,  1778,  2274,
    2275,  1779,  1780,  1781,  1782,  2276,  2277,  2281,  1783,   521,
     522,   523,   524,   525,   526,   527,  2286,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,  2295,   545,  2296,  2288,  2297,  2278,
    2279,  2298,  2300,  2304,  2309,  1567,  1568,  2310,  2313,  1784,
    1785,  1786,  1787,  1788,  2314,  2315,  2316,  2317,   521,   522,
     523,   524,   525,   526,   527,  2319,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,  2328,   545,  2320,  2323,  2326,  2327,  1665,
    1666,  1667,  1668,  1669,  1670,   995,  1671,  2329,  1672,  2330,
    1991,  2332,  1673,  1674,  1675,  2335,  1676,  2336,  2337,  2339,
    2340,  2351,  1677,  1678,  1679,  1680,  1681,  2341,  2353,  2343,
    2356,  2358,  2366,  2359,  2361,  2362,  1682,  2363,  2364,  1789,
    1790,  1791,  1792,  1793,  2367,  1794,  1683,  1684,  2368,  2372,
    1685,  2375,  2380,  2385,  2381,  1686,  1687,  1688,  1689,  1690,
    2388,  2390,  1691,  2399,  1692,  1693,  1694,  2412,  2418,  1695,
    1696,  2421,  1697,  1698,  1699,  2422,  2423,  2424,  1700,  2425,
    2426,   322,  1505,  1348,   704,  1279,  1908,  2004,  2063,   858,
    1604,   382,  1701,   873,   983,   984,  2198,  1702,  2307,  2352,
    1222,   884,  1703,  1704,  1705,  1374,  2360,  1143,   166,  1706,
    1707,   992,  1708,  1709,  1710,  1711,   697,  2141,  1712,  1830,
    2097,  1714,  1715,  1716,  1262,  1717,  2120,  1718,  1719,  2400,
    1720,  1826,  1721,  1722,  1810,  1723,  1724,  1725,  1726,  1179,
     404,   912,     0,     0,  1727,  1195,  1728,  1941,  1729,  1730,
     666,  1731,  1732,  1733,  1734,  1735,  1736,     0,  1737,  1738,
    1739,  1740,  1741,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1742,     0,  1743,     0,  1744,     0,     0,
       0,     0,     0,     0,     0,     0,  1745,     0,  1746,  1747,
    1748,  1749,  1750,  1751,  1752,     0,     0,  1753,  1754,     0,
       0,     0,     0,  1755,     0,  1756,  1757,  1758,     0,  1759,
       0,  1760,     0,  1761,  1762,  1763,  1764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1765,  1766,  1767,     0,     0,
       0,     0,     0,     0,     0,  1768,     0,  1769,  1770,  1771,
       0,     0,     0,     0,  1772,     0,  1773,  1774,  1775,     0,
       0,     0,  1776,     0,     0,     0,  1777,  1778,     0,     0,
    1779,  1780,  1781,  1782,     0,     0,     0,  1783,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2028,  2029,     0,     0,  1784,  1785,
    1786,  1787,  1788,     0,     0,     0,     0,   521,   522,   523,
     524,   525,   526,   527,     0,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,  1665,  1666,
    1667,  1668,  1669,  1670,  1011,  1671,     0,  1672,     0,     0,
       0,  1673,  1674,  1675,     0,  1676,     0,     0,     0,     0,
       0,  1677,  1678,  1679,  1680,  1681,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1682,     0,     0,  1789,  1790,
    1791,  1792,  1793,     0,  1794,  1683,  1684,     0,     0,  1685,
       0,     0,     0,     0,  1686,  1687,  1688,  1689,  1690,     0,
       0,  1691,     0,  1692,  1693,  1694,     0,     0,  1695,  1696,
       0,  1697,  1698,  1699,     0,     0,     0,  1700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1701,     0,     0,     0,     0,  1702,     0,     0,     0,
       0,  1703,  1704,  1705,     0,     0,     0,     0,  1706,  1707,
       0,  1708,  1709,  1710,  1711,     0,     0,  1712,     0,  2104,
    1714,  1715,  1716,     0,  1717,     0,  1718,  1719,     0,  1720,
       0,  1721,  1722,     0,  1723,  1724,  1725,  1726,     0,     0,
       0,     0,     0,  1727,     0,  1728,     0,  1729,  1730,     0,
    1731,  1732,  1733,  1734,  1735,  1736,     0,  1737,  1738,  1739,
    1740,  1741,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1742,     0,  1743,     0,  1744,     0,     0,     0,
       0,     0,     0,     0,     0,  1745,     0,  1746,  1747,  1748,
    1749,  1750,  1751,  1752,     0,     0,  1753,  1754,     0,     0,
       0,     0,  1755,     0,  1756,  1757,  1758,     0,  1759,     0,
    1760,     0,  1761,  1762,  1763,  1764,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1765,  1766,  1767,     0,     0,     0,
       0,     0,     0,     0,  1768,     0,  1769,  1770,  1771,     0,
       0,     0,     0,  1772,     0,  1773,  1774,  1775,     0,     0,
       0,  1776,     0,     0,     0,  1777,  1778,     0,     0,  1779,
    1780,  1781,  1782,     0,     0,     0,  1783,   521,   522,   523,
     524,   525,   526,   527,     0,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1012,     0,     0,  1784,  1785,  1786,
    1787,  1788,     0,     0,     0,     0,   521,   522,   523,   524,
     525,   526,   527,     0,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,     0,     0,     0,  1665,  1666,  1667,
    1668,  1669,  1670,  1013,  1671,     0,  1672,     0,     0,     0,
    1673,  1674,  1675,     0,  1676,     0,     0,     0,     0,     0,
    1677,  1678,  1679,  1680,  1681,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1682,     0,     0,  1789,  1790,  1791,
    1792,  1793,     0,  1794,  1683,  1684,     0,     0,  1685,     0,
       0,     0,     0,  1686,  1687,  1688,  1689,  1690,     0,     0,
    1691,     0,  1692,  1693,  1694,     0,     0,  1695,  1696,     0,
    1697,  1698,  1699,     0,     0,     0,  1700,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1701,     0,     0,     0,     0,  1702,     0,     0,     0,     0,
    1703,  1704,  1705,     0,     0,     0,     0,  1706,  1707,     0,
    1708,  1709,  1710,  1711,     0,     0,  1712,     0,  2105,  1714,
    1715,  1716,     0,  1717,     0,  1718,  1719,     0,  1720,     0,
    1721,  1722,     0,  1723,  1724,  1725,  1726,     0,     0,     0,
       0,     0,  1727,     0,  1728,     0,  1729,  1730,     0,  1731,
    1732,  1733,  1734,  1735,  1736,     0,  1737,  1738,  1739,  1740,
    1741,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1742,     0,  1743,     0,  1744,     0,     0,     0,     0,
       0,     0,     0,     0,  1745,     0,  1746,  1747,  1748,  1749,
    1750,  1751,  1752,     0,     0,  1753,  1754,     0,     0,     0,
       0,  1755,     0,  1756,  1757,  1758,     0,  1759,     0,  1760,
       0,  1761,  1762,  1763,  1764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1765,  1766,  1767,     0,     0,     0,     0,
       0,     0,     0,  1768,     0,  1769,  1770,  1771,     0,     0,
       0,     0,  1772,     0,  1773,  1774,  1775,     0,     0,     0,
    1776,     0,     0,     0,  1777,  1778,     0,     0,  1779,  1780,
    1781,  1782,     0,     0,     0,  1783,   521,   522,   523,   524,
     525,   526,   527,     0,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1020,     0,     0,  1784,  1785,  1786,  1787,
    1788,     0,     0,     0,     0,   521,   522,   523,   524,   525,
     526,   527,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,     0,     0,     0,  1665,  1666,  1667,  1668,
    1669,  1670,  1021,  1671,     0,  1672,     0,     0,     0,  1673,
    1674,  1675,     0,  1676,     0,     0,     0,     0,     0,  1677,
    1678,  1679,  1680,  1681,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1682,     0,     0,  1789,  1790,  1791,  1792,
    1793,     0,  1794,  1683,  1684,     0,     0,  1685,     0,     0,
       0,     0,  1686,  1687,  1688,  1689,  1690,     0,     0,  1691,
       0,  1692,  1693,  1694,     0,     0,  1695,  1696,     0,  1697,
    1698,  1699,     0,     0,     0,  1700,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1701,
       0,     0,     0,     0,  1702,     0,     0,     0,     0,  1703,
    1704,  1705,     0,     0,     0,     0,  1706,  1707,     0,  1708,
    1709,  1710,  1711,     0,     0,  1712,     0,  2106,  1714,  1715,
    1716,     0,  1717,     0,  1718,  1719,     0,  1720,     0,  1721,
    1722,     0,  1723,  1724,  1725,  1726,     0,     0,     0,     0,
       0,  1727,     0,  1728,     0,  1729,  1730,     0,  1731,  1732,
    1733,  1734,  1735,  1736,     0,  1737,  1738,  1739,  1740,  1741,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1742,     0,  1743,     0,  1744,     0,     0,     0,     0,     0,
       0,     0,     0,  1745,     0,  1746,  1747,  1748,  1749,  1750,
    1751,  1752,     0,     0,  1753,  1754,     0,     0,     0,     0,
    1755,     0,  1756,  1757,  1758,     0,  1759,     0,  1760,     0,
    1761,  1762,  1763,  1764,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1765,  1766,  1767,     0,     0,     0,     0,     0,
       0,     0,  1768,     0,  1769,  1770,  1771,     0,     0,     0,
       0,  1772,     0,  1773,  1774,  1775,     0,     0,     0,  1776,
       0,     0,     0,  1777,  1778,     0,     0,  1779,  1780,  1781,
    1782,     0,     0,     0,  1783,   521,   522,   523,   524,   525,
     526,   527,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1022,     0,     0,  1784,  1785,  1786,  1787,  1788,
       0,     0,     0,     0,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,  1665,  1666,  1667,  1668,  1669,
    1670,  1023,  1671,     0,  1672,     0,     0,     0,  1673,  1674,
    1675,     0,  1676,     0,     0,     0,     0,     0,  1677,  1678,
    1679,  1680,  1681,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1682,     0,     0,  1789,  1790,  1791,  1792,  1793,
       0,  1794,  1683,  1684,     0,     0,  1685,     0,     0,     0,
       0,  1686,  1687,  1688,  1689,  1690,     0,     0,  1691,     0,
    1692,  1693,  1694,     0,     0,  1695,  1696,     0,  1697,  1698,
    1699,     0,     0,     0,  1700,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1701,     0,
       0,     0,     0,  1702,     0,     0,     0,     0,  1703,  1704,
    1705,     0,     0,     0,     0,  1706,  1707,     0,  1708,  1709,
    1710,  1711,     0,     0,  1712,     0,  2107,  1714,  1715,  1716,
       0,  1717,     0,  1718,  1719,     0,  1720,     0,  1721,  1722,
       0,  1723,  1724,  1725,  1726,     0,     0,     0,     0,     0,
    1727,     0,  1728,     0,  1729,  1730,     0,  1731,  1732,  1733,
    1734,  1735,  1736,     0,  1737,  1738,  1739,  1740,  1741,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1742,
       0,  1743,     0,  1744,     0,     0,     0,     0,     0,     0,
       0,     0,  1745,     0,  1746,  1747,  1748,  1749,  1750,  1751,
    1752,     0,     0,  1753,  1754,     0,     0,     0,     0,  1755,
       0,  1756,  1757,  1758,     0,  1759,     0,  1760,     0,  1761,
    1762,  1763,  1764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1765,  1766,  1767,     0,     0,     0,     0,     0,     0,
       0,  1768,     0,  1769,  1770,  1771,     0,     0,     0,     0,
    1772,     0,  1773,  1774,  1775,     0,     0,     0,  1776,     0,
       0,     0,  1777,  1778,     0,     0,  1779,  1780,  1781,  1782,
       0,     0,     0,  1783,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1025,     0,     0,  1784,  1785,  1786,  1787,  1788,     0,
       0,     0,     0,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,  1665,  1666,  1667,  1668,  1669,  1670,
    1026,  1671,     0,  1672,     0,     0,     0,  1673,  1674,  1675,
       0,  1676,     0,     0,     0,     0,     0,  1677,  1678,  1679,
    1680,  1681,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1682,     0,     0,  1789,  1790,  1791,  1792,  1793,     0,
    1794,  1683,  1684,     0,     0,  1685,     0,     0,     0,     0,
    1686,  1687,  1688,  1689,  1690,     0,     0,  1691,     0,  1692,
    1693,  1694,     0,     0,  1695,  1696,     0,  1697,  1698,  1699,
       0,     0,     0,  1700,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1701,     0,     0,
       0,     0,  1702,     0,     0,     0,     0,  1703,  1704,  1705,
       0,     0,     0,     0,  1706,  1707,     0,  1708,  1709,  1710,
    1711,     0,     0,  1712,     0,  2108,  1714,  1715,  1716,     0,
    1717,     0,  1718,  1719,     0,  1720,     0,  1721,  1722,     0,
    1723,  1724,  1725,  1726,     0,     0,     0,     0,     0,  1727,
       0,  1728,     0,  1729,  1730,     0,  1731,  1732,  1733,  1734,
    1735,  1736,     0,  1737,  1738,  1739,  1740,  1741,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1742,     0,
    1743,     0,  1744,     0,     0,     0,     0,     0,     0,     0,
       0,  1745,     0,  1746,  1747,  1748,  1749,  1750,  1751,  1752,
       0,     0,  1753,  1754,     0,     0,     0,     0,  1755,     0,
    1756,  1757,  1758,     0,  1759,     0,  1760,     0,  1761,  1762,
    1763,  1764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1765,  1766,  1767,     0,     0,     0,     0,     0,     0,     0,
    1768,     0,  1769,  1770,  1771,     0,     0,     0,     0,  1772,
       0,  1773,  1774,  1775,     0,     0,     0,  1776,     0,     0,
       0,  1777,  1778,     0,     0,  1779,  1780,  1781,  1782,     0,
       0,     0,  1783,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1027,     0,     0,  1784,  1785,  1786,  1787,  1788,     0,     0,
       0,     0,   521,   522,   523,   524,   525,   526,   527,     0,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,     0,     0,  1665,  1666,  1667,  1668,  1669,  1670,  1033,
    1671,     0,  1672,     0,     0,     0,  1673,  1674,  1675,     0,
    1676,     0,     0,     0,     0,     0,  1677,  1678,  1679,  1680,
    1681,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1682,     0,     0,  1789,  1790,  1791,  1792,  1793,     0,  1794,
    1683,  1684,     0,     0,  1685,     0,     0,     0,     0,  1686,
    1687,  1688,  1689,  1690,     0,     0,  1691,     0,  1692,  1693,
    1694,     0,     0,  1695,  1696,     0,  1697,  1698,  1699,     0,
       0,     0,  1700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1701,     0,     0,     0,
       0,  1702,     0,     0,     0,     0,  1703,  1704,  1705,     0,
       0,     0,     0,  1706,  1707,     0,  1708,  1709,  1710,  1711,
       0,     0,  1712,     0,  2109,  1714,  1715,  1716,     0,  1717,
       0,  1718,  1719,     0,  1720,     0,  1721,  1722,     0,  1723,
    1724,  1725,  1726,     0,     0,     0,     0,     0,  1727,     0,
    1728,     0,  1729,  1730,     0,  1731,  1732,  1733,  1734,  1735,
    1736,     0,  1737,  1738,  1739,  1740,  1741,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1742,     0,  1743,
       0,  1744,     0,     0,     0,     0,     0,     0,     0,     0,
    1745,     0,  1746,  1747,  1748,  1749,  1750,  1751,  1752,     0,
       0,  1753,  1754,     0,     0,     0,     0,  1755,     0,  1756,
    1757,  1758,     0,  1759,     0,  1760,     0,  1761,  1762,  1763,
    1764,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1765,
    1766,  1767,     0,     0,     0,     0,     0,     0,     0,  1768,
       0,  1769,  1770,  1771,     0,     0,     0,     0,  1772,     0,
    1773,  1774,  1775,     0,     0,     0,  1776,     0,     0,     0,
    1777,  1778,     0,     0,  1779,  1780,  1781,  1782,     0,     0,
       0,  1783,   521,   522,   523,   524,   525,   526,   527,     0,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1035,
       0,     0,  1784,  1785,  1786,  1787,  1788,     0,     0,     0,
       0,   521,   522,   523,   524,   525,   526,   527,     0,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,     0,
       0,     0,  1665,  1666,  1667,  1668,  1669,  1670,  1040,  1671,
       0,  1672,     0,     0,     0,  1673,  1674,  1675,     0,  1676,
       0,     0,     0,     0,     0,  1677,  1678,  1679,  1680,  1681,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1682,
       0,     0,  1789,  1790,  1791,  1792,  1793,     0,  1794,  1683,
    1684,     0,     0,  1685,     0,     0,     0,     0,  1686,  1687,
    1688,  1689,  1690,     0,     0,  1691,     0,  1692,  1693,  1694,
       0,     0,  1695,  1696,     0,  1697,  1698,  1699,     0,     0,
       0,  1700,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1701,     0,     0,     0,     0,
    1702,     0,     0,     0,     0,  1703,  1704,  1705,     0,     0,
       0,     0,  1706,  1707,     0,  1708,  1709,  1710,  1711,     0,
       0,  1712,     0,  2192,  1714,  1715,  1716,     0,  1717,     0,
    1718,  1719,     0,  1720,     0,  1721,  1722,     0,  1723,  1724,
    1725,  1726,     0,     0,     0,     0,     0,  1727,     0,  1728,
       0,  1729,  1730,     0,  1731,  1732,  1733,  1734,  1735,  1736,
       0,  1737,  1738,  1739,  1740,  1741,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1742,     0,  1743,     0,
    1744,     0,     0,     0,     0,     0,     0,     0,     0,  1745,
       0,  1746,  1747,  1748,  1749,  1750,  1751,  1752,     0,     0,
    1753,  1754,     0,     0,     0,     0,  1755,     0,  1756,  1757,
    1758,     0,  1759,     0,  1760,     0,  1761,  1762,  1763,  1764,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1765,  1766,
    1767,     0,     0,     0,     0,     0,     0,     0,  1768,     0,
    1769,  1770,  1771,     0,     0,     0,     0,  1772,     0,  1773,
    1774,  1775,     0,     0,     0,  1776,     0,     0,     0,  1777,
    1778,     0,     0,  1779,  1780,  1781,  1782,     0,     0,     0,
    1783,   521,   522,   523,   524,   525,   526,   527,     0,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1041,     0,
       0,  1784,  1785,  1786,  1787,  1788,     0,     0,     0,     0,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,  1665,  1666,  1667,  1668,  1669,  1670,  1042,  1671,     0,
    1672,     0,     0,     0,  1673,  1674,  1675,     0,  1676,     0,
       0,     0,     0,     0,  1677,  1678,  1679,  1680,  1681,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1682,     0,
       0,  1789,  1790,  1791,  1792,  1793,     0,  1794,  1683,  1684,
       0,     0,  1685,     0,     0,     0,     0,  1686,  1687,  1688,
    1689,  1690,     0,     0,  1691,     0,  1692,  1693,  1694,     0,
       0,  1695,  1696,     0,  1697,  1698,  1699,     0,     0,     0,
    1700,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1701,     0,     0,     0,     0,  1702,
       0,     0,     0,     0,  1703,  1704,  1705,     0,     0,     0,
       0,  1706,  1707,     0,  1708,  1709,  1710,  1711,     0,     0,
    1712,     0,  2193,  1714,  1715,  1716,     0,  1717,     0,  1718,
    1719,     0,  1720,     0,  1721,  1722,     0,  1723,  1724,  1725,
    1726,     0,     0,     0,     0,     0,  1727,     0,  1728,     0,
    1729,  1730,     0,  1731,  1732,  1733,  1734,  1735,  1736,     0,
    1737,  1738,  1739,  1740,  1741,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1742,     0,  1743,     0,  1744,
       0,     0,     0,     0,     0,     0,     0,     0,  1745,     0,
    1746,  1747,  1748,  1749,  1750,  1751,  1752,     0,     0,  1753,
    1754,     0,     0,     0,     0,  1755,     0,  1756,  1757,  1758,
       0,  1759,     0,  1760,     0,  1761,  1762,  1763,  1764,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1765,  1766,  1767,
       0,     0,     0,     0,     0,     0,     0,  1768,     0,  1769,
    1770,  1771,     0,     0,     0,     0,  1772,     0,  1773,  1774,
    1775,     0,     0,     0,  1776,     0,     0,     0,  1777,  1778,
       0,     0,  1779,  1780,  1781,  1782,     0,     0,     0,  1783,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1043,     0,     0,
    1784,  1785,  1786,  1787,  1788,     0,     0,     0,     0,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,     0,
    1665,  1666,  1667,  1668,  1669,  1670,  1055,  1671,     0,  1672,
       0,     0,     0,  1673,  1674,  1675,     0,  1676,     0,     0,
       0,     0,     0,  1677,  1678,  1679,  1680,  1681,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1682,     0,     0,
    1789,  1790,  1791,  1792,  1793,     0,  1794,  1683,  1684,     0,
       0,  1685,     0,     0,     0,     0,  1686,  1687,  1688,  1689,
    1690,     0,     0,  1691,     0,  1692,  1693,  1694,     0,     0,
    1695,  1696,     0,  1697,  1698,  1699,     0,     0,     0,  1700,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1701,     0,     0,     0,     0,  1702,     0,
       0,     0,     0,  1703,  1704,  1705,     0,     0,     0,     0,
    1706,  1707,     0,  1708,  1709,  1710,  1711,     0,     0,  1712,
       0,  2264,  1714,  1715,  1716,     0,  1717,     0,  1718,  1719,
       0,  1720,     0,  1721,  1722,     0,  1723,  1724,  1725,  1726,
       0,     0,     0,     0,     0,  1727,     0,  1728,     0,  1729,
    1730,     0,  1731,  1732,  1733,  1734,  1735,  1736,     0,  1737,
    1738,  1739,  1740,  1741,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1742,     0,  1743,     0,  1744,     0,
       0,     0,     0,     0,     0,     0,     0,  1745,     0,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,     0,     0,  1753,  1754,
       0,     0,     0,     0,  1755,     0,  1756,  1757,  1758,     0,
    1759,     0,  1760,     0,  1761,  1762,  1763,  1764,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1765,  1766,  1767,     0,
       0,     0,     0,     0,     0,     0,  1768,     0,  1769,  1770,
    1771,     0,     0,     0,     0,  1772,     0,  1773,  1774,  1775,
       0,     0,     0,  1776,     0,     0,     0,  1777,  1778,     0,
       0,  1779,  1780,  1781,  1782,     0,     0,     0,  1783,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1056,     0,     0,  1784,
    1785,  1786,  1787,  1788,     0,     0,     0,     0,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,  1665,
    1666,  1667,  1668,  1669,  1670,  1057,  1671,     0,  1672,     0,
       0,     0,  1673,  1674,  1675,     0,  1676,     0,     0,     0,
       0,     0,  1677,  1678,  1679,  1680,  1681,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1682,     0,     0,  1789,
    1790,  1791,  1792,  1793,     0,  1794,  1683,  1684,     0,     0,
    1685,     0,     0,     0,     0,  1686,  1687,  1688,  1689,  1690,
       0,     0,  1691,     0,  1692,  1693,  1694,     0,     0,  1695,
    1696,     0,  1697,  1698,  1699,     0,     0,     0,  1700,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1701,     0,     0,     0,     0,  1702,     0,     0,
       0,     0,  1703,  1704,  1705,     0,     0,     0,     0,  1706,
    1707,     0,  1708,  1709,  1710,  1711,     0,     0,  1712,     0,
    2267,  1714,  1715,  1716,     0,  1717,     0,  1718,  1719,     0,
    1720,     0,  1721,  1722,     0,  1723,  1724,  1725,  1726,     0,
       0,     0,     0,     0,  1727,     0,  1728,     0,  1729,  1730,
       0,  1731,  1732,  1733,  1734,  1735,  1736,     0,  1737,  1738,
    1739,  1740,  1741,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1742,     0,  1743,     0,  1744,     0,     0,
       0,     0,     0,     0,     0,     0,  1745,     0,  1746,  1747,
    1748,  1749,  1750,  1751,  1752,     0,     0,  1753,  1754,     0,
       0,     0,     0,  1755,     0,  1756,  1757,  1758,     0,  1759,
       0,  1760,     0,  1761,  1762,  1763,  1764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1765,  1766,  1767,     0,     0,
       0,     0,     0,     0,     0,  1768,     0,  1769,  1770,  1771,
       0,     0,     0,     0,  1772,     0,  1773,  1774,  1775,     0,
       0,     0,  1776,     0,     0,     0,  1777,  1778,     0,     0,
    1779,  1780,  1781,  1782,     0,     0,     0,  1783,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1059,     0,     0,  1784,  1785,
    1786,  1787,  1788,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,  1665,  1666,
    1667,  1668,  1669,  1670,  1070,  1671,     0,  1672,     0,     0,
       0,  1673,  1674,  1675,     0,  1676,     0,     0,     0,     0,
       0,  1677,  1678,  1679,  1680,  1681,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1682,     0,     0,  1789,  1790,
    1791,  1792,  1793,     0,  1794,  1683,  1684,     0,     0,  1685,
       0,     0,     0,     0,  1686,  1687,  1688,  1689,  1690,     0,
       0,  1691,     0,  1692,  1693,  1694,     0,     0,  1695,  1696,
       0,  1697,  1698,  1699,     0,     0,     0,  1700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1701,     0,     0,     0,     0,  1702,     0,     0,     0,
       0,  1703,  1704,  1705,     0,     0,     0,     0,  1706,  1707,
       0,  1708,  1709,  1710,  1711,     0,     0,  1712,     0,  2303,
    1714,  1715,  1716,     0,  1717,     0,  1718,  1719,     0,  1720,
       0,  1721,  1722,     0,  1723,  1724,  1725,  1726,     0,     0,
       0,     0,     0,  1727,     0,  1728,     0,  1729,  1730,     0,
    1731,  1732,  1733,  1734,  1735,  1736,     0,  1737,  1738,  1739,
    1740,  1741,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1742,     0,  1743,     0,  1744,     0,     0,     0,
       0,     0,     0,     0,     0,  1745,     0,  1746,  1747,  1748,
    1749,  1750,  1751,  1752,     0,     0,  1753,  1754,     0,     0,
       0,     0,  1755,     0,  1756,  1757,  1758,     0,  1759,     0,
    1760,     0,  1761,  1762,  1763,  1764,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,   173,   174,   175,   176,
     177,     0,     0,     0,  1765,  1766,  1767,     0,     0,   178,
     179,     0,     0,     0,  1768,     0,  1769,  1770,  1771,   180,
     181,     0,     0,  1772,     0,  1773,  1774,  1775,     0,     0,
       0,  1776,   182,     0,     0,  1777,  1778,     0,     0,  1779,
    1780,  1781,  1782,     0,     0,     0,  1783,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,     0,     0,   184,
       0,     0,   185,   186,     0,     0,     0,     0,     0,     0,
       0,   187,     0,     0,  1079,     0,     0,  1784,  1785,  1786,
    1787,  1788,     0,     0,     0,     0,     0,     0,   188,     0,
       0,     0,   189,     0,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,  1080,
     545,   521,   522,   523,   524,   525,   526,   527,   190,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1789,  1790,  1791,
    1792,  1793,     0,  1794,     0,   191,     0,     0,   521,   522,
     523,   524,   525,   526,   527,   192,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,     0,     0,     0,   195,   196,     0,     0,     0,
     197,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   198,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,     0,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,     0,   285,   286,   287,   288,     0,     0,
       0,     0,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,   301,   302,   172,   173,   174,
     175,   176,   177,     0,     0,     0,   303,     0,     0,     0,
       0,   178,   179,     0,   521,   522,   523,   524,   525,   526,
     527,   180,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   714,
       0,     0,     0,     0,     0,     0,   183,     0,     0,     0,
       0,   184,     0,     0,   185,   186,   521,   522,   523,   524,
     525,   526,   527,   187,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,   521,   522,   523,   524,   525,   526,   527,
    1081,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
     521,   522,   523,   524,   525,   526,   527,  1082,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   715,     0,     0,     0,     0,   191,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,   192,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,   193,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,   716,     0,
       0,     0,     0,     0,     0,     0,     0,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,     0,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,     0,   285,   286,   287,   288,
       0,     0,     0,     0,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,   300,   301,   302,   172,
     173,   174,   175,   176,   177,     0,     0,     0,   303,     0,
       0,     0,     0,   178,   179,     0,     0,     0,     0,     0,
    1084,     0,     0,   180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   835,     0,   523,   524,
     525,   526,   527,   836,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,     0,     0,     0,     0,   183,     0,
       0,     0,     0,   184,     0,     0,   185,   186,     0,     0,
       0,     0,  1085,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   521,   522,   523,   524,   525,   526,   527,  1086,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,   521,
     522,   523,   524,   525,   526,   527,  1092,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,  -749,  -749,  -749,
    -749,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   191,
     545,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,  1096,     0,   521,   522,   523,   524,
     525,   526,   527,     0,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   193,   545,     0,     0,     0,  1097,     0,   837,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,     0,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,     0,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,     0,   285,   286,
     287,   288,     0,     0,     0,     0,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     0,   300,   301,
     302,   172,   173,   174,   175,   176,   177,     0,     0,     0,
     838,     0,     0,     0,     0,   178,   179,     0,   521,   522,
     523,   524,   525,   526,   527,   180,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,   521,   522,   523,   524,   525,
     526,   527,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     183,   545,     0,     0,     0,   184,     0,     0,   185,   186,
     521,   522,   523,   524,   525,   526,   527,   187,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,  1098,     0,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,  1099,   545,   521,   522,   523,
     524,   525,   526,   527,     0,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,     0,     0,   521,   522,   523,   524,   525,
     526,   527,  1100,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,   193,     0,     0,     0,     0,   521,   522,
     523,   524,   525,   526,   527,  1104,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,     0,     0,     0,     0,     0,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,     0,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,     0,
     285,   286,   287,   288,     0,     0,     0,     0,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
     300,   301,   302,   172,   173,   174,   175,   176,   177,     0,
       0,     0,   303,     0,     0,     0,     0,   178,   179,     0,
       0,     0,     0,     0,  1105,     0,     0,   180,   755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   521,   522,   523,   524,   525,   526,
     527,  1106,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,   183,     0,     0,     0,     0,   184,     0,     0,
     185,   186,     0,     0,     0,     0,  1270,     0,     0,   187,
       0,   521,   522,   523,   524,   525,   526,   527,     0,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,  1518,   545,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,  1519,   545,   521,   522,   523,   524,   525,
     526,   527,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   521,   522,   523,   524,   525,   526,
     527,  1530,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,   193,     0,   521,   522,   523,
     524,   525,   526,   527,  1540,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,     0,   285,   286,   287,   288,     0,     0,     0,     0,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,   301,   302,   172,   173,   174,   175,   176,
     177,     0,     0,     0,   303,     0,     0,     0,     0,   178,
     179,     0,   521,   522,   523,   524,   525,   526,   527,   180,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
    1556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,     0,     0,   184,
       0,     0,   185,   186,     0,     0,     0,     0,     0,     0,
       0,   187,     0,     0,     0,     0,     0,  1557,     0,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,  1558,   545,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1009,     0,
       0,     0,     0,     0,   521,   522,   523,   524,   525,   526,
     527,  1561,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,     0,
    1562,     0,   521,   522,   523,   524,   525,   526,   527,     0,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   193,   545,     0,
       0,     0,     0,  1575,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,     0,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,     0,   285,   286,   287,   288,     0,     0,
       0,     0,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,   301,   302,   172,   173,   174,
     175,   176,   177,     0,     0,     0,   303,     0,     0,     0,
       0,   178,   179,     0,     0,     0,     0,     0,  1576,     0,
       0,   180,   521,   522,   523,   524,   525,   526,   527,     0,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,     0,     0,     0,
       0,   184,     0,     0,   185,   186,     0,     0,     0,     0,
       0,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1577,     0,     0,     0,     0,
     521,   522,   523,   524,   525,   526,   527,  1491,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,     0,     0,   521,   522,   523,   524,   525,   526,   527,
    2052,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,   521,   522,   523,   524,   525,   526,   527,  2055,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,   193,
       0,     0,     0,   521,   522,   523,   524,   525,   526,   527,
    2056,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,     0,     0,     0,   198,     0,     0,
       0,     0,     0,  1506,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,     0,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,     0,   285,   286,   287,   288,
       0,     0,     0,     0,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,   300,   301,   302,   172,
     173,   174,   175,   176,   177,     0,     0,     0,   303,     0,
       0,     0,     0,   178,   179,     0,     0,     0,     0,     0,
       0,  1044,     0,   180,     0,     0,     0,     0,  2057,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,     0,
       0,     0,     0,   184,     0,     0,   185,   186,   521,   522,
     523,   524,   525,   526,   527,   187,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,  1045,     0,     0,     0,  1496,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,  1507,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,   819,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,     0,     0,     0,     0,     0,     0,  1008,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,     0,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,     0,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,     0,   285,   286,
     287,   288,     0,     0,     0,     0,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     0,   300,   301,
     302,   172,   173,   174,   175,   176,   177,     0,     0,     0,
     303,     0,     0,     0,     0,   178,   179,     0,     0,     0,
       0,     0,     0,     0,     0,   180,     0,   521,   522,   523,
     524,   525,   526,   527,  1014,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,     0,     0,     0,     0,   184,     0,     0,   185,   186,
       0,     0,     0,  1015,     0,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2009,     0,     0,     0,  1016,   521,   522,   523,   524,
     525,   526,   527,     0,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,  1017,   521,   522,   523,   524,   525,
     526,   527,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,     0,     0,   521,   522,   523,   524,   525,   526,
     527,   192,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,     0,     0,     0,   521,   522,   523,
     524,   525,   526,   527,  1018,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,     0,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,     0,
     285,   286,   287,   288,     0,     0,     0,     0,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
     300,   301,   302,   172,   173,   174,   175,   176,   177,     0,
       0,     0,   303,     0,     0,     0,     0,   178,   179,     0,
       0,     0,     0,     0,     0,     0,     0,   180,     0,     0,
       0,     0,  1019,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,     0,     0,     0,     0,   184,     0,     0,
     185,   186,   521,   522,   523,   524,   525,   526,   527,   187,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,     0,     0,  2011,   521,   522,   523,   524,   525,   526,
     527,  1024,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,   521,   522,   523,   524,   525,   526,   527,
    1028,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,  1029,
       0,     0,     0,   192,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,  1030,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,     0,   285,   286,   287,   288,     0,     0,     0,     0,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,   301,   302,   172,   173,   174,   175,   176,
     177,     0,     0,     0,   303,     0,     0,     0,     0,   178,
     179,     0,     0,     0,     0,     0,     0,     0,     0,   180,
       0,   521,   522,   523,   524,   525,   526,   527,  1034,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,     0,     0,   184,
       0,     0,   185,   186,     0,     0,     0,  1036,     0,     0,
       0,   187,   521,   522,   523,   524,   525,   526,   527,     0,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,  1037,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,  1038,   521,
     522,   523,   524,   525,   526,   527,     0,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,  1047,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,   193,     0,     0,
       0,   521,   522,   523,   524,   525,   526,   527,  1048,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,     0,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,     0,   285,   286,   287,   288,     0,     0,
       0,     0,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,   301,   302,     0,     0,   521,
     522,   523,   524,   525,   526,   527,   303,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,  1049,   521,   522,   523,
     524,   525,   526,   527,     0,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,  1050,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,  1051,   521,   522,   523,   524,
     525,   526,   527,     0,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,  1052,   521,   522,   523,   524,   525,
     526,   527,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   521,   522,
     523,   524,   525,   526,   527,  1053,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,   521,
     522,   523,   524,   525,   526,   527,  1054,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,   521,   522,   523,   524,
     525,   526,   527,     0,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,   521,   522,   523,   524,   525,   526,   527,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
     521,   522,   523,   524,   525,   526,   527,     0,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,   521,   522,   523,
     524,   525,   526,   527,     0,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,   521,   522,   523,
     524,   525,   526,   527,  1058,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,   521,   522,   523,   524,   525,
     526,   527,  1071,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,   521,   522,   523,   524,   525,   526,   527,  1072,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,     0,     0,     0,     0,     0,   521,   522,   523,   524,
     525,   526,   527,  1073,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,   521,   522,   523,   524,   525,   526,
     527,  1074,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,   521,   522,   523,   524,   525,   526,   527,
    1075,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   521,   522,   523,   524,
     525,   526,   527,  1076,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,     0,     0,     0,   521,   522,   523,
     524,   525,   526,   527,  1077,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,   521,   522,   523,   524,   525,   526,
     527,  1078,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,   521,   522,   523,   524,   525,   526,   527,  1089,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,   521,   522,
     523,   524,   525,   526,   527,  1090,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,   521,   522,   523,   524,   525,
     526,   527,  1091,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,   521,   522,   523,   524,   525,   526,   527,  1095,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,     0,     0,     0,     0,   521,   522,   523,   524,   525,
     526,   527,  1101,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,   521,   522,   523,   524,   525,   526,   527,
    1102,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
     521,   522,   523,   524,   525,   526,   527,  1103,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,     0,     0,     0,   521,   522,   523,   524,   525,   526,
     527,  1130,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,   521,   522,   523,   524,   525,   526,   527,  1510,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,   521,   522,   523,   524,   525,   526,   527,  1515,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   521,   522,   523,   524,   525,   526,
     527,  1516,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,   521,   522,   523,   524,   525,
     526,   527,  1517,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,   521,   522,   523,   524,   525,   526,   527,  1520,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,   521,
     522,   523,   524,   525,   526,   527,  1521,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,   521,   522,   523,   524,
     525,   526,   527,  1522,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,   521,   522,   523,   524,   525,   526,   527,
    1523,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
     521,   522,   523,   524,   525,   526,   527,  1524,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,     0,     0,   521,   522,   523,   524,   525,   526,   527,
    1525,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
       0,   521,   522,   523,   524,   525,   526,   527,  1528,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,   521,   522,
     523,   524,   525,   526,   527,  1529,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,     0,
       0,     0,   521,   522,   523,   524,   525,   526,   527,  1541,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
     521,   522,   523,   524,   525,   526,   527,  1542,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,   521,
     522,   523,   524,   525,   526,   527,  1555,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   521,   522,   523,   524,   525,   526,   527,  1559,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,     0,
       0,     0,     0,   521,   522,   523,   524,   525,   526,   527,
    1560,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,   545,
     521,   522,   523,   524,   525,   526,   527,  1569,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,   521,   522,   523,
     524,   525,   526,   527,  1570,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,   521,   522,   523,   524,   525,   526,
     527,  1571,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,   521,   522,   523,   524,   525,   526,   527,  1572,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,   521,   522,
     523,   524,   525,   526,   527,  1573,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,     0,
       0,   521,   522,   523,   524,   525,   526,   527,  1574,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,     0,   521,
     522,   523,   524,   525,   526,   527,  1647,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,   521,   522,   523,   524,
     525,   526,   527,  1852,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,     0,     0,     0,     0,     0,     0,
     521,   522,   523,   524,   525,   526,   527,  1921,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,   521,   522,
     523,   524,   525,   526,   527,  1986,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,   521,   522,   523,
     524,   525,   526,   527,  2017,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     521,   522,   523,   524,   525,   526,   527,  2018,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,   521,   522,   523,   524,   525,   526,   527,  2019,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,   521,   522,
     523,   524,   525,   526,   527,  2020,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,   521,   522,   523,   524,   525,
     526,   527,  2021,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,   521,   522,   523,   524,   525,   526,   527,  2030,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,     0,   545,   521,
     522,   523,   524,   525,   526,   527,  2047,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,   521,   522,   523,   524,
     525,   526,   527,  2048,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,     0,     0,     0,     0,     0,   521,
     522,   523,   524,   525,   526,   527,  2049,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,     0,   545,     0,   521,   522,   523,
     524,   525,   526,   527,  2050,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,   521,   522,   523,   524,   525,   526,
     527,  2051,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,     0,   521,   522,
     523,   524,   525,   526,   527,  2053,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,   521,   522,   523,   524,
     525,   526,   527,  2054,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,     0,   545,     0,     0,   521,   522,   523,   524,   525,
     526,   527,  2080,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1853,  1854,     0,     0,     0,  1855,     0,  1856,
       0,     0,     0,     0,     0,  2086,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1857,  1858,     0,  1859,  2090,     0,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,  2095,   545,     0,     0,     0,     0,     1,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     4,   609,   610,     0,   611,
       0,   612,   613,     0,     0,     0,     0,  2211,     5,     0,
       0,     0,     0,     0,     0,     0,     0,   614,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     0,  2235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   615,
     616,   617,   618,     0,     0,     0,  1860,  1861,   619,     0,
       0,  2248,     0,     0,     0,     0,     0,   620,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,   411,     0,     0,     0,     0,     0,   621,   997,     0,
       9,    10,    11,     0,  2261,   622,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     623,     0,     0,     0,     0,     0,     0,   624,     0,     0,
     625,     0,  2262,   626,   627,     0,     0,     0,    12,     0,
      13,     0,     0,     0,     0,     0,     0,     0,    14,     0,
     628,     0,     0,     0,     0,     0,     0,     0,     0,  2308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,  1268,     0,     0,   629,   630,     0,    17,   631,   632,
      18,     0,     0,     0,   633,     0,   634,     0,     0,    19,
       0,   635,   636,     0,     0,     0,     0,   637,     0,   638,
       0,     0,     0,     0,     0,   639,     0,   640,   641,     0,
       0,     0,     0,   642,   521,   522,   523,   524,   525,   526,
     527,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,   521,   522,   523,   524,   525,   526,   527,     0,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,     0,   545,   521,   522,
     523,   524,   525,   526,   527,     0,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,   521,   522,   523,   524,   525,
     526,   527,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1831,     0,     0,     0,     0,     0,
    1276,   520,     0,     0,     0,     0,     0,     0,   521,   522,
     523,   524,   525,   526,   527,  1267,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,   545,     0,     0,     0,     0,     0,
       0,     0,  1502,     0,     0,     0,     0,     0,     0,   546,
     521,   522,   523,   524,   525,   526,   527,  1832,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545,     0,     0,     0,
       0,     0,     0,     0,   521,   522,   523,   524,   525,   526,
     527,  1039,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,     0,
     545,     0,     0,     0,     0,     0,     0,   521,   522,   523,
     524,   525,   526,   527,  1115,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,   545,     0,     0,     0,     0,     0,     0,
     521,   522,   523,   524,   525,   526,   527,  1341,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,   545
};

static const yytype_int16 yycheck[] =
{
     100,  1134,  1190,  1364,   320,  1224,  1442,  1150,  1151,   680,
     310,  1470,    48,  1156,   364,  1822,   314,   566,  1206,   136,
     927,   928,   992,   995,   994,  1468,   933,  1485,   935,  1217,
     867,     5,  1245,  1601,    97,     8,    20,    20,   136,  1875,
    1876,     4,  1816,  1379,  1380,     6,    78,     3,    90,   199,
    1886,  1887,     3,     4,     5,     6,     7,     8,    40,   154,
       3,   159,  1398,   199,     4,   240,   240,   167,   168,   314,
     240,   590,     3,     3,     3,     3,   107,   107,   178,   179,
     180,    51,     3,     3,   184,   383,    36,    16,    36,    78,
     108,   274,   274,   277,    49,    51,    10,    11,    12,    13,
      14,    15,    16,    78,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   216,    36,    87,     3,   107,   645,   157,     3,    74,
       3,     3,   277,    74,   268,     3,    18,  1109,  1544,  1545,
       3,     3,    54,    55,    55,   134,     3,  1553,  1554,   219,
     137,     4,     5,     6,     7,   124,   125,   112,    71,   134,
    1603,   197,    74,     3,    85,    85,    71,     3,     3,   201,
     230,     3,     3,   107,     3,   157,   259,   268,   113,   177,
     241,     5,   252,     3,   154,   856,  2022,  2023,  2024,  2025,
    2026,  2027,   228,   136,    71,   113,    20,   280,   258,   252,
    2036,   872,  1638,   303,  2040,    14,   269,    84,  2044,    18,
     271,   154,   201,   200,  1650,    51,   258,   215,     3,    72,
      51,   150,   406,   406,   406,   156,   201,   258,   258,   261,
     404,   406,   193,   176,   404,   156,   156,   167,  1381,   167,
     258,  1429,   193,   173,   184,   173,   216,   192,   235,    84,
     548,  1687,  1471,  1441,   227,   555,   406,   391,   193,   241,
     203,   406,  1698,    95,    84,   210,   195,  1455,  1481,   210,
     406,   241,   261,   236,   237,   193,   258,   156,  1614,     6,
    1848,   156,  1718,   156,   156,   249,   261,  1124,   156,   406,
    1260,    18,  1262,   156,   156,   240,  1732,   208,   210,   156,
     391,   371,   184,   277,   217,  1741,   275,   407,   406,   404,
     981,   411,   217,   241,   248,   351,   156,  2124,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   878,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,  1781,   446,   447,   448,  2123,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,  1339,    48,   888,
     889,   156,   472,   473,  1817,  1818,   266,   477,   478,   898,
     266,   679,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,  2240,   505,   506,   507,  2244,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   403,
     403,   521,   522,   523,   524,   525,   945,   946,   947,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,  1904,   403,   403,   694,
     550,   381,   697,   381,   405,   405,   556,   405,  1591,  1865,
    1866,  1867,  1868,  1869,  1870,   266,   193,   712,     3,   154,
    1658,  1877,  1660,   277,   404,  1881,   404,   136,   204,  1885,
     333,   334,   335,   197,   241,  2321,  2322,    74,  2324,  2325,
       3,     3,   172,   407,   376,   377,   378,   379,   327,   328,
     329,   330,  1409,   139,  1411,  1412,  1942,    49,     3,    18,
    2312,  1947,    38,     3,   271,     3,   406,   197,   404,   266,
    1039,  1040,   124,   125,   266,   266,  1985,    36,     3,   266,
      10,   216,    98,     3,     3,     4,     5,     6,     7,     8,
      28,   252,   268,     5,   133,  2003,  1907,   103,   228,    75,
       3,   404,   266,  2355,  2356,    69,   252,     9,    71,    73,
     100,   861,   252,   913,   914,   154,   202,    39,    20,    78,
     112,    84,    18,   266,   100,    28,    71,   677,   113,  2381,
     120,   274,   108,   149,    51,    18,   245,    59,  1137,    84,
     146,  1140,   319,    60,   120,     3,   402,     5,   154,   403,
     155,    63,   625,   404,   113,   192,   706,   707,   631,   164,
     633,   711,     0,  1801,     3,    95,    95,   131,   718,  1807,
     176,   866,   102,   210,   403,   404,    10,    11,    12,    13,
      14,    15,    16,  1152,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    97,    36,   240,     3,   971,  2092,   404,   138,   139,
     139,   187,   404,   404,    97,    62,   351,   404,    51,    66,
      51,   351,     3,   275,  2110,   155,   155,    60,   267,    60,
       3,  1352,   208,    51,  1827,    10,    11,    12,    13,    14,
      15,    16,    60,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     403,    36,   404,   406,   216,  2173,   156,   114,   403,   404,
     117,     3,   202,   202,   193,   103,   405,   406,   155,   103,
     830,   831,     3,   833,     3,   132,     3,   183,   838,   219,
     219,   221,   221,   269,   155,    87,     3,   227,   227,    87,
     183,   197,  2158,   246,  2190,   152,  2162,    99,   405,   406,
     252,    99,  1981,   160,   197,   396,   246,   247,   146,    76,
    1958,   396,   146,   252,    33,    34,   154,    36,     3,  2237,
     154,   261,    71,   405,   406,   159,  1974,     3,  1976,    78,
      32,    33,    34,   135,    36,    45,    46,   135,   176,   223,
     224,   143,   176,    13,    14,   143,    16,   103,   171,    19,
     406,   136,  2255,     3,  1130,  2176,   103,    10,    11,    12,
      13,    14,    15,    16,  1122,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   942,    36,     3,   134,   153,   405,   406,   138,
     146,   193,   249,   406,   251,   193,   163,     3,   154,   146,
       3,  2319,   405,   406,   281,  1110,   155,   154,    82,    83,
     177,   405,   406,   270,  1119,   164,   405,   406,   405,   406,
     176,   405,   406,   190,  2290,  2291,     3,  2293,  2294,   176,
      51,   371,   371,  2357,   405,   406,     3,   997,   404,   999,
     242,   405,   406,   197,   242,   404,  1006,  1007,   215,  1009,
       4,     5,   201,  1013,   281,   395,   395,   197,  2382,  2383,
    1020,  1021,  1022,  1023,     3,  1025,  1026,  1027,     3,  2117,
    2063,   238,  1032,  1033,     3,  1035,   281,   405,   406,   277,
     404,  1041,  1042,  1043,   405,   406,   281,  2411,   405,   406,
     405,   406,     4,     5,  1473,  1055,  1056,  1057,   403,  1059,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    1070,    36,   261,   405,   406,   405,   406,   405,   406,  1079,
    1080,  1081,  1082,  1083,  1084,  1085,  1086,     3,  1088,   405,
     406,  1236,  1092,   281,  1094,   281,  1096,  1097,  1098,  1099,
    1100,   405,   406,   197,  1104,  1105,  1106,   281,    28,    29,
      30,    31,    32,    33,    34,  1115,    36,  1117,  1118,   405,
     406,   405,   406,   920,   921,   281,   923,   924,   925,   405,
     406,  1131,   929,   930,   931,   405,   406,   934,  1138,    10,
      11,    12,    13,    14,    15,    16,   281,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     4,    36,   404,   612,   613,   614,
     615,   245,   617,   405,   406,   620,   621,   622,   405,   406,
       3,   406,   627,   628,   629,   405,   406,   632,  1188,   405,
     406,   405,   406,   405,   406,  1340,   405,   406,  1343,     8,
    1345,     9,  1347,   405,   406,    10,    11,    12,    13,    14,
      15,    16,   403,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      36,    36,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   406,    36,
    1250,   405,   406,  1253,   405,   406,   405,   406,   404,  1259,
     405,   406,   405,   406,   405,   406,   405,   406,  1268,    51,
    1270,   405,   406,   405,   406,   404,  1276,  1277,   405,   406,
      57,    58,    10,    11,    12,    13,    14,    15,    16,   404,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   404,    36,   405,
     406,     3,   405,   406,   405,   406,    10,    11,    12,    13,
      14,    15,    16,   404,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  1341,    36,    13,    14,    15,    16,   404,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   404,    36,  1367,    10,    11,
      12,    13,    14,    15,    16,  1375,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   404,    36,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      53,    36,   405,   406,   405,   406,   404,    10,    11,    12,
      13,    14,    15,    16,   404,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   404,    36,   405,   406,   405,   406,   405,   406,
     404,    18,    53,   181,   405,   406,    10,    11,    12,    13,
      14,    15,    16,  1463,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    48,    36,   404,    51,   404,    53,   405,   406,    56,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    71,    36,  1506,    57,    58,  1509,
     404,    78,    79,   403,   404,    44,   405,   406,  1518,  1519,
     404,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    1530,    36,   405,   406,   405,   406,   403,   404,   404,  1539,
    1540,   405,   406,   405,   406,   404,   113,   405,   406,   405,
     406,   405,   406,   874,   875,   404,  1556,  1557,  1558,  1126,
    1127,  1561,  1562,   404,  1564,   404,  1566,   404,  1568,  1595,
    1596,   404,   404,   404,   404,  1575,  1576,  1577,   404,   404,
     404,     3,   404,   404,   404,   404,   404,   404,   404,  1589,
    1590,   404,   404,   404,   404,    71,   277,   164,  1598,  1599,
     405,   406,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   404,    36,   404,   245,  1618,   404,
     404,   404,  1622,   404,   404,   404,   193,     3,   404,   404,
     404,   404,  1632,   404,   201,   404,   404,   404,   404,    10,
      11,    12,    13,    14,    15,    16,  1646,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   404,    36,   404,   404,   404,   404,
     404,   404,     3,     4,     5,     6,     7,     8,   406,    10,
     404,    12,   404,   404,   404,    16,    17,    18,   404,    20,
     404,   404,   404,   404,   261,    26,    27,    28,    29,    30,
     404,   404,   404,   404,   404,   404,   404,   404,   404,    40,
       3,   405,   406,   404,   404,   404,   404,   404,   404,    50,
      51,   404,   404,    54,   404,   404,   404,   404,    59,    60,
      61,    62,    63,   404,   197,    66,   404,    68,    69,    70,
     404,   404,    73,    74,   404,    76,    77,    78,   404,   404,
     404,    82,   404,   404,   404,     3,   197,   281,     3,     3,
     197,   281,   277,   405,   406,    96,     3,   281,     3,    28,
     101,     3,     3,     3,     3,   106,   107,   108,     3,     3,
       3,     3,   113,   114,     3,   116,   117,   118,   119,    74,
     281,   122,     3,   124,   125,   126,   127,     3,   129,     3,
     131,   132,    36,   134,     3,   136,   137,   407,   139,   140,
     141,   142,   405,   406,   405,   405,   405,   148,   405,   150,
     405,   152,   153,   405,   155,   156,   157,   158,   159,   160,
     405,   162,   163,   164,   165,   166,   405,  1837,  1838,    18,
     405,   405,   405,  1843,     5,  1845,   177,   405,   179,   405,
     181,   405,   406,   405,   405,   404,     3,     3,     3,   190,
      39,   192,   193,   194,   195,   196,   197,   198,     3,    48,
     201,   202,    51,   405,    53,     3,   207,    56,   209,   210,
     211,   163,   213,   196,   215,     3,   217,   218,   219,   220,
       3,     5,    71,   277,    42,     3,     3,     3,    42,    78,
      79,     3,     3,     3,     3,     3,     3,     3,   239,   240,
     241,     3,   245,     3,     3,     3,     3,   379,   249,     5,
     251,   252,   253,     5,     5,   404,   404,   258,    64,   260,
     261,   262,   404,   404,   113,   266,   404,   404,   404,   270,
     271,     3,     3,   274,   275,   276,   277,   404,     3,     3,
     281,   130,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   405,    36,     3,   406,     3,    51,   197,
    1970,   405,     3,   281,     3,   404,   197,   197,     3,     3,
     198,     3,  1982,     3,   241,   164,   405,   405,   405,   350,
     350,   322,   323,   324,   325,   326,   350,   405,   350,   350,
     241,   404,   404,   404,   404,   136,   164,   406,   164,   164,
     163,   197,   163,  2013,   193,   197,   197,     3,    36,   222,
     222,     3,   201,   193,     5,     5,     5,     4,   245,  2029,
     245,     5,     5,     5,   405,   406,   404,   407,   404,   213,
     197,     3,     4,     5,     6,     7,     8,     3,    10,     3,
      12,     3,  2052,     3,    16,    17,    18,   197,    20,   397,
    2060,   140,    94,     3,    26,    27,    28,    29,    30,  2069,
       3,   402,   403,   404,   405,   406,    63,   408,    40,    20,
     404,    91,   261,  2083,  2084,   179,   407,   199,    50,    51,
     405,   161,    54,     4,   350,   350,   350,    59,    60,    61,
      62,    63,   404,   350,    66,   404,    68,    69,    70,   404,
     350,    73,    74,     5,    76,    77,    78,   350,     5,   241,
      82,   404,   141,   350,   350,   404,     3,   140,   405,     3,
       3,     3,   404,   404,    96,     3,   350,   164,   164,   101,
       3,   405,   405,   405,   106,   107,   108,   405,    78,   268,
       3,   113,   114,   405,   116,   117,   118,   119,   404,    60,
     122,   404,   124,   125,   126,   127,   404,   129,   404,   131,
     132,   140,   134,   268,   136,   137,   245,   139,   140,   141,
     142,   197,     3,    20,     3,     3,   148,     3,   150,   164,
     152,   153,   404,   155,   156,   157,   158,   159,   160,   404,
     162,   163,   164,   165,   166,   164,  2206,   404,   404,   404,
     404,     4,     6,     4,     4,   177,   404,   179,   212,   181,
     164,   406,     3,  2223,     3,   405,   404,   404,   190,   405,
     192,   193,   194,   195,   196,   197,   198,   405,   404,   201,
     202,   404,   404,    63,   404,   207,   405,   209,   210,   211,
     404,   213,   404,   215,   404,   217,   218,   219,   220,   148,
     163,   404,     3,   405,   405,    20,   405,   405,     3,   406,
     404,   404,   404,   193,   404,   404,     3,   239,   240,   241,
     404,   404,    52,   404,   404,     3,   164,   249,   404,   251,
     252,   253,     4,   164,   213,     5,   258,   240,   260,   261,
     262,     4,     4,     3,   266,     3,     3,     3,   270,   271,
       3,   404,   274,   275,   276,   277,  2316,     3,   118,   281,
      10,    11,    12,    13,    14,    15,    16,   404,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   404,    36,     3,   266,     3,
       3,   404,   268,     4,   140,   404,   404,   404,   404,   258,
     322,   323,   324,   325,   326,   406,   197,     4,    20,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   351,    36,   405,   350,   405,   350,
       3,     4,     5,     6,     7,     8,   405,    10,   405,    12,
     405,   404,     3,    16,    17,    18,     3,    20,     3,     5,
       3,     5,    51,    26,    27,    28,    29,    30,     5,    60,
       4,     3,    60,   404,   404,   217,   404,    40,   405,   405,
     402,   403,   404,   405,   406,   405,   408,    50,    51,   277,
     405,    54,     3,   268,   271,   404,    59,    60,    61,    62,
      63,   406,   404,    66,    88,    68,    69,    70,   406,   404,
      73,    74,   404,    76,    77,    78,   404,   164,   405,    82,
     404,   164,   404,   406,   405,    63,     3,   404,    20,   198,
     404,    43,   405,    96,    18,   405,   404,     3,   101,   405,
     405,   164,   404,   106,   107,   108,   404,     3,   405,   405,
     113,   114,   405,   116,   117,   118,   119,   405,     3,   122,
      60,   124,   125,   126,   127,     3,   129,   136,   131,   132,
      78,   134,     3,   136,   137,   404,   139,   140,   141,   142,
     404,     3,   404,   404,    63,   148,     3,   150,    63,   152,
     153,     3,   155,   156,   157,   158,   159,   160,   404,   162,
     163,   164,   165,   166,     3,    63,   405,   405,     5,   405,
     350,   405,   350,   350,   177,   350,   179,     5,   181,   405,
       5,   214,   140,     3,   269,   207,     3,   190,     3,   192,
     193,   194,   195,   196,   197,   198,   405,     5,   201,   202,
       5,    60,   277,   405,   207,    77,   209,   210,   211,   131,
     213,   156,   215,   166,   217,   218,   219,   220,   276,   404,
     404,     5,     3,   204,    20,   207,     3,   101,     3,   159,
     406,   405,   405,   405,   405,   404,   239,   240,   241,   405,
     405,   404,   406,   405,   405,   404,   249,   404,   251,   252,
     253,   405,   405,     3,   406,   258,   406,   260,   261,   262,
     405,   405,   404,   266,     5,   405,     3,   270,   271,   405,
       3,   274,   275,   276,   277,     3,   404,     3,   281,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     4,    36,     4,   406,   231,   404,
     404,   231,   404,     3,   405,   405,   406,   207,     3,   322,
     323,   324,   325,   326,     3,     3,    20,     3,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   180,    36,   405,   405,   405,   405,     3,
       4,     5,     6,     7,     8,   406,    10,   180,    12,     3,
     406,    20,    16,    17,    18,   245,    20,     3,     3,   405,
     405,     5,    26,    27,    28,    29,    30,   405,   404,   240,
     404,   404,     3,   229,   405,   405,    40,   405,   405,   402,
     403,   404,   405,   406,     5,   408,    50,    51,     3,   228,
      54,     5,   405,     3,   404,    59,    60,    61,    62,    63,
      97,   151,    66,   271,    68,    69,    70,   174,   250,    73,
      74,   197,    76,    77,    78,   197,   191,   191,    82,     5,
       5,   107,  1270,  1118,   412,  1012,  1592,  1836,  1908,   550,
    1371,   134,    96,   560,   681,   688,  2103,   101,  2266,  2334,
     964,   575,   106,   107,   108,  1145,  2343,   884,    95,   113,
     114,   696,   116,   117,   118,   119,   401,  2013,   122,  1483,
     124,   125,   126,   127,   993,   129,  1981,   131,   132,  2387,
     134,  1472,   136,   137,  1460,   139,   140,   141,   142,   932,
     171,   606,    -1,    -1,   148,   949,   150,  1636,   152,   153,
     373,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
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
      -1,    -1,    -1,    -1,   405,   406,    -1,    -1,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,   406,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   402,   403,
     404,   405,   406,    -1,   408,    50,    51,    -1,    -1,    54,
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
      -1,    -1,    -1,    -1,   406,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,   406,    10,    -1,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   402,   403,   404,
     405,   406,    -1,   408,    50,    51,    -1,    -1,    54,    -1,
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
      -1,    -1,    -1,   406,    -1,    -1,   322,   323,   324,   325,
     326,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,   406,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,   402,   403,   404,   405,
     406,    -1,   408,    50,    51,    -1,    -1,    54,    -1,    -1,
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
      -1,    -1,   406,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,   406,    10,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   402,   403,   404,   405,   406,
      -1,   408,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
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
      -1,   406,    -1,    -1,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
     406,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,   402,   403,   404,   405,   406,    -1,
     408,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
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
     406,    -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,   406,
      10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   402,   403,   404,   405,   406,    -1,   408,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,
      -1,    -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,   406,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,   402,   403,   404,   405,   406,    -1,   408,    50,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,   406,    10,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   402,   403,   404,   405,   406,    -1,   408,    50,    51,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,
     322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,   406,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
     402,   403,   404,   405,   406,    -1,   408,    50,    51,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,   406,    10,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   402,
     403,   404,   405,   406,    -1,   408,    50,    51,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,   322,   323,
     324,   325,   326,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,   406,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   402,   403,
     404,   405,   406,    -1,   408,    50,    51,    -1,    -1,    54,
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
      -1,    89,    -1,    -1,   406,    -1,    -1,   322,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   406,
      36,    10,    11,    12,    13,    14,    15,    16,   146,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   402,   403,   404,
     405,   406,    -1,   408,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   234,    -1,    -1,    -1,
     238,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   263,    36,    -1,    -1,    -1,
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
       6,     7,     8,    -1,    -1,    -1,   404,    -1,    -1,    -1,
      -1,    17,    18,    -1,    10,    11,    12,    13,    14,    15,
      16,    27,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     406,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   406,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,   193,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,   225,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   254,    -1,
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
       4,     5,     6,     7,     8,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
     406,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    12,    13,
      14,    15,    16,    47,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,   406,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   406,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   406,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   183,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,   406,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   225,    36,    -1,    -1,    -1,   406,    -1,   232,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,   263,
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
     404,    -1,    -1,    -1,    -1,    17,    18,    -1,    10,    11,
      12,    13,    14,    15,    16,    27,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      72,    36,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   406,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   406,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   406,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,   225,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   406,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,   281,
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
      -1,    -1,   404,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,   406,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   406,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,   406,    -1,    -1,    89,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   406,    36,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   406,    36,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    10,    11,    12,    13,    14,    15,
      16,   406,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   225,    -1,    10,    11,    12,
      13,    14,    15,    16,   406,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
       8,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    17,
      18,    -1,    10,    11,    12,    13,    14,    15,    16,    27,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
     406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,   406,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   406,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   406,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
     406,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   225,    36,    -1,
      -1,    -1,    -1,   406,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
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
       6,     7,     8,    -1,    -1,    -1,   404,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,    27,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   113,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     406,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   406,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,   225,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     406,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
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
       4,     5,     6,     7,     8,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,   321,    -1,    27,    -1,    -1,    -1,    -1,   406,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,   405,    -1,    -1,    -1,   113,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   405,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   405,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,   263,
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
     404,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    10,    11,    12,
      13,    14,    15,    16,   405,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,   405,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,   405,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   405,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   405,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   404,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,   405,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   113,    10,    11,    12,    13,    14,    15,
      16,   405,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     405,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,   405,
      -1,    -1,    -1,   193,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,   405,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
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
       8,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,   405,    -1,    -1,
      -1,    89,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,   405,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   405,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,   405,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,   225,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
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
     388,   389,   390,    -1,   392,   393,   394,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   404,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,   405,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,   405,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,   405,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   405,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   405,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   405,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   405,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    10,    11,    12,    13,    14,
      15,    16,   405,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   405,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   405,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   405,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     405,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   405,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   405,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   405,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   405,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   405,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   405,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   405,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    10,    11,    12,    13,    14,    15,    16,
     405,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   405,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   405,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,   405,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   405,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   405,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   405,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   405,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   405,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     405,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   405,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     405,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   405,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   405,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   405,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   405,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   405,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     405,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   405,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   405,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   405,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   405,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    10,
      11,    12,    13,    14,    15,    16,   405,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   405,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   405,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   405,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   405,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   405,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   405,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   405,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   405,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   405,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   405,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   405,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   405,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    10,    11,    12,
      13,    14,    15,    16,   405,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   405,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   405,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    10,    11,    12,    13,
      14,    15,    16,   405,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   405,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,   147,   405,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   405,    36,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    61,    62,    -1,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,   405,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108,    -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,    -1,    -1,    -1,   278,   279,   123,    -1,
      -1,   405,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,   275,    -1,    -1,    -1,    -1,    -1,   152,   253,    -1,
     168,   169,   170,    -1,   405,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,
     185,    -1,   405,   188,   189,    -1,    -1,    -1,   206,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,   239,   240,    -1,   255,   243,   244,
     258,    -1,    -1,    -1,   249,    -1,   251,    -1,    -1,   267,
      -1,   256,   257,    -1,    -1,    -1,    -1,   262,    -1,   264,
      -1,    -1,    -1,    -1,    -1,   270,    -1,   272,   273,    -1,
      -1,    -1,    -1,   278,    10,    11,    12,    13,    14,    15,
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
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
     136,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   124,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      10,    11,    12,    13,    14,    15,    16,   112,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    51,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    50,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    50,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     410,   449,   450,   489,   493,   495,   502,   503,   506,   508,
     509,   510,   511,   512,   513,   515,   518,   525,   526,   528,
     544,   545,   554,   557,   559,   560,   561,   584,   587,   594,
     595,   598,   601,   602,   605,   219,   252,   371,   252,     3,
      10,    95,   102,   138,   139,   155,   202,   219,   221,   227,
     246,   247,   261,   371,   395,   566,     3,   490,    95,   139,
     155,   202,   219,   221,   227,   252,   371,   395,   536,     3,
       3,     3,    28,   252,   252,   536,     8,   227,   585,   586,
     468,   252,   536,   555,     3,    95,     0,   402,   505,     3,
       3,     3,     3,   404,   216,   156,   558,     3,   155,     3,
       3,    85,   156,     3,     3,     3,   558,   246,   155,   558,
     396,   252,   546,     3,   136,   154,   176,   203,   491,     3,
     156,     3,   156,     3,     3,   156,     3,   156,     3,     3,
     156,     3,   156,     3,   156,   396,   103,   146,   154,   159,
     176,   537,   171,   406,     3,     3,   537,     9,    20,     3,
     113,   406,     3,     4,     5,     6,     7,     8,    17,    18,
      27,    28,    40,    72,    77,    80,    81,    89,   106,   110,
     146,   183,   193,   225,   226,   233,   234,   238,   263,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   320,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   372,   373,   374,   375,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     392,   393,   394,   404,   411,   469,   470,     3,   154,   176,
       3,   167,   173,   381,   404,   472,   473,   474,   475,   478,
     488,     3,   410,    54,    55,    74,   210,   277,   403,   514,
     100,   120,    38,    75,   100,   108,   120,   187,   208,   269,
      55,   208,   603,     3,     4,     5,     6,     7,     8,   193,
     405,   596,   597,   139,   202,   281,     3,    51,     3,   404,
     197,     3,   156,   281,   404,    39,    59,   599,   197,     3,
       3,    85,   156,     3,     3,   156,   558,   404,   547,   403,
     492,     3,   491,   136,   406,   281,   281,   281,   281,   197,
     281,    74,   210,   494,   281,   281,     3,   156,     3,     4,
     245,     3,   411,   411,   586,   403,   404,     9,   411,   411,
     411,   275,   411,   448,   403,   404,    36,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   411,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    36,    51,   471,   136,   159,
     406,   406,   403,   471,   404,     3,   404,   450,   472,   240,
     406,    76,   153,   177,   190,   215,   238,   479,   481,    51,
     477,   477,    53,    53,    44,     3,   108,   258,   516,    71,
      84,     3,    84,    71,   217,     3,    71,    84,    71,   217,
       3,    84,     3,    71,    84,    71,   277,   245,    18,   184,
     376,   377,   378,   379,   604,   405,   406,     3,     3,    61,
      62,    64,    66,    67,    82,   114,   115,   116,   117,   123,
     132,   152,   160,   175,   182,   185,   188,   189,   205,   239,
     240,   243,   244,   249,   251,   256,   257,   262,   264,   270,
     272,   273,   278,   580,   197,     3,    16,   150,   195,   588,
     589,   590,     3,   197,   281,     3,   588,   107,   157,   258,
     600,     3,   197,     3,   156,   281,   603,   277,   507,   281,
       3,     3,   548,   136,   245,   549,    28,   274,   451,   266,
     472,     3,     3,     3,     3,     3,     3,     3,     3,     3,
      74,   281,   240,   404,   538,     3,   240,   538,     3,   411,
     416,   420,   411,   411,   448,   124,   125,   275,     3,     3,
     407,   418,   425,   411,    65,   178,   254,   411,   446,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   405,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   405,   411,   411,   411,   405,   411,
     411,   411,   411,   411,   411,    28,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   405,   405,   405,
     405,   405,   411,   411,   405,   405,   405,   411,   411,     5,
     405,   405,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   405,   411,   411,   411,   405,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   405,
     411,   411,   411,   411,   411,     6,    18,   193,   319,   404,
      13,    14,    16,    19,   411,    40,    47,   232,   404,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,     3,   472,     3,   470,     3,
     504,     3,   133,   154,   267,   485,   476,   471,   411,   405,
     405,     3,   556,   473,   177,   215,   482,   474,   163,   196,
     480,     3,     3,     5,   514,    42,    42,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,   580,     3,   245,
       3,     3,     3,     5,     3,   379,     5,     5,   277,     5,
      63,     5,   597,   404,   404,   404,   576,   576,   576,   576,
     576,   576,   404,   576,   576,   576,    64,   577,   577,   576,
     576,   576,   404,   577,   576,   577,   404,   404,   404,    18,
      36,    78,   113,     3,   580,     3,     3,     3,   405,   406,
     266,   404,     3,     3,   197,   405,   197,    51,   519,     3,
     197,   281,     3,   404,     3,   154,   216,   351,   403,   404,
     582,   583,   405,   406,     4,   236,   237,   550,   411,   198,
     461,   472,   451,   492,   494,     3,     3,   543,     3,   539,
     271,   450,   543,   271,   450,   406,   405,   253,   124,   125,
     411,   411,   405,   411,   417,   450,   136,   406,   405,   136,
     411,   406,   406,   406,   405,   405,   405,   405,   405,   405,
     406,   406,   406,   406,   405,   406,   406,   406,   405,   405,
     405,   405,   406,   406,   405,   406,   405,   405,   405,    51,
     406,   406,   406,   406,   321,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   406,   406,   406,   405,   406,
     350,   350,   350,   405,   406,   405,   406,   405,   350,   350,
     406,   405,   405,   405,   405,   405,   405,   405,   405,   406,
     406,   406,   406,   406,   406,   406,   406,   405,   406,   405,
     405,   405,   406,   405,   406,   405,   406,   406,   406,   406,
     406,   405,   405,   405,   406,   406,   406,     6,   193,   421,
     423,   411,   411,   404,   411,    50,   404,   404,   404,   412,
     407,   451,   136,   406,   471,   164,   164,   164,   450,   485,
     405,    20,   403,   406,   451,   480,   480,   163,   197,   474,
     163,    45,    46,   516,   197,   197,    78,   134,   201,   261,
     580,   580,     3,   222,   222,   575,   580,     3,   245,   245,
       5,     5,   588,   588,     5,   578,   579,   578,   578,     4,
     581,   578,   578,   578,   579,   579,   578,   578,   578,   581,
     579,   578,   579,     5,     5,     5,   193,   407,   404,   411,
     404,   580,   580,   580,   213,   590,   268,   391,     3,   327,
     328,   329,   330,   500,   501,   266,   404,   197,     3,    51,
      60,     3,   223,   224,   140,   520,   266,   404,     3,     3,
     197,   397,   507,    94,     3,    71,    78,   134,   138,   155,
     164,   201,   261,   567,   568,   574,   477,     3,    87,    99,
     135,   143,   193,   242,   277,   404,   551,   552,   553,    63,
     179,   464,   451,    20,   199,   406,   529,   405,   406,   404,
     540,   529,   540,   529,   416,   411,   411,   124,   253,    91,
     406,   407,   405,   411,   411,   411,   136,   161,   447,   447,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   580,   580,   411,   411,   411,     4,   350,   350,   350,
     350,   350,   350,   411,   411,   411,   411,   404,   404,   404,
     350,     5,   350,     5,   350,   404,   404,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   416,   450,   422,
     424,    50,   411,   415,   411,   413,   419,   414,   419,   450,
     141,   452,   472,     3,   485,   140,   486,   486,   486,   405,
     477,   411,     3,     3,   461,   474,   411,   197,   266,   483,
     484,   474,     3,   517,   517,   404,   164,   164,   404,   575,
     575,   580,    18,    39,    48,    51,    53,    56,    71,    78,
      79,   113,   130,   164,   193,   201,   261,   527,   575,     3,
       3,   405,   405,   405,   406,   259,   280,    82,    83,   405,
     406,   405,   405,   405,   405,    78,   411,   500,    62,    66,
     114,   117,   132,   152,   160,   249,   251,   270,   591,   404,
     404,   404,   404,   404,   404,   405,   406,   268,   500,     3,
     266,   404,    60,   592,   140,    40,   107,   157,   241,   258,
     245,   521,   268,   500,   266,   404,   197,     3,    20,     3,
     404,   582,     3,   404,   164,   155,   164,   404,   404,   164,
     404,   405,   406,     3,   450,     4,    87,   249,     6,     4,
       4,   404,   552,   406,     3,     5,   462,   463,   411,   212,
     606,   113,   411,   164,     3,     3,   113,   411,   542,   406,
     529,   529,   124,   411,   404,   417,   140,   405,   405,   406,
     405,   411,   411,   405,   405,   405,   405,   405,   406,   406,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     406,   405,   404,   404,   404,   404,   404,   404,   405,   406,
     406,   405,   405,   426,   427,   428,   404,   405,   406,   404,
     405,   406,   404,   444,   445,   405,   406,   406,   406,   405,
     405,   406,   406,   405,   406,   405,   406,   405,   406,   405,
     405,   405,   405,   405,   405,   406,   406,   406,   405,   405,
     416,   450,   411,   450,   450,   405,   450,   405,   405,    63,
     148,   456,   451,   163,   404,   404,   404,     3,    20,    20,
     403,   464,   411,   404,   484,   406,   277,   411,   404,   404,
       3,   573,   527,   527,   575,   193,     3,   404,   404,   404,
      52,     3,   404,     4,     4,     5,     6,     7,    72,   333,
     334,   335,   404,   164,   164,   527,   213,    51,    60,     5,
     240,     4,   579,     4,   579,   579,   404,   405,   405,    51,
      60,   500,     3,     3,     3,     3,     3,     3,   404,   405,
     404,   268,   391,   500,   592,     3,     4,     5,     6,     7,
       8,    10,    12,    16,    17,    18,    20,    26,    27,    28,
      29,    30,    40,    50,    51,    54,    59,    60,    61,    62,
      63,    66,    68,    69,    70,    73,    74,    76,    77,    78,
      82,    96,   101,   106,   107,   108,   113,   114,   116,   117,
     118,   119,   122,   124,   125,   126,   127,   129,   131,   132,
     134,   136,   137,   139,   140,   141,   142,   148,   150,   152,
     153,   155,   156,   157,   158,   159,   160,   162,   163,   164,
     165,   166,   177,   179,   181,   190,   192,   193,   194,   195,
     196,   197,   198,   201,   202,   207,   209,   210,   211,   213,
     215,   217,   218,   219,   220,   239,   240,   241,   249,   251,
     252,   253,   258,   260,   261,   262,   266,   270,   271,   274,
     275,   276,   277,   281,   322,   323,   324,   325,   326,   402,
     403,   404,   405,   406,   408,   593,   118,     3,   522,   266,
     523,   404,   405,   268,   500,     3,   266,   404,     4,   140,
     567,    78,   134,   201,   261,   411,   404,   404,   404,     3,
     467,   467,   404,   573,   563,   582,   568,   580,   552,   405,
     553,    49,   112,   403,   454,   454,   406,   181,   406,     3,
      28,   607,   258,    20,   405,   406,   541,   197,   531,     4,
     411,   411,   405,   104,   105,   109,   111,   144,   145,   147,
     278,   279,   411,   411,   411,   430,   431,   429,   432,   433,
     434,   411,   411,   351,   457,   457,   457,   435,   350,     4,
       5,   439,   350,     4,     5,   443,   457,   457,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   405,
     405,   405,   405,   405,   411,   453,   411,   461,   452,     3,
     487,   487,   487,   404,   411,   411,     3,   606,   467,     3,
       5,   405,     3,   570,     3,   569,   405,   406,   527,     5,
     411,     5,    51,    78,   201,   261,   411,   404,   404,   404,
     411,   591,    60,   592,   405,     4,   411,    60,   592,   405,
       3,   496,   405,   405,   405,   406,   500,   500,   404,   404,
     405,   124,   592,   592,   592,   592,   592,   592,   217,   406,
     404,   277,   524,   500,   404,   405,   404,   268,   500,   405,
     271,   405,   404,   164,   164,   404,   405,   570,   467,   467,
     405,   406,   405,   569,   405,    48,   172,   197,   228,   351,
     562,   575,   405,     3,   463,   411,   411,   406,   530,   113,
     411,   113,   411,   404,    88,   606,   405,   405,   405,   405,
     405,   405,   457,   457,   457,   457,   457,   457,   405,   406,
     405,    63,   198,   459,   459,   459,   457,   404,   405,   405,
     457,   404,   405,   405,   457,   459,   459,   405,   405,   405,
     405,   405,   406,   405,   405,   406,   406,   406,   454,   277,
     406,   455,   464,   456,   405,   406,   405,   405,     3,    20,
     405,    43,    18,   405,   406,   405,   406,     3,   405,   406,
     405,   405,   406,   404,   404,   164,   405,   405,   405,   405,
     405,    51,    60,   592,   124,   405,   592,   124,   405,     3,
     405,   405,   500,     3,   124,   124,   124,   124,   124,   124,
      60,     3,   411,    78,   405,   500,   500,   404,   405,   136,
     563,   582,   411,   404,   404,   573,   405,   405,   405,     3,
     405,     5,    20,   404,     3,    63,    63,   454,     3,     3,
     535,   542,   404,   532,   459,   459,   459,   459,   459,   459,
     411,     3,   458,    63,   405,   405,   405,   459,   436,   350,
     350,   459,   440,   350,   350,   459,   405,   405,   411,     5,
       5,     5,   214,   411,   140,   465,   461,     3,   405,   411,
     269,   207,     3,     3,     5,    57,    58,     5,   411,   411,
      60,   592,   124,   124,   277,   497,   405,   405,   496,    77,
     131,   156,   166,   276,   592,   405,   404,   405,   405,   500,
     404,   405,   570,   569,   405,   207,     5,     3,   107,   248,
     204,   268,   204,    20,   406,   405,     3,   101,   533,   405,
     405,   405,   405,   405,   405,   405,   406,     3,   460,   405,
     457,   404,   404,   405,   457,   404,   404,   405,   405,   405,
     406,   406,   454,   230,   258,   159,   466,   464,     3,   405,
     405,   405,   405,   592,   124,   404,   405,   124,   411,   405,
       5,   405,   405,     3,   405,     3,     3,   404,   404,   404,
     411,     3,   405,   406,    90,   258,     3,   454,   406,   459,
     437,   438,   459,   441,   442,     4,     4,   231,   231,   467,
     404,    57,    58,   124,     3,   498,   499,   497,   405,   405,
     207,   403,   404,     3,     3,     3,    20,     3,   534,     3,
     405,   457,   457,   405,   457,   457,   405,   405,   180,   180,
       3,   571,    20,   405,   406,   245,     3,     3,   571,   405,
     405,   405,   411,   240,   454,   459,   459,   459,   459,   405,
     406,     5,   499,   404,   403,   404,   404,   405,   404,   229,
     535,   405,   405,   405,   405,   572,     3,     5,     3,   571,
     571,   572,   228,   564,   565,     5,    18,    97,   183,   197,
     405,   404,   405,   405,    18,     3,   405,   406,    97,   269,
     151,   137,   200,   235,   107,   258,   571,   572,   572,   271,
     565,    98,   149,    74,   192,   210,   240,    74,   192,   210,
     240,   405,   174,   113,   193,   113,   193,   572,   250,     4,
     184,   197,   197,   191,   191,     5,     5
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
#line 496 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 502 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 503 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 505 "parser/evoparser.y"
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
#line 518 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 520 "parser/evoparser.y"
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
#line 548 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 556 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 564 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 570 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 577 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 578 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 579 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 580 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 581 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 582 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 583 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 584 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 585 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 586 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 587 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 588 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 589 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 590 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 591 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 592 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 593 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 594 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 595 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 597 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 602 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 603 "parser/evoparser.y"
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
#line 611 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 612 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 613 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 614 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 615 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 616 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 621 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 623 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 626 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 627 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 628 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 629 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 630 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 633 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 634 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 638 "parser/evoparser.y"
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
#line 647 "parser/evoparser.y"
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
#line 665 "parser/evoparser.y"
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
#line 674 "parser/evoparser.y"
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
#line 693 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 694 "parser/evoparser.y"
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
#line 754 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 763 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 769 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 774 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 776 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 778 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 783 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 788 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 796 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 66:
#line 798 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 67:
#line 800 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 68:
#line 802 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 69:
#line 804 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 70:
#line 806 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 71:
#line 808 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 72:
#line 810 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 73:
#line 812 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 74:
#line 814 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 75:
#line 821 "parser/evoparser.y"
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
#line 832 "parser/evoparser.y"
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
#line 842 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 79:
#line 846 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 80:
#line 846 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 81:
#line 847 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 82:
#line 847 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 83:
#line 848 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 84:
#line 849 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 85:
#line 856 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 86:
#line 857 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 87:
#line 864 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 88:
#line 865 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 89:
#line 875 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 90:
#line 879 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 91:
#line 880 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 92:
#line 881 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 882 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 883 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 884 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 885 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 97:
#line 886 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 890 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 99:
#line 891 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 100:
#line 892 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 101:
#line 893 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 102:
#line 894 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 103:
#line 895 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 104:
#line 897 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 898 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 106:
#line 899 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 107:
#line 900 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 108:
#line 901 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 109:
#line 902 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 110:
#line 903 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 111:
#line 904 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 112:
#line 905 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 906 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 114:
#line 907 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 115:
#line 908 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 116:
#line 910 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 117:
#line 911 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 118:
#line 912 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 119:
#line 913 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 120:
#line 914 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 121:
#line 915 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 122:
#line 916 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 123:
#line 917 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 124:
#line 918 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 125:
#line 919 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 126:
#line 920 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 127:
#line 921 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 128:
#line 922 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 129:
#line 923 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 130:
#line 924 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 131:
#line 925 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 132:
#line 927 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 133:
#line 928 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 134:
#line 929 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 135:
#line 930 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 136:
#line 931 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 137:
#line 932 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 138:
#line 935 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 139:
#line 936 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 140:
#line 937 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 938 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 142:
#line 939 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 143:
#line 940 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 144:
#line 941 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 145:
#line 942 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 146:
#line 943 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 944 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 945 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 149:
#line 946 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 150:
#line 947 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 151:
#line 948 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 152:
#line 949 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 153:
#line 950 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 154:
#line 951 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 155:
#line 952 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 156:
#line 953 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 157:
#line 954 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 158:
#line 955 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 159:
#line 956 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 160:
#line 957 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 161:
#line 958 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 162:
#line 959 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 163:
#line 960 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 961 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 165:
#line 962 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 166:
#line 963 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 167:
#line 964 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 168:
#line 965 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 169:
#line 966 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 170:
#line 967 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 171:
#line 968 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 172:
#line 970 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 173:
#line 971 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 174:
#line 972 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 175:
#line 973 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 176:
#line 974 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 177:
#line 975 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 178:
#line 976 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 179:
#line 977 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 180:
#line 979 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 181:
#line 980 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 182:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 183:
#line 982 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 184:
#line 983 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 185:
#line 984 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 186:
#line 985 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 187:
#line 986 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 188:
#line 987 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 189:
#line 988 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 190:
#line 989 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 191:
#line 990 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 192:
#line 991 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 193:
#line 992 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 194:
#line 993 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 195:
#line 994 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 196:
#line 995 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 197:
#line 996 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 198:
#line 997 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 199:
#line 998 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 999 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 1000 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 202:
#line 1002 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 203:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 204:
#line 1004 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 205:
#line 1005 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1006 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 207:
#line 1008 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 208:
#line 1009 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1011 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 210:
#line 1012 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 211:
#line 1013 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 212:
#line 1015 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 213:
#line 1016 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 214:
#line 1017 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 215:
#line 1018 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 216:
#line 1025 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1032 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 218:
#line 1039 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 219:
#line 1043 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1047 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1051 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1055 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 223:
#line 1059 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 224:
#line 1065 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 225:
#line 1066 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 226:
#line 1067 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 227:
#line 1071 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 228:
#line 1077 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 229:
#line 1083 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 230:
#line 1084 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 231:
#line 1085 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1086 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1087 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1088 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 235:
#line 1089 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 236:
#line 1090 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1091 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1095 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 239:
#line 1097 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 240:
#line 1099 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 241:
#line 1101 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 242:
#line 1105 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 243:
#line 1113 "parser/evoparser.y"
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
#line 1123 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 245:
#line 1124 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 246:
#line 1127 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 247:
#line 1128 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 248:
#line 1132 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 249:
#line 1140 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1148 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1156 "parser/evoparser.y"
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
#line 1170 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 253:
#line 1179 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 254:
#line 1184 "parser/evoparser.y"
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
#line 1197 "parser/evoparser.y"
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
#line 1210 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1212 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 260:
#line 1215 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 261:
#line 1222 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 262:
#line 1230 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 263:
#line 1231 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1232 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 265:
#line 1235 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1236 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1240 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 271:
#line 1249 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 272:
#line 1251 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 275:
#line 1259 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 276:
#line 1261 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 281:
#line 1273 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 282:
#line 1279 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 283:
#line 1286 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 284:
#line 1294 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 285:
#line 1295 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 286:
#line 1296 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 287:
#line 1297 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1300 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 289:
#line 1301 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 290:
#line 1302 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 291:
#line 1303 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 292:
#line 1304 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 294:
#line 1308 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 295:
#line 1311 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 296:
#line 1312 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 297:
#line 1315 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 298:
#line 1316 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 299:
#line 1317 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 300:
#line 1318 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 301:
#line 1319 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 302:
#line 1320 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 303:
#line 1321 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 304:
#line 1322 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 305:
#line 1323 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 306:
#line 1326 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 307:
#line 1327 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 308:
#line 1329 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 309:
#line 1337 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 310:
#line 1342 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 311:
#line 1343 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 312:
#line 1344 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 313:
#line 1347 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 314:
#line 1348 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 317:
#line 1357 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 318:
#line 1365 "parser/evoparser.y"
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
#line 1374 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 320:
#line 1375 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 321:
#line 1377 "parser/evoparser.y"
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
#line 1386 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 323:
#line 1391 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 324:
#line 1397 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 325:
#line 1404 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 326:
#line 1408 "parser/evoparser.y"
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
#line 1428 "parser/evoparser.y"
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
#line 1454 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 331:
#line 1456 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 332:
#line 1458 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 333:
#line 1460 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 334:
#line 1462 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 335:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 336:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 337:
#line 1467 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 338:
#line 1470 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1471 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 340:
#line 1474 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 341:
#line 1475 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 342:
#line 1478 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 343:
#line 1479 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 344:
#line 1480 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 347:
#line 1487 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 348:
#line 1488 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 349:
#line 1493 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 350:
#line 1495 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 351:
#line 1497 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1501 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1502 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 355:
#line 1505 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 356:
#line 1506 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 357:
#line 1509 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 358:
#line 1514 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 359:
#line 1524 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 360:
#line 1531 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 361:
#line 1532 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 362:
#line 1533 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 363:
#line 1534 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 364:
#line 1539 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 365:
#line 1543 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 366:
#line 1545 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 369:
#line 1551 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1556 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 371:
#line 1563 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 372:
#line 1570 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 374:
#line 1582 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 375:
#line 1583 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 376:
#line 1588 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 377:
#line 1595 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 378:
#line 1602 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 379:
#line 1610 "parser/evoparser.y"
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
#line 1620 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 381:
#line 1628 "parser/evoparser.y"
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
#line 1638 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 383:
#line 1646 "parser/evoparser.y"
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
#line 1655 "parser/evoparser.y"
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
#line 1664 "parser/evoparser.y"
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
#line 1674 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 387:
#line 1682 "parser/evoparser.y"
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
#line 1691 "parser/evoparser.y"
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
#line 1700 "parser/evoparser.y"
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
#line 1710 "parser/evoparser.y"
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
#line 1719 "parser/evoparser.y"
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
#line 1736 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 393:
#line 1744 "parser/evoparser.y"
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
#line 1755 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 395:
#line 1757 "parser/evoparser.y"
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
#line 1770 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 397:
#line 1771 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 398:
#line 1774 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 399:
#line 1776 "parser/evoparser.y"
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
#line 1788 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 401:
#line 1798 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 402:
#line 1803 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 403:
#line 1808 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 404:
#line 1814 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 405:
#line 1821 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 406:
#line 1828 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 407:
#line 1835 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 408:
#line 1845 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 409:
#line 1852 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1861 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 411:
#line 1868 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 412:
#line 1874 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 413:
#line 1882 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 414:
#line 1888 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 416:
#line 1896 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 417:
#line 1897 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 418:
#line 1898 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 419:
#line 1899 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 420:
#line 1915 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 421:
#line 1916 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 422:
#line 1917 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 423:
#line 1926 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1927 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1932 "parser/evoparser.y"
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
#line 1942 "parser/evoparser.y"
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
#line 1957 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 428:
#line 1958 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 429:
#line 1963 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 430:
#line 1971 "parser/evoparser.y"
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
#line 1980 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 432:
#line 1990 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 433:
#line 1996 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 434:
#line 2007 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 435:
#line 2013 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 436:
#line 2020 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 437:
#line 2026 "parser/evoparser.y"
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

  case 438:
#line 2042 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 439:
#line 2049 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 440:
#line 2058 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 441:
#line 2066 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 442:
#line 2072 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 444:
#line 2089 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 445:
#line 2093 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 446:
#line 2102 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 448:
#line 2117 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 449:
#line 2121 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 450:
#line 2126 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 451:
#line 2133 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 452:
#line 2138 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 453:
#line 2145 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 454:
#line 2149 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 455:
#line 2150 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 456:
#line 2156 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 457:
#line 2165 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 458:
#line 2166 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 459:
#line 2167 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 460:
#line 2171 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 461:
#line 2172 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 462:
#line 2173 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 463:
#line 2174 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 464:
#line 2175 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 465:
#line 2176 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 468:
#line 2185 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 469:
#line 2186 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 2191 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 473:
#line 2196 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 474:
#line 2201 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 475:
#line 2210 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 476:
#line 2216 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 477:
#line 2222 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 478:
#line 2229 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 479:
#line 2235 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 480:
#line 2242 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 481:
#line 2248 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 482:
#line 2254 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 483:
#line 2260 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 484:
#line 2266 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 485:
#line 2272 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 486:
#line 2278 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 487:
#line 2284 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 488:
#line 2290 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 489:
#line 2296 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 490:
#line 2302 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 491:
#line 2308 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 492:
#line 2314 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 493:
#line 2320 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 494:
#line 2326 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 495:
#line 2332 "parser/evoparser.y"
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

  case 496:
#line 2345 "parser/evoparser.y"
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

  case 497:
#line 2356 "parser/evoparser.y"
    { ;}
    break;

  case 498:
#line 2357 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 499:
#line 2358 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 500:
#line 2362 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 501:
#line 2370 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 502:
#line 2376 "parser/evoparser.y"
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

  case 504:
#line 2389 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 505:
#line 2389 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 508:
#line 2397 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 509:
#line 2398 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 510:
#line 2399 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 511:
#line 2403 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 512:
#line 2404 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 513:
#line 2405 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 514:
#line 2409 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 515:
#line 2417 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 516:
#line 2426 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 517:
#line 2427 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 518:
#line 2428 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 519:
#line 2429 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 520:
#line 2430 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 524:
#line 2437 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 525:
#line 2441 "parser/evoparser.y"
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

  case 526:
#line 2451 "parser/evoparser.y"
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

  case 527:
#line 2463 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 528:
#line 2464 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 529:
#line 2464 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 530:
#line 2467 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 531:
#line 2468 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 532:
#line 2469 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 533:
#line 2470 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 534:
#line 2474 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 535:
#line 2477 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 536:
#line 2478 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 537:
#line 2479 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 538:
#line 2480 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 539:
#line 2486 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 540:
#line 2492 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 541:
#line 2497 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 542:
#line 2502 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 543:
#line 2506 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 544:
#line 2510 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 545:
#line 2512 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 548:
#line 2518 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 549:
#line 2519 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 550:
#line 2523 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 551:
#line 2524 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 552:
#line 2528 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 553:
#line 2529 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 554:
#line 2530 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 561:
#line 2545 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 562:
#line 2546 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 563:
#line 2547 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 564:
#line 2548 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 565:
#line 2549 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 566:
#line 2550 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 567:
#line 2551 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 568:
#line 2552 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 569:
#line 2557 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 570:
#line 2566 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 571:
#line 2573 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 572:
#line 2574 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 573:
#line 2575 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 574:
#line 2580 "parser/evoparser.y"
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

  case 575:
#line 2591 "parser/evoparser.y"
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

  case 576:
#line 2603 "parser/evoparser.y"
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

  case 577:
#line 2614 "parser/evoparser.y"
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

  case 578:
#line 2629 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 579:
#line 2633 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 580:
#line 2637 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 581:
#line 2638 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 582:
#line 2643 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 583:
#line 2645 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 584:
#line 2647 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 585:
#line 2649 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 586:
#line 2652 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 587:
#line 2653 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 588:
#line 2659 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 589:
#line 2664 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 590:
#line 2666 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 591:
#line 2668 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 592:
#line 2670 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 593:
#line 2672 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 594:
#line 2676 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 595:
#line 2680 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 596:
#line 2681 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 597:
#line 2686 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 598:
#line 2696 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 600:
#line 2709 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 601:
#line 2717 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 602:
#line 2725 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 604:
#line 2733 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 605:
#line 2734 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 606:
#line 2735 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 607:
#line 2736 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 608:
#line 2738 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 609:
#line 2740 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 610:
#line 2742 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 613:
#line 2750 "parser/evoparser.y"
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

  case 614:
#line 2765 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 615:
#line 2773 "parser/evoparser.y"
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

  case 616:
#line 2787 "parser/evoparser.y"
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

  case 617:
#line 2801 "parser/evoparser.y"
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

  case 618:
#line 2815 "parser/evoparser.y"
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

  case 619:
#line 2827 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 620:
#line 2828 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 621:
#line 2829 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 622:
#line 2832 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 623:
#line 2833 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 624:
#line 2836 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 625:
#line 2837 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 626:
#line 2838 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 627:
#line 2839 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 628:
#line 2840 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 629:
#line 2841 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 630:
#line 2842 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 631:
#line 2843 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 632:
#line 2845 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 633:
#line 2847 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 634:
#line 2849 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 635:
#line 2851 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 636:
#line 2853 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 637:
#line 2855 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 638:
#line 2858 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 639:
#line 2859 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 640:
#line 2862 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 641:
#line 2863 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 642:
#line 2866 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 643:
#line 2867 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 645:
#line 2871 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 646:
#line 2872 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 647:
#line 2873 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 648:
#line 2874 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 649:
#line 2875 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 650:
#line 2876 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 651:
#line 2877 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 652:
#line 2878 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 653:
#line 2879 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 654:
#line 2880 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 655:
#line 2881 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 656:
#line 2882 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 657:
#line 2883 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 658:
#line 2884 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 659:
#line 2885 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 660:
#line 2886 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 661:
#line 2887 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 662:
#line 2890 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 663:
#line 2891 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 664:
#line 2894 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 665:
#line 2896 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 666:
#line 2904 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 667:
#line 2905 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 669:
#line 2907 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 670:
#line 2908 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 671:
#line 2909 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 672:
#line 2910 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 673:
#line 2911 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 674:
#line 2912 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 675:
#line 2913 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 676:
#line 2914 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 677:
#line 2915 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 678:
#line 2922 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 679:
#line 2923 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 680:
#line 2924 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 681:
#line 2925 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 682:
#line 2926 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 683:
#line 2927 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 684:
#line 2928 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 685:
#line 2929 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 686:
#line 2930 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 687:
#line 2931 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 688:
#line 2932 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 689:
#line 2933 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 690:
#line 2934 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 691:
#line 2935 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 692:
#line 2936 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 693:
#line 2937 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 694:
#line 2938 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 695:
#line 2939 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 696:
#line 2940 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 697:
#line 2941 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 698:
#line 2942 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 699:
#line 2945 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 700:
#line 2946 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 701:
#line 2947 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 702:
#line 2950 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 703:
#line 2951 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 704:
#line 2954 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 705:
#line 2955 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 706:
#line 2956 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 708:
#line 2960 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 709:
#line 2961 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 710:
#line 2965 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 711:
#line 2966 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 712:
#line 2967 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 713:
#line 2968 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 714:
#line 2969 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 715:
#line 2970 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 716:
#line 2971 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 717:
#line 2972 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 718:
#line 2973 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 719:
#line 2974 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 720:
#line 2975 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 721:
#line 2976 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 722:
#line 2977 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 723:
#line 2978 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 724:
#line 2979 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 725:
#line 2980 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 726:
#line 2981 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 727:
#line 2982 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 728:
#line 2983 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 729:
#line 2984 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 730:
#line 2985 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 731:
#line 2986 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 732:
#line 2987 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 733:
#line 2988 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 734:
#line 2989 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 735:
#line 2990 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 736:
#line 2991 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 737:
#line 2992 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 738:
#line 2993 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 739:
#line 2994 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 740:
#line 2995 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 741:
#line 2996 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 742:
#line 2997 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 743:
#line 2998 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 744:
#line 2999 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 745:
#line 3002 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 746:
#line 3003 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 747:
#line 3007 "parser/evoparser.y"
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

  case 748:
#line 3019 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 749:
#line 3020 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 750:
#line 3021 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 751:
#line 3025 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 752:
#line 3028 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 753:
#line 3029 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 757:
#line 3033 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 758:
#line 3034 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 759:
#line 3042 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 760:
#line 3047 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 761:
#line 3053 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 762:
#line 3059 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 763:
#line 3066 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 764:
#line 3073 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 765:
#line 3079 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 766:
#line 3085 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 767:
#line 3092 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 772:
#line 3108 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 773:
#line 3109 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 774:
#line 3110 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 775:
#line 3111 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 776:
#line 3114 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 777:
#line 3115 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 778:
#line 3116 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 779:
#line 3117 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 780:
#line 3118 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 781:
#line 3119 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 782:
#line 3120 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 783:
#line 3121 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 784:
#line 3122 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 785:
#line 3123 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 794:
#line 3140 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 795:
#line 3141 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 916:
#line 3159 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 917:
#line 3166 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 918:
#line 3171 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 919:
#line 3177 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 920:
#line 3183 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 921:
#line 3189 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 922:
#line 3200 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 923:
#line 3205 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 924:
#line 3211 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 927:
#line 3222 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 928:
#line 3223 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 929:
#line 3224 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 930:
#line 3225 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 931:
#line 3226 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 932:
#line 3227 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 933:
#line 3228 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 934:
#line 3235 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 935:
#line 3240 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 936:
#line 3247 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 937:
#line 3248 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 938:
#line 3251 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 939:
#line 3252 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 940:
#line 3253 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 941:
#line 3256 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 942:
#line 3261 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 943:
#line 3267 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 944:
#line 3276 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 945:
#line 3284 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 946:
#line 3294 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 947:
#line 3299 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 950:
#line 3312 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 951:
#line 3313 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 952:
#line 3314 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 953:
#line 3315 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 954:
#line 3316 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 955:
#line 3317 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 956:
#line 3318 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 957:
#line 3319 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 958:
#line 3322 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 959:
#line 3327 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 960:
#line 3333 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 961:
#line 3343 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 962:
#line 3350 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 963:
#line 3357 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 964:
#line 3365 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 966:
#line 3375 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 968:
#line 3379 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 969:
#line 3380 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 11726 "parser/evoparser.tab.c"
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


#line 3383 "parser/evoparser.y"

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
