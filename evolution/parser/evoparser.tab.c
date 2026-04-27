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
     AT = 648,
     MEMORY = 649,
     EMBEDDING_DIM = 650,
     DISTANCE = 651,
     SEARCH = 652,
     NAMESPACE = 653,
     NAMESPACES = 654,
     PREFIX = 655,
     NS = 656
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
#define MEMORY 649
#define EMBEDDING_DIM 650
#define DISTANCE 651
#define SEARCH 652
#define NAMESPACE 653
#define NAMESPACES 654
#define PREFIX 655
#define NS 656




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
	#include "../db/Memory.h"

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
#line 72 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 971 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 984 "parser/evoparser.tab.c"

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
#define YYFINAL  129
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14041

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  419
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  215
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1013
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2596

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   656

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    30,    24,     2,
     414,   415,    28,    26,   416,    27,   413,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   412,
       2,   418,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,   417,    32,     2,     2,     2,     2,     2,
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
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411
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
    2169,  2178,  2185,  2194,  2196,  2198,  2200,  2202,  2204,  2206,
    2208,  2215,  2224,  2225,  2226,  2231,  2233,  2237,  2241,  2245,
    2250,  2256,  2263,  2276,  2291,  2293,  2295,  2308,  2315,  2324,
    2337,  2343,  2351,  2354,  2358,  2361,  2364,  2367,  2372,  2374,
    2378,  2380,  2385,  2392,  2393,  2398,  2403,  2406,  2407,  2412,
    2420,  2425,  2427,  2431,  2433,  2435,  2437,  2448,  2461,  2462,
    2465,  2468,  2469,  2472,  2475,  2478,  2481,  2484,  2485,  2488,
    2490,  2494,  2495,  2500,  2501,  2507,  2513,  2521,  2532,  2543,
    2561,  2574,  2594,  2606,  2613,  2622,  2629,  2636,  2643,  2653,
    2660,  2666,  2675,  2683,  2693,  2702,  2713,  2723,  2731,  2739,
    2748,  2757,  2758,  2760,  2763,  2765,  2776,  2783,  2784,  2785,
    2791,  2792,  2797,  2798,  2802,  2807,  2810,  2811,  2817,  2821,
    2827,  2828,  2831,  2834,  2837,  2840,  2842,  2843,  2844,  2848,
    2850,  2854,  2858,  2859,  2866,  2868,  2870,  2874,  2878,  2886,
    2890,  2894,  2900,  2906,  2908,  2917,  2925,  2933,  2935,  2936,
    2944,  2945,  2949,  2951,  2955,  2957,  2959,  2961,  2963,  2965,
    2966,  2968,  2973,  2977,  2979,  2983,  2986,  2989,  2992,  2994,
    2997,  3000,  3003,  3005,  3007,  3017,  3018,  3021,  3024,  3028,
    3034,  3040,  3048,  3054,  3056,  3061,  3066,  3070,  3076,  3080,
    3086,  3087,  3090,  3092,  3098,  3106,  3114,  3124,  3136,  3138,
    3141,  3145,  3147,  3158,  3159,  3164,  3176,  3195,  3196,  3201,
    3205,  3211,  3217,  3227,  3238,  3246,  3248,  3252,  3262,  3272,
    3282,  3289,  3301,  3310,  3311,  3313,  3316,  3318,  3322,  3328,
    3336,  3341,  3346,  3352,  3358,  3363,  3370,  3382,  3396,  3410,
    3426,  3431,  3438,  3440,  3444,  3446,  3450,  3452,  3456,  3457,
    3462,  3468,  3473,  3479,  3484,  3490,  3495,  3501,  3506,  3511,
    3515,  3519,  3523,  3526,  3530,  3535,  3540,  3542,  3546,  3547,
    3552,  3553,  3557,  3560,  3564,  3568,  3572,  3576,  3582,  3588,
    3594,  3598,  3604,  3607,  3615,  3621,  3629,  3635,  3638,  3642,
    3645,  3649,  3652,  3656,  3662,  3667,  3673,  3681,  3690,  3699,
    3707,  3714,  3721,  3727,  3728,  3732,  3738,  3739,  3741,  3742,
    3745,  3748,  3749,  3754,  3758,  3761,  3765,  3769,  3773,  3777,
    3781,  3785,  3789,  3793,  3797,  3801,  3803,  3805,  3807,  3809,
    3811,  3815,  3821,  3824,  3829,  3831,  3833,  3835,  3837,  3841,
    3845,  3849,  3853,  3859,  3865,  3867,  3869,  3871,  3876,  3880,
    3882,  3886,  3890,  3891,  3893,  3895,  3897,  3901,  3905,  3908,
    3910,  3914,  3918,  3922,  3924,  3935,  3945,  3958,  3970,  3983,
    3995,  4010,  4024,  4025,  4027,  4029,  4033,  4036,  4040,  4044,
    4048,  4050,  4052,  4054,  4056,  4058,  4060,  4062,  4064,  4066,
    4068,  4069,  4072,  4077,  4083,  4089,  4095,  4101,  4107,  4109,
    4111,  4113,  4115,  4117,  4119,  4121,  4123,  4125,  4127,  4129,
    4131,  4133,  4135,  4137,  4139,  4141,  4143,  4145,  4147,  4149,
    4151,  4153,  4155,  4157,  4159,  4161,  4163,  4165,  4167,  4169,
    4171,  4173,  4175,  4177,  4179,  4181,  4183,  4185,  4187,  4189,
    4191,  4193,  4195,  4197,  4199,  4201,  4203,  4205,  4207,  4209,
    4211,  4213,  4215,  4217,  4219,  4221,  4223,  4225,  4227,  4229,
    4231,  4233,  4235,  4237,  4239,  4241,  4243,  4245,  4247,  4249,
    4251,  4253,  4255,  4257,  4259,  4261,  4263,  4265,  4267,  4269,
    4271,  4273,  4275,  4277,  4279,  4281,  4283,  4285,  4287,  4289,
    4291,  4293,  4295,  4297,  4299,  4301,  4303,  4305,  4307,  4309,
    4311,  4313,  4315,  4317,  4319,  4321,  4323,  4325,  4327,  4329,
    4331,  4333,  4335,  4337,  4339,  4341,  4343,  4345,  4347,  4349,
    4351,  4353,  4355,  4359,  4365,  4369,  4375,  4377,  4382,  4388,
    4390,  4394,  4396,  4398,  4400,  4402,  4404,  4406,  4408,  4410,
    4424,  4426,  4428,  4430,  4432,  4434,  4436,  4440,  4446,  4451,
    4456,  4458,  4464,  4465,  4468,  4472,  4475,  4479,  4482,  4485,
    4488,  4490,  4493,  4495,  4499,  4505,  4510,  4515,  4522,  4529,
    4530,  4533,  4536,  4538
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     420,     0,    -1,   459,   412,    -1,   459,   412,   420,    -1,
       3,    -1,     3,   413,     3,    -1,    89,   413,     3,    -1,
     183,   414,     3,   415,    91,   414,     4,   415,    -1,     8,
      -1,     4,    -1,     5,    -1,     7,    -1,     6,    -1,   193,
      -1,   421,    26,   421,    -1,   421,    27,   421,    -1,   421,
      28,   421,    -1,   421,    29,   421,    -1,   421,    30,   421,
      -1,   421,    31,   421,    -1,    27,   421,    -1,   414,   421,
     415,    -1,   421,    12,   421,    -1,   421,    10,   421,    -1,
     421,    11,   421,    -1,   421,    23,   421,    -1,   421,    24,
     421,    -1,   421,    32,   421,    -1,   421,    25,   421,    -1,
     421,    34,   421,    -1,   421,    33,   421,    -1,    18,   421,
      -1,    17,   421,    -1,   421,    20,   421,    -1,    -1,   421,
      20,   414,   422,   460,   415,    -1,    -1,   421,    20,    47,
     414,   423,   460,   415,    -1,    -1,   421,    20,   232,   414,
     424,   460,   415,    -1,    -1,   421,    20,    40,   414,   425,
     460,   415,    -1,   421,    20,    47,   414,   429,   415,    -1,
     421,    20,   232,   414,   429,   415,    -1,   421,    15,   193,
      -1,   421,    15,    18,   193,    -1,   421,    15,     6,    -1,
     421,    15,    18,     6,    -1,     8,     9,   421,    -1,   421,
      19,   421,    50,   421,    -1,   421,    18,    19,   421,    50,
     421,    -1,   421,    -1,   421,   416,   426,    -1,   421,    -1,
     421,   416,   427,    -1,    -1,   263,    36,   428,   427,   417,
      -1,   263,    36,   417,    -1,   421,    36,   421,   417,    -1,
     421,    -1,   380,   414,   421,   415,    -1,   380,   414,   421,
     416,   421,   415,    -1,   381,   414,   421,   415,    -1,   382,
     414,   421,   416,   421,   415,    -1,   383,   414,   415,    -1,
     384,   414,   421,   416,   421,   415,    -1,   385,   414,   421,
     416,   421,   415,    -1,   386,   414,   421,   416,   421,   415,
      -1,   387,   414,   421,   416,   421,   415,    -1,   388,   414,
     421,   415,    -1,   389,   414,   421,   415,    -1,   390,   414,
     421,   415,    -1,   421,    22,   421,    -1,   421,    21,   421,
      -1,   392,   414,   421,   416,   421,   416,   421,   416,     5,
     415,    -1,   393,   414,   421,   416,   421,   416,   421,   416,
       5,   416,     4,   415,    -1,   394,   414,   421,   416,   421,
     416,   421,   416,     5,   416,     4,   415,    -1,    -1,   426,
      -1,    -1,   421,    16,   414,   431,   426,   415,    -1,    -1,
     421,    18,    16,   414,   432,   426,   415,    -1,    -1,   421,
      16,   414,   433,   460,   415,    -1,    -1,   421,    18,    16,
     414,   434,   460,   415,    -1,    -1,   281,   414,   435,   460,
     415,    -1,     3,   414,   430,   415,    -1,   322,   414,    28,
     415,    -1,   322,   414,   421,   415,    -1,   323,   414,   421,
     415,    -1,   324,   414,   421,   415,    -1,   325,   414,   421,
     415,    -1,   326,   414,   421,   415,    -1,   320,   414,   421,
     415,    -1,   320,   414,   421,   321,     4,   415,    -1,    -1,
     342,   414,   415,   350,   414,   436,   467,   469,   415,    -1,
      -1,   343,   414,   415,   350,   414,   437,   467,   469,   415,
      -1,    -1,   344,   414,   415,   350,   414,   438,   467,   469,
     415,    -1,    -1,   323,   414,   421,   415,   350,   414,   439,
     467,   469,   415,    -1,    -1,   322,   414,    28,   415,   350,
     414,   440,   467,   469,   415,    -1,    -1,   322,   414,   421,
     415,   350,   414,   441,   467,   469,   415,    -1,    -1,   324,
     414,   421,   415,   350,   414,   442,   467,   469,   415,    -1,
      -1,   325,   414,   421,   415,   350,   414,   443,   467,   469,
     415,    -1,    -1,   326,   414,   421,   415,   350,   414,   444,
     467,   469,   415,    -1,    -1,   345,   414,   421,   415,   350,
     414,   445,   467,   469,   415,    -1,    -1,   345,   414,   421,
     416,     5,   415,   350,   414,   446,   467,   469,   415,    -1,
      -1,   345,   414,   421,   416,     5,   416,     4,   415,   350,
     414,   447,   467,   469,   415,    -1,    -1,   345,   414,   421,
     416,     5,   416,     5,   415,   350,   414,   448,   467,   469,
     415,    -1,    -1,   346,   414,   421,   415,   350,   414,   449,
     467,   469,   415,    -1,    -1,   346,   414,   421,   416,     5,
     415,   350,   414,   450,   467,   469,   415,    -1,    -1,   346,
     414,   421,   416,     5,   416,     4,   415,   350,   414,   451,
     467,   469,   415,    -1,    -1,   346,   414,   421,   416,     5,
     416,     5,   415,   350,   414,   452,   467,   469,   415,    -1,
      -1,   347,   414,     5,   415,   350,   414,   453,   467,   469,
     415,    -1,    -1,   348,   414,   415,   350,   414,   454,   467,
     469,   415,    -1,    -1,   349,   414,   415,   350,   414,   455,
     467,   469,   415,    -1,   282,   414,   421,   416,   421,   416,
     421,   415,    -1,   282,   414,   421,   416,   421,   415,    -1,
     282,   414,   421,   136,   421,   415,    -1,   282,   414,   421,
     136,   421,   140,   421,   415,    -1,   283,   414,   421,   415,
      -1,   283,   414,   456,   421,   136,   421,   415,    -1,   283,
     414,   456,   136,   421,   415,    -1,   327,   414,   421,   415,
      -1,   328,   414,   421,   415,    -1,   329,   414,   421,   415,
      -1,   330,   414,   421,   416,   421,   415,    -1,   331,   414,
     421,   416,   421,   416,   421,   415,    -1,   332,   414,   421,
     416,   421,   415,    -1,   294,   414,   421,   416,   421,   415,
      -1,   295,   414,   421,   416,   421,   415,    -1,   296,   414,
     421,   416,   421,   416,   421,   415,    -1,   297,   414,   421,
     416,   421,   416,   421,   415,    -1,   298,   414,   421,   415,
      -1,   299,   414,   421,   416,   421,   415,    -1,   300,   414,
     421,   416,   421,   415,    -1,   301,   414,   421,   416,   421,
     415,    -1,   302,   414,   421,   415,    -1,   303,   414,   421,
     415,    -1,   304,   414,   421,   415,    -1,   305,   414,   421,
     416,   421,   415,    -1,   305,   414,   421,   415,    -1,   306,
     414,   421,   416,   421,   415,    -1,   307,   414,   421,   415,
      -1,   308,   414,   421,   416,   421,   415,    -1,   309,   414,
     415,    -1,   310,   414,   421,   415,    -1,   311,   414,   421,
     415,    -1,   312,   414,   421,   415,    -1,   313,   414,   415,
      -1,   293,   414,   415,    -1,   286,   414,   421,   416,   421,
     415,    -1,   287,   414,   421,   415,    -1,   288,   414,   421,
     415,    -1,   289,   414,   421,   415,    -1,   290,   414,   421,
     415,    -1,   291,   414,   421,   415,    -1,   292,   414,   421,
     415,    -1,   352,   414,   421,   416,   421,   415,    -1,   353,
     414,   421,   415,    -1,   354,   414,   421,   415,    -1,   355,
     414,   421,   415,    -1,   356,   414,   421,   415,    -1,   357,
     414,   421,   415,    -1,   358,   414,   421,   415,    -1,   359,
     414,   421,   415,    -1,   360,   414,   421,   415,    -1,   361,
     414,   421,   416,   421,   416,   421,   415,    -1,   362,   414,
     421,   416,   421,   416,   421,   415,    -1,   363,   414,   421,
     416,   421,   416,   421,   415,    -1,   364,   414,   421,   416,
     421,   415,    -1,   365,   414,   421,   416,   421,   415,    -1,
     366,   414,   421,   416,   421,   416,   421,   415,    -1,   367,
     414,   421,   416,   421,   416,   421,   415,    -1,   368,   414,
     421,   416,   421,   415,    -1,   368,   414,   421,   416,   421,
     416,   421,   416,   421,   415,    -1,   369,   414,   421,   415,
      -1,   369,   414,   421,   416,   421,   415,    -1,   369,   414,
     421,   416,   421,   416,   421,   415,    -1,   370,   414,   421,
     415,    -1,   372,   414,   421,   415,    -1,   373,   414,   421,
     415,    -1,   374,   414,   421,   416,   421,   415,    -1,   374,
     414,   421,   416,   421,   416,   421,   415,    -1,   375,   414,
     415,    -1,   314,   414,   421,    51,   606,   415,    -1,   315,
     414,   421,   416,   606,   415,    -1,   316,   414,   421,   416,
     421,   415,    -1,   317,   414,   421,   416,   421,   415,    -1,
     318,   414,   421,   416,   421,   416,   421,   415,    -1,   421,
      15,   319,    -1,   330,   414,   421,   416,   421,   416,   421,
     415,    -1,   330,   414,   421,   416,   421,   416,   421,   416,
     421,   415,    -1,   333,   414,   415,    -1,   334,   414,   415,
      -1,   335,   414,   415,    -1,   336,   414,   415,    -1,   337,
     414,   415,    -1,   338,    -1,   339,    -1,   340,   414,   421,
     415,    -1,   341,   414,   421,   416,   421,   415,    -1,   178,
      -1,   254,    -1,    65,    -1,   284,   414,   421,   416,   457,
     415,    -1,   285,   414,   421,   416,   457,   415,    -1,   161,
     421,   278,    -1,   161,   421,   104,    -1,   161,   421,   105,
      -1,   161,   421,   109,    -1,   161,   421,   111,    -1,   161,
     421,   279,    -1,   161,   421,   145,    -1,   161,   421,   144,
      -1,   161,   421,   147,    -1,    77,   421,   458,   124,    -1,
      77,   421,   458,   125,   421,   124,    -1,    77,   458,   124,
      -1,    77,   458,   125,   421,   124,    -1,   275,   421,   253,
     421,    -1,   458,   275,   421,   253,   421,    -1,   421,    14,
     421,    -1,   421,    18,    14,   421,    -1,   421,    13,   421,
      -1,   421,    18,    13,   421,    -1,    72,    -1,    80,    -1,
      81,    -1,   225,    -1,   460,    -1,   241,   478,   479,    -1,
     241,   478,   479,   136,   482,   461,   462,   466,   471,   474,
     475,   476,    -1,   241,   478,   479,   159,     3,   136,   482,
     461,   462,   466,   471,   474,    -1,    -1,   274,   421,    -1,
      -1,   141,    63,   463,   465,    -1,   421,   464,    -1,   463,
     416,   421,   464,    -1,    -1,    49,    -1,   112,    -1,    -1,
     277,   214,    -1,    -1,   148,   421,    -1,    -1,   351,    63,
     468,    -1,     3,    -1,   468,   416,     3,    -1,    -1,   198,
      63,   470,    -1,     3,   464,    -1,   470,   416,     3,   464,
      -1,    -1,   198,    63,   472,    -1,   473,    -1,   472,   416,
     473,    -1,     3,   464,    -1,     3,   413,     3,   464,    -1,
       5,   464,    -1,    -1,   179,   421,    -1,   179,   421,   416,
     421,    -1,   179,   421,   181,   421,    -1,    -1,   140,   258,
      -1,   140,   230,    -1,   140,   258,   231,   180,    -1,   140,
     230,   231,   180,    -1,    -1,   159,   477,    -1,     3,    -1,
     477,   416,     3,    -1,    -1,   478,    40,    -1,   478,   106,
      -1,   478,   110,    -1,   478,   146,    -1,   478,   238,    -1,
     478,   226,    -1,   478,   234,    -1,   478,   233,    -1,   480,
      -1,   479,   416,   480,    -1,    28,    -1,   421,   481,    -1,
      51,     3,    -1,     3,    -1,    -1,   483,    -1,   482,   416,
     483,    -1,   484,    -1,   488,    -1,     3,   481,   495,    -1,
     173,     3,   481,   495,    -1,     3,   413,     3,   481,   495,
      -1,   498,   487,     3,    -1,   485,   487,     3,    -1,   381,
     414,   421,   415,    -1,   381,   414,   421,   415,   487,     3,
      -1,   381,   414,   421,   415,   487,     3,   414,     3,   415,
      -1,   414,   482,   415,    -1,    -1,   167,   414,   486,   460,
     415,    -1,    51,    -1,    -1,   483,   489,   163,   484,   493,
      -1,   483,   238,   484,    -1,   483,   238,   484,   197,   421,
      -1,   483,   491,   490,   163,   484,   494,    -1,   483,   190,
     492,   163,   484,    -1,    -1,   153,    -1,    76,    -1,    -1,
     196,    -1,   177,    -1,   215,    -1,   177,   490,    -1,   215,
     490,    -1,    -1,    -1,   494,    -1,   197,   421,    -1,   266,
     414,   477,   415,    -1,   267,   164,   496,   414,   497,   415,
      -1,   154,   164,   496,   414,   497,   415,    -1,   133,   164,
     496,   414,   497,   415,    -1,    -1,   140,   163,    -1,    -1,
       3,    -1,   497,   416,     3,    -1,   414,   460,   415,    -1,
     499,    -1,   107,   500,   136,     3,   461,   471,   474,   632,
      -1,   500,   176,    -1,   500,   203,    -1,   500,   154,    -1,
      -1,   107,   500,   501,   136,   482,   461,    -1,     3,   502,
      -1,   501,   416,     3,   502,    -1,    -1,   413,    28,    -1,
     107,   500,   136,   501,   266,   482,   461,    -1,   503,    -1,
     108,   252,     3,   504,    -1,   108,   252,   156,   281,     3,
     504,    -1,    -1,    74,    -1,   210,    -1,   505,    -1,    73,
     155,     3,   197,     3,   414,   510,   415,    -1,    73,   138,
     155,     3,   197,     3,   414,   510,   415,    -1,    73,   155,
     156,   281,     3,   197,     3,   414,   510,   415,    -1,    73,
     261,   155,     3,   197,     3,   414,   510,   415,    -1,    73,
     261,   155,   156,   281,     3,   197,     3,   414,   510,   415,
      -1,    73,   155,     3,   197,     3,   266,   268,   414,   510,
     415,    -1,    73,   155,   156,   281,     3,   197,     3,   266,
     268,   414,   510,   415,    -1,    73,   261,   155,     3,   197,
       3,   266,   268,   414,   510,   415,    -1,    73,   261,   155,
     156,   281,     3,   197,     3,   266,   268,   414,   510,   415,
      -1,    73,   155,    85,     3,   197,     3,   414,   510,   415,
      -1,    73,   155,    85,   156,   281,     3,   197,     3,   414,
     510,   415,    -1,    73,   261,   155,    85,     3,   197,     3,
     414,   510,   415,    -1,    73,   261,   155,    85,   156,   281,
       3,   197,     3,   414,   510,   415,    -1,    73,   155,    85,
       3,   197,     3,   266,   268,   414,   510,   415,    -1,    73,
     261,   155,    85,     3,   197,     3,   266,   268,   414,   510,
     415,    -1,    73,   155,     3,   197,     3,   266,   391,   414,
       3,   506,   415,   507,    -1,    73,   155,   156,   281,     3,
     197,     3,   266,   391,   414,     3,   506,   415,   507,    -1,
      -1,     3,    -1,    -1,   277,   414,   508,   415,    -1,   509,
      -1,   508,   416,   509,    -1,     3,    20,     5,    -1,     3,
      -1,   510,   416,     3,    -1,   511,    -1,   327,   414,     3,
     415,    -1,   328,   414,     3,   415,    -1,   329,   414,     3,
     415,    -1,   330,   414,     3,   416,     3,   415,    -1,   512,
      -1,   108,   155,     3,    -1,   513,   515,    -1,   255,   252,
       3,    -1,   255,   252,     3,   416,   514,    -1,     3,    -1,
     514,   416,     3,    -1,    -1,   515,    74,    -1,   515,   210,
      -1,   515,    55,    53,    -1,   515,    54,    53,    -1,   535,
      -1,   536,    -1,   537,    -1,   516,    -1,   518,    -1,    73,
     395,   396,     3,   517,    -1,    73,   395,   396,   156,   281,
       3,   517,    -1,    -1,   277,   414,   397,    20,     4,   415,
      -1,   108,   395,   396,     3,    -1,   108,   395,   396,     3,
      74,    -1,   108,   395,   396,   156,   281,     3,    -1,   519,
      -1,   521,    -1,   522,    -1,   395,   398,   159,     3,   271,
     414,   520,   416,   520,   416,   520,   416,   520,   416,   520,
     416,   520,   416,   520,   415,    -1,   395,   398,   401,   159,
       3,   271,   414,   520,   416,   520,   416,   520,   416,   520,
     416,   520,   416,   520,   416,   520,   415,    -1,     4,    -1,
     193,    -1,   395,   399,   136,     3,   402,     4,    -1,   395,
     399,   136,     3,   402,     4,   403,     4,    -1,   395,   400,
     136,     3,   402,     4,    -1,   395,   400,   136,     3,   402,
       4,   179,     5,    -1,   523,    -1,   528,    -1,   529,    -1,
     531,    -1,   532,    -1,   533,    -1,   534,    -1,    73,   404,
     396,     3,   524,   525,    -1,    73,   404,   396,   156,   281,
       3,   524,   525,    -1,    -1,    -1,   277,   414,   526,   415,
      -1,   527,    -1,   526,   416,   527,    -1,   405,    20,     5,
      -1,   406,    20,     4,    -1,   108,   404,   396,     3,    -1,
     108,   404,   396,     3,    74,    -1,   108,   404,   396,   156,
     281,     3,    -1,   404,   398,   159,     3,   271,   414,   530,
     416,   530,   416,   530,   415,    -1,   404,   398,   159,     3,
     271,   414,   530,   416,   530,   416,   530,   416,   530,   415,
      -1,     4,    -1,   193,    -1,   404,   399,   136,     3,   274,
     411,    20,     4,    12,   164,    20,     4,    -1,   404,   407,
       3,   266,   273,     4,    -1,   404,   407,     3,   266,   273,
       4,   179,     5,    -1,   404,   107,   136,     3,   274,   411,
      20,     4,    12,   164,    20,     4,    -1,   404,   400,   409,
      16,     3,    -1,   404,   400,   409,    16,     3,   410,     4,
      -1,   168,     3,    -1,   168,     3,   171,    -1,   170,     3,
      -1,   170,    28,    -1,   169,     3,    -1,   169,     3,   416,
       4,    -1,   538,    -1,   206,   252,     3,    -1,   539,    -1,
     541,     3,   540,   542,    -1,   541,     3,   413,     3,   540,
     542,    -1,    -1,   277,    44,     5,    45,    -1,   277,    44,
       5,    46,    -1,    41,   252,    -1,    -1,   258,    42,   197,
     543,    -1,   258,    42,   197,   543,   277,     5,    43,    -1,
     108,    42,   197,   543,    -1,     3,    -1,   543,   416,     3,
      -1,   552,    -1,   544,    -1,   551,    -1,    73,   221,     3,
     197,     3,   545,   546,   547,   549,   550,    -1,    73,   221,
       3,   197,   404,   396,     3,   545,   546,   547,   549,   550,
      -1,    -1,    51,   223,    -1,    51,   224,    -1,    -1,   140,
      40,    -1,   140,   241,    -1,   140,   157,    -1,   140,   258,
      -1,   140,   107,    -1,    -1,   245,   548,    -1,     3,    -1,
     548,   416,     3,    -1,    -1,   266,   414,   421,   415,    -1,
      -1,   277,    78,   414,   421,   415,    -1,   108,   221,     3,
     197,     3,    -1,   108,   221,     3,   197,   404,   396,     3,
      -1,    37,   252,     3,    38,    71,     3,    78,   414,   421,
     415,    -1,    37,   252,     3,    38,    71,     3,   261,   414,
     599,   415,    -1,    37,   252,     3,    38,    71,     3,   134,
     164,   414,   596,   415,   207,     3,   414,   597,   415,   598,
      -1,    37,   252,     3,    38,    71,     3,    78,   414,   421,
     415,    18,   269,    -1,    37,   252,     3,    38,    71,     3,
     134,   164,   414,   596,   415,   207,     3,   414,   597,   415,
     598,    18,   269,    -1,    37,   252,     3,    38,    71,     3,
     201,   164,   414,   595,   415,    -1,    37,   252,     3,   108,
      71,     3,    -1,    37,   252,     3,   208,    71,     3,   245,
       3,    -1,    37,   252,     3,   120,    71,     3,    -1,    37,
     252,     3,   100,    71,     3,    -1,    37,   252,     3,   269,
      71,     3,    -1,    37,   252,     3,    38,    84,     3,   606,
     601,   553,    -1,    37,   252,     3,   108,    84,     3,    -1,
      37,   252,     3,   108,     3,    -1,    37,   252,     3,   208,
      84,     3,   245,     3,    -1,    37,   252,     3,   208,     3,
     245,     3,    -1,    37,   252,     3,   187,    84,     3,   606,
     601,   553,    -1,    37,   252,     3,   187,     3,   606,   601,
     553,    -1,    37,   252,     3,    75,    84,     3,     3,   606,
     601,   553,    -1,    37,   252,     3,    75,     3,     3,   606,
     601,   553,    -1,    37,   252,     3,   120,   217,     3,   222,
      -1,    37,   252,     3,   100,   217,     3,   222,    -1,    37,
     404,   396,     3,   120,   217,     3,   222,    -1,    37,   404,
     396,     3,   100,   217,     3,   222,    -1,    -1,   130,    -1,
      39,     3,    -1,   554,    -1,   157,   562,   563,     3,   564,
     271,   566,   555,   557,   632,    -1,   157,   562,   563,     3,
     564,   460,    -1,    -1,    -1,   199,   164,   258,   556,   561,
      -1,    -1,   197,    88,   558,   559,    -1,    -1,   414,     3,
     415,    -1,   414,     3,   416,     3,    -1,   101,    90,    -1,
      -1,   101,   258,   560,   240,   561,    -1,     3,    20,   421,
      -1,   561,   416,     3,    20,   421,    -1,    -1,   562,   176,
      -1,   562,   103,    -1,   562,   146,    -1,   562,   154,    -1,
     159,    -1,    -1,    -1,   414,   565,   415,    -1,     3,    -1,
     565,   416,     3,    -1,   414,   568,   415,    -1,    -1,   566,
     416,   567,   414,   568,   415,    -1,   421,    -1,   113,    -1,
     568,   416,   421,    -1,   568,   416,   113,    -1,   157,   562,
     563,     3,   240,   569,   555,    -1,     3,    20,   421,    -1,
       3,    20,   113,    -1,   569,   416,     3,    20,   421,    -1,
     569,   416,     3,    20,   113,    -1,   570,    -1,   216,   562,
     563,     3,   564,   271,   566,   555,    -1,   216,   562,   563,
       3,   240,   569,   555,    -1,   216,   562,   563,     3,   564,
     460,   555,    -1,   571,    -1,    -1,    86,     3,   572,   573,
     575,   576,   577,    -1,    -1,   414,   574,   415,    -1,     3,
      -1,   574,   416,     3,    -1,   136,    -1,   245,    -1,     4,
      -1,   236,    -1,   237,    -1,    -1,   578,    -1,   277,   414,
     578,   415,    -1,   414,   578,   415,    -1,   579,    -1,   578,
     416,   579,    -1,   135,    87,    -1,   135,   249,    -1,    99,
       4,    -1,   143,    -1,   143,     6,    -1,   193,     4,    -1,
     242,     4,    -1,    87,    -1,   580,    -1,   258,   581,   482,
     240,   582,   461,   471,   474,   632,    -1,    -1,   562,   176,
      -1,   562,   154,    -1,     3,    20,   421,    -1,     3,   413,
       3,    20,   421,    -1,   582,   416,     3,    20,   421,    -1,
     582,   416,     3,   413,     3,    20,   421,    -1,   208,   252,
       3,   245,     3,    -1,   583,    -1,    73,    95,   584,     3,
      -1,    73,   227,   584,     3,    -1,   108,    95,     3,    -1,
     108,    95,   156,   281,     3,    -1,   108,   227,     3,    -1,
     108,   227,   156,   281,     3,    -1,    -1,   156,   281,    -1,
     585,    -1,    73,   102,     3,    51,   606,    -1,    73,   102,
       3,    51,   606,   113,   421,    -1,    73,   102,     3,    51,
     606,    18,   193,    -1,    73,   102,     3,    51,   606,    78,
     414,   421,   415,    -1,    73,   102,     3,    51,   606,    18,
     193,    78,   414,   421,   415,    -1,   586,    -1,   267,     3,
      -1,   267,    95,     3,    -1,   587,    -1,    73,   592,   252,
     584,     3,   414,   593,   415,   589,   588,    -1,    -1,   172,
     414,     3,   415,    -1,    73,   592,   252,   584,     3,   413,
       3,   414,   593,   415,   589,    -1,    73,   592,   252,   584,
       3,   351,    94,     3,   140,   271,   136,   414,     5,   415,
     245,   414,     5,   415,    -1,    -1,   589,    48,    20,     5,
      -1,   589,    48,     5,    -1,   589,   197,     3,   107,     3,
      -1,   589,   197,     3,   248,     3,    -1,   589,   228,    63,
     268,   414,     3,   415,   229,     5,    -1,   589,   228,    63,
     204,   414,     3,   415,   414,   590,   415,    -1,   589,   351,
      63,   204,   414,     3,   415,    -1,   591,    -1,   590,   416,
     591,    -1,   228,     3,   271,   174,   250,     4,   197,   191,
       5,    -1,   228,     3,   271,   174,   250,   184,   197,   191,
       5,    -1,    73,   592,   252,   584,     3,   414,   593,   415,
     608,    -1,    73,   592,   252,   584,     3,   608,    -1,    73,
     592,   252,   584,     3,   413,     3,   414,   593,   415,   608,
      -1,    73,   592,   252,   584,     3,   413,     3,   608,    -1,
      -1,   246,    -1,   247,   246,    -1,   594,    -1,   593,   416,
     594,    -1,   201,   164,   414,   595,   415,    -1,    71,     3,
     201,   164,   414,   595,   415,    -1,   164,   414,   477,   415,
      -1,   155,   414,   477,   415,    -1,   138,   155,   414,   477,
     415,    -1,   138,   164,   414,   477,   415,    -1,    78,   414,
     421,   415,    -1,    71,     3,    78,   414,   421,   415,    -1,
     134,   164,   414,   596,   415,   207,     3,   414,   597,   415,
     598,    -1,   134,   164,   414,   596,   415,   207,     3,   413,
       3,   414,   597,   415,   598,    -1,    71,     3,   134,   164,
     414,   596,   415,   207,     3,   414,   597,   415,   598,    -1,
      71,     3,   134,   164,   414,   596,   415,   207,     3,   413,
       3,   414,   597,   415,   598,    -1,   261,   414,   599,   415,
      -1,    71,     3,   261,   414,   599,   415,    -1,     3,    -1,
     595,   416,     3,    -1,     3,    -1,   596,   416,     3,    -1,
       3,    -1,   597,   416,     3,    -1,    -1,   598,   197,   107,
      74,    -1,   598,   197,   107,   240,   193,    -1,   598,   197,
     107,   210,    -1,   598,   197,   107,   240,   113,    -1,   598,
     197,   258,    74,    -1,   598,   197,   258,   240,   193,    -1,
     598,   197,   258,   210,    -1,   598,   197,   258,   240,   113,
      -1,   598,   197,   107,   192,    -1,   598,   197,   258,   192,
      -1,   598,   183,   137,    -1,   598,   183,   235,    -1,   598,
     183,   200,    -1,   598,    97,    -1,   598,    18,    97,    -1,
     598,    97,   151,    98,    -1,   598,    97,   151,   149,    -1,
       3,    -1,   599,   416,     3,    -1,    -1,   600,     3,   606,
     601,    -1,    -1,   601,    18,   193,    -1,   601,   193,    -1,
     601,   113,     4,    -1,   601,   113,     5,    -1,   601,   113,
       7,    -1,   601,   113,     6,    -1,   601,   113,   333,   414,
     415,    -1,   601,   113,   334,   414,   415,    -1,   601,   113,
     335,   414,   415,    -1,   601,   113,    72,    -1,   601,   113,
     414,   421,   415,    -1,   601,    48,    -1,   601,    48,   414,
       5,   416,     5,   415,    -1,   601,    48,   414,     5,   415,
      -1,   601,    53,   414,     5,   416,     5,   415,    -1,   601,
      53,   414,     5,   415,    -1,   601,    53,    -1,   601,   261,
     164,    -1,   601,   261,    -1,   601,   201,   164,    -1,   601,
     164,    -1,   601,    79,     4,    -1,   601,    78,   414,   421,
     415,    -1,   601,    71,     3,   261,    -1,   601,    71,     3,
     201,   164,    -1,   601,    71,     3,    78,   414,   421,   415,
      -1,   601,    56,    52,    51,   414,   421,   415,    57,    -1,
     601,    56,    52,    51,   414,   421,   415,    58,    -1,   601,
      56,    52,    51,   414,   421,   415,    -1,   601,    51,   414,
     421,   415,    57,    -1,   601,    51,   414,   421,   415,    58,
      -1,   601,    51,   414,   421,   415,    -1,    -1,   414,     5,
     415,    -1,   414,     5,   416,     5,   415,    -1,    -1,    64,
      -1,    -1,   604,   259,    -1,   604,   280,    -1,    -1,   605,
      82,   240,     4,    -1,   605,    83,     4,    -1,    67,   602,
      -1,   244,   602,   604,    -1,   239,   602,   604,    -1,   189,
     602,   604,    -1,   160,   602,   604,    -1,   152,   602,   604,
      -1,    66,   602,   604,    -1,   205,   602,   604,    -1,   114,
     602,   604,    -1,   132,   602,   604,    -1,   116,   602,   604,
      -1,   117,    -1,   257,    -1,   251,    -1,   115,    -1,   278,
      -1,    82,   602,   605,    -1,   270,   414,     5,   415,   605,
      -1,    64,   602,    -1,   272,   414,     5,   415,    -1,   256,
      -1,    61,    -1,   188,    -1,   182,    -1,   243,   603,   605,
      -1,   249,   603,   605,    -1,   185,   603,   605,    -1,   175,
     603,   605,    -1,   123,   414,   607,   415,   605,    -1,   240,
     414,   607,   415,   605,    -1,    62,    -1,   262,    -1,   264,
      -1,   273,   414,     5,   415,    -1,   606,    36,   417,    -1,
       4,    -1,   607,   416,     4,    -1,   609,   487,   460,    -1,
      -1,   154,    -1,   216,    -1,   610,    -1,   240,   227,     3,
      -1,   240,   227,   113,    -1,   240,   611,    -1,   612,    -1,
     611,   416,   612,    -1,     8,    20,   421,    -1,     8,     9,
     421,    -1,   613,    -1,    73,   202,     3,   414,   614,   415,
      51,    60,   618,   124,    -1,    73,   202,     3,   414,   614,
     415,    60,   618,   124,    -1,    73,    10,   216,   202,     3,
     414,   614,   415,    51,    60,   618,   124,    -1,    73,    10,
     216,   202,     3,   414,   614,   415,    60,   618,   124,    -1,
      73,   139,     3,   414,   614,   415,   213,   617,    51,    60,
     618,   124,    -1,    73,   139,     3,   414,   614,   415,   213,
     617,    60,   618,   124,    -1,    73,    10,   216,   139,     3,
     414,   614,   415,   213,   617,    51,    60,   618,   124,    -1,
      73,    10,   216,   139,     3,   414,   614,   415,   213,   617,
      60,   618,   124,    -1,    -1,   615,    -1,   616,    -1,   615,
     416,   616,    -1,     3,   606,    -1,    16,     3,   606,    -1,
     195,     3,   606,    -1,   150,     3,   606,    -1,   152,    -1,
     160,    -1,   270,    -1,   249,    -1,    62,    -1,   132,    -1,
     114,    -1,    66,    -1,   117,    -1,   251,    -1,    -1,   618,
     619,    -1,   618,    60,   618,   124,    -1,   618,   156,   618,
     124,   156,    -1,   618,   276,   618,   124,   276,    -1,   618,
     166,   618,   124,   166,    -1,   618,   131,   618,   124,   131,
      -1,   618,    77,   618,   124,    77,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    20,    -1,    18,
      -1,    10,    -1,    12,    -1,    16,    -1,    50,    -1,   241,
      -1,   157,    -1,   258,    -1,   107,    -1,   136,    -1,   274,
      -1,   240,    -1,   159,    -1,   271,    -1,    73,    -1,   108,
      -1,   252,    -1,   155,    -1,   253,    -1,   125,    -1,   119,
      -1,    96,    -1,   101,    -1,    68,    -1,   211,    -1,   165,
      -1,   162,    -1,    70,    -1,   194,    -1,   129,    -1,    69,
      -1,   142,    -1,   127,    -1,   195,    -1,   150,    -1,   140,
      -1,    54,    -1,   218,    -1,   209,    -1,   126,    -1,   220,
      -1,    59,    -1,   118,    -1,   217,    -1,   219,    -1,    51,
      -1,   197,    -1,   198,    -1,    63,    -1,   141,    -1,   148,
      -1,   179,    -1,   181,    -1,   163,    -1,   177,    -1,   215,
      -1,   153,    -1,   196,    -1,   137,    -1,    76,    -1,   190,
      -1,   266,    -1,   193,    -1,   113,    -1,   201,    -1,   164,
      -1,   261,    -1,    78,    -1,   134,    -1,   207,    -1,    74,
      -1,   210,    -1,   192,    -1,   152,    -1,   160,    -1,   270,
      -1,   249,    -1,    62,    -1,   132,    -1,   114,    -1,    66,
      -1,   117,    -1,   251,    -1,   239,    -1,   116,    -1,    82,
      -1,   262,    -1,    61,    -1,   260,    -1,   122,    -1,   158,
      -1,    40,    -1,   106,    -1,   281,    -1,   275,    -1,   277,
      -1,   202,    -1,   139,    -1,   213,    -1,   414,    -1,   415,
      -1,   416,    -1,   412,    -1,   413,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,    17,    -1,   418,
      -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,
      -1,     8,    -1,   620,    -1,   108,   202,     3,    -1,   108,
     202,   156,   281,     3,    -1,   108,   139,     3,    -1,   108,
     139,   156,   281,     3,    -1,   621,    -1,    68,     3,   414,
     415,    -1,    68,     3,   414,   622,   415,    -1,   623,    -1,
     622,   416,   623,    -1,     5,    -1,     4,    -1,     7,    -1,
     193,    -1,     6,    -1,     3,    -1,     8,    -1,   624,    -1,
      73,   219,     3,   625,   626,   197,     3,   140,   118,   217,
      60,   618,   124,    -1,    59,    -1,    39,    -1,   157,    -1,
     258,    -1,   107,    -1,   627,    -1,   108,   219,     3,    -1,
     108,   219,   156,   281,     3,    -1,    37,   219,     3,   120,
      -1,    37,   219,     3,   100,    -1,   628,    -1,    73,   371,
     584,     3,   629,    -1,    -1,   629,   630,    -1,   376,   277,
       5,    -1,   376,     5,    -1,   377,    63,     5,    -1,   377,
       5,    -1,   378,     5,    -1,   184,     5,    -1,   379,    -1,
      18,   379,    -1,   631,    -1,   108,   371,     3,    -1,   108,
     371,   156,   281,     3,    -1,    37,   371,     3,   629,    -1,
      37,   371,     3,    55,    -1,    37,   371,     3,    55,   277,
       5,    -1,    37,   371,     3,   208,   245,     3,    -1,    -1,
     212,    28,    -1,   212,   633,    -1,     3,    -1,   633,   416,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   495,   495,   496,   501,   508,   509,   510,   524,   525,
     553,   561,   569,   575,   583,   584,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   608,   608,   617,   617,   619,   619,
     621,   621,   626,   628,   632,   633,   634,   635,   636,   639,
     640,   643,   652,   670,   679,   699,   699,   759,   768,   775,
     779,   781,   783,   788,   793,   801,   803,   805,   807,   809,
     811,   813,   815,   817,   819,   826,   837,   848,   849,   852,
     852,   853,   853,   854,   854,   862,   862,   870,   870,   881,
     885,   886,   887,   888,   889,   890,   891,   892,   896,   896,
     898,   898,   900,   900,   903,   903,   905,   905,   907,   907,
     909,   909,   911,   911,   913,   913,   916,   916,   918,   918,
     920,   920,   922,   922,   924,   924,   926,   926,   928,   928,
     930,   930,   933,   933,   935,   935,   937,   937,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   976,   977,   978,   979,   980,   981,   982,   983,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1008,  1009,  1010,  1011,  1012,  1014,  1015,  1017,
    1018,  1019,  1021,  1022,  1023,  1024,  1031,  1038,  1045,  1049,
    1053,  1057,  1061,  1065,  1071,  1072,  1073,  1076,  1082,  1089,
    1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1100,  1102,
    1104,  1106,  1110,  1118,  1129,  1130,  1133,  1134,  1137,  1145,
    1153,  1161,  1175,  1185,  1186,  1199,  1215,  1216,  1217,  1218,
    1221,  1228,  1236,  1237,  1238,  1241,  1242,  1245,  1246,  1250,
    1251,  1254,  1256,  1260,  1261,  1264,  1266,  1270,  1271,  1274,
    1275,  1278,  1284,  1291,  1300,  1301,  1302,  1303,  1306,  1307,
    1308,  1309,  1310,  1313,  1314,  1317,  1318,  1321,  1322,  1323,
    1324,  1325,  1326,  1327,  1328,  1329,  1332,  1333,  1334,  1342,
    1348,  1349,  1350,  1353,  1354,  1357,  1358,  1362,  1370,  1380,
    1381,  1382,  1391,  1396,  1402,  1410,  1414,  1414,  1454,  1455,
    1459,  1461,  1463,  1465,  1467,  1471,  1472,  1473,  1476,  1477,
    1480,  1481,  1484,  1485,  1486,  1489,  1490,  1493,  1494,  1498,
    1500,  1502,  1504,  1507,  1508,  1511,  1512,  1515,  1519,  1529,
    1537,  1538,  1539,  1540,  1544,  1548,  1550,  1554,  1554,  1556,
    1561,  1568,  1575,  1587,  1588,  1589,  1593,  1600,  1607,  1615,
    1625,  1633,  1643,  1651,  1660,  1669,  1679,  1687,  1696,  1705,
    1715,  1724,  1741,  1749,  1761,  1762,  1776,  1777,  1780,  1781,
    1793,  1803,  1808,  1813,  1819,  1826,  1833,  1840,  1850,  1857,
    1866,  1873,  1879,  1887,  1893,  1901,  1902,  1903,  1904,  1905,
    1921,  1922,  1923,  1932,  1933,  1937,  1947,  1963,  1964,  1968,
    1976,  1985,  2008,  2009,  2010,  2014,  2031,  2053,  2054,  2059,
    2068,  2082,  2091,  2117,  2118,  2119,  2120,  2121,  2122,  2123,
    2127,  2134,  2146,  2149,  2150,  2154,  2155,  2159,  2161,  2166,
    2174,  2183,  2195,  2207,  2222,  2223,  2228,  2242,  2252,  2266,
    2280,  2288,  2299,  2305,  2316,  2322,  2329,  2335,  2351,  2358,
    2367,  2375,  2381,  2396,  2398,  2402,  2411,  2424,  2426,  2430,
    2435,  2442,  2447,  2455,  2459,  2460,  2464,  2476,  2487,  2488,
    2489,  2493,  2494,  2495,  2496,  2497,  2498,  2501,  2503,  2507,
    2508,  2511,  2513,  2516,  2518,  2522,  2529,  2538,  2544,  2550,
    2557,  2563,  2570,  2576,  2582,  2588,  2594,  2600,  2606,  2612,
    2618,  2624,  2630,  2636,  2642,  2648,  2654,  2660,  2673,  2683,
    2693,  2705,  2706,  2707,  2710,  2718,  2724,  2737,  2738,  2738,
    2742,  2743,  2746,  2747,  2748,  2752,  2753,  2753,  2757,  2765,
    2775,  2776,  2777,  2778,  2779,  2782,  2782,  2785,  2786,  2789,
    2799,  2812,  2813,  2813,  2816,  2817,  2818,  2819,  2822,  2826,
    2827,  2828,  2829,  2835,  2838,  2844,  2849,  2855,  2859,  2859,
    2864,  2865,  2867,  2868,  2872,  2873,  2877,  2878,  2879,  2882,
    2883,  2884,  2885,  2889,  2890,  2894,  2895,  2896,  2897,  2898,
    2899,  2900,  2901,  2905,  2913,  2922,  2923,  2924,  2928,  2939,
    2951,  2962,  2977,  2982,  2986,  2987,  2991,  2993,  2995,  2997,
    3001,  3002,  3008,  3012,  3014,  3016,  3018,  3020,  3025,  3029,
    3030,  3034,  3043,  3056,  3057,  3065,  3073,  3081,  3082,  3083,
    3084,  3085,  3086,  3088,  3090,  3094,  3095,  3098,  3113,  3120,
    3135,  3148,  3163,  3176,  3177,  3178,  3181,  3182,  3185,  3186,
    3187,  3188,  3189,  3190,  3191,  3192,  3193,  3195,  3197,  3199,
    3201,  3203,  3207,  3208,  3211,  3212,  3215,  3216,  3219,  3220,
    3221,  3222,  3223,  3224,  3225,  3226,  3227,  3228,  3229,  3230,
    3231,  3232,  3233,  3234,  3235,  3236,  3239,  3240,  3243,  3243,
    3253,  3254,  3255,  3256,  3257,  3258,  3259,  3260,  3261,  3262,
    3263,  3264,  3271,  3272,  3273,  3274,  3275,  3276,  3277,  3278,
    3279,  3280,  3281,  3282,  3283,  3284,  3285,  3286,  3287,  3288,
    3289,  3290,  3291,  3294,  3295,  3296,  3299,  3300,  3303,  3304,
    3305,  3308,  3309,  3310,  3314,  3315,  3316,  3317,  3318,  3319,
    3320,  3321,  3322,  3323,  3324,  3325,  3326,  3327,  3328,  3329,
    3330,  3331,  3332,  3333,  3334,  3335,  3336,  3337,  3338,  3339,
    3340,  3341,  3342,  3343,  3344,  3345,  3346,  3347,  3348,  3351,
    3352,  3355,  3368,  3369,  3370,  3374,  3377,  3378,  3379,  3380,
    3380,  3382,  3383,  3391,  3395,  3401,  3407,  3414,  3421,  3427,
    3433,  3440,  3449,  3450,  3453,  3454,  3457,  3458,  3459,  3460,
    3463,  3464,  3465,  3466,  3467,  3468,  3469,  3470,  3471,  3472,
    3479,  3480,  3481,  3482,  3483,  3484,  3485,  3486,  3489,  3490,
    3491,  3491,  3491,  3492,  3492,  3492,  3492,  3492,  3492,  3493,
    3493,  3493,  3493,  3493,  3493,  3493,  3493,  3493,  3494,  3494,
    3494,  3494,  3494,  3494,  3494,  3495,  3495,  3495,  3495,  3496,
    3496,  3496,  3496,  3496,  3496,  3496,  3496,  3496,  3496,  3496,
    3496,  3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,  3498,
    3498,  3498,  3498,  3498,  3498,  3498,  3498,  3499,  3499,  3499,
    3499,  3499,  3499,  3499,  3499,  3499,  3500,  3500,  3500,  3500,
    3500,  3500,  3500,  3500,  3501,  3501,  3501,  3502,  3502,  3502,
    3502,  3502,  3502,  3502,  3502,  3503,  3503,  3503,  3503,  3503,
    3503,  3503,  3504,  3504,  3504,  3504,  3504,  3504,  3504,  3505,
    3505,  3505,  3505,  3506,  3506,  3506,  3506,  3506,  3506,  3506,
    3506,  3506,  3506,  3506,  3506,  3507,  3507,  3507,  3507,  3507,
    3508,  3515,  3519,  3525,  3531,  3537,  3549,  3553,  3559,  3567,
    3568,  3571,  3572,  3573,  3574,  3575,  3576,  3577,  3584,  3588,
    3596,  3597,  3600,  3601,  3602,  3605,  3609,  3615,  3624,  3632,
    3643,  3647,  3656,  3657,  3661,  3662,  3663,  3664,  3665,  3666,
    3667,  3668,  3671,  3675,  3681,  3691,  3698,  3705,  3713,  3723,
    3724,  3725,  3728,  3729
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
  "LIST", "WRITES", "THREAD", "AT", "MEMORY", "EMBEDDING_DIM", "DISTANCE",
  "SEARCH", "NAMESPACE", "NAMESPACES", "PREFIX", "NS", "';'", "'.'", "'('",
  "')'", "','", "']'", "'='", "$accept", "stmt_list", "expr", "@1", "@2",
  "@3", "@4", "val_list", "array_val_list", "@5", "any_array_arg",
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
  "truncate_extra_tables", "opt_truncate_options",
  "create_checkpoint_store_stmt", "opt_ck_with",
  "drop_checkpoint_store_stmt", "ck_put_stmt", "ck_put_val", "ck_get_stmt",
  "ck_list_stmt", "create_memory_store_stmt", "mem_reset", "opt_mem_with",
  "mem_with_list", "mem_with_item", "drop_memory_store_stmt",
  "mem_put_stmt", "mem_val", "mem_get_stmt", "mem_search_stmt",
  "mem_delete_stmt", "mem_list_ns_stmt", "listen_stmt", "unlisten_stmt",
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
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,    59,    46,    40,    41,    44,    93,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   419,   420,   420,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   422,   421,   423,   421,   424,   421,
     425,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   426,   426,   427,   427,   428,   421,   421,   421,   429,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   430,   430,   431,
     421,   432,   421,   433,   421,   434,   421,   435,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   436,   421,
     437,   421,   438,   421,   439,   421,   440,   421,   441,   421,
     442,   421,   443,   421,   444,   421,   445,   421,   446,   421,
     447,   421,   448,   421,   449,   421,   450,   421,   451,   421,
     452,   421,   453,   421,   454,   421,   455,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   456,   456,   456,   421,   421,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   421,   421,
     421,   421,   458,   458,   421,   421,   421,   421,   421,   421,
     421,   421,   459,   460,   460,   460,   461,   461,   462,   462,
     463,   463,   464,   464,   464,   465,   465,   466,   466,   467,
     467,   468,   468,   469,   469,   470,   470,   471,   471,   472,
     472,   473,   473,   473,   474,   474,   474,   474,   475,   475,
     475,   475,   475,   476,   476,   477,   477,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   479,   479,   479,   480,
     481,   481,   481,   482,   482,   483,   483,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   486,   485,   487,   487,
     488,   488,   488,   488,   488,   489,   489,   489,   490,   490,
     491,   491,   492,   492,   492,   493,   493,   494,   494,   495,
     495,   495,   495,   496,   496,   497,   497,   498,   459,   499,
     500,   500,   500,   500,   499,   501,   501,   502,   502,   499,
     459,   503,   503,   504,   504,   504,   459,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   506,   506,   507,   507,   508,   508,
     509,   510,   510,   510,   511,   511,   511,   511,   459,   512,
     459,   513,   513,   514,   514,   515,   515,   515,   515,   515,
     459,   459,   459,   459,   459,   516,   516,   517,   517,   518,
     518,   518,   459,   459,   459,   519,   519,   520,   520,   521,
     521,   522,   522,   459,   459,   459,   459,   459,   459,   459,
     523,   523,   524,   525,   525,   526,   526,   527,   527,   528,
     528,   528,   529,   529,   530,   530,   531,   532,   532,   533,
     534,   534,   535,   535,   536,   536,   537,   537,   459,   538,
     459,   539,   539,   540,   540,   540,   541,   542,   542,   542,
     542,   543,   543,   459,   459,   459,   544,   544,   545,   545,
     545,   546,   546,   546,   546,   546,   546,   547,   547,   548,
     548,   549,   549,   550,   550,   551,   551,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   553,   553,   553,   459,   554,   554,   555,   556,   555,
     557,   557,   558,   558,   558,   559,   560,   559,   561,   561,
     562,   562,   562,   562,   562,   563,   563,   564,   564,   565,
     565,   566,   567,   566,   568,   568,   568,   568,   554,   569,
     569,   569,   569,   459,   570,   570,   570,   459,   572,   571,
     573,   573,   574,   574,   575,   575,   576,   576,   576,   577,
     577,   577,   577,   578,   578,   579,   579,   579,   579,   579,
     579,   579,   579,   459,   580,   581,   581,   581,   582,   582,
     582,   582,   459,   459,   583,   583,   459,   459,   459,   459,
     584,   584,   459,   585,   585,   585,   585,   585,   459,   586,
     586,   459,   587,   588,   588,   587,   587,   589,   589,   589,
     589,   589,   589,   589,   589,   590,   590,   591,   591,   587,
     587,   587,   587,   592,   592,   592,   593,   593,   594,   594,
     594,   594,   594,   594,   594,   594,   594,   594,   594,   594,
     594,   594,   595,   595,   596,   596,   597,   597,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   599,   599,   600,   594,
     601,   601,   601,   601,   601,   601,   601,   601,   601,   601,
     601,   601,   601,   601,   601,   601,   601,   601,   601,   601,
     601,   601,   601,   601,   601,   601,   601,   601,   601,   601,
     601,   601,   601,   602,   602,   602,   603,   603,   604,   604,
     604,   605,   605,   605,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   607,
     607,   608,   609,   609,   609,   459,   610,   610,   610,   611,
     611,   612,   612,   459,   613,   613,   613,   613,   613,   613,
     613,   613,   614,   614,   615,   615,   616,   616,   616,   616,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     618,   618,   618,   618,   618,   618,   618,   618,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   459,   620,   620,   620,   620,   459,   621,   621,   622,
     622,   623,   623,   623,   623,   623,   623,   623,   459,   624,
     625,   625,   626,   626,   626,   459,   627,   627,   459,   459,
     459,   628,   629,   629,   630,   630,   630,   630,   630,   630,
     630,   630,   459,   631,   631,   459,   459,   459,   459,   632,
     632,   632,   633,   633
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
       8,     6,     8,     1,     1,     1,     1,     1,     1,     1,
       6,     8,     0,     0,     4,     1,     3,     3,     3,     4,
       5,     6,    12,    14,     1,     1,    12,     6,     8,    12,
       5,     7,     2,     3,     2,     2,     2,     4,     1,     3,
       1,     4,     6,     0,     4,     4,     2,     0,     4,     7,
       4,     1,     3,     1,     1,     1,    10,    12,     0,     2,
       2,     0,     2,     2,     2,     2,     2,     0,     2,     1,
       3,     0,     4,     0,     5,     5,     7,    10,    10,    17,
      12,    19,    11,     6,     8,     6,     6,     6,     9,     6,
       5,     8,     7,     9,     8,    10,     9,     7,     7,     8,
       8,     0,     1,     2,     1,    10,     6,     0,     0,     5,
       0,     4,     0,     3,     4,     2,     0,     5,     3,     5,
       0,     2,     2,     2,     2,     1,     0,     0,     3,     1,
       3,     3,     0,     6,     1,     1,     3,     3,     7,     3,
       3,     5,     5,     1,     8,     7,     7,     1,     0,     7,
       0,     3,     1,     3,     1,     1,     1,     1,     1,     0,
       1,     4,     3,     1,     3,     2,     2,     2,     1,     2,
       2,     2,     1,     1,     9,     0,     2,     2,     3,     5,
       5,     7,     5,     1,     4,     4,     3,     5,     3,     5,
       0,     2,     1,     5,     7,     7,     9,    11,     1,     2,
       3,     1,    10,     0,     4,    11,    18,     0,     4,     3,
       5,     5,     9,    10,     7,     1,     3,     9,     9,     9,
       6,    11,     8,     0,     1,     2,     1,     3,     5,     7,
       4,     4,     5,     5,     4,     6,    11,    13,    13,    15,
       4,     6,     1,     3,     1,     3,     1,     3,     0,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     4,     3,
       3,     3,     2,     3,     4,     4,     1,     3,     0,     4,
       0,     3,     2,     3,     3,     3,     3,     5,     5,     5,
       3,     5,     2,     7,     5,     7,     5,     2,     3,     2,
       3,     2,     3,     5,     4,     5,     7,     8,     8,     7,
       6,     6,     5,     0,     3,     5,     0,     1,     0,     2,
       2,     0,     4,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     5,     2,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     5,     5,     1,     1,     1,     4,     3,     1,
       3,     3,     0,     1,     1,     1,     3,     3,     2,     1,
       3,     3,     3,     1,    10,     9,    12,    11,    12,    11,
      14,    13,     0,     1,     1,     3,     2,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     4,     5,     5,     5,     5,     5,     1,     1,
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
       1,     1,     3,     5,     3,     5,     1,     4,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,    13,
       1,     1,     1,     1,     1,     1,     3,     5,     4,     4,
       1,     5,     0,     2,     3,     2,     3,     2,     2,     2,
       1,     2,     1,     3,     5,     4,     4,     6,     6,     0,
       2,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   663,     0,   363,     0,   560,     0,
       0,     0,     0,     0,   560,     0,   297,     0,   615,     0,
       0,     0,     0,     0,   252,   358,   370,   376,   408,   415,
     423,   424,   432,   433,   434,   443,   444,   445,   446,   447,
     448,   449,   420,   421,   422,   478,   480,     0,   494,   495,
     493,   544,   583,   587,   613,   623,   632,   638,   641,   795,
     803,   961,   966,   978,   985,   990,  1002,     0,     0,     0,
       0,   486,     0,     0,   630,     0,     0,     0,     0,     0,
       0,     0,   630,   664,     0,     0,   630,     0,     0,     0,
     588,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   566,   472,   476,   474,   475,     0,     0,
     566,     0,     0,   798,   799,     0,     0,     0,     0,   639,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,   410,   483,     0,     0,   992,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   665,     0,     0,     0,     0,   630,   590,   367,     0,
     362,   360,   361,     0,   626,     0,   964,     0,   409,   962,
       0,   986,     0,     0,   628,     0,   373,     0,  1003,     0,
       0,     0,   562,   563,   564,   565,   561,     0,   473,     0,
     479,     0,     0,     0,     0,   796,   797,     0,     4,     9,
      10,    12,    11,     8,     0,     0,     0,   308,   298,   248,
       0,   249,   250,     0,   299,   300,   301,     0,    13,   251,
     303,   305,   304,   302,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     312,   253,   306,   411,   617,   616,   312,     0,     0,     0,
       0,     0,   313,   315,   329,   316,   329,   640,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
     416,   417,     0,     0,   487,   989,   988,     0,     0,     0,
       0,     0,     0,     0,     0,  1006,     0,  1005,     0,   976,
     972,   971,   975,   973,   977,   974,   967,     0,   969,     0,
       0,   631,   624,     0,     0,   812,     0,     0,     0,     0,
     812,   981,   980,     0,     0,   625,     0,     0,     0,   992,
     427,     0,   452,     0,     0,     0,     0,     0,   365,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   371,     0,     0,   429,     0,   459,     0,   567,   477,
       0,   567,   802,   801,   800,     0,    77,     0,    32,    31,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   419,   418,     0,   483,     0,     0,   481,     0,     0,
       0,     0,     0,     0,   530,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1000,   993,     0,     0,   968,     0,     0,     0,
     775,   784,   743,   743,   743,   743,   743,   768,   743,   765,
       0,   743,   743,   743,   746,   777,   746,   776,   743,   743,
     743,     0,   746,   743,   746,   767,   774,   766,   785,   786,
       0,     0,     0,   769,   633,     0,     0,     0,     0,     0,
       0,   813,   814,     0,     0,     0,     0,     0,   984,   982,
     983,     0,   498,     0,     0,     0,     0,     0,   991,     0,
     425,     0,   453,     0,   792,   592,     0,   594,   595,     0,
     368,     0,   277,     0,   256,   367,   627,   965,   963,   987,
     515,     0,   629,   373,  1004,   430,     0,   460,     0,     0,
       0,     0,   622,     0,     0,     5,    51,    78,     0,    48,
       0,     0,   240,     0,     0,     6,     0,    57,     0,     0,
       0,   226,   224,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,     0,     0,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   215,   216,   217,   218,   219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    23,    24,    22,
     246,   244,    46,     0,    44,   212,    79,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    33,    73,    72,    25,
      26,    28,    14,    15,    16,    17,    18,    19,    27,    30,
      29,     0,   310,   256,     0,   307,   413,   412,   312,     0,
       0,     0,   317,     0,   352,     0,   357,   325,     0,   256,
     314,   338,   338,     0,   331,     0,   339,     0,   321,   320,
       0,     0,     0,     0,     0,     0,     0,   470,     0,     0,
     487,     0,     0,     0,     0,     0,     0,   526,     0,   523,
     529,   525,     0,   710,     0,     0,     0,     0,   527,  1007,
    1008,  1001,   999,   995,     0,   997,     0,   998,     0,     0,
     970,   812,   812,     0,   772,   748,   754,   751,   748,   748,
       0,   748,   748,   748,   747,   751,   751,   748,   748,   748,
       0,   751,   748,   751,     0,     0,     0,     0,     0,     0,
       0,     0,   816,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   501,     0,     0,     0,
       0,     0,     0,   427,     0,   450,   452,   793,   794,     0,
       0,   708,   660,   329,   591,     0,   596,   597,   598,   599,
     257,     0,   284,   256,   364,   366,     0,   372,   431,   461,
       0,   547,   569,     0,     0,   546,   547,     0,   547,     0,
      89,     0,   238,     0,     0,     0,     0,    53,     0,     0,
       0,     0,   142,     0,     0,     0,     0,     0,   174,   175,
     176,   177,   178,   179,     0,     0,     0,     0,   155,     0,
       0,     0,   159,   160,   161,   163,     0,     0,   165,     0,
     168,   169,   170,     0,     0,     0,     0,     0,     0,    96,
      90,    91,    92,    93,    94,    95,   145,   146,   147,     0,
       0,     0,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,   183,   184,   185,
     186,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,   198,     0,   201,   202,   203,     0,    60,     0,    62,
       0,     0,     0,     0,     0,    69,    70,    71,     0,     0,
       0,    47,    45,     0,     0,   247,   245,    81,     0,     0,
      40,    36,    38,     0,    58,   258,     0,     0,   352,   354,
     354,   354,     0,   318,   322,     0,     0,     0,   277,   342,
     343,     0,     0,   345,     0,     0,     0,   439,   441,     0,
       0,     0,     0,   467,   484,   485,   482,     0,     0,     0,
       0,     0,     0,   710,   710,     0,   538,   537,   541,   710,
     532,     0,     0,   994,   996,     0,     0,     0,     0,     0,
     760,   770,   762,   764,   789,     0,   763,   759,   758,   781,
     780,   757,   761,   756,     0,   778,   755,   779,     0,     0,
       0,   635,   788,     0,   634,     0,   817,   819,   818,     0,
     815,     0,     0,   401,     0,     0,     0,     0,     0,   403,
       0,     0,     0,     0,     0,   830,     0,   499,   500,     0,
     507,   498,     0,     0,     0,     0,     0,     0,   426,     0,
     453,     0,   792,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   666,     0,     0,   593,   612,     0,     0,   608,
       0,     0,     0,     0,   589,   600,   603,     0,     0,  1009,
     369,   516,     0,     0,     0,   578,   568,     0,     0,   547,
     585,   547,   586,    52,   242,     0,   241,     0,     0,     0,
      56,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,   100,   102,     0,
       0,     0,     0,     0,   134,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    59,     0,     0,     0,     0,     0,     0,
     267,   256,   414,   319,     0,     0,     0,     0,   327,     0,
     618,     0,     0,   284,   334,   332,     0,     0,   330,   346,
       0,   437,   438,     0,     0,     0,     0,     0,   464,   465,
       0,     0,   471,     0,   491,   490,   488,     0,     0,     0,
       0,   541,   541,   710,     0,     0,   722,     0,   727,     0,
       0,     0,     0,     0,   542,   731,   712,     0,   729,   534,
     541,   524,   531,   540,   539,     0,     0,   744,     0,   749,
     750,     0,     0,   751,     0,   751,   751,   773,   787,     0,
       0,     0,   824,   827,   826,   828,   825,   820,   821,   823,
     829,   822,     0,     0,     0,     0,     0,     0,     0,   377,
       0,     0,     0,     0,     0,     0,   830,     0,     0,   502,
     506,   504,   503,   505,     0,   511,   501,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   455,   451,     0,
     708,   662,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   647,   708,     0,   791,   607,   605,   606,   609,   610,
     611,     0,     0,     0,   262,   262,   278,   279,   285,     0,
     359,   580,   579,     0,     0,   570,   575,   574,     0,   572,
     550,   584,   239,   243,     0,    54,     0,   140,   139,     0,
     144,     0,     0,   227,   228,   173,   151,   152,     0,     0,
     156,   157,   158,   162,   164,   166,   207,   208,   209,   210,
       0,    97,   106,   108,   104,   110,   112,   114,   148,     0,
       0,   150,   223,   269,   269,   269,   116,     0,     0,   124,
       0,     0,   132,   269,   269,   180,     0,     0,     0,   192,
     193,     0,     0,   196,     0,   199,     0,   204,     0,    61,
      63,    65,    66,    67,    68,     0,     0,     0,    80,    84,
       0,     0,    50,     0,     0,    42,     0,    43,    35,     0,
       0,   277,   258,   353,     0,     0,     0,   323,     0,     0,
       0,  1009,   347,     0,   333,     0,     0,   440,   442,     0,
       0,     0,   468,     0,     0,     0,     0,     0,   706,     0,
     528,   536,   541,   711,   543,     0,     0,     0,     0,     0,
       0,   732,   713,   714,   716,   715,   720,     0,     0,     0,
       0,   730,   728,   533,     0,     0,   830,     0,     0,   753,
     782,   790,   783,   771,     0,   636,   378,     0,   830,     0,
     394,     0,     0,     0,     0,   402,     0,   386,     0,     0,
       0,     0,     0,   838,   839,   840,   842,   841,   960,   845,
     846,   847,   953,   844,   843,   948,   949,   950,   951,   952,
     935,   848,   889,   880,   885,   830,   931,   921,   892,   924,
     867,   874,   871,   858,   914,   903,   830,   911,   929,   865,
     866,   936,   852,   859,   907,   923,   928,   925,   886,   864,
     933,   805,   863,   883,   876,   873,   830,   922,   912,   853,
     902,   941,   879,   893,   875,   894,   878,   917,   900,   861,
     830,   850,   934,   856,   918,   870,   897,   909,   869,   830,
     898,   895,   896,   904,   916,   906,   872,   877,   901,   890,
     891,   908,   940,   913,   882,   915,   868,   942,   899,   887,
     881,   888,   884,   927,   855,   849,   920,   926,   860,   862,
     851,   932,   910,   930,   905,   919,   857,   854,   938,   830,
     939,   937,   955,   956,   957,   958,   959,   946,   947,   943,
     944,   945,   954,   831,     0,   509,   508,     0,   513,   507,
       0,   380,     0,     0,     0,     0,     0,     0,     0,     0,
     454,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,     0,     0,     0,     0,   643,   659,   667,
     710,     0,   602,   604,   263,   264,     0,   281,   283,     0,
       0,     0,  1012,  1010,  1011,   548,     0,   571,     0,     0,
       0,  1009,     0,     0,     0,   143,   230,   231,   232,   233,
     236,   235,   237,   229,   234,     0,     0,     0,   269,   269,
     269,   269,   269,   269,     0,     0,     0,   273,   273,   273,
     269,     0,     0,     0,   269,     0,     0,     0,   269,   273,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,    86,    41,    37,    39,   262,   265,   268,
     284,   267,   355,     0,     0,     0,     0,   619,   620,     0,
     614,     0,     0,     0,     0,     0,     0,   492,     0,   517,
     684,     0,   682,     0,   518,     0,   535,     0,     0,     0,
       0,     0,     0,   734,     0,     0,     0,     0,     0,     0,
     830,     0,   745,   752,     0,   830,     0,   382,   395,     0,
     404,   405,   406,     0,     0,     0,     0,     0,   379,   804,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     496,   511,     0,     0,   388,     0,     0,     0,   428,   457,
     458,   456,     0,   647,     0,     0,     0,     0,   674,     0,
       0,     0,   671,     0,   670,     0,   680,     0,     0,     0,
       0,     0,   642,   709,   601,   262,   280,   287,   286,     0,
       0,   582,   581,   577,   576,     0,   552,   545,     7,   141,
     138,   153,   154,   211,   273,   273,   273,   273,   273,   273,
     213,     0,   149,     0,     0,     0,     0,     0,   273,   118,
       0,     0,   273,   126,     0,     0,   273,     0,     0,   189,
     190,   191,   194,   195,     0,   200,   205,     0,     0,     0,
     260,     0,     0,   259,   288,   277,   351,     0,   350,   349,
       0,     0,   348,     0,     0,     0,     0,     0,   489,     0,
       0,     0,   522,     0,   707,   724,     0,   742,   726,     0,
       0,     0,   735,   733,   717,   718,   719,   721,     0,   830,
       0,   807,   637,     0,   809,   396,     0,   390,   387,     0,
     394,   832,     0,     0,     0,     0,     0,   830,   510,     0,
       0,   513,   384,     0,     0,     0,   381,     0,   645,   661,
       0,     0,     0,     0,     0,   672,   673,   296,   668,   649,
       0,     0,     0,     0,     0,   282,  1013,     0,   549,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   271,
     270,     0,    99,   101,   103,     0,   269,     0,     0,     0,
     269,     0,     0,     0,   135,   137,     0,     0,     0,     0,
     266,   262,     0,   293,   284,   356,   324,   621,     0,     0,
       0,     0,     0,   520,     0,   685,   683,     0,   740,   741,
       0,     0,     0,   830,     0,   806,   808,     0,   392,   407,
     383,     0,   837,   836,   833,   835,   834,     0,   512,     0,
     497,   391,   389,     0,     0,   675,     0,     0,   681,     0,
     648,     0,     0,     0,     0,     0,     0,     0,     0,   573,
       0,     0,   551,   107,   109,   105,   111,   113,   115,   214,
       0,   262,   274,   117,   273,   120,   122,   125,   273,   128,
     130,   133,   197,    74,     0,     0,   261,   290,   289,     0,
     254,   255,     0,     0,   469,   462,     0,   466,     0,   723,
     725,   739,   736,     0,   811,     0,   396,   979,     0,   385,
       0,     0,   669,     0,   644,   650,   651,     0,     0,     0,
     558,     0,   553,     0,   555,   556,   272,   275,     0,     0,
     269,   269,     0,   269,   269,     0,     0,     0,     0,   294,
       0,     0,     0,     0,   737,   738,   810,     0,     0,   398,
     393,   514,     0,     0,     0,     0,     0,     0,     0,     0,
     554,     0,   262,   119,   273,   273,   127,   273,   273,    75,
      76,   292,   291,     0,     0,   463,   686,     0,     0,   397,
       0,     0,     0,     0,     0,     0,     0,   654,   559,     0,
     276,     0,     0,     0,     0,     0,     0,   688,     0,   400,
     399,     0,     0,     0,     0,   688,     0,     0,   557,   121,
     123,   129,   131,     0,     0,   519,   687,     0,     0,     0,
       0,   676,     0,     0,   655,   652,     0,     0,     0,   702,
       0,     0,   646,     0,   688,   688,     0,     0,   653,     0,
       0,     0,   703,   521,     0,   699,   701,   700,     0,     0,
       0,   678,   677,     0,   656,     0,     0,   704,   705,   689,
     697,   691,     0,   693,   698,   695,     0,   688,     0,   435,
       0,   692,   690,   696,   694,   679,     0,   436,     0,     0,
       0,     0,     0,     0,   657,   658
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,   756,  1193,  1434,  1436,  1432,   757,  1078,   768,
    1435,   758,  1183,  1428,  1184,  1429,   769,  1653,  1654,  1655,
    1990,  1988,  1989,  1991,  1992,  1993,  2000,  2296,  2440,  2441,
    2004,  2300,  2443,  2444,  2008,  1663,  1664,   775,  1367,   453,
      23,    24,   732,  1440,  2028,  1957,  2193,  1701,  1997,  2290,
    2165,  2382,  1052,  1596,  1597,  1339,  2313,  2400,  1943,   115,
     331,   332,   587,   341,   342,   343,   344,   923,   610,   345,
     607,   937,   608,   933,  1458,  1459,   922,  1445,  2033,   346,
      25,    91,   163,   418,    26,   431,    27,  2079,  2338,  2458,
    2459,  1288,  1289,    28,    29,   917,   131,    30,   720,    31,
      32,  1463,    33,    34,    35,   722,  1035,  1566,  1567,    36,
      37,  1470,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   364,    47,   627,  1475,    48,  1026,  1300,  1555,  1916,
    1918,  2100,    49,    50,  1499,    51,  1345,  2140,  1971,  2281,
    2372,  2471,  2278,   103,   187,   751,  1063,  1349,  1969,  1608,
    1061,    52,    53,   157,   416,   726,   729,  1049,  1334,  1335,
    1336,    54,   118,   929,    55,   140,    56,    57,    58,  2132,
    1947,  2533,  2534,    89,  1321,  1322,  2053,  2051,  2487,  2525,
    1729,  1323,  1238,   984,   995,  1250,  1251,   694,  1255,  1042,
    1043,    59,   113,   114,    60,   700,   701,   702,  1532,  1547,
    1913,    61,    62,   387,   388,    63,   403,   711,    64,    65,
     377,   653,    66,  1600,  1964
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1930
static const yytype_int16 yypact[] =
{
   13206,  -138,   -70,   108,   488,   176, -1930,   549, -1930,   207,
     213,   607,   -20,   290, -1930,    42, -1930,   302,   469,   104,
     434,   -73,   575,   182, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930,   631, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930,   636,   699,   722,
     240, -1930,   210,   430,   580,   728,   499,   738,   116,   740,
     752,   755,   580, -1930,   523,   616,   580,   388,   392,   561,
   -1930,    67,   144,   166,   787,   167,   177,   791,   393,   401,
     503,   421,   446,   643,   640,   391, -1930, -1930,   824,   849,
     643,   557,   109,   445, -1930,  6530,   868,   649,    19, -1930,
     870,  -110,   742,   746,   748,   741,   775,   458,   916, -1930,
   13206,   493,   228,   451,   481,    22,   931,    36,   -19,   662,
     935,   894,   954,   553,   786,   535,   712,   598,   566,   820,
    1025, -1930,   143,  1043,   540,   542,   580,   648,   641,  1063,
   -1930, -1930, -1930,  -103, -1930,   788, -1930,   794, -1930, -1930,
     799, -1930,   812,   940, -1930,   847,   491,   878, -1930,   880,
     550,   555, -1930, -1930, -1930, -1930, -1930,  1152, -1930,  1159,
   -1930,   922,  1172, 10450, 10450, -1930, -1930,  1194,   431, -1930,
   -1930, -1930, -1930,  1184, 10450, 10450, 10450, -1930, -1930, -1930,
    7706, -1930, -1930,   807, -1930, -1930, -1930,   808, -1930, -1930,
   -1930, -1930, -1930, -1930,  1190,   818,   829,   835,   845,   863,
     876,   898,   909,   945,   947,   956,   974,   983,  1001,  1003,
    1011,  1029,  1062,  1069,  1089,  1098,  1119,  1134,  1136,  1144,
    1146,  1148,  1153,  1154,  1155,  1161,  1162,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1173,  1174,  1175,  1176,  1177,  1178,
    1181,  1182,  1183,  1203,  1205,  1206,  1208,  1209,  1210,  1212,
   -1930, -1930,  1219,  1223,  1224,  1225,  1229,  1231,  1232,  1233,
    1234,  1241,  1245,  1246,  1247,  1248,  1249,  1251,  1252,  1254,
    1255,  1256,  1257,  1258,  1259,  1262,  1263,  1265,  1266,  1267,
    1268,  1277,  1281,  1282,  1285,  1289,  1290,  1291,  1293,  1294,
    1295,  1296,  1297,  1298,  1299,  1300,  1301,  1302,  1303, 10450,
   13852,  -107, -1930,   892,   654,   660,    58,  1304,  1563,  1305,
      64,  -155,     4, -1930,  1535, -1930,  1535, -1930,  1595,  1440,
    1653,  1664,  1720,  1721,  1723,  1711,   962, -1930,  1675,  1676,
   -1930, -1930,  1689,  1731,    81, -1930, -1930,   661,   123,    29,
     125,   440,   477,   141,  1665,  1458,  1494,   114,   520, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930,   441, -1930,  1741,
    1742, -1930, -1930, 13513,  1550,    94,  1749,  1557,  1476,  1756,
      94, -1930, -1930,   370,    25, -1930,  1565,   560,  1486, -1930,
    1493,  1492, -1930,  1497,  1768,  1772,   -32,  1757, -1930,   304,
     -75,    19,  1788,  1789,  1790,  1791,  1794,    48,  1795, -1930,
   -1930, -1930,  1796,  1797,  1728,  1523,  1732,  1526,  -178, -1930,
    1805,  -152, 14005, 14005, -1930,  1806, 10450, 10450,  1324,  1324,
    1774, 10450, 13322,    31,  1808,  1809,  1396, -1930, 10450,  6922,
   10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450,  1400,
   10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450,
   10450, 10450, 10450, 10450, 10450,  1412, 10450, 10450, 10450,  1413,
   10450, 10450, 10450, 10450, 10450, 10450,  8098, 10450, 10450, 10450,
   10450, 10450, 10450, 10450, 10450, 10450, 10450,  1414,  1415,  1417,
    1421,  1423, 10450, 10450,  1425,  1432,  1433, 10450, 10450,  1844,
    1435,  1437, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450,
   10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450,
   10450, 10450, 10450, 10450,  1439, 10450, 10450, 10450,  1443, 10450,
   10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10130,
   -1930, 10450, 10450, 10450, 10450, 10450,    18,  1445,   796, 10450,
    7314, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450, 10450,
   10450, 10450, 10450, 10450, 10450, 10450,  1852, -1930,    19,  1857,
   10450,  1858,  1859,   455, -1930,   528, 10450,  1451,   465,  1864,
      19, -1930, -1930, -1930,   349, -1930,    19,  1705,  1673, -1930,
    1867,  1868,  1601,  1871,  1477,  1478,  1604,  1610,  1609,  1884,
    1615, -1930, -1930,  1886,  1612,  1850,  1851, -1930,  1893,  1894,
    1899,  1900,  1901,  1903, -1930,  1911,  1929,  1931,  1932, 13513,
    1933,  1692,  1935,  1936,  1937,  1938,  1939,  1562,  1940,    33,
     100,  1946, -1930, -1930,  1727,  1760, -1930,   135,  1545,  1566,
   -1930, -1930,  1567,  1567,  1567,  1567,  1567, -1930,  1567, -1930,
    1568,  1567,  1567,  1567,  1915, -1930,  1915, -1930,  1567,  1567,
    1567,  1570,  1915,  1567,  1915, -1930, -1930, -1930, -1930, -1930,
    1571,  1572,  1573, -1930,   703,  1985, 13513,  1986,  1987,  1988,
    1602,  1603, -1930,  -180,  2017,  2018,  1825,  1608, -1930, -1930,
   -1930,  1827,  1974,  1630,  2024,  1831,  1748,  2028,   114,  1618,
   -1930,  2030,  1758,  2031,   -99, -1930,   470, -1930, -1930,    59,
   -1930, 10450,  1843,    19,  -175,   641, -1930, -1930, -1930, -1930,
   -1930,  1647, -1930,   491, -1930, -1930,  2041, -1930,  2042,  2048,
    2068,  -105, -1930,  2048,   -48, -1930,  1120, -1930,  1657, 14005,
   13494,   444, -1930, 10450, 10450, -1930,  1658, -1930, 10450,  1833,
    1093, -1930, -1930, -1930, 10199,  8490,  2688,  3012,  3336, 10266,
   10482, 10536, 10567, 10626, 10672, -1930,  3660,  3984,  4308,  4632,
   10847,  4956,  5280,  5604, 10880, 10907, 10934,  1158,  5928, 10965,
    6251, -1930, 10992, 11024, 11052, -1930, 13897,  6632,  6659,  6714,
    6940, 10169,  1660, 11079, 11106, 11133, 11160, 11187, 11214, 11245,
   11278,  6994,  7031,  7058, -1930, -1930, -1930, -1930, -1930, 11305,
    7138,  1726,  1729,  1730,  1185,  1242,  1663,  1733,  1734,  7401,
   11332, 11363, 11390, 11422, 11450, 11477, 11504, 11531,  7430,  7457,
    7490,  7537,  7724,  7778,  7808,  7838,  1273, 11558, 11585, 11612,
    7914, -1930,  1306, 11643,  8123, -1930,  8185,  8215,  8246,  8274,
   11676, 11703, 11730,  8321,  8522,  8562, -1930,  6758,  1466,  2034,
    2360,  2360, -1930,    52, -1930, -1930,  1840, 10450, 10450,  1668,
   10450, 13939,  1671,  1674,  1677, 10450,  2293,   899,   899,  1513,
    1490,   977,   874,   874,   790,   790,   790,   790,   795,  1774,
    1774,   651, -1930,  -175,  1951, -1930, -1930,  1684,   528,  1925,
    1926,  1928, -1930,  1833,   455, 11761, -1930, -1930,    40,   -96,
       4,  1673,  1673,  1930,  1905,    19, -1930,  1941, -1930, -1930,
    1696,  1841,  2109,  2110,  1704,  1702,  1713,  1712,  2121,   804,
      81,  1943,  1947,   -13, 13513, 13513,  2123, -1930,  1906, -1930,
   -1930, -1930,  1907,  2094, 13513,  2124,  1887,  1888, -1930, -1930,
   -1930, -1930, -1930, -1930,  2129, -1930,  2130, -1930,  2133,  2134,
   -1930,    94,    94,  2138, -1930, -1930, -1930, -1930, -1930, -1930,
    2135, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
    2135, -1930, -1930, -1930,  2141,  2142,  2143,  1945,  1738,  1735,
   10450,  1744,  2094, 13513, 13513, 13513,  1949,    94,  -165,   187,
    -151,  1959,  2160,   562,  2163,   664,  2032,  2167,  -102,  2168,
    2171,  1978,  1779,  1493,  1763, -1930, -1930, -1930, -1930,  2084,
    2176,   559, -1930,  1535, -1930,  2177, -1930, -1930, -1930,   463,
   14005,  2118,  2003,  -175, -1930, -1930,  2180, -1930, -1930, -1930,
    2164,  -130, -1930,   475,  1771, -1930,  -130,  1771,  1989, 10450,
   -1930, 10450, -1930, 10450, 13782, 13521,  2095,  8622,  1773,  1776,
   10450, 10450, -1930, 10450, 13701,  2033,  2033, 10450, -1930, -1930,
   -1930, -1930, -1930, -1930, 10450, 10450, 10450, 10450, -1930, 10450,
   10450, 10450, -1930, -1930, -1930, -1930, 10450, 10450, -1930, 10450,
   -1930, -1930, -1930, 13513, 13513, 10450, 10450, 10450,  2185, -1930,
    1845,  1846,  1853,  1856,  1861,  1862, -1930, -1930, -1930, 10450,
   10450, 10450, -1930, 10450,  1786,  1787,  1800,  1869,  2188,  1874,
    2197,  1876,  1807,  1815, 10450, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, 10450, 10450, 10450, 10450, 10450, 10450, 10450,
   10450, -1930, 10450, -1930, -1930, -1930, 10450, -1930, 10450, -1930,
   10450, 10450, 10450, 10450, 10450, -1930, -1930, -1930, 10450, 10450,
   10450, -1930, -1930, 10450,  1833,  2360,  2360,  1994, 13972, 10450,
   -1930, 10450, 10450,  1833, -1930,  2096,    19,  2233,   455,  2098,
    2098,  2098,  1830, -1930,   556, 10450,  2237,  2239,  1843, -1930,
   -1930,    19, 10450,   -64,    19,    60,  1847,  1855,  2080,  2240,
      62,  2242,  2259,  2085, -1930, -1930, -1930,  2262,  2262,  1860,
    2102,  2103,  1863,  2094,  2094, 13513, -1930, -1930,    74,  2094,
   -1930,  2266,  2268, -1930, -1930,  2051,  2053,  1865,  1875,   478,
    -143,   814,  -143,  -143, -1930,   483,  -143,  -143,  -143,   814,
     814,  -143,  -143,  -143,   498,   814,  -143,   814,  1879,  1880,
    1881,  2198, -1930, 10450, 14005,   187,  2094,  2094,  2094,   459,
   -1930,  1877,  1883, -1930,  1885,  1889,  1891,  1914,   500, -1930,
    2010,   187,  2276,   233,  2222, -1930,  2193, -1930, -1930,    61,
    2062,  1974,  2066,   187,   241,  2139,  2332,  2317, -1930,   512,
    1758,  2335,   -98,  2336,  1927,  2181,   569,  1934,  1950,  2182,
    1955,   526, -1930,  2344,  1833, -1930, -1930,  2346,    15,  2349,
    2352,  2355,  1956,   551, -1930,  1944, -1930,   626, 10450,  2151,
   -1930, -1930,  8882,  2207,  2374, -1930, -1930,  2392,  9274,  -126,
   -1930,  -126, -1930, -1930, 14005, 13820, -1930, 10450,  1990, 10450,
   -1930, -1930, 10076,  1353, 11788, 10450, 10450,  1984,  1991, 11820,
   11848, 11875,  8698,  8900, 11902, 11929, 11956, 11983, 12010, 12041,
     -10,    57, 12074, 12101,  8978,  1992,  1995,  1996,  1997,  1998,
    2012,  2014,  1380,  9021, 12128, 12159, -1930, -1930, -1930,  2015,
     532,  2016,   534,  2020, -1930, -1930, 12186,  9058,  9105,  9299,
   12218, 12246,  9346,  9385,  1408,  1441,  1897, 12273, 12300, 12327,
   12354, 12381, 12408,  9420,  9482,  9698,  1993,  2009, 10450,  1833,
   10450,  1582,  1833, 14005,  1833,  2021,  1833,  2022,  2023,  2337,
    2253,  -175, -1930, -1930,  2277,  2025,  2035,  2036, -1930,  2399,
   14005,  2383,    63,  2003, -1930, 14005, 10450,  2037, -1930, -1930,
     -64, -1930, -1930,  2038,    60,  2401,  2441,  2443, -1930, -1930,
    2040,  2444, -1930,  2447, -1930,  2043,  -128, 10450,  2039,  2044,
    2454,    74,    74,  2094,  2267,  2458,  2049,  2050,  2054,  2410,
    2464,  2056,  2467,   168, -1930, -1930, -1930,  2308,  2309, -1930,
      74, -1930, -1930, -1930, -1930,  2269,   702, -1930,  2474, -1930,
   -1930,  2246,  2476, -1930,  2483, -1930, -1930, -1930, -1930,  2076,
   12439,   536, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930,   714,   187,  2491,  2492,  2493,  2495,  2496, -1930,
    2497,  2087,   539,  2088,   -51,   187, -1930,  1624,  2390, -1930,
   -1930, -1930, -1930, -1930,  2507,  2247,  2032,  2100,   544,  2244,
     187,  2512,   278,  2513,  2498,  2499,   546, -1930, -1930,  2380,
     559, -1930,    -3, 10450,  2111,  2112,  2113,  2521,  2521,  2116,
    2454,     8,   559, 13513, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930,   551,   548,   551,   -18,   474,  2119, -1930,  1942,   614,
   -1930, -1930, 14005,  2278,  2518, -1930, -1930, 14005,   558, -1930,
    2348, -1930, -1930, 14005,  2539, -1930, 10450, -1930, -1930, 10450,
   -1930, 12472, 13467, -1930, -1930, -1930, -1930, -1930, 10450, 10450,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   10450, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, 10450,
   10450, -1930, -1930,  2199,  2199,  2199, -1930,  2203,   966, -1930,
    2208,   971, -1930,  2199,  2199, -1930, 10450, 10450, 10450, -1930,
   -1930, 10450, 10450, -1930, 10450, -1930, 10450, -1930, 10450, -1930,
   -1930, -1930, -1930, -1930, -1930, 10450, 10450, 10450, -1930, -1930,
    2144,  2145,  1582,  2146,  2147, -1930,  2149, -1930, -1930, 10450,
   10450,  1843,  2096, -1930,  2545,  2545,  2545,  2152, 10450, 10450,
    2566,  2151, 14005,  2521, -1930,    60,  2166, -1930, -1930,  2564,
      62,  2571, -1930,  2581,  2580, 12499,  2583,  2584, -1930,   574,
   -1930, -1930,    74, -1930, -1930,  2585, 10450,  2586,  2537,    -4,
   10450, -1930, -1930, -1930, -1930, -1930, -1930,  2175,  2179,  2183,
   10450, -1930, -1930, -1930,   459,  2535, -1930,  2184,  2594, -1930,
     814, -1930,   814,   814, 10450, -1930, -1930,  2540, -1930,   581,
    2598,  2187,  2189,  2191,  2202, -1930,   187, -1930,   187,  2200,
    2201,   583,  2091, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930,  2386, -1930,  2204,  2205,  2350,  2062,
     187, -1930,  2209,   604,  2215,  2353,   187,  2216,  2631,  2633,
   -1930,   512,  2367,   606,  2225,  2477,  2478,  2226, 12526,  2583,
    2521,  2521, -1930,   608,   610,  2584,   615,    23, -1930, -1930,
    2094,   617, -1930, -1930, -1930, -1930,  2640, -1930, -1930,   626,
   10450, 10450, -1930, -1930,  2228, -1930,  9666, -1930, 10058,  2231,
    2558,  2151,  2232, 12557, 12584, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, 12616, 12644, 12671,  2199,  2199,
    2199,  2199,  2199,  2199,  1982, 12698,  2587,  2450,  2450,  2450,
    2199,  2235,  2236,  2238,  2199,  2243,  2245,  2248,  2199,  2450,
    2450, 12725, 12752, 12779, 12806, 12837,  9762, 12870, 12897,  9792,
    9842,  9889, -1930, -1930, -1930, -1930, -1930, 13628,   297, 14005,
    2003,  2253, -1930,   619,   621,   633,  2649, 14005, 14005,  2638,
   -1930,   645,  2249,    60,  2505,  2254,  2508, -1930,  2616,  2643,
   -1930,   655, -1930,   657, -1930,  2659, -1930,   663, 12924,   667,
    2257,  2260,  2514, -1930, 12955,  2264,  2265,  2272, 12982,   731,
   -1930,  2415, -1930, -1930, 13014, -1930,  2739, -1930, -1930,  2273,
   -1930, -1930, -1930,  2679,   669,   671,   187,  2680, -1930, -1930,
    3063,  3387,  3711,  4035,  4359,  4683,  2624,  2690, 10450,  2617,
   -1930,  2247,   673,   187, -1930,   187,  2280,   676, -1930, -1930,
   -1930, -1930,  2561,     8, 10450,  2291,  2311,  2454, -1930,   680,
     683,   685, -1930,  2720, -1930,   750, -1930,   515,  2312,  2724,
    2665,  2666, -1930,   708, -1930,   474, -1930, 14005, 14005,  2727,
    2728, -1930, 14005, -1930, 14005,  9274,  2318, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930,  2450,  2450,  2450,  2450,  2450,  2450,
   -1930, 10450, -1930,  2730,  2671,  2320,  2321,  2333,  2450, -1930,
    2400,  2402,  2450, -1930,  2403,  2404,  2450,  2343,  2345, -1930,
   -1930, -1930, -1930, -1930, 10450, -1930, -1930,  2756,  2757,  2758,
   -1930,  2550, 10450, -1930,  2630,  1843, -1930,  2768, -1930, -1930,
    2357, 10450, -1930,    60,  2358,  2753,    62,  2755, -1930,  2509,
    2569,  2774, -1930,  2777, -1930, -1930,  2776,   920, -1930,  2778,
   10450, 10450, -1930, -1930, -1930, -1930, -1930, -1930,  2722, -1930,
    5007, -1930, -1930,  5331, -1930,  2510,  2369, -1930, -1930,   809,
    2598, -1930,  2708,  2655,  2632,  2625,  2516, -1930, -1930, 13042,
    2381,  2350, -1930,   815,   819,   187, -1930,  2382,    50, -1930,
   13069,  2583,  2584,   821,  2590, -1930, -1930, -1930, -1930, -1930,
    2789,  2800,    70,   325,  2600, -1930, -1930,  2786,  2394,   823,
    2808,  2713,  2405,  2407,  2408,  2409,  2411,  2417, 13096, -1930,
    2418,  2815, -1930, -1930, -1930,  2421,  2199,  2423,  2424,  2426,
    2199,  2425,  2428,  2429, -1930, -1930, 13123,  2433,  2427,  2434,
   -1930, 13628,   -82,  2660,  2003, -1930, -1930, 14005,  2435,    60,
    2821,   825,  2845, -1930,  2851, -1930, -1930,  2445, -1930, -1930,
    2452, 13150, 13177, -1930,  5655, -1930, -1930,  2448, -1930, -1930,
   -1930,  2457, -1930, -1930, -1930, -1930, -1930,  5979, -1930, 10450,
   -1930, -1930, -1930,   830,  2854, -1930,   832,   864, -1930,  2866,
   -1930,  2459,  2874,  2879,  2469,  2470,  2471, 10450,  2883, -1930,
     866,    -8, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
    2885,   474,  2484, -1930,  2450, -1930, -1930, -1930,  2450, -1930,
   -1930, -1930, -1930, -1930,  2886,  2889, -1930,  2675,  2676,  2521,
   -1930, -1930,    60,  2494, -1930, -1930,    62, -1930,  2500, -1930,
   -1930,  1253, -1930,  6303, -1930,  2905,  2510, -1930, 13204, -1930,
    2502,  2702, -1930,   900, -1930, -1930, -1930,  2908,  2909,  2910,
   14005,  2895, -1930,  2916, -1930, -1930, -1930, -1930,  2918,  2511,
    2199,  2199,  2515,  2199,  2199,  2523,  2524,  2742,  2743,  2526,
    2527,    60,  2529,  2921, -1930, -1930, -1930,  2907,  1030, -1930,
   -1930, -1930,  2683,  2922,  2942,  2921,  2532,  2536,  2538, 10450,
   -1930,  2715,   474, -1930,  2450,  2450, -1930,  2450,  2450, -1930,
   -1930, -1930, -1930,    60,  2544, -1930, -1930,  1032,  2956, -1930,
    2905,  2548,  1036,  2549,  1090,  2551,  2735, -1930, 14005,  2728,
   -1930,  2552,  2553,  2554,  2555,  2556,    60, -1930,  2963, -1930,
   -1930,  2966,  2970,  2921,  2921, -1930,  2746,  2971,  2394, -1930,
   -1930, -1930, -1930,    60,  2559,    88, -1930,  2562,  2567,  1092,
    1095,   111,  2979,  1112, -1930, -1930,  2568,    60,    -1,  2832,
     -29,   -23, -1930,  2921, -1930, -1930,  2888,  2716, -1930,  2746,
      60,  2570, -1930, -1930,    56, -1930, -1930, -1930,   320,   538,
    1114,   111,   111,  2819, -1930,  2574,    60, -1930, -1930, -1930,
   -1930, -1930,   411, -1930, -1930, -1930,   415, -1930,  2744, -1930,
    2588, -1930, -1930, -1930, -1930,   111,    72, -1930,  2798,  2799,
    2807,  2811,  2999,  3001, -1930, -1930
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1930,  2877,  -115, -1930, -1930, -1930, -1930, -1022,  1649, -1930,
    1819, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,  1961,  2560,
   -1930,  -272,  -729,  1315, -1930, -1583, -1930,   987, -1504, -1930,
   -1875, -1930, -1207, -1930,  1060, -1450, -1930, -1930, -1548, -1930,
   -1930,  2431,  -321,  -334,  2449,  -593, -1930, -1930,  -344, -1930,
   -1930,   600, -1930, -1930, -1930,  1569,  -887,   354,  -141, -1930,
   -1930, -1930,  2891,  2316, -1930,  2310, -1930,   816,   638, -1930,
     565, -1268, -1930, -1930, -1930, -1930, -1930, -1930,  2019, -1930,
   -1930, -1456, -1930, -1930, -1930,  2046,  1747, -1930,  1127, -1930,
   -1930, -1711, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930,
   -1930,  2436, -1930,  2122,  1848, -1930,  1777,  1503,  1179, -1930,
     973,   826, -1930, -1930, -1428, -1930, -1020, -1930, -1930, -1930,
   -1930, -1930,   585,   724,  2975,  2645, -1930,  2027, -1930,   942,
    2342, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1930, -1288,
    1495, -1930, -1930, -1930, -1930,   436, -1930, -1930, -1930, -1930,
     984, -1930,   547, -1930,  1529,  1518, -1924, -1907, -1929, -1778,
   -1562, -1930, -1223,   175,   101,  -123,  -976,  -481,  2101, -1308,
   -1930, -1930, -1930,  2911, -1930,  -386, -1930,  2089,  1348, -1529,
   -1930, -1930, -1930, -1930,  2453, -1930, -1930, -1930, -1930, -1930,
    2696, -1930, -1930, -1654, -1930
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -793
static const yytype_int16 yytable[] =
{
     330,  1453,   611,  1711,  1571,  1054,   598,  1521,  1716,  2045,
    1481,  1482,  1958,   934,   707,   593,  1500,  1782,  1946,  1259,
    1260,  2125,   336,  1542,   882,  1265,  1008,  1267,   712,   588,
    1944,  1954,  2119,   421,   124,  1558,   883,  1203,   973,   379,
     380,   381,   382,   383,   384,  1592,  1350,  1353,  1352,   348,
     111,   740,   589,  1730,  1731,  1037,  1037,  2040,  1181,  -792,
    1205,   560,   749,  1046,  1461,  1229,  1468,   336,   597,  1343,
     158,  2127,  1753,  1343,  2061,  1934,  2588,   375,   442,   443,
     601,    67,  2434,  1709,  2558,   599,  1018,   734,   753,   448,
     449,   450,  1484,  1008,  1955,   452,  2552,   696,  2127,   731,
     632,  1549,  1586,  1281,   727,   975,  2538,   119,  2555,   586,
     697,    72,   195,  1485,    68,  1290,  1509,  1038,  1038,   144,
     389,  1230,  1486,  2166,  2167,  1487,   630,  1488,   634,  2546,
    1489,  1935,   647,  1456,  2177,  2178,    16,  1510,   379,   380,
     381,   382,   383,   384,   641,  1490,   406,   164,  2397,  1724,
    1998,  1999,  1491,  1492,  2567,   762,   763,   602,   963,  2009,
    2010,  1426,  1037,   976,  1302,  2041,  1064,  -335,  1550,   166,
     169,  2556,  1742,  1743,  1744,  1745,  2398,  2362,   731,    90,
     171,   603,    71,   390,  1195,  2539,   337,  1493,  1231,   625,
    1283,   733,   338,    16,   604,  2128,   635,  2062,  1936,   120,
    1208,   145,  1457,   159,  1494,  2568,  2557,   631,  2539,   636,
     104,   884,   642,   728,   559,  1012,   105,  1779,  1551,   605,
    2129,   160,   196,  1067,  1038,   643,  1282,  2071,   407,   385,
     376,   337,   108,    69,  1019,  2559,   750,   338,  1495,  2076,
    1746,   600,   606,   161,   698,  1182,   633,  2129,  1232,  -792,
    2435,  2130,  1039,  1462,   913,  1469,  2589,  2063,  1937,  2042,
    1732,   600,   750,  1291,  1587,  1769,    70,  1496,  2553,   112,
     162,  2540,   146,  1948,   924,  1497,  2090,  1781,  2130,  2282,
    2283,  2284,  2285,  2286,  2287,  2541,  1344,  2091,  1723,   699,
    1609,   349,  1923,  2295,  2540,  1047,  1048,  2299,   648,   408,
     165,  2303,  1552,  1951,  2056,    16,   764,  2092,  2541,   590,
     974,  1443,  1303,   422,  1040,  1041,  1570,  2147,  2363,  1553,
    1207,  2093,   167,   170,  1340,   125,   126,   127,   385,  1610,
    2094,  1611,   759,   172,   128,  1498,   760,   885,  2357,   626,
    1780,   422,  1213,   770,   774,   776,   777,   778,   779,   780,
     781,   782,   783,   784,  2356,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
    2095,   802,   803,   804,  2131,   806,   807,   808,   809,   810,
     811,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,  2120,  2121,  2569,  1956,   174,   829,   830,  1053,
     339,  2131,   834,   835,   176,  1636,  1690,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,   854,   855,   856,   857,   858,   859,   860,   713,
     862,   863,   864,   340,   866,   867,   868,   869,   870,   871,
     872,   873,   874,   875,  2190,   339,   877,   878,   879,   880,
     881,   386,   741,  1206,   891,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   592,  1637,  1233,  1234,   330,  1710,   708,   340,  1065,
     639,   925,  1068,  1239,  2154,  2155,  2156,  2157,  2158,  2159,
     649,   650,   651,   652,  2030,  2321,  2168,  1079,    73,  1544,
    2172,  1747,  1748,  1749,  2176,   362,   178,  1559,  2084,  2439,
    2085,   637,  2570,  2442,  1284,  1285,  1286,  1287,   150,   367,
    2269,  1522,   153,  1954,  2581,  1523,   931,   709,  2583,  2364,
    2571,   560,  1276,  1277,  1278,  2270,  2494,  1760,   397,  1762,
    1763,  2230,   109,   410,  1925,   412,  2233,   358,   359,   175,
    1326,   365,  2275,   434,   116,  2263,   368,   177,   436,  -329,
    2572,   640,  1327,   715,   932,   429,   193,   360,  1072,  1073,
    -367,   366,  -560,  1524,  2191,   129,  1525,   194,   731,   586,
    2194,   369,  1750,    74,  2529,  2530,  1955,  2204,   919,   370,
      75,  1526,   414,  2365,   130,  1247,  1248,  1198,  1328,  2501,
    2502,   371,  2503,  2504,  2582,   401,  1329,   609,  2584,   920,
     106,  1527,  2573,  1294,  2560,  -560,  1050,  1962,  1454,  1528,
     654,  1460,  1295,  -560,   137,   402,    76,    77,   710,  1594,
    1313,  1595,  1380,  1381,   132,   107,   136,  1314,  1326,   133,
     655,   363,  1963,    78,    92,  -560,   138,  1545,  1074,  1075,
    1327,  1202,  2102,  1077,   142,  1560,  1330,   638,  2107,   179,
    1084,   561,   562,   563,   564,   565,   566,   567,   372,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,  1328,   585,    93,   373,
      79,   398,  1926,  1315,  1329,  2452,   411,  1316,   413,  1324,
    2334,   430,   134,   361,    94,  1331,   435,    80,  1529,    81,
    1530,   437,  1702,  2192,  1317,    82,   716,   417,  2347,   764,
    -367,  1007,   921,  1318,  1575,   135,  1484,  2133,  2396,  1531,
    2574,   141,   628,  1576,    83,    84,   139,  2531,   110,  1008,
    1332,   143,   117,   147,  1330,   629,   182,  2318,  2575,    85,
     374,    95,   182,  1755,  1483,   148,  1486,  -564,   149,  1487,
    1319,  1488,  1756,  -561,  1489,  1767,  2561,  2562,    96,   151,
      97,   152,  1185,  1186,  1768,  1188,    98,   996,  2576,  1490,
     559,  1009,  2228,  1001,   154,  1003,  1491,  1492,   155,   183,
     168,  2229,  2384,  1331,   173,   183,  2388,   184,  2437,  2585,
    -564,    99,   185,   334,  2413,  2259,  -561,   189,  -564,   887,
     888,   188,   889,   156,  -561,   890,  1010,   180,  2239,   186,
    1320,  1493,   582,   583,   584,   335,   585,   190,   583,   584,
    -564,   585,   121,   122,   123,  2253,  -561,  2254,   985,   986,
     987,   988,   181,   989,   445,   446,   991,   992,   993,  1224,
    1225,  2449,   191,   997,   998,   999,   656,   657,  1002,    86,
    1449,   197,  1441,  2403,  2401,  1252,  1253,   355,  1256,  1257,
    1258,   333,  1495,   347,  1261,  1262,  1263,  1333,   350,  1266,
     927,   600,   351,    87,   352,  1044,  1045,  1297,  1298,  2500,
    1346,  1347,    88,  1507,  1508,  1274,  1511,  1512,  1513,  1514,
     353,  1496,   578,   579,   580,   581,   582,   583,   584,  1497,
     585,   354,  1427,  1515,  1514,  1539,  1540,  1564,  1565,   356,
     100,  1438,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   378,   585,  2474,  2475,   392,  2477,
    2478,  1581,  1582,   391,   101,   393,  2450,  1657,  1658,  1660,
    1661,  1766,  1540,   102,  1777,  1540,  1354,   394,  1355,  1921,
    1540,  1930,  1931,  1952,  1593,  1362,  1363,   395,  1364,  1498,
    2002,  2003,  1369,  1967,  1968,  2006,  2007,  2328,  2329,  1370,
    1371,  1372,  1373,   396,  1374,  1375,  1376,  2353,  2314,  2054,
    2055,  1377,  1378,   399,  1379,  2484,  2077,  1540,  2088,  1540,
    1382,  1383,  1384,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   400,   585,  1392,  1393,  1394,   404,  1395,  2104,
    1540,  2113,  1582,  2122,  2123,  2124,  2123,  2505,   405,  1406,
    2126,  2055,  2134,  1593,  2196,  2197,  2198,  2197,  1407,  1408,
    1409,  1410,  1411,  1412,  1413,  1414,   409,  1415,  2199,  2197,
    2524,  1416,  1584,  1417,   417,  1418,  1419,  1420,  1421,  1422,
    2202,  2123,   415,  1423,  1424,  1425,   419,  2536,  1194,   423,
    2210,  2211,  2212,  2213,  1431,   424,  1433,  1433,  2215,  2216,
     425,  2551,  2218,  2219,  2237,  1540,  2238,  1540,  2252,  1540,
    1450,  2256,  1540,   426,  2565,  2264,  2211,  1455,  2265,  2123,
    2266,  2123,  1950,   561,   562,   563,   564,   565,   566,   567,
    2580,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   428,   585,
     561,   562,   563,   564,   565,   566,   567,   427,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   438,   585,  1691,  1520,   432,
    1693,   433,  1694,   439,  1696,  2268,  2213,   440,   561,   562,
     563,   564,   565,   566,   567,   441,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   447,   585,   561,   562,   563,   564,   565,
     566,   567,   111,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     454,   585,   455,  1598,  2340,  1540,   456,  1602,   620,  1080,
    2351,  1540,   457,  1607,  2352,  1540,  2358,  2055,  2369,  1968,
    2405,  2406,  1613,   458,  1077,  2419,  1540,  2421,  2211,   459,
    1621,  1622,   561,   562,   563,   564,   565,   566,   567,   460,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   461,   585,  2422,
    2213,  2432,  2433,   561,   562,   563,   564,   565,   566,   567,
     462,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   591,   585,
    2454,  2455,   463,  2464,  2465,  1692,   561,   562,   563,   564,
     565,   566,   567,   464,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,  1712,   585,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,   465,
     585,   466,  1725,   561,   562,   563,   564,   565,   566,   567,
     467,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   468,   585,
     561,   562,   563,   564,   565,   566,   567,   469,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   470,   585,   471,   561,   562,
     563,   564,   565,   566,   567,   472,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   473,   585,  2489,  2490,  2507,  2508,  2512,
    2513,   561,   562,   563,   564,   565,   566,   567,  1938,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   474,   585,   563,   564,
     565,   566,   567,   475,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,  1973,   585,   476,  1974,  2515,  2508,  2544,  2508,  1081,
    2545,  2508,   477,  1985,  1986,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,  1987,   585,  2548,  2549,  2577,
    2508,  1209,  1210,   478,  1994,  1995,  1069,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   479,   585,
     480,  2011,  2012,  2013,  1446,  1447,  2014,  2015,   481,  2016,
     482,  2017,   483,  2018,  2034,  2035,   595,   484,   485,   486,
    2019,  2020,  2021,  1105,  1106,   487,   488,   489,   490,   491,
     492,   493,   494,   495,  2027,  2029,   609,   496,   497,   498,
     499,   500,   501,  2037,  2038,   502,   503,   504,   612,   613,
    1137,  1138,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   505,   585,   506,
     507,  2058,   508,   509,   510,  2064,   511,  1783,  1784,  1785,
    1786,  1787,  1788,   512,  1789,  2068,  1790,   513,   514,   515,
    1791,  1792,  1793,   516,  1794,   517,   518,   519,   520,  2074,
    1795,  1796,  1797,  1798,  1799,   521,   614,  1139,  1140,   522,
     523,   524,   525,   526,  1800,   527,   528,   615,   529,   530,
     531,   532,   533,   534,  1801,  1802,   535,   536,  1803,   537,
     538,   539,   540,  1804,  1805,  1806,  1807,  1808,  1161,  1162,
    1809,   541,  1810,  1811,  1812,   542,   543,  1813,  1814,   544,
    1815,  1816,  1817,   545,   546,   547,  1818,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   594,   596,
    1819,  1167,  1168,   616,   617,  1820,   618,   619,   621,   622,
    1821,  1822,  1823,   623,   624,   645,   644,  1824,  1825,   646,
    1826,  1827,  1828,  1829,   658,   659,  1830,   695,  1831,  1832,
    1833,  1834,   703,  1835,   704,  1836,  1837,   705,  1838,   706,
    1839,  1840,   714,  1841,  1842,  1843,  1844,   717,  1618,  1619,
     719,   724,  1845,   721,  1846,   725,  1847,  1848,   723,  1849,
    1850,  1851,  1852,  1853,  1854,   730,  1855,  1856,  1857,  1858,
    1859,   735,   736,   737,   738,  1648,  1649,   739,   742,   743,
     744,  1860,   745,  1861,   746,  1862,   747,   748,   752,   755,
     585,   765,   766,   767,  1863,   785,  1864,  1865,  1866,  1867,
    1868,  1869,  1870,  1673,  1674,  1871,  1872,   801,   805,   824,
     825,  1873,   826,  1874,  1875,  1876,   827,  1877,   828,  1878,
     831,  1879,  1880,  1881,  1882,  2137,  2138,   832,   833,   836,
     837,  2142,   838,  2144,   861,   912,  1675,  1676,   865,   886,
     914,   916,   918,  1883,  1884,  1885,   926,   928,   935,   936,
     938,   939,   940,  1886,   941,  1887,  1888,  1889,   944,   942,
     943,   945,  1890,   946,  1891,  1892,  1893,   947,   948,   362,
    1894,   949,   951,   952,  1895,  1896,   953,   954,  1897,  1898,
    1899,  1900,   955,   956,   957,  1901,   958,   561,   562,   563,
     564,   565,   566,   567,   959,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   960,   585,   961,   962,   964,   965,   966,   967,
     968,   971,   970,   969,   978,   972,  1902,  1903,  1904,  1905,
    1906,   977,   561,   562,   563,   564,   565,   566,   567,   981,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   979,   585,   994,
     982,   983,   990,  2249,  1000,  1004,  1005,  1006,  1011,  1013,
    1014,  1015,   561,   562,   563,   564,   565,   566,   567,  2260,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,  1016,   585,  1017,
    1020,  1021,  1022,  1023,  1024,  1025,  1027,  1028,  1029,  1030,
    1607,  1031,  1032,  1033,  1036,  1034,  1907,  1908,  1909,  1910,
    1911,  1051,  1912,  1056,  1058,  1059,  2288,   564,   565,   566,
     567,  1060,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,  2306,
     585,  1062,  1070,  1076,    16,  1120,  1134,  2311,  1141,  1135,
    1136,   -83,  1187,  1142,  1143,  1190,  2317,  1196,  1191,  1199,
    1200,  1192,  1201,  1211,  1783,  1784,  1785,  1786,  1787,  1788,
    1197,  1789,  1212,  1790,  1214,  2331,  2332,  1791,  1792,  1793,
    1215,  1794,  1216,  1217,  1218,  1219,  1220,  1795,  1796,  1797,
    1798,  1799,  1222,  1960,  1221,  1223,  1235,  1240,  1236,  1237,
    1008,  1800,  1241,  1242,  1243,  1244,  1245,  1246,  1271,  1254,
    1227,  1801,  1802,  1249,  1228,  1803,  1268,  1269,  1270,  1273,
    1804,  1805,  1806,  1807,  1808,  1272,  1292,  1809,  1275,  1810,
    1811,  1812,  1279,  1293,  1813,  1814,  1296,  1815,  1816,  1817,
    1301,  1304,  1299,  1818,  1305,  1306,  1307,  1309,  1311,  1312,
    1325,  1337,  1338,  1341,  1342,  1348,  1358,  1819,  1343,  1385,
    1360,  1361,  1820,  1400,  1366,  1386,  1387,  1821,  1822,  1823,
    1396,  1397,  1402,  1388,  1824,  1825,  1389,  1826,  1827,  1828,
    1829,  1390,  1391,  1830,  1398,  2089,  1832,  1833,  1834,  1399,
    1835,  1404,  1836,  1837,  1401,  1838,  1403,  1839,  1840,  1405,
    1841,  1842,  1843,  1844,  2418,   -85,  1442,  1439,  1444,  1845,
    1451,  1846,  1452,  1847,  1848,  1448,  1849,  1850,  1851,  1852,
    1853,  1854,  2430,  1855,  1856,  1857,  1858,  1859,  1465,  1466,
    1467,  1464,  1471,  1472,  1473,  1474,  1478,  1479,  1860,  1501,
    1861,  1502,  1862,  1503,  1477,  1504,  1519,  1480,  1541,  1543,
    1505,  1863,  1546,  1864,  1865,  1866,  1867,  1868,  1869,  1870,
    1506,  1533,  1871,  1872,  1516,  1517,  1518,  1534,  1873,  1535,
    1874,  1875,  1876,  1536,  1877,  1537,  1878,  1554,  1879,  1880,
    1881,  1882,  1677,  1678,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,  1538,   585,
    1883,  1884,  1885,  1548,  1557,  1562,  1561,  1563,  1569,  1572,
    1886,  1573,  1887,  1888,  1889,  1574,  1579,  1583,  1577,  1890,
    1585,  1891,  1892,  1893,  2498,  1588,  1589,  1894,  1961,  1590,
    1593,  1895,  1896,  1599,  1578,  1897,  1898,  1899,  1900,  1580,
    1591,  1603,  1901,  -793,  -793,  -793,  -793,  1604,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,  1605,   585,  2160,  2161,  1623,
    1699,  1700,  1707,  1708,  1614,  1717,  1624,  1641,  1688,  1642,
    1643,  1644,  1645,  1902,  1903,  1904,  1905,  1906,  1783,  1784,
    1785,  1786,  1787,  1788,  1689,  1789,  1646,  1790,  1647,  1656,
    1659,  1791,  1792,  1793,  1662,  1794,  1695,  1697,  1698,  1704,
    1703,  1795,  1796,  1797,  1798,  1799,  1718,  1719,  1721,  1705,
    1706,  1713,  1722,  1726,  1715,  1800,  1720,  1728,  1727,  1723,
    1733,  1734,  1738,  1735,  1736,  1801,  1802,  1739,  1737,  1803,
    1740,  1741,  1751,  1752,  1804,  1805,  1806,  1807,  1808,  1757,
    1759,  1809,  1754,  1810,  1811,  1812,  1758,  1761,  1813,  1814,
    1764,  1815,  1816,  1817,  1770,  1771,  1772,  1818,  1773,  1774,
    1775,  1776,  1778,  1907,  1908,  1909,  1910,  1911,  1914,  1912,
    1915,  1819,  1922,  1917,  1920,  1924,  1820,  1927,  1928,  1929,
    1932,  1821,  1822,  1823,  1942,  1939,  1940,  1941,  1824,  1825,
    1945,  1826,  1827,  1828,  1829,  1959,  1965,  1830,  1966,  2231,
    1832,  1833,  1834,  1972,  1835,  1970,  1836,  1837,  2032,  1838,
    1996,  1839,  1840,  2001,  1841,  1842,  1843,  1844,  2005,  2022,
    2023,  2024,  2025,  1845,  2026,  1846,  2036,  1847,  1848,  2039,
    1849,  1850,  1851,  1852,  1853,  1854,  2044,  1855,  1856,  1857,
    1858,  1859,  2043,  2046,  2047,  2048,  2050,  2052,  2060,  2065,
    2057,  2059,  1860,  2066,  1861,  2070,  1862,  2067,  2073,  2072,
    2075,  2078,  2080,  2096,  2081,  1863,  2082,  1864,  1865,  1866,
    1867,  1868,  1869,  1870,  2086,  2087,  1871,  1872,  2083,  2098,
    2097,  2106,  1873,  2103,  1874,  1875,  1876,  2099,  1877,  2105,
    1878,  2108,  1879,  1880,  1881,  1882,  2109,  2110,  2112,  2114,
    2117,  2115,  2116,  2135,  2139,  2145,  2146,  2148,  2164,  2169,
    2163,  2170,  2200,  2171,  1883,  1884,  1885,  2173,  2201,  2208,
    2174,  2209,  2214,  2175,  1886,  2203,  1887,  1888,  1889,  2205,
    2206,  2220,  2207,  1890,  2221,  1891,  1892,  1893,  2222,  2224,
    2225,  1894,  2236,  2240,  2247,  1895,  1896,  2226,  2235,  1897,
    1898,  1899,  1900,  2248,  2255,  2250,  1901,  2257,   561,   562,
     563,   564,   565,   566,   567,  2261,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,  2267,   585,  2262,  2271,  2272,  2273,  2274,
    2276,  2277,  2280,  2289,  2291,  2292,  2293,  1902,  1903,  1904,
    1905,  1906,  1783,  1784,  1785,  1786,  1787,  1788,  2294,  1789,
    2297,  1790,  2298,  2301,  2302,  1791,  1792,  1793,  2304,  1794,
    2305,  2307,  2308,  2309,  2310,  1795,  1796,  1797,  1798,  1799,
    2312,  2315,  2316,  2320,  2319,  2322,  2324,  2325,  2323,  1800,
    2326,  2327,  2333,  2330,  2339,  2342,  2343,  2337,  2344,  1801,
    1802,  2345,  2346,  1803,  2360,  2349,  2354,  2359,  1804,  1805,
    1806,  1807,  1808,  2361,  2366,  1809,  2367,  1810,  1811,  1812,
    2368,  2370,  1813,  1814,  2371,  1815,  1816,  1817,  2381,  2399,
    2373,  1818,  2374,  2375,  2376,  2404,  2377,  1907,  1908,  1909,
    1910,  1911,  2378,  1912,  2380,  1819,  2383,  2385,  2386,  2389,
    1820,  2387,  2390,  2394,  2391,  1821,  1822,  1823,  2393,  2407,
    2395,  2402,  1824,  1825,  2408,  1826,  1827,  1828,  1829,  2420,
    2409,  1830,  2415,  2234,  1832,  1833,  1834,  2410,  1835,  2423,
    1836,  1837,  2416,  1838,  2424,  1839,  1840,  2425,  1841,  1842,
    1843,  1844,  2426,  2427,  2428,  2429,  2431,  1845,  2436,  1846,
    2445,  1847,  1848,  2446,  1849,  1850,  1851,  1852,  1853,  1854,
    2438,  1855,  1856,  1857,  1858,  1859,  2447,  2448,  2457,  2463,
    2451,  2466,  2467,  2468,  2453,  2469,  1860,  2462,  1861,  2470,
    1862,  2472,  2481,  2482,  2486,  2492,  2473,  2488,  2491,  1863,
    2476,  1864,  1865,  1866,  1867,  1868,  1869,  1870,  2479,  2480,
    1871,  1872,  2123,  2483,  2485,  2493,  1873,  2495,  1874,  1875,
    1876,  2496,  1877,  2497,  1878,  2499,  1879,  1880,  1881,  1882,
    2506,  2509,  2511,  2514,  2517,  2516,  2526,  2519,  2520,  2521,
    2522,  2527,  2523,  2528,  2532,  2537,  2535,  2542,  1883,  1884,
    1885,  2543,  2547,  2554,  2550,  2552,  2566,  2563,  1886,  2579,
    1887,  1888,  1889,  2578,  2586,  2590,  2591,  1890,  2592,  1891,
    1892,  1893,  2593,  2587,  2594,  1894,  2595,   357,  1615,  1895,
    1896,  1437,   761,  1897,  1898,  1899,  1900,  2031,  2195,  2136,
    1901,   915,   561,   562,   563,   564,   565,   566,   567,  1714,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,  1368,   585,   930,
     420,  1055,  1308,  1057,  2460,  2510,  2341,  1568,  2111,  1919,
     950,  1902,  1903,  1904,  1905,  1906,  1783,  1784,  1785,  1786,
    1787,  1788,  1226,  1789,  2251,  1790,  1476,  2350,  1556,  1791,
    1792,  1793,  1310,  1794,  2518,   192,   754,  2279,  1953,  1795,
    1796,  1797,  1798,  1799,  1351,  1066,  2564,  2258,  2101,  1933,
    1949,  1264,  2069,  1800,  1085,   718,  1280,     0,   444,     0,
     980,     0,     0,  1801,  1802,     0,     0,  1803,     0,     0,
       0,     0,  1804,  1805,  1806,  1807,  1808,     0,     0,  1809,
       0,  1810,  1811,  1812,     0,     0,  1813,  1814,     0,  1815,
    1816,  1817,     0,     0,     0,  1818,     0,     0,     0,     0,
       0,  1907,  1908,  1909,  1910,  1911,     0,  1912,     0,  1819,
       0,     0,     0,     0,  1820,     0,     0,     0,     0,  1821,
    1822,  1823,     0,     0,     0,     0,  1824,  1825,     0,  1826,
    1827,  1828,  1829,     0,     0,  1830,     0,  2241,  1832,  1833,
    1834,     0,  1835,     0,  1836,  1837,     0,  1838,     0,  1839,
    1840,     0,  1841,  1842,  1843,  1844,     0,     0,     0,     0,
       0,  1845,     0,  1846,     0,  1847,  1848,     0,  1849,  1850,
    1851,  1852,  1853,  1854,     0,  1855,  1856,  1857,  1858,  1859,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1860,     0,  1861,     0,  1862,     0,     0,     0,     0,     0,
       0,     0,     0,  1863,     0,  1864,  1865,  1866,  1867,  1868,
    1869,  1870,     0,     0,  1871,  1872,     0,     0,     0,     0,
    1873,     0,  1874,  1875,  1876,     0,  1877,     0,  1878,     0,
    1879,  1880,  1881,  1882,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1883,  1884,  1885,     0,     0,     0,     0,     0,
       0,     0,  1886,     0,  1887,  1888,  1889,     0,     0,     0,
       0,  1890,     0,  1891,  1892,  1893,     0,     0,     0,  1894,
       0,     0,     0,  1895,  1896,     0,     0,  1897,  1898,  1899,
    1900,     0,     0,     0,  1901,     0,   561,   562,   563,   564,
     565,   566,   567,     0,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1902,  1903,  1904,  1905,  1906,
    1783,  1784,  1785,  1786,  1787,  1788,     0,  1789,     0,  1790,
       0,     0,     0,  1791,  1792,  1793,     0,  1794,     0,     0,
       0,     0,     0,  1795,  1796,  1797,  1798,  1799,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1800,  1086,     0,
       0,     0,     0,     0,     0,     0,     0,  1801,  1802,     0,
       0,  1803,     0,     0,     0,     0,  1804,  1805,  1806,  1807,
    1808,     0,     0,  1809,     0,  1810,  1811,  1812,     0,     0,
    1813,  1814,     0,  1815,  1816,  1817,     0,     0,     0,  1818,
       0,     0,     0,     0,     0,  1907,  1908,  1909,  1910,  1911,
       0,  1912,     0,  1819,     0,     0,     0,     0,  1820,     0,
       0,     0,     0,  1821,  1822,  1823,     0,     0,     0,     0,
    1824,  1825,     0,  1826,  1827,  1828,  1829,     0,     0,  1830,
       0,  2242,  1832,  1833,  1834,     0,  1835,     0,  1836,  1837,
       0,  1838,     0,  1839,  1840,     0,  1841,  1842,  1843,  1844,
       0,     0,     0,     0,     0,  1845,     0,  1846,     0,  1847,
    1848,     0,  1849,  1850,  1851,  1852,  1853,  1854,     0,  1855,
    1856,  1857,  1858,  1859,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1860,     0,  1861,     0,  1862,     0,
       0,     0,     0,     0,     0,     0,     0,  1863,     0,  1864,
    1865,  1866,  1867,  1868,  1869,  1870,     0,     0,  1871,  1872,
       0,     0,     0,     0,  1873,     0,  1874,  1875,  1876,     0,
    1877,     0,  1878,     0,  1879,  1880,  1881,  1882,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1883,  1884,  1885,     0,
       0,     0,     0,     0,     0,     0,  1886,     0,  1887,  1888,
    1889,     0,     0,     0,     0,  1890,     0,  1891,  1892,  1893,
       0,     0,     0,  1894,     0,     0,     0,  1895,  1896,     0,
       0,  1897,  1898,  1899,  1900,     0,     0,     0,  1901,     0,
     561,   562,   563,   564,   565,   566,   567,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1902,
    1903,  1904,  1905,  1906,  1783,  1784,  1785,  1786,  1787,  1788,
       0,  1789,     0,  1790,     0,     0,     0,  1791,  1792,  1793,
       0,  1794,     0,     0,     0,     0,     0,  1795,  1796,  1797,
    1798,  1799,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1800,  1087,     0,     0,     0,     0,     0,     0,     0,
       0,  1801,  1802,     0,     0,  1803,     0,     0,     0,     0,
    1804,  1805,  1806,  1807,  1808,     0,     0,  1809,     0,  1810,
    1811,  1812,     0,     0,  1813,  1814,     0,  1815,  1816,  1817,
       0,     0,     0,  1818,     0,     0,     0,     0,     0,  1907,
    1908,  1909,  1910,  1911,     0,  1912,     0,  1819,     0,     0,
       0,     0,  1820,     0,     0,     0,     0,  1821,  1822,  1823,
       0,     0,     0,     0,  1824,  1825,     0,  1826,  1827,  1828,
    1829,     0,     0,  1830,     0,  2243,  1832,  1833,  1834,     0,
    1835,     0,  1836,  1837,     0,  1838,     0,  1839,  1840,     0,
    1841,  1842,  1843,  1844,     0,     0,     0,     0,     0,  1845,
       0,  1846,     0,  1847,  1848,     0,  1849,  1850,  1851,  1852,
    1853,  1854,     0,  1855,  1856,  1857,  1858,  1859,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1860,     0,
    1861,     0,  1862,     0,     0,     0,     0,     0,     0,     0,
       0,  1863,     0,  1864,  1865,  1866,  1867,  1868,  1869,  1870,
       0,     0,  1871,  1872,     0,     0,     0,     0,  1873,     0,
    1874,  1875,  1876,     0,  1877,     0,  1878,     0,  1879,  1880,
    1881,  1882,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1883,  1884,  1885,     0,     0,     0,     0,     0,     0,     0,
    1886,     0,  1887,  1888,  1889,     0,     0,     0,     0,  1890,
       0,  1891,  1892,  1893,     0,     0,     0,  1894,     0,     0,
       0,  1895,  1896,     0,     0,  1897,  1898,  1899,  1900,     0,
       0,     0,  1901,     0,   561,   562,   563,   564,   565,   566,
     567,     0,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1902,  1903,  1904,  1905,  1906,  1783,  1784,
    1785,  1786,  1787,  1788,     0,  1789,     0,  1790,     0,     0,
       0,  1791,  1792,  1793,     0,  1794,     0,     0,     0,     0,
       0,  1795,  1796,  1797,  1798,  1799,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1800,  1094,     0,     0,     0,
       0,     0,     0,     0,     0,  1801,  1802,     0,     0,  1803,
       0,     0,     0,     0,  1804,  1805,  1806,  1807,  1808,     0,
       0,  1809,     0,  1810,  1811,  1812,     0,     0,  1813,  1814,
       0,  1815,  1816,  1817,     0,     0,     0,  1818,     0,     0,
       0,     0,     0,  1907,  1908,  1909,  1910,  1911,     0,  1912,
       0,  1819,     0,     0,     0,     0,  1820,     0,     0,     0,
       0,  1821,  1822,  1823,     0,     0,     0,     0,  1824,  1825,
       0,  1826,  1827,  1828,  1829,     0,     0,  1830,     0,  2244,
    1832,  1833,  1834,     0,  1835,     0,  1836,  1837,     0,  1838,
       0,  1839,  1840,     0,  1841,  1842,  1843,  1844,     0,     0,
       0,     0,     0,  1845,     0,  1846,     0,  1847,  1848,     0,
    1849,  1850,  1851,  1852,  1853,  1854,     0,  1855,  1856,  1857,
    1858,  1859,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1860,     0,  1861,     0,  1862,     0,     0,     0,
       0,     0,     0,     0,     0,  1863,     0,  1864,  1865,  1866,
    1867,  1868,  1869,  1870,     0,     0,  1871,  1872,     0,     0,
       0,     0,  1873,     0,  1874,  1875,  1876,     0,  1877,     0,
    1878,     0,  1879,  1880,  1881,  1882,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1883,  1884,  1885,     0,     0,     0,
       0,     0,     0,     0,  1886,     0,  1887,  1888,  1889,     0,
       0,     0,     0,  1890,     0,  1891,  1892,  1893,     0,     0,
       0,  1894,     0,     0,     0,  1895,  1896,     0,     0,  1897,
    1898,  1899,  1900,     0,     0,     0,  1901,     0,   561,   562,
     563,   564,   565,   566,   567,     0,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1902,  1903,  1904,
    1905,  1906,  1783,  1784,  1785,  1786,  1787,  1788,     0,  1789,
       0,  1790,     0,     0,     0,  1791,  1792,  1793,     0,  1794,
       0,     0,     0,     0,     0,  1795,  1796,  1797,  1798,  1799,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1800,
    1095,     0,     0,     0,     0,     0,     0,     0,     0,  1801,
    1802,     0,     0,  1803,     0,     0,     0,     0,  1804,  1805,
    1806,  1807,  1808,     0,     0,  1809,     0,  1810,  1811,  1812,
       0,     0,  1813,  1814,     0,  1815,  1816,  1817,     0,     0,
       0,  1818,     0,     0,     0,     0,     0,  1907,  1908,  1909,
    1910,  1911,     0,  1912,     0,  1819,     0,     0,     0,     0,
    1820,     0,     0,     0,     0,  1821,  1822,  1823,     0,     0,
       0,     0,  1824,  1825,     0,  1826,  1827,  1828,  1829,     0,
       0,  1830,     0,  2245,  1832,  1833,  1834,     0,  1835,     0,
    1836,  1837,     0,  1838,     0,  1839,  1840,     0,  1841,  1842,
    1843,  1844,     0,     0,     0,     0,     0,  1845,     0,  1846,
       0,  1847,  1848,     0,  1849,  1850,  1851,  1852,  1853,  1854,
       0,  1855,  1856,  1857,  1858,  1859,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1860,     0,  1861,     0,
    1862,     0,     0,     0,     0,     0,     0,     0,     0,  1863,
       0,  1864,  1865,  1866,  1867,  1868,  1869,  1870,     0,     0,
    1871,  1872,     0,     0,     0,     0,  1873,     0,  1874,  1875,
    1876,     0,  1877,     0,  1878,     0,  1879,  1880,  1881,  1882,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1883,  1884,
    1885,     0,     0,     0,     0,     0,     0,     0,  1886,     0,
    1887,  1888,  1889,     0,     0,     0,     0,  1890,     0,  1891,
    1892,  1893,     0,     0,     0,  1894,     0,     0,     0,  1895,
    1896,     0,     0,  1897,  1898,  1899,  1900,     0,     0,     0,
    1901,     0,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1902,  1903,  1904,  1905,  1906,  1783,  1784,  1785,  1786,
    1787,  1788,     0,  1789,     0,  1790,     0,     0,     0,  1791,
    1792,  1793,     0,  1794,     0,     0,     0,     0,     0,  1795,
    1796,  1797,  1798,  1799,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1800,  1096,     0,     0,     0,     0,     0,
       0,     0,     0,  1801,  1802,     0,     0,  1803,     0,     0,
       0,     0,  1804,  1805,  1806,  1807,  1808,     0,     0,  1809,
       0,  1810,  1811,  1812,     0,     0,  1813,  1814,     0,  1815,
    1816,  1817,     0,     0,     0,  1818,     0,     0,     0,     0,
       0,  1907,  1908,  1909,  1910,  1911,     0,  1912,     0,  1819,
       0,     0,     0,     0,  1820,     0,     0,     0,     0,  1821,
    1822,  1823,     0,     0,     0,     0,  1824,  1825,     0,  1826,
    1827,  1828,  1829,     0,     0,  1830,     0,  2246,  1832,  1833,
    1834,     0,  1835,     0,  1836,  1837,     0,  1838,     0,  1839,
    1840,     0,  1841,  1842,  1843,  1844,     0,     0,     0,     0,
       0,  1845,     0,  1846,     0,  1847,  1848,     0,  1849,  1850,
    1851,  1852,  1853,  1854,     0,  1855,  1856,  1857,  1858,  1859,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1860,     0,  1861,     0,  1862,     0,     0,     0,     0,     0,
       0,     0,     0,  1863,     0,  1864,  1865,  1866,  1867,  1868,
    1869,  1870,     0,     0,  1871,  1872,     0,     0,     0,     0,
    1873,     0,  1874,  1875,  1876,     0,  1877,     0,  1878,     0,
    1879,  1880,  1881,  1882,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1883,  1884,  1885,     0,     0,     0,     0,     0,
       0,     0,  1886,     0,  1887,  1888,  1889,     0,     0,     0,
       0,  1890,     0,  1891,  1892,  1893,     0,     0,     0,  1894,
       0,     0,     0,  1895,  1896,     0,     0,  1897,  1898,  1899,
    1900,     0,     0,     0,  1901,     0,   561,   562,   563,   564,
     565,   566,   567,     0,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1902,  1903,  1904,  1905,  1906,
    1783,  1784,  1785,  1786,  1787,  1788,     0,  1789,     0,  1790,
       0,     0,     0,  1791,  1792,  1793,     0,  1794,     0,     0,
       0,     0,     0,  1795,  1796,  1797,  1798,  1799,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1800,  1097,     0,
       0,     0,     0,     0,     0,     0,     0,  1801,  1802,     0,
       0,  1803,     0,     0,     0,     0,  1804,  1805,  1806,  1807,
    1808,     0,     0,  1809,     0,  1810,  1811,  1812,     0,     0,
    1813,  1814,     0,  1815,  1816,  1817,     0,     0,     0,  1818,
       0,     0,     0,     0,     0,  1907,  1908,  1909,  1910,  1911,
       0,  1912,     0,  1819,     0,     0,     0,     0,  1820,     0,
       0,     0,     0,  1821,  1822,  1823,     0,     0,     0,     0,
    1824,  1825,     0,  1826,  1827,  1828,  1829,     0,     0,  1830,
       0,  2335,  1832,  1833,  1834,     0,  1835,     0,  1836,  1837,
       0,  1838,     0,  1839,  1840,     0,  1841,  1842,  1843,  1844,
       0,     0,     0,     0,     0,  1845,     0,  1846,     0,  1847,
    1848,     0,  1849,  1850,  1851,  1852,  1853,  1854,     0,  1855,
    1856,  1857,  1858,  1859,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1860,     0,  1861,     0,  1862,     0,
       0,     0,     0,     0,     0,     0,     0,  1863,     0,  1864,
    1865,  1866,  1867,  1868,  1869,  1870,     0,     0,  1871,  1872,
       0,     0,     0,     0,  1873,     0,  1874,  1875,  1876,     0,
    1877,     0,  1878,     0,  1879,  1880,  1881,  1882,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1883,  1884,  1885,     0,
       0,     0,     0,     0,     0,     0,  1886,     0,  1887,  1888,
    1889,     0,     0,     0,     0,  1890,     0,  1891,  1892,  1893,
       0,     0,     0,  1894,     0,     0,     0,  1895,  1896,     0,
       0,  1897,  1898,  1899,  1900,     0,     0,     0,  1901,     0,
     561,   562,   563,   564,   565,   566,   567,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1902,
    1903,  1904,  1905,  1906,  1783,  1784,  1785,  1786,  1787,  1788,
       0,  1789,     0,  1790,     0,     0,     0,  1791,  1792,  1793,
       0,  1794,     0,     0,     0,     0,     0,  1795,  1796,  1797,
    1798,  1799,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1800,  1099,     0,     0,     0,     0,     0,     0,     0,
       0,  1801,  1802,     0,     0,  1803,     0,     0,     0,     0,
    1804,  1805,  1806,  1807,  1808,     0,     0,  1809,     0,  1810,
    1811,  1812,     0,     0,  1813,  1814,     0,  1815,  1816,  1817,
       0,     0,     0,  1818,     0,     0,     0,     0,     0,  1907,
    1908,  1909,  1910,  1911,     0,  1912,     0,  1819,     0,     0,
       0,     0,  1820,     0,     0,     0,     0,  1821,  1822,  1823,
       0,     0,     0,     0,  1824,  1825,     0,  1826,  1827,  1828,
    1829,     0,     0,  1830,     0,  2336,  1832,  1833,  1834,     0,
    1835,     0,  1836,  1837,     0,  1838,     0,  1839,  1840,     0,
    1841,  1842,  1843,  1844,     0,     0,     0,     0,     0,  1845,
       0,  1846,     0,  1847,  1848,     0,  1849,  1850,  1851,  1852,
    1853,  1854,     0,  1855,  1856,  1857,  1858,  1859,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1860,     0,
    1861,     0,  1862,     0,     0,     0,     0,     0,     0,     0,
       0,  1863,     0,  1864,  1865,  1866,  1867,  1868,  1869,  1870,
       0,     0,  1871,  1872,     0,     0,     0,     0,  1873,     0,
    1874,  1875,  1876,     0,  1877,     0,  1878,     0,  1879,  1880,
    1881,  1882,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1883,  1884,  1885,     0,     0,     0,     0,     0,     0,     0,
    1886,     0,  1887,  1888,  1889,     0,     0,     0,     0,  1890,
       0,  1891,  1892,  1893,     0,     0,     0,  1894,     0,     0,
       0,  1895,  1896,     0,     0,  1897,  1898,  1899,  1900,     0,
       0,     0,  1901,     0,   561,   562,   563,   564,   565,   566,
     567,     0,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1902,  1903,  1904,  1905,  1906,  1783,  1784,
    1785,  1786,  1787,  1788,     0,  1789,     0,  1790,     0,     0,
       0,  1791,  1792,  1793,     0,  1794,     0,     0,     0,     0,
       0,  1795,  1796,  1797,  1798,  1799,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1800,  1100,     0,     0,     0,
       0,     0,     0,     0,     0,  1801,  1802,     0,     0,  1803,
       0,     0,     0,     0,  1804,  1805,  1806,  1807,  1808,     0,
       0,  1809,     0,  1810,  1811,  1812,     0,     0,  1813,  1814,
       0,  1815,  1816,  1817,     0,     0,     0,  1818,     0,     0,
       0,     0,     0,  1907,  1908,  1909,  1910,  1911,     0,  1912,
       0,  1819,     0,     0,     0,     0,  1820,     0,     0,     0,
       0,  1821,  1822,  1823,     0,     0,     0,     0,  1824,  1825,
       0,  1826,  1827,  1828,  1829,     0,     0,  1830,     0,  2414,
    1832,  1833,  1834,     0,  1835,     0,  1836,  1837,     0,  1838,
       0,  1839,  1840,     0,  1841,  1842,  1843,  1844,     0,     0,
       0,     0,     0,  1845,     0,  1846,     0,  1847,  1848,     0,
    1849,  1850,  1851,  1852,  1853,  1854,     0,  1855,  1856,  1857,
    1858,  1859,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1860,     0,  1861,     0,  1862,     0,     0,     0,
       0,     0,     0,     0,     0,  1863,     0,  1864,  1865,  1866,
    1867,  1868,  1869,  1870,     0,     0,  1871,  1872,     0,     0,
       0,     0,  1873,     0,  1874,  1875,  1876,     0,  1877,     0,
    1878,     0,  1879,  1880,  1881,  1882,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1883,  1884,  1885,     0,     0,     0,
       0,     0,     0,     0,  1886,     0,  1887,  1888,  1889,     0,
       0,     0,     0,  1890,     0,  1891,  1892,  1893,     0,     0,
       0,  1894,     0,     0,     0,  1895,  1896,     0,     0,  1897,
    1898,  1899,  1900,     0,     0,     0,  1901,     0,   561,   562,
     563,   564,   565,   566,   567,     0,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1902,  1903,  1904,
    1905,  1906,  1783,  1784,  1785,  1786,  1787,  1788,     0,  1789,
       0,  1790,     0,     0,     0,  1791,  1792,  1793,     0,  1794,
       0,     0,     0,     0,     0,  1795,  1796,  1797,  1798,  1799,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1800,
    1101,     0,     0,     0,     0,     0,     0,     0,     0,  1801,
    1802,     0,     0,  1803,     0,     0,     0,     0,  1804,  1805,
    1806,  1807,  1808,     0,     0,  1809,     0,  1810,  1811,  1812,
       0,     0,  1813,  1814,     0,  1815,  1816,  1817,     0,     0,
       0,  1818,     0,     0,     0,     0,     0,  1907,  1908,  1909,
    1910,  1911,     0,  1912,     0,  1819,     0,     0,     0,     0,
    1820,     0,     0,     0,     0,  1821,  1822,  1823,     0,     0,
       0,     0,  1824,  1825,     0,  1826,  1827,  1828,  1829,     0,
       0,  1830,     0,  2417,  1832,  1833,  1834,     0,  1835,     0,
    1836,  1837,     0,  1838,     0,  1839,  1840,     0,  1841,  1842,
    1843,  1844,     0,     0,     0,     0,     0,  1845,     0,  1846,
       0,  1847,  1848,     0,  1849,  1850,  1851,  1852,  1853,  1854,
       0,  1855,  1856,  1857,  1858,  1859,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1860,     0,  1861,     0,
    1862,     0,     0,     0,     0,     0,     0,     0,     0,  1863,
       0,  1864,  1865,  1866,  1867,  1868,  1869,  1870,     0,     0,
    1871,  1872,     0,     0,     0,     0,  1873,     0,  1874,  1875,
    1876,     0,  1877,     0,  1878,     0,  1879,  1880,  1881,  1882,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1883,  1884,
    1885,     0,     0,     0,     0,     0,     0,     0,  1886,     0,
    1887,  1888,  1889,     0,     0,     0,     0,  1890,     0,  1891,
    1892,  1893,     0,     0,     0,  1894,     0,     0,     0,  1895,
    1896,     0,     0,  1897,  1898,  1899,  1900,     0,     0,     0,
    1901,   561,   562,   563,   564,   565,   566,   567,     0,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1902,  1903,  1904,  1905,  1906,  1783,  1784,  1785,  1786,
    1787,  1788,     0,  1789,     0,  1790,     0,     0,     0,  1791,
    1792,  1793,     0,  1794,     0,     0,     0,     0,     0,  1795,
    1796,  1797,  1798,  1799,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1800,  1107,     0,     0,     0,     0,     0,
       0,     0,     0,  1801,  1802,     0,     0,  1803,     0,     0,
       0,     0,  1804,  1805,  1806,  1807,  1808,     0,     0,  1809,
       0,  1810,  1811,  1812,     0,     0,  1813,  1814,     0,  1815,
    1816,  1817,     0,     0,     0,  1818,     0,     0,     0,     0,
       0,  1907,  1908,  1909,  1910,  1911,     0,  1912,     0,  1819,
       0,     0,     0,     0,  1820,     0,     0,     0,     0,  1821,
    1822,  1823,     0,     0,     0,     0,  1824,  1825,     0,  1826,
    1827,  1828,  1829,     0,     0,  1830,     0,  2456,  1832,  1833,
    1834,     0,  1835,     0,  1836,  1837,     0,  1838,     0,  1839,
    1840,     0,  1841,  1842,  1843,  1844,     0,     0,     0,     0,
       0,  1845,     0,  1846,     0,  1847,  1848,     0,  1849,  1850,
    1851,  1852,  1853,  1854,     0,  1855,  1856,  1857,  1858,  1859,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1860,     0,  1861,     0,  1862,     0,     0,     0,     0,     0,
       0,     0,     0,  1863,     0,  1864,  1865,  1866,  1867,  1868,
    1869,  1870,     0,     0,  1871,  1872,     0,     0,     0,     0,
    1873,     0,  1874,  1875,  1876,     0,  1877,     0,  1878,     0,
    1879,  1880,  1881,  1882,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,   199,   200,   201,   202,   203,     0,
       0,     0,  1883,  1884,  1885,     0,     0,   204,   205,     0,
       0,     0,  1886,     0,  1887,  1888,  1889,   206,   207,     0,
       0,  1890,     0,  1891,  1892,  1893,     0,     0,     0,  1894,
     208,     0,     0,  1895,  1896,     0,     0,  1897,  1898,  1899,
    1900,     0,     0,     0,  1901,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,     0,     0,   210,     0,     0,
     211,   212,     0,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,  1902,  1903,  1904,  1905,  1906,
       0,     0,     0,     0,     0,     0,   214,     0,     0,     0,
     215,     0,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,  1109,   585,   561,
     562,   563,   564,   565,   566,   567,   216,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,  1907,  1908,  1909,  1910,  1911,
       0,  1912,     0,   218,   561,   562,   563,   564,   565,   566,
     567,     0,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,   219,   220,     0,     0,     0,
       0,     0,     0,   221,   222,     0,     0,     0,   223,   562,
     563,   564,   565,   566,   567,     0,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   224,   585,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,     0,
     263,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,     0,   311,   312,   313,   314,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,     0,   326,   327,   328,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     205,     0,     0,     0,   329,     0,     0,     0,     0,   206,
     561,   562,   563,   564,   565,   566,   567,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,   210,
       0,     0,   211,   212,   561,   562,   563,   564,   565,   566,
     567,   213,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   561,   562,   563,   564,   565,   566,   567,  1114,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,   561,   562,
     563,   564,   565,   566,   567,  1115,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,     0,
     772,     0,     0,     0,     0,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   561,   562,
     563,   564,   565,   566,   567,     0,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,   773,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,     0,   263,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,     0,   311,   312,   313,   314,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,     0,   326,   327,   328,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,     0,     0,     0,   329,     0,     0,     0,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   892,     0,  1117,     0,     0,     0,
       0,   893,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,     0,
       0,   210,     0,     0,   211,   212,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
    1129,   561,   562,   563,   564,   565,   566,   567,     0,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,     0,     0,
     561,   562,   563,   564,   565,   566,   567,  1130,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   561,   562,   563,
     564,   565,   566,   567,  1131,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,     0,     0,     0,   217,     0,     0,
     561,   562,   563,   564,   565,   566,   567,   218,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,     0,     0,     0,   894,   561,   562,   563,
     564,   565,   566,   567,  1133,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,     0,   263,     0,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,     0,   311,   312,   313,   314,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,     0,   326,   327,   328,   198,
     199,   200,   201,   202,   203,     0,     0,     0,     0,     0,
       0,     0,     0,   204,   205,     0,     0,     0,   895,     0,
       0,     0,     0,   206,   561,   562,   563,   564,   565,   566,
     567,     0,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,     0,     0,   210,     0,     0,   211,   212,   561,   562,
     563,   564,   565,   566,   567,   213,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,  1144,   561,   562,
     563,   564,   565,   566,   567,     0,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,  1153,     0,   561,   562,
     563,   564,   565,   566,   567,     0,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,  1154,   585,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,     0,     0,     0,     0,  1155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   561,   562,   563,   564,   565,   566,
     567,   219,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,  1156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,     0,     0,     0,     0,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,     0,   263,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,     0,   311,   312,
     313,   314,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,     0,   326,   327,
     328,   198,   199,   200,   201,   202,   203,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   205,     0,     0,     0,
     329,     0,     0,     0,     0,   206,   812,     0,     0,     0,
       0,     0,     0,   561,   562,   563,   564,   565,   566,   567,
    1157,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,   210,     0,     0,   211,   212,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,  1158,   561,   562,   563,   564,   565,
     566,   567,     0,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,     0,     0,  1159,   561,   562,   563,   564,   565,
     566,   567,     0,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,     0,     0,  1160,     0,   561,   562,   563,   564,
     565,   566,   567,     0,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   217,   585,     0,   561,   562,   563,   564,   565,   566,
     567,   218,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,     0,     0,
    1166,   561,   562,   563,   564,   565,   566,   567,     0,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,     0,   263,     0,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,     0,
     311,   312,   313,   314,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,     0,
     326,   327,   328,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,     0,     0,     0,     0,   204,   205,     0,
       0,     0,   329,     0,     0,     0,     0,   206,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,  1170,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,   209,     0,     0,     0,     0,   210,     0,     0,
     211,   212,   561,   562,   563,   564,   565,   566,   567,   213,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,  1171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1083,     0,     0,     0,
       0,  1172,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,  1173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,     0,     0,     0,     0,     0,
    1174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   561,   562,
     563,   564,   565,   566,   567,   219,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,  1178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,     0,
     263,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,     0,   311,   312,   313,   314,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,     0,   326,   327,   328,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     205,     0,     0,     0,   329,     0,     0,     0,     0,   206,
     561,   562,   563,   564,   565,   566,   567,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,  1179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,   210,
       0,     0,   211,   212,     0,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,  1180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   561,   562,
     563,   564,   565,   566,   567,  1601,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   561,   562,   563,   564,   565,   566,   567,  1359,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,   561,   562,
     563,   564,   565,   566,   567,   218,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,     0,
       0,     0,     0,     0,  1628,   561,   562,   563,   564,   565,
     566,   567,     0,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,     0,   263,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,     0,   311,   312,   313,   314,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,     0,   326,   327,   328,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,     0,     0,     0,   329,     0,     0,     0,
       0,   206,     0,     0,     0,     0,     0,     0,     0,   561,
     562,   563,   564,   565,   566,   567,  1629,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,     0,
       0,   210,     0,     0,   211,   212,   561,   562,   563,   564,
     565,   566,   567,   213,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,  1606,     0,     0,
       0,     0,     0,     0,  1640,   561,   562,   563,   564,   565,
     566,   567,     0,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,     0,     0,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,   565,   566,   567,  1650,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,  1666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,   219,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,  1667,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,     0,   263,     0,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,     0,   311,   312,   313,   314,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,     0,   326,   327,   328,   198,
     199,   200,   201,   202,   203,     0,     0,     0,     0,     0,
       0,     0,     0,   204,   205,     0,     0,     0,   329,     0,
       0,     0,     0,   206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   561,   562,
     563,   564,   565,   566,   567,  1668,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,   209,     0,
       0,     0,     0,   210,     0,     0,   211,   212,     0,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,  1671,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,  2141,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,  1672,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,     0,     0,  1685,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   561,   562,   563,   564,   565,   566,   567,   218,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,     0,     0,  1686,   561,
     562,   563,   564,   565,   566,   567,     0,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,     0,   263,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,     0,   311,   312,
     313,   314,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,     0,   326,   327,
     328,   198,   199,   200,   201,   202,   203,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   205,     0,     0,     0,
     329,     0,     0,     0,     0,   206,   561,   562,   563,   564,
     565,   566,   567,     0,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,  1687,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,   210,     0,     0,   211,   212,
     561,   562,   563,   564,   565,   566,   567,   213,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,  2143,     0,     0,     0,     0,     0,     0,  2184,   561,
     562,   563,   564,   565,   566,   567,     0,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,     0,     0,  2187,   561,
     562,   563,   564,   565,   566,   567,  1616,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,     0,     0,     0,     0,
       0,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,     0,     0,     0,     0,  2188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   561,   562,   563,   564,
     565,   566,   567,   219,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,  2189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,     0,   263,     0,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,     0,
     311,   312,   313,   314,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,     0,
     326,   327,   328,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,     0,     0,     0,     0,   204,   205,     0,
       0,     0,   329,     0,     0,     0,     0,   206,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1118,  1617,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,   209,     0,     0,     0,     0,   210,     0,     0,
     211,   212,     0,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,   876,   561,   562,   563,   564,
     565,   566,   567,     0,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,   561,   562,   563,
     564,   565,   566,   567,  1119,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1082,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     0,   561,   562,   563,   564,
     565,   566,   567,   218,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,     0,     0,     0,
       0,  1088,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,     0,
     263,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,     0,   311,   312,   313,   314,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,     0,   326,   327,   328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   561,   562,   563,
     564,   565,   566,   567,   329,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,   565,   566,   567,  1089,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   561,   562,   563,
     564,   565,   566,   567,     0,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,  1090,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,   561,   562,   563,   564,   565,
     566,   567,  1091,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,   561,   562,   563,   564,   565,   566,
     567,  1092,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,  1093,   585,   561,
     562,   563,   564,   565,   566,   567,     0,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,   561,   562,   563,   564,
     565,   566,   567,     0,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,   561,   562,   563,   564,   565,   566,   567,
       0,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
     561,   562,   563,   564,   565,   566,   567,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   561,   562,   563,
     564,   565,   566,   567,     0,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,     0,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,   561,   562,   563,   564,   565,
     566,   567,  1098,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,     0,     0,     0,     0,     0,     0,   561,   562,
     563,   564,   565,   566,   567,  1102,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,   561,   562,   563,   564,   565,
     566,   567,  1103,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,   561,   562,   563,   564,   565,   566,   567,  1104,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,   561,   562,   563,   564,   565,   566,   567,
    1108,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
     561,   562,   563,   564,   565,   566,   567,  1110,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,  1111,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
     561,   562,   563,   564,   565,   566,   567,  1112,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   561,   562,   563,
     564,   565,   566,   567,  1121,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,  1122,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,   561,   562,   563,   564,   565,   566,   567,  1123,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,   561,   562,
     563,   564,   565,   566,   567,  1124,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,   561,   562,   563,   564,   565,
     566,   567,  1125,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,   561,   562,   563,   564,   565,   566,   567,  1126,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,   561,   562,   563,   564,   565,   566,   567,
    1127,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
       0,     0,     0,     0,     0,     0,   561,   562,   563,   564,
     565,   566,   567,  1128,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,   561,   562,   563,   564,   565,   566,   567,
    1132,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
     561,   562,   563,   564,   565,   566,   567,  1145,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,   561,   562,   563,   564,   565,   566,   567,  1146,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,   561,   562,
     563,   564,   565,   566,   567,  1147,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,     0,
     561,   562,   563,   564,   565,   566,   567,  1148,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,   561,   562,
     563,   564,   565,   566,   567,  1149,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,   561,   562,   563,   564,   565,
     566,   567,  1150,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,   561,   562,   563,   564,   565,   566,   567,  1151,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,   561,
     562,   563,   564,   565,   566,   567,  1152,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,   561,   562,   563,   564,
     565,   566,   567,  1163,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,   561,   562,   563,   564,   565,   566,   567,
    1164,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
     561,   562,   563,   564,   565,   566,   567,  1165,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,     0,     0,     0,
       0,   561,   562,   563,   564,   565,   566,   567,  1169,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,     0,     0,
       0,     0,     0,     0,   561,   562,   563,   564,   565,   566,
     567,  1175,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,   561,   562,   563,   564,   565,   566,   567,  1176,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,   561,   562,
     563,   564,   565,   566,   567,  1177,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,   561,
     562,   563,   564,   565,   566,   567,  1204,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,   561,   562,   563,   564,
     565,   566,   567,  1620,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,     0,   561,   562,
     563,   564,   565,   566,   567,  1625,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,   561,   562,   563,   564,
     565,   566,   567,  1626,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,   561,   562,   563,   564,   565,   566,   567,
    1627,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
     561,   562,   563,   564,   565,   566,   567,  1630,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   561,   562,   563,
     564,   565,   566,   567,  1631,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,  1632,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,   561,   562,   563,   564,   565,   566,   567,  1633,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,   561,   562,
     563,   564,   565,   566,   567,  1634,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,     0,     0,     0,     0,   561,
     562,   563,   564,   565,   566,   567,  1635,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,  1638,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,   561,
     562,   563,   564,   565,   566,   567,  1639,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,   561,   562,   563,   564,
     565,   566,   567,  1651,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,   561,   562,   563,
     564,   565,   566,   567,  1652,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,  1665,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,     0,   561,   562,   563,   564,
     565,   566,   567,  1669,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,   561,   562,   563,   564,   565,   566,
     567,  1670,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,   561,   562,   563,   564,   565,   566,   567,  1679,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,   561,   562,
     563,   564,   565,   566,   567,  1680,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,   561,   562,   563,   564,   565,
     566,   567,  1681,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,   561,   562,   563,   564,   565,   566,   567,  1682,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,   561,
     562,   563,   564,   565,   566,   567,  1683,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,   561,   562,   563,   564,
     565,   566,   567,  1684,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,     0,     0,     0,     0,   561,   562,   563,
     564,   565,   566,   567,  1765,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,   565,   566,   567,  1975,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   561,   562,   563,
     564,   565,   566,   567,  2049,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,  2118,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     0,     0,   561,   562,   563,   564,   565,
     566,   567,  2149,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585,   561,   562,   563,   564,   565,   566,   567,  2150,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,   561,   562,   563,   564,   565,   566,
     567,  2151,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,   561,   562,   563,   564,   565,   566,   567,  2152,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,   561,
     562,   563,   564,   565,   566,   567,  2153,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,   561,   562,   563,   564,
     565,   566,   567,  2162,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,     0,   585,   561,   562,   563,   564,   565,   566,   567,
    2179,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,     0,   585,
     561,   562,   563,   564,   565,   566,   567,  2180,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,     0,   585,   561,   562,   563,
     564,   565,   566,   567,  2181,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,  2182,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,     0,     0,     1,     0,     0,     0,     2,     0,     0,
       0,     0,  2183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,  2185,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2186,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,  2217,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
    2223,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2227,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,  2232,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2348,     0,     0,
       0,    17,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,   561,   562,   563,
     564,   565,   566,   567,  2355,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,   561,   562,   563,   564,   565,   566,
     567,  2379,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
     585,   561,   562,   563,   564,   565,   566,   567,  2392,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,     0,     0,
       0,     0,     0,     0,     0,  2411,     0,     0,     0,     0,
       0,  1976,  1977,     0,   660,   661,  1978,   662,  1979,   663,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2412,     0,     0,   665,     0,   451,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      21,  1980,  1981,     0,  1982,     0,     0,     0,     0,  2461,
       0,     0,     0,     0,     0,     0,     0,   666,   667,   668,
     669,     0,     0,     0,     0,     0,   670,     0,   561,   562,
     563,   564,   565,   566,   567,   671,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,     0,   585,   672,     0,     0,     0,     0,
       0,     0,     0,   673,     0,     0,     0,  1954,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   674,     0,
       0,     0,     0,     0,     0,   675,     0,     0,   676,     0,
       0,   677,   678,     0,     0,     0,     0,     0,     0,     0,
       0,   561,   562,   563,   564,   565,   566,   567,   679,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,     0,   585,     0,     0,
    1955,     0,     0,     0,     0,  1983,  1984,  1071,     0,     0,
       0,     0,   680,   681,     0,     0,   682,   683,     0,     0,
       0,     0,   684,     0,   685,     0,     0,     0,     0,   686,
     687,     0,     0,     0,  1357,   688,     0,   689,     0,     0,
       0,     0,     0,   690,     0,   691,   692,     0,     0,     0,
       0,   693,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,   565,   566,   567,  1365,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   560,   585,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,     0,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   586,     0,     0,  1356,   561,   562,   563,
     564,   565,   566,   567,     0,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,     0,   585,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1612,     0,     0,     0,  1113,   561,
     562,   563,   564,   565,   566,   567,     0,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,     0,   585,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   565,   566,   567,  1189,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,     0,   585,     0,
       0,     0,     0,     0,     0,   561,   562,   563,   564,   565,
     566,   567,  1430,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
       0,   585
};

static const yytype_int16 yycheck[] =
{
     115,  1208,   346,  1453,  1312,   734,   340,  1275,  1464,  1720,
    1233,  1234,  1595,   606,   400,   336,  1239,  1546,  1580,   995,
     996,  1945,     3,  1291,     6,  1001,    36,  1003,     3,   136,
    1578,    49,  1939,   136,   107,  1303,    18,   924,     5,     3,
       4,     5,     6,     7,     8,  1333,  1066,  1069,  1068,   159,
       8,     3,   159,  1481,  1482,   154,   154,  1711,     6,    51,
      20,     3,   240,     4,     4,    78,     4,     3,   340,   199,
       3,    48,  1500,   199,    78,    78,     4,    55,   193,   194,
      76,   219,    90,    20,   107,   240,   266,   421,   240,   204,
     205,   206,    18,    36,   112,   210,    97,     3,    48,   274,
      71,    40,    87,   268,   136,     5,    18,     3,   137,    51,
      16,     3,     3,    39,   252,   266,   259,   216,   216,     3,
     139,   134,    48,  1998,  1999,    51,     3,    53,     3,    18,
      56,   134,    18,   197,  2009,  2010,   241,   280,     3,     4,
       5,     6,     7,     8,     3,    71,     3,     3,   230,   277,
    1654,  1655,    78,    79,    98,   124,   125,   153,   639,  1663,
    1664,  1183,   154,    63,   266,  1713,   271,   163,   107,     3,
       3,   200,     4,     5,     6,     7,   258,   107,   274,     3,
       3,   177,   252,   202,   913,    97,   167,   113,   201,   108,
       3,   266,   173,   241,   190,   172,    71,   201,   201,    95,
     929,    85,   266,   136,   130,   149,   235,    84,    97,    84,
       3,   193,    71,   245,   329,   696,     3,   268,   157,   215,
     197,   154,   113,   271,   216,    84,   391,  1756,    85,   193,
     208,   167,   252,   371,   414,   258,   414,   173,   164,  1768,
      72,   416,   238,   176,   150,   193,   217,   197,   261,   241,
     258,   228,   351,   193,   588,   193,   184,   261,   261,  1715,
    1483,   416,   414,   414,   249,  1533,   404,   193,   269,   227,
     203,   183,   156,  1581,   595,   201,  1805,  1545,   228,  2154,
    2155,  2156,  2157,  2158,  2159,   197,   416,  1816,   416,   195,
     416,   401,  1560,  2168,   183,   236,   237,  2172,   184,   156,
     156,  2176,   241,  1591,  1732,   241,   275,  1836,   197,   416,
     277,  1198,   414,   416,   413,   414,   414,  1971,   248,   258,
     416,  1850,   156,   156,  1053,   398,   399,   400,   193,  1349,
    1859,  1351,   447,   156,   407,   261,   451,   319,  2262,   258,
     391,   416,   935,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,  2261,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
    1899,   486,   487,   488,   351,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,  1940,  1941,    74,   413,     3,   512,   513,   733,
     381,   351,   517,   518,     3,   415,  1428,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   404,
     545,   546,   547,   414,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,  2027,   381,   561,   562,   563,   564,
     565,   415,   404,   413,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   413,   415,   954,   955,   590,   413,   107,   414,   751,
       3,   596,   754,   964,  1988,  1989,  1990,  1991,  1992,  1993,
     376,   377,   378,   379,  1701,  2206,  2000,   769,    10,   266,
    2004,   333,   334,   335,  2008,   277,     3,   266,  1776,  2384,
    1778,    71,   192,  2388,   327,   328,   329,   330,    82,    38,
       5,    62,    86,    49,   113,    66,   177,   157,   113,   204,
     210,     3,  1013,  1014,  1015,    20,  2465,  1513,     3,  1515,
    1516,  2070,   252,     3,   266,     3,  2075,    54,    55,   156,
      87,   100,  2135,     3,   252,  2117,    75,   156,     3,     3,
     240,    84,    99,     3,   215,    74,     9,    74,   124,   125,
     266,   120,   103,   114,   277,     0,   117,    20,   274,    51,
    2030,   100,   414,    95,  2513,  2514,   112,  2043,   133,   108,
     102,   132,   156,   268,   412,   981,   982,   918,   135,  2474,
    2475,   120,  2477,  2478,   193,    39,   143,    51,   193,   154,
       3,   152,    74,    51,  2543,   146,   731,     3,  1211,   160,
     100,  1214,    60,   154,   414,    59,   138,   139,   258,     3,
      71,     5,  1113,  1114,     3,    28,   396,    78,    87,     3,
     120,   413,    28,   155,    95,   176,   216,   414,   763,   764,
      99,   923,  1920,   768,   155,   414,   193,   217,  1926,   156,
     775,    10,    11,    12,    13,    14,    15,    16,   187,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   135,    36,   139,   208,
     202,   156,   414,   134,   143,  2406,   156,   138,   156,  1043,
    2229,   210,     3,   210,   155,   242,   156,   219,   249,   221,
     251,   156,  1441,   416,   155,   227,   156,   413,  2247,   275,
     416,    18,   267,   164,   155,     3,    18,  1950,  2311,   270,
     192,     3,    71,   164,   246,   247,   156,  2515,    14,    36,
     277,     3,    18,     3,   193,    84,   103,  2203,   210,   261,
     269,   202,   103,    51,  1235,     3,    48,   103,     3,    51,
     201,    53,    60,   103,    56,    51,  2544,  2545,   219,   246,
     221,   155,   887,   888,    60,   890,   227,   676,   240,    71,
     895,    78,    51,   682,   396,   684,    78,    79,   396,   146,
       3,    60,  2296,   242,     3,   146,  2300,   154,  2381,  2577,
     146,   252,   159,   154,  2333,  2113,   146,   416,   154,    13,
      14,   171,    16,   252,   154,    19,   113,   396,  2086,   176,
     261,   113,    32,    33,    34,   176,    36,     3,    33,    34,
     176,    36,   398,   399,   400,  2103,   176,  2105,   663,   664,
     665,   666,   396,   668,   413,   414,   671,   672,   673,    45,
      46,  2399,     3,   678,   679,   680,   415,   416,   683,   371,
    1204,   416,  1196,  2319,  2314,   988,   989,   409,   991,   992,
     993,     3,   164,     3,   997,   998,   999,   414,   136,  1002,
     415,   416,   136,   395,   136,   415,   416,   223,   224,  2472,
     415,   416,   404,   415,   416,  1010,    82,    83,   415,   416,
     159,   193,    28,    29,    30,    31,    32,    33,    34,   201,
      36,   136,  1184,   415,   416,   415,   416,   405,   406,     3,
     371,  1193,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    36,  2440,  2441,     3,  2443,
    2444,   415,   416,   281,   395,    51,  2402,   415,   416,   415,
     416,   415,   416,   404,   415,   416,  1071,     3,  1073,   415,
     416,   415,   416,   415,   416,  1080,  1081,   414,  1083,   261,
       4,     5,  1087,   415,   416,     4,     5,    57,    58,  1094,
    1095,  1096,  1097,   197,  1099,  1100,  1101,  2255,  2195,   415,
     416,  1106,  1107,   281,  1109,  2451,   415,   416,   415,   416,
    1115,  1116,  1117,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   414,    36,  1129,  1130,  1131,   197,  1133,   415,
     416,   415,   416,   415,   416,   415,   416,  2483,     3,  1144,
     415,   416,   415,   416,   415,   416,   415,   416,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,     3,  1162,   415,   416,
    2506,  1166,  1324,  1168,   413,  1170,  1171,  1172,  1173,  1174,
     415,   416,   414,  1178,  1179,  1180,     3,  2523,   417,   281,
     415,   416,   415,   416,  1189,   281,  1191,  1192,   415,   416,
     281,  2537,   415,   416,   415,   416,   415,   416,   415,   416,
    1205,   415,   416,   281,  2550,   415,   416,  1212,   415,   416,
     415,   416,  1583,    10,    11,    12,    13,    14,    15,    16,
    2566,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   281,    36,
      10,    11,    12,    13,    14,    15,    16,   197,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     3,    36,  1429,  1273,   281,
    1432,   281,  1434,     4,  1436,   415,   416,   245,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     9,    36,    10,    11,    12,    13,    14,
      15,    16,     8,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     413,    36,   414,  1338,   415,   416,    36,  1342,   266,   136,
     415,   416,   414,  1348,   415,   416,   415,   416,   415,   416,
     415,   416,  1357,   414,  1359,   415,   416,   415,   416,   414,
    1365,  1366,    10,    11,    12,    13,    14,    15,    16,   414,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   414,    36,   415,
     416,   415,   416,    10,    11,    12,    13,    14,    15,    16,
     414,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   416,    36,
      57,    58,   414,   413,   414,  1430,    10,    11,    12,    13,
      14,    15,    16,   414,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  1456,    36,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   414,
      36,   414,  1477,    10,    11,    12,    13,    14,    15,    16,
     414,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   414,    36,
      10,    11,    12,    13,    14,    15,    16,   414,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   414,    36,   414,    10,    11,
      12,    13,    14,    15,    16,   414,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   414,    36,   415,   416,   415,   416,   413,
     414,    10,    11,    12,    13,    14,    15,    16,  1573,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   414,    36,    12,    13,
      14,    15,    16,   414,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,  1616,    36,   414,  1619,   415,   416,   415,   416,   416,
     415,   416,   414,  1628,  1629,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,  1640,    36,   415,   416,   415,
     416,   931,   932,   414,  1649,  1650,   416,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   414,    36,
     414,  1666,  1667,  1668,  1200,  1201,  1671,  1672,   414,  1674,
     414,  1676,   414,  1678,  1705,  1706,     3,   414,   414,   414,
    1685,  1686,  1687,   415,   416,   414,   414,   414,   414,   414,
     414,   414,   414,   414,  1699,  1700,    51,   414,   414,   414,
     414,   414,   414,  1708,  1709,   414,   414,   414,     3,   159,
     415,   416,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   414,    36,   414,
     414,  1736,   414,   414,   414,  1740,   414,     3,     4,     5,
       6,     7,     8,   414,    10,  1750,    12,   414,   414,   414,
      16,    17,    18,   414,    20,   414,   414,   414,   414,  1764,
      26,    27,    28,    29,    30,   414,     3,   415,   416,   414,
     414,   414,   414,   414,    40,   414,   414,     3,   414,   414,
     414,   414,   414,   414,    50,    51,   414,   414,    54,   414,
     414,   414,   414,    59,    60,    61,    62,    63,   415,   416,
      66,   414,    68,    69,    70,   414,   414,    73,    74,   414,
      76,    77,    78,   414,   414,   414,    82,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
      96,   415,   416,     3,     3,   101,     3,    16,    53,    53,
     106,   107,   108,    44,     3,   277,    71,   113,   114,   245,
     116,   117,   118,   119,     3,     3,   122,   197,   124,   125,
     126,   127,     3,   129,   197,   131,   132,   281,   134,     3,
     136,   137,   197,   139,   140,   141,   142,   281,   415,   416,
     277,     3,   148,   281,   150,     3,   152,   153,   281,   155,
     156,   157,   158,   159,   160,    28,   162,   163,   164,   165,
     166,     3,     3,     3,     3,   415,   416,     3,     3,     3,
       3,   177,    74,   179,   281,   181,    74,   281,     3,     3,
      36,     3,     3,   417,   190,   415,   192,   193,   194,   195,
     196,   197,   198,   415,   416,   201,   202,   415,   415,   415,
     415,   207,   415,   209,   210,   211,   415,   213,   415,   215,
     415,   217,   218,   219,   220,  1960,  1961,   415,   415,     5,
     415,  1966,   415,  1968,   415,     3,   415,   416,   415,   414,
       3,     3,     3,   239,   240,   241,   415,     3,   163,   196,
       3,     3,   271,   249,     3,   251,   252,   253,   274,   402,
     402,   271,   258,   274,   260,   261,   262,     3,   273,   277,
     266,     5,    42,    42,   270,   271,     3,     3,   274,   275,
     276,   277,     3,     3,     3,   281,     3,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     3,    36,     3,     3,     3,   245,     3,     3,
       3,   379,     3,     5,   217,     5,   322,   323,   324,   325,
     326,     5,    10,    11,    12,    13,    14,    15,    16,   414,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   217,    36,    64,
     414,   414,   414,  2098,   414,   414,   414,   414,     3,     3,
       3,     3,    10,    11,    12,    13,    14,    15,    16,  2114,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   415,    36,   416,
       3,     3,   197,   415,   197,    51,   396,     3,   197,   281,
    2145,     3,   414,     3,     3,   277,   412,   413,   414,   415,
     416,   198,   418,   396,     3,     3,  2161,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,  2184,
      36,     3,   415,   415,   241,   415,   350,  2192,   415,   350,
     350,   241,   414,   350,   350,   414,  2201,   136,   414,   164,
     164,   414,   164,   163,     3,     4,     5,     6,     7,     8,
     416,    10,   197,    12,   163,  2220,  2221,    16,    17,    18,
     414,    20,   271,     4,     4,   411,   414,    26,    27,    28,
      29,    30,   410,   181,   411,     4,     3,     3,   222,   222,
      36,    40,   245,   245,     5,     5,     3,     3,   193,     4,
     197,    50,    51,     5,   197,    54,     5,     5,     5,   414,
      59,    60,    61,    62,    63,   417,   197,    66,   414,    68,
      69,    70,   213,     3,    73,    74,     3,    76,    77,    78,
       3,     3,   140,    82,     3,   197,   397,   414,    94,     3,
       3,    63,   179,     3,    20,   414,    91,    96,   199,     4,
     417,   415,   101,     5,   161,   350,   350,   106,   107,   108,
     414,   414,     5,   350,   113,   114,   350,   116,   117,   118,
     119,   350,   350,   122,   414,   124,   125,   126,   127,   350,
     129,   414,   131,   132,   350,   134,   350,   136,   137,   414,
     139,   140,   141,   142,  2349,   241,     3,   141,   140,   148,
       3,   150,     3,   152,   153,   415,   155,   156,   157,   158,
     159,   160,  2367,   162,   163,   164,   165,   166,   403,   179,
      20,   414,    20,     4,   179,     3,   164,   164,   177,     3,
     179,     3,   181,   222,   414,   222,    78,   414,   268,     3,
     415,   190,    60,   192,   193,   194,   195,   196,   197,   198,
     415,   414,   201,   202,   415,   415,   415,   414,   207,   414,
     209,   210,   211,   414,   213,   414,   215,   245,   217,   218,
     219,   220,   415,   416,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   414,    36,
     239,   240,   241,   140,   268,     3,   197,    20,     3,     3,
     249,   414,   251,   252,   253,   164,   164,     3,   414,   258,
       4,   260,   261,   262,  2469,     6,     4,   266,   416,     4,
     416,   270,   271,   212,   414,   274,   275,   276,   277,   414,
     414,   164,   281,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     3,    36,   415,   416,   415,
      63,   148,     3,    20,   414,     4,   415,   415,   415,   414,
     414,   414,   414,   322,   323,   324,   325,   326,     3,     4,
       5,     6,     7,     8,   415,    10,   414,    12,   414,   414,
     414,    16,    17,    18,   414,    20,   415,   415,   415,   414,
     163,    26,    27,    28,    29,    30,     5,     4,     4,   414,
     414,   414,     5,   414,   416,    40,   416,     3,   414,   416,
     193,     3,    52,   414,   414,    50,    51,     3,   414,    54,
     414,     4,   164,   164,    59,    60,    61,    62,    63,     5,
       4,    66,   213,    68,    69,    70,   240,     4,    73,    74,
     414,    76,    77,    78,     3,     3,     3,    82,     3,     3,
       3,   414,   414,   412,   413,   414,   415,   416,   118,   418,
       3,    96,   268,   266,   414,     3,   101,     4,    20,    20,
     140,   106,   107,   108,     3,   414,   414,   414,   113,   114,
     414,   116,   117,   118,   119,   416,   258,   122,    20,   124,
     125,   126,   127,     4,   129,   197,   131,   132,     3,   134,
     351,   136,   137,   350,   139,   140,   141,   142,   350,   415,
     415,   415,   415,   148,   415,   150,   414,   152,   153,     3,
     155,   156,   157,   158,   159,   160,    12,   162,   163,   164,
     165,   166,   416,    12,     3,     5,     3,     3,    51,   414,
       5,     5,   177,   414,   179,    60,   181,   414,     4,   415,
      60,     3,   415,   217,   415,   190,   415,   192,   193,   194,
     195,   196,   197,   198,   414,   414,   201,   202,   416,   414,
     416,   268,   207,   414,   209,   210,   211,   277,   213,   414,
     215,   415,   217,   218,   219,   220,     5,     4,   271,   414,
     414,   164,   164,     3,   416,   414,    88,   415,   198,   414,
      63,   415,     3,   415,   239,   240,   241,   414,    20,    43,
     415,    18,     3,   415,   249,   416,   251,   252,   253,   164,
     416,   414,   164,   258,   414,   260,   261,   262,   164,   415,
     415,   266,     3,     3,    60,   270,   271,   415,   415,   274,
     275,   276,   277,     3,   414,    78,   281,   136,    10,    11,
      12,    13,    14,    15,    16,   414,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     3,    36,   414,   414,     3,    63,    63,
       3,     3,   414,     3,    63,   415,   415,   322,   323,   324,
     325,   326,     3,     4,     5,     6,     7,     8,   415,    10,
     350,    12,   350,   350,   350,    16,    17,    18,   415,    20,
     415,     5,     5,     5,   214,    26,    27,    28,    29,    30,
     140,     3,   415,    20,   416,    20,   207,     3,   269,    40,
       3,     5,    60,     5,   415,    77,   131,   277,   156,    50,
      51,   166,   276,    54,     5,   414,   414,   207,    59,    60,
      61,    62,    63,     3,   204,    66,    20,    68,    69,    70,
     416,     3,    73,    74,   101,    76,    77,    78,     3,   159,
     415,    82,   415,   415,   415,     4,   415,   412,   413,   414,
     415,   416,   415,   418,   416,    96,   415,   414,   414,   414,
     101,   415,   414,   416,   415,   106,   107,   108,   415,     4,
     416,   416,   113,   114,     3,   116,   117,   118,   119,     5,
     415,   122,   414,   124,   125,   126,   127,   415,   129,     3,
     131,   132,   415,   134,   415,   136,   137,     3,   139,   140,
     141,   142,     3,   414,   414,   414,     3,   148,     3,   150,
       4,   152,   153,     4,   155,   156,   157,   158,   159,   160,
     416,   162,   163,   164,   165,   166,   231,   231,     3,   207,
     416,     3,     3,     3,   414,    20,   177,   415,   179,     3,
     181,     3,   180,   180,     3,     3,   415,    20,   245,   190,
     415,   192,   193,   194,   195,   196,   197,   198,   415,   415,
     201,   202,   416,   416,   415,     3,   207,   415,   209,   210,
     211,   415,   213,   415,   215,   240,   217,   218,   219,   220,
     416,     5,   414,   414,   229,   414,     3,   415,   415,   415,
     415,     5,   416,     3,   228,   416,     5,   415,   239,   240,
     241,   414,     3,   151,   416,    97,   416,   271,   249,   415,
     251,   252,   253,   174,   250,   197,   197,   258,   191,   260,
     261,   262,   191,   415,     5,   266,     5,   130,  1359,   270,
     271,  1192,   452,   274,   275,   276,   277,  1702,  2031,  1959,
     281,   590,    10,    11,    12,    13,    14,    15,    16,  1460,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,  1086,    36,   600,
     159,   735,  1033,   743,  2416,  2490,  2240,  1310,  1931,  1556,
     624,   322,   323,   324,   325,   326,     3,     4,     5,     6,
       7,     8,   950,    10,  2101,    12,  1228,  2251,  1301,    16,
      17,    18,  1036,    20,  2499,   110,   441,  2145,  1593,    26,
      27,    28,    29,    30,  1067,   753,  2549,  2113,  1919,  1570,
    1582,  1000,  1754,    40,   416,   409,  1017,    -1,   197,    -1,
     657,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,   412,   413,   414,   415,   416,    -1,   418,    -1,    96,
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
     277,    -1,    -1,    -1,   281,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,   412,   413,   414,   415,   416,
      -1,   418,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,
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
      -1,   274,   275,   276,   277,    -1,    -1,    -1,   281,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     323,   324,   325,   326,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,   412,
     413,   414,   415,   416,    -1,   418,    -1,    96,    -1,    -1,
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
      -1,    -1,   281,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,   412,   413,   414,   415,   416,    -1,   418,
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
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,   412,   413,   414,
     415,   416,    -1,   418,    -1,    96,    -1,    -1,    -1,    -1,
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
     281,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,   325,   326,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,   412,   413,   414,   415,   416,    -1,   418,    -1,    96,
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
     277,    -1,    -1,    -1,   281,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,   412,   413,   414,   415,   416,
      -1,   418,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,
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
      -1,   274,   275,   276,   277,    -1,    -1,    -1,   281,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     323,   324,   325,   326,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,   412,
     413,   414,   415,   416,    -1,   418,    -1,    96,    -1,    -1,
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
      -1,    -1,   281,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,   324,   325,   326,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,   412,   413,   414,   415,   416,    -1,   418,
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
     275,   276,   277,    -1,    -1,    -1,   281,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,   412,   413,   414,
     415,   416,    -1,   418,    -1,    96,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   323,   324,   325,   326,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,   412,   413,   414,   415,   416,    -1,   418,    -1,    96,
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
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,   239,   240,   241,    -1,    -1,    17,    18,    -1,
      -1,    -1,   249,    -1,   251,   252,   253,    27,    28,    -1,
      -1,   258,    -1,   260,   261,   262,    -1,    -1,    -1,   266,
      40,    -1,    -1,   270,   271,    -1,    -1,   274,   275,   276,
     277,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   416,    36,    10,
      11,    12,    13,    14,    15,    16,   146,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   412,   413,   414,   415,   416,
      -1,   418,    -1,   193,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,    -1,
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
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    27,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   416,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   416,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   254,    -1,    -1,    -1,
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
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,   414,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,   416,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
     416,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   416,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   416,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,   183,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   193,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,   232,    10,    11,    12,
      13,    14,    15,    16,   416,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,   263,    -1,    -1,
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
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   414,    -1,
      -1,    -1,    -1,    27,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    10,    11,
      12,    13,    14,    15,    16,    89,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,   416,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,   416,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   416,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   225,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
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
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
     414,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     416,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,   416,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,   416,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,   416,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   183,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   193,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
     416,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
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
     392,   393,   394,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   416,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,   416,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   225,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    27,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   113,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   416,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   193,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,   416,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,
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
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,   414,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   416,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    89,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,   416,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   416,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   225,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   414,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   416,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   113,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,   416,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   416,    10,
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
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
     414,    -1,    -1,    -1,    -1,    27,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      10,    11,    12,    13,    14,    15,    16,    89,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,   416,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,   416,    10,
      11,    12,    13,    14,    15,    16,   140,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,   414,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,   415,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,   415,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   193,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,   415,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
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
     390,    -1,   392,   393,   394,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   414,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   415,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   415,    36,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
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
      36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   415,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   415,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     415,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   415,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   415,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     415,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     415,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   415,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   415,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   415,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     415,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   415,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   415,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   415,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     415,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   415,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   415,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   415,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   415,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    10,    11,
      12,    13,    14,    15,    16,   415,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,   415,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   415,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   415,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    10,
      11,    12,    13,    14,    15,    16,   415,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    10,    11,    12,    13,
      14,    15,    16,   415,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    10,    11,    12,    13,    14,    15,    16,
     415,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,   415,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   415,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   415,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
     415,    -1,    -1,    -1,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   415,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,   415,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    10,    11,    12,    13,    14,    15,    16,   415,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   104,   105,    -1,    61,    62,   109,    64,   111,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   415,    -1,    -1,    82,    -1,   275,    -1,    -1,
      -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     404,   144,   145,    -1,   147,    -1,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,    -1,    -1,    -1,    -1,    -1,   123,    -1,    10,    11,
      12,    13,    14,    15,    16,   132,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,    -1,
      -1,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   205,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
     112,    -1,    -1,    -1,    -1,   278,   279,   253,    -1,    -1,
      -1,    -1,   239,   240,    -1,    -1,   243,   244,    -1,    -1,
      -1,    -1,   249,    -1,   251,    -1,    -1,    -1,    -1,   256,
     257,    -1,    -1,    -1,   253,   262,    -1,   264,    -1,    -1,
      -1,    -1,    -1,   270,    -1,   272,   273,    -1,    -1,    -1,
      -1,   278,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   136,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     3,    36,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,   124,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    51,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    50,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    50,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    37,    41,    68,    73,    86,   107,   108,   157,   168,
     169,   170,   206,   208,   216,   240,   241,   255,   258,   267,
     395,   404,   420,   459,   460,   499,   503,   505,   512,   513,
     516,   518,   519,   521,   522,   523,   528,   529,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   541,   544,   551,
     552,   554,   570,   571,   580,   583,   585,   586,   587,   610,
     613,   620,   621,   624,   627,   628,   631,   219,   252,   371,
     404,   252,     3,    10,    95,   102,   138,   139,   155,   202,
     219,   221,   227,   246,   247,   261,   371,   395,   404,   592,
       3,   500,    95,   139,   155,   202,   219,   221,   227,   252,
     371,   395,   404,   562,     3,     3,     3,    28,   252,   252,
     562,     8,   227,   611,   612,   478,   252,   562,   581,     3,
      95,   398,   399,   400,   107,   398,   399,   400,   407,     0,
     412,   515,     3,     3,     3,     3,   396,   414,   216,   156,
     584,     3,   155,     3,     3,    85,   156,     3,     3,     3,
     584,   246,   155,   584,   396,   396,   252,   572,     3,   136,
     154,   176,   203,   501,     3,   156,     3,   156,     3,     3,
     156,     3,   156,     3,     3,   156,     3,   156,     3,   156,
     396,   396,   103,   146,   154,   159,   176,   563,   171,   416,
       3,     3,   563,     9,    20,     3,   113,   416,     3,     4,
       5,     6,     7,     8,    17,    18,    27,    28,    40,    72,
      77,    80,    81,    89,   106,   110,   146,   183,   193,   225,
     226,   233,   234,   238,   263,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   320,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   372,   373,   374,   375,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   392,   393,   394,   414,
     421,   479,   480,     3,   154,   176,     3,   167,   173,   381,
     414,   482,   483,   484,   485,   488,   498,     3,   159,   401,
     136,   136,   136,   159,   136,   409,     3,   420,    54,    55,
      74,   210,   277,   413,   540,   100,   120,    38,    75,   100,
     108,   120,   187,   208,   269,    55,   208,   629,     3,     3,
       4,     5,     6,     7,     8,   193,   415,   622,   623,   139,
     202,   281,     3,    51,     3,   414,   197,     3,   156,   281,
     414,    39,    59,   625,   197,     3,     3,    85,   156,     3,
       3,   156,     3,   156,   584,   414,   573,   413,   502,     3,
     501,   136,   416,   281,   281,   281,   281,   197,   281,    74,
     210,   504,   281,   281,     3,   156,     3,   156,     3,     4,
     245,     3,   421,   421,   612,   413,   414,     9,   421,   421,
     421,   275,   421,   458,   413,   414,    36,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   421,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    36,    51,   481,   136,   159,
     416,   416,   413,   481,   414,     3,   414,   460,   482,   240,
     416,    76,   153,   177,   190,   215,   238,   489,   491,    51,
     487,   487,     3,   159,     3,     3,     3,     3,     3,    16,
     266,    53,    53,    44,     3,   108,   258,   542,    71,    84,
       3,    84,    71,   217,     3,    71,    84,    71,   217,     3,
      84,     3,    71,    84,    71,   277,   245,    18,   184,   376,
     377,   378,   379,   630,   100,   120,   415,   416,     3,     3,
      61,    62,    64,    66,    67,    82,   114,   115,   116,   117,
     123,   132,   152,   160,   175,   182,   185,   188,   189,   205,
     239,   240,   243,   244,   249,   251,   256,   257,   262,   264,
     270,   272,   273,   278,   606,   197,     3,    16,   150,   195,
     614,   615,   616,     3,   197,   281,     3,   614,   107,   157,
     258,   626,     3,   404,   197,     3,   156,   281,   629,   277,
     517,   281,   524,   281,     3,     3,   574,   136,   245,   575,
      28,   274,   461,   266,   482,     3,     3,     3,     3,     3,
       3,   404,     3,     3,     3,    74,   281,    74,   281,   240,
     414,   564,     3,   240,   564,     3,   421,   426,   430,   421,
     421,   458,   124,   125,   275,     3,     3,   417,   428,   435,
     421,    65,   178,   254,   421,   456,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   415,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   415,   421,   421,   421,   415,   421,   421,   421,   421,
     421,   421,    28,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   415,   415,   415,   415,   415,   421,
     421,   415,   415,   415,   421,   421,     5,   415,   415,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   415,   421,   421,   421,   415,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   415,   421,   421,   421,
     421,   421,     6,    18,   193,   319,   414,    13,    14,    16,
      19,   421,    40,    47,   232,   414,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,     3,   482,     3,   480,     3,   514,     3,   133,
     154,   267,   495,   486,   481,   421,   415,   415,     3,   582,
     483,   177,   215,   492,   484,   163,   196,   490,     3,     3,
     271,     3,   402,   402,   274,   271,   274,     3,   273,     5,
     540,    42,    42,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   606,     3,   245,     3,     3,     3,     5,
       3,   379,     5,     5,   277,     5,    63,     5,   217,   217,
     623,   414,   414,   414,   602,   602,   602,   602,   602,   602,
     414,   602,   602,   602,    64,   603,   603,   602,   602,   602,
     414,   603,   602,   603,   414,   414,   414,    18,    36,    78,
     113,     3,   606,     3,     3,     3,   415,   416,   266,   414,
       3,     3,   197,   415,   197,    51,   545,   396,     3,   197,
     281,     3,   414,     3,   277,   525,     3,   154,   216,   351,
     413,   414,   608,   609,   415,   416,     4,   236,   237,   576,
     421,   198,   471,   482,   461,   502,   396,   504,     3,     3,
       3,   569,     3,   565,   271,   460,   569,   271,   460,   416,
     415,   253,   124,   125,   421,   421,   415,   421,   427,   460,
     136,   416,   415,   136,   421,   416,   416,   416,   415,   415,
     415,   415,   415,   415,   416,   416,   416,   416,   415,   416,
     416,   416,   415,   415,   415,   415,   416,   416,   415,   416,
     415,   415,   415,    51,   416,   416,   416,   416,   321,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   416,
     416,   416,   415,   416,   350,   350,   350,   415,   416,   415,
     416,   415,   350,   350,   416,   415,   415,   415,   415,   415,
     415,   415,   415,   416,   416,   416,   416,   416,   416,   416,
     416,   415,   416,   415,   415,   415,   416,   415,   416,   415,
     416,   416,   416,   416,   416,   415,   415,   415,   416,   416,
     416,     6,   193,   431,   433,   421,   421,   414,   421,    50,
     414,   414,   414,   422,   417,   461,   136,   416,   481,   164,
     164,   164,   460,   495,   415,    20,   413,   416,   461,   490,
     490,   163,   197,   484,   163,   414,   271,     4,     4,   411,
     414,   411,   410,     4,    45,    46,   542,   197,   197,    78,
     134,   201,   261,   606,   606,     3,   222,   222,   601,   606,
       3,   245,   245,     5,     5,     3,     3,   614,   614,     5,
     604,   605,   604,   604,     4,   607,   604,   604,   604,   605,
     605,   604,   604,   604,   607,   605,   604,   605,     5,     5,
       5,   193,   417,   414,   421,   414,   606,   606,   606,   213,
     616,   268,   391,     3,   327,   328,   329,   330,   510,   511,
     266,   414,   197,     3,    51,    60,     3,   223,   224,   140,
     546,     3,   266,   414,     3,     3,   197,   397,   517,   414,
     524,    94,     3,    71,    78,   134,   138,   155,   164,   201,
     261,   593,   594,   600,   487,     3,    87,    99,   135,   143,
     193,   242,   277,   414,   577,   578,   579,    63,   179,   474,
     461,     3,    20,   199,   416,   555,   415,   416,   414,   566,
     555,   566,   555,   426,   421,   421,   124,   253,    91,   416,
     417,   415,   421,   421,   421,   136,   161,   457,   457,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     606,   606,   421,   421,   421,     4,   350,   350,   350,   350,
     350,   350,   421,   421,   421,   421,   414,   414,   414,   350,
       5,   350,     5,   350,   414,   414,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   426,   460,   432,   434,
      50,   421,   425,   421,   423,   429,   424,   429,   460,   141,
     462,   482,     3,   495,   140,   496,   496,   496,   415,   487,
     421,     3,     3,   471,   484,   421,   197,   266,   493,   494,
     484,     4,   193,   520,   414,   403,   179,    20,     4,   193,
     530,    20,     4,   179,     3,   543,   543,   414,   164,   164,
     414,   601,   601,   606,    18,    39,    48,    51,    53,    56,
      71,    78,    79,   113,   130,   164,   193,   201,   261,   553,
     601,     3,     3,   222,   222,   415,   415,   415,   416,   259,
     280,    82,    83,   415,   416,   415,   415,   415,   415,    78,
     421,   510,    62,    66,   114,   117,   132,   152,   160,   249,
     251,   270,   617,   414,   414,   414,   414,   414,   414,   415,
     416,   268,   510,     3,   266,   414,    60,   618,   140,    40,
     107,   157,   241,   258,   245,   547,   545,   268,   510,   266,
     414,   197,     3,    20,   405,   406,   526,   527,   525,     3,
     414,   608,     3,   414,   164,   155,   164,   414,   414,   164,
     414,   415,   416,     3,   460,     4,    87,   249,     6,     4,
       4,   414,   578,   416,     3,     5,   472,   473,   421,   212,
     632,   113,   421,   164,     3,     3,   113,   421,   568,   416,
     555,   555,   124,   421,   414,   427,   140,   415,   415,   416,
     415,   421,   421,   415,   415,   415,   415,   415,   416,   416,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     416,   415,   414,   414,   414,   414,   414,   414,   415,   416,
     416,   415,   415,   436,   437,   438,   414,   415,   416,   414,
     415,   416,   414,   454,   455,   415,   416,   416,   416,   415,
     415,   416,   416,   415,   416,   415,   416,   415,   416,   415,
     415,   415,   415,   415,   415,   416,   416,   416,   415,   415,
     426,   460,   421,   460,   460,   415,   460,   415,   415,    63,
     148,   466,   461,   163,   414,   414,   414,     3,    20,    20,
     413,   474,   421,   414,   494,   416,   520,     4,     5,     4,
     416,     4,     5,   416,   277,   421,   414,   414,     3,   599,
     553,   553,   601,   193,     3,   414,   414,   414,    52,     3,
     414,     4,     4,     5,     6,     7,    72,   333,   334,   335,
     414,   164,   164,   553,   213,    51,    60,     5,   240,     4,
     605,     4,   605,   605,   414,   415,   415,    51,    60,   510,
       3,     3,     3,     3,     3,     3,   414,   415,   414,   268,
     391,   510,   618,     3,     4,     5,     6,     7,     8,    10,
      12,    16,    17,    18,    20,    26,    27,    28,    29,    30,
      40,    50,    51,    54,    59,    60,    61,    62,    63,    66,
      68,    69,    70,    73,    74,    76,    77,    78,    82,    96,
     101,   106,   107,   108,   113,   114,   116,   117,   118,   119,
     122,   124,   125,   126,   127,   129,   131,   132,   134,   136,
     137,   139,   140,   141,   142,   148,   150,   152,   153,   155,
     156,   157,   158,   159,   160,   162,   163,   164,   165,   166,
     177,   179,   181,   190,   192,   193,   194,   195,   196,   197,
     198,   201,   202,   207,   209,   210,   211,   213,   215,   217,
     218,   219,   220,   239,   240,   241,   249,   251,   252,   253,
     258,   260,   261,   262,   266,   270,   271,   274,   275,   276,
     277,   281,   322,   323,   324,   325,   326,   412,   413,   414,
     415,   416,   418,   619,   118,     3,   548,   266,   549,   546,
     414,   415,   268,   510,     3,   266,   414,     4,    20,    20,
     415,   416,   140,   593,    78,   134,   201,   261,   421,   414,
     414,   414,     3,   477,   477,   414,   599,   589,   608,   594,
     606,   578,   415,   579,    49,   112,   413,   464,   464,   416,
     181,   416,     3,    28,   633,   258,    20,   415,   416,   567,
     197,   557,     4,   421,   421,   415,   104,   105,   109,   111,
     144,   145,   147,   278,   279,   421,   421,   421,   440,   441,
     439,   442,   443,   444,   421,   421,   351,   467,   467,   467,
     445,   350,     4,     5,   449,   350,     4,     5,   453,   467,
     467,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   415,   415,   415,   415,   415,   421,   463,   421,
     471,   462,     3,   497,   497,   497,   414,   421,   421,     3,
     632,   477,   520,   416,    12,   530,    12,     3,     5,   415,
       3,   596,     3,   595,   415,   416,   553,     5,   421,     5,
      51,    78,   201,   261,   421,   414,   414,   414,   421,   617,
      60,   618,   415,     4,   421,    60,   618,   415,     3,   506,
     415,   415,   415,   416,   510,   510,   414,   414,   415,   124,
     618,   618,   618,   618,   618,   618,   217,   416,   414,   277,
     550,   547,   510,   414,   415,   414,   268,   510,   415,     5,
       4,   527,   271,   415,   414,   164,   164,   414,   415,   596,
     477,   477,   415,   416,   415,   595,   415,    48,   172,   197,
     228,   351,   588,   601,   415,     3,   473,   421,   421,   416,
     556,   113,   421,   113,   421,   414,    88,   632,   415,   415,
     415,   415,   415,   415,   467,   467,   467,   467,   467,   467,
     415,   416,   415,    63,   198,   469,   469,   469,   467,   414,
     415,   415,   467,   414,   415,   415,   467,   469,   469,   415,
     415,   415,   415,   415,   416,   415,   415,   416,   416,   416,
     464,   277,   416,   465,   474,   466,   415,   416,   415,   415,
       3,    20,   415,   416,   520,   164,   416,   164,    43,    18,
     415,   416,   415,   416,     3,   415,   416,   415,   415,   416,
     414,   414,   164,   415,   415,   415,   415,   415,    51,    60,
     618,   124,   415,   618,   124,   415,     3,   415,   415,   510,
       3,   124,   124,   124,   124,   124,   124,    60,     3,   421,
      78,   549,   415,   510,   510,   414,   415,   136,   589,   608,
     421,   414,   414,   599,   415,   415,   415,     3,   415,     5,
      20,   414,     3,    63,    63,   464,     3,     3,   561,   568,
     414,   558,   469,   469,   469,   469,   469,   469,   421,     3,
     468,    63,   415,   415,   415,   469,   446,   350,   350,   469,
     450,   350,   350,   469,   415,   415,   421,     5,     5,     5,
     214,   421,   140,   475,   471,     3,   415,   421,   520,   416,
      20,   530,    20,   269,   207,     3,     3,     5,    57,    58,
       5,   421,   421,    60,   618,   124,   124,   277,   507,   415,
     415,   506,    77,   131,   156,   166,   276,   618,   415,   414,
     550,   415,   415,   510,   414,   415,   596,   595,   415,   207,
       5,     3,   107,   248,   204,   268,   204,    20,   416,   415,
       3,   101,   559,   415,   415,   415,   415,   415,   415,   415,
     416,     3,   470,   415,   467,   414,   414,   415,   467,   414,
     414,   415,   415,   415,   416,   416,   464,   230,   258,   159,
     476,   474,   416,   520,     4,   415,   416,     4,     3,   415,
     415,   415,   415,   618,   124,   414,   415,   124,   421,   415,
       5,   415,   415,     3,   415,     3,     3,   414,   414,   414,
     421,     3,   415,   416,    90,   258,     3,   464,   416,   469,
     447,   448,   469,   451,   452,     4,     4,   231,   231,   477,
     520,   416,   530,   414,    57,    58,   124,     3,   508,   509,
     507,   415,   415,   207,   413,   414,     3,     3,     3,    20,
       3,   560,     3,   415,   467,   467,   415,   467,   467,   415,
     415,   180,   180,   416,   520,   415,     3,   597,    20,   415,
     416,   245,     3,     3,   597,   415,   415,   415,   421,   240,
     464,   469,   469,   469,   469,   520,   416,   415,   416,     5,
     509,   414,   413,   414,   414,   415,   414,   229,   561,   415,
     415,   415,   415,   416,   520,   598,     3,     5,     3,   597,
     597,   598,   228,   590,   591,     5,   520,   416,    18,    97,
     183,   197,   415,   414,   415,   415,    18,     3,   415,   416,
     416,   520,    97,   269,   151,   137,   200,   235,   107,   258,
     597,   598,   598,   271,   591,   520,   416,    98,   149,    74,
     192,   210,   240,    74,   192,   210,   240,   415,   174,   415,
     520,   113,   193,   113,   193,   598,   250,   415,     4,   184,
     197,   197,   191,   191,     5,     5
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
#line 502 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 508 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 509 "parser/evoparser.y"
    { emit("EXCLUDEDCOL %s", (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_excluded((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 7:
#line 511 "parser/evoparser.y"
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
#line 524 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); ExprNode *uv = expr_make_func0(EXPR_USERVAR, (yyvsp[(1) - (1)].strval)); if(uv) strncpy(uv->val.strval, (yyvsp[(1) - (1)].strval), 255); free((yyvsp[(1) - (1)].strval)); (yyval.exprval) = uv; ;}
    break;

  case 9:
#line 526 "parser/evoparser.y"
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
#line 554 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 562 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 12:
#line 570 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 13:
#line 576 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 14:
#line 583 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 584 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 585 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 586 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 587 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 19:
#line 588 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 20:
#line 589 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 21:
#line 590 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 22:
#line 591 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 592 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 593 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 594 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 595 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 596 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 28:
#line 597 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 29:
#line 598 "parser/evoparser.y"
    { emit("JSON_ARROW"); (yyval.exprval) = expr_make_json_arrow((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 30:
#line 599 "parser/evoparser.y"
    { emit("JSON_ARROW_TEXT"); (yyval.exprval) = expr_make_json_arrow_text((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 31:
#line 600 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 32:
#line 601 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 33:
#line 603 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 34:
#line 608 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 35:
#line 609 "parser/evoparser.y"
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
#line 617 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 37:
#line 618 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); /* TODO: ANY/SOME/ALL */ ;}
    break;

  case 38:
#line 619 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 39:
#line 620 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPANYSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 40:
#line 621 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 41:
#line 622 "parser/evoparser.y"
    { g_in_subquery = 0; emit("CMPALLSELECT %d", (yyvsp[(2) - (7)].subtok)); (yyval.exprval) = (yyvsp[(1) - (7)].exprval); ;}
    break;

  case 42:
#line 627 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 43:
#line 629 "parser/evoparser.y"
    { emit("CMPANYARRAY %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = expr_make_any_array((yyvsp[(2) - (6)].subtok), (yyvsp[(1) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 44:
#line 632 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 45:
#line 633 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 46:
#line 634 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 47:
#line 635 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 48:
#line 636 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 49:
#line 639 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 50:
#line 640 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 51:
#line 644 "parser/evoparser.y"
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
#line 653 "parser/evoparser.y"
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
#line 671 "parser/evoparser.y"
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
#line 680 "parser/evoparser.y"
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
#line 699 "parser/evoparser.y"
    { g_expr.arrListCount = 0; g_in_array_literal++; ;}
    break;

  case 56:
#line 700 "parser/evoparser.y"
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
#line 760 "parser/evoparser.y"
    {
        GetInsertions("{}");
        emit("ARRLIT 0");
        (yyval.exprval) = expr_make_array_literal(NULL, 0);
    ;}
    break;

  case 58:
#line 769 "parser/evoparser.y"
    { emit("SUBSCRIPT"); (yyval.exprval) = expr_make_subscript((yyvsp[(1) - (4)].exprval), (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 775 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 60:
#line 780 "parser/evoparser.y"
    { emit("CALL 1 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 61:
#line 782 "parser/evoparser.y"
    { emit("CALL 2 ARRAY_LENGTH"); (yyval.exprval) = expr_make_array_length((yyvsp[(3) - (6)].exprval)); /* dim ignored in v1 */ ;}
    break;

  case 62:
#line 784 "parser/evoparser.y"
    { emit("CALL 1 UNNEST"); (yyval.exprval) = expr_make_unnest((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 63:
#line 789 "parser/evoparser.y"
    {
        emit("CALL 2 EVO_NOTIFY");
        (yyval.exprval) = expr_make_evo_notify((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
    ;}
    break;

  case 64:
#line 794 "parser/evoparser.y"
    {
        emit("CALL 0 PG_LISTENING_CHANNELS");
        (yyval.exprval) = expr_make_pg_listening_channels();
    ;}
    break;

  case 65:
#line 802 "parser/evoparser.y"
    { emit("CALL 2 COSINE_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_COSINE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "COSINE_DISTANCE"); ;}
    break;

  case 66:
#line 804 "parser/evoparser.y"
    { emit("CALL 2 L2_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L2_DISTANCE"); ;}
    break;

  case 67:
#line 806 "parser/evoparser.y"
    { emit("CALL 2 INNER_PRODUCT"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INNER_PRODUCT"); ;}
    break;

  case 68:
#line 808 "parser/evoparser.y"
    { emit("CALL 2 L1_DISTANCE"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L1, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "L1_DISTANCE"); ;}
    break;

  case 69:
#line 810 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_DIM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_DIM, (yyvsp[(3) - (4)].exprval), "VECTOR_DIM"); ;}
    break;

  case 70:
#line 812 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORM"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORM, (yyvsp[(3) - (4)].exprval), "VECTOR_NORM"); ;}
    break;

  case 71:
#line 814 "parser/evoparser.y"
    { emit("CALL 1 VECTOR_NORMALIZE"); (yyval.exprval) = expr_make_func1(EXPR_VECTOR_NORMALIZE, (yyvsp[(3) - (4)].exprval), "VECTOR_NORMALIZE"); ;}
    break;

  case 72:
#line 816 "parser/evoparser.y"
    { emit("VEC_L2"); (yyval.exprval) = expr_make_func2(EXPR_VEC_L2, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<->"); ;}
    break;

  case 73:
#line 818 "parser/evoparser.y"
    { emit("VEC_INNER"); (yyval.exprval) = expr_make_func2(EXPR_VEC_INNER, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "<#>"); ;}
    break;

  case 74:
#line 820 "parser/evoparser.y"
    {
        emit("CALL 4 HNSW_KNN %d", (yyvsp[(9) - (10)].intval));
        ExprNode *n = expr_make_func3(EXPR_HNSW_KNN, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), (yyvsp[(7) - (10)].exprval), "HNSW_KNN");
        if (n) n->val.intval = (yyvsp[(9) - (10)].intval);
        (yyval.exprval) = n;
    ;}
    break;

  case 75:
#line 827 "parser/evoparser.y"
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
#line 838 "parser/evoparser.y"
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
#line 848 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 79:
#line 852 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 80:
#line 852 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 81:
#line 853 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 82:
#line 853 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 83:
#line 854 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 84:
#line 855 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("INSELECT");
        (yyval.exprval) = expr_make_in_subquery((yyvsp[(1) - (6)].exprval), sql);
        free(sql);
    ;}
    break;

  case 85:
#line 862 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 86:
#line 863 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("NOTINSELECT");
        (yyval.exprval) = expr_make_not_in_subquery((yyvsp[(1) - (7)].exprval), sql);
        free(sql);
    ;}
    break;

  case 87:
#line 870 "parser/evoparser.y"
    { g_subq_mark = g_lex_pos; g_in_subquery = 1; ;}
    break;

  case 88:
#line 871 "parser/evoparser.y"
    {
        g_in_subquery = 0;
        char *sql = evo_extract_subq_sql();
        emit("EXISTSSELECT");
        (yyval.exprval) = expr_make_exists_subquery(sql, (yyvsp[(1) - (5)].subtok));
        free(sql);
    ;}
    break;

  case 89:
#line 881 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 90:
#line 885 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 91:
#line 886 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 92:
#line 887 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 93:
#line 888 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 94:
#line 889 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 95:
#line 890 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 96:
#line 891 "parser/evoparser.y"
    { emit("CALL 1 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (4)].exprval), "GROUP_CONCAT"); if(e) strcpy(e->val.strval, ","); (yyval.exprval) = e; ;}
    break;

  case 97:
#line 892 "parser/evoparser.y"
    { emit("CALL 2 GROUP_CONCAT"); ExprNode *e = expr_make_func1(EXPR_GROUP_CONCAT, (yyvsp[(3) - (6)].exprval), "GROUP_CONCAT"); if(e) strncpy(e->val.strval, (yyvsp[(5) - (6)].strval), 255); free((yyvsp[(5) - (6)].strval)); (yyval.exprval) = e; ;}
    break;

  case 98:
#line 896 "parser/evoparser.y"
    { AddWindowSpec(EXPR_ROW_NUMBER, NULL); ;}
    break;

  case 99:
#line 897 "parser/evoparser.y"
    { emit("WINDOW ROW_NUMBER"); (yyval.exprval) = expr_make_window(EXPR_ROW_NUMBER, NULL, "ROW_NUMBER()"); ;}
    break;

  case 100:
#line 898 "parser/evoparser.y"
    { AddWindowSpec(EXPR_RANK, NULL); ;}
    break;

  case 101:
#line 899 "parser/evoparser.y"
    { emit("WINDOW RANK"); (yyval.exprval) = expr_make_window(EXPR_RANK, NULL, "RANK()"); ;}
    break;

  case 102:
#line 900 "parser/evoparser.y"
    { AddWindowSpec(EXPR_DENSE_RANK, NULL); ;}
    break;

  case 103:
#line 901 "parser/evoparser.y"
    { emit("WINDOW DENSE_RANK"); (yyval.exprval) = expr_make_window(EXPR_DENSE_RANK, NULL, "DENSE_RANK()"); ;}
    break;

  case 104:
#line 903 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_SUM, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 105:
#line 904 "parser/evoparser.y"
    { emit("WINDOW SUM"); (yyval.exprval) = expr_make_window(EXPR_WIN_SUM, (yyvsp[(3) - (10)].exprval), "SUM"); ;}
    break;

  case 106:
#line 905 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT_STAR, NULL); ;}
    break;

  case 107:
#line 906 "parser/evoparser.y"
    { emit("WINDOW COUNT_STAR"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT_STAR, NULL, "COUNT"); ;}
    break;

  case 108:
#line 907 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_COUNT, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 109:
#line 908 "parser/evoparser.y"
    { emit("WINDOW COUNT"); (yyval.exprval) = expr_make_window(EXPR_WIN_COUNT, (yyvsp[(3) - (10)].exprval), "COUNT"); ;}
    break;

  case 110:
#line 909 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_AVG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 111:
#line 910 "parser/evoparser.y"
    { emit("WINDOW AVG"); (yyval.exprval) = expr_make_window(EXPR_WIN_AVG, (yyvsp[(3) - (10)].exprval), "AVG"); ;}
    break;

  case 112:
#line 911 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MIN, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 113:
#line 912 "parser/evoparser.y"
    { emit("WINDOW MIN"); (yyval.exprval) = expr_make_window(EXPR_WIN_MIN, (yyvsp[(3) - (10)].exprval), "MIN"); ;}
    break;

  case 114:
#line 913 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_MAX, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 115:
#line 914 "parser/evoparser.y"
    { emit("WINDOW MAX"); (yyval.exprval) = expr_make_window(EXPR_WIN_MAX, (yyvsp[(3) - (10)].exprval), "MAX"); ;}
    break;

  case 116:
#line 916 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 117:
#line 917 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval), "LEAD"); ;}
    break;

  case 118:
#line 918 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 119:
#line 919 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (12)].exprval), "LEAD"); ;}
    break;

  case 120:
#line 920 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 121:
#line 921 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 122:
#line 922 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LEAD, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b[32]; snprintf(_b,sizeof(_b),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b); ;}
    break;

  case 123:
#line 923 "parser/evoparser.y"
    { emit("WINDOW LEAD"); (yyval.exprval) = expr_make_window(EXPR_WIN_LEAD, (yyvsp[(3) - (14)].exprval), "LEAD"); ;}
    break;

  case 124:
#line 924 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (6)].exprval)); ;}
    break;

  case 125:
#line 925 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval), "LAG"); ;}
    break;

  case 126:
#line 926 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (8)].exprval)); SetWindowOffset((yyvsp[(5) - (8)].intval)); ;}
    break;

  case 127:
#line 927 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (12)].exprval), "LAG"); ;}
    break;

  case 128:
#line 928 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); SetWindowDefault((yyvsp[(7) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 129:
#line 929 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 130:
#line 930 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_LAG, (yyvsp[(3) - (10)].exprval)); SetWindowOffset((yyvsp[(5) - (10)].intval)); char _b2[32]; snprintf(_b2,sizeof(_b2),"%d",(yyvsp[(7) - (10)].intval)); SetWindowDefault(_b2); ;}
    break;

  case 131:
#line 931 "parser/evoparser.y"
    { emit("WINDOW LAG"); (yyval.exprval) = expr_make_window(EXPR_WIN_LAG, (yyvsp[(3) - (14)].exprval), "LAG"); ;}
    break;

  case 132:
#line 933 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_NTILE, NULL); SetWindowOffset((yyvsp[(3) - (6)].intval)); ;}
    break;

  case 133:
#line 934 "parser/evoparser.y"
    { emit("WINDOW NTILE"); ExprNode *e = expr_make_window(EXPR_WIN_NTILE, NULL, "NTILE()"); if(e) e->val.intval = (yyvsp[(3) - (10)].intval); (yyval.exprval) = e; ;}
    break;

  case 134:
#line 935 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_PERCENT_RANK, NULL); ;}
    break;

  case 135:
#line 936 "parser/evoparser.y"
    { emit("WINDOW PERCENT_RANK"); (yyval.exprval) = expr_make_window(EXPR_WIN_PERCENT_RANK, NULL, "PERCENT_RANK()"); ;}
    break;

  case 136:
#line 937 "parser/evoparser.y"
    { AddWindowSpec(EXPR_WIN_CUME_DIST, NULL); ;}
    break;

  case 137:
#line 938 "parser/evoparser.y"
    { emit("WINDOW CUME_DIST"); (yyval.exprval) = expr_make_window(EXPR_WIN_CUME_DIST, NULL, "CUME_DIST()"); ;}
    break;

  case 138:
#line 941 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 139:
#line 942 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 140:
#line 943 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 141:
#line 944 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 142:
#line 945 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 143:
#line 946 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 144:
#line 947 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 145:
#line 948 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 146:
#line 949 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 147:
#line 950 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 148:
#line 951 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 149:
#line 952 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 150:
#line 953 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 151:
#line 954 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 152:
#line 955 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 153:
#line 956 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 154:
#line 957 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 155:
#line 958 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 156:
#line 959 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 157:
#line 960 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 158:
#line 961 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 159:
#line 962 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 160:
#line 963 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 161:
#line 964 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 162:
#line 965 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 163:
#line 966 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 164:
#line 967 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 165:
#line 968 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 166:
#line 969 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 167:
#line 970 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 168:
#line 971 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 169:
#line 972 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 170:
#line 973 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 171:
#line 974 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 172:
#line 976 "parser/evoparser.y"
    { emit("CALL 0 NOW"); (yyval.exprval) = expr_make_func0(EXPR_NOW, "NOW"); ;}
    break;

  case 173:
#line 977 "parser/evoparser.y"
    { emit("CALL 2 DATEDIFF"); (yyval.exprval) = expr_make_func2(EXPR_DATEDIFF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "DATEDIFF"); ;}
    break;

  case 174:
#line 978 "parser/evoparser.y"
    { emit("CALL 1 YEAR"); (yyval.exprval) = expr_make_func1(EXPR_YEAR, (yyvsp[(3) - (4)].exprval), "YEAR"); ;}
    break;

  case 175:
#line 979 "parser/evoparser.y"
    { emit("CALL 1 MONTH"); (yyval.exprval) = expr_make_func1(EXPR_MONTH, (yyvsp[(3) - (4)].exprval), "MONTH"); ;}
    break;

  case 176:
#line 980 "parser/evoparser.y"
    { emit("CALL 1 DAY"); (yyval.exprval) = expr_make_func1(EXPR_DAY, (yyvsp[(3) - (4)].exprval), "DAY"); ;}
    break;

  case 177:
#line 981 "parser/evoparser.y"
    { emit("CALL 1 HOUR"); (yyval.exprval) = expr_make_func1(EXPR_HOUR, (yyvsp[(3) - (4)].exprval), "HOUR"); ;}
    break;

  case 178:
#line 982 "parser/evoparser.y"
    { emit("CALL 1 MINUTE"); (yyval.exprval) = expr_make_func1(EXPR_MINUTE, (yyvsp[(3) - (4)].exprval), "MINUTE"); ;}
    break;

  case 179:
#line 983 "parser/evoparser.y"
    { emit("CALL 1 SECOND"); (yyval.exprval) = expr_make_func1(EXPR_SECOND, (yyvsp[(3) - (4)].exprval), "SECOND"); ;}
    break;

  case 180:
#line 985 "parser/evoparser.y"
    { emit("CALL 2 JSON_EXTRACT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_EXTRACT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_EXTRACT"); ;}
    break;

  case 181:
#line 986 "parser/evoparser.y"
    { emit("CALL 1 JSON_UNQUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_UNQUOTE, (yyvsp[(3) - (4)].exprval), "JSON_UNQUOTE"); ;}
    break;

  case 182:
#line 987 "parser/evoparser.y"
    { emit("CALL 1 JSON_TYPE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_TYPE, (yyvsp[(3) - (4)].exprval), "JSON_TYPE"); ;}
    break;

  case 183:
#line 988 "parser/evoparser.y"
    { emit("CALL 1 JSON_LENGTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_LENGTH, (yyvsp[(3) - (4)].exprval), "JSON_LENGTH"); ;}
    break;

  case 184:
#line 989 "parser/evoparser.y"
    { emit("CALL 1 JSON_DEPTH"); (yyval.exprval) = expr_make_func1(EXPR_JSON_DEPTH, (yyvsp[(3) - (4)].exprval), "JSON_DEPTH"); ;}
    break;

  case 185:
#line 990 "parser/evoparser.y"
    { emit("CALL 1 JSON_VALID"); (yyval.exprval) = expr_make_func1(EXPR_JSON_VALID, (yyvsp[(3) - (4)].exprval), "JSON_VALID"); ;}
    break;

  case 186:
#line 991 "parser/evoparser.y"
    { emit("CALL 1 JSON_KEYS"); (yyval.exprval) = expr_make_func1(EXPR_JSON_KEYS, (yyvsp[(3) - (4)].exprval), "JSON_KEYS"); ;}
    break;

  case 187:
#line 992 "parser/evoparser.y"
    { emit("CALL 1 JSON_PRETTY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_PRETTY, (yyvsp[(3) - (4)].exprval), "JSON_PRETTY"); ;}
    break;

  case 188:
#line 993 "parser/evoparser.y"
    { emit("CALL 1 JSON_QUOTE"); (yyval.exprval) = expr_make_func1(EXPR_JSON_QUOTE, (yyvsp[(3) - (4)].exprval), "JSON_QUOTE"); ;}
    break;

  case 189:
#line 994 "parser/evoparser.y"
    { emit("CALL 3 JSON_SET"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SET, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SET"); ;}
    break;

  case 190:
#line 995 "parser/evoparser.y"
    { emit("CALL 3 JSON_INSERT"); (yyval.exprval) = expr_make_func3(EXPR_JSON_INSERT, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_INSERT"); ;}
    break;

  case 191:
#line 996 "parser/evoparser.y"
    { emit("CALL 3 JSON_REPLACE"); (yyval.exprval) = expr_make_func3(EXPR_JSON_REPLACE, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_REPLACE"); ;}
    break;

  case 192:
#line 997 "parser/evoparser.y"
    { emit("CALL 2 JSON_REMOVE"); (yyval.exprval) = expr_make_func2(EXPR_JSON_REMOVE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_REMOVE"); ;}
    break;

  case 193:
#line 998 "parser/evoparser.y"
    { emit("CALL 2 JSON_CONTAINS"); (yyval.exprval) = expr_make_func2(EXPR_JSON_CONTAINS, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_CONTAINS"); ;}
    break;

  case 194:
#line 999 "parser/evoparser.y"
    { emit("CALL 3 JSON_CONTAINS_PATH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_CONTAINS_PATH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_CONTAINS_PATH"); ;}
    break;

  case 195:
#line 1000 "parser/evoparser.y"
    { emit("CALL 3 JSON_SEARCH"); (yyval.exprval) = expr_make_func3(EXPR_JSON_SEARCH, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_SEARCH"); ;}
    break;

  case 196:
#line 1001 "parser/evoparser.y"
    { emit("CALL 2 JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_OBJECT"); ;}
    break;

  case 197:
#line 1002 "parser/evoparser.y"
    { emit("CALL 4 JSON_OBJECT"); ExprNode *p1 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval), "JSON_OBJECT"); ExprNode *p2 = expr_make_func2(EXPR_JSON_OBJECT, (yyvsp[(7) - (10)].exprval), (yyvsp[(9) - (10)].exprval), "JSON_OBJECT"); (yyval.exprval) = expr_make_func2(EXPR_JSON_OBJECT, p1, p2, "JSON_OBJECT_MERGE"); ;}
    break;

  case 198:
#line 1003 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAY"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAY, (yyvsp[(3) - (4)].exprval), "JSON_ARRAY"); ;}
    break;

  case 199:
#line 1004 "parser/evoparser.y"
    { emit("CALL 2 JSON_ARRAY"); (yyval.exprval) = expr_make_func2(EXPR_JSON_ARRAY, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "JSON_ARRAY"); ;}
    break;

  case 200:
#line 1005 "parser/evoparser.y"
    { emit("CALL 3 JSON_ARRAY"); (yyval.exprval) = expr_make_func3(EXPR_JSON_ARRAY, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "JSON_ARRAY"); ;}
    break;

  case 201:
#line 1006 "parser/evoparser.y"
    { emit("CALL 1 JSON_ARRAYAGG"); (yyval.exprval) = expr_make_func1(EXPR_JSON_ARRAYAGG, (yyvsp[(3) - (4)].exprval), "JSON_ARRAYAGG"); ;}
    break;

  case 202:
#line 1008 "parser/evoparser.y"
    { emit("CALL 1 NEXTVAL"); (yyval.exprval) = expr_make_func1(EXPR_NEXTVAL, (yyvsp[(3) - (4)].exprval), "NEXTVAL"); ;}
    break;

  case 203:
#line 1009 "parser/evoparser.y"
    { emit("CALL 1 CURRVAL"); (yyval.exprval) = expr_make_func1(EXPR_CURRVAL, (yyvsp[(3) - (4)].exprval), "CURRVAL"); ;}
    break;

  case 204:
#line 1010 "parser/evoparser.y"
    { emit("CALL 2 SETVAL"); (yyval.exprval) = expr_make_func2(EXPR_SETVAL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "SETVAL"); ;}
    break;

  case 205:
#line 1011 "parser/evoparser.y"
    { emit("CALL 3 SETVAL"); (yyval.exprval) = expr_make_func3(EXPR_SETVAL, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "SETVAL"); ;}
    break;

  case 206:
#line 1012 "parser/evoparser.y"
    { emit("CALL 0 LASTVAL"); (yyval.exprval) = expr_make_func0(EXPR_LASTVAL, "LASTVAL"); ;}
    break;

  case 207:
#line 1014 "parser/evoparser.y"
    { emit("CAST %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CAST"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 208:
#line 1015 "parser/evoparser.y"
    { emit("CONVERT %d", (yyvsp[(5) - (6)].intval)); ExprNode *e = expr_make_func1(EXPR_CAST, (yyvsp[(3) - (6)].exprval), "CONVERT"); if(e) e->val.intval = (yyvsp[(5) - (6)].intval); (yyval.exprval) = e; ;}
    break;

  case 209:
#line 1017 "parser/evoparser.y"
    { emit("CALL 2 NULLIF"); (yyval.exprval) = expr_make_func2(EXPR_NULLIF, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "NULLIF"); ;}
    break;

  case 210:
#line 1018 "parser/evoparser.y"
    { emit("CALL 2 IFNULL"); (yyval.exprval) = expr_make_func2(EXPR_IFNULL, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "IFNULL"); ;}
    break;

  case 211:
#line 1019 "parser/evoparser.y"
    { emit("CALL 3 IF"); (yyval.exprval) = expr_make_func3(EXPR_IF, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "IF"); ;}
    break;

  case 212:
#line 1021 "parser/evoparser.y"
    { emit("ISUNKNOWN"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 213:
#line 1022 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 214:
#line 1023 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 215:
#line 1024 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 216:
#line 1031 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 217:
#line 1038 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 218:
#line 1045 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 219:
#line 1049 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SCOPE_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 220:
#line 1053 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_IDENTITY");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 221:
#line 1057 "parser/evoparser.y"
    {
                                                        emit("CALL 0 AT_LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 222:
#line 1061 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 223:
#line 1065 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 224:
#line 1071 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 225:
#line 1072 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 226:
#line 1073 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 227:
#line 1077 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_ADD");
        /* $5 = unit code (encoded as literal), interval value is in $5's left child */
        (yyval.exprval) = expr_make_func3(EXPR_DATE_ADD, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_ADD");
    ;}
    break;

  case 228:
#line 1083 "parser/evoparser.y"
    {
        emit("CALL 3 DATE_SUB");
        (yyval.exprval) = expr_make_func3(EXPR_DATE_SUB, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL, "DATE_SUB");
    ;}
    break;

  case 229:
#line 1089 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "YEAR"); ;}
    break;

  case 230:
#line 1090 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 231:
#line 1091 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 232:
#line 1092 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 233:
#line 1093 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "DAY"); ;}
    break;

  case 234:
#line 1094 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "MONTH"); ;}
    break;

  case 235:
#line 1095 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 236:
#line 1096 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 237:
#line 1097 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); if ((yyval.exprval)) snprintf((yyval.exprval)->display, sizeof((yyval.exprval)->display), "HOUR"); ;}
    break;

  case 238:
#line 1101 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 239:
#line 1103 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 240:
#line 1105 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 241:
#line 1107 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 242:
#line 1111 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 243:
#line 1119 "parser/evoparser.y"
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
#line 1129 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 245:
#line 1130 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 246:
#line 1133 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = expr_make_func2(EXPR_REGEXP, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval), "REGEXP"); ;}
    break;

  case 247:
#line 1134 "parser/evoparser.y"
    { emit("REGEXP NOT"); (yyval.exprval) = expr_make_func2(EXPR_NOT_REGEXP, (yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval), "NOT REGEXP"); ;}
    break;

  case 248:
#line 1138 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 249:
#line 1146 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 250:
#line 1154 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 251:
#line 1162 "parser/evoparser.y"
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
#line 1176 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 253:
#line 1185 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 254:
#line 1190 "parser/evoparser.y"
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
#line 1203 "parser/evoparser.y"
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
#line 1216 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 259:
#line 1218 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 260:
#line 1221 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 261:
#line 1228 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 262:
#line 1236 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 263:
#line 1237 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1238 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 265:
#line 1241 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1242 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1246 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 271:
#line 1255 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(1) - (1)].strval)); AddWindowPartitionCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 272:
#line 1257 "parser/evoparser.y"
    { emit("WINDOW PARTITION %s", (yyvsp[(3) - (3)].strval)); AddWindowPartitionCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 275:
#line 1265 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); AddWindowOrderCol((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval)); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 276:
#line 1267 "parser/evoparser.y"
    { emit("WINDOW ORDER %s %d", (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); AddWindowOrderCol((yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].intval)); free((yyvsp[(3) - (4)].strval)); ;}
    break;

  case 281:
#line 1279 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 282:
#line 1285 "parser/evoparser.y"
    {
        char qn[256]; snprintf(qn, sizeof(qn), "%.127s.%.127s", (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].strval));
        emit("ORDERBY %s %d", qn, (yyvsp[(4) - (4)].intval));
        AddOrderByColumn(qn, (yyvsp[(4) - (4)].intval));
        free((yyvsp[(1) - (4)].strval)); free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 283:
#line 1292 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 284:
#line 1300 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 285:
#line 1301 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 286:
#line 1302 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 287:
#line 1303 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 288:
#line 1306 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 289:
#line 1307 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 290:
#line 1308 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 291:
#line 1309 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 292:
#line 1310 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 294:
#line 1314 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 295:
#line 1317 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 296:
#line 1318 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 297:
#line 1321 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 298:
#line 1322 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 299:
#line 1323 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 300:
#line 1324 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 301:
#line 1325 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 302:
#line 1326 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 303:
#line 1327 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 304:
#line 1328 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 305:
#line 1329 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 306:
#line 1332 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 307:
#line 1333 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 308:
#line 1335 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 309:
#line 1343 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 310:
#line 1348 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 311:
#line 1349 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 312:
#line 1350 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 313:
#line 1353 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 314:
#line 1354 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 317:
#line 1363 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 318:
#line 1371 "parser/evoparser.y"
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
#line 1380 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 320:
#line 1381 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 321:
#line 1383 "parser/evoparser.y"
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
#line 1392 "parser/evoparser.y"
    {
        emit("UNNEST unnest");
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (4)].exprval), "unnest");
    ;}
    break;

  case 323:
#line 1397 "parser/evoparser.y"
    {
        emit("UNNEST %s", (yyvsp[(6) - (6)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (6)].exprval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 324:
#line 1403 "parser/evoparser.y"
    {
        /* PG-style column alias: unnest(arr) AS u(v) — the column takes
         * the inner name; v1 uses it as the result column name. */
        emit("UNNEST %s", (yyvsp[(8) - (9)].strval));
        if (g_qctx) AddUnnestTable((yyvsp[(3) - (9)].exprval), (yyvsp[(8) - (9)].strval));
        free((yyvsp[(6) - (9)].strval)); free((yyvsp[(8) - (9)].strval));
    ;}
    break;

  case 325:
#line 1410 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 326:
#line 1414 "parser/evoparser.y"
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
#line 1434 "parser/evoparser.y"
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
#line 1460 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 331:
#line 1462 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 332:
#line 1464 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 333:
#line 1466 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 334:
#line 1468 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 335:
#line 1471 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 336:
#line 1472 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 337:
#line 1473 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 338:
#line 1476 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1477 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 340:
#line 1480 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 341:
#line 1481 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 342:
#line 1484 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 343:
#line 1485 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 344:
#line 1486 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 347:
#line 1493 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 348:
#line 1494 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 349:
#line 1499 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 350:
#line 1501 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 351:
#line 1503 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 353:
#line 1507 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1508 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 355:
#line 1511 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 356:
#line 1512 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 357:
#line 1515 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 358:
#line 1520 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 359:
#line 1530 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetDelTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 360:
#line 1537 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 361:
#line 1538 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 362:
#line 1539 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 363:
#line 1540 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 364:
#line 1545 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 365:
#line 1549 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 366:
#line 1551 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 369:
#line 1557 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 370:
#line 1562 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 371:
#line 1569 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (4)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 372:
#line 1576 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (6)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (6)].strval));
        free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 374:
#line 1588 "parser/evoparser.y"
    { g_drop.dropCascade = 1; ;}
    break;

  case 375:
#line 1589 "parser/evoparser.y"
    { g_drop.dropCascade = 0; ;}
    break;

  case 376:
#line 1594 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 377:
#line 1601 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 378:
#line 1608 "parser/evoparser.y"
    {
        emit("CREATEINDEX FT %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        SetIndexFulltext();
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 379:
#line 1616 "parser/evoparser.y"
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
#line 1626 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 381:
#line 1634 "parser/evoparser.y"
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
#line 1644 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 383:
#line 1652 "parser/evoparser.y"
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
#line 1661 "parser/evoparser.y"
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
#line 1670 "parser/evoparser.y"
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
#line 1680 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 387:
#line 1688 "parser/evoparser.y"
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
#line 1697 "parser/evoparser.y"
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
#line 1706 "parser/evoparser.y"
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
#line 1716 "parser/evoparser.y"
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
#line 1725 "parser/evoparser.y"
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
#line 1742 "parser/evoparser.y"
    {
        emit("CREATEHNSWINDEX %s ON %s (%s) dist=%d m=%d ef=%d",
             (yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval), (yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexUsingHnsw((yyvsp[(10) - (12)].intval), (yyvsp[(12) - (12)].intval) >> 16, (yyvsp[(12) - (12)].intval) & 0xFFFF);
        SetIndexInfo((yyvsp[(3) - (12)].strval), (yyvsp[(5) - (12)].strval), (yyvsp[(9) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(5) - (12)].strval)); free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 393:
#line 1750 "parser/evoparser.y"
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
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 395:
#line 1763 "parser/evoparser.y"
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
#line 1776 "parser/evoparser.y"
    { (yyval.intval) = (16 << 16) | 64; ;}
    break;

  case 397:
#line 1777 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(3) - (4)].intval); ;}
    break;

  case 398:
#line 1780 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (1)].intval); ;}
    break;

  case 399:
#line 1782 "parser/evoparser.y"
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
#line 1794 "parser/evoparser.y"
    {
        int m = 0, ef = 0;
        if      (strcasecmp((yyvsp[(1) - (3)].strval), "m") == 0)                m  = (yyvsp[(3) - (3)].intval);
        else if (strcasecmp((yyvsp[(1) - (3)].strval), "ef_construction") == 0)  ef = (yyvsp[(3) - (3)].intval);
        (yyval.intval) = (m << 16) | ef;
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 401:
#line 1804 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 402:
#line 1809 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 403:
#line 1814 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 404:
#line 1820 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 405:
#line 1827 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 406:
#line 1834 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 407:
#line 1841 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 408:
#line 1851 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 409:
#line 1858 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 410:
#line 1867 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 411:
#line 1874 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 412:
#line 1880 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 413:
#line 1888 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 414:
#line 1894 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 416:
#line 1902 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 417:
#line 1903 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 418:
#line 1904 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 419:
#line 1905 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 420:
#line 1921 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 421:
#line 1922 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 422:
#line 1923 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 423:
#line 1932 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 424:
#line 1933 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1938 "parser/evoparser.y"
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
#line 1948 "parser/evoparser.y"
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
#line 1963 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 428:
#line 1964 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(5) - (6)].strval); ;}
    break;

  case 429:
#line 1969 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE %s", (yyvsp[(4) - (4)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(4) - (4)].strval));
        DropCheckpointStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 430:
#line 1977 "parser/evoparser.y"
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
#line 1986 "parser/evoparser.y"
    {
        emit("DROP CHECKPOINT STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetCheckpointOpts();
        SetCheckpointStoreName((yyvsp[(6) - (6)].strval));
        DropCheckpointStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 432:
#line 2008 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 433:
#line 2009 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 434:
#line 2010 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 435:
#line 2015 "parser/evoparser.y"
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
#line 2032 "parser/evoparser.y"
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
#line 2053 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 438:
#line 2054 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 439:
#line 2060 "parser/evoparser.y"
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
#line 2069 "parser/evoparser.y"
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
#line 2083 "parser/evoparser.y"
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
#line 2092 "parser/evoparser.y"
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
#line 2117 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 444:
#line 2118 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 445:
#line 2119 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 446:
#line 2120 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 447:
#line 2121 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 448:
#line 2122 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 449:
#line 2123 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 450:
#line 2128 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE %s", (yyvsp[(4) - (6)].strval));
        SetMemoryStoreName((yyvsp[(4) - (6)].strval));
        CreateMemoryStoreProcess(0);
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 451:
#line 2135 "parser/evoparser.y"
    {
        emit("CREATE MEMORY STORE IF NOT EXISTS %s", (yyvsp[(6) - (8)].strval));
        SetMemoryStoreName((yyvsp[(6) - (8)].strval));
        CreateMemoryStoreProcess(1);
        free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 452:
#line 2146 "parser/evoparser.y"
    { ResetMemoryOpts(); ;}
    break;

  case 457:
#line 2160 "parser/evoparser.y"
    { SetMemoryEmbeddingDim((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 458:
#line 2162 "parser/evoparser.y"
    { SetMemoryDistance((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 459:
#line 2167 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s", (yyvsp[(4) - (4)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (4)].strval));
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (4)].strval));
    ;}
    break;

  case 460:
#line 2175 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE %s CASCADE", (yyvsp[(4) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (5)].strval));
        SetMemoryStoreCascade(1);
        DropMemoryStoreProcess(0);
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 461:
#line 2184 "parser/evoparser.y"
    {
        emit("DROP MEMORY STORE IF EXISTS %s", (yyvsp[(6) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(6) - (6)].strval));
        DropMemoryStoreProcess(1);
        free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 462:
#line 2196 "parser/evoparser.y"
    {
        emit("MEMORY PUT INTO %s", (yyvsp[(4) - (12)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (12)].strval));
        SetMemoryNs((yyvsp[(7) - (12)].strval));
        SetMemoryKey((yyvsp[(9) - (12)].strval));
        SetMemoryValue((yyvsp[(11) - (12)].strval));
        MemoryPutProcess();
        free((yyvsp[(4) - (12)].strval));
        if ((yyvsp[(7) - (12)].strval)) free((yyvsp[(7) - (12)].strval)); if ((yyvsp[(9) - (12)].strval)) free((yyvsp[(9) - (12)].strval)); if ((yyvsp[(11) - (12)].strval)) free((yyvsp[(11) - (12)].strval));
    ;}
    break;

  case 463:
#line 2208 "parser/evoparser.y"
    {
        emit("MEMORY PUT INTO %s w/embedding", (yyvsp[(4) - (14)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (14)].strval));
        SetMemoryNs((yyvsp[(7) - (14)].strval));
        SetMemoryKey((yyvsp[(9) - (14)].strval));
        SetMemoryValue((yyvsp[(11) - (14)].strval));
        SetMemoryEmbedding((yyvsp[(13) - (14)].strval));
        MemoryPutProcess();
        free((yyvsp[(4) - (14)].strval));
        if ((yyvsp[(7) - (14)].strval)) free((yyvsp[(7) - (14)].strval)); if ((yyvsp[(9) - (14)].strval)) free((yyvsp[(9) - (14)].strval)); if ((yyvsp[(11) - (14)].strval)) free((yyvsp[(11) - (14)].strval)); if ((yyvsp[(13) - (14)].strval)) free((yyvsp[(13) - (14)].strval));
    ;}
    break;

  case 464:
#line 2222 "parser/evoparser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 465:
#line 2223 "parser/evoparser.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 466:
#line 2229 "parser/evoparser.y"
    {
        emit("MEMORY GET FROM %s NS=%s KEY=%s", (yyvsp[(4) - (12)].strval), (yyvsp[(8) - (12)].strval), (yyvsp[(12) - (12)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (12)].strval));
        SetMemoryNs((yyvsp[(8) - (12)].strval));
        SetMemoryKey((yyvsp[(12) - (12)].strval));
        MemoryGetProcess();
        free((yyvsp[(4) - (12)].strval)); free((yyvsp[(8) - (12)].strval)); free((yyvsp[(12) - (12)].strval));
    ;}
    break;

  case 467:
#line 2243 "parser/evoparser.y"
    {
        emit("MEMORY SEARCH %s", (yyvsp[(3) - (6)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(3) - (6)].strval));
        SetMemoryQuery((yyvsp[(6) - (6)].strval));
        SetMemoryLimit(10);
        MemorySearchProcess();
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 468:
#line 2253 "parser/evoparser.y"
    {
        emit("MEMORY SEARCH %s LIMIT %d", (yyvsp[(3) - (8)].strval), (yyvsp[(8) - (8)].intval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(3) - (8)].strval));
        SetMemoryQuery((yyvsp[(6) - (8)].strval));
        SetMemoryLimit((yyvsp[(8) - (8)].intval));
        MemorySearchProcess();
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 469:
#line 2267 "parser/evoparser.y"
    {
        emit("MEMORY DELETE FROM %s NS=%s KEY=%s", (yyvsp[(4) - (12)].strval), (yyvsp[(8) - (12)].strval), (yyvsp[(12) - (12)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(4) - (12)].strval));
        SetMemoryNs((yyvsp[(8) - (12)].strval));
        SetMemoryKey((yyvsp[(12) - (12)].strval));
        MemoryDeleteProcess();
        free((yyvsp[(4) - (12)].strval)); free((yyvsp[(8) - (12)].strval)); free((yyvsp[(12) - (12)].strval));
    ;}
    break;

  case 470:
#line 2281 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s", (yyvsp[(5) - (5)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (5)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 471:
#line 2289 "parser/evoparser.y"
    {
        emit("MEMORY LIST NAMESPACES IN %s PREFIX %s", (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        ResetMemoryOpts();
        SetMemoryStoreName((yyvsp[(5) - (7)].strval));
        SetMemoryPrefix((yyvsp[(7) - (7)].strval));
        MemoryListNamespacesProcess();
        free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 472:
#line 2300 "parser/evoparser.y"
    {
        emit("LISTEN %s", (yyvsp[(2) - (2)].strval));
        SetListenChannel((yyvsp[(2) - (2)].strval), 0);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 473:
#line 2306 "parser/evoparser.y"
    {
        /* LISTEN channel SELF — opt-in for same-session delivery.
         * Simplified form (one keyword) instead of WITH (self = true),
         * sidesteps the '=' token conflict in the LISTEN context. */
        emit("LISTEN %s SELF", (yyvsp[(2) - (3)].strval));
        SetListenChannel((yyvsp[(2) - (3)].strval), 1);
        free((yyvsp[(2) - (3)].strval));
    ;}
    break;

  case 474:
#line 2317 "parser/evoparser.y"
    {
        emit("UNLISTEN %s", (yyvsp[(2) - (2)].strval));
        SetUnlistenChannel((yyvsp[(2) - (2)].strval));
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 475:
#line 2323 "parser/evoparser.y"
    {
        emit("UNLISTEN *");
        SetUnlistenAll();
    ;}
    break;

  case 476:
#line 2330 "parser/evoparser.y"
    {
        emit("NOTIFY %s", (yyvsp[(2) - (2)].strval));
        SetNotifyChannel((yyvsp[(2) - (2)].strval), NULL);
        free((yyvsp[(2) - (2)].strval));
    ;}
    break;

  case 477:
#line 2336 "parser/evoparser.y"
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

  case 478:
#line 2352 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 479:
#line 2359 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 480:
#line 2368 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 481:
#line 2376 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(2) - (4)].strval));
        GetDropTableName((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 482:
#line 2382 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%.255s.%.255s", (yyvsp[(2) - (6)].strval), (yyvsp[(4) - (6)].strval));
        GetDropTableName(full);
        free((yyvsp[(2) - (6)].strval)); free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 484:
#line 2399 "parser/evoparser.y"
    {
        SetAnalyzeSamplePct((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 485:
#line 2403 "parser/evoparser.y"
    {
        SetAnalyzeSampleRows((yyvsp[(3) - (4)].intval));
    ;}
    break;

  case 486:
#line 2412 "parser/evoparser.y"
    {
        ResetAnalyzeHist();
    ;}
    break;

  case 488:
#line 2427 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
    ;}
    break;

  case 489:
#line 2431 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(1);
        SetAnalyzeHistBuckets((yyvsp[(6) - (7)].intval));
    ;}
    break;

  case 490:
#line 2436 "parser/evoparser.y"
    {
        SetAnalyzeHistMode(2);
    ;}
    break;

  case 491:
#line 2443 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 492:
#line 2448 "parser/evoparser.y"
    {
        AddAnalyzeHistCol((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 493:
#line 2455 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 494:
#line 2459 "parser/evoparser.y"
    { emit("STMT"); CreatePolicyProcess(); ;}
    break;

  case 495:
#line 2460 "parser/evoparser.y"
    { emit("STMT"); DropPolicyProcess(); ;}
    break;

  case 496:
#line 2466 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetPolicyName((yyvsp[(3) - (10)].strval));
        SetPolicyTable((yyvsp[(5) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 497:
#line 2478 "parser/evoparser.y"
    {
        emit("CREATE POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetPolicyName((yyvsp[(3) - (12)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (12)].strval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 498:
#line 2487 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 499:
#line 2488 "parser/evoparser.y"
    { SetPolicyPermissive(1); ;}
    break;

  case 500:
#line 2489 "parser/evoparser.y"
    { SetPolicyPermissive(0); ;}
    break;

  case 501:
#line 2493 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 502:
#line 2494 "parser/evoparser.y"
    { SetPolicyCommand('*'); ;}
    break;

  case 503:
#line 2495 "parser/evoparser.y"
    { SetPolicyCommand('S'); ;}
    break;

  case 504:
#line 2496 "parser/evoparser.y"
    { SetPolicyCommand('I'); ;}
    break;

  case 505:
#line 2497 "parser/evoparser.y"
    { SetPolicyCommand('U'); ;}
    break;

  case 506:
#line 2498 "parser/evoparser.y"
    { SetPolicyCommand('D'); ;}
    break;

  case 509:
#line 2507 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 510:
#line 2508 "parser/evoparser.y"
    { AddPolicyRole((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 512:
#line 2513 "parser/evoparser.y"
    { SetPolicyUsing((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 514:
#line 2518 "parser/evoparser.y"
    { SetPolicyCheck((yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 515:
#line 2523 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        SetPolicyName((yyvsp[(3) - (5)].strval));
        SetPolicyTable((yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 516:
#line 2530 "parser/evoparser.y"
    {
        emit("DROP POLICY %s ON MEMORY STORE %s", (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].strval));
        SetPolicyName((yyvsp[(3) - (7)].strval));
        SetPolicyTableForMemoryStore((yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 517:
#line 2539 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 518:
#line 2545 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 519:
#line 2551 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 520:
#line 2558 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 521:
#line 2564 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 522:
#line 2571 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 523:
#line 2577 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 524:
#line 2583 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 525:
#line 2589 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 526:
#line 2595 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 527:
#line 2601 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 528:
#line 2607 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 529:
#line 2613 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 530:
#line 2619 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 531:
#line 2625 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 532:
#line 2631 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 533:
#line 2637 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 534:
#line 2643 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 535:
#line 2649 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 536:
#line 2655 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 537:
#line 2661 "parser/evoparser.y"
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

  case 538:
#line 2674 "parser/evoparser.y"
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

  case 539:
#line 2684 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(7) - (8)].strval), "LEVEL") != 0) {
            yyerror(scanner, "expected LEVEL after ROW in ENABLE ROW LEVEL SECURITY");
            free((yyvsp[(4) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); YYERROR;
        }
        emit("ALTER MEMORY STORE %s ENABLE RLS", (yyvsp[(4) - (8)].strval));
        AlterMemoryStoreToggleRLS((yyvsp[(4) - (8)].strval), 1);
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(7) - (8)].strval));
    ;}
    break;

  case 540:
#line 2694 "parser/evoparser.y"
    {
        if (strcasecmp((yyvsp[(7) - (8)].strval), "LEVEL") != 0) {
            yyerror(scanner, "expected LEVEL after ROW in DISABLE ROW LEVEL SECURITY");
            free((yyvsp[(4) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); YYERROR;
        }
        emit("ALTER MEMORY STORE %s DISABLE RLS", (yyvsp[(4) - (8)].strval));
        AlterMemoryStoreToggleRLS((yyvsp[(4) - (8)].strval), 0);
        free((yyvsp[(4) - (8)].strval)); free((yyvsp[(7) - (8)].strval));
    ;}
    break;

  case 541:
#line 2705 "parser/evoparser.y"
    { ;}
    break;

  case 542:
#line 2706 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 543:
#line 2707 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 544:
#line 2711 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 545:
#line 2719 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(4) - (10)].strval));
        GetInsertionTableName((yyvsp[(4) - (10)].strval));
        free((yyvsp[(4) - (10)].strval));
    ;}
    break;

  case 546:
#line 2725 "parser/evoparser.y"
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

  case 548:
#line 2738 "parser/evoparser.y"
    { SetUpsertMode(); ;}
    break;

  case 549:
#line 2738 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 552:
#line 2746 "parser/evoparser.y"
    { emit("CONFTARGET *"); ;}
    break;

  case 553:
#line 2747 "parser/evoparser.y"
    { emit("CONFTARGET %s", (yyvsp[(2) - (3)].strval)); SetOnConflictCol((yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 554:
#line 2748 "parser/evoparser.y"
    { yyerror(scanner, "composite ON CONFLICT target (a, b, ...) is not yet supported"); free((yyvsp[(2) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); YYERROR; ;}
    break;

  case 555:
#line 2752 "parser/evoparser.y"
    { emit("CONFACTION NOTHING"); SetOnConflictAction(EVO_CONFLICT_NOTHING); ;}
    break;

  case 556:
#line 2753 "parser/evoparser.y"
    { SetUpsertMode(); SetOnConflictAction(EVO_CONFLICT_UPDATE); ;}
    break;

  case 557:
#line 2754 "parser/evoparser.y"
    { emit("CONFACTION UPDATE %d", (yyvsp[(5) - (5)].intval)); SetOnDupKeyUpdate(); ;}
    break;

  case 558:
#line 2758 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(1) - (3)].strval));
        AddUpsertSet((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].exprval));
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 559:
#line 2766 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad upsert assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        emit("UPSERTSET %s", (yyvsp[(3) - (5)].strval));
        AddUpsertSet((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 560:
#line 2775 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 561:
#line 2776 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 562:
#line 2777 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 563:
#line 2778 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 564:
#line 2779 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 568:
#line 2786 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 569:
#line 2790 "parser/evoparser.y"
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

  case 570:
#line 2800 "parser/evoparser.y"
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

  case 571:
#line 2812 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 572:
#line 2813 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 573:
#line 2813 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 574:
#line 2816 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 575:
#line 2817 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 576:
#line 2818 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 577:
#line 2819 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 578:
#line 2823 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 579:
#line 2826 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 580:
#line 2827 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 581:
#line 2828 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 582:
#line 2829 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 583:
#line 2835 "parser/evoparser.y"
    { emit("STMT"); InsertProcess(); ;}
    break;

  case 584:
#line 2841 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); GetInsertionTableName((yyvsp[(4) - (8)].strval)); if (g_qctx) g_ins.rowCount = -2; /* REPLACE flag */ free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 585:
#line 2846 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 586:
#line 2851 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 587:
#line 2855 "parser/evoparser.y"
    { emit("STMT"); CopyProcess(); ;}
    break;

  case 588:
#line 2859 "parser/evoparser.y"
    { CopyBegin((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 589:
#line 2861 "parser/evoparser.y"
    { emit("COPY"); ;}
    break;

  case 592:
#line 2867 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 593:
#line 2868 "parser/evoparser.y"
    { CopyAddColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 594:
#line 2872 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_FROM); ;}
    break;

  case 595:
#line 2873 "parser/evoparser.y"
    { CopySetDirection(EVO_COPY_DIR_TO); ;}
    break;

  case 596:
#line 2877 "parser/evoparser.y"
    { CopySetSourcePath((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 597:
#line 2878 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDIN); ;}
    break;

  case 598:
#line 2879 "parser/evoparser.y"
    { CopySetSourceStream(EVO_COPY_SRC_STDOUT); ;}
    break;

  case 605:
#line 2894 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 606:
#line 2895 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_TEXT); ;}
    break;

  case 607:
#line 2896 "parser/evoparser.y"
    { CopySetDelimiter((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 608:
#line 2897 "parser/evoparser.y"
    { CopySetHeader(1); ;}
    break;

  case 609:
#line 2898 "parser/evoparser.y"
    { CopySetHeader((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 610:
#line 2899 "parser/evoparser.y"
    { CopySetNullStr((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 611:
#line 2900 "parser/evoparser.y"
    { CopySetQuote((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 612:
#line 2901 "parser/evoparser.y"
    { CopySetFormat(EVO_COPY_FMT_CSV); ;}
    break;

  case 613:
#line 2906 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 614:
#line 2915 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (9)].intval), (yyvsp[(3) - (9)].intval), (yyvsp[(5) - (9)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 615:
#line 2922 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 616:
#line 2923 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 617:
#line 2924 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 618:
#line 2929 "parser/evoparser.y"
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

  case 619:
#line 2940 "parser/evoparser.y"
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

  case 620:
#line 2952 "parser/evoparser.y"
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

  case 621:
#line 2963 "parser/evoparser.y"
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

  case 622:
#line 2978 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 623:
#line 2982 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 624:
#line 2986 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 625:
#line 2987 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 626:
#line 2992 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 627:
#line 2994 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 628:
#line 2996 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 629:
#line 2998 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 630:
#line 3001 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 631:
#line 3002 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 632:
#line 3008 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 633:
#line 3013 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 634:
#line 3015 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 635:
#line 3017 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 636:
#line 3019 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 637:
#line 3021 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 638:
#line 3025 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 639:
#line 3029 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 640:
#line 3030 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 641:
#line 3035 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 642:
#line 3045 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(7) - (10)].intval), (yyvsp[(5) - (10)].strval));
        g_create.isTemporary = (yyvsp[(2) - (10)].intval);
        GetTableName((yyvsp[(5) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 644:
#line 3058 "parser/evoparser.y"
    {
        emit("INHERITS %s", (yyvsp[(3) - (4)].strval));
        SetInheritParent((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 645:
#line 3066 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 646:
#line 3074 "parser/evoparser.y"
    {
        emit("PARTITION OF %s FOR VALUES FROM %d TO %d %s", (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval), (yyvsp[(5) - (18)].strval));
        CreatePartitionChild((yyvsp[(5) - (18)].strval), (yyvsp[(8) - (18)].strval), (yyvsp[(13) - (18)].intval), (yyvsp[(17) - (18)].intval));
        free((yyvsp[(5) - (18)].strval)); free((yyvsp[(8) - (18)].strval));
    ;}
    break;

  case 648:
#line 3082 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 649:
#line 3083 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 650:
#line 3084 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 651:
#line 3085 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 652:
#line 3087 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 653:
#line 3089 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 654:
#line 3091 "parser/evoparser.y"
    { emit("PARTITION BY RANGE %s", (yyvsp[(6) - (7)].strval)); SetPartitionByRange((yyvsp[(6) - (7)].strval)); free((yyvsp[(6) - (7)].strval)); ;}
    break;

  case 657:
#line 3099 "parser/evoparser.y"
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

  case 658:
#line 3114 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 659:
#line 3122 "parser/evoparser.y"
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

  case 660:
#line 3136 "parser/evoparser.y"
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

  case 661:
#line 3150 "parser/evoparser.y"
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

  case 662:
#line 3164 "parser/evoparser.y"
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

  case 663:
#line 3176 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 664:
#line 3177 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 665:
#line 3178 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 666:
#line 3181 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 667:
#line 3182 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 668:
#line 3185 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 669:
#line 3186 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 670:
#line 3187 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 671:
#line 3188 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 672:
#line 3189 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 673:
#line 3190 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 674:
#line 3191 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 675:
#line 3192 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 676:
#line 3194 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 677:
#line 3196 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 678:
#line 3198 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 679:
#line 3200 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 680:
#line 3202 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 681:
#line 3204 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 682:
#line 3207 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 683:
#line 3208 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 684:
#line 3211 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 685:
#line 3212 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 686:
#line 3215 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 687:
#line 3216 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 689:
#line 3220 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 690:
#line 3221 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 691:
#line 3222 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 692:
#line 3223 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 693:
#line 3224 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 694:
#line 3225 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 695:
#line 3226 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 696:
#line 3227 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 697:
#line 3228 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 698:
#line 3229 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 699:
#line 3230 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 700:
#line 3231 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 701:
#line 3232 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 702:
#line 3233 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 703:
#line 3234 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 704:
#line 3235 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 705:
#line 3236 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 706:
#line 3239 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 707:
#line 3240 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 708:
#line 3243 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 709:
#line 3245 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 710:
#line 3253 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 711:
#line 3254 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 713:
#line 3256 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 714:
#line 3257 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 715:
#line 3258 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 716:
#line 3259 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 717:
#line 3260 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 718:
#line 3261 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 719:
#line 3262 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 720:
#line 3263 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 721:
#line 3264 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 722:
#line 3271 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 723:
#line 3272 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 724:
#line 3273 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 725:
#line 3274 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 726:
#line 3275 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 727:
#line 3276 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 728:
#line 3277 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 729:
#line 3278 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 730:
#line 3279 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 731:
#line 3280 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 732:
#line 3281 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 733:
#line 3282 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 734:
#line 3283 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 735:
#line 3284 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 736:
#line 3285 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 737:
#line 3286 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 738:
#line 3287 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 739:
#line 3288 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 740:
#line 3289 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 741:
#line 3290 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 742:
#line 3291 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 743:
#line 3294 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 744:
#line 3295 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 745:
#line 3296 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 746:
#line 3299 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 747:
#line 3300 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 748:
#line 3303 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 749:
#line 3304 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 750:
#line 3305 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 752:
#line 3309 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 753:
#line 3310 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 754:
#line 3314 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 755:
#line 3315 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 756:
#line 3316 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 757:
#line 3317 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 758:
#line 3318 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 759:
#line 3319 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 760:
#line 3320 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 761:
#line 3321 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 762:
#line 3322 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 763:
#line 3323 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 764:
#line 3324 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 765:
#line 3325 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 766:
#line 3326 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 767:
#line 3327 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 768:
#line 3328 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 769:
#line 3329 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 770:
#line 3330 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 771:
#line 3331 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 772:
#line 3332 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 773:
#line 3333 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 774:
#line 3334 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 775:
#line 3335 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 776:
#line 3336 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 777:
#line 3337 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 778:
#line 3338 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 779:
#line 3339 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 780:
#line 3340 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 781:
#line 3341 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 782:
#line 3342 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 783:
#line 3343 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 784:
#line 3344 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 785:
#line 3345 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 786:
#line 3346 "parser/evoparser.y"
    { (yyval.intval) = 230000; ;}
    break;

  case 787:
#line 3347 "parser/evoparser.y"
    { (yyval.intval) = 260000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 788:
#line 3348 "parser/evoparser.y"
    { (yyval.intval) = 250000 + ((yyvsp[(1) - (3)].intval) / 10000); ;}
    break;

  case 789:
#line 3351 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 790:
#line 3352 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 791:
#line 3356 "parser/evoparser.y"
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

  case 792:
#line 3368 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 793:
#line 3369 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 794:
#line 3370 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 795:
#line 3374 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 796:
#line 3377 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 797:
#line 3378 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 801:
#line 3382 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 802:
#line 3383 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 803:
#line 3391 "parser/evoparser.y"
    { emit("STMT"); CreateProcedureProcess(); ;}
    break;

  case 804:
#line 3396 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (10)].strval));
        evo_set_proc_name((yyvsp[(3) - (10)].strval), 0);
        free((yyvsp[(3) - (10)].strval));
    ;}
    break;

  case 805:
#line 3402 "parser/evoparser.y"
    {
        emit("CREATEPROCEDURE %s", (yyvsp[(3) - (9)].strval));
        evo_set_proc_name((yyvsp[(3) - (9)].strval), 0);
        free((yyvsp[(3) - (9)].strval));
    ;}
    break;

  case 806:
#line 3408 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (12)].strval));
        evo_set_proc_name((yyvsp[(5) - (12)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (12)].strval));
    ;}
    break;

  case 807:
#line 3415 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEPROCEDURE %s", (yyvsp[(5) - (11)].strval));
        evo_set_proc_name((yyvsp[(5) - (11)].strval), 0);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (11)].strval));
    ;}
    break;

  case 808:
#line 3422 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (12)].strval));
        evo_set_proc_name((yyvsp[(3) - (12)].strval), 1);
        free((yyvsp[(3) - (12)].strval));
    ;}
    break;

  case 809:
#line 3428 "parser/evoparser.y"
    {
        emit("CREATEFUNCTION %s", (yyvsp[(3) - (11)].strval));
        evo_set_proc_name((yyvsp[(3) - (11)].strval), 1);
        free((yyvsp[(3) - (11)].strval));
    ;}
    break;

  case 810:
#line 3434 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (14)].strval));
        evo_set_proc_name((yyvsp[(5) - (14)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (14)].strval));
    ;}
    break;

  case 811:
#line 3441 "parser/evoparser.y"
    {
        emit("CREATEORREPLACEFUNCTION %s", (yyvsp[(5) - (13)].strval));
        evo_set_proc_name((yyvsp[(5) - (13)].strval), 1);
        evo_set_proc_replace(1);
        free((yyvsp[(5) - (13)].strval));
    ;}
    break;

  case 816:
#line 3457 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(1) - (2)].strval), "IN"); free((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 817:
#line 3458 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "IN"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 818:
#line 3459 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "OUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 819:
#line 3460 "parser/evoparser.y"
    { evo_add_proc_param((yyvsp[(2) - (3)].strval), "INOUT"); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 820:
#line 3463 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 821:
#line 3464 "parser/evoparser.y"
    { evo_set_proc_return_type("INT"); ;}
    break;

  case 822:
#line 3465 "parser/evoparser.y"
    { evo_set_proc_return_type("VARCHAR"); ;}
    break;

  case 823:
#line 3466 "parser/evoparser.y"
    { evo_set_proc_return_type("TEXT"); ;}
    break;

  case 824:
#line 3467 "parser/evoparser.y"
    { evo_set_proc_return_type("BOOLEAN"); ;}
    break;

  case 825:
#line 3468 "parser/evoparser.y"
    { evo_set_proc_return_type("FLOAT"); ;}
    break;

  case 826:
#line 3469 "parser/evoparser.y"
    { evo_set_proc_return_type("DOUBLE"); ;}
    break;

  case 827:
#line 3470 "parser/evoparser.y"
    { evo_set_proc_return_type("BIGINT"); ;}
    break;

  case 828:
#line 3471 "parser/evoparser.y"
    { evo_set_proc_return_type("DATE"); ;}
    break;

  case 829:
#line 3472 "parser/evoparser.y"
    { evo_set_proc_return_type("TIMESTAMP"); ;}
    break;

  case 838:
#line 3489 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 839:
#line 3490 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 960:
#line 3508 "parser/evoparser.y"
    { free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 961:
#line 3515 "parser/evoparser.y"
    { emit("STMT"); DropProcedureProcess(); ;}
    break;

  case 962:
#line 3520 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 963:
#line 3526 "parser/evoparser.y"
    {
        emit("DROPPROCEDURE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 964:
#line 3532 "parser/evoparser.y"
    {
        emit("DROPFUNCTION %s", (yyvsp[(3) - (3)].strval));
        evo_set_proc_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 965:
#line 3538 "parser/evoparser.y"
    {
        emit("DROPFUNCTION IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_proc_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 966:
#line 3549 "parser/evoparser.y"
    { emit("STMT"); CallProcedureProcess(); ;}
    break;

  case 967:
#line 3554 "parser/evoparser.y"
    {
        emit("CALL %s 0", (yyvsp[(2) - (4)].strval));
        evo_set_call_name((yyvsp[(2) - (4)].strval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 968:
#line 3560 "parser/evoparser.y"
    {
        emit("CALL %s", (yyvsp[(2) - (5)].strval));
        evo_set_call_name((yyvsp[(2) - (5)].strval));
        free((yyvsp[(2) - (5)].strval));
    ;}
    break;

  case 971:
#line 3571 "parser/evoparser.y"
    { char buf[32]; snprintf(buf,sizeof(buf),"%d",(yyvsp[(1) - (1)].intval)); evo_add_call_arg(buf); ;}
    break;

  case 972:
#line 3572 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 973:
#line 3573 "parser/evoparser.y"
    { char buf[64]; snprintf(buf,sizeof(buf),"%g",(yyvsp[(1) - (1)].floatval)); evo_add_call_arg(buf); ;}
    break;

  case 974:
#line 3574 "parser/evoparser.y"
    { evo_add_call_arg("NULL"); ;}
    break;

  case 975:
#line 3575 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].intval) ? "TRUE" : "FALSE"); ;}
    break;

  case 976:
#line 3576 "parser/evoparser.y"
    { evo_add_call_arg((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 977:
#line 3577 "parser/evoparser.y"
    { char buf[256]; snprintf(buf,sizeof(buf),"@%s",(yyvsp[(1) - (1)].strval)); evo_add_call_arg(buf); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 978:
#line 3584 "parser/evoparser.y"
    { emit("STMT"); CreateTriggerProcess(); ;}
    break;

  case 979:
#line 3589 "parser/evoparser.y"
    {
        emit("CREATETRIGGER %s ON %s", (yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        evo_set_trigger_info((yyvsp[(3) - (13)].strval), (yyvsp[(7) - (13)].strval));
        free((yyvsp[(3) - (13)].strval)); free((yyvsp[(7) - (13)].strval));
    ;}
    break;

  case 980:
#line 3596 "parser/evoparser.y"
    { evo_set_trigger_timing('B'); ;}
    break;

  case 981:
#line 3597 "parser/evoparser.y"
    { evo_set_trigger_timing('A'); ;}
    break;

  case 982:
#line 3600 "parser/evoparser.y"
    { evo_set_trigger_event('I'); ;}
    break;

  case 983:
#line 3601 "parser/evoparser.y"
    { evo_set_trigger_event('U'); ;}
    break;

  case 984:
#line 3602 "parser/evoparser.y"
    { evo_set_trigger_event('D'); ;}
    break;

  case 985:
#line 3605 "parser/evoparser.y"
    { emit("STMT"); DropTriggerProcess(); ;}
    break;

  case 986:
#line 3610 "parser/evoparser.y"
    {
        emit("DROPTRIGGER %s", (yyvsp[(3) - (3)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (3)].strval), 0);
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 987:
#line 3616 "parser/evoparser.y"
    {
        emit("DROPTRIGGER IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_set_trigger_drop((yyvsp[(5) - (5)].strval), 1);
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 988:
#line 3625 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s ENABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);  /* reuse dropName for trigger name */
        g_trig.event = 'E';  /* E=ENABLE */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 989:
#line 3633 "parser/evoparser.y"
    {
        emit("ALTERTRIGGER %s DISABLE", (yyvsp[(3) - (4)].strval));
        evo_set_trigger_drop((yyvsp[(3) - (4)].strval), 0);
        g_trig.event = 'D';  /* D=DISABLE (overloaded) */
        AlterTriggerProcess();
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 990:
#line 3643 "parser/evoparser.y"
    { emit("STMT"); evo_create_sequence_process(); ;}
    break;

  case 991:
#line 3648 "parser/evoparser.y"
    {
        emit("CREATESEQUENCE %d %s", (yyvsp[(3) - (5)].intval), (yyvsp[(4) - (5)].strval));
        evo_seq_set_name((yyvsp[(4) - (5)].strval));
        if ((yyvsp[(3) - (5)].intval)) evo_seq_set_if_not_exists();
        free((yyvsp[(4) - (5)].strval));
    ;}
    break;

  case 994:
#line 3661 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 995:
#line 3662 "parser/evoparser.y"
    { evo_seq_set_start((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 996:
#line 3663 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 997:
#line 3664 "parser/evoparser.y"
    { evo_seq_set_increment((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 998:
#line 3665 "parser/evoparser.y"
    { evo_seq_set_minvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 999:
#line 3666 "parser/evoparser.y"
    { evo_seq_set_maxvalue((yyvsp[(2) - (2)].intval)); ;}
    break;

  case 1000:
#line 3667 "parser/evoparser.y"
    { evo_seq_set_cycle(1); ;}
    break;

  case 1001:
#line 3668 "parser/evoparser.y"
    { evo_seq_set_cycle(0); ;}
    break;

  case 1002:
#line 3671 "parser/evoparser.y"
    { emit("STMT"); evo_drop_sequence_process(); ;}
    break;

  case 1003:
#line 3676 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE %s", (yyvsp[(3) - (3)].strval));
        evo_seq_set_name((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 1004:
#line 3682 "parser/evoparser.y"
    {
        emit("DROPSEQUENCE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        evo_seq_set_name((yyvsp[(5) - (5)].strval));
        evo_seq_set_if_exists();
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 1005:
#line 3692 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_alter_sequence_process();
    ;}
    break;

  case 1006:
#line 3699 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART %s", (yyvsp[(3) - (4)].strval));
        evo_seq_set_name((yyvsp[(3) - (4)].strval));
        free((yyvsp[(3) - (4)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1007:
#line 3706 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RESTART WITH %d %s", (yyvsp[(6) - (6)].intval), (yyvsp[(3) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_seq_set_start((yyvsp[(6) - (6)].intval));
        free((yyvsp[(3) - (6)].strval));
        evo_restart_sequence_process();
    ;}
    break;

  case 1008:
#line 3714 "parser/evoparser.y"
    {
        emit("ALTERSEQUENCE RENAME %s TO %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        evo_seq_set_name((yyvsp[(3) - (6)].strval));
        evo_rename_sequence_process((yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 1010:
#line 3724 "parser/evoparser.y"
    { SetReturningAll(); ;}
    break;

  case 1012:
#line 3728 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 1013:
#line 3729 "parser/evoparser.y"
    { AddReturningCol((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12267 "parser/evoparser.tab.c"
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


#line 3732 "parser/evoparser.y"

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
